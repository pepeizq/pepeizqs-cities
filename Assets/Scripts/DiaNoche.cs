using UnityEngine;
using UnityEngine.UI;

public class DiaNoche : MonoBehaviour {

    public TextAsset ficheroIdiomas;
    public Idiomas idioma;

    public Light sol;
    public float segundosDia = 360f;

    [Range(0, 1)]
    public float tiempoDia = 0;
    public float tiempoTotalDias = 1;

    [HideInInspector]
    public float tiempoMultiplicador = 1f;

    float solIntensidadInicio;

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

    void Start()
    {
        idioma.CargarIdioma(ficheroIdiomas, PlayerPrefs.GetString("idioma"));

        solIntensidadInicio = sol.intensity;  
    }

    void Update()
    {
        ciudad.ActualizarUI(false);

        if (parar == false)
        {
            tiempoDia += (Time.deltaTime / segundosDia) * tiempoMultiplicador;

            if (tiempoDia > 0.98)
            {
                tiempoDia = 0;
                tiempoTotalDias += 1;
            } 
        }

        dias.text = string.Format(idioma.CogerCadena("day").ToUpper() + " {0}", Mathf.Round(tiempoTotalDias));

        ActualizarReloj();
        ActualizarSol();

        colocar.ComprobarLuces(tiempoDia);
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

        float intesidadMultiplicador = 1;

        if (tiempoDia >= 0.25f || tiempoDia <= 0.65f)
        {
            intesidadMultiplicador = 1;
        }
        else if (tiempoDia <= 0.25f)
        {
            intesidadMultiplicador = Mathf.Clamp01((tiempoDia - 0.25f) * (1 / 0.02f));
        }
        else if (tiempoDia >= 0.65f)
        {
            intesidadMultiplicador = Mathf.Clamp01(1 - ((tiempoDia - 0.65f) * (1 / 0.02f)));
        }

        sol.intensity = solIntensidadInicio * intesidadMultiplicador;
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
}
