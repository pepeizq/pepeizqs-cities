using UnityEngine;

public class Camara : MonoBehaviour
{
    public Canvas canvasJuego;

    private Vector3 ratonOrigenPunto;
    private Vector3 offset;
    private bool arrastrando;

    private int rotacion;

    private void Start()
    {
        rotacion = 0;
    }

    void Update()
    {
        if (canvasJuego.gameObject.GetComponent<CanvasGroup>().alpha == 1)
        {
            int velocidad = 15;
          
            if (Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.D))
            {
                Movimiento(velocidad * Time.deltaTime, 0);
            }
            else if (Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A))
            {
                Movimiento(-velocidad * Time.deltaTime, 0);
            }
            else if (Input.GetKey(KeyCode.DownArrow) || Input.GetKey(KeyCode.S))
            {
                Movimiento(0, -velocidad * Time.deltaTime);
            }
            else if (Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.W))
            {
                Movimiento(0, velocidad * Time.deltaTime);
            }

            if (Input.GetKeyDown(KeyCode.F1))
            {
                RotacionIzquierda();
            }
            else if (Input.GetKeyDown(KeyCode.F2))
            {
                RotacionDerecha();
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
                transform.Translate(new Vector3(-x * 2, -y * 2, 0));
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
                transform.Translate(new Vector3(-x * 2, -y * 2, 0));
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
                transform.Translate(new Vector3(-x * 2, -y * 2, 0));
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
                transform.Translate(new Vector3(-x * 2, -y * 2, 0));
            }
        }      
    }

    public void RotacionIzquierda()
    {
        Ray ray = Camera.main.ScreenPointToRay(new Vector2(Screen.width / 2, Screen.height / 2));
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit))
        {
            Vector3 posicion = hit.point;

            transform.RotateAround(posicion, Vector3.up, -90);
            rotacion -= 90;

            if (rotacion < -270)
            {
                rotacion = 0;
            }
        }
    }

    public void RotacionDerecha()
    {
        Ray ray = Camera.main.ScreenPointToRay(new Vector2(Screen.width / 2, Screen.height / 2));
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit))
        {
            Vector3 posicion = hit.point;

            transform.RotateAround(posicion, Vector3.up, 90);
            rotacion += 90;

            if (rotacion > 270)
            {
                rotacion = 0;
            }         
        }
    }

    private void LateUpdate()
    {
        if (canvasJuego.gameObject.GetComponent<CanvasGroup>().alpha == 1)
        {
            Camera.main.orthographicSize = Mathf.Clamp(Camera.main.orthographicSize -= Input.GetAxis("Mouse ScrollWheel") *
            (10f * Camera.main.orthographicSize * .1f), 2f, 15f);

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
