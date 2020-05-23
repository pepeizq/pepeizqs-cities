using UnityEngine;

namespace Construcciones
{
    public class Colisiones : MonoBehaviour
    {
        public Construccion edificioVacioAñadir;

        public void Añadir(Construccion[,] edificios, Construccion edificio, Vector3 posicion, int id)
        {
            posicion.y = 1.5f;

            if (edificioVacioAñadir != null)
            {
                edificioVacioAñadir.id2 = id;
            }

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

                edificios[(int)posicion.x, (int)posicion.z] = Instantiate(edificioVacioAñadir, posicion, Quaternion.identity);
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

                edificios[(int)posicion.x, (int)posicion.z] = Instantiate(edificioVacioAñadir, posicion, Quaternion.identity);
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

                edificios[(int)posicion1.x, (int)posicion1.z] = Instantiate(edificioVacioAñadir, posicion1, Quaternion.identity);
                edificios[(int)posicion2.x, (int)posicion2.z] = Instantiate(edificioVacioAñadir, posicion2, Quaternion.identity);
                edificios[(int)posicion3.x, (int)posicion3.z] = Instantiate(edificioVacioAñadir, posicion3, Quaternion.identity);
            }

            if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 3)
            {
                Vector3 posicion1 = posicion;
                Vector3 posicion2 = posicion;
                Vector3 posicion3 = posicion;
                Vector3 posicion4 = posicion;
                Vector3 posicion5 = posicion;
                Vector3 posicion6 = posicion;
                Vector3 posicion7 = posicion;

                if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
                {
                    posicion1.x = posicion1.x + 0.5f;
                    posicion1.z = posicion1.z + 0.5f;

                    posicion2.x = posicion2.x + 0.5f;
                    posicion2.z = posicion2.z + 1.5f;

                    posicion3.x = posicion3.x + 0.5f;
                    posicion3.z = posicion3.z - 0.5f;

                    posicion4.x = posicion4.x + 0.5f;
                    posicion4.z = posicion4.z - 1.5f;

                    posicion5.x = posicion5.x - 0.5f;
                    posicion5.z = posicion5.z + 1.5f;

                    posicion6.x = posicion6.x - 0.5f;
                    posicion6.z = posicion6.z - 0.5f;

                    posicion7.x = posicion7.x - 0.5f;
                    posicion7.z = posicion7.z - 1.5f;
                }
                else
                {
                    posicion1.x = posicion1.x + 0.5f;
                    posicion1.z = posicion1.z + 0.5f;

                    posicion2.x = posicion2.x + 1.5f;
                    posicion2.z = posicion2.z + 0.5f;

                    posicion3.x = posicion3.x + 1.5f;
                    posicion3.z = posicion3.z - 0.5f;

                    posicion4.x = posicion4.x + 0.5f;
                    posicion4.z = posicion4.z - 0.5f;

                    posicion5.x = posicion5.x - 1.5f;
                    posicion5.z = posicion5.z - 0.5f;

                    posicion6.x = posicion6.x - 1.5f;
                    posicion6.z = posicion6.z + 0.5f;

                    posicion7.x = posicion7.x - 0.5f;
                    posicion7.z = posicion7.z + 0.5f;
                }

                edificios[(int)posicion1.x, (int)posicion1.z] = Instantiate(edificioVacioAñadir, posicion1, Quaternion.identity);
                edificios[(int)posicion2.x, (int)posicion2.z] = Instantiate(edificioVacioAñadir, posicion2, Quaternion.identity);
                edificios[(int)posicion3.x, (int)posicion3.z] = Instantiate(edificioVacioAñadir, posicion3, Quaternion.identity);
                edificios[(int)posicion4.x, (int)posicion4.z] = Instantiate(edificioVacioAñadir, posicion4, Quaternion.identity);
                edificios[(int)posicion5.x, (int)posicion5.z] = Instantiate(edificioVacioAñadir, posicion5, Quaternion.identity);
                edificios[(int)posicion6.x, (int)posicion6.z] = Instantiate(edificioVacioAñadir, posicion6, Quaternion.identity);
                edificios[(int)posicion7.x, (int)posicion7.z] = Instantiate(edificioVacioAñadir, posicion7, Quaternion.identity);
            }

