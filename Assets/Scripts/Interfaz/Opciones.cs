using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Interfaz
{
    public class Opciones : MonoBehaviour
    {
        public Partidas partidas;

        public MenuPrincipal menuPrincipal;
        public Juego juego;

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

        public Opciones2.Sonido sonido;

        public void Volver()
        {
            sonido.RatonClick();

            Objetos.Ocultar(canvas.gameObject);

            if (canvasOrigen == 1)
            {
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
            else if (canvasOrigen == 2)
            {
                Objetos.Mostrar(juego.canvas.gameObject);
            }
        }

        public void CargarInicio()
        {
            MostrarPanelColorBoton(botonGeneral, new Color(0.08f, 0.4f, 0.58f));
            panelMedio.gameObject.GetComponent<ScrollRect>().content = panelGeneral.GetComponent<RectTransform>();
            panelMedio.gameObject.GetComponent<ScrollRect>().normalizedPosition = new Vector2(0, 1);

            Objetos.Ocultar(panelGraficos.gameObject);
            Objetos.Ocultar(panelTeclado.gameObject);
        }

        public void MostrarPanel(Panel panelEnseñar)
        {
            sonido.RatonClick();

            Objetos.Ocultar(scrollbar.gameObject);
            Objetos.Ocultar(panelGeneral.gameObject);
            Objetos.Ocultar(panelGraficos.gameObject);
            Objetos.Ocultar(panelTeclado.gameObject);

            Objetos.Mostrar(panelEnseñar.gameObject);

            if (panelEnseñar.nombre == "general")
            {
                MostrarPanelColorBoton(botonGeneral, new Color(0.08f, 0.4f, 0.58f));

                Objetos.Mostrar(scrollbar.gameObject);

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

                Objetos.Mostrar(scrollbar.gameObject);

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

        public void Abrir()
        {
            Objetos.Mostrar(canvas.gameObject);
        }
    }
}
