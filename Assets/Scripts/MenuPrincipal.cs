using System.IO;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MenuPrincipal : MonoBehaviour {

    public TextAsset ficheroIdiomas;
    public Idiomas idioma;

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
        if (File.Exists(Application.persistentDataPath + "/guardado.save"))
        {
            File.Delete(Application.persistentDataPath + "/guardado.save");
        }

        SceneManager.LoadScene("Juego");
    }

    public void SalirJuego()
    {
        Application.Quit();
    }

    public void CargarPartida()
    {
        SceneManager.LoadScene("Juego");
    }

    public void CargarIdiomaEnglish()
    {
        idioma.CargarIdioma(ficheroIdiomas, "English");
        PlayerPrefs.SetString("idioma", "English");
        CargarIdiomaTexto();
    }

    public void CargarIdiomaSpanish()
    {
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
        if (toggleAyuda.isOn == true)
        {          
            PlayerPrefs.SetString("ayuda", "true");
        }
        else
        {
            PlayerPrefs.SetString("ayuda", "false");
        }
    }
}
