using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class EdificiosInfo : MonoBehaviour {

    public Idiomas idioma;

    public Panel panelCoste;
    public Text costeTexto;
    public Text costeCantidad;

    public Panel panelPoblacion;
    public Text poblacionTexto;
    public Text poblacionCantidad;

    public Panel panelComida;
    public Text comidaTexto;
    public Text comidaCantidad;

    public Panel panelTrabajo;
    public Text trabajoTexto;
    public Text trabajoCantidad;

    public void Arranque()
    {
        panelCoste.gameObject.SetActive(false);
        panelPoblacion.gameObject.SetActive(false);
        panelComida.gameObject.SetActive(false);
        panelTrabajo.gameObject.SetActive(false);
    }

    public void OnPointerEnter(PointerEventData eventData, Construccion edificio)
    {
        if (edificio.coste != 0)
        {
            panelCoste.gameObject.SetActive(true);
            costeTexto.text = idioma.CogerCadena("cost");
            costeCantidad.text = string.Format("-{0} €", edificio.coste);
            costeCantidad.color = new Color(157.0f, 0f, 0f);
        }
        else
        {
            panelCoste.gameObject.SetActive(false);
        }
     
        if (edificio.poblacion != 0)
        {
            panelPoblacion.gameObject.SetActive(true);
            poblacionTexto.text = idioma.CogerCadena("population");
            poblacionCantidad.text = string.Format("{0}", edificio.poblacion);

            if (edificio.poblacion > 0)
            {               
                poblacionCantidad.color = new Color(0f, 157.0f, 0f);
            }
            else if (edificio.poblacion < 0)
            {
                poblacionCantidad.color = new Color(157.0f, 0f, 0f);
            }
        }
        else
        {
            panelPoblacion.gameObject.SetActive(false);
        }

        if (edificio.comida != 0)
        {
            panelComida.gameObject.SetActive(true);
            comidaTexto.text = idioma.CogerCadena("food");
            comidaCantidad.text = string.Format("{0}", edificio.comida);

            if (edificio.comida > 0)
            {               
                comidaCantidad.color = new Color(0f, 157.0f, 0f);
            }
            else if (edificio.comida < 0)
            {
                comidaCantidad.color = new Color(157.0f, 0f, 0f);
            }
        }
        else
        {
            panelComida.gameObject.SetActive(false);
        }

        if (edificio.trabajo != 0)
        {
            panelTrabajo.gameObject.SetActive(true);
            trabajoTexto.text = idioma.CogerCadena("jobs");
            trabajoCantidad.text = string.Format("{0}", edificio .trabajo);

            if (edificio.trabajo > 0)
            {
                trabajoCantidad.color = new Color(0f, 157.0f, 0f);
            }
            else if (edificio.trabajo < 0)
            {
                trabajoCantidad.color = new Color(157.0f, 0f, 0f);
            }
        }
        else
        {
            panelTrabajo.gameObject.SetActive(false);
        }
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        panelCoste.gameObject.SetActive(false);
        costeTexto.text = null;
        costeCantidad.text = null;

        panelPoblacion.gameObject.SetActive(false);
        poblacionTexto.text = null;
        poblacionCantidad.text = null;

        panelComida.gameObject.SetActive(false);
        comidaTexto.text = null;
        comidaCantidad.text = null;

        panelTrabajo.gameObject.SetActive(false);
        trabajoTexto.text = null;
        trabajoCantidad.text = null;
    }
}
