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

                    Panel subpanelBoton = botonCargar.transform.GetChild(0).transform.GetComponent<Panel>();

                    Text textoNombre = subpanelBoton.transform.GetChild(0).transform.GetComponent<Text>();
                    textoNombre.text = partidaGuardada.nombre;

                    Text textoFecha = subpanelBoton.transform.GetChild(1).transform.GetComponent<Text>();
                    textoFecha.text = partidaGuardada.fecha;

                    //-------------------------------------

                    Button botonBorrar = panelObjeto.transform.GetChild(1).transform.GetComponent<Button>();
                    botonBorrar.onClick.AddListener(() => BorrarPartidaSeleccionada(partidaGuardada));

                    //-------------------------------------

                    botonCargar.onClick.AddListener(() => CargarPartidaSeleccionada(partidaGuardada));

                    EventTrigger evento = panelObjeto.AddComponent<EventTrigger>();
                    EventTrigger.Entry pointerEnter = new EventTrigger.Entry
                    {
                        eventID = EventTriggerType.PointerEnter
                    };

                    pointerEnter.callback.AddListener((data) => { CursorEntra((PointerEventData)data, panelObjeto); });
                    evento.triggers.Add(pointerEnter);

                    EventTrigger.Entry pointerExit = new EventTrigger.Entry
                    {
                        eventID = EventTriggerType.PointerExit
                    };

                    pointerExit.callback.AddListener((data) => { CursorSale((PointerEventData)data, panelObjeto); });
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

        public void BorrarPartidaSeleccionada(Guardado partida)
        {
            partidas.BorrarPartida(partida.id);
            CargarListado();
        }

        public void CursorEntra(PointerEventData eventData, GameObject panel)
        {
            cursores.Entra();
            panel.gameObject.GetComponent<Image>().color = new Color(167f, 177f, 219f, 255f / 255f);
            Debug.Log("yolo");
        }

        public void CursorSale(PointerEventData eventData, GameObject panel)
        {
            cursores.Sale();
            panel.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 255f / 255f);
        }
    }
}

