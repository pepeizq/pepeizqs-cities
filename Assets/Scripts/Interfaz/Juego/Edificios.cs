using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Interfaz.Juego2
{
    public class Edificios : MonoBehaviour
    {
        public Cursores cursores;

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
        private float alturaCarreterasContador = 0;

        public Panel panelPoblacion;
        public Button botonPoblacion;
        public Image botonPoblacionImagen;
        public Sprite botonPoblacionSprite1;
        public Sprite botonPoblacionSprite2;
        private float alturaPoblacion = 0;
        private float alturaPoblacionContador = 0;

        public Panel panelComida;
        public Button botonComida;
        public Image botonComidaImagen;
        public Sprite botonComidaSprite1;
        public Sprite botonComidaSprite2;
        private float alturaComida = 0;
        private float alturaComidaContador = 0;

        public Panel panelTiendas;
        public Button botonTiendas;
        public Image botonTiendasImagen;
        public Sprite botonTiendasSprite1;
        public Sprite botonTiendasSprite2;
        private float alturaTiendas = 0;
        private float alturaTiendasContador = 0;

        public Panel panelIndustria;
        public Button botonIndustria;
        public Image botonIndustriaImagen;
        public Sprite botonIndustriaSprite1;
        public Sprite botonIndustriaSprite2;
        private float alturaIndustria = 0;
        private float alturaIndustriaContador = 0;

        public Panel panelDecoracion;
        public Button botonDecoracion;
        public Image botonDecoracionImagen;
        public Sprite botonDecoracionSprite1;
        public Sprite botonDecoracionSprite2;
        private float alturaDecoracion = 0;
        private float alturaDecoracionContador = 0;

        private string colorTextoVerde = "#007700";
        private string colorTextoRojo = "#d90000";

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
                        alturaDecoracionContador += 1;

                        if (alturaDecoracionContador == 1)
                        {
                            alturaDecoracion += 120;
                        }
                        else if (alturaDecoracionContador == 3)
                        { 
                            alturaDecoracionContador = 0;
                        }                       
                    }
                    else if (edificio.categoria == 1)
                    {
                        botonObjeto.transform.SetParent(panelCarreteras.transform, false);
                        alturaCarreterasContador += 1;

                        if (alturaCarreterasContador == 1)
                        {
                            alturaCarreteras += 120;
                        }
                        else if (alturaCarreterasContador == 3)
                        {
                            alturaCarreterasContador = 0;
                        }
                    }
                    else if (edificio.categoria == 2)
                    {
                        botonObjeto.transform.SetParent(panelPoblacion.transform, false);
                        alturaPoblacionContador += 1;

                        if (alturaPoblacionContador == 1)
                        {
                            alturaPoblacion += 120;
                        }
                        else if (alturaPoblacionContador == 3)
                        {
                            alturaPoblacionContador = 0;
                        }
                    }
                    else if (edificio.categoria == 3)
                    {
                        botonObjeto.transform.SetParent(panelComida.transform, false);
                        alturaComidaContador += 1;

                        if (alturaComidaContador == 1)
                        {
                            alturaComida += 120;
                        }
                        else if (alturaComidaContador == 3)
                        {
                            alturaComidaContador = 0;
                        }
                    }
                    else if (edificio.categoria == 4)
                    {
                        botonObjeto.transform.SetParent(panelTiendas.transform, false);
                        alturaTiendasContador += 1;

                        if (alturaTiendasContador == 1)
                        {
                            alturaTiendas += 120;
                        }
                        else if (alturaTiendasContador == 3)
                        {
                            alturaTiendasContador = 0;
                        }
                    }
                    else if (edificio.categoria == 5)
                    {
                        botonObjeto.transform.SetParent(panelIndustria.transform, false);
                        alturaIndustriaContador += 1;

                        if (alturaIndustriaContador == 1)
                        {
                            alturaIndustria += 120;
                        }
                        else if (alturaIndustriaContador == 3)
                        {
                            alturaIndustriaContador = 0;
                        }
                    }

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

                    Button boton = botonObjeto.GetComponent<Button>();
                    boton.onClick.AddListener(() => juego.ConstruirSeleccionarEdificio(edificio.id));

                    EventTrigger evento = botonObjeto.AddComponent<EventTrigger>();
                    EventTrigger.Entry pointerEnter = new EventTrigger.Entry
                    {
                        eventID = EventTriggerType.PointerEnter
                    };

                    pointerEnter.callback.AddListener((data) => { CursorEntraEdificioInferior((PointerEventData)data); });
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
            if (altura < 270)
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
            cursores.Entra();

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
            cursores.Sale();

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

        public void CursorEntraEdificioInferior(PointerEventData eventData)
        {
            cursores.Entra();
        }

        public void CursorSaleEdificioInferior(PointerEventData eventData)
        {
            cursores.Sale();
        }
    }
}


