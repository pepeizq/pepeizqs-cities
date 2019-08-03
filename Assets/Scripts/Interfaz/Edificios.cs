using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Interfaz
{
    public class Edificios : MonoBehaviour
    {
        public AudioSource sonidoBoton;

        public Juego juego;

        public GameObject botonEdificiosPrefab;

        private int numeroEdificios;

        public Panel panelInferior;

        public Scrollbar scrollbar;

        public Panel panelCarreteras;
        public Button botonCarreteras;
        public Image botonCarreterasImagen;
        public Sprite botonCarreterasSprite1;
        public Sprite botonCarreterasSprite2;
        private float alturaCarreteras = 0;

        public Panel panelPoblacion;
        public Button botonPoblacion;
        public Image botonPoblacionImagen;
        public Sprite botonPoblacionSprite1;
        public Sprite botonPoblacionSprite2;
        private float alturaPoblacion = 0;

        public Panel panelComida;
        public Button botonComida;
        public Image botonComidaImagen;
        public Sprite botonComidaSprite1;
        public Sprite botonComidaSprite2;
        private float alturaComida = 0;

        public Panel panelTiendas;
        public Button botonTiendas;
        public Image botonTiendasImagen;
        public Sprite botonTiendasSprite1;
        public Sprite botonTiendasSprite2;
        private float alturaTiendas = 0;

        public Panel panelIndustria;
        public Button botonIndustria;
        public Image botonIndustriaImagen;
        public Sprite botonIndustriaSprite1;
        public Sprite botonIndustriaSprite2;
        private float alturaIndustria = 0;

        public Panel panelDecoracion;
        public Button botonDecoracion;
        public Image botonDecoracionImagen;
        public Sprite botonDecoracionSprite1;
        public Sprite botonDecoracionSprite2;
        private float alturaDecoracion = 0;

        //public Panel panelCantidadDinero;
        //public Text costeCantidad;

        //public Panel panelCantidadPoblacion;
        //public Text poblacionCantidad;

        //public Panel panelCantidadComida;
        //public Text comidaCantidad;

        //public Panel panelCantidadTrabajo;
        //public Text trabajoCantidad;

        public void Arranque(Construccion[] edificios)
        {
            RectTransform rtDecoracion = panelDecoracion.GetComponent<RectTransform>();
            rtDecoracion.sizeDelta = new Vector2(rtDecoracion.sizeDelta.x, 0);
            alturaDecoracion = 0;

            RectTransform rtCarreteras = panelCarreteras.GetComponent<RectTransform>();
            rtCarreteras.sizeDelta = new Vector2(rtCarreteras.sizeDelta.x, 0);
            alturaCarreteras = 0;

            RectTransform rtPoblacion = panelPoblacion.GetComponent<RectTransform>();
            rtPoblacion.sizeDelta = new Vector2(rtPoblacion.sizeDelta.x, 0);
            alturaPoblacion = 0;

            RectTransform rtComida = panelComida.GetComponent<RectTransform>();
            rtComida.sizeDelta = new Vector2(rtComida.sizeDelta.x, 0);
            alturaComida = 0;

            RectTransform rtTiendas = panelTiendas.GetComponent<RectTransform>();
            rtTiendas.sizeDelta = new Vector2(rtTiendas.sizeDelta.x, 0);
            alturaTiendas = 0;

            RectTransform rtIndustria = panelIndustria.GetComponent<RectTransform>();
            rtIndustria.sizeDelta = new Vector2(rtIndustria.sizeDelta.x, 0);
            alturaIndustria = 0;

            //panelCantidadDinero.gameObject.SetActive(false);
            //panelCantidadPoblacion.gameObject.SetActive(false);
            //panelCantidadComida.gameObject.SetActive(false);
            //panelCantidadTrabajo.gameObject.SetActive(false);

            foreach (Transform boton in panelDecoracion.gameObject.transform)
            {
                GameObject.Destroy(boton.gameObject);
            }

            foreach (Transform boton in panelCarreteras.gameObject.transform)
            {
                GameObject.Destroy(boton.gameObject);
            }

            foreach (Transform boton in panelPoblacion.gameObject.transform)
            {
                GameObject.Destroy(boton.gameObject);
            }

            foreach (Transform boton in panelComida.gameObject.transform)
            {
                GameObject.Destroy(boton.gameObject);
            }

            foreach (Transform boton in panelTiendas.gameObject.transform)
            {
                GameObject.Destroy(boton.gameObject);
            }

            foreach (Transform boton in panelIndustria.gameObject.transform)
            {
                GameObject.Destroy(boton.gameObject);
            }

            foreach (Construccion edificio in edificios)
            {
                bool añadir = true;

                if (edificio.categoria == 1)
                {
                    if ((edificio.id != 6) && (edificio.id != 12))
                    {
                        añadir = false;
                    }
                }

                if (añadir == true)
                {
                    GameObject botonObjeto = Instantiate(botonEdificiosPrefab);

                    if (edificio.categoria == 0)
                    {
                        botonObjeto.transform.SetParent(panelDecoracion.transform, false);
                        alturaDecoracion += 100;
                    }
                    else if (edificio.categoria == 1)
                    {
                        botonObjeto.transform.SetParent(panelCarreteras.transform, false);
                        alturaCarreteras += 100;
                    }
                    else if (edificio.categoria == 2)
                    {
                        botonObjeto.transform.SetParent(panelPoblacion.transform, false);
                        alturaPoblacion += 100;
                    }
                    else if (edificio.categoria == 3)
                    {
                        botonObjeto.transform.SetParent(panelComida.transform, false);
                        alturaComida += 100;
                    }
                    else if (edificio.categoria == 4)
                    {
                        botonObjeto.transform.SetParent(panelTiendas.transform, false);
                        alturaTiendas += 100;
                    }
                    else if (edificio.categoria == 5)
                    {
                        botonObjeto.transform.SetParent(panelIndustria.transform, false);
                        alturaIndustria += 100;
                    }

                    GameObject panelBoton = botonObjeto.transform.GetChild(0).gameObject;

                    Image imagen = panelBoton.transform.GetChild(0).transform.GetComponent<Image>();
                    imagen.sprite = edificio.botonImagen;

                    Text coste = panelBoton.transform.GetChild(1).transform.GetComponent<Text>();
                    coste.text = string.Format("{0} €", edificio.coste);
                    coste.color = new Color(157.0f, 0f, 0f);

                    //-----------------------------------

                    Panel subpanelBoton = panelBoton.transform.GetChild(2).transform.GetComponent<Panel>();
                    Panel panelBotonComida = subpanelBoton.gameObject.transform.GetChild(0).transform.GetComponent<Panel>();

                    if (panelBotonComida != null)
                    {
                        if (edificio.comida != 0)
                        {
                            panelBotonComida.gameObject.SetActive(true);

                            Text comida = panelBotonComida.transform.GetChild(1).transform.GetComponent<Text>();
                            comida.text = string.Format("{0}", edificio.comida);

                            if (edificio.comida > 0)
                            {
                                comida.text = string.Format("+{0}", comida.text);
                                comida.color = new Color(0f, 157.0f, 0f);
                            }
                            else if (edificio.comida < 0)
                            {
                                comida.color = new Color(157.0f, 0f, 0f);
                            }
                        }
                        else
                        {
                            panelBotonComida.gameObject.SetActive(false);
                        }
                    }

                    Panel panelBotonPoblacion = subpanelBoton.gameObject.transform.GetChild(1).transform.GetComponent<Panel>();

                    if (panelBotonPoblacion != null)
                    {
                        if (edificio.poblacion != 0)
                        {
                            panelBotonPoblacion.gameObject.SetActive(true);

                            Text poblacion = panelBotonPoblacion.transform.GetChild(1).transform.GetComponent<Text>();
                            poblacion.text = string.Format("{0}", edificio.poblacion);

                            if (edificio.poblacion > 0)
                            {
                                poblacion.text = string.Format("+{0}", poblacion.text);
                                poblacion.color = new Color(0f, 157.0f, 0f);
                            }
                            else if (edificio.poblacion < 0)
                            {
                                poblacion.color = new Color(157.0f, 0f, 0f);
                            }
                        }
                        else
                        {
                            panelBotonPoblacion.gameObject.SetActive(false);
                        }
                    }

                    Panel panelBotonTrabajo = subpanelBoton.gameObject.transform.GetChild(2).transform.GetComponent<Panel>();

                    if (panelBotonTrabajo != null)
                    {
                        if (edificio.trabajo != 0)
                        {
                            panelBotonTrabajo.gameObject.SetActive(true);

                            Text trabajo = panelBotonTrabajo.transform.GetChild(1).transform.GetComponent<Text>();
                            trabajo.text = string.Format("{0}", edificio.trabajo);

                            if (edificio.trabajo > 0)
                            {
                                trabajo.text = string.Format("+{0}", trabajo.text);
                                trabajo.color = new Color(0f, 157.0f, 0f);
                            }
                            else if (edificio.trabajo < 0)
                            {
                                trabajo.color = new Color(157.0f, 0f, 0f);
                            }
                        }
                        else
                        {
                            panelBotonTrabajo.gameObject.SetActive(false);
                        }
                    }

                    //-----------------------------------

                    Button boton = botonObjeto.GetComponent<Button>();
                    boton.onClick.AddListener(() => juego.ConstruirSeleccionarEdificio(edificio.id));

                    EventTrigger evento = botonObjeto.AddComponent<EventTrigger>();
                    EventTrigger.Entry pointerEnter = new EventTrigger.Entry
                    {
                        eventID = EventTriggerType.PointerEnter
                    };

                    pointerEnter.callback.AddListener((data) => { CursorEntraEdificioInferior((PointerEventData)data, edificio); });
                    evento.triggers.Add(pointerEnter);

                    EventTrigger.Entry pointerExit = new EventTrigger.Entry
                    {
                        eventID = EventTriggerType.PointerExit
                    };

                    pointerExit.callback.AddListener((data) => { CursorSaleEdificioInferior((PointerEventData)data); });
                    evento.triggers.Add(pointerExit);
                }          
            }

            rtDecoracion.sizeDelta = new Vector2(rtDecoracion.sizeDelta.x, alturaDecoracion);
            rtCarreteras.sizeDelta = new Vector2(rtCarreteras.sizeDelta.x, alturaCarreteras);
            rtPoblacion.sizeDelta = new Vector2(rtPoblacion.sizeDelta.x, alturaPoblacion);
            rtComida.sizeDelta = new Vector2(rtComida.sizeDelta.x, alturaComida);
            rtTiendas.sizeDelta = new Vector2(rtTiendas.sizeDelta.x, alturaTiendas);
            rtIndustria.sizeDelta = new Vector2(rtIndustria.sizeDelta.x, alturaIndustria);
        }

        public void ConstruirMostrarPanel(Panel panelEnseñar)
        {
            sonidoBoton.Play();

            panelCarreteras.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            panelCarreteras.gameObject.GetComponent<CanvasGroup>().interactable = false;
            panelCarreteras.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
            panelCarreteras.gameObject.SetActive(false);

            panelPoblacion.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            panelPoblacion.gameObject.GetComponent<CanvasGroup>().interactable = false;
            panelPoblacion.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
            panelPoblacion.gameObject.SetActive(false);

            panelComida.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            panelComida.gameObject.GetComponent<CanvasGroup>().interactable = false;
            panelComida.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
            panelComida.gameObject.SetActive(false);

            panelTiendas.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            panelTiendas.gameObject.GetComponent<CanvasGroup>().interactable = false;
            panelTiendas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
            panelTiendas.gameObject.SetActive(false);

            panelIndustria.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            panelIndustria.gameObject.GetComponent<CanvasGroup>().interactable = false;
            panelIndustria.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
            panelIndustria.gameObject.SetActive(false);

            panelDecoracion.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            panelDecoracion.gameObject.GetComponent<CanvasGroup>().interactable = false;
            panelDecoracion.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
            panelDecoracion.gameObject.SetActive(false);

            panelEnseñar.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            panelEnseñar.gameObject.GetComponent<CanvasGroup>().interactable = true;
            panelEnseñar.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
            panelEnseñar.gameObject.SetActive(true);

            panelInferior.gameObject.GetComponent<ScrollRect>().content = panelEnseñar.gameObject.GetComponent<RectTransform>();
            panelInferior.gameObject.GetComponent<ScrollRect>().normalizedPosition = new Vector2(0, 1);

            botonCarreteras.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 0f / 255f);
            botonPoblacion.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 0f / 255f);
            botonComida.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 0f / 255f);
            botonTiendas.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 0f / 255f);
            botonIndustria.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 0f / 255f);
            botonDecoracion.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 0f / 255f);

            botonCarreterasImagen.GetComponent<Image>().sprite = botonCarreterasSprite1;
            botonPoblacionImagen.GetComponent<Image>().sprite = botonPoblacionSprite1;
            botonComidaImagen.GetComponent<Image>().sprite = botonComidaSprite1;
            botonTiendasImagen.GetComponent<Image>().sprite = botonTiendasSprite1;
            botonIndustriaImagen.GetComponent<Image>().sprite = botonIndustriaSprite1;
            botonDecoracionImagen.GetComponent<Image>().sprite = botonDecoracionSprite1;

            if (panelEnseñar.nombre == "carreteras")
            {
                botonCarreteras.gameObject.GetComponent<Image>().color = new Color(0.08f, 0.4f, 0.58f);
                botonCarreterasImagen.GetComponent<Image>().sprite = botonCarreterasSprite2;
                numeroEdificios = 0;
                EnseñarOcultarScrollbar(alturaCarreteras);
            }
            else if (panelEnseñar.nombre == "casas")
            {
                botonPoblacion.gameObject.GetComponent<Image>().color = new Color(0.08f, 0.4f, 0.58f);
                botonPoblacionImagen.GetComponent<Image>().sprite = botonPoblacionSprite2;
                numeroEdificios = 1;
                EnseñarOcultarScrollbar(alturaPoblacion);
            }
            else if (panelEnseñar.nombre == "comida")
            {
                botonComida.gameObject.GetComponent<Image>().color = new Color(0.08f, 0.4f, 0.58f);
                botonComidaImagen.GetComponent<Image>().sprite = botonComidaSprite2;
                numeroEdificios = 2;
                EnseñarOcultarScrollbar(alturaComida);
            }
            else if (panelEnseñar.nombre == "tiendas")
            {
                botonTiendas.gameObject.GetComponent<Image>().color = new Color(0.08f, 0.4f, 0.58f);
                botonTiendasImagen.GetComponent<Image>().sprite = botonTiendasSprite2;
                numeroEdificios = 3;
                EnseñarOcultarScrollbar(alturaTiendas);
            }
            else if (panelEnseñar.nombre == "industria")
            {
                botonIndustria.gameObject.GetComponent<Image>().color = new Color(0.08f, 0.4f, 0.58f);
                botonIndustriaImagen.GetComponent<Image>().sprite = botonIndustriaSprite2;
                numeroEdificios = 4;
                EnseñarOcultarScrollbar(alturaIndustria);
            }
            else if (panelEnseñar.nombre == "decoracion")
            {
                botonDecoracion.gameObject.GetComponent<Image>().color = new Color(0.08f, 0.4f, 0.58f);
                botonDecoracionImagen.GetComponent<Image>().sprite = botonDecoracionSprite2;
                numeroEdificios = 5;              
                EnseñarOcultarScrollbar(alturaDecoracion);
            }
        }

        private void EnseñarOcultarScrollbar(float altura)
        {
            if (altura < 300)
            {
                scrollbar.gameObject.GetComponent<CanvasGroup>().alpha = 0;
                scrollbar.gameObject.GetComponent<CanvasGroup>().interactable = false;
                scrollbar.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
                scrollbar.gameObject.SetActive(false);
            }
            else
            {
                scrollbar.gameObject.GetComponent<CanvasGroup>().alpha = 1;
                scrollbar.gameObject.GetComponent<CanvasGroup>().interactable = true;
                scrollbar.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
                scrollbar.gameObject.SetActive(true);
            }
        }

        public void CursorEntraEdificioSuperior(int numeroSeleccionado)
        {
            if (numeroSeleccionado != numeroEdificios)
            {
                if (numeroSeleccionado == 0)
                {
                    botonCarreteras.gameObject.GetComponent<Image>().color = new Color(0.08f, 0.4f, 0.58f);
                    botonCarreterasImagen.GetComponent<Image>().sprite = botonCarreterasSprite2;
                }
                else if (numeroSeleccionado == 1)
                {
                    botonPoblacion.gameObject.GetComponent<Image>().color = new Color(0.08f, 0.4f, 0.58f);
                    botonPoblacionImagen.GetComponent<Image>().sprite = botonPoblacionSprite2;
                }
                else if (numeroSeleccionado == 2)
                {
                    botonComida.gameObject.GetComponent<Image>().color = new Color(0.08f, 0.4f, 0.58f);
                    botonComidaImagen.GetComponent<Image>().sprite = botonComidaSprite2;
                }
                else if (numeroSeleccionado == 3)
                {
                    botonTiendas.gameObject.GetComponent<Image>().color = new Color(0.08f, 0.4f, 0.58f);
                    botonTiendasImagen.GetComponent<Image>().sprite = botonTiendasSprite2;
                }
                else if (numeroSeleccionado == 4)
                {
                    botonIndustria.gameObject.GetComponent<Image>().color = new Color(0.08f, 0.4f, 0.58f);
                    botonIndustriaImagen.GetComponent<Image>().sprite = botonIndustriaSprite2;
                }
                else if (numeroSeleccionado == 5)
                {
                    botonDecoracion.gameObject.GetComponent<Image>().color = new Color(0.08f, 0.4f, 0.58f);
                    botonDecoracionImagen.GetComponent<Image>().sprite = botonDecoracionSprite2;
                }
            }
        }

        public void CursorSaleEdificioSuperior(int numeroSeleccionado)
        {
            if (numeroSeleccionado != numeroEdificios)
            {
                if (numeroSeleccionado == 0)
                {
                    botonCarreteras.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 0f / 255f);
                    botonCarreterasImagen.GetComponent<Image>().sprite = botonCarreterasSprite1;
                }
                else if (numeroSeleccionado == 1)
                {
                    botonPoblacion.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 0f / 255f);
                    botonPoblacionImagen.GetComponent<Image>().sprite = botonPoblacionSprite1;
                }
                else if (numeroSeleccionado == 2)
                {
                    botonComida.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 0f / 255f);
                    botonComidaImagen.GetComponent<Image>().sprite = botonComidaSprite1;
                }
                else if (numeroSeleccionado == 3)
                {
                    botonTiendas.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 0f / 255f);
                    botonTiendasImagen.GetComponent<Image>().sprite = botonTiendasSprite1;
                }
                else if (numeroSeleccionado == 4)
                {
                    botonIndustria.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 0f / 255f);
                    botonIndustriaImagen.GetComponent<Image>().sprite = botonIndustriaSprite1;
                }
                else if (numeroSeleccionado == 5)
                {
                    botonDecoracion.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 0f / 255f);
                    botonDecoracionImagen.GetComponent<Image>().sprite = botonDecoracionSprite1;
                }
            }
        }

        public void CursorEntraEdificioInferior(PointerEventData eventData, Construccion edificio)
        {
            //if (edificio.coste != 0)
            //{
            //    panelCantidadDinero.gameObject.SetActive(true);
            //    costeCantidad.text = string.Format("-{0} €", edificio.coste);
            //    costeCantidad.color = new Color(157.0f, 0f, 0f);
            //}
            //else
            //{
            //    panelCantidadDinero.gameObject.SetActive(false);
            //}

            //if (edificio.poblacion != 0)
            //{
            //    panelCantidadPoblacion.gameObject.SetActive(true);
            //    poblacionCantidad.text = string.Format("{0}", edificio.poblacion);

            //    if (edificio.poblacion > 0)
            //    {
            //        poblacionCantidad.color = new Color(0f, 157.0f, 0f);
            //    }
            //    else if (edificio.poblacion < 0)
            //    {
            //        poblacionCantidad.color = new Color(157.0f, 0f, 0f);
            //    }
            //}
            //else
            //{
            //    panelCantidadPoblacion.gameObject.SetActive(false);
            //}

            //if (edificio.comida != 0)
            //{
            //    panelCantidadComida.gameObject.SetActive(true);              
            //    comidaCantidad.text = string.Format("{0}", edificio.comida);

            //    if (edificio.comida > 0)
            //    {
            //        comidaCantidad.color = new Color(0f, 157.0f, 0f);
            //    }
            //    else if (edificio.comida < 0)
            //    {
            //        comidaCantidad.color = new Color(157.0f, 0f, 0f);
            //    }
            //}
            //else
            //{
            //    panelCantidadComida.gameObject.SetActive(false);
            //}

            //if (edificio.trabajo != 0)
            //{
            //    panelCantidadTrabajo.gameObject.SetActive(true);
            //    trabajoCantidad.text = string.Format("{0}", edificio.trabajo);

            //    if (edificio.trabajo > 0)
            //    {
            //        trabajoCantidad.color = new Color(0f, 157.0f, 0f);
            //    }
            //    else if (edificio.trabajo < 0)
            //    {
            //        trabajoCantidad.color = new Color(157.0f, 0f, 0f);
            //    }
            //}
            //else
            //{
            //    panelCantidadTrabajo.gameObject.SetActive(false);
            //}
        }

        public void CursorSaleEdificioInferior(PointerEventData eventData)
        {
            //panelCantidadDinero.gameObject.SetActive(false);
            //costeCantidad.text = null;

            //panelCantidadPoblacion.gameObject.SetActive(false);
            //poblacionCantidad.text = null;

            //panelCantidadComida.gameObject.SetActive(false);
            //comidaCantidad.text = null;

            //panelCantidadTrabajo.gameObject.SetActive(false);
            //trabajoCantidad.text = null;
        }
    }
}


