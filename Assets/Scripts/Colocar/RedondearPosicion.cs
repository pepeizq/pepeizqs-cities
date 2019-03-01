using UnityEngine;

public static class RedondearPosicion
{
    public static Vector3 Buscar(Vector3 posicion, Construccion edificio)
    {
        if (edificio != null)
        {
            float posicionX = posicion.x;
            float posicionZ = posicion.z;

            if (edificio.dimensiones.x > 1)
            {
                posicionX = posicionX + ((edificio.dimensiones.x - 1) / 2);
            }

            if (edificio.dimensiones.y > 1)
            {
                posicionZ = posicionZ + ((edificio.dimensiones.y - 1) / 2);
            }

            return new Vector3(Mathf.Round(posicionX), .5f, Mathf.Round(posicionZ));
        }
        else
        {
            return new Vector3(Mathf.Round(posicion.x), .5f, Mathf.Round(posicion.z));
        }       
    }
}