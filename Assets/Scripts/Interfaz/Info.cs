using System.Collections.Generic;
using UnityEngine;

namespace Interfaz
{
    public class Info : MonoBehaviour
    {
        public Cursores cursores;

        public Partidas partidas;

        public MenuPrincipal menuPrincipal;
        public Juego juego;

        public Canvas canvas;

        public AudioSource sonidoBoton;

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

        public void AbrirCodigoFuente()
        {
            sonidoBoton.Play();
            Steam.AbrirWeb("https://github.com/pepeizq/City-Builder");
        }

        public void AbrirWeb1()
        {
            sonidoBoton.Play();
            Steam.AbrirWeb("https://pepeizqapps.com/");
            Steam.Logros("pepeizqcities1");
        }

        public void AbrirWeb2()
        {
            sonidoBoton.Play();
            Steam.AbrirWeb("https://pepeizqdeals.com/");
            Steam.Logros("pepeizqcities2");
        }
    }
}

