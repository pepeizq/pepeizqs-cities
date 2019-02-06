using UnityEngine;

public class ColocarPrevio : MonoBehaviour
{
    private Construccion[,] edificiosPrevio = new Construccion[100, 100];

    public void AñadirConstruccion(Construccion edificio, Vector3 posicion, int rotacion)
    {
        QuitarTodosEdificios();

        foreach (Light luz in edificio.gameObject.GetComponentsInChildren<Light>())
        {
            luz.intensity = 0;
        }

        posicion.y = 1;
        edificiosPrevio[(int)posicion.x, (int)posicion.z] = Instantiate(edificio, posicion, Quaternion.identity);
        edificiosPrevio[(int)posicion.x, (int)posicion.z].transform.rotation = Quaternion.Euler(0, rotacion, 0);
 
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

    public Construccion ComprobarConstruccionesPosicion(Vector3 posicion)
    {
        if (((int)posicion.x > 0) && ((int)posicion.x <= 100) && ((int)posicion.z > 0) && ((int)posicion.z <= 100))
        {
            return edificiosPrevio[(int)posicion.x, (int)posicion.z];
        }
        else
        {
            return null;
        }
    }

    public void QuitarEdificio(Vector3 posicion)
    {
        Destroy(edificiosPrevio[(int)posicion.x, (int)posicion.z].gameObject);
        edificiosPrevio[(int)posicion.x, (int)posicion.z] = null;
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