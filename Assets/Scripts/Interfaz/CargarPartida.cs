using System.Collections.Generic;
using UnityEngine;

namespace Interfaz
{
    public class CargarPartida : MonoBehaviour
    {
        public Partidas partidas;

        public MenuPrincipal menuPrincipal;
        public Juego juego;

        public GameObject botonCargarPartidaPrefab;

        public Canvas canvas;

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
            }
            else
            {
                juego.botonContinuarPartida.interactable = false;
            }

            menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().interactable = true;
            menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
        }

        public void CargarListado()
        {
            List<Guardado> partidasGuardadas = partidas.ListadoPartidas();

            if (partidasGuardadas.Count > 0)
            {
                RectTransform rtPartidas = panelPartidas.GetComponent<RectTransform>();
                rtPartidas.sizeDelta = new Vector2(rtPartidas.sizeDelta.x, 0);
                float alturaPartidas = 0;

                foreach (Guardado partidaGuardada in partidasGuardadas)
                {
                    GameObject botonObjeto = Instantiate(botonCargarPartidaPrefab);


                }
            }
        }
    }
}

