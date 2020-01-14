using UnityEngine;

public class Construccion : MonoBehaviour
{
    public int id; //Identificador prefab

    [HideInInspector]
    public int id2; //Identificador colocacion

    public int categoria; //0 decoracion, 1 carreteras, 2 casas, 3 comida, 4 tiendas, 5 industria, 6 especial

    public int coste;
    public string nombre;

    public int poblacion;
    public int comida;
    public int trabajo;
    public int ingresos;

    public Sprite botonImagen;

    public Vector2 dimensiones;

    [HideInInspector]
    public int rotacionColocacion = 0;
    
    public int rotacionAdicional;

    [HideInInspector]
    public int posicionX;

    [HideInInspector]
    public int posicionZ;

    public float luzIntesidad; 
    public float luzRango;
}