            if (edificio.dimensiones.x == 4 && edificio.dimensiones.y == 3)
            {
                Vector3 posicion1 = posicion;
                Vector3 posicion2 = posicion;
                Vector3 posicion3 = posicion;
                Vector3 posicion4 = posicion;
                Vector3 posicion5 = posicion;
                Vector3 posicion6 = posicion;
                Vector3 posicion7 = posicion;
                Vector3 posicion8 = posicion;
                Vector3 posicion9 = posicion;
                Vector3 posicion10 = posicion;
                Vector3 posicion11 = posicion;

                if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
                {
                    posicion1.x = posicion1.x + 1f;
                    posicion1.z = posicion1.z + 1.5f;

                    posicion2.x = posicion2.x + 1f;
                    posicion2.z = posicion2.z + 0.5f;

                    posicion3.x = posicion3.x + 1f;
                    posicion3.z = posicion3.z - 0.5f;

                    posicion4.x = posicion4.x + 1f;
                    posicion4.z = posicion4.z - 1.5f;

                    posicion5.x = posicion5.x + 0f;
                    posicion5.z = posicion5.z + 1.5f;

                    posicion6.x = posicion6.x + 0f;
                    posicion6.z = posicion6.z + 0.5f;

                    posicion7.x = posicion7.x + 0f;
                    posicion7.z = posicion7.z - 1.5f;

                    posicion8.x = posicion8.x - 1f;
                    posicion8.z = posicion8.z + 1.5f;

                    posicion9.x = posicion9.x - 1f;
                    posicion9.z = posicion9.z + 0.5f;

                    posicion10.x = posicion10.x - 1f;
                    posicion10.z = posicion10.z - 0.5f;

                    posicion11.x = posicion11.x - 1f;
                    posicion11.z = posicion11.z - 1.5f;                       
                }
                else
                {
                    posicion1.x = posicion1.x + 1.5f;
                    posicion1.z = posicion1.z + 1f;

                    posicion2.x = posicion2.x + 0.5f;
                    posicion2.z = posicion2.z + 1f;

                    posicion3.x = posicion3.x - 0.5f;
                    posicion3.z = posicion3.z + 1f;

                    posicion4.x = posicion4.x - 1.5f;
                    posicion4.z = posicion4.z + 1f;

                    posicion5.x = posicion5.x + 1.5f;
                    posicion5.z = posicion5.z + 0f;

                    posicion6.x = posicion6.x + 0.5f;
                    posicion6.z = posicion6.z + 0f;

                    posicion7.x = posicion7.x - 1.5f;
                    posicion7.z = posicion7.z + 0f;

                    posicion8.x = posicion8.x + 1.5f;
                    posicion8.z = posicion8.z - 1f;

                    posicion9.x = posicion9.x + 0.5f;
                    posicion9.z = posicion9.z - 1f;

                    posicion10.x = posicion10.x - 0.5f;
                    posicion10.z = posicion10.z - 1f;

                    posicion11.x = posicion11.x - 1.5f;
                    posicion11.z = posicion11.z - 1f;
                }

                edificios[(int)posicion1.x, (int)posicion1.z] = Instantiate(edificioVacioAñadir, posicion1, Quaternion.identity);
                edificios[(int)posicion2.x, (int)posicion2.z] = Instantiate(edificioVacioAñadir, posicion2, Quaternion.identity);
                edificios[(int)posicion3.x, (int)posicion3.z] = Instantiate(edificioVacioAñadir, posicion3, Quaternion.identity);
                edificios[(int)posicion4.x, (int)posicion4.z] = Instantiate(edificioVacioAñadir, posicion4, Quaternion.identity);
                edificios[(int)posicion5.x, (int)posicion5.z] = Instantiate(edificioVacioAñadir, posicion5, Quaternion.identity);
                edificios[(int)posicion6.x, (int)posicion6.z] = Instantiate(edificioVacioAñadir, posicion6, Quaternion.identity);
                edificios[(int)posicion7.x, (int)posicion7.z] = Instantiate(edificioVacioAñadir, posicion7, Quaternion.identity);
                edificios[(int)posicion8.x, (int)posicion8.z] = Instantiate(edificioVacioAñadir, posicion8, Quaternion.identity);
                edificios[(int)posicion9.x, (int)posicion9.z] = Instantiate(edificioVacioAñadir, posicion9, Quaternion.identity);
                edificios[(int)posicion10.x, (int)posicion10.z] = Instantiate(edificioVacioAñadir, posicion10, Quaternion.identity);
                edificios[(int)posicion11.x, (int)posicion11.z] = Instantiate(edificioVacioAñadir, posicion11, Quaternion.identity);
            }
        }

        public Construccion Detectar(Construccion[,] edificios, Construccion edificio, Vector3 posicion)
        {
            if (edificio == null)
            {
                if (edificios[(int)posicion.x, (int)posicion.z] != null)
                {
                    if (edificioVacioAñadir == null)
                    {
                        return edificios[(int)posicion.x, (int)posicion.z];
                    }
                    else
                    {
                        for (int x = 0; x < edificios.GetLength(0); x++)
                        {
                            for (int z = 0; z < edificios.GetLength(1); z++)
                            {
                                if (edificios[x, z] != null)
                                {
                                    if (edificios[x, z].id2 == edificios[(int)posicion.x, (int)posicion.z].id2)
                                    {
                                        return edificios[x, z];
                                    }
                                }
                            }
                        }
                    }
                }

                return null;
            }
            else
            {
                if (edificio.dimensiones.x == 1 && edificio.dimensiones.y == 1)
                {
                    if (edificios[(int)posicion.x, (int)posicion.z] != null)
                    {
                        return edificios[(int)posicion.x, (int)posicion.z];
                    }
                }

                if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 1)
                {
                    Vector3 posicion1 = posicion;

                    if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
                    {
                        posicion.x = posicion.x - 2f;

                        posicion1.x = posicion1.x - 1f;
                        posicion1.z = posicion1.z + 0f;
                    }
                    else
                    {
                        posicion.x = posicion.x - 1f;

                        posicion1.x = posicion1.x - 1f;
                        posicion1.z = posicion1.z + 1f;
                    }

                    if (edificios[(int)posicion.x, (int)posicion.z] != null)
                    {
                        return edificios[(int)posicion.x, (int)posicion.z];
                    }

                    if (edificios[(int)posicion1.x, (int)posicion1.z] != null)
                    {
                        return edificios[(int)posicion1.x, (int)posicion1.z];
                    }
                }

                if (edificio.dimensiones.x == 1 && edificio.dimensiones.y == 2)
                {
                    Vector3 posicion1 = posicion;

                    if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
                    {
                        posicion.x = posicion.x - 0f;
                        posicion.z = posicion.z - 2f;

                        posicion1.x = posicion1.x + 0f;
                        posicion1.z = posicion1.z - 1f;
                    }
                    else
                    {
                        posicion.x = posicion.x - 1f;
                        posicion.z = posicion.z - 1f;

                        posicion1.x = posicion1.x + 0f;
                        posicion1.z = posicion1.z - 1f;
                    }

                    if (edificios[(int)posicion.x, (int)posicion.z] != null)
                    {
                        return edificios[(int)posicion.x, (int)posicion.z];
                    }

                    if (edificios[(int)posicion1.x, (int)posicion1.z] != null)
                    {
                        return edificios[(int)posicion1.x, (int)posicion1.z];
                    }
                }

                if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 2)
                {
                    Vector3 posicion1 = posicion;
                    Vector3 posicion2 = posicion;
                    Vector3 posicion3 = posicion;

                    posicion.x = posicion.x - 2f;
                    posicion.z = posicion.z - 2f;

                    posicion1.x = posicion1.x - 1f;
                    posicion1.z = posicion1.z - 2f;

                    posicion2.x = posicion2.x - 2f;
                    posicion2.z = posicion2.z - 1f;

                    posicion3.x = posicion3.x - 1f;
                    posicion3.z = posicion3.z - 1f;

                    if (edificios[(int)posicion.x, (int)posicion.z] != null)
                    {
                        return edificios[(int)posicion.x, (int)posicion.z];
                    }

                    if (edificios[(int)posicion1.x, (int)posicion1.z] != null)
                    {
                        return edificios[(int)posicion1.x, (int)posicion1.z];
                    }

                    if (edificios[(int)posicion2.x, (int)posicion2.z] != null)
                    {
                        return edificios[(int)posicion2.x, (int)posicion2.z];
                    }

                    if (edificios[(int)posicion3.x, (int)posicion3.z] != null)
                    {
                        return edificios[(int)posicion3.x, (int)posicion3.z];
                    }
                }

                if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 3)
                {
                    Vector3 posicion1 = posicion;
                    Vector3 posicion2 = posicion;
                    Vector3 posicion3 = posicion;
                    Vector3 posicion4 = posicion;
                    Vector3 posicion5 = posicion;
                    Vector3 posicion6 = posicion;
                    Vector3 posicion7 = posicion;

                    if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
                    {
                        posicion.x = posicion.x - 1f;
                        posicion.z = posicion.z - 1f;

                        posicion1.x = posicion1.x - 1f;
                        posicion1.z = posicion1.z - 2f;

                        posicion2.x = posicion2.x - 1f;
                        posicion2.z = posicion2.z - 3f;

                        posicion3.x = posicion3.x - 1f;
                        posicion3.z = posicion3.z - 4f;

                        posicion4.x = posicion4.x - 2f;
                        posicion4.z = posicion4.z - 1f;

                        posicion5.x = posicion5.x - 2f;
                        posicion5.z = posicion5.z - 2f;

                        posicion6.x = posicion6.x - 2f;
                        posicion6.z = posicion6.z - 3f;

                        posicion7.x = posicion7.x - 2f;
                        posicion7.z = posicion7.z - 4f;
                    }
                    else
                    {
                        posicion.x = posicion.x - 1f;
                        posicion.z = posicion.z - 1f;

                        posicion1.x = posicion1.x - 2f;
                        posicion1.z = posicion1.z - 1f;

                        posicion2.x = posicion2.x - 3f;
                        posicion2.z = posicion2.z - 1f;

                        posicion3.x = posicion3.x - 4f;
                        posicion3.z = posicion3.z - 1f;

                        posicion4.x = posicion4.x - 1f;
                        posicion4.z = posicion4.z - 2f;

                        posicion5.x = posicion5.x - 2f;
                        posicion5.z = posicion5.z - 2f;

                        posicion6.x = posicion6.x - 3f;
                        posicion6.z = posicion6.z - 2f;

                        posicion7.x = posicion7.x - 4f;
                        posicion7.z = posicion7.z - 2f;
                    }

                    if (edificios[(int)posicion.x, (int)posicion.z] != null)
                    {
                        return edificios[(int)posicion.x, (int)posicion.z];
                    }

                    if (edificios[(int)posicion1.x, (int)posicion1.z] != null)
                    {
                        return edificios[(int)posicion1.x, (int)posicion1.z];
                    }

                    if (edificios[(int)posicion2.x, (int)posicion2.z] != null)
                    {
                        return edificios[(int)posicion2.x, (int)posicion2.z];
                    }

                    if (edificios[(int)posicion3.x, (int)posicion3.z] != null)
                    {
                        return edificios[(int)posicion3.x, (int)posicion3.z];
                    }

                    if (edificios[(int)posicion4.x, (int)posicion4.z] != null)
                    {
                        return edificios[(int)posicion4.x, (int)posicion4.z];
                    }

                    if (edificios[(int)posicion5.x, (int)posicion5.z] != null)
                    {
                        return edificios[(int)posicion5.x, (int)posicion5.z];
                    }

                    if (edificios[(int)posicion6.x, (int)posicion6.z] != null)
                    {
                        return edificios[(int)posicion6.x, (int)posicion6.z];
                    }

                    if (edificios[(int)posicion7.x, (int)posicion7.z] != null)
                    {
                        return edificios[(int)posicion7.x, (int)posicion7.z];
                    }
                }

                if (edificio.dimensiones.x == 4 && edificio.dimensiones.y == 3)
                {
                    Vector3 posicion1 = posicion;
                    Vector3 posicion2 = posicion;
                    Vector3 posicion3 = posicion;
                    Vector3 posicion4 = posicion;
                    Vector3 posicion5 = posicion;
                    Vector3 posicion6 = posicion;
                    Vector3 posicion7 = posicion;
                    Vector3 posicion8 = posicion;
                    Vector3 posicion9 = posicion;
                    Vector3 posicion10 = posicion;
                    Vector3 posicion11 = posicion;

                    if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
                    {
                        posicion.x = posicion.x - 2f;
                        posicion.z = posicion.z - 1f;

                        posicion1.x = posicion1.x - 2f;
                        posicion1.z = posicion1.z - 2f;

                        posicion2.x = posicion2.x - 2f;
                        posicion2.z = posicion2.z - 3f;

                        posicion3.x = posicion3.x - 2f;
                        posicion3.z = posicion3.z - 4f;

                        posicion4.x = posicion4.x - 3f;
                        posicion4.z = posicion4.z - 1f;

                        posicion5.x = posicion5.x - 3f;
                        posicion5.z = posicion5.z - 2f;

                        posicion6.x = posicion6.x - 3f;
                        posicion6.z = posicion6.z - 3f;

                        posicion7.x = posicion7.x - 3f;
                        posicion7.z = posicion7.z - 4f;

                        posicion8.x = posicion8.x - 4f;
                        posicion8.z = posicion8.z - 1f;

                        posicion9.x = posicion9.x - 4f;
                        posicion9.z = posicion9.z - 2f;

                        posicion10.x = posicion10.x - 4f;
                        posicion10.z = posicion10.z - 3f;

                        posicion11.x = posicion11.x - 4f;
                        posicion11.z = posicion11.z - 4f;
                    }
                    else
                    {
                        posicion.x = posicion.x - 1f;
                        posicion.z = posicion.z - 2f;

                        posicion1.x = posicion1.x - 2f;
                        posicion1.z = posicion1.z - 2f;

                        posicion2.x = posicion2.x - 3f;
                        posicion2.z = posicion2.z - 2f;

                        posicion3.x = posicion3.x - 4f;
                        posicion3.z = posicion3.z - 2f;

                        posicion4.x = posicion4.x - 1f;
                        posicion4.z = posicion4.z - 3f;

                        posicion5.x = posicion5.x - 2f;
                        posicion5.z = posicion5.z - 3f;

                        posicion6.x = posicion6.x - 3f;
                        posicion6.z = posicion6.z - 3f;

                        posicion7.x = posicion7.x - 4f;
                        posicion7.z = posicion7.z - 3f;

                        posicion8.x = posicion8.x - 1f;
                        posicion8.z = posicion8.z - 4f;

                        posicion9.x = posicion9.x - 2f;
                        posicion9.z = posicion9.z - 4f;

                        posicion10.x = posicion10.x - 3f;
                        posicion10.z = posicion10.z - 4f;

                        posicion11.x = posicion11.x - 4f;
                        posicion11.z = posicion11.z - 4f;
                    }

                    if (edificios[(int)posicion.x, (int)posicion.z] != null)
                    {
                        return edificios[(int)posicion.x, (int)posicion.z];
                    }

                    if (edificios[(int)posicion1.x, (int)posicion1.z] != null)
                    {
                        return edificios[(int)posicion1.x, (int)posicion1.z];
                    }

                    if (edificios[(int)posicion2.x, (int)posicion2.z] != null)
                    {
                        return edificios[(int)posicion2.x, (int)posicion2.z];
                    }

                    if (edificios[(int)posicion3.x, (int)posicion3.z] != null)
                    {
                        return edificios[(int)posicion3.x, (int)posicion3.z];
                    }

                    if (edificios[(int)posicion4.x, (int)posicion4.z] != null)
                    {
                        return edificios[(int)posicion4.x, (int)posicion4.z];
                    }

                    if (edificios[(int)posicion5.x, (int)posicion5.z] != null)
                    {
                        return edificios[(int)posicion5.x, (int)posicion5.z];
                    }

                    if (edificios[(int)posicion6.x, (int)posicion6.z] != null)
                    {
                        return edificios[(int)posicion6.x, (int)posicion6.z];
                    }

                    if (edificios[(int)posicion7.x, (int)posicion7.z] != null)
                    {
                        return edificios[(int)posicion7.x, (int)posicion7.z];
                    }

                    if (edificios[(int)posicion8.x, (int)posicion8.z] != null)
                    {
                        return edificios[(int)posicion8.x, (int)posicion8.z];
                    }

                    if (edificios[(int)posicion9.x, (int)posicion9.z] != null)
                    {
                        return edificios[(int)posicion9.x, (int)posicion9.z];
                    }

                    if (edificios[(int)posicion10.x, (int)posicion10.z] != null)
                    {
                        return edificios[(int)posicion10.x, (int)posicion10.z];
                    }

                    if (edificios[(int)posicion11.x, (int)posicion11.z] != null)
                    {
                        return edificios[(int)posicion11.x, (int)posicion11.z];
                    }
                }

                return null;
            }       
        }

        public bool BuscarCarretera(Construccion[,] edificios, Construccion edificio, Vector3 posicion)
        {
            if (edificio != null)
            {
                if ((edificio.categoria == 0) || (edificio.categoria == 1))
                {
                    return true;
                }

                if (edificio.dimensiones.x == 1 && edificio.dimensiones.y == 1)
                {
                    if (edificios[(int)posicion.x + 1, (int)posicion.z] != null)
                    {
                        if (edificios[(int)posicion.x + 1, (int)posicion.z].categoria == 1)
                        {
                            return true;
                        }
                        else if (edificios[(int)posicion.x, (int)posicion.z + 1].categoria == 1)
                        {
                            return true;
                        }
                        else if (edificios[(int)posicion.x - 1, (int)posicion.z].categoria == 1)
                        {
                            return true;
                        }
                        else if (edificios[(int)posicion.x, (int)posicion.z - 1].categoria == 1)
                        {
                            return true;
                        }
                    }
                }

                if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 1)
                {

                }

                if (edificio.dimensiones.x == 1 && edificio.dimensiones.y == 2)
                {

                }

                if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 2)
                {

                }
            }

            return false;
        }

        public bool Terreno(Terreno[,] terrenos, Construccion edificio, Vector3 posicion) 
        {
            if (edificio.dimensiones.x == 1 && edificio.dimensiones.y == 1)
            {
                if (terrenos[(int)posicion.x, (int)posicion.z] != null)
                {
                    if (terrenos[(int)posicion.x, (int)posicion.z].edificable == false)
                    {
                        return false;
                    }
                }
            }

            if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 1)
            {
                Vector3 posicion1 = posicion;

                if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
                {
                    posicion.x = posicion.x - 2f;

                    posicion1.x = posicion1.x - 1f;
                    posicion1.z = posicion1.z + 0f;
                }
                else
                {
                    posicion.x = posicion.x - 1f;

                    posicion1.x = posicion1.x - 1f;
                    posicion1.z = posicion1.z + 1f;
                }

                if (terrenos[(int)posicion.x, (int)posicion.z] != null)
                {
                    if (terrenos[(int)posicion.x, (int)posicion.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion1.x, (int)posicion1.z] != null)
                {
                    if (terrenos[(int)posicion1.x, (int)posicion1.z].edificable == false)
                    {
                        return false;
                    }
                }
            }

            if (edificio.dimensiones.x == 1 && edificio.dimensiones.y == 2)
            {
                Vector3 posicion1 = posicion;

                if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
                {
                    posicion.x = posicion.x - 0f;
                    posicion.z = posicion.z - 2f;

                    posicion1.x = posicion1.x + 0f;
                    posicion1.z = posicion1.z - 1f;
                }
                else
                {
                    posicion.x = posicion.x - 1f;
                    posicion.z = posicion.z - 1f;

                    posicion1.x = posicion1.x + 0f;
                    posicion1.z = posicion1.z - 1f;
                }

                if (terrenos[(int)posicion.x, (int)posicion.z] != null)
                {
                    if (terrenos[(int)posicion.x, (int)posicion.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion1.x, (int)posicion1.z] != null)
                {
                    if (terrenos[(int)posicion1.x, (int)posicion1.z].edificable == false)
                    {
                        return false;
                    }
                }
            }

            if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 2)
            {
                Vector3 posicion1 = posicion;
                Vector3 posicion2 = posicion;
                Vector3 posicion3 = posicion;

                posicion.x = posicion.x - 2f;
                posicion.z = posicion.z - 2f;

                posicion1.x = posicion1.x - 1f;
                posicion1.z = posicion1.z - 2f;

                posicion2.x = posicion2.x - 2f;
                posicion2.z = posicion2.z - 1f;

                posicion3.x = posicion3.x - 1f;
                posicion3.z = posicion3.z - 1f;

                if (terrenos[(int)posicion.x, (int)posicion.z] != null)
                {
                    if (terrenos[(int)posicion.x, (int)posicion.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion1.x, (int)posicion1.z] != null)
                {
                    if (terrenos[(int)posicion1.x, (int)posicion1.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion2.x, (int)posicion2.z] != null)
                {
                    if (terrenos[(int)posicion2.x, (int)posicion2.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion3.x, (int)posicion3.z] != null)
                {
                    if (terrenos[(int)posicion3.x, (int)posicion3.z].edificable == false)
                    {
                        return false;
                    }
                }
            }

            if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 3)
            {
                Vector3 posicion1 = posicion;
                Vector3 posicion2 = posicion;
                Vector3 posicion3 = posicion;
                Vector3 posicion4 = posicion;
                Vector3 posicion5 = posicion;
                Vector3 posicion6 = posicion;
                Vector3 posicion7 = posicion;

                if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
                {
                    posicion.x = posicion.x - 1f;
                    posicion.z = posicion.z - 1f;

                    posicion1.x = posicion1.x - 1f;
                    posicion1.z = posicion1.z - 2f;

                    posicion2.x = posicion2.x - 1f;
                    posicion2.z = posicion2.z - 3f;

                    posicion3.x = posicion3.x - 1f;
                    posicion3.z = posicion3.z - 4f;

                    posicion4.x = posicion4.x - 2f;
                    posicion4.z = posicion4.z - 1f;

                    posicion5.x = posicion5.x - 2f;
                    posicion5.z = posicion5.z - 2f;

                    posicion6.x = posicion6.x - 2f;
                    posicion6.z = posicion6.z - 3f;

                    posicion7.x = posicion7.x - 2f;
                    posicion7.z = posicion7.z - 4f;
                }
                else
                {
                    posicion.x = posicion.x - 1f;
                    posicion.z = posicion.z - 1f;

                    posicion1.x = posicion1.x - 2f;
                    posicion1.z = posicion1.z - 1f;

                    posicion2.x = posicion2.x - 3f;
                    posicion2.z = posicion2.z - 1f;

                    posicion3.x = posicion3.x - 4f;
                    posicion3.z = posicion3.z - 1f;

                    posicion4.x = posicion4.x - 1f;
                    posicion4.z = posicion4.z - 2f;

                    posicion5.x = posicion5.x - 2f;
                    posicion5.z = posicion5.z - 2f;

                    posicion6.x = posicion6.x - 3f;
                    posicion6.z = posicion6.z - 2f;

                    posicion7.x = posicion7.x - 4f;
                    posicion7.z = posicion7.z - 2f;
                }

                if (terrenos[(int)posicion.x, (int)posicion.z] != null)
                {
                    if (terrenos[(int)posicion.x, (int)posicion.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion1.x, (int)posicion1.z] != null)
                {
                    if (terrenos[(int)posicion1.x, (int)posicion1.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion2.x, (int)posicion2.z] != null)
                {
                    if (terrenos[(int)posicion2.x, (int)posicion2.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion3.x, (int)posicion3.z] != null)
                {
                    if (terrenos[(int)posicion3.x, (int)posicion3.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion4.x, (int)posicion4.z] != null)
                {
                    if (terrenos[(int)posicion4.x, (int)posicion4.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion5.x, (int)posicion5.z] != null)
                {
                    if (terrenos[(int)posicion5.x, (int)posicion5.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion6.x, (int)posicion6.z] != null)
                {
                    if (terrenos[(int)posicion6.x, (int)posicion6.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion7.x, (int)posicion7.z] != null)
                {
                    if (terrenos[(int)posicion7.x, (int)posicion7.z].edificable == false)
                    {
                        return false;
                    }
                }
            }

            if (edificio.dimensiones.x == 4 && edificio.dimensiones.y == 3)
            {
                Vector3 posicion1 = posicion;
                Vector3 posicion2 = posicion;
                Vector3 posicion3 = posicion;
                Vector3 posicion4 = posicion;
                Vector3 posicion5 = posicion;
                Vector3 posicion6 = posicion;
                Vector3 posicion7 = posicion;
                Vector3 posicion8 = posicion;
                Vector3 posicion9 = posicion;
                Vector3 posicion10 = posicion;
                Vector3 posicion11 = posicion;

                if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
                {
                    posicion.x = posicion.x - 2f;
                    posicion.z = posicion.z - 1f;

                    posicion1.x = posicion1.x - 2f;
                    posicion1.z = posicion1.z - 2f;

                    posicion2.x = posicion2.x - 2f;
                    posicion2.z = posicion2.z - 3f;

                    posicion3.x = posicion3.x - 2f;
                    posicion3.z = posicion3.z - 4f;

                    posicion4.x = posicion4.x - 3f;
                    posicion4.z = posicion4.z - 1f;

                    posicion5.x = posicion5.x - 3f;
                    posicion5.z = posicion5.z - 2f;

                    posicion6.x = posicion6.x - 3f;
                    posicion6.z = posicion6.z - 3f;

                    posicion7.x = posicion7.x - 3f;
                    posicion7.z = posicion7.z - 4f;

                    posicion8.x = posicion8.x - 4f;
                    posicion8.z = posicion8.z - 1f;

                    posicion9.x = posicion9.x - 4f;
                    posicion9.z = posicion9.z - 2f;

                    posicion10.x = posicion10.x - 4f;
                    posicion10.z = posicion10.z - 3f;

                    posicion11.x = posicion11.x - 4f;
                    posicion11.z = posicion11.z - 4f;
                }
                else
                {
                    posicion.x = posicion.x - 1f;
                    posicion.z = posicion.z - 2f;

                    posicion1.x = posicion1.x - 2f;
                    posicion1.z = posicion1.z - 2f;

                    posicion2.x = posicion2.x - 3f;
                    posicion2.z = posicion2.z - 2f;

                    posicion3.x = posicion3.x - 4f;
                    posicion3.z = posicion3.z - 2f;

                    posicion4.x = posicion4.x - 1f;
                    posicion4.z = posicion4.z - 3f;

                    posicion5.x = posicion5.x - 2f;
                    posicion5.z = posicion5.z - 3f;

                    posicion6.x = posicion6.x - 3f;
                    posicion6.z = posicion6.z - 3f;

                    posicion7.x = posicion7.x - 4f;
                    posicion7.z = posicion7.z - 3f;

                    posicion8.x = posicion8.x - 1f;
                    posicion8.z = posicion8.z - 4f;

                    posicion9.x = posicion9.x - 2f;
                    posicion9.z = posicion9.z - 4f;

                    posicion10.x = posicion10.x - 3f;
                    posicion10.z = posicion10.z - 4f;

                    posicion11.x = posicion11.x - 4f;
                    posicion11.z = posicion11.z - 4f;
                }

                if (terrenos[(int)posicion.x, (int)posicion.z] != null)
                {
                    if (terrenos[(int)posicion.x, (int)posicion.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion1.x, (int)posicion1.z] != null)
                {
                    if (terrenos[(int)posicion1.x, (int)posicion1.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion2.x, (int)posicion2.z] != null)
                {
                    if (terrenos[(int)posicion2.x, (int)posicion2.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion3.x, (int)posicion3.z] != null)
                {
                    if (terrenos[(int)posicion3.x, (int)posicion3.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion4.x, (int)posicion4.z] != null)
                {
                    if (terrenos[(int)posicion4.x, (int)posicion4.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion5.x, (int)posicion5.z] != null)
                {
                    if (terrenos[(int)posicion5.x, (int)posicion5.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion6.x, (int)posicion6.z] != null)
                {
                    if (terrenos[(int)posicion6.x, (int)posicion6.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion7.x, (int)posicion7.z] != null)
                {
                    if (terrenos[(int)posicion7.x, (int)posicion7.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion8.x, (int)posicion8.z] != null)
                {
                    if (terrenos[(int)posicion8.x, (int)posicion8.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion9.x, (int)posicion9.z] != null)
                {
                    if (terrenos[(int)posicion9.x, (int)posicion9.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion10.x, (int)posicion10.z] != null)
                {
                    if (terrenos[(int)posicion10.x, (int)posicion10.z].edificable == false)
                    {
                        return false;
                    }
                }

                if (terrenos[(int)posicion11.x, (int)posicion11.z] != null)
                {
                    if (terrenos[(int)posicion11.x, (int)posicion11.z].edificable == false)
                    {
                        return false;
                    }
                }
            }

            return true;
        }
    }
}
