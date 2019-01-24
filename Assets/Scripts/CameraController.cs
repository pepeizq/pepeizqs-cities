using UnityEngine;

public class CameraController : MonoBehaviour
{
    private Vector3 ratonOrigenPunto;
    private Vector3 offset;
    private bool arrastrando;

    void Update()
    {
        int velocidad = 15;
       
        if (Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.D))
        {
            transform.Translate(new Vector3(velocidad * Time.deltaTime, 0, 0));
        }
        if (Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A))
        {
            transform.Translate(new Vector3(-velocidad * Time.deltaTime, 0, 0));
        }
        if (Input.GetKey(KeyCode.DownArrow) || Input.GetKey(KeyCode.S))
        {
            transform.Translate(new Vector3(0, -velocidad * Time.deltaTime, 0));
        }
        if (Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.W))
        {
            transform.Translate(new Vector3(0, velocidad * Time.deltaTime, 0));
        }
    }

    private void LateUpdate()
    {
        Camera.main.orthographicSize = Mathf.Clamp(Camera.main.orthographicSize -= Input.GetAxis("Mouse ScrollWheel") *
            (10f * Camera.main.orthographicSize * .1f), 2f, 15f);

        if (Input.GetMouseButton(2))
        {
            offset = (Camera.main.ScreenToWorldPoint(Input.mousePosition) - transform.position);

            if(arrastrando == false)
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
