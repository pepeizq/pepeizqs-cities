using System.IO;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MenuPrincipal : MonoBehaviour {

    public TextAsset ficheroIdiomas;
    public Idiomas idioma;

    public bool sonidoParar;

    public Button botonSonido;
    public Sprite botonSonidoSiSprite;
    public Sprite botonSonidoNoSprite;

    public AudioSource musicaFondo;
    public AudioSource sonidoBoton;

    public Button botonCargarPartida;
    
    public Text botonNuevaPartidaTexto;
    public Text botonCargarPartidaTexto;
    public Text botonSalirJuegoTexto;
    public Text toggleAyudaTexto;

    public Toggle toggleAyuda;

    private void Start()
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

        CargarIdiomaTexto();

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

        if (File.Exists(Application.persistentDataPath + "/guardado.save"))
        {
            botonCargarPartida.GetComponent<CanvasGroup>().alpha = 1;
            botonCargarPartida.GetComponent<CanvasGroup>().interactable = true;
            botonCargarPartida.gameObject.SetActive(true);
        }
        else
        {
            botonCargarPartida.gameObject.SetActive(false);
        }
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
        botonSalirJuegoTexto.text = idioma.CogerCadena("exitGame").ToUpper();
        toggleAyudaTexto.text = idioma.CogerCadena("help").ToUpper();
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

    public void Sonido()
    {
        musicaFondo.loop = true;
        musicaFondo.Play();

        if (sonidoParar == false)
        {
            AudioListener.pause = false;
            botonSonido.GetComponent<Image>().sprite = botonSonidoSiSprite;
            PlayerPrefs.SetString("sonido", "true");
            sonidoParar = true;
        }
        else
        {
            AudioListener.pause = true;
            botonSonido.GetComponent<Image>().sprite = botonSonidoNoSprite;
            PlayerPrefs.SetString("sonido", "false");
            sonidoParar = false;
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
