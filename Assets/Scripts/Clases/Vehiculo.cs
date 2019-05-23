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
                Destroy(gameObject);
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
                if ((transform.position.x <= carretera.posicionX) && (transform.position.x >= carretera.posicionX - 1) && (transform.position.z <= carretera.posicionZ) && (transform.position.z >= carretera.posicionZ + 1))
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

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name.Contains("Coche"))
        {
            movimiento = false;
        }
    }

    private void OnCollisionExit(Collision collision)
    {
        movimiento = true;
    }
}
