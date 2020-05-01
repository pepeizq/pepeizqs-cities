using Construcciones;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Interfaz.Juego2
{
    public class AbajoIzq : MonoBehaviour
    {
        public Opciones2.Sonido sonido;

        public Panel panelMenu;
        public Panel botonMenu;

        public Panel panelGuardarMenuPrincipal;
        public Panel panelGuardarSalir;

        public Construir construirInterfaz;

        public MenuPrincipal menuPrincipal;
        public Juego juego;
        public Opciones opciones;
        public Partidas partidas;

        [SerializeField]
        private VistaPrevia colocarPrevio = null;

        [SerializeField]
        private Velocidad velocidad = null;

        private Color colorEntra = new Color(3f / 255f, 28f / 255f, 39f / 255f, 255f);
        private Color colorTransparente = new Color(255f / 255f, 255f / 255f, 255f / 255f, 0f);

        public void RatonEntra(Panel panel)
        {
            Color colorPanel = panel.gameObject.GetComponent<Image>().color;

            if (colorPanel != colorEntra)
            {
                panel.gameObject.GetComponent<Image>().color = colorEntra;
            }
        }

        public void RatonSale(Panel panel)
        {
            Color colorPanel = panel.gameObject.GetComponent<Image>().color;

            if (colorPanel != colorTransparente)
            {
                panel.gameObject.GetComponent<Image>().color = colorTransparente;
            }
        }

        public void RatonSaleBotonMenu()
        {
            bool cambiar = true;

            if (panelMenu.gameObject.GetComponent<CanvasGroup>().alpha == 1)
            {
                cambiar = false;
            }

            if (cambiar == true)
            {
                Color colorPanel = botonMenu.gameObject.GetComponent<Image>().color;

                if (colorPanel != colorTransparente)
                {
                    botonMenu.gameObject.GetComponent<Image>().color = colorTransparente;
                }
            }
        }

        //-----------------------------------------------------

        public void AbrirMenu()
        {
            sonido.RatonClick();
            colocarPrevio.QuitarTodosEdificios();
            construirInterfaz.CerrarTodo();

            if (panelMenu.gameObject.GetComponent<CanvasGroup>().alpha == 0)
            {
                botonMenu.gameObject.GetComponent<Image>().color = colorEntra;
                Objetos.Mostrar(panelMenu.gameObject);
                velocidad.VelocidadMarchas(0);

                Animator animacion = panelMenu.GetComponent<Animator>();

                if (animacion != null)
                {
                    animacion.Play("PanelMenuAbajoIzq", 0, 1f);
                }
            }
            else
            {
                botonMenu.gameObject.GetComponent<Image>().color = colorTransparente;
                Objetos.Ocultar(panelMenu.gameObject);
                velocidad.VelocidadMarchas(1);
            }
        }

        public void CerrarMenu()
        {
            botonMenu.gameObject.GetComponent<Image>().color = colorTransparente;
            Objetos.Ocultar(panelMenu.gameObject);
        }

        //-----------------------------------------------------

        public void GuardarPartida()
        {
            sonido.RatonClick();

            juego.GuardarPartida();

            Objetos.Ocultar(panelMenu.gameObject);
        }

        public void MostrarOpciones()
        {
            sonido.RatonClick();

            Objetos.Ocultar(juego.canvas.gameObject);

            opciones.Abrir();

            opciones.canvasOrigen = 2;
        }

        public void VolverMenuPrincipal()
        {
            sonido.RatonClick();
            botonMenu.gameObject.GetComponent<Image>().color = colorTransparente;

            Objetos.Ocultar(panelMenu.gameObject);

            Objetos.Mostrar(panelGuardarMenuPrincipal.gameObject);
        }

        public void VolverMenuPrincipalGuardarSi()
        {
            juego.GuardarPartida();
            Objetos.Ocultar(juego.canvas.gameObject);
            Objetos.Ocultar(panelGuardarMenuPrincipal.gameObject);

            List<Guardado> partidasGuardadas = partidas.ListadoPartidas();

            if (partidasGuardadas.Count > 0)
            {
                juego.botonContinuarPartida.interactable = true;
                juego.botonCargarPartida.interactable = true;
            }
            else
            {
                juego.botonContinuarPartida.interactable = false;
                juego.botonCargarPartida.interactable = false;
            }

            Objetos.Mostrar(menuPrincipal.canvas.gameObject);
        }

        public void VolverMenuPrincipalGuardarNo()
        {
            Objetos.Ocultar(juego.canvas.gameObject);
            Objetos.Ocultar(panelGuardarMenuPrincipal.gameObject);

            List<Guardado> partidasGuardadas = partidas.ListadoPartidas();

            if (partidasGuardadas.Count > 0)
            {
                juego.botonContinuarPartida.interactable = true;
                juego.botonCargarPartida.interactable = true;
            }
            else
            {
                juego.botonContinuarPartida.interactable = false;
                juego.botonCargarPartida.interactable = false;
            }

            Objetos.Mostrar(menuPrincipal.canvas.gameObject);
        }

        public void SalirJuego()
        {
            sonido.RatonClick();
            botonMenu.gameObject.GetComponent<Image>().color = colorTransparente;

            Objetos.Ocultar(panelMenu.gameObject);

            Objetos.Mostrar(panelGuardarSalir.gameObject);
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

        public void ReportarFallos()
        {
            Steam.AbrirWeb("https://pepeizqapps.com/contact/");
        }
    }
}
