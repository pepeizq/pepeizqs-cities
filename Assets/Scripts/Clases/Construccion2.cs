using System;
using UnityEngine;

public class Construccion2 : IComparable<Construccion2>
{
    public Construccion edificio;
    public Vector3 posicion;

    public Construccion2(Construccion edificio, Vector3 posicion)
    {
        this.edificio = edificio;
        this.posicion = posicion;
    }

    public int CompareTo(Construccion2 other)
    {
        throw new NotImplementedException();
    }
}
