using System.Collections.Generic;
using UnityEngine;

public class Vehiculo : MonoBehaviour
{
    public int id;
    public int categoria;

    private float velocidad = 0.02f;

    [HideInInspector]
    public string direccion;

    [HideInInspector]
    public Construccion[,] edificios;

    private List<Construccion> carreteras = new List<Construccion>();

    private void Start()
    {
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
        bool mover = false;

        foreach (Construccion carretera in carreteras)
        {
            if (direccion == "x+")
            {
                if (((transform.position.x + velocidad) >= carretera.gameObject.transform.position.x) && ((transform.position.x + velocidad) <= carretera.gameObject.transform.position.x + 1))
                {
                    mover = true;
                }
            }
        }
        //Debug.Log(mover);
        if (mover == true)
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
            Destroy(gameObject);
        }
    }
}
