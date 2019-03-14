using UnityEngine;
using UnityEngine.UI;

public class Opciones : MonoBehaviour
{
    public TextAsset ficheroIdiomas;
    public Idiomas idioma;

    public AudioSource musicaFondo;
    public AudioSource sonidoBoton;

    public Button botonSonido;
    public Sprite botonSonidoSiSprite;
    public Sprite botonSonidoNoSprite;

    public Toggle toggleAyuda;

    public bool sonidoParar;

    public Panel panelVolumen;
    public Slider sliderVolumen;

    public Dropdown dpSombras;

    public Text botonNuevaPartidaTexto;
    public Text botonCargarPartidaTexto;
    public Text botonOpcionesTexto;
    public Text botonSalirJuegoTexto;
    public Text botonVolverTexto;

    public Text botonOpcionesIdiomaTexto;
    public Text toggleOpcionesAyudaTexto;
    public Text botonOpcionesSonidoTexto;
    public Text botonOpcionesSonidoVolumenTexto;
    public Text dpOpcionesSombrasTexto;

    public void CargarInicio()
    {
        if (PlayerPrefs.HasKey("idioma") == false)
        {
            idioma.CargarIdioma(ficheroIdiomas, "English");
            PlayerPrefs.SetString("idioma", "English");
        }
        else
        {
            idioma.CargarIdioma(ficheroIdiomas, PlayerPrefs.GetString("idioma"));
        }

        if (PlayerPrefs.HasKey("sonido") == false)
        {
            PlayerPrefs.SetString("sonido", "true");
            sonidoParar = false;
        }
        else
        {
            if (PlayerPrefs.GetString("sonido") == "true")
            {
                sonidoParar = false;
            }
            else
            {
                sonidoParar = true;
            }
        }

        if (PlayerPrefs.HasKey("volumen") == false)
        {
            PlayerPrefs.SetFloat("volumen", 0.7f);
            sliderVolumen.value = 0.7f;
        }
        else
        {
            sliderVolumen.value = PlayerPrefs.GetFloat("volumen");
        }

        if (PlayerPrefs.HasKey("ayuda") == false)
        {
            PlayerPrefs.SetString("ayuda", "true");
            toggleAyuda.isOn = true;
        }
        else
        {
            if (PlayerPrefs.GetString("ayuda") == "true")
            {
                toggleAyuda.isOn = true;
            }
            else
            {
                toggleAyuda.isOn = false;
            }
        }

        dpSombras.options.Add(new Dropdown.OptionData() { text = idioma.CogerCadena("low") });
        dpSombras.options.Add(new Dropdown.OptionData() { text = idioma.CogerCadena("high") });

        if (PlayerPrefs.HasKey("sombras") == false)
        {
            PlayerPrefs.SetInt("sombras", 1);
            dpSombras.value = 1;
        }
        else
        {
            dpSombras.value = PlayerPrefs.GetInt("sombras");
        }

        if (dpSombras.value == 0)
        {
            QualitySettings.shadowProjection = ShadowProjection.StableFit;
        }
        else if (dpSombras.value == 1)
        {
            QualitySettings.shadowProjection = ShadowProjection.CloseFit;
        }
    }

    public void CargarIdiomaTexto()
    {
        botonNuevaPartidaTexto.text = idioma.CogerCadena("newGame").ToUpper();
        botonCargarPartidaTexto.text = idioma.CogerCadena("loadGame").ToUpper();
        botonOpcionesTexto.text = idioma.CogerCadena("options").ToUpper();
        botonSalirJuegoTexto.text = idioma.CogerCadena("exitGame").ToUpper();
        botonVolverTexto.text = idioma.CogerCadena("back").ToUpper();

        botonOpcionesIdiomaTexto.text = idioma.CogerCadena("languages");
        toggleOpcionesAyudaTexto.text = idioma.CogerCadena("help");
        botonOpcionesSonidoTexto.text = idioma.CogerCadena("sound");
        botonOpcionesSonidoVolumenTexto.text = idioma.CogerCadena("soundVolume");
        dpOpcionesSombrasTexto.text = idioma.CogerCadena("shadows");
    }

    public void CargarIdiomaEnglish()
    {
        sonidoBoton.Play();
        idioma.CargarIdioma(ficheroIdiomas, "English");
        PlayerPrefs.SetString("idioma", "English");
        CargarIdiomaTexto();
    }

    public void CargarIdiomaSpanish()
    {
        sonidoBoton.Play();
        idioma.CargarIdioma(ficheroIdiomas, "Spanish");
        PlayerPrefs.SetString("idioma", "Spanish");
        CargarIdiomaTexto();
    }

    public void Sonido()
    {
        if (musicaFondo != null)
        {
            musicaFondo.loop = true;
            musicaFondo.Play();
        }

        if (sonidoParar == false)
        {
            AudioListener.pause = false;
            botonSonido.GetComponent<Image>().sprite = botonSonidoSiSprite;
            PlayerPrefs.SetString("sonido", "true");
            sonidoParar = true;
            panelVolumen.GetComponent<CanvasGroup>().interactable = true;
        }
        else
        {
            AudioListener.pause = true;
            botonSonido.GetComponent<Image>().sprite = botonSonidoNoSprite;
            PlayerPrefs.SetString("sonido", "false");
            sonidoParar = false;
            panelVolumen.GetComponent<CanvasGroup>().interactable = false;
        }
    }

    public void ActivarAyuda()
    {
        sonidoBoton.Play();

        if (toggleAyuda.isOn == true)
        {
            PlayerPrefs.SetString("ayuda", "true");
        }
        else
        {
            PlayerPrefs.SetString("ayuda", "false");
        }
    }

    public void ControlVolumenSonido(Slider slider)
    {
        PlayerPrefs.SetFloat("volumen", slider.value);
        AudioListener.volume = slider.value;
    }

    public void ControlSombras(Dropdown dp)
    {
        PlayerPrefs.SetInt("sombras", dp.value);

        if (dp.value == 0)
        {
            QualitySettings.shadowProjection = ShadowProjection.StableFit;
        }
        else if (dp.value == 1)
        {
            QualitySettings.shadowProjection = ShadowProjection.CloseFit;
        }
    }
}
