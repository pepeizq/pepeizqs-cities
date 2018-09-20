using UnityEngine;

public class Ciudad : MonoBehaviour {

    public int Dinero { get; set; }
    public int Dia { get; set; }
    public float PoblacionActual { get; set; }
    public float PoblacionTope { get; set; }
    public int TrabajosActual { get; set; }
    public int TrabajosTecho { get; set; }
    public float Comida { get; set; }

    public int[] ListaConstrucciones = new int[4];
    private UIController uiControlador;

    void Start () {
        uiControlador = GetComponent<UIController>();
        Dinero = 50;
	}
	
    public void TerminarTurno()
    {
        Dia++;

        CalcularDinero();
        CalcularPoblacion();
        CalcularTrabajos();
        CalcularComida();
       
        Debug.Log("dia terminado");
        uiControlador.ActualizarDiaContador();
        uiControlador.ActualizarCiudadInfo();
    }

    void CalcularTrabajos()
    {
        TrabajosTecho = ListaConstrucciones[3] * 10;
        TrabajosActual = Mathf.Min((int)PoblacionActual, TrabajosTecho);
    }

    void CalcularDinero()
    {
        Dinero += TrabajosActual * 2;
    }

    public void DepositoDinero(int cantidad)
    {
        Dinero += cantidad;
    }

    void CalcularComida()
    {
        Comida += ListaConstrucciones[2] * 4f;
    }

    void CalcularPoblacion()
    {
        PoblacionTope = ListaConstrucciones[1] * 5;

        if (Comida >= PoblacionActual && PoblacionActual < PoblacionTope)
        {
            Comida -= PoblacionActual*.25f;
            PoblacionActual = Mathf.Min(PoblacionActual += Comida * .25f, PoblacionTope);
        }
        else if(Comida < PoblacionActual)
        {
            PoblacionActual -= (PoblacionActual - Comida) * 2f;
        }
    }
}
