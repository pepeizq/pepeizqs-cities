using UnityEngine;

public class Camara : MonoBehaviour
{
    public Canvas canvasJuego;

    private Vector3 ratonOrigenPunto;
    private Vector3 offset;
    private bool arrastrando;

    void Update()
    {
        if (canvasJuego.gameObject.GetComponent<CanvasGroup>().alpha == 1)
        {
            int velocidad = 15;

            if (Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.D))
            {
                transform.Translate(new Vector3(velocidad * Time.deltaTime, 0, 0));
            }
            else if (Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A))
            {
                transform.Translate(new Vector3(-velocidad * Time.deltaTime, 0, 0));
            }
            else if (Input.GetKey(KeyCode.DownArrow) || Input.GetKey(KeyCode.S))
            {
                transform.Translate(new Vector3(0, -velocidad * Time.deltaTime, 0));
            }
            else if (Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.W))
            {
                transform.Translate(new Vector3(0, velocidad * Time.deltaTime, 0));
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

    public void RotacionIzquierda()
    {
        Ray ray = Camera.main.ScreenPointToRay(new Vector2(Screen.width / 2, Screen.height / 2));
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit))
        {
            Vector3 posicion = hit.point;

            transform.RotateAround(posicion, Vector3.up, -90);
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
                transform.position = ratonOrigenPunto - offset;
            }
        }       
    }
}
