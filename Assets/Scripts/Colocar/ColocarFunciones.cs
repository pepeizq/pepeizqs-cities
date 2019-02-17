using UnityEngine;

public static class ColocarFunciones {

    public static Vector3 PosicionEdificio(Construccion edificio, Vector3 posicion, int rotacion)
    {
        if (edificio.categoria == 1)
        {
            posicion.y = 1f;
        }
        else
        {
            posicion.y = 0.5f;
        }

        if ((edificio.dimensiones.x == 2) && (edificio.dimensiones.y == 1))
        {
            if (rotacion == -180)
            {
                posicion.x = posicion.x + 0.5f;
            }
            else if (rotacion == -270)
            {
                posicion.z = posicion.z + 0.5f;
            }
            else if (rotacion == 0)
            {
                posicion.x = posicion.x - 0.5f;
            }
            else if (rotacion == -90)
            {
                posicion.z = posicion.z - 0.5f;
            }
        }
        else if ((edificio.dimensiones.x == 2) && (edificio.dimensiones.y == 2))
        {
            if (rotacion == -180)
            {
                posicion.x = posicion.x + 0.5f;
                posicion.z = posicion.z + 0.5f;
            }
            else if (rotacion == -270)
            {
                posicion.x = posicion.x - 0.5f;
                posicion.z = posicion.z + 0.5f;
            }
            else if (rotacion == 0)
            {
                posicion.x = posicion.x - 0.5f;
                posicion.z = posicion.z - 0.5f;
            }
            else if (rotacion == -90)
            {
                posicion.x = posicion.x + 0.5f;
                posicion.z = posicion.z - 0.5f;
            }
        }

        return posicion;
    }

    public static Construccion[,] RellenarEdificioVacio(Construccion[,] edificios, Construccion edificio, Vector3 posicion, int rotacion, Construccion edificioVacio)
    {
        if ((edificio.dimensiones.x == 2) && (edificio.dimensiones.y == 1))
        {
            if (rotacion == -180)
            {
                edificios[(int)posicion.x + 1, (int)posicion.z] = Object.Instantiate(edificioVacio);
            }
            else if (rotacion == -270)
            {
                edificios[(int)posicion.x, (int)posicion.z + 1] = Object.Instantiate(edificioVacio);
            }
            else if (rotacion == 0)
            {
                edificios[(int)posicion.x - 1, (int)posicion.z] = Object.Instantiate(edificioVacio);
            }
            else if (rotacion == -90)
            {
                edificios[(int)posicion.x, (int)posicion.z - 1] = Object.Instantiate(edificioVacio);
            }
        }
        else if ((edificio.dimensiones.x == 2) && (edificio.dimensiones.y == 2))
        {
            edificios[(int)posicion.x + 1, (int)posicion.z] = Object.Instantiate(edificioVacio);
            edificios[(int)posicion.x, (int)posicion.z + 1] = Object.Instantiate(edificioVacio);
            edificios[(int)posicion.x + 1, (int)posicion.z + 1] = Object.Instantiate(edificioVacio);
        }

        return edificios;
    }

