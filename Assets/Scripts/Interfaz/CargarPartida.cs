using Construcciones;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Interfaz
{
    public class CargarPartida : MonoBehaviour
    {
        public Cursores cursores;

        public Partidas partidas;

        public MenuPrincipal menuPrincipal;
        public Juego juego;

        public Escenario escenario;

        [SerializeField]
        private Construir colocar = null;

        public GameObject cargarPartidaPrefab;

        public Canvas canvas;

        public Scrollbar scrollbar;

        public Panel panelPartidas;
        public Panel panelPartidas2;

        public Material material1;
        public Material material2;

        public void Volver()
        {
            canvas.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            canvas.gameObject.GetComponent<CanvasGroup>().interactable = false;
            canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

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

        public void CargarListado()
        {
            foreach (Transform boton in panelPartidas.gameObject.transform)
            {
                GameObject.Destroy(boton.gameObject);
            }

            List<Guardado> partidasGuardadas = partidas.ListadoPartidas();

            if (partidasGuardadas.Count > 0)
            {
                partidasGuardadas.Sort((x, y) => y.fecha.CompareTo(x.fecha));

                RectTransform rtPartidas = panelPartidas.GetComponent<RectTransform>();
                rtPartidas.sizeDelta = new Vector2(rtPartidas.sizeDelta.x, 0);
                float alturaPartidas = 0;

                foreach (Guardado partidaGuardada in partidasGuardadas)
                {
                    GameObject panelObjeto = Instantiate(cargarPartidaPrefab);
                    panelObjeto.transform.SetParent(panelPartidas.transform, false);
                    alturaPartidas += 40;

                    Button botonCargar = panelObjeto.transform.GetChild(0).transform.GetComponent<Button>();
                    botonCargar.onClick.AddListener(() => CargarPartidaSeleccionada(partidaGuardada));

                    Panel subpanelBoton = botonCargar.transform.GetChild(0).transform.GetComponent<Panel>();

                    Text textoNombre = subpanelBoton.transform.GetChild(0).transform.GetComponent<Text>();
                    textoNombre.text = partidaGuardada.nombre;

                    Text textoFecha = subpanelBoton.transform.GetChild(1).transform.GetComponent<Text>();
                    textoFecha.text = partidaGuardada.fecha;

                    //-------------------------------------

                    Button botonBorrar = panelObjeto.transform.GetChild(1).transform.GetComponent<Button>();
                    botonBorrar.onClick.AddListener(() => BorrarPartidaSeleccionada(partidaGuardada));
                }

                if (alturaPartidas > 299)
                {
                    scrollbar.gameObject.GetComponent<CanvasGroup>().alpha = 1;
                    scrollbar.gameObject.GetComponent<CanvasGroup>().interactable = true;
                    scrollbar.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
                    scrollbar.gameObject.SetActive(true);
                }
                else
                {
                    scrollbar.gameObject.GetComponent<CanvasGroup>().alpha = 0;
                    scrollbar.gameObject.GetComponent<CanvasGroup>().interactable = false;
                    scrollbar.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
                    scrollbar.gameObject.SetActive(false);
                }

                rtPartidas.sizeDelta = new Vector2(rtPartidas.sizeDelta.x, alturaPartidas);

                panelPartidas2.gameObject.GetComponent<ScrollRect>().content = panelPartidas.GetComponent<RectTransform>();
                panelPartidas2.gameObject.GetComponent<ScrollRect>().normalizedPosition = new Vector2(0, 1);
            }
        }

        public void CargarPartidaSeleccionada(Guardado partida)
        {
            escenario.PonerTerreno(partida);
            escenario.PonerArboles(partida, colocar);
            juego.CargarEdificios(partida);
            juego.CargarInterfaz();

            canvas.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            canvas.gameObject.GetComponent<CanvasGroup>().interactable = false;
            canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

            juego.canvas.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            juego.canvas.gameObject.GetComponent<CanvasGroup>().interactable = true;
            juego.canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
        }

        public void BorrarPartidaSeleccionada(Guardado partida)
        {
            partidas.BorrarPartida(partida.id);
            CargarListado();
        }
    }
}

