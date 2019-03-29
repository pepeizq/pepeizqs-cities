using UnityEngine;
using UnityEngine.UI;

public class Opciones : MonoBehaviour
{
    public TextAsset ficheroIdiomas;
    public Idiomas idioma;

    public Button botonGeneral;
    public Text botonGeneralTexto;

    public Button botonGraficos;
    public Text botonGraficosTexto;

    //public Button botonTeclado;
    //public Text botonTecladoTexto;

    public Panel panelGeneral;
    public Panel panelGraficos;
    public Panel panelGraficosSombrasCalidad;
    //public Panel panelTeclado;

    public AudioSource musicaFondo;
    public AudioSource sonidoBoton;

    public Button botonSonido;
    public Sprite botonSonidoSiSprite;
    public Sprite botonSonidoNoSprite;

    public Toggle toggleAyuda;
    public Toggle toggleSombras;

    public bool sonidoParar;

    public Panel panelVolumen;
    public Slider sliderVolumen;

    public Dropdown dpSombras;
    public Dropdown dpTexturas;
    public Dropdown dpAntiAliasing;

    public Text botonNuevaPartidaTexto;
    public Text botonCargarPartidaTexto;
    public Text botonOpcionesTexto;
    public Text botonSalirJuegoTexto;
    public Text botonVolverTexto;

    public Text botonOpcionesIdiomaTexto;
    public Text toggleOpcionesAyudaTexto;
    public Text botonOpcionesSonidoTexto;
    public Text botonOpcionesSonidoVolumenTexto;
    public Text toggleOpcionesSombrasTexto;
    public Text dpOpcionesSombrasTexto;
    public Text dpOpcionesTexturasTexto;
    public Text dpOpcionesAntiAliasingTexto;

