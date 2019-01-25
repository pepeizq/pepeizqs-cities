using System.IO;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MenuPrincipal : MonoBehaviour {

    public Button botonCargarPartida;

    public Idiomas idioma;

    public Text botonNuevaPartidaTexto;
    public Text botonCargarPartidaTexto;
    public Text botonSalirJuegoTexto;
    public Text toggleAyudaTexto;

    public Toggle toggleAyuda;

    private void Start()
    {    
        if (PlayerPrefs.HasKey("idioma") == false)
        {
            idioma.CargarIdioma(Path.Combine(Application.dataPath, "Idiomas/Idiomas.xml"), "English");
            PlayerPrefs.SetString("idioma", "English");
        }
        else
        {
            idioma.CargarIdioma(Path.Combine(Application.dataPath, "Idiomas/Idiomas.xml"), PlayerPrefs.GetString("idioma"));
        }

        CargarIdiomaTexto();

        if (PlayerPrefs.HasKey("ayuda") == false)
        {
            PlayerPrefs.SetString("ayuda", "true");
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
        idioma.CargarIdioma(Path.Combine(Application.dataPath, "Idiomas/Idiomas.xml"), "English");
        PlayerPrefs.SetString("idioma", "English");
        CargarIdiomaTexto();
    }

    public void CargarIdiomaSpanish()
    {
        idioma.CargarIdioma(Path.Combine(Application.dataPath, "Idiomas/Idiomas.xml"), "Spanish");
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
