using System.Collections.Generic;

[System.Serializable]
public class Guardado
{
    public List<int> edificiosID = new List<int>();
    public List<int> edificiosX = new List<int>();
    public List<int> edificiosZ = new List<int>();
    public List<int> edificiosRotacion = new List<int>();

    public int camaraX = 0;
    public int camaraY = 0;
    public int camaraZ = 0;

    public int dia = 0;
    public float hora = 0f;

    public int dinero = 0;
    public float poblacionActual = 0;
    public float poblacionTope = 0;
    public int trabajosActual = 0;
    public int trabajosTope = 0;
    public float comida = 0;
}

