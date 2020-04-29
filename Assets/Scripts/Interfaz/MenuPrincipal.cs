using UnityEngine;

namespace Interfaz
{
    public class MenuPrincipal : MonoBehaviour
    {
        public Canvas canvas;

        public Juego juego;
        public CargarPartida cargarPartida;
        public Opciones opciones;
        public Info info;

        public AudioSource sonidoBoton;

        public void MostrarJuego()
        {
            CerrarCanvas(canvas);

            AbrirCanvas(juego.canvas);
        }

        public void MostrarCargarPartidas()
        {
            sonidoBoton.Play();

            CerrarCanvas(canvas);

            AbrirCanvas(cargarPartida.canvas);

            cargarPartida.CargarListado();
        }

        public void MostrarOpciones()
        {
            sonidoBoton.Play();

            CerrarCanvas(canvas);

            AbrirCanvas(opciones.canvas);

            opciones.canvasOrigen = 1;
        }

        public void MostrarInfo()
        {
            sonidoBoton.Play();

            CerrarCanvas(canvas);

            AbrirCanvas(info.canvas);
        }

        public void SalirJuego()
        {
            Application.Quit();
        }

        public void AbrirCodigoFuente()
        {
            sonidoBoton.Play();
            Steam.AbrirWeb("https://github.com/pepeizq/City-Builder");
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

        //-----------------------------------------------------

        public void AbrirCanvas(Canvas canvas)
        {
            canvas.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            canvas.gameObject.GetComponent<CanvasGroup>().interactable = true;
            canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
        }

        public void CerrarCanvas(Canvas canvas)
        {
            canvas.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            canvas.gameObject.GetComponent<CanvasGroup>().interactable = false;
            canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
        }
    }
}
