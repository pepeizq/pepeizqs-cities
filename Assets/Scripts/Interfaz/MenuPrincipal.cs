using UnityEngine;

namespace Interfaz
{
    public class MenuPrincipal : MonoBehaviour
    {
        public Canvas canvas;

        public Juego juego;
        public CargarPartida cargarPartida;
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

        public void MostrarCargarPartidas()
        {
            sonidoBoton.Play();

            canvas.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            canvas.gameObject.GetComponent<CanvasGroup>().interactable = false;
            canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

            cargarPartida.canvas.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            cargarPartida.canvas.gameObject.GetComponent<CanvasGroup>().interactable = true;
            cargarPartida.canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;

            cargarPartida.CargarListado();
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
            Steam.AbrirWeb("https://pepeizqapps.com/");
            Steam.Logros("pepeizqcities1");
        }

        public void AbrirWeb2()
        {
            sonidoBoton.Play();
            Steam.AbrirWeb("https://pepeizqdeals.com/");
            Steam.Logros("pepeizqcities2");
        }

        public void SalirJuego()
        {
            Application.Quit();
        }
    }

}
