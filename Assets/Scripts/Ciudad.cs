using System.IO;
using UnityEngine;
using UnityEngine.UI;

public class Ciudad : MonoBehaviour {

    [SerializeField]
    private Colocar colocar;

    [SerializeField]
    private Text dineroTexto;

    [SerializeField]
    private Text poblacionTexto;

    [SerializeField]
    private Text trabajoTexto;

    [SerializeField]
    private Text comidaTexto;

    public int Dinero { get; set; }
    public float PoblacionActual { get; set; }
    public float PoblacionTope { get; set; }
    public int TrabajosActual { get; set; }
    public int TrabajosTope { get; set; }
    public float Comida { get; set; }

    void Start ()
    {
        if (!File.Exists(Application.persistentDataPath + "/guardado.save"))
        {
            Dinero = 2000000;
            //Dinero = 200;
        }
    }

    public void ActualizarUI(bool nuevaHora)
    {
        if (nuevaHora == true)
        {
            CalcularIngresosDinero();
            CalcularPoblacion();
            CalcularTrabajos();
            CalcularComida();
        }

        dineroTexto.text = string.Format("{0}", Dinero);
        poblacionTexto.text = string.Format("{0}/{1}", (int)PoblacionActual, (int)PoblacionTope);
        trabajoTexto.text = string.Format("{0}/{1}", TrabajosActual, TrabajosTope);
        comidaTexto.text = string.Format("{0}", (int)Comida);
    }

    void CalcularTrabajos()
    {
        int tope = 0;

        foreach (Construccion edificio in colocar.edificios)
        {
            if (edificio != null)
            {
                if (edificio.trabajo != 0)
                {
                    tope = tope + edificio.trabajo;
                }
            }
        }

        TrabajosTope = tope;

        if (PoblacionActual > 0)
        {
            TrabajosActual = Mathf.Min((int)PoblacionActual, TrabajosTope);
        }      
    }

    void CalcularIngresosDinero()
    {
        int montante = 0;

        foreach (Construccion edificio in colocar.edificios)
        {
            if (edificio != null)
            {
                if (edificio.ingresos != 0)
                {
                    montante = montante + edificio.ingresos;
                }
            }
        }

        Dinero += montante;
    }

    public void DepositoDinero(int cantidad)
    {
        Dinero += cantidad;
    }

    void CalcularComida()
    {
        int cantidad = 0;

        foreach (Construccion edificio in colocar.edificios)
        {
            if (edificio != null)
            {
                if (edificio.comida != 0)
                {
                    cantidad = cantidad + edificio.comida;
                }
            }
        }

        if (Comida >= 0 && Comida <= 1000)
        {
            if ((Comida + cantidad) >= 0)
            {
                Comida += cantidad;
            }            
        }     
    }

    void CalcularPoblacion()
    {
        int tope = 0;

        foreach (Construccion edificio in colocar.edificios)
        {
            if (edificio != null)
            {
                if (edificio.poblacion != 0)
                {
                    tope = tope + edificio.poblacion;
                }
            }
        }

        PoblacionTope = tope;

        if (Comida > 0)
        {
            if (PoblacionActual < PoblacionTope)
            {
                PoblacionActual = PoblacionActual + (PoblacionTope / 10);
            }         
        }
        else
        {
            if (PoblacionActual > 0)
            {
                PoblacionActual = PoblacionActual - (PoblacionActual / 10);
            }          
        }
    }
}
