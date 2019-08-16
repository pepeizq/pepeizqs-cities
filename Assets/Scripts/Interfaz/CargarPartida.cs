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
        private Colocar colocar = null;

        public GameObject botonCargarPartidaPrefab;

        public Canvas canvas;

        public Scrollbar scrollbar;

        public Panel panelPartidas;

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
                    GameObject botonObjeto = Instantiate(botonCargarPartidaPrefab);
                    botonObjeto.transform.SetParent(panelPartidas.transform, false);
                    alturaPartidas += 40;

                    Panel panelBoton = botonObjeto.transform.GetChild(0).transform.GetComponent<Panel>();

                    Text textoNombre = panelBoton.transform.GetChild(0).transform.GetComponent<Text>();
                    textoNombre.text = partidaGuardada.nombre;

                    Text textoFecha = panelBoton.transform.GetChild(1).transform.GetComponent<Text>();
                    textoFecha.text = partidaGuardada.fecha;

                    Button boton = botonObjeto.GetComponent<Button>();
                    boton.onClick.AddListener(() => CargarPartidaSeleccionada(partidaGuardada));

                    EventTrigger evento = botonObjeto.AddComponent<EventTrigger>();
                    EventTrigger.Entry pointerEnter = new EventTrigger.Entry
                    {
                        eventID = EventTriggerType.PointerEnter
                    };

                    pointerEnter.callback.AddListener((data) => { CursorEntra((PointerEventData)data, panelBoton); });
                    evento.triggers.Add(pointerEnter);

                    EventTrigger.Entry pointerExit = new EventTrigger.Entry
                    {
                        eventID = EventTriggerType.PointerExit
                    };

                    pointerExit.callback.AddListener((data) => { CursorSale((PointerEventData)data, panelBoton); });
                    evento.triggers.Add(pointerExit);
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

        public void CursorEntra(PointerEventData eventData, Panel panel)
        {
            cursores.Entra();
            panel.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 140f / 255f);
        }

        public void CursorSale(PointerEventData eventData, Panel panel)
        {
            cursores.Sale();
            panel.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 100f / 255f);
        }
    }
}

