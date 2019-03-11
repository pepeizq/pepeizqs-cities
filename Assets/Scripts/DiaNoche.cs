using UnityEngine;
using UnityEngine.UI;

public class DiaNoche : MonoBehaviour {

    public Idiomas idioma;

    public Gradient luzColorDia;

    public float maximaIntensidad = 1f;
    public float minimaIntensidad = 0f;
    public float minimoPunto = -0.2f;

    public Light sol;
    public float segundosDia = 360f;

    [Range(0, 1)]
    public float tiempoDia = 0;
    public float tiempoTotalDias = 1;

    [HideInInspector]
    public float tiempoMultiplicador = 1f;

    [SerializeField]
    private Colocar colocar;

    [SerializeField]
    private Text dias;

    [SerializeField]
    private Text reloj;

    public bool parar = false;

    public Button botonPlayPausa;
    public Sprite botonPlaySprite;
    public Sprite botonPausaSprite;

    [SerializeField]
    private Ciudad ciudad;

    private int contadorHoras = 0;

    public bool encender;

    void Update()
    {
        ciudad.ActualizarUI(false);

        if (Input.GetKeyDown(KeyCode.Space))
        {
            ArrancarParar();
        }

        if (parar == false)
        {
            tiempoDia += (Time.deltaTime / segundosDia);

            if (tiempoDia > 0.98f)
            {
                tiempoDia = 0;
                tiempoTotalDias += 1;
            }
         
            if (encender == true)
            {    
                if ((tiempoDia > 0.7f && tiempoDia <= 0.99f) || (tiempoDia > 0 && tiempoDia < 0.3f))
                {
                    colocar.ComprobarLuces(encender);
                    encender = false;               
                }
            }
            else
            {
                if (tiempoDia <= 0.7f && tiempoDia >= 0.3f)
                {
                    colocar.ComprobarLuces(encender);
                    encender = true;
                }
            }
        }

        dias.text = string.Format(idioma.CogerCadena("day").ToUpper() + " {0}", Mathf.Round(tiempoTotalDias));

        ActualizarReloj();
        ActualizarSol();
    }

    void ActualizarReloj()
    {
        float hora = tiempoDia / 0.041666666f;
        float minutos = tiempoDia / 0.00069444444f;
      
        minutos = Mathf.Round(minutos) - (Mathf.Round(hora) * 60) + 30;

        if (contadorHoras != (int)Mathf.Round(hora))
        {
            ciudad.ActualizarUI(true);
        }

        contadorHoras = (int)Mathf.Round(hora);

        string horaS = string.Format("{0}", Mathf.Round(hora));

        if (horaS == "24")
        {
            horaS = "0";        
        }

        string minutosS = string.Format("{0}",minutos);

        if (minutosS.Length == 1)
        {
            minutosS = "0" + minutosS;
        }

        reloj.text = string.Format("{0}:{1}",horaS,minutosS);
    }

    void ActualizarSol()
    {
        sol.transform.localRotation = Quaternion.Euler((tiempoDia * 360f) - 90, 0, 0);

        float dot = Mathf.Clamp01((Vector3.Dot(sol.transform.forward, Vector3.down) - minimoPunto) / tiempoDia);
        float i = ((maximaIntensidad - minimaIntensidad) * dot) + minimaIntensidad;

        sol.intensity = i;
        sol.color = luzColorDia.Evaluate(tiempoDia);

        RenderSettings.ambientLight = sol.color;
    }

    public void ArrancarParar()
    {
        if (parar == false)
        {
            parar = true;
            botonPlayPausa.GetComponent<Image>().sprite = botonPlaySprite;
        }
        else
        {
            parar = false;
            botonPlayPausa.GetComponent<Image>().sprite = botonPausaSprite;
        }
    }

    public void ActualizarLuces()
    {
        if ((tiempoDia > 0.7f && tiempoDia <= 0.99f) || (tiempoDia > 0 && tiempoDia < 0.25f))
        {
            encender = true;
        }
        else
        {
            encender = false;
        }
    }

    public bool EstadoEncendidoLuces()
    {
        if ((tiempoDia > 0.7f && tiempoDia <= 0.99f) || (tiempoDia > 0 && tiempoDia < 0.25f))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
