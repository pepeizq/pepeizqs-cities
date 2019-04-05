using UnityEngine;
using UnityEngine.UI;

public class MenuJuego : MonoBehaviour
{
    public Panel panel;
    public Panel panelSub;

    public MenuPrincipal menuPrincipal;
    public Juego juego;
    public Opciones opciones;

    public AudioSource sonidoBoton;

    [SerializeField]
    private ColocarPrevio colocarPrevio;

    public Panel panelGuardarMenuPrincipal;
    public Panel panelGuardarSalir;

    public void MostrarMenu()
    {
        sonidoBoton.Play();
        colocarPrevio.QuitarTodosEdificios();

        if (panel.gameObject.GetComponent<CanvasGroup>().alpha == 0)
        {
            CambiarColor(true);
            panel.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            panel.gameObject.GetComponent<CanvasGroup>().interactable = true;
            panel.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
        }
        else
        {
            CambiarColor(false);
            panel.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            panel.gameObject.GetComponent<CanvasGroup>().interactable = false;
            panel.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
        }
    }

    public void CambiarColor(bool estado)
    {
        if (estado == true)
        {
            panelSub.gameObject.GetComponent<Image>().color = new Color(0.08f, 0.4f, 0.58f);
        }
        else
        {
            panelSub.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 50f / 255f);
        }
    }

    public void CambiarColorRatonEntra()
    {
        CambiarColor(true);
    }

    public void CambiarColorRatonSale()
    {
        CambiarColor(false);
    }

    public void CerrarPanel()
    {
        CambiarColor(false);
        panel.gameObject.GetComponent<CanvasGroup>().alpha = 0;
        panel.gameObject.GetComponent<CanvasGroup>().interactable = false;
        panel.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
    }

    public void GuardarPartida()
    {
        sonidoBoton.Play();

        juego.GuardarPartida();

        CambiarColor(false);
        panel.gameObject.GetComponent<CanvasGroup>().alpha = 0;
        panel.gameObject.GetComponent<CanvasGroup>().interactable = false;
        panel.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
    }

    public void MostrarOpciones()
    {
        sonidoBoton.Play();

        juego.canvas.gameObject.GetComponent<CanvasGroup>().alpha = 0;
        juego.canvas.gameObject.GetComponent<CanvasGroup>().interactable = false;
        juego.canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

        opciones.canvas.gameObject.GetComponent<CanvasGroup>().alpha = 1;
        opciones.canvas.gameObject.GetComponent<CanvasGroup>().interactable = true;
        opciones.canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;

        opciones.canvasOrigen = 2;
    }

    public void VolverMenuPrincipal()
    {
        sonidoBoton.Play();

        panel.gameObject.GetComponent<CanvasGroup>().alpha = 0;
        panel.gameObject.GetComponent<CanvasGroup>().interactable = false;
        panel.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

        panelGuardarMenuPrincipal.gameObject.GetComponent<CanvasGroup>().alpha = 1;
        panelGuardarMenuPrincipal.gameObject.GetComponent<CanvasGroup>().interactable = true;
        panelGuardarMenuPrincipal.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
    }

    public void VolverMenuPrincipalGuardarSi()
    {
        juego.GuardarPartida();

        juego.canvas.gameObject.GetComponent<CanvasGroup>().alpha = 0;
        juego.canvas.gameObject.GetComponent<CanvasGroup>().interactable = false;
        juego.canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

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
    }

    public void SalirJuego()
    {
        sonidoBoton.Play();

        panel.gameObject.GetComponent<CanvasGroup>().alpha = 0;
        panel.gameObject.GetComponent<CanvasGroup>().interactable = false;
        panel.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

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
