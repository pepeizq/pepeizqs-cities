using UnityEngine;
using UnityEngine.EventSystems;

public static class Posicion
{
    public static Vector3 Raton()
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

        if (Physics.Raycast(ray, out RaycastHit hit))
        {
            if (!EventSystem.current.IsPointerOverGameObject())
            {
                return hit.point;
            }
        }

        return Vector3.zero;
    }

    public static Vector3 Redondear(Vector3 posicion, Construccion edificio)
    {
        if (edificio != null)
        {
            float posicionX = posicion.x;
            float posicionZ = posicion.z;

            if (edificio.dimensiones.x > 1 && edificio.dimensiones.y > 1)
            {
                posicionX = posicionX + (edificio.dimensiones.x / 2);
                posicionZ = posicionZ + (edificio.dimensiones.y / 2);
            }
          
            if (edificio.dimensiones.x == 1 && edificio.dimensiones.y > 1)
            {
                posicionZ = posicionZ + (edificio.dimensiones.y / 2);
            }

            if (edificio.dimensiones.x > 1 && edificio.dimensiones.y == 1)
            {
                posicionX = posicionX + (edificio.dimensiones.x / 2);
            }

            edificio.posicionX = (int)posicionX;
            edificio.posicionZ = (int)posicionZ;

            return new Vector3(Mathf.Round(posicionX), .5f, Mathf.Round(posicionZ));
        }
        else
        {
            return new Vector3(Mathf.Round(posicion.x), .5f, Mathf.Round(posicion.z));
        }       
    }

    public static bool Limites(Vector3 gridPosicion, int limites)
    {
        bool estado = false;

        if (((int)gridPosicion.x > 0) && ((int)gridPosicion.x < limites) && ((int)gridPosicion.z > 0) && ((int)gridPosicion.z < limites))
        {
            estado = true;
        }

        return estado;
    }

    //-----------------------------------------------------

    public static Vector3 Edificio(Construccion edificio, Vector3 posicion)
    {
        if (edificio.categoria == 1)
        {
            posicion.y = 1f;
        }
        else
        {
            posicion.y = 0.5f;
        }

        if (edificio.id == 42 || edificio.id == 43)
        {
            posicion.y = 0.51f;
        }

        if (edificio.dimensiones.x > 1)
        {
            float ajuste = -0.5f;

            if (edificio.dimensiones.x > 3)
            {
                ajuste = -1f;
            }

            if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
            {
                posicion.x = posicion.x - Mathf.Round(edificio.dimensiones.x / 2) + ajuste;
            }
            else
            {
                posicion.z = posicion.z - Mathf.Round(edificio.dimensiones.x / 2) + ajuste;

                //Edificio 2x1 Comercio
                if (edificio.id == 32)
                {
                    posicion.x = posicion.x - 1f;
                    posicion.z = posicion.z + 2f;
                }
            }
        }

        if (edificio.dimensiones.y > 1)
        {
            float ajuste = -0.5f;

            if (edificio.dimensiones.y > 3)
            {
                ajuste = -1f;
            }

            if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
            {
                posicion.z = posicion.z - Mathf.Round(edificio.dimensiones.y / 2) + ajuste;
            }
            else
            {
                posicion.x = posicion.x - Mathf.Round(edificio.dimensiones.y / 2) + ajuste;

                //Edificio 2x1 Viviendas
                if (edificio.dimensiones.x == 1)
                {
                    posicion.x = posicion.x + 1f;
                    posicion.z = posicion.z - Mathf.Round(edificio.dimensiones.y / 2);
                }
            }
        }

        return posicion;
    }

    public static Vector3 EdificioAjusteCarga(Construccion edificio, Vector3 posicion)
    {
        if (edificio.dimensiones.x > 1)
        {
            float ajuste = 0.5f;

            if (edificio.dimensiones.x > 3)
            {
                ajuste = 1f;
            }

            if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
            {
                posicion.x = posicion.x - Mathf.Round(edificio.dimensiones.x / 2) + ajuste;

                if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 1)
                {
                    posicion.x = posicion.x + 2.5f;
                    posicion.z = posicion.z - 1f;
                }
            }
            else
            {
                posicion.z = posicion.z - Mathf.Round(edificio.dimensiones.x / 2) + ajuste;

                if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 1)
                {
                    posicion.x = posicion.x + 0f;
                    posicion.z = posicion.z + 0.5f;
                }
            }
        }

        if (edificio.dimensiones.y > 1)
        {
            float ajuste = 0.5f;

            if (edificio.dimensiones.y > 3)
            {
                ajuste = 1f;
            }

            if ((edificio.rotacionColocacion == -270) || (edificio.rotacionColocacion == -90))
            {
                posicion.z = posicion.z - Mathf.Round(edificio.dimensiones.y / 2) + ajuste;

                if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 2)
                {
                    posicion.x = posicion.x + 1.5f;
                    posicion.z = posicion.z + 1.5f;
                }

                if (edificio.dimensiones.x == 1 && edificio.dimensiones.y == 2)
                {
                    posicion.z = posicion.z + 2.5f;
                }

                if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 3)
                {
                    posicion.x = posicion.x + 2.5f;
                    posicion.z = posicion.z + 4.5f;
                }

                if (edificio.dimensiones.x == 4 && edificio.dimensiones.y == 3)
                {
                    posicion.x = posicion.x + 3f;
                    posicion.z = posicion.z + 2.5f;
                }
            }
            else
            {
                posicion.x = posicion.x - Mathf.Round(edificio.dimensiones.y / 2) + ajuste;
              
                if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 2)
                {
                    posicion.x = posicion.x + 1.5f;
                    posicion.z = posicion.z + 1.5f;
                }

                if (edificio.dimensiones.x == 1 && edificio.dimensiones.y == 2)
                {
                    posicion.x = posicion.x + 1.5f;
                    posicion.z = posicion.z + Mathf.Round(edificio.dimensiones.y / 2);
                }

                if (edificio.dimensiones.x == 2 && edificio.dimensiones.y == 3)
                {
                    posicion.x = posicion.x + 4.5f;
                    posicion.z = posicion.z + 2.5f;
                }

                if (edificio.dimensiones.x == 4 && edificio.dimensiones.y == 3)
                {
                    posicion.x = posicion.x + 2.5f;
                    posicion.z = posicion.z + 3f;
                }
            }
        }

        return posicion;
    }
}