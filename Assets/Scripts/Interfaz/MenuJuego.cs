using Construcciones;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Interfaz
{
    public class MenuJuego : MonoBehaviour
    {
        public Partidas partidas;

        public Panel panel;
        public Panel panelSub;

        public MenuPrincipal menuPrincipal;
        public Juego juego;
        public Opciones opciones;

        public AudioSource sonidoBoton;

        [SerializeField]
        private VistaPrevia colocarPrevio = null;

        [SerializeField]
        private DiaNoche diaNoche = null;

        public Panel panelGuardarMenuPrincipal;
        public Panel panelGuardarSalir;

        public void MostrarMenu()
        {
            sonidoBoton.Play();
            colocarPrevio.QuitarTodosEdificios();
            juego.ConstruirOcultarPanelEdificios();

            if (panel.gameObject.GetComponent<CanvasGroup>().alpha == 0)
            {
                panelSub.volverColor = true;
                PanelCambiarColor(panelSub);
                diaNoche.VelocidadMarchas(0);
                panel.gameObject.GetComponent<CanvasGroup>().alpha = 1;
                panel.gameObject.GetComponent<CanvasGroup>().interactable = true;
                panel.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
            }
            else
            {
                panelSub.volverColor = false;
                PanelVolverColor(panelSub);
                diaNoche.VelocidadMarchas(1);
                panel.gameObject.GetComponent<CanvasGroup>().alpha = 0;
                panel.gameObject.GetComponent<CanvasGroup>().interactable = false;
                panel.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
            }
        }

        public void PanelCambiarColor(Panel panel)
        {
            if (panel.volverColor == false)
            {
                panel.gameObject.GetComponent<Image>().color = new Color(0.08f, 0.4f, 0.58f);
            }
        }

        public void PanelVolverColor(Panel panel)
        {
            if (panel.volverColor == false)
            {
                panel.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 50f / 255f);
            }
        }

        public void CerrarPanel()
        {
            PanelVolverColor(panelSub);
            panel.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            panel.gameObject.GetComponent<CanvasGroup>().interactable = false;
            panel.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
        }

        public void GuardarPartida()
        {
            sonidoBoton.Play();

            juego.GuardarPartida();

            PanelVolverColor(panelSub);
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

        public void ReportarFallos()
        {
            Steam.AbrirWeb("https://pepeizqapps.com/contact/");
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

            menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().interactable = true;
            menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
        }

        public void VolverMenuPrincipalGuardarNo()
        {
            panelGuardarMenuPrincipal.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            panelGuardarMenuPrincipal.gameObject.GetComponent<CanvasGroup>().interactable = false;
            panelGuardarMenuPrincipal.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

            juego.canvas.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            juego.canvas.gameObject.GetComponent<CanvasGroup>().interactable = false;
            juego.canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

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

            menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().interactable = true;
            menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
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
}

