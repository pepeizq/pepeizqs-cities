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

        if (TrabajosActual >= 100 && TrabajosActual < 500)
        {
            Logros.Steam("pepeizqcities6");
        }
        else if (TrabajosActual >= 500 && TrabajosActual < 1000)
        {
            Logros.Steam("pepeizqcities7");
        }
        else if (TrabajosActual >= 1000)
        {
            Logros.Steam("pepeizqcities8");
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

        int montanteFinal = 0;

        if (TrabajosTope > 0)
        {
            TrabajosTope = (montante * (TrabajosActual / TrabajosTope));
        }
       
        if (TrabajosActual > 0)
        {
            Dinero = Dinero + montanteFinal;
        }      

        if (montanteFinal >= 100 && montanteFinal < 1000)
        {
            Logros.Steam("pepeizqcities3");
        }
        else if (montanteFinal >= 1000 && montanteFinal < 10000)
        {
            Logros.Steam("pepeizqcities4");
        }
        else if (montanteFinal >= 10000)
        {
            Logros.Steam("pepeizqcities5");
        }
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

        if (PoblacionActual >= 100 && PoblacionActual < 500)
        {
            Logros.Steam("pepeizqcities9");
        }
        else if (PoblacionActual >= 500 && PoblacionActual < 1000)
        {
            Logros.Steam("pepeizqcities10");
        }
        else if (PoblacionActual >= 1000)
        {
            Logros.Steam("pepeizqcities11");
        }
    }
}
