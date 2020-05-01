using System.Collections;
using UnityEngine;

public class Camara : MonoBehaviour
{
    public Juego juego;

    [HideInInspector]
    public KeyCode teclaMovimientoIzquierda;

    [HideInInspector]
    public KeyCode teclaMovimientoArriba;

    [HideInInspector]
    public KeyCode teclaMovimientoDerecha;

    [HideInInspector]
    public KeyCode teclaMovimientoAbajo;

    [HideInInspector]
    public KeyCode teclaRotacionIzquierda;

    [HideInInspector]
    public KeyCode teclaRotacionDerecha;

    private Vector3 ratonOrigenPunto;
    private Vector3 offset;

    private bool arrastrando;
    private bool rotando;

    private int rotacion;

    public Interfaz.Opciones2.Sonido sonido;

    private void Start()
    {
        rotacion = 0;
    }

    void Update()
    {
        if (juego.canvas.gameObject.GetComponent<CanvasGroup>().alpha == 1 || juego.ocultarEnseñarInterfaz == true)
        {
            int velocidad = 15;

            if (rotando == false)
            {
                if (arrastrando == false)
                {
                    if (Input.GetKey(teclaMovimientoDerecha))
                    {
                        Movimiento(velocidad * Time.deltaTime, 0);
                    }
                    else if (Input.GetKey(teclaMovimientoIzquierda))
                    {
                        Movimiento(-velocidad * Time.deltaTime, 0);
                    }
                    else if (Input.GetKey(teclaMovimientoAbajo))
                    {
                        Movimiento(0, -velocidad * Time.deltaTime);
                    }
                    else if (Input.GetKey(teclaMovimientoArriba))
                    {
                        Movimiento(0, velocidad * Time.deltaTime);
                    }

                    if (Input.GetKeyDown(teclaRotacionIzquierda))
                    {
                        RotacionIzquierda(false);
                    }
                    else if (Input.GetKeyDown(teclaRotacionDerecha))
                    {
                        RotacionDerecha(false);
                    }
                }
            }          
        }
    }

    private void Movimiento(float x, float y)
    {
        Transform posicionFinal = transform;

        if (rotacion == 0)
        {
            if ((posicionFinal.position.x > -40) && (posicionFinal.position.z > -40) && (posicionFinal.position.x < 60) && (posicionFinal.position.z < 60))
            {
                transform.Translate(new Vector3(x, y, 0));
            }
            else
            {
                transform.Translate(new Vector3(-x * 20, -y * 20, 0));
            }
        }
        else if ((rotacion == 90) || (rotacion == -270))
        {
            if ((posicionFinal.position.x > -40) && (posicionFinal.position.z > 40) && (posicionFinal.position.x < 60) && (posicionFinal.position.z < 135))
            {
                transform.Translate(new Vector3(x, y, 0));
            }
            else
            {
                transform.Translate(new Vector3(-x * 20, -y * 20, 0));
            }
        }
        else if ((rotacion == 180) || (rotacion == -180))
        {
            if ((posicionFinal.position.x > 40) && (posicionFinal.position.z > 40) && (posicionFinal.position.x < 135) && (posicionFinal.position.z < 135))
            {
                transform.Translate(new Vector3(x, y, 0));
            }
            else
            {
                transform.Translate(new Vector3(-x * 20, -y * 20, 0));
            }
        }
        else if ((rotacion == 270) || (rotacion == -90))
        {
            if ((posicionFinal.position.x > 40) && (posicionFinal.position.z > -40) && (posicionFinal.position.x < 140) && (posicionFinal.position.z < 60))
            {
                transform.Translate(new Vector3(x, y, 0));
            }
            else
            {
                transform.Translate(new Vector3(-x * 20, -y * 20, 0));
            }
        }      
    }

    public void RotacionIzquierda(bool sonidob)
    {
        if (sonidob == true)
        {
            sonido.RatonClick();
        }

        Ray ray = Camera.main.ScreenPointToRay(new Vector2(Screen.width / 2, Screen.height / 2));
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit))
        {
            Vector3 posicion = hit.point;

            StartCoroutine(Rotar(posicion, -2));
            rotacion -= 90;

            if (rotacion < -270)
            {
                rotacion = 0;
            }
        }
    }

    public void RotacionDerecha(bool sonidob)
    {
        if (sonidob == true)
        {
            sonido.RatonClick();
        }

        Ray ray = Camera.main.ScreenPointToRay(new Vector2(Screen.width / 2, Screen.height / 2));
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit))
        {
            Vector3 posicion = hit.point;

            StartCoroutine(Rotar(posicion, 2));
            rotacion += 90;

            if (rotacion > 270)
            {
                rotacion = 0;
            }         
        }
    }

    private IEnumerator Rotar(Vector3 posicion, int cantidad)
    {
        rotando = true;
        for (float t = 0; t < 45; t += 1)
        {
            transform.RotateAround(posicion, Vector3.up, cantidad);
            yield return null;
        }
        rotando = false;
    }

    private void LateUpdate()
    {
        if (juego.canvas.gameObject.GetComponent<CanvasGroup>().alpha == 1 || juego.ocultarEnseñarInterfaz == true)
        {
            if (rotando == false)
            {
                Camera.main.orthographicSize = Mathf.Clamp(Camera.main.orthographicSize -= Input.GetAxis("Mouse ScrollWheel") *
                    (10f * Camera.main.orthographicSize * .1f), 2f, 25f);

                if (Input.GetMouseButton(2))
                {
                    offset = (Camera.main.ScreenToWorldPoint(Input.mousePosition) - transform.position);

                    if (arrastrando == false)
                    {
                        arrastrando = true;
                        ratonOrigenPunto = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                    }
                }
                else
                {
                    arrastrando = false;
                }
            }
           
            if (arrastrando == true)
            {
                Vector3 posicionFinal = ratonOrigenPunto - offset;
          
                if (rotacion == 0)
                {
                    if ((posicionFinal.x > -40) && (posicionFinal.z > -40) && (posicionFinal.x < 60) && (posicionFinal.z < 60))
                    {
                        transform.position = new Vector3(posicionFinal.x, 60, posicionFinal.z);
                    }              
                }
                else if ((rotacion == 90) || (rotacion == -270))
                {
                    if ((posicionFinal.x > -40) && (posicionFinal.z > 40) && (posicionFinal.x < 60) && (posicionFinal.z < 135))
                    {
                        transform.position = new Vector3(posicionFinal.x, 60, posicionFinal.z);
                    }
                }
                else if ((rotacion == 180) || (rotacion == -180))
                {
                    if ((posicionFinal.x > 40) && (posicionFinal.z > 40) && (posicionFinal.x < 135) && (posicionFinal.z < 135))
                    {
                        transform.position = new Vector3(posicionFinal.x, 60, posicionFinal.z);
                    }
                }
                else if ((rotacion == 270) || (rotacion == -90))
                {
                    if ((posicionFinal.x > 40) && (posicionFinal.z > -40) && (posicionFinal.x < 140) && (posicionFinal.z < 60))
                    {
                        transform.position = new Vector3(posicionFinal.x, 60, posicionFinal.z);
                    }
                }
            }
        }       
    }
}
