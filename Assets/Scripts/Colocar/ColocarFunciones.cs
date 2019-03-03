using UnityEngine;

public static class ColocarFunciones {

    public static Vector3 PosicionEdificio(Construccion edificio, Vector3 posicion, int rotacion)
    {
        if (edificio.categoria == 1)
        {
            posicion.y = 1f;
        }
        else if (edificio.categoria == 3)
        {
            posicion.y = 1f;
        }
        else
        {
            posicion.y = 0.5f;
        }

        if (edificio.dimensiones.x > 1)
        {
            if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
            {
                posicion.z = posicion.z - ((edificio.dimensiones.x - 1) / 2);
            }
            else
            {
                posicion.x = posicion.x - ((edificio.dimensiones.x - 1) / 2);
            }                
        }

        if (edificio.dimensiones.y > 1)
        {
            if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
            {
                posicion.x = posicion.x - ((edificio.dimensiones.y - 1) / 2);
            }
            else
            {
                posicion.z = posicion.z - ((edificio.dimensiones.y - 1) / 2);
            }              
        }

        return posicion;
    }

    public static Construccion[,] RellenarEdificioVacio(Construccion[,] edificios, Construccion edificio, Vector3 posicion, Construccion edificioVacio)
    {
        int topeX = 0;
        int i = 0;

        int topeZ = 0;
        int j = 0;

        if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
        {
            topeX = (int)edificio.dimensiones.y;
            topeZ = (int)edificio.dimensiones.x;
        }
        else
        {
            topeX = (int)edificio.dimensiones.x;
            topeZ = (int)edificio.dimensiones.y;
        }

        if (topeX == 3)
        {
            i = -1;
            topeX = 2;
        }

        if (topeX == 4)
        {
            i = -1;
            topeX = 3;
        }

        if (topeZ == 3)
        {
            j = -1;
            topeZ = 2;
        }

        if (topeZ == 4)
        {
            j = -1;
            topeZ = 3;
        }

        int ib = i;
        int jb = j;

        if (topeX > 1)
        {
            while (i < topeX)
            {
                if (edificios[(int)posicion.x + i, (int)posicion.z] == null)
                {
                    edificios[(int)posicion.x + i, (int)posicion.z] = Object.Instantiate(edificioVacio);
                }

                i += 1;
            }
        }
        
        if (topeZ > 1)
        {
            while (j < topeZ)
            {
                if (edificios[(int)posicion.x, (int)posicion.z + j] == null)
                {
                    edificios[(int)posicion.x, (int)posicion.z + j] = Object.Instantiate(edificioVacio);
                }

                j += 1;
            }
        }
       
        if (topeX > 1 && topeZ > 1)
        {
            while (ib < topeX)
            {
                int jc = jb;
                while (jc < topeZ)
                {
                    if (edificios[(int)posicion.x + ib, (int)posicion.z + jc] == null)
                    {
                        edificios[(int)posicion.x + ib, (int)posicion.z + jc] = Object.Instantiate(edificioVacio);
                    }

                    jc += 1;
                }

                ib += 1;
            }
        }
    
        return edificios;
    }

    public static Construccion ComprobarPosicion(Construccion[,] edificios, Construccion edificio, Vector3 posicion)
    {
        if (((int)posicion.x > 0) && ((int)posicion.x <= 100) && ((int)posicion.z > 0) && ((int)posicion.z <= 100))
        {
            int topeX = 0;
            int i = 0;

            if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
            {
                if ((int)edificio.dimensiones.y > 1)
                {
                    if (edificio.dimensiones.y < 4)
                    {
                        topeX = (int)Mathf.Floor(edificio.dimensiones.y / 2);
                        i = 0 - ((int)Mathf.Ceil(edificio.dimensiones.y / 2));
                    }
                    else
                    {
                        topeX = (int)Mathf.Round(edificio.dimensiones.y / 2) - 1;
                        i = 0 - ((int)Mathf.Round(edificio.dimensiones.y / 2)) - 1;
                    }
                }
                else
                {
                    topeX = (int)edificio.dimensiones.y;
                }
            }
            else
            {
                if ((int)edificio.dimensiones.x > 1)
                {
                    if (edificio.dimensiones.x < 4)
                    {
                        topeX = (int)Mathf.Floor(edificio.dimensiones.x / 2);
                        i = 0 - ((int)Mathf.Ceil(edificio.dimensiones.x / 2));
                    }
                    else
                    {
                        topeX = (int)Mathf.Round(edificio.dimensiones.x / 2) - 1;
                        i = 0 - ((int)Mathf.Round(edificio.dimensiones.x / 2)) - 1;
                    }
                }
                else
                {
                    topeX = (int)edificio.dimensiones.x;
                }
            }
            
            int topeZ = 0;
            int j = 0;

            if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
            {
                if ((int)edificio.dimensiones.x > 1)
                {
                    if (edificio.dimensiones.x < 4)
                    {
                        topeZ = (int)Mathf.Floor(edificio.dimensiones.x / 2);
                        j = 0 - ((int)Mathf.Ceil(edificio.dimensiones.x / 2));
                    }
                    else
                    {
                        topeZ = (int)Mathf.Round(edificio.dimensiones.x / 2) - 1;
                        j = 0 - ((int)Mathf.Round(edificio.dimensiones.x / 2)) - 1;
                    }                       
                }
                else
                {
                    topeZ = (int)edificio.dimensiones.x;
                }
            }
            else
            {
                if ((int)edificio.dimensiones.y > 1)
                {
                    if (edificio.dimensiones.y < 4)
                    {
                        topeZ = (int)Mathf.Floor(edificio.dimensiones.y / 2);
                        j = 0 - ((int)Mathf.Ceil(edificio.dimensiones.y / 2));
                    }
                    else
                    {
                        topeZ = (int)Mathf.Round(edificio.dimensiones.y / 2) - 1;
                        j = 0 - ((int)Mathf.Round(edificio.dimensiones.y / 2)) - 1;
                    }                     
                }
                else
                {
                    topeZ = (int)edificio.dimensiones.y;
                }
            }
          
            int ib = i;
            int jb = j;

            while (i < topeX)
            {
                if (edificios[(int)posicion.x + i, (int)posicion.z] != null)
                {
                    return edificios[(int)posicion.x + i, (int)posicion.z];
                }

                i += 1;
            }

            while (j < topeZ)
            {
                if (edificios[(int)posicion.x, (int)posicion.z + j] != null)
                {
                    return edificios[(int)posicion.x, (int)posicion.z + j];
                }

                j += 1;
            }

            while (ib < topeX)
            {
                int jc = jb;
                while (jc < topeZ)
                {                 
                    if (edificios[(int)posicion.x + ib, (int)posicion.z + jc] != null)
                    {
                        return edificios[(int)posicion.x + ib, (int)posicion.z + jc];
                    }

                    jc += 1;
                }

                ib += 1;
            }
        }

        return null;
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
                if (edificios[(int)posicion.x + 1, (int)posicion.z] != null)
                {
                    Object.Destroy(edificios[(int)posicion.x + 1, (int)posicion.z].gameObject);
                    edificios[(int)posicion.x + 1, (int)posicion.z] = null;
                }
            }
            else if (rotacion == -90)
            {
                if (edificios[(int)posicion.x, (int)posicion.z + 1] != null)
                {
                    Object.Destroy(edificios[(int)posicion.x, (int)posicion.z + 1].gameObject);
                    edificios[(int)posicion.x, (int)posicion.z + 1] = null;
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

