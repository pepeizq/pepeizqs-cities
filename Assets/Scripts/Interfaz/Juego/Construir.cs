using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Interfaz.Juego2
{
    public class Construir : MonoBehaviour
    {
        public AudioSource sonidoBoton;
        public Cursores cursores;

        public MenuAbajoIzq menuAbajoIzqInterfaz;

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
        public Panel panelPoblacion;
        public Panel panelComida;
        public Panel panelTiendas;
        public Panel panelIndustria;
        public Panel panelDecoracion;

        private Color colorVerde = new Color(60f / 255f, 255f / 255f, 60f / 255f, 255f);
        private Color colorRojo = new Color(255f / 255f, 1f / 255f, 1f / 255f, 255f);

        private Color colorCarreteras = new Color(133f / 255f, 133f / 255f, 133f / 255f, 255f);
        private Color colorPoblacion = new Color(180f / 255f, 117f / 255f, 90f / 255f, 255f);
        private Color colorComida = new Color(255f / 255f, 60f / 255f, 21f / 255f, 255f);
        private Color colorTiendas = new Color(86f / 255f, 86f / 255f, 249f / 255f, 255f);
        private Color colorIndustria = new Color(166f / 255f, 166f / 255f, 30f / 255f, 255f);
        private Color colorDecoracion = new Color(63f / 255f, 133f / 255f, 46f / 255f, 255f);

        private Color colorTransparente = new Color(255f / 255f, 255f / 255f, 255f / 255f, 0f);

        public void AbrirPanelEdificios()
        {
            sonidoBoton.Play();
            CerrarPaneles();
            menuAbajoIzqInterfaz.CerrarMenu();

            if (panelEdificiosTipo.gameObject.GetComponent<CanvasGroup>().alpha == 0)
            {
                botonConstruir.gameObject.GetComponent<Image>().color = new Color(60f / 255f, 60f / 255f, 60f / 255f, 255f);
                AbrirPanel(panelEdificiosTipo);

                Animator animacion = panelEdificiosTipo.GetComponent<Animator>();

                if (animacion != null)
                {
                    animacion.Play("PanelEdificiosTipo", 0, 1f);
                }
            }
            else
            {
                botonConstruir.gameObject.GetComponent<Image>().color = colorTransparente;
                CerrarPanel(panelEdificiosTipo);
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

        public void RatonSaleBotonEdificios()
        {
            bool cambiar = true;

            if (panelEdificiosTipo.gameObject.GetComponent<CanvasGroup>().alpha == 1)
            {
                cambiar = false;
            }
            else if (panelCarreteras.gameObject.GetComponent<CanvasGroup>().alpha == 1)
            {
                cambiar = false;
            }
            else if (panelPoblacion.gameObject.GetComponent<CanvasGroup>().alpha == 1)
            {
                cambiar = false;
            }
            else if (panelComida.gameObject.GetComponent<CanvasGroup>().alpha == 1)
            {
                cambiar = false;
            }
            else if (panelTiendas.gameObject.GetComponent<CanvasGroup>().alpha == 1)
            {
                cambiar = false;
            }
            else if (panelIndustria.gameObject.GetComponent<CanvasGroup>().alpha == 1)
            {
                cambiar = false;
            }
            else if (panelDecoracion.gameObject.GetComponent<CanvasGroup>().alpha == 1)
            {
                cambiar = false;
            }
            else if (juego.construirActivar == true)
            {
                cambiar = false;
            }

            if (cambiar == true)
            {
                Color colorPanel = botonConstruir.gameObject.GetComponent<Image>().color;

                if (colorPanel != colorTransparente)
                {
                    botonConstruir.gameObject.GetComponent<Image>().color = colorTransparente;
                }
            }
        }

        public void RatonEntraBotonCarreteras()
        {
            Color colorPanel = botonCarreteras.gameObject.GetComponent<Image>().color;

            if (colorPanel != colorCarreteras)
            {
                botonCarreteras.gameObject.GetComponent<Image>().color = colorCarreteras;
            }
        }

        public void RatonEntraBotonPoblacion()
        {
            Color colorPanel = botonPoblacion.gameObject.GetComponent<Image>().color;

            if (colorPanel != colorPoblacion)
            {
                botonPoblacion.gameObject.GetComponent<Image>().color = colorPoblacion;
            }
        }

        public void RatonEntraBotonComida()
        {
            Color colorPanel = botonComida.gameObject.GetComponent<Image>().color;

            if (colorPanel != colorComida)
            {
                botonComida.gameObject.GetComponent<Image>().color = colorComida;
            }
        }

        public void RatonEntraBotonTiendas()
        {
            Color colorPanel = botonTiendas.gameObject.GetComponent<Image>().color;

            if (colorPanel != colorTiendas)
            {
                botonTiendas.gameObject.GetComponent<Image>().color = colorTiendas;
            }
        }

        public void RatonEntraBotonIndustria()
        {
            Color colorPanel = botonIndustria.gameObject.GetComponent<Image>().color;

            if (colorPanel != colorIndustria)
            {
                botonIndustria.gameObject.GetComponent<Image>().color = colorIndustria;
            }
        }

        public void RatonEntraBotonDecoracion()
        {
            Color colorPanel = botonDecoracion.gameObject.GetComponent<Image>().color;

            if (colorPanel != colorDecoracion)
            {
                botonDecoracion.gameObject.GetComponent<Image>().color = colorDecoracion;
            }
        }

        public void RatonSaleBoton(Panel panel)
        {
            Color colorPanel = panel.gameObject.GetComponent<Image>().color;

            if (colorPanel != colorTransparente)
            {
                panel.gameObject.GetComponent<Image>().color = colorTransparente;
            }
        }

        //-----------------------------------------------------

        public void AbrirPanelCarreteras()
        {
            if (panelCarreteras.gameObject.GetComponent<CanvasGroup>().alpha == 0)
            {
                sonidoBoton.Play();
                CerrarPanel(panelEdificiosTipo);              
                AbrirPanel(panelCarreteras);

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
        }

        public void AbrirPanelPoblacion()
        {
            if (panelPoblacion.gameObject.GetComponent<CanvasGroup>().alpha == 0)
            {
                sonidoBoton.Play();
                CerrarPanel(panelEdificiosTipo);
                AbrirPanel(panelPoblacion);

                foreach (Transform boton in panelPoblacion.gameObject.transform)
                {
                    GameObject.Destroy(boton.gameObject);
                }

                foreach (Construccion edificio in juego.edificios)
                {
                    if (edificio.categoria == 2)
                    {
                        AñadirBotonEdificios(edificio, panelPoblacion);
                    }
                }
            }
        }

        public void AbrirPanelComida()
        {
            if (panelComida.gameObject.GetComponent<CanvasGroup>().alpha == 0)
            {
                sonidoBoton.Play();
                CerrarPanel(panelEdificiosTipo);
                AbrirPanel(panelComida);

                foreach (Transform boton in panelComida.gameObject.transform)
                {
                    GameObject.Destroy(boton.gameObject);
                }

                foreach (Construccion edificio in juego.edificios)
                {
                    if (edificio.categoria == 3)
                    {
                        AñadirBotonEdificios(edificio, panelComida);
                    }
                }
            }
        }

        public void AbrirPanelTiendas()
        {
            if (panelTiendas.gameObject.GetComponent<CanvasGroup>().alpha == 0)
            {
                sonidoBoton.Play();
                CerrarPanel(panelEdificiosTipo);
                AbrirPanel(panelTiendas);

                foreach (Transform boton in panelTiendas.gameObject.transform)
                {
                    GameObject.Destroy(boton.gameObject);
                }

                foreach (Construccion edificio in juego.edificios)
                {
                    if (edificio.categoria == 4)
                    {
                        AñadirBotonEdificios(edificio, panelTiendas);
                    }
                }
            }
        }

        public void AbrirPanelIndustria()
        {
            if (panelIndustria.gameObject.GetComponent<CanvasGroup>().alpha == 0)
            {
                sonidoBoton.Play();
                CerrarPanel(panelEdificiosTipo);
                AbrirPanel(panelIndustria);

                foreach (Transform boton in panelIndustria.gameObject.transform)
                {
                    GameObject.Destroy(boton.gameObject);
                }

                foreach (Construccion edificio in juego.edificios)
                {
                    if (edificio.categoria == 5)
                    {
                        AñadirBotonEdificios(edificio, panelIndustria);
                    }
                }
            }
        }

        public void AbrirPanelDecoracion()
        {
            if (panelDecoracion.gameObject.GetComponent<CanvasGroup>().alpha == 0)
            {
                sonidoBoton.Play();
                CerrarPanel(panelEdificiosTipo);
                AbrirPanel(panelDecoracion);

                foreach (Transform boton in panelDecoracion.gameObject.transform)
                {
                    GameObject.Destroy(boton.gameObject);
                }

                foreach (Construccion edificio in juego.edificios)
                {
                    if (edificio.categoria == 0)
                    {
                        AñadirBotonEdificios(edificio, panelDecoracion);
                    }
                }
            }
        }

        private void AñadirBotonEdificios(Construccion edificio, Panel panel)
        {
            GameObject botonObjeto = Instantiate(botonPrefab);
            botonObjeto.transform.SetParent(panel.transform, false);

            GameObject panelBoton = botonObjeto.transform.GetChild(0).gameObject;
            Panel subpanelBotonImagen = panelBoton.transform.GetChild(0).transform.GetComponent<Panel>();

            Image imagen = subpanelBotonImagen.transform.GetChild(0).transform.GetComponent<Image>();
            imagen.sprite = edificio.botonImagen;

            //-----------------------------------

            Panel subpanelBotonDatos = panelBoton.transform.GetChild(1).transform.GetComponent<Panel>();

            Text coste = subpanelBotonDatos.transform.GetChild(0).transform.GetComponent<Text>();
            coste.text = string.Format("{0} €", edificio.coste);
            coste.color = colorRojo;

            Panel panelBotonComida = subpanelBotonDatos.gameObject.transform.GetChild(1).transform.GetComponent<Panel>();

            if (panelBotonComida != null)
            {
                if (edificio.comida != 0)
                {
                    panelBotonComida.gameObject.SetActive(true);

                    Transform iconoT = panelBotonComida.gameObject.transform.GetChild(0);
                    TextMeshProUGUI icono = iconoT.gameObject.GetComponent<TextMeshProUGUI>();

                    Text comida = panelBotonComida.transform.GetChild(1).transform.GetComponent<Text>();
                    comida.text = string.Format("{0}", edificio.comida);

                    if (edificio.comida > 0)
                    {
                        icono.color = colorVerde;
                        comida.text = string.Format("+{0}", comida.text);
                        comida.color = colorVerde;
                    }
                    else if (edificio.comida < 0)
                    {
                        icono.color = colorRojo;
                        comida.color = colorRojo;
                    }
                }
                else
                {
                    panelBotonComida.gameObject.SetActive(false);
                }
            }

            Panel panelBotonPoblacion = subpanelBotonDatos.gameObject.transform.GetChild(2).transform.GetComponent<Panel>();

            if (panelBotonPoblacion != null)
            {
                if (edificio.poblacion != 0)
                {
                    panelBotonPoblacion.gameObject.SetActive(true);

                    Transform iconoT = panelBotonPoblacion.gameObject.transform.GetChild(0);
                    TextMeshProUGUI icono = iconoT.gameObject.GetComponent<TextMeshProUGUI>();

                    Text poblacion = panelBotonPoblacion.transform.GetChild(1).transform.GetComponent<Text>();
                    poblacion.text = string.Format("{0}", edificio.poblacion);

                    if (edificio.poblacion > 0)
                    {
                        icono.color = colorVerde;
                        poblacion.text = string.Format("+{0}", poblacion.text);
                        poblacion.color = colorVerde;
                    }
                    else if (edificio.poblacion < 0)
                    {
                        icono.color = colorRojo;
                        poblacion.color = colorRojo;
                    }
                }
                else
                {
                    panelBotonPoblacion.gameObject.SetActive(false);
                }
            }

            Panel panelBotonTrabajo = subpanelBotonDatos.gameObject.transform.GetChild(3).transform.GetComponent<Panel>();

            if (panelBotonTrabajo != null)
            {
                if (edificio.trabajo != 0)
                {
                    panelBotonTrabajo.gameObject.SetActive(true);

                    Transform iconoT = panelBotonTrabajo.gameObject.transform.GetChild(0);
                    TextMeshProUGUI icono = iconoT.gameObject.GetComponent<TextMeshProUGUI>();

                    Text trabajo = panelBotonTrabajo.transform.GetChild(1).transform.GetComponent<Text>();
                    trabajo.text = string.Format("{0}", edificio.trabajo);

                    if (edificio.trabajo > 0)
                    {
                        icono.color = colorVerde;
                        trabajo.text = string.Format("+{0}", trabajo.text);
                        trabajo.color = colorVerde;
                    }
                    else if (edificio.trabajo < 0)
                    {
                        icono.color = colorRojo;
                        trabajo.color = colorRojo;
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
            boton.onClick.AddListener(() => CerrarPaneles());

            EventTrigger evento = botonObjeto.AddComponent<EventTrigger>();
            EventTrigger.Entry pointerEnter = new EventTrigger.Entry
            {
                eventID = EventTriggerType.PointerEnter
            };

            pointerEnter.callback.AddListener((data) => { CursorEntraEdificio((PointerEventData)data, boton, edificio.categoria); });
            evento.triggers.Add(pointerEnter);

            EventTrigger.Entry pointerExit = new EventTrigger.Entry
            {
                eventID = EventTriggerType.PointerExit
            };

            pointerExit.callback.AddListener((data) => { CursorSaleEdificio((PointerEventData)data, boton); });
            evento.triggers.Add(pointerExit);
        }

        //-----------------------------------------------------

        public void CursorEntraEdificio(PointerEventData eventData, Button boton, int categoria)
        {
            cursores.Entra();

            GameObject panelBoton = boton.transform.GetChild(0).gameObject;
            Panel subpanelBotonImagen = panelBoton.transform.GetChild(0).transform.GetComponent<Panel>();
            Image imagen = subpanelBotonImagen.gameObject.GetComponent<Image>();

            if (categoria == 1)
            {
                imagen.color = colorCarreteras;
            }
            else if (categoria == 2)
            {
                imagen.color = colorPoblacion;
            }
            else if (categoria == 3)
            {
                imagen.color = colorComida;
            }
            else if (categoria == 4)
            {
                imagen.color = colorTiendas;
            }
            else if (categoria == 5)
            {
                imagen.color = colorIndustria;
            }
            else if (categoria == 0)
            {
                imagen.color = colorDecoracion;
            }
        }

        public void CursorSaleEdificio(PointerEventData eventData, Button boton)
        {
            cursores.Sale();

            GameObject panelBoton = boton.transform.GetChild(0).gameObject;
            Panel subpanelBotonImagen = panelBoton.transform.GetChild(0).transform.GetComponent<Panel>();
            Image imagen = subpanelBotonImagen.gameObject.GetComponent<Image>();
            imagen.color = colorTransparente;
        }

        //-----------------------------------------------------

        public void CerrarTodo()
        {
            botonConstruir.gameObject.GetComponent<Image>().color = colorTransparente;
            CerrarPanel(panelEdificiosTipo);
            CerrarPaneles();
        }

        private void CerrarPaneles()
        {
            CerrarPanel(panelCarreteras);
            CerrarPanel(panelPoblacion);
            CerrarPanel(panelComida);
            CerrarPanel(panelTiendas);
            CerrarPanel(panelIndustria);
            CerrarPanel(panelDecoracion);
        }

        private void AbrirPanel(Panel panel)
        {
            panel.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            panel.gameObject.GetComponent<CanvasGroup>().interactable = true;
            panel.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
        }

        private void CerrarPanel(Panel panel)
        {
            panel.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            panel.gameObject.GetComponent<CanvasGroup>().interactable = false;
            panel.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
        }
    }
}