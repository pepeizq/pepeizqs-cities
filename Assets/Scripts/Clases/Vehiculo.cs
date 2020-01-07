using System.Collections.Generic;
using UnityEngine;

public class Vehiculo : MonoBehaviour
{
    public int id;

    [HideInInspector]
    public int id2;

    public int categoria;

    private float velocidad = 0.02f;   
    private float contadorParado = 0.0f;

    [HideInInspector]
    public string direccion;

    [HideInInspector]
    public List<Construccion> carreteras = new List<Construccion>();

    private bool poderRotar;
    private float contadorRotar = 0.0f;

    private bool movimiento;

    [HideInInspector]
    public bool paradaTotal;

    [HideInInspector]
    public bool colisionSemaforoRojo;

    private bool colisionOtroVehiculo;

    private bool arrancar;

    private void Start()
    {
        poderRotar = true;
        movimiento = true;
        paradaTotal = false;
        colisionSemaforoRojo = false;
        colisionOtroVehiculo = false;
        arrancar = false;
    }

    private void Update()
    {
        bool parar = false;

        if (movimiento == false)
        {
            parar = true;
        }

        if (colisionOtroVehiculo == true)
        {
            parar = true;
        }

        if (colisionSemaforoRojo == true)
        {
            parar = true;
        }

        if (arrancar == true)
        {
            parar = false;
            arrancar = false;
        }

        if (paradaTotal == true)
        {
            parar = true;
        }

        if (parar == true)
        {
            if (paradaTotal == false)
            {
                contadorParado += Time.deltaTime;

                if (contadorParado > 5f)
                {
                    arrancar = true;
                }
            }
        }
        else
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

        //--------------------------------------------------

        if (poderRotar == false)
        {
            contadorRotar += Time.deltaTime;

            if (contadorRotar > 1.5f)
            {
                poderRotar = true;
                contadorRotar = 0.0f;
            }
        }

        //--------------------------------------------------

        if (enCarretera == false)
        {
            Destroy(gameObject);
        }

        //--------------------------------------------------

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

    private bool enCarretera;
    private Light luzRojaSemaforo;
    private Vehiculo otroVehiculo;

    private void OnTriggerEnter(Collider colision)
    {
        Construccion carretera = colision.gameObject.GetComponent<Construccion>();

        if (carretera != null)
        {
            if (carretera.categoria == 1)
            {
                enCarretera = true;
            }
        }           

        //------------------------------------

        if (poderRotar == true)
        {
            if (colision.gameObject.name.Contains("ColisionSemaforo"))
            {
                int girarAzar = Random.Range(0, 4);

                if (girarAzar == 0)
                {
                    if (colision.gameObject.name == "ColisionSemaforo1" || colision.gameObject.name == "ColisionSemaforo4")
                    {
                        Rotar1();
                    }                
                }
                else if (girarAzar == 1)
                {                  
                    if (colision.gameObject.name == "ColisionSemaforo2" || colision.gameObject.name == "ColisionSemaforo3" || colision.gameObject.name == "ColisionSemaforo5" || colision.gameObject.name == "ColisionSemaforo6")
                    {
                        Rotar2();
                    }
                }

                if (colision.gameObject.name == "ColisionSemaforo7")
                {
                    Rotar2();
                }
            }

            if (colision.gameObject.name == "ColisionCurva1")
            {
                Rotar1();
            }
            else if (colision.gameObject.name == "ColisionCurva2")
            {
                Rotar2();
            }
        }
        
        //------------------------------------

        luzRojaSemaforo = colision.gameObject.GetComponent<Light>();

        if (luzRojaSemaforo != null)
        {
            if (luzRojaSemaforo.intensity == 0f)
            {
                colisionSemaforoRojo = false;
            }
            else
            {
                colisionSemaforoRojo = true;
            }
        }

        //------------------------------------
     
        otroVehiculo = colision.gameObject.GetComponent<Vehiculo>();

        if (otroVehiculo != null)
        {
            colisionOtroVehiculo = true;
        }
    }

    private void OnTriggerStay(Collider colision)
    {
        Construccion carretera = colision.gameObject.GetComponent<Construccion>();

        if (carretera != null)
        {
            if (carretera.categoria == 1)
            {
                enCarretera = true;
            }
        }

        luzRojaSemaforo = colision.gameObject.GetComponent<Light>();

        if (luzRojaSemaforo != null)
        {
            if (luzRojaSemaforo.intensity == 0f)
            {
                colisionSemaforoRojo = false;
            }
            else
            {
                colisionSemaforoRojo = true;
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        Construccion carretera = other.gameObject.GetComponent<Construccion>();

        if (carretera != null)
        {
            if (carretera.categoria == 1)
            {
                enCarretera = false;
            }           
        }

        if (luzRojaSemaforo != null)
        {
            luzRojaSemaforo = null;
        }

        if (otroVehiculo != null)
        {
            colisionOtroVehiculo = false;
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
