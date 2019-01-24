using System.IO;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MenuPrincipal : MonoBehaviour {

    public Button botonCargarPartida;

    public Idiomas idioma;

    private void Start()
    {
        if (File.Exists(Application.persistentDataPath + "/guardado.save"))
        {
            botonCargarPartida.GetComponent<CanvasGroup>().alpha = 1;
            botonCargarPartida.GetComponent<CanvasGroup>().interactable = true;
        }

        idioma.CargarIdioma(Path.Combine(Application.dataPath, "Idiomas/Idiomas.xml"), "Spanish");
        Debug.Log(idioma.CogerCadena("test"));
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
}
