using UnityEngine;

public class ColocarPrevio : MonoBehaviour
{
    private Construccion[,] edificiosPrevio = new Construccion[100, 100];

    public Construccion edificioVacio;

    public void AñadirConstruccion(Construccion edificio, Vector3 posicion, int rotacion)
    {
        QuitarTodosEdificios();

        foreach (Light luz in edificio.gameObject.GetComponentsInChildren<Light>())
        {
            luz.intensity = 0;
        }

        if ((edificio.dimensiones.x == 2) && (edificio.dimensiones.y == 2) && (edificio.dimensiones.z == 2))
        {
            posicion.x = posicion.x + 0.5f;
            posicion.y = 1.5f;
            posicion.z = posicion.z + 0.5f;
            edificio.gameObject.transform.localScale = new Vector3(2f, 2f, 2f);
        }
        else
        {
            posicion.y = 1;
        }

        Construccion edificioFinal = Instantiate(edificio, posicion, Quaternion.identity);
        edificioFinal.transform.Rotate(Vector3.up, rotacion, Space.World);

        edificiosPrevio[(int)posicion.x, (int)posicion.z] = edificioFinal;

        if ((edificio.dimensiones.x == 2) && (edificio.dimensiones.y == 2) && (edificio.dimensiones.z == 2))
        {
            edificiosPrevio[(int)posicion.x + 1, (int)posicion.z] = Instantiate(edificioVacio);
            edificiosPrevio[(int)posicion.x, (int)posicion.z + 1] = Instantiate(edificioVacio);
            edificiosPrevio[(int)posicion.x + 1, (int)posicion.z + 1] = Instantiate(edificioVacio);
        }

        //---------------------------------

        Material[] materiales = edificiosPrevio[(int)posicion.x, (int)posicion.z].gameObject.GetComponent<MeshRenderer>().materials;

        materiales[0].SetFloat("_Mode", 3);
        materiales[0].SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
        materiales[0].SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
        materiales[0].SetInt("_ZWrite", 0);
        materiales[0].DisableKeyword("_ALPHATEST_ON");
        materiales[0].DisableKeyword("_ALPHABLEND_ON");
        materiales[0].EnableKeyword("_ALPHAPREMULTIPLY_ON");
        materiales[0].renderQueue = 3000;
        materiales[0].color = new Color(1.0f, 1.0f, 1.0f, 0.5f);

        edificiosPrevio[(int)posicion.x, (int)posicion.z].gameObject.GetComponent<MeshRenderer>().materials = materiales;
    }

    public Construccion ComprobarConstruccionesPosicion(Construccion edificio, Vector3 posicion)
    {
        if (((int)posicion.x > 0) && ((int)posicion.x <= 100) && ((int)posicion.z > 0) && ((int)posicion.z <= 100))
        {
            if ((edificio.dimensiones.x == 2) && (edificio.dimensiones.y == 2) && (edificio.dimensiones.z == 2))
            {
                if (edificiosPrevio[(int)posicion.x, (int)posicion.z] != null)
                {
                    return edificiosPrevio[(int)posicion.x, (int)posicion.z];
                }

                if (edificiosPrevio[(int)posicion.x + 1, (int)posicion.z] != null)
                {
                    return edificiosPrevio[(int)posicion.x + 1, (int)posicion.z];
                }

                if (edificiosPrevio[(int)posicion.x, (int)posicion.z + 1] != null)
                {
                    return edificiosPrevio[(int)posicion.x, (int)posicion.z + 1];
                }

                if (edificiosPrevio[(int)posicion.x + 1, (int)posicion.z + 1] != null)
                {
                    return edificiosPrevio[(int)posicion.x + 1, (int)posicion.z + 1];
                }

                return null;
            }
            else
            {
                return edificiosPrevio[(int)posicion.x, (int)posicion.z];
            }               
        }
        else
        {
            return null;
        }
    }

    public void QuitarEdificio(Construccion edificio, Vector3 posicion)
    {
        if ((edificio.dimensiones.x == 2) && (edificio.dimensiones.y == 2) && (edificio.dimensiones.z == 2))
        {
            if (edificiosPrevio[(int)posicion.x, (int)posicion.z] != null)
            {
                Destroy(edificiosPrevio[(int)posicion.x, (int)posicion.z].gameObject);
                edificiosPrevio[(int)posicion.x, (int)posicion.z] = null;
            }

            if (edificiosPrevio[(int)posicion.x + 1, (int)posicion.z] != null)
            {
                Destroy(edificiosPrevio[(int)posicion.x + 1, (int)posicion.z].gameObject);
                edificiosPrevio[(int)posicion.x + 1, (int)posicion.z] = null;
            }

            if (edificiosPrevio[(int)posicion.x, (int)posicion.z + 1] != null)
            {
                Destroy(edificiosPrevio[(int)posicion.x, (int)posicion.z + 1].gameObject);
                edificiosPrevio[(int)posicion.x, (int)posicion.z + 1] = null;
            }

            if (edificiosPrevio[(int)posicion.x + 1, (int)posicion.z + 1] != null)
            {
                Destroy(edificiosPrevio[(int)posicion.x + 1, (int)posicion.z + 1].gameObject);
                edificiosPrevio[(int)posicion.x + 1, (int)posicion.z + 1] = null;
            }
        }
        else
        {
            Destroy(edificiosPrevio[(int)posicion.x, (int)posicion.z].gameObject);
            edificiosPrevio[(int)posicion.x, (int)posicion.z] = null;
        }
         
        QuitarTodosEdificios();
    }

    public void QuitarTodosEdificios()
    {
        foreach (Construccion subedificio in edificiosPrevio)
        {
            if (subedificio != null)
            {
                Destroy(subedificio.gameObject);
            }
        }
    }
}