using Construcciones;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Interfaz.Juego2
{
    public class MenuAbajoIzq : MonoBehaviour
    {
        public AudioSource sonidoBoton;

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
        private DiaNoche diaNoche = null;

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
            sonidoBoton.Play();
            colocarPrevio.QuitarTodosEdificios();
            construirInterfaz.CerrarTodo();

            if (panelMenu.gameObject.GetComponent<CanvasGroup>().alpha == 0)
            {
                botonMenu.gameObject.GetComponent<Image>().color = colorEntra;
                AbrirPanel(panelMenu);
                diaNoche.VelocidadMarchas(0);

                Animator animacion = panelMenu.GetComponent<Animator>();

                if (animacion != null)
                {
                    animacion.Play("PanelMenuAbajoIzq", 0, 1f);
                }
            }
            else
            {
                botonMenu.gameObject.GetComponent<Image>().color = colorTransparente;
                CerrarPanel(panelMenu);
                diaNoche.VelocidadMarchas(1);
            }
        }

        public void CerrarMenu()
        {
            botonMenu.gameObject.GetComponent<Image>().color = colorTransparente;
            CerrarPanel(panelMenu);
        }

        //-----------------------------------------------------

        public void GuardarPartida()
        {
            sonidoBoton.Play();

            juego.GuardarPartida();

            CerrarPanel(panelMenu);
        }

        public void MostrarOpciones()
        {
            sonidoBoton.Play();

            juego.CerrarCanvas();

            opciones.AbrirCanvas();

            opciones.canvasOrigen = 2;
        }

        public void VolverMenuPrincipal()
        {
            sonidoBoton.Play();
            botonMenu.gameObject.GetComponent<Image>().color = colorTransparente;

            CerrarPanel(panelMenu);

            AbrirPanel(panelGuardarMenuPrincipal);
        }

        public void VolverMenuPrincipalGuardarSi()
        {
            juego.GuardarPartida();
            juego.CerrarCanvas();
            CerrarPanel(panelGuardarMenuPrincipal);

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

            menuPrincipal.AbrirCanvas();
        }

        public void VolverMenuPrincipalGuardarNo()
        {
            juego.CerrarCanvas();
            CerrarPanel(panelGuardarMenuPrincipal);

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

            menuPrincipal.AbrirCanvas();
        }

        public void SalirJuego()
        {
            sonidoBoton.Play();
            botonMenu.gameObject.GetComponent<Image>().color = colorTransparente;

            CerrarPanel(panelMenu);

            AbrirPanel(panelGuardarSalir);
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

        //-----------------------------------------------------

        private void AbrirPanel(Panel panel)
        {
            panel.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            panel.gameObject.GetComponent<CanvasGroup>().interactable = true;
            panel.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
        }

        private void CerrarPanel(Panel panel)
        {
            panel.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            panel.gameObject.GetComponent<CanvasGroup>().interactable = false;
            panel.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
        }
    }
}
