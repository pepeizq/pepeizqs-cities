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

        public Juego juego;
        public GameObject botonPrefab;

        public Panel panelCarreteras;

        private string colorTextoVerde = "#007700";
        private string colorTextoRojo = "#d90000";

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

                panelCarreteras.gameObject.GetComponent<CanvasGroup>().alpha = 0;
                panelCarreteras.gameObject.GetComponent<CanvasGroup>().interactable = false;
                panelCarreteras.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
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

        public void AbrirPanelCarreteras()
        {
            if (panelCarreteras.gameObject.GetComponent<CanvasGroup>().alpha == 0)
            {
                panelEdificiosTipo.gameObject.GetComponent<CanvasGroup>().alpha = 0;
                panelEdificiosTipo.gameObject.GetComponent<CanvasGroup>().interactable = false;
                panelEdificiosTipo.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

                panelCarreteras.gameObject.GetComponent<CanvasGroup>().alpha = 1;
                panelCarreteras.gameObject.GetComponent<CanvasGroup>().interactable = true;
                panelCarreteras.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;

                foreach (Transform boton in panelCarreteras.gameObject.transform)
                {
                    GameObject.Destroy(boton.gameObject);
                }

                foreach (Construccion edificio in juego.edificios)
                {
                    if (edificio.categoria == 1)
                    {
                        if ((edificio.id == 6) || (edificio.id == 12))
                        {
                            AñadirBotonEdificios(edificio, panelCarreteras);
                        }
                    }
                }
            }
            else
            {
                panelCarreteras.gameObject.GetComponent<CanvasGroup>().alpha = 0;
                panelCarreteras.gameObject.GetComponent<CanvasGroup>().interactable = false;
                panelCarreteras.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
            }
        }

        private void AñadirBotonEdificios(Construccion edificio, Panel panel)
        {
            GameObject botonObjeto = Instantiate(botonPrefab);
            botonObjeto.transform.SetParent(panel.transform, false);

            GameObject panelBoton = botonObjeto.transform.GetChild(0).gameObject;

            Image imagen = panelBoton.transform.GetChild(0).transform.GetComponent<Image>();
            imagen.sprite = edificio.botonImagen;

            //-----------------------------------

            Panel subpanelBoton = panelBoton.transform.GetChild(1).transform.GetComponent<Panel>();

            Text coste = subpanelBoton.transform.GetChild(0).transform.GetComponent<Text>();
            coste.text = string.Format("{0} €", edificio.coste);
            Color colorTextoCoste = new Color();
            ColorUtility.TryParseHtmlString(colorTextoRojo, out colorTextoCoste);
            coste.color = colorTextoCoste;

            Panel panelBotonComida = subpanelBoton.gameObject.transform.GetChild(1).transform.GetComponent<Panel>();

            if (panelBotonComida != null)
            {
                if (edificio.comida != 0)
                {
                    panelBotonComida.gameObject.SetActive(true);

                    Text comida = panelBotonComida.transform.GetChild(1).transform.GetComponent<Text>();
                    comida.text = string.Format("{0}", edificio.comida);
                    Color colorTexto = new Color();

                    if (edificio.comida > 0)
                    {
                        comida.text = string.Format("+{0}", comida.text);
                        ColorUtility.TryParseHtmlString(colorTextoVerde, out colorTexto);
                    }
                    else if (edificio.comida < 0)
                    {
                        ColorUtility.TryParseHtmlString(colorTextoRojo, out colorTexto);
                    }

                    comida.color = colorTexto;
                }
                else
                {
                    panelBotonComida.gameObject.SetActive(false);
                }
            }

            Panel panelBotonPoblacion = subpanelBoton.gameObject.transform.GetChild(2).transform.GetComponent<Panel>();

            if (panelBotonPoblacion != null)
            {
                if (edificio.poblacion != 0)
                {
                    panelBotonPoblacion.gameObject.SetActive(true);

                    Text poblacion = panelBotonPoblacion.transform.GetChild(1).transform.GetComponent<Text>();
                    poblacion.text = string.Format("{0}", edificio.poblacion);
                    Color colorTexto = new Color();

                    if (edificio.poblacion > 0)
                    {
                        poblacion.text = string.Format("+{0}", poblacion.text);
                        ColorUtility.TryParseHtmlString(colorTextoVerde, out colorTexto);
                    }
                    else if (edificio.poblacion < 0)
                    {
                        ColorUtility.TryParseHtmlString(colorTextoRojo, out colorTexto);
                    }

                    poblacion.color = colorTexto;
                }
                else
                {
                    panelBotonPoblacion.gameObject.SetActive(false);
                }
            }

            Panel panelBotonTrabajo = subpanelBoton.gameObject.transform.GetChild(3).transform.GetComponent<Panel>();

            if (panelBotonTrabajo != null)
            {
                if (edificio.trabajo != 0)
                {
                    panelBotonTrabajo.gameObject.SetActive(true);

                    Text trabajo = panelBotonTrabajo.transform.GetChild(1).transform.GetComponent<Text>();
                    trabajo.text = string.Format("{0}", edificio.trabajo);
                    Color colorTexto = new Color();

                    if (edificio.trabajo > 0)
                    {
                        trabajo.text = string.Format("+{0}", trabajo.text);
                        ColorUtility.TryParseHtmlString(colorTextoVerde, out colorTexto);
                    }
                    else if (edificio.trabajo < 0)
                    {
                        ColorUtility.TryParseHtmlString(colorTextoRojo, out colorTexto);
                    }

                    trabajo.color = colorTexto;
                }
                else
                {
                    panelBotonTrabajo.gameObject.SetActive(false);
                }
            }

            //-----------------------------------
        }
    }
}