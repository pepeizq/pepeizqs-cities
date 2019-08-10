using UnityEngine;

public class Terreno2 : MonoBehaviour
{
    public Terreno terreno;
    public Vector3 posicion;

    public Terreno2(Terreno terreno, Vector3 posicion)
    {
        this.terreno = terreno;
        this.posicion = posicion;
    }
}
