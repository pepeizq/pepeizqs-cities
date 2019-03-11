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
        edificioVacio.id = 99 + edificio.id;

        int topeX = TopeX(edificio);
        int i = SueloX(topeX);

        int topeZ = TopeZ(edificio);
        int j = SueloZ(topeZ);

        topeX = TopeX2(topeX);
        topeZ = TopeZ2(topeZ);

        int ib = i;
        int jb = j;

        if (topeX > 1)
        {
            while (i < topeX)
            {
                if (i != 0)
                {
                    if (edificios[(int)posicion.x + i, (int)posicion.z] == null)
                    {
                        edificios[(int)posicion.x + i, (int)posicion.z] = Object.Instantiate(edificioVacio);
                    }
                }

                i += 1;
            }
        }

        if (topeZ > 1)
        {
            while (j < topeZ)
            {
                if (j != 0)
                {
                    if (edificios[(int)posicion.x, (int)posicion.z + j] == null)
                    {
                        edificios[(int)posicion.x, (int)posicion.z + j] = Object.Instantiate(edificioVacio);
                    }
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
                    if ((ib != 0) && (jc != 0))
                    {
                        if (edificios[(int)posicion.x + ib, (int)posicion.z + jc] == null)
                        {
                            edificios[(int)posicion.x + ib, (int)posicion.z + jc] = Object.Instantiate(edificioVacio);
                        }
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

            if (edificio != null)
            {
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
            }
                   
            int topeZ = 0;
            int j = 0;

            if (edificio != null)
            {
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
            }

            if (edificios[(int)posicion.x, (int)posicion.z] != null)
            {
                return edificios[(int)posicion.x, (int)posicion.z];
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

    public static Construccion[,] QuitarEdificios(Construccion[,] edificios, Construccion edificio, Vector3 posicion)
    {
        if (edificio != null)
        {
            int topeX = TopeX(edificio);
            int i = SueloX(topeX);

            int topeZ = TopeZ(edificio);
            int j = SueloZ(topeZ);

            topeX = TopeX2(topeX);
            topeZ = TopeZ2(topeZ);
                
            int ib = i;
            int jb = j;

            if (topeX > 1)
            {
                while (i < topeX)
                {
                    if (edificios[(int)posicion.x + i, (int)posicion.z] != null)
                    {
                        if ((edificios[(int)posicion.x + i, (int)posicion.z].id == (edificio.id - 99)) || (edificios[(int)posicion.x + i, (int)posicion.z].id == edificio.id))
                        {
                            Object.Destroy(edificios[(int)posicion.x + i, (int)posicion.z].gameObject);
                            edificios[(int)posicion.x + i, (int)posicion.z] = null;
                        }                            
                    }

                    i += 1;
                }
            }

            if (topeZ > 1)
            {
                while (j < topeZ)
                {
                    if (edificios[(int)posicion.x, (int)posicion.z + j] != null)
                    {
                        if ((edificios[(int)posicion.x, (int)posicion.z + j].id == (edificio.id - 99)) || (edificios[(int)posicion.x, (int)posicion.z + j].id == edificio.id))
                        {
                            Object.Destroy(edificios[(int)posicion.x, (int)posicion.z + j].gameObject);
                            edificios[(int)posicion.x, (int)posicion.z + j] = null;
                        }
                    }

                    j += 1;
                }
            }

            if (topeX > 1 || topeZ > 1)
            {
                while (ib < topeX)
                {
                    int jc = jb;
                    while (jc < topeZ)
                    {
                        if (edificios[(int)posicion.x + ib, (int)posicion.z + jc] != null)
                        {
                            if ((edificios[(int)posicion.x + ib, (int)posicion.z + jc].id == (edificio.id - 99)) || (edificios[(int)posicion.x + ib, (int)posicion.z + jc].id == edificio.id))
                            {
                                Object.Destroy(edificios[(int)posicion.x + ib, (int)posicion.z + jc].gameObject);
                                edificios[(int)posicion.x + ib, (int)posicion.z + jc] = null;
                            }                           
                        }

                        jc += 1;
                    }

                    ib += 1;
                }
            }

            if ((topeX == 1) && (topeZ == 1))
            {
                if (edificios[(int)posicion.x, (int)posicion.z] != null)
                {
                    if ((edificios[(int)posicion.x, (int)posicion.z].id == (edificio.id - 99)) || (edificios[(int)posicion.x + ib, (int)posicion.z].id == edificio.id))
                    {
                        Object.Destroy(edificios[(int)posicion.x, (int)posicion.z].gameObject);
                        edificios[(int)posicion.x, (int)posicion.z] = null;
                    }          
                }
            }
        }

        return edificios;
    }

    public static Construccion QuitarEdificiosBuscar(Construccion[,] edificios, Construccion edificio, Vector3 posicion)
    {
        int i = -1;
        while (i < 1)
        {
            int j = -1;
            while (j < 1)
            {
                if ((i != 0) && (j != 0))
                {
                    if (edificios[(int)posicion.x + i, (int)posicion.z + j] != null)
                    {
                        if (edificios[(int)posicion.x + i, (int)posicion.z + j].id == (edificio.id - 99))
                        {
                            if (edificios[(int)posicion.x + i, (int)posicion.z + j].dimensiones.x > 1 || edificios[(int)posicion.x + i, (int)posicion.z + j].dimensiones.y > 1)
                            {
                                return edificios[(int)posicion.x + i, (int)posicion.z + j];
                            }
                        }
                    }
                }
                
                j += 1;
            }

            i += 1;
        }

        return null;
    }

    //------------------------------------

    private static int SueloX(int topeX)
    {
        int sueloX = 0;

        if (topeX == 3)
        {
            sueloX = -1;
        }

        if (topeX == 4)
        {
            sueloX = -2;
        }

        return sueloX;
    }

    private static int TopeX(Construccion edificio)
    {
        int topeX = 0;

        if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
        {
            topeX = (int)edificio.dimensiones.y;
        }
        else
        {
            topeX = (int)edificio.dimensiones.x;
        }

        return topeX;
    }

    private static int TopeX2(int topeX)
    {
        if (topeX == 3)
        {
            topeX = 2;
        }

        if (topeX == 4)
        {
            topeX = 2;
        }

        return topeX;
    }

    private static int SueloZ(int topeZ)
    {
        int sueloZ = 0;

        if (topeZ == 3)
        {
            sueloZ = -1;
        }

        if (topeZ == 4)
        {
            sueloZ = -2;
        }

        return sueloZ;
    }

    private static int TopeZ(Construccion edificio)
    {
        int topeZ = 0;

        if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
        {
            topeZ = (int)edificio.dimensiones.x;
        }
        else
        {
            topeZ = (int)edificio.dimensiones.y;
        }

        return topeZ;
    }

    private static int TopeZ2(int topeZ)
    {
        if (topeZ == 3)
        {
            topeZ = 2;
        }

        if (topeZ == 4)
        {
            topeZ = 2;
        }

        return topeZ;
    }

    public static int RotacionGuardadoX(int x, Construccion edificio)
    {       
        if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 2)
        {
            x = x + 1;
        }
        else if (edificio.dimensiones.x == 4 && edificio.dimensiones.y == 3)
        {
            if (edificio.rotacionColocacion == -180 || edificio.rotacionColocacion == 0)
            {
                x = x + 2;
            }
            else 
            {
                x = x + 1;
            }
        }

        return x;
    }

    public static int RotacionGuardadoZ(int z, Construccion edificio)
    {
        if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 2)
        {
            z = z + 1;
        }
        else if (edificio.dimensiones.x == 4 && edificio.dimensiones.y == 3)
        {
            if (edificio.rotacionColocacion == -180 || edificio.rotacionColocacion == 0)
            {
                z = z + 1;
            }
            else
            {
                z = z + 2;
            }              
        }

        return z;
    }
}

