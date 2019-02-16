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

        posicion = ColocarFunciones.PosicionEdificio(edificio, posicion, rotacion);

        Construccion edificioFinal = Instantiate(edificio, posicion, Quaternion.identity);
        edificioFinal.transform.Rotate(Vector3.up, rotacion, Space.World);

        edificiosPrevio[(int)posicion.x, (int)posicion.z] = edificioFinal;

        edificiosPrevio = ColocarFunciones.RellenarEdificioVacio(edificiosPrevio, edificio, posicion, rotacion, edificioVacio);

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

    public Construccion ComprobarConstruccionesPosicion(Construccion edificio, Vector3 posicion, int rotacion)
    {
        return ColocarFunciones.ComprobarPosicion(edificiosPrevio, edificio, posicion, rotacion);       
    }

    public void QuitarEdificio(Construccion edificio, Vector3 posicion, int rotacion)
    {
        edificiosPrevio = ColocarFunciones.QuitarEdificios(edificiosPrevio, edificio, posicion, rotacion);
         
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