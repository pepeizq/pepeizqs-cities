using UnityEngine;

public static class RedondearPosicion
{
    public static Vector3 Buscar(Vector3 posicion)
    {
        return new Vector3(Mathf.Round(posicion.x), .5f, Mathf.Round(posicion.z));
    }
}