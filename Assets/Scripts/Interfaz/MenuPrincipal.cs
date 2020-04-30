using UnityEngine;

namespace Interfaz
{
    public class MenuPrincipal : MonoBehaviour
    {
        public Canvas canvas;

        public Juego juego;
        public CargarPartida cargarPartida;
        public Opciones opciones;

        public Panel panelInfo;

        public Opciones2.Sonido sonido;

        public void MostrarJuego()
        {
            Objetos.Ocultar(canvas.gameObject);       
            Objetos.Mostrar(juego.canvas.gameObject);
        }

        public void MostrarCargarPartidas()
        {
            sonido.RatonClick();

            Objetos.Ocultar(canvas.gameObject);
            Objetos.Mostrar(cargarPartida.canvas.gameObject);

            cargarPartida.CargarListado();
        }

        public void MostrarOpciones()
        {
            sonido.RatonClick();

            Objetos.Ocultar(canvas.gameObject);
            Objetos.Mostrar(opciones.canvas.gameObject);

            opciones.canvasOrigen = 1;
        }

        public void MostrarInfo()
        {
            sonido.RatonClick();

            if (panelInfo.gameObject.GetComponent<CanvasGroup>().alpha == 0)
            {
                Objetos.Mostrar(panelInfo.gameObject);

                Animator animacion = panelInfo.GetComponent<Animator>();

                if (animacion != null)
                {
                    animacion.Play("PanelInfo", 0, 1f);
                }
            }
            else
            {
                Objetos.Ocultar(panelInfo.gameObject);
            }
        }

        public void SalirJuego()
        {
            Application.Quit();
        }

        public void AbrirCodigoFuente()
        {
            sonido.RatonClick();
            Steam.AbrirWeb("https://github.com/pepeizq/City-Builder");
        }

        public void AbrirWeb1()
        {
            sonido.RatonClick();
            Steam.AbrirWeb("https://pepeizqapps.com/");
            Steam.Logros("pepeizqcities1");
        }

        public void AbrirWeb2()
        {
            sonido.RatonClick();
            Steam.AbrirWeb("https://pepeizqdeals.com/");
            Steam.Logros("pepeizqcities2");
        }
    }
}
