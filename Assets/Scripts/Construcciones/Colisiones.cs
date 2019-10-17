using UnityEngine;

namespace Construcciones
{
    public class Colisiones : MonoBehaviour
    {
        public Construccion edificioVacio;

        public void Añadir(Construccion[,] edificios, Construccion edificio, Vector3 posicion)
        {
            posicion.y = 1.5f;

            if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 1)
            {
                if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
                {
                    posicion.x = posicion.x + 0.5f;
                }
                else
                {
                    posicion.z = posicion.z + 0.5f;
                }

                edificios[(int)posicion.x, (int)posicion.z] = Instantiate(edificioVacio, posicion, Quaternion.identity);
            }

            if (edificio.dimensiones.x == 1 && edificio.dimensiones.y == 2)
            {
                if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
                {
                    posicion.z = posicion.z + 0.5f;              
                }
                else
                {
                    posicion.x = posicion.x + 0.5f;
                }

                edificios[(int)posicion.x, (int)posicion.z] = Instantiate(edificioVacio, posicion, Quaternion.identity);
            }

            if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 2)
            {
                Vector3 posicion1 = posicion;
                Vector3 posicion2 = posicion;
                Vector3 posicion3 = posicion;

                posicion1.x = posicion1.x + 0.5f;
                posicion1.z = posicion1.z + 0.5f;

                posicion2.x = posicion2.x - 0.5f;
                posicion2.z = posicion2.z + 0.5f;

                posicion3.x = posicion3.x + 0.5f;
                posicion3.z = posicion3.z - 0.5f;

                edificios[(int)posicion1.x, (int)posicion1.z] = Instantiate(edificioVacio, posicion1, Quaternion.identity);
                edificios[(int)posicion2.x, (int)posicion2.z] = Instantiate(edificioVacio, posicion2, Quaternion.identity);
                edificios[(int)posicion3.x, (int)posicion3.z] = Instantiate(edificioVacio, posicion3, Quaternion.identity);
            }

            if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 3)
            {
                if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
                {
                    Vector3 posicion1 = posicion;
                    Vector3 posicion2 = posicion;
                    Vector3 posicion3 = posicion;
                    Vector3 posicion4 = posicion;

                    posicion1.x = posicion1.x + 0.5f;
                    posicion1.z = posicion1.z + 0.5f;

                    posicion2.x = posicion2.x + 0.5f;
                    posicion2.z = posicion2.z + 1.5f;

                    posicion3.x = posicion3.x + 0.5f;
                    posicion3.z = posicion3.z - 0.5f;

                    posicion4.x = posicion4.x + 0.5f;
                    posicion4.z = posicion4.z - 1.5f;

                    edificios[(int)posicion1.x, (int)posicion1.z] = Instantiate(edificioVacio, posicion1, Quaternion.identity);
                    edificios[(int)posicion2.x, (int)posicion2.z] = Instantiate(edificioVacio, posicion2, Quaternion.identity);
                    edificios[(int)posicion3.x, (int)posicion3.z] = Instantiate(edificioVacio, posicion3, Quaternion.identity);
                    edificios[(int)posicion4.x, (int)posicion4.z] = Instantiate(edificioVacio, posicion4, Quaternion.identity);
                }
                else
                {

                }
            }
        }
    }
}
