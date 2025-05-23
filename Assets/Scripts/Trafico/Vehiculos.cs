﻿using Construcciones;
using System.Collections.Generic;
using UnityEngine;

public class Vehiculos : MonoBehaviour
{
    public Construir construir;

    public Vehiculo[] listaVehiculos;

    [HideInInspector]
    public List<Vehiculo> vehiculosGenerados = new List<Vehiculo>();

    private int contadorIdsVehiculos;

    private void Start()
    {
        contadorIdsVehiculos = 0;
    }

    public void GenerarVehiculo(List<Construccion> carreteras)
    {
        if (carreteras.Count > 0)
        {
            int azarCarretera = Random.Range(0, carreteras.Count);

            int rotacionAzar = Random.Range(0, 2);
            string direccion = null;
            Vector3 posicion = carreteras[azarCarretera].gameObject.transform.position;
            posicion.y = 0.51f;

            bool añadir = true;

            foreach (Vehiculo colisionVehiculo in vehiculosGenerados)
            {
                if (colisionVehiculo != null)
                {
                    if (colisionVehiculo.transform.position == posicion)
                    {
                        añadir = false;
                    }
                }
            }

            if (añadir == true)
            {
                if (carreteras[azarCarretera].rotacionColocacion == -270 || carreteras[azarCarretera].rotacionColocacion == -90)
                {
                    if (rotacionAzar == 0)
                    {
                        posicion.z = posicion.z - 0.15f;
                        direccion = "x+";
                    }
                    else if (rotacionAzar == 1)
                    {
                        posicion.z = posicion.z + 0.15f;
                        direccion = "x-";
                    }
                }
                else if (carreteras[azarCarretera].rotacionColocacion == -180 || carreteras[azarCarretera].rotacionColocacion == 0)
                {
                    if (rotacionAzar == 0)
                    {
                        posicion.x = posicion.x + 0.15f;
                        direccion = "z+";
                    }
                    else if (rotacionAzar == 1)
                    {
                        posicion.x = posicion.x - 0.15f;
                        direccion = "z-";
                    }
                }

                int vehiculoAzar = Random.Range(0, listaVehiculos.Length);

                Vehiculo vehiculo = Instantiate(listaVehiculos[vehiculoAzar], posicion, Quaternion.identity);
                vehiculo.direccion = direccion;
                vehiculo.id2 = contadorIdsVehiculos;

                contadorIdsVehiculos += 1;

                if (rotacionAzar == 0)
                {
                    vehiculo.transform.Rotate(Vector3.up, carreteras[azarCarretera].rotacionColocacion, Space.World);
                }
                else if (rotacionAzar == 1)
                {
                    vehiculo.transform.Rotate(Vector3.up, carreteras[azarCarretera].rotacionColocacion - 180, Space.World);
                }

                vehiculosGenerados.Add(vehiculo);
            }
        }
    }

    public void ArrancarPararVehiculos(int velocidad)
    {
        foreach (Vehiculo vehiculo in vehiculosGenerados)
        {
            if (velocidad == 0)
            {
                vehiculo.paradaTotal = true;
            }
            else
            {
                vehiculo.paradaTotal = false;
            }
        }
    }
}