    public void CargarInicio()
    {
        MostrarPanelColorBoton(botonGeneral, new Color(0.08f, 0.4f, 0.58f));
        panelGraficos.gameObject.SetActive(false);
        //panelTeclado.gameObject.SetActive(false);

        //-----------------------------------------------------------

        if (PlayerPrefs.HasKey("idioma") == false)
        {
            idioma.CargarIdioma(ficheroIdiomas, "English");
            PlayerPrefs.SetString("idioma", "English");
        }
        else
        {
            idioma.CargarIdioma(ficheroIdiomas, PlayerPrefs.GetString("idioma"));
        }

        //-----------------------------------------------------------

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

        //-----------------------------------------------------------

        if (PlayerPrefs.HasKey("volumen") == false)
        {
            PlayerPrefs.SetFloat("volumen", 0.7f);
            sliderVolumen.value = 0.7f;
        }
        else
        {
            sliderVolumen.value = PlayerPrefs.GetFloat("volumen");
        }

        //-----------------------------------------------------------

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

        //-----------------------------------------------------------

        if (PlayerPrefs.HasKey("sombras") == false)
        {
            PlayerPrefs.SetInt("sombras", 1);
            toggleSombras.isOn = true;
        }
        else
        {
            if (PlayerPrefs.GetInt("sombras") == 0)
            {
                toggleSombras.isOn = false;
            }
            else
            {
                toggleSombras.isOn = true;
            }
        }

        if (toggleSombras.isOn == true)
        {
            QualitySettings.shadows = ShadowQuality.HardOnly;

            panelGraficosSombrasCalidad.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            panelGraficosSombrasCalidad.gameObject.GetComponent<CanvasGroup>().interactable = true;
            panelGraficosSombrasCalidad.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
        }
        else
        {
            QualitySettings.shadows = ShadowQuality.Disable;

            panelGraficosSombrasCalidad.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            panelGraficosSombrasCalidad.gameObject.GetComponent<CanvasGroup>().interactable = false;
            panelGraficosSombrasCalidad.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
        }

        //-----------------------------------------------------------

        dpSombras.options.Add(new Dropdown.OptionData() { text = idioma.CogerCadena("low") });
        dpSombras.options.Add(new Dropdown.OptionData() { text = idioma.CogerCadena("high") });

        if (PlayerPrefs.HasKey("sombrasCalidad") == false)
        {
            PlayerPrefs.SetInt("sombrasCalidad", 1);
            dpSombras.value = 1;
        }
        else
        {
            dpSombras.value = PlayerPrefs.GetInt("sombrasCalidad");
        }

        if (dpSombras.value == 0)
        {
            QualitySettings.shadowProjection = ShadowProjection.StableFit;
        }
        else if (dpSombras.value == 1)
        {
            QualitySettings.shadowProjection = ShadowProjection.CloseFit;
        }

        //-----------------------------------------------------------

        dpTexturas.options.Add(new Dropdown.OptionData() { text = "Full Res" });
        dpTexturas.options.Add(new Dropdown.OptionData() { text = "Half Res" });
        dpTexturas.options.Add(new Dropdown.OptionData() { text = "Quarter Res" });
        dpTexturas.options.Add(new Dropdown.OptionData() { text = "Eighth Res" });

        if (PlayerPrefs.HasKey("texturas") == false)
        {
            PlayerPrefs.SetInt("texturas", 0);
            dpTexturas.value = 0;
        }
        else
        {
            dpTexturas.value = PlayerPrefs.GetInt("texturas");
        }

        QualitySettings.masterTextureLimit = dpTexturas.value;

        //-----------------------------------------------------------

        dpAntiAliasing.options.Add(new Dropdown.OptionData() { text = "Disasbled" });
        dpAntiAliasing.options.Add(new Dropdown.OptionData() { text = "2x" });
        dpAntiAliasing.options.Add(new Dropdown.OptionData() { text = "4x" });
        dpAntiAliasing.options.Add(new Dropdown.OptionData() { text = "8x" });

        if (PlayerPrefs.HasKey("antiAliasing") == false)
        {
            PlayerPrefs.SetInt("antiAliasing", 1);
            dpAntiAliasing.value = 1;
        }
        else
        {
            dpAntiAliasing.value = PlayerPrefs.GetInt("antiAliasing");
        }

        if (dpAntiAliasing.value == 0)
        {
            QualitySettings.antiAliasing = 0;
        }
        else if (dpAntiAliasing.value == 1)
        {
            QualitySettings.antiAliasing = 2;
        }
        else if (dpAntiAliasing.value == 2)
        {
            QualitySettings.antiAliasing = 4;
        }
        else if (dpAntiAliasing.value == 3)
        {
            QualitySettings.antiAliasing = 8;
        }
    }

    public void MostrarPanel(Panel panelEnseñar)
    {
        sonidoBoton.Play();

        panelGeneral.gameObject.GetComponent<CanvasGroup>().alpha = 0;
        panelGeneral.gameObject.GetComponent<CanvasGroup>().interactable = false;
        panelGeneral.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
        panelGeneral.gameObject.SetActive(false);

        panelGraficos.gameObject.GetComponent<CanvasGroup>().alpha = 0;
        panelGraficos.gameObject.GetComponent<CanvasGroup>().interactable = false;
        panelGraficos.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
        panelGraficos.gameObject.SetActive(false);

        //panelTeclado.gameObject.GetComponent<CanvasGroup>().alpha = 0;
        //panelTeclado.gameObject.GetComponent<CanvasGroup>().interactable = false;
        //panelTeclado.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
        //panelTeclado.gameObject.SetActive(false);

        panelEnseñar.gameObject.GetComponent<CanvasGroup>().alpha = 1;
        panelEnseñar.gameObject.GetComponent<CanvasGroup>().interactable = true;
        panelEnseñar.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
        panelEnseñar.gameObject.SetActive(true);

        if (panelEnseñar.nombre == "general")
        {
            MostrarPanelColorBoton(botonGeneral, new Color(0.08f, 0.4f, 0.58f));
        }
        else
        {
            MostrarPanelColorBoton(botonGeneral, Color.white);
        }

        if (panelEnseñar.nombre == "graficos")
        {
            MostrarPanelColorBoton(botonGraficos, new Color(0.08f, 0.4f, 0.58f));
        }
        else
        {
            MostrarPanelColorBoton(botonGraficos, Color.white);
        }

        //if (panelEnseñar.nombre == "teclado")
        //{
        //    MostrarPanelColorBoton(botonTeclado, new Color(0.08f, 0.4f, 0.58f));
        //}
        //else
        //{
        //    MostrarPanelColorBoton(botonTeclado, Color.white);
        //}
    }

