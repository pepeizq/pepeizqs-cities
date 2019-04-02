using UnityEngine;

public class MenuJuego : MonoBehaviour
{
    public Canvas canvas;

    public MenuPrincipal menuPrincipal;
    public Juego juego;
    public Opciones opciones;

    public AudioSource sonidoBoton;

    [SerializeField]
    private ColocarPrevio colocarPrevio;

    [SerializeField]
    private DiaNoche diaNoche;

    public Panel panelJuego;
    public Panel panelGuardarMenuPrincipal;
    public Panel panelGuardarSalir;

    public void MostrarMenu()
    {
        sonidoBoton.Play();
        colocarPrevio.QuitarTodosEdificios();

        if (diaNoche.parar == false)
        {
            diaNoche.ArrancarParar();
        }

        juego.canvas.gameObject.GetComponent<CanvasGroup>().alpha = 0;
        juego.canvas.gameObject.GetComponent<CanvasGroup>().interactable = false;
        juego.canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

        canvas.gameObject.GetComponent<CanvasGroup>().alpha = 1;
        canvas.gameObject.GetComponent<CanvasGroup>().interactable = true;
        canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
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

        opciones.canvasOrigen = 2;
    }

    public void VolverMenuPrincipal()
    {
        sonidoBoton.Play();

        panelJuego.gameObject.GetComponent<CanvasGroup>().alpha = 0;
        panelJuego.gameObject.GetComponent<CanvasGroup>().interactable = false;
        panelJuego.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

        panelGuardarMenuPrincipal.gameObject.GetComponent<CanvasGroup>().alpha = 1;
        panelGuardarMenuPrincipal.gameObject.GetComponent<CanvasGroup>().interactable = true;
        panelGuardarMenuPrincipal.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
    }

    public void VolverMenuPrincipalGuardarSi()
    {
        juego.GuardarPartida();

        panelGuardarMenuPrincipal.gameObject.GetComponent<CanvasGroup>().alpha = 0;
        panelGuardarMenuPrincipal.gameObject.GetComponent<CanvasGroup>().interactable = false;
        panelGuardarMenuPrincipal.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

        menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().alpha = 1;
        menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().interactable = true;
        menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
    }

    public void VolverMenuPrincipalGuardarNo()
    {
        panelGuardarMenuPrincipal.gameObject.GetComponent<CanvasGroup>().alpha = 0;
        panelGuardarMenuPrincipal.gameObject.GetComponent<CanvasGroup>().interactable = false;
        panelGuardarMenuPrincipal.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

        menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().alpha = 1;
        menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().interactable = true;
        menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
    }

    public void VolverJuego()
    {
        sonidoBoton.Play();

        canvas.gameObject.GetComponent<CanvasGroup>().alpha = 0;
        canvas.gameObject.GetComponent<CanvasGroup>().interactable = false;
        canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

        juego.canvas.gameObject.GetComponent<CanvasGroup>().alpha = 1;
        juego.canvas.gameObject.GetComponent<CanvasGroup>().interactable = true;
        juego.canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;

        if (diaNoche.parar == true)
        {
            diaNoche.ArrancarParar();
        }
    }

    public void SalirJuego()
    {
        sonidoBoton.Play();

        panelJuego.gameObject.GetComponent<CanvasGroup>().alpha = 0;
        panelJuego.gameObject.GetComponent<CanvasGroup>().interactable = false;
        panelJuego.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

        panelGuardarSalir.gameObject.GetComponent<CanvasGroup>().alpha = 1;
        panelGuardarSalir.gameObject.GetComponent<CanvasGroup>().interactable = true;
        panelGuardarSalir.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
    }

    public void SalirJuegoGuardarSi()
    {
        juego.GuardarPartida();

        Application.Quit();
    }

    public void SalirJuegoGuardarNo()
    {
        Application.Quit();
    }
}
