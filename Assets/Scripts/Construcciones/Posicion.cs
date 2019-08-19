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

            if (edificio.dimensiones.x > 1)
            {
                posicionX = posicionX + (edificio.dimensiones.x / 2);
            }

            if (edificio.dimensiones.y > 1)
            {
                posicionZ = posicionZ + (edificio.dimensiones.y / 2);
            }

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
}