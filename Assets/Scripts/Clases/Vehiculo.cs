using System.Collections.Generic;
using UnityEngine;

public class Vehiculo : MonoBehaviour
{
    public int id;
    public int categoria;

    private float velocidad = 0.02f;
    private bool movimiento;
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

            if (contadorParado > 10f)
            {
                //Destroy(gameObject);
            }
        }

        bool destruir = true;

        foreach (Construccion carretera in carreteras)
        {
            if (direccion == "x+")
            {
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

        if (luzRojaSemaforo != null)
        {
            if (luzRojaSemaforo.intensity == 0f)
            {
                movimiento = true;
            }
            else
            {
                movimiento = false;
            }
        }
    }

    private Construccion carretera;
    private Light luzRojaSemaforo;
    private Vehiculo otroVehiculo;

    private void OnTriggerEnter(Collider other)
    {
        carretera = other.gameObject.GetComponent<Construccion>();

        if (carretera != null)
        {
            Debug.Log(carretera.id);
        }

        luzRojaSemaforo = other.gameObject.GetComponent<Light>();

        if (luzRojaSemaforo != null)
        {
            if (luzRojaSemaforo.intensity == 0f)
            {
                movimiento = true;
            }
            else
            {
                movimiento = false;
            }
        }

        otroVehiculo = other.gameObject.GetComponent<Vehiculo>();

        if (otroVehiculo != null)
        {
            Destroy(otroVehiculo.gameObject);
        }
    }

    private void OnTriggerStay(Collider other)
    {

    }

    private void OnTriggerExit(Collider other)
    {
        if (carretera != null)
        {
            carretera = null;
        }

        if (luzRojaSemaforo != null)
        {
            luzRojaSemaforo = null;
        }

        if (otroVehiculo != null)
        {
            otroVehiculo = null;
        }
    }
}
