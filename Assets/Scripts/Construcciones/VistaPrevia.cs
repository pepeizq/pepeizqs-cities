using UnityEngine;

namespace Construcciones
{
    public class VistaPrevia : MonoBehaviour
    {
        private Construccion[,] edificiosPrevio = new Construccion[100, 100];

        public Colisiones colisiones;

        public void AñadirConstruccion(Construccion edificio, Vector3 posicion)
        {
            foreach (Light luz in edificio.gameObject.GetComponentsInChildren<Light>())
            {
                luz.intensity = 0;
            }

            edificio.GetComponent<Renderer>().receiveShadows = false;
            edificio.GetComponent<Renderer>().shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;

            posicion = Posicion.Edificio(edificio, posicion);

            Construccion edificioVistaPrevia = Instantiate(edificio, posicion, Quaternion.identity);
            edificioVistaPrevia.transform.Rotate(Vector3.up, edificio.rotacionAdicional + edificio.rotacionColocacion, Space.World);

            edificiosPrevio[(int)posicion.x, (int)posicion.z] = edificioVistaPrevia;
            colisiones.Añadir(edificiosPrevio, edificio, posicion);

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

            materiales[0].DisableKeyword("_EMISSION");
            materiales[0].globalIlluminationFlags = MaterialGlobalIlluminationFlags.EmissiveIsBlack;

            edificiosPrevio[(int)posicion.x, (int)posicion.z].gameObject.GetComponent<MeshRenderer>().materials = materiales;
        }

        public Construccion ComprobarPosicion(Construccion edificio, Vector3 posicion)
        {
            return colisiones.Detectar(edificiosPrevio, edificio, posicion);
        }

        public void QuitarEdificio(Construccion edificio, Vector3 posicion)
        {
            edificiosPrevio = Funciones.QuitarEdificios(edificiosPrevio, edificio, posicion);

            QuitarTodosEdificios();
        }

        public void QuitarTodosEdificios()
        {
            for (int x = 0; x < edificiosPrevio.GetLength(0); x++)
            {
                for (int z = 0; z < edificiosPrevio.GetLength(1); z++)
                {
                    if (edificiosPrevio[x, z] != null)
                    {
                        Destroy(edificiosPrevio[x, z].gameObject);
                        edificiosPrevio[x, z] = null;
                    }
                }
            }
        }
    }
}
