using UnityEngine;

public class MenuPrincipal : MonoBehaviour
{
    public Canvas canvas;

    public Juego juego;
    public Opciones opciones;
    public Ayuda ayuda;

    public AudioSource sonidoBoton;

    public void MostrarJuego()
    {
        canvas.gameObject.GetComponent<CanvasGroup>().alpha = 0;
        canvas.gameObject.GetComponent<CanvasGroup>().interactable = false;
        canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

        juego.canvas.gameObject.GetComponent<CanvasGroup>().alpha = 1;
        juego.canvas.gameObject.GetComponent<CanvasGroup>().interactable = true;
        juego.canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true; 
    }

    public void MostrarOpciones()
    {
        sonidoBoton.Play();

        canvas.gameObject.GetComponent<CanvasGroup>().alpha = 0;
        canvas.gameObject.GetComponent<CanvasGroup>().interactable = false;
        canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

        opciones.canvas.gameObject.GetComponent<CanvasGroup>().alpha = 1;
        opciones.canvas.gameObject.GetComponent<CanvasGroup>().interactable = true;
        opciones.canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;

        opciones.canvasOrigen = 1;
    }

    public void AbrirWeb1()
    {
        sonidoBoton.Play();
        Application.OpenURL("https://pepeizqapps.com/");
        Logros.Steam("pepeizqcities1");
    }

    public void AbrirWeb2()
    {
        sonidoBoton.Play();
        Application.OpenURL("https://pepeizqdeals.com/");
        Logros.Steam("pepeizqcities2");
    }

    public void SalirJuego()
    {
        Application.Quit();
    }
}
