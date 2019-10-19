using UnityEngine;

namespace Construcciones
{
    public static class Funciones
    {          
        public static Construccion[,] QuitarEdificios(Construccion[,] edificios, Construccion edificio, Vector3 posicion)
        {
            if (edificio != null)
            {
                int id2 = edificio.id2;

                foreach (Construccion subedificio in edificios)
                {
                    if (subedificio != null)
                    {
                        if (id2 == subedificio.id2)
                        {
                            int x = subedificio.posicionX;
                            int z = subedificio.posicionZ;

                            Object.DestroyImmediate(subedificio.gameObject, true);
                            edificios[x, z] = null;
                        }
                    }
                }
            }

            return edificios;
        }

        public static int RotacionGuardadoX(int x, Construccion edificio)
        {
            if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 1)
            {
                if (edificio.rotacionColocacion == -180 || edificio.rotacionColocacion == 0)
                {
                    x = x + 1;
                }
            }
            else if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 2)
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
            if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 1)
            {
                if (edificio.rotacionColocacion == -270 || edificio.rotacionColocacion == -90)
                {
                    z = z + 1;
                }
            }
            else if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 2)
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
}


