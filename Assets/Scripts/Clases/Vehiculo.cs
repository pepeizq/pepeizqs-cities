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
    private bool poderRotar;
    private float contadorRotar = 0.0f;
    private bool enCarretera;

    private void Start()
    {
        movimiento = true;
        poderRotar = true;
        enCarretera = true;

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

        if (poderRotar == false)
        {
            contadorRotar += Time.deltaTime;

            if (contadorRotar > 1.5f)
            {
                poderRotar = true;
                contadorRotar = 0.0f;
            }
        }

        if (enCarretera == false)
        {
            //Destroy(gameObject);
        }

        //bool destruir = true;

        //foreach (Construccion carretera in carreteras)
        //{
        //    if (direccion == "x+")
        //    {
        //        if ((transform.position.x >= carretera.posicionX) && (transform.position.x <= carretera.posicionX + 1) && (transform.position.z <= carretera.posicionZ) && (transform.position.z >= carretera.posicionZ - 1))
        //        {
        //            destruir = false;
        //            break;
        //        }
        //    }
        //    else if (direccion == "z+")
        //    {
        //        if ((transform.position.z >= carretera.posicionZ) && (transform.position.z <= carretera.posicionZ + 1) && (transform.position.x >= carretera.posicionX) && (transform.position.x <= carretera.posicionX + 1))
        //        {
        //            destruir = false;
        //            break;
        //        }
        //    }
        //    else if (direccion == "x-")
        //    {
        //        if ((transform.position.x <= carretera.posicionX) && (transform.position.x >= carretera.posicionX - 1) && (transform.position.z >= carretera.posicionZ) && (transform.position.z <= carretera.posicionZ + 1))
        //        {
        //            destruir = false;
        //            break;
        //        }
        //    }
        //    else if (direccion == "z-")
        //    {
        //        if ((transform.position.z <= carretera.posicionZ) && (transform.position.z >= carretera.posicionZ - 1) && (transform.position.x <= carretera.posicionX) && (transform.position.x >= carretera.posicionX - 1))
        //        {
        //            destruir = false;
        //            break;
        //        }
        //    }
        //}

        //if (destruir == true)
        //{
        //    Destroy(gameObject);
        //}

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
    private bool otroVehiculoParado;

    private void OnTriggerEnter(Collider other)
    {
        carretera = other.gameObject.GetComponent<Construccion>();

        if (carretera != null)
        {
            if (carretera.categoria == 1)
            {
                enCarretera = true;
            }
        }

        if (poderRotar == true)
        {
            if (other.gameObject.name.Contains("ColisionSemaforo"))
            {
                int girarAzar = Random.Range(0, 4);
          
                if (other.gameObject.name == "ColisionSemaforo1" || other.gameObject.name == "ColisionSemaforo4")
                {
                    if (girarAzar == 0)
                    {
                        Rotar1();
                    }              
                }
                else if (other.gameObject.name == "ColisionSemaforo2" || other.gameObject.name == "ColisionSemaforo3" || other.gameObject.name == "ColisionSemaforo5" || other.gameObject.name == "ColisionSemaforo6")
                {
                    if (girarAzar == 1)
                    {
                        Rotar2();
                    }
                }
                else if (other.gameObject.name == "ColisionSemaforo7")
                {
                    Rotar2();
                }
            }

            if (other.gameObject.name == "ColisionCurva1")
            {
                Rotar1();
            }
            else if (other.gameObject.name == "ColisionCurva2")
            {
                Rotar2();
            }
        }
        
        //------------------------------------

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

        //------------------------------------

        if (other.gameObject.name.Contains("ParteTrasera"))
        {
            if (otroVehiculoParado == true)
            {
                movimiento = false;
            }         
        }

      

        otroVehiculo = other.gameObject.GetComponent<Vehiculo>();

        if (otroVehiculo != null)
        {
            if (otroVehiculo.movimiento == false)
            {
                otroVehiculoParado = true;
            }

            //Destroy(otroVehiculo.gameObject);
            //if (otroVehiculo.movimiento == true)
            //{
            //    if (movimiento == true)
            //    {

            //    }               
            //}          
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
            enCarretera = false;
        }

        if (luzRojaSemaforo != null)
        {
            luzRojaSemaforo = null;
        }

        if (otroVehiculo != null)
        {
            otroVehiculo = other.gameObject.GetComponent<Vehiculo>();

            if (otroVehiculo != null)
            {
                if (otroVehiculo.movimiento == false)
                {
                    if (other.gameObject.name.Contains("ParteTrasera"))
                    {
                        otroVehiculo.movimiento = true;
                    }
                }
            }

            otroVehiculo = null;
        }
    }

    private void Rotar1()
    {
        if (direccion == "x+")
        {
            transform.Rotate(Vector3.up, 90, Space.World);
            transform.position = new Vector3(transform.position.x + (velocidad * 2), transform.position.y, transform.position.z);
            direccion = "z-";
            poderRotar = false;
        }
        else if (direccion == "x-")
        {
            transform.Rotate(Vector3.up, 90, Space.World);
            transform.position = new Vector3(transform.position.x - (velocidad * 2), transform.position.y, transform.position.z);
            direccion = "z+";
            poderRotar = false;
        }
        else if (direccion == "z+")
        {
            transform.Rotate(Vector3.up, 90, Space.World);
            transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z + (velocidad * 2));
            direccion = "x+";
            poderRotar = false;
        }
        else if (direccion == "z-")
        {
            transform.Rotate(Vector3.up, 90, Space.World);
            transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z - (velocidad * 2));
            direccion = "x-";
            poderRotar = false;
        }
    }

    private void Rotar2()
    {
        if (direccion == "x+")
        {
            transform.Rotate(Vector3.up, 270, Space.World);
            transform.position = new Vector3(transform.position.x + (velocidad * 2), transform.position.y, transform.position.z);
            direccion = "z+";
            poderRotar = false;
        }
        else if (direccion == "x-")
        {
            transform.Rotate(Vector3.up, 270, Space.World);
            transform.position = new Vector3(transform.position.x - (velocidad * 2), transform.position.y, transform.position.z);
            direccion = "z-";
            poderRotar = false;
        }
        else if (direccion == "z+")
        {
            transform.Rotate(Vector3.up, 270, Space.World);
            transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z + (velocidad * 2));
            direccion = "x-";
            poderRotar = false;
        }
        else if (direccion == "z-")
        {
            transform.Rotate(Vector3.up, 270, Space.World);
            transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z - (velocidad * 2));
            direccion = "x+";
            poderRotar = false;
        }
    }
}
