using UnityEngine;
using UnityEngine.UI;

namespace Interfaz.Juego2
{
    public class Construir : MonoBehaviour
    {
        public Panel botonConstruir;

        public Panel panelEdificiosTipo;

        public Panel botonCarreteras;
        public Panel botonPoblacion;
        public Panel botonComida;
        public Panel botonTiendas;
        public Panel botonIndustria;
        public Panel botonDecoracion;

        public void AbrirPanelEdificios()
        {
            if (panelEdificiosTipo.gameObject.GetComponent<CanvasGroup>().alpha == 0)
            {
                botonConstruir.gameObject.GetComponent<Image>().color = new Color(60f / 255f, 60f / 255f, 60f / 255f, 255f);

                panelEdificiosTipo.gameObject.GetComponent<CanvasGroup>().alpha = 1;
                panelEdificiosTipo.gameObject.GetComponent<CanvasGroup>().interactable = true;
                panelEdificiosTipo.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;

                Animator animacion = panelEdificiosTipo.GetComponent<Animator>();

                if (animacion != null)
                {
                    animacion.Play("PanelEdificiosTipoAbrir", 0, 1f);
                }
            }
            else
            {
                botonConstruir.gameObject.GetComponent<Image>().color = new Color(255f / 255f, 255f / 255f, 255f / 255f, 0f);

                panelEdificiosTipo.gameObject.GetComponent<CanvasGroup>().alpha = 0;
                panelEdificiosTipo.gameObject.GetComponent<CanvasGroup>().interactable = false;
                panelEdificiosTipo.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
            }
        }

        //-----------------------------------------------------

        public void RatonEntraBotonEdificios()
        {
            Color colorPanel = botonConstruir.gameObject.GetComponent<Image>().color;

            if (colorPanel != new Color(60f / 255f, 60f / 255f, 60f / 255f, 255f))
            {
                botonConstruir.gameObject.GetComponent<Image>().color = new Color(60f / 255f, 60f / 255f, 60f / 255f, 255f);
            }            
        }

        public void RatonEntraBotonCarreteras()
        {
            Color colorPanel = botonCarreteras.gameObject.GetComponent<Image>().color;

            if (colorPanel != new Color(133f / 255f, 133f / 255f, 133f / 255f, 255f))
            {
                botonCarreteras.gameObject.GetComponent<Image>().color = new Color(133f / 255f, 133f / 255f, 133f / 255f, 255f);
            }
        }

        public void RatonEntraBotonPoblacion()
        {
            Color colorPanel = botonPoblacion.gameObject.GetComponent<Image>().color;

            if (colorPanel != new Color(180f / 255f, 117f / 255f, 90f / 255f, 255f))
            {
                botonPoblacion.gameObject.GetComponent<Image>().color = new Color(180f / 255f, 117f / 255f, 90f / 255f, 255f);
            }
        }

        public void RatonEntraBotonComida()
        {
            Color colorPanel = botonComida.gameObject.GetComponent<Image>().color;

            if (colorPanel != new Color(255f / 255f, 60f / 255f, 21f / 255f, 255f))
            {
                botonComida.gameObject.GetComponent<Image>().color = new Color(255f / 255f, 60f / 255f, 21f / 255f, 255f);
            }
        }

        public void RatonEntraBotonTiendas()
        {
            Color colorPanel = botonTiendas.gameObject.GetComponent<Image>().color;

            if (colorPanel != new Color(86f / 255f, 86f / 255f, 249f / 255f, 255f))
            {
                botonTiendas.gameObject.GetComponent<Image>().color = new Color(86f / 255f, 86f / 255f, 249f / 255f, 255f);
            }
        }

        public void RatonEntraBotonIndustria()
        {
            Color colorPanel = botonIndustria.gameObject.GetComponent<Image>().color;

            if (colorPanel != new Color(166f / 255f, 166f / 255f, 30f / 255f, 255f))
            {
                botonIndustria.gameObject.GetComponent<Image>().color = new Color(166f / 255f, 166f / 255f, 30f / 255f, 255f);
            }
        }

        public void RatonEntraBotonDecoracion()
        {
            Color colorPanel = botonDecoracion.gameObject.GetComponent<Image>().color;

            if (colorPanel != new Color(63f / 255f, 133f / 255f, 46f / 255f, 255f))
            {
                botonDecoracion.gameObject.GetComponent<Image>().color = new Color(63f / 255f, 133f / 255f, 46f / 255f, 255f);
            }
        }

        public void RatonSaleBoton(Panel panel)
        {
            Color colorPanel = panel.gameObject.GetComponent<Image>().color;

            if (colorPanel != new Color(255f / 255f, 255f / 255f, 255f / 255f, 0f))
            {
                panel.gameObject.GetComponent<Image>().color = new Color(255f / 255f, 255f / 255f, 255f / 255f, 0f);
            }
        }

        //-----------------------------------------------------
    }
}