using Construcciones;
using UnityEngine;
using UnityEngine.UI;

public class Ciudad : MonoBehaviour {

    [SerializeField]
    private Text dineroTexto = null;

    [SerializeField]
    private Text poblacionTexto = null;

    [SerializeField]
    private Text trabajoTexto = null;

    [SerializeField]
    private Text comidaTexto = null;

    public int Dinero { get; set; }
    public float PoblacionActual { get; set; }
    public float PoblacionTope { get; set; }
    public int TrabajosActual { get; set; }
    public int TrabajosTope { get; set; }
    public float Comida { get; set; }
    public bool ModoFacil { get; set; }

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

        foreach (Construccion edificio in Construir.edificios)
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

        if (ModoFacil == false)
        {
            if (TrabajosActual >= 100 && TrabajosActual < 500)
            {
                Steam.Logros("pepeizqcities6");
            }
            else if (TrabajosActual >= 500 && TrabajosActual < 1000)
            {
                Steam.Logros("pepeizqcities7");
            }
            else if (TrabajosActual >= 1000)
            {
                Steam.Logros("pepeizqcities8");
            }
        }
    }

    void CalcularIngresosDinero()
    {
        int montante = 1;

        foreach (Construccion edificio in Construir.edificios)
        {
            if (edificio != null)
            {
                if (edificio.ingresos != 0)
                {
                    montante = montante + edificio.ingresos;
                }
            }
        }

        float porcentajeMontante = 0;

        if (TrabajosTope > 0)
        {
            porcentajeMontante = (100 * TrabajosActual) / TrabajosTope;
            porcentajeMontante = porcentajeMontante / 100;
        }
    
        float montanteFinal = montante * porcentajeMontante;

        if (TrabajosActual >= 0)
        {
            Dinero = Dinero + (int)montanteFinal;
        }

        if (ModoFacil == false)
        {
            if (montanteFinal >= 100 && montanteFinal < 1000)
            {
                Steam.Logros("pepeizqcities3");
            }
            else if (montanteFinal >= 1000 && montanteFinal < 10000)
            {
                Steam.Logros("pepeizqcities4");
            }
            else if (montanteFinal >= 10000)
            {
                Steam.Logros("pepeizqcities5");
            }
        }         
    }

    public void DepositoDinero(int cantidad)
    {
        Dinero += cantidad;
    }

    void CalcularComida()
    {
        int cantidad = 0;

        foreach (Construccion edificio in Construir.edificios)
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

        foreach (Construccion edificio in Construir.edificios)
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

        if (ModoFacil == false)
        {
            if (PoblacionActual >= 100 && PoblacionActual < 500)
            {
                Steam.Logros("pepeizqcities9");
            }
            else if (PoblacionActual >= 500 && PoblacionActual < 1000)
            {
                Steam.Logros("pepeizqcities10");
            }
            else if (PoblacionActual >= 1000)
            {
                Steam.Logros("pepeizqcities11");
            }
        }
    }
}
