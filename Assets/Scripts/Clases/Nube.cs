using UnityEngine;

public class Nube : MonoBehaviour
{
    public int id;

    [HideInInspector]
    public int id2;

    [HideInInspector]
    public int direccion;

    [HideInInspector]
    public bool parada;

    private float velocidad = 0.04f;

    [HideInInspector]
    public int topeEscenario;

    private void Start()
    {

    }

    private void Update()
    {
        if (parada == false)
        {
            if (direccion == 0)
            {
                transform.position = new Vector3(transform.position.x + velocidad, transform.position.y, transform.position.z);
            }
            else if (direccion == 1)
            {
                transform.position = new Vector3(transform.position.x + velocidad, transform.position.y, transform.position.z + velocidad);
            }
            else if (direccion == 2)
            {
                transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z + velocidad);
            }
            else if (direccion == 3)
            {
                transform.position = new Vector3(transform.position.x - velocidad, transform.position.y, transform.position.z + velocidad);
            }
            else if (direccion == 4)
            {
                transform.position = new Vector3(transform.position.x + velocidad, transform.position.y, transform.position.z - velocidad);
            }
            else if (direccion == 5)
            {
                transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z - velocidad);
            }
            else if (direccion == 6)
            {
                transform.position = new Vector3(transform.position.x - velocidad, transform.position.y, transform.position.z);
            }
            else if (direccion == 7)
            {
                transform.position = new Vector3(transform.position.x - velocidad, transform.position.y, transform.position.z - velocidad);
            }
        }

        //if (transform.position.x <= (0 - 50) || transform.position.x >= (topeEscenario + 50))
        //{
        //    Destroy(gameObject);
        //}
        //else if (transform.position.z <= (0 - 50) || transform.position.z >= (topeEscenario + 50))
        //{
        //    Destroy(gameObject);
        //}
    }
}
