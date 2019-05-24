using System.Collections.Generic;
using UnityEngine;

public class Vehiculo : MonoBehaviour
{
    public int id;
    public int categoria;

    private float velocidad = 0.02f;
    private bool movimiento = true;
    private float contadorParado = 0.0f;

    [HideInInspector]
    public string direccion;

    [HideInInspector]
    public Construccion[,] edificios;

    private List<Construccion> carreteras = new List<Construccion>();

    private void Start()
    {
        movimiento = true;
        carreteras.Clear();

        foreach (Construccion subedificio in edificios)
        {
            if (subedificio != null)
            {
                if (subedificio.categoria == 1)
                {
                    carreteras.Add(subedificio);
                }              
            }
        }
    }

    private void Update()
    {
        if (movimiento == true)
        {
            if (direccion == "x+")
            {
                transform.position = new Vector3(transform.position.x + velocidad, transform.position.y, transform.position.z);
            }
            else if (direccion == "x-")
            {
                transform.position = new Vector3(transform.position.x - velocidad, transform.position.y, transform.position.z);
            }
            else if (direccion == "z+")
            {
                transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z + velocidad);
            }
            else if (direccion == "z-")
            {
                transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z - velocidad);
            }
        }
        else
        {
            contadorParado += Time.deltaTime;

            if (contadorParado > 1f)
            {
                //Destroy(gameObject);
            }
        }

        bool destruir = true;

        foreach (Construccion carretera in carreteras)
        {
            if (direccion == "x+")
            {
                if (carretera.id == 10 || carretera.id == 11)
                {
                    if ((int)transform.position.x + 1 == carretera.posicionX)
                    {
                        movimiento = false;
                    }
                }


                if ((transform.position.x >= carretera.posicionX) && (transform.position.x <= carretera.posicionX + 1) && (transform.position.z <= carretera.posicionZ) && (transform.position.z >= carretera.posicionZ - 1))
                {
                    destruir = false;
                    break;
                }
            }
            else if (direccion == "z+")
            {
                if ((transform.position.z >= carretera.posicionZ) && (transform.position.z <= carretera.posicionZ + 1) && (transform.position.x >= carretera.posicionX) && (transform.position.x <= carretera.posicionX + 1))
                {
                    destruir = false;
                    break;
                }
            }
            else if (direccion == "x-")
            {
                if ((transform.position.x <= carretera.posicionX) && (transform.position.x >= carretera.posicionX - 1) && (transform.position.z >= carretera.posicionZ) && (transform.position.z <= carretera.posicionZ + 1))
                {
                    destruir = false;
                    break;
                }
            }
            else if (direccion == "z-")
            {
                if ((transform.position.z <= carretera.posicionZ) && (transform.position.z >= carretera.posicionZ - 1) && (transform.position.x <= carretera.posicionX) && (transform.position.x >= carretera.posicionX - 1))
                {
                    destruir = false;
                    break;
                }
            }
        }

        if (destruir == true)
        {
            Destroy(gameObject);
        }
    }

    int destruirColision = 0;

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name.Contains("Coche"))
        {
            Vector3 direccion = (collision.gameObject.transform.position - transform.position).normalized;
            Ray ray = new Ray(transform.position, direccion);

            if (Physics.Raycast(ray, out RaycastHit rayGolpe))
            {
                if (rayGolpe.collider != null)
                {
                    Vector3 normal = rayGolpe.normal;
                    normal = rayGolpe.transform.TransformDirection(normal);

                    if (normal == rayGolpe.transform.forward)
                    {
                        movimiento = false;
                        //destruirColision += 1;
                    }
                    else if (normal == -rayGolpe.transform.forward)
                    {
                        movimiento = false;
                        //destruirColision += 1;
                    }
                    else if (normal == rayGolpe.transform.right)
                    {
                        movimiento = false;
                        destruirColision += 1;
                    }
                    else if (normal == -rayGolpe.transform.right)
                    {
                        movimiento = false;
                        destruirColision += 1;
                    }

                    if (destruirColision > 0)
                    {
                        Destroy(gameObject);

                        Vehiculo otroVehiculo = collision.gameObject.GetComponent<Vehiculo>();
                        otroVehiculo.movimiento = true;
                    }
                }
            }
        }
    }

    private void OnCollisionExit(Collision collision)
    {
        movimiento = true;
    }
}
