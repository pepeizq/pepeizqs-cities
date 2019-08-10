using System.Collections.Generic;

[System.Serializable]
public class Guardado
{
    public List<Terreno2> terrenos = new List<Terreno2>();

    public List<int> edificiosID = new List<int>();
    public List<int> edificiosX = new List<int>();
    public List<int> edificiosZ = new List<int>();
    public List<int> edificiosRotacion = new List<int>();

    public float camaraPosicionX = 0;
    public float camaraPosicionY = 0;
    public float camaraPosicionZ = 0;

    public float camaraRotacionX = 0;
    public float camaraRotacionY = 0;
    public float camaraRotacionZ = 0;

    public int dia = 0;
    public float hora = 0f;

    public int dinero = 0;
    public float poblacionActual = 0;
    public float poblacionTope = 0;
    public int trabajosActual = 0;
    public int trabajosTope = 0;
    public float comida = 0;
}

