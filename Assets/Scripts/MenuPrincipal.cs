using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MenuPrincipal : MonoBehaviour {

    public TextAsset ficheroIdiomas;
    public Idiomas idioma;

    public Canvas canvasPrincipal;
    public Canvas canvasOpciones;

    public Text versionTexto;

    public bool sonidoParar;

    public Button botonSonido;
    public Sprite botonSonidoSiSprite;
    public Sprite botonSonidoNoSprite;

    public AudioSource musicaFondo;
    public AudioSource sonidoBoton;

    public Button botonCargarPartida;
    
    public Text botonNuevaPartidaTexto;
    public Text botonCargarPartidaTexto;
    public Text botonOpcionesTexto;
    public Text botonSalirJuegoTexto;
    public Text botonVolverTexto;
    public Text toggleAyudaTexto;
    public Text botonSonidoTexto;

    public Toggle toggleAyuda;

    public ArbolesInicio arbolesInicio;

    [SerializeField]
    private Colocar colocar;

    private void Start()
    {
        versionTexto.text = "v" + Application.version;

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

        Sonido();

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

        CargarIdiomaTexto();

        if (File.Exists(Application.persistentDataPath + "/guardado.save") == true)
        {
            botonCargarPartida.interactable = true;
        }
        else
        {
            botonCargarPartida.interactable = false;
        }

        arbolesInicio.Colocar(colocar);
    }

    public void NuevaPartida()
    {
        sonidoBoton.Play();

        if (File.Exists(Application.persistentDataPath + "/guardado.save"))
        {
            File.Delete(Application.persistentDataPath + "/guardado.save");
        }

        SceneManager.LoadScene("Juego");
    }

    public void SalirJuego()
    {
        sonidoBoton.Play();
        Application.Quit();
    }

    public void CargarPartida()
    {
        sonidoBoton.Play();
        SceneManager.LoadScene("Juego");
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

    private void CargarIdiomaTexto()
    {
        botonNuevaPartidaTexto.text = idioma.CogerCadena("newGame").ToUpper();
        botonCargarPartidaTexto.text = idioma.CogerCadena("loadGame").ToUpper();
        botonOpcionesTexto.text = idioma.CogerCadena("options").ToUpper();
        botonSalirJuegoTexto.text = idioma.CogerCadena("exitGame").ToUpper();
        botonVolverTexto.text = idioma.CogerCadena("back").ToUpper();

        if (PlayerPrefs.GetString("ayuda") == "true")
        {
            toggleAyudaTexto.text = idioma.CogerCadena("helpYes");
        }
        else
        {
            toggleAyudaTexto.text = idioma.CogerCadena("helpNo");
        }

        if (PlayerPrefs.GetString("sonido") == "true")
        {
            botonSonidoTexto.text = idioma.CogerCadena("soundYes");
        }
        else
        {
            botonSonidoTexto.text = idioma.CogerCadena("soundNo");
        }
    }

    public void ActivarAyuda()
    {
        sonidoBoton.Play();

        if (toggleAyuda.isOn == true)
        {          
            PlayerPrefs.SetString("ayuda", "true");
            toggleAyudaTexto.text = idioma.CogerCadena("helpYes");
        }
        else
        {
            PlayerPrefs.SetString("ayuda", "false");
            toggleAyudaTexto.text = idioma.CogerCadena("helpNo");
        }
    }

    public void Sonido()
    {
        musicaFondo.loop = true;
        musicaFondo.Play();

        if (sonidoParar == false)
        {
            AudioListener.pause = false;
            botonSonido.GetComponent<Image>().sprite = botonSonidoSiSprite;
            botonSonidoTexto.text = idioma.CogerCadena("soundYes");
            PlayerPrefs.SetString("sonido", "true");
            sonidoParar = true;
        }
        else
        {
            AudioListener.pause = true;
            botonSonido.GetComponent<Image>().sprite = botonSonidoNoSprite;
            botonSonidoTexto.text = idioma.CogerCadena("soundNo");
            PlayerPrefs.SetString("sonido", "false");
            sonidoParar = false;
        }
    }

    public void MostrarOpciones()
    {
        if (canvasPrincipal.gameObject.GetComponent<CanvasGroup>().alpha == 1)
        {
            canvasPrincipal.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            canvasPrincipal.gameObject.GetComponent<CanvasGroup>().interactable = false;
            canvasPrincipal.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

            canvasOpciones.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            canvasOpciones.gameObject.GetComponent<CanvasGroup>().interactable = true;
            canvasOpciones.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
        }
        else
        {
            canvasPrincipal.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            canvasPrincipal.gameObject.GetComponent<CanvasGroup>().interactable = true;
            canvasPrincipal.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;

            canvasOpciones.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            canvasOpciones.gameObject.GetComponent<CanvasGroup>().interactable = false;
            canvasOpciones.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
        }
    }

    public void AbrirWeb1()
    {
        sonidoBoton.Play();
        Application.OpenURL("https://pepeizqapps.com/");
    }

    public void AbrirWeb2()
    {
        sonidoBoton.Play();
        Application.OpenURL("https://pepeizqdeals.com/");
    }
}
