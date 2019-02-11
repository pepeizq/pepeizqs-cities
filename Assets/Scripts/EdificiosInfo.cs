using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class EdificiosInfo : MonoBehaviour {

    public Idiomas idioma;

    public Text costeTexto;
    public Text costeCantidad;

    public Panel panelPoblacion;
    public Text poblacionTexto;
    public Text poblacionCantidad;

    public void OnPointerEnter(PointerEventData eventData, Construccion edificio)
    {
        costeTexto.text = idioma.CogerCadena("cost");
        costeCantidad.text = string.Format("- {0} €", edificio.coste);
        costeCantidad.color = new Color(157.0f, 0f, 0f);

        if (edificio.poblacion != 0)
        {
            panelPoblacion.gameObject.SetActive(true);
            poblacionTexto.text = idioma.CogerCadena("population");

            if (edificio.poblacion > 0)
            {
                poblacionCantidad.text = string.Format("+ {0}", edificio.poblacion);
                poblacionCantidad.color = new Color(0f, 157.0f, 0f);
            }
            else if (edificio.poblacion < 0)
            {
                poblacionCantidad.text = string.Format("- {0}", edificio.poblacion);
                poblacionCantidad.color = new Color(157.0f, 0f, 0f);
            }
        }
        else
        {
            panelPoblacion.gameObject.SetActive(false);
        }
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        costeTexto.text = null;
        costeCantidad.text = null;

        panelPoblacion.gameObject.SetActive(false);
        poblacionTexto.text = null;
        poblacionCantidad.text = null;
    }
}