    private void MostrarPanelColorBoton(Button boton, Color color)
    {
        var colores = boton.colors;
        colores.normalColor = color;
        boton.colors = colores;
    }

    public void CargarIdiomaTexto()
    {
        botonNuevaPartidaTexto.text = idioma.CogerCadena("newGame").ToUpper();
        botonCargarPartidaTexto.text = idioma.CogerCadena("loadGame").ToUpper();
        botonOpcionesTexto.text = idioma.CogerCadena("options").ToUpper();
        botonSalirJuegoTexto.text = idioma.CogerCadena("exitGame").ToUpper();
        botonVolverTexto.text = idioma.CogerCadena("back");

        botonGeneralTexto.text = idioma.CogerCadena("general");
        botonGraficosTexto.text = idioma.CogerCadena("graphics");
        //botonTecladoTexto.text = idioma.CogerCadena("keyboard");

        botonOpcionesIdiomaTexto.text = idioma.CogerCadena("languages");
        toggleOpcionesAyudaTexto.text = idioma.CogerCadena("help");
        botonOpcionesSonidoTexto.text = idioma.CogerCadena("sound");
        botonOpcionesSonidoVolumenTexto.text = idioma.CogerCadena("soundVolume");
        toggleOpcionesSombrasTexto.text = idioma.CogerCadena("shadows");
        dpOpcionesSombrasTexto.text = idioma.CogerCadena("shadowsQuality");
        dpOpcionesTexturasTexto.text = idioma.CogerCadena("textures");
        dpOpcionesAntiAliasingTexto.text = idioma.CogerCadena("antiAliasing");
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

    public void ControlSombras(Toggle toggle)
    {
        if (toggle.isOn == true)
        {
            PlayerPrefs.SetInt("sombras", 1);
            QualitySettings.shadows = ShadowQuality.HardOnly;

            panelGraficosSombrasCalidad.gameObject.GetComponent<CanvasGroup>().interactable = true;
            panelGraficosSombrasCalidad.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
        }
        else
        {
            PlayerPrefs.SetInt("sombras", 0);
            QualitySettings.shadows = ShadowQuality.Disable;

            panelGraficosSombrasCalidad.gameObject.GetComponent<CanvasGroup>().interactable = false;
            panelGraficosSombrasCalidad.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
        }
    }

    public void ControlSombrasCalidad(Dropdown dp)
    {
        PlayerPrefs.SetInt("sombrasCalidad", dp.value);

        if (dp.value == 0)
        {
            QualitySettings.shadowProjection = ShadowProjection.StableFit;
        }
        else if (dp.value == 1)
        {
            QualitySettings.shadowProjection = ShadowProjection.CloseFit;
        }
    }

    public void ControlTexturas(Dropdown dp)
    {
        PlayerPrefs.SetInt("texturas", dp.value);
        QualitySettings.masterTextureLimit = dp.value;
    }

    public void ControlAntiAliasing(Dropdown dp)
    {
        PlayerPrefs.SetInt("antiAliasing", dp.value);

        if (dp.value == 0)
        {
            QualitySettings.antiAliasing = 0;
        }
        else if (dp.value == 1)
        {
            QualitySettings.antiAliasing = 2;
        }
        else if (dp.value == 2)
        {
            QualitySettings.antiAliasing = 4;
        }
        else if (dp.value == 3)
        {
            QualitySettings.antiAliasing = 8;
        }
    }
}
