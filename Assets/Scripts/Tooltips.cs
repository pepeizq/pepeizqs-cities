using UnityEngine;
using UnityEngine.UI;

public class Tooltips : MonoBehaviour {

    public Text dinero;
    public RectTransform panelEdificios;

    public void Mostrar(RectTransform panel)
    {
        if (panelEdificios.gameObject.GetComponent<CanvasGroup>().alpha == 1)
        {
            if (panel.gameObject.GetComponent<CanvasGroup>().alpha == 0)
            {
                Vector3 offset = new Vector3(70, -50, -10);

                panel.gameObject.GetComponent<CanvasGroup>().alpha = 1;
                panel.gameObject.GetComponent<CanvasGroup>().interactable = true;
                panel.position = Input.mousePosition + offset;
            }
        }      
    }

    public void Ocultar(RectTransform panel)
    {
        if (panel.gameObject.GetComponent<CanvasGroup>().alpha == 1)
        {
            panel.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            panel.gameObject.GetComponent<CanvasGroup>().interactable = false;
        }
    }

    public void Dinero(Construccion construccion)
    {
        dinero.text = string.Format("-{0}",construccion.coste);
    }
}
