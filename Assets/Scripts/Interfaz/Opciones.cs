using UnityEngine;
using UnityEngine.UI;

namespace Interfaz
{
    public class Opciones : MonoBehaviour
    {
        public MenuPrincipal menuPrincipal;
        public Juego juego;
        public MenuJuego menuJuego;

        public Canvas canvas;
        public int canvasOrigen; //1 menu principal, 2 menu juego

        public Button botonGeneral;
        public Button botonGraficos;
        public Button botonTeclado;

        public Scrollbar scrollbar;

        public Panel panelMedio;
        public Panel panelGeneral;
        public Panel panelGraficos;
        public Panel panelTeclado;

        public AudioSource sonidoBoton;

        public void Volver()
        {
            canvas.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            canvas.gameObject.GetComponent<CanvasGroup>().interactable = false;
            canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

            if (canvasOrigen == 1)
            {
                if (juego.DetectarPartidaGuardada() != null)
                {
                    juego.botonCargarPartida.interactable = true;
                }
                else
                {
                    juego.botonCargarPartida.interactable = false;
                }

                menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().alpha = 1;
                menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().interactable = true;
                menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
            }
            else if (canvasOrigen == 2)
            {
                juego.canvas.gameObject.GetComponent<CanvasGroup>().alpha = 1;
                juego.canvas.gameObject.GetComponent<CanvasGroup>().interactable = true;
                juego.canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
            }
        }

        public void CargarInicio()
        {
            MostrarPanelColorBoton(botonGeneral, new Color(0.08f, 0.4f, 0.58f));
            panelMedio.gameObject.GetComponent<ScrollRect>().content = panelGeneral.GetComponent<RectTransform>();
            panelMedio.gameObject.GetComponent<ScrollRect>().normalizedPosition = new Vector2(0, 1);
            panelGraficos.gameObject.SetActive(false);
            panelTeclado.gameObject.SetActive(false);
        }

        public void MostrarPanel(Panel panelEnseñar)
        {
            sonidoBoton.Play();

            scrollbar.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            scrollbar.gameObject.GetComponent<CanvasGroup>().interactable = false;
            scrollbar.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
            scrollbar.gameObject.SetActive(false);

            panelGeneral.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            panelGeneral.gameObject.GetComponent<CanvasGroup>().interactable = false;
            panelGeneral.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
            panelGeneral.gameObject.SetActive(false);

            panelGraficos.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            panelGraficos.gameObject.GetComponent<CanvasGroup>().interactable = false;
            panelGraficos.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
            panelGraficos.gameObject.SetActive(false);

            panelTeclado.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            panelTeclado.gameObject.GetComponent<CanvasGroup>().interactable = false;
            panelTeclado.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
            panelTeclado.gameObject.SetActive(false);

            panelEnseñar.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            panelEnseñar.gameObject.GetComponent<CanvasGroup>().interactable = true;
            panelEnseñar.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
            panelEnseñar.gameObject.SetActive(true);

            if (panelEnseñar.nombre == "general")
            {
                MostrarPanelColorBoton(botonGeneral, new Color(0.08f, 0.4f, 0.58f));

                scrollbar.gameObject.GetComponent<CanvasGroup>().alpha = 1;
                scrollbar.gameObject.GetComponent<CanvasGroup>().interactable = true;
                scrollbar.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
                scrollbar.gameObject.SetActive(true);

                panelMedio.gameObject.GetComponent<ScrollRect>().content = panelGeneral.GetComponent<RectTransform>();
                panelMedio.gameObject.GetComponent<ScrollRect>().normalizedPosition = new Vector2(0, 1);
            }
            else
            {
                MostrarPanelColorBoton(botonGeneral, Color.white);
            }

            if (panelEnseñar.nombre == "graficos")
            {
                MostrarPanelColorBoton(botonGraficos, new Color(0.08f, 0.4f, 0.58f));
            }
            else
            {
                MostrarPanelColorBoton(botonGraficos, Color.white);
            }

            if (panelEnseñar.nombre == "teclado")
            {
                MostrarPanelColorBoton(botonTeclado, new Color(0.08f, 0.4f, 0.58f));

                scrollbar.gameObject.GetComponent<CanvasGroup>().alpha = 1;
                scrollbar.gameObject.GetComponent<CanvasGroup>().interactable = true;
                scrollbar.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
                scrollbar.gameObject.SetActive(true);

                panelMedio.gameObject.GetComponent<ScrollRect>().content = panelTeclado.GetComponent<RectTransform>();
                panelMedio.gameObject.GetComponent<ScrollRect>().normalizedPosition = new Vector2(0, 1);
            }
            else
            {
                MostrarPanelColorBoton(botonTeclado, Color.white);
            }
        }

        private void MostrarPanelColorBoton(Button boton, Color color)
        {
            var colores = boton.colors;
            colores.normalColor = color;
            boton.colors = colores;
        } 
    }
}
