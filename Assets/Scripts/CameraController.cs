using UnityEngine;

public class CameraController : MonoBehaviour
{
    private Vector3 ratonOrigenPunto;
    private Vector3 offset;
    private bool arrastrando;

    private void LateUpdate()
    {
        Camera.main.orthographicSize = Mathf.Clamp(Camera.main.orthographicSize -= Input.GetAxis("Mouse ScrollWheel") *
            (10f * Camera.main.orthographicSize * .1f), 2f, 15f);

        if (Input.GetMouseButton (2))
        {
            offset = (Camera.main.ScreenToWorldPoint(Input.mousePosition) - transform.position);

            if(!arrastrando)
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