    public static Construccion ComprobarPosicion(Construccion[,] edificios, Construccion edificio, Vector3 posicion)
    {
        if (((int)posicion.x > 0) && ((int)posicion.x <= 100) && ((int)posicion.z > 0) && ((int)posicion.z <= 100))
        {
            if (edificios[(int)posicion.x, (int)posicion.z] != null)
            {
                return edificios[(int)posicion.x, (int)posicion.z];
            }

            if (edificio != null)
            {
                if ((edificio.dimensiones.x == 2) && (edificio.dimensiones.y == 1))
                {
                    if (edificio.rotacionColocacion == -180)
                    {
                        if (edificios[(int)posicion.x + 1, (int)posicion.z] != null)
                        {
                            return edificios[(int)posicion.x + 1, (int)posicion.z];
                        }
                    }
                    else if (edificio.rotacionColocacion == -270)
                    {
                        if (edificios[(int)posicion.x, (int)posicion.z + 1] != null)
                        {
                            return edificios[(int)posicion.x, (int)posicion.z + 1];
                        }
                    }
                    else if (edificio.rotacionColocacion == 0)
                    {
                        if (edificios[(int)posicion.x - 1, (int)posicion.z] != null)
                        {
                            return edificios[(int)posicion.x - 1, (int)posicion.z];
                        }
                    }
                    else if (edificio.rotacionColocacion == -90)
                    {
                        if (edificios[(int)posicion.x, (int)posicion.z - 1] != null)
                        {
                            return edificios[(int)posicion.x, (int)posicion.z - 1];
                        }
                    }

                    return null;
                }
                else if ((edificio.dimensiones.x == 2) && (edificio.dimensiones.y == 2))
                {
                    if (edificios[(int)posicion.x + 1, (int)posicion.z] != null)
                    {
                        return edificios[(int)posicion.x + 1, (int)posicion.z];
                    }

                    if (edificios[(int)posicion.x, (int)posicion.z + 1] != null)
                    {
                        return edificios[(int)posicion.x, (int)posicion.z + 1];
                    }

                    if (edificios[(int)posicion.x + 1, (int)posicion.z + 1] != null)
                    {
                        return edificios[(int)posicion.x + 1, (int)posicion.z + 1];
                    }

                    return null;
                }

                return null;
            }

            return null;
        }
        else
        {
            return null;
        }
    }

    public static Construccion[,] QuitarEdificios(Construccion[,] edificios, Construccion edificio, Vector3 posicion, int rotacion)
    {
        if (edificios[(int)posicion.x, (int)posicion.z] != null)
        {
            Object.Destroy(edificios[(int)posicion.x, (int)posicion.z].gameObject);
            edificios[(int)posicion.x, (int)posicion.z] = null;
        }

        if ((edificio.dimensiones.x == 2) && (edificio.dimensiones.y == 1))
        {
            if (rotacion == -180)
            {
                if (edificios[(int)posicion.x + 1, (int)posicion.z] != null)
                {
                    Object.Destroy(edificios[(int)posicion.x + 1, (int)posicion.z].gameObject);
                    edificios[(int)posicion.x + 1, (int)posicion.z] = null;
                }
            }
            else if (rotacion == -270)
            {
                if (edificios[(int)posicion.x, (int)posicion.z + 1] != null)
                {
                    Object.Destroy(edificios[(int)posicion.x, (int)posicion.z + 1].gameObject);
                    edificios[(int)posicion.x, (int)posicion.z + 1] = null;
                }
            }
            else if (rotacion == 0)
            {
                if (edificios[(int)posicion.x - 1, (int)posicion.z] != null)
                {
                    Object.Destroy(edificios[(int)posicion.x - 1, (int)posicion.z].gameObject);
                    edificios[(int)posicion.x - 1, (int)posicion.z] = null;
                }
            }
            else if (rotacion == -90)
            {
                if (edificios[(int)posicion.x, (int)posicion.z - 1] != null)
                {
                    Object.Destroy(edificios[(int)posicion.x, (int)posicion.z - 1].gameObject);
                    edificios[(int)posicion.x, (int)posicion.z - 1] = null;
                }
            }
        }
        else if ((edificio.dimensiones.x == 2) && (edificio.dimensiones.y == 2))
        {
            if (edificios[(int)posicion.x + 1, (int)posicion.z] != null)
            {
                Object.Destroy(edificios[(int)posicion.x + 1, (int)posicion.z].gameObject);
                edificios[(int)posicion.x + 1, (int)posicion.z] = null;
            }

            if (edificios[(int)posicion.x, (int)posicion.z + 1] != null)
            {
                Object.Destroy(edificios[(int)posicion.x, (int)posicion.z + 1].gameObject);
                edificios[(int)posicion.x, (int)posicion.z + 1] = null;
            }

            if (edificios[(int)posicion.x + 1, (int)posicion.z + 1] != null)
            {
                Object.Destroy(edificios[(int)posicion.x + 1, (int)posicion.z + 1].gameObject);
                edificios[(int)posicion.x + 1, (int)posicion.z + 1] = null;
            }
        }

        return edificios;
    }
}

