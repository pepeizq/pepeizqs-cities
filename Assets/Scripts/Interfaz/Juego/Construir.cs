using UnityEngine;
using UnityEngine.UI;

namespace Interfaz.Juego2
{
    public class Construir : MonoBehaviour
    {
        public Panel panelConstruir;
        public Panel panelEdificios;

        public void AbrirPanelEdificios()
        {
            Color colorPanel = panelConstruir.gameObject.GetComponent<Image>().color;

            if (colorPanel != new Color(60f / 255f, 60f / 255f, 60f / 255f, 255f))
            {
                panelConstruir.gameObject.GetComponent<Image>().color = new Color(60f / 255f, 60f / 255f, 60f / 255f, 255f);
            }

            Animator animacion = panelEdificios.GetComponent<Animator>();

            if (animacion != null)
            {
                bool abierto = animacion.GetBool("abierto");

                animacion.SetBool("abierto", !abierto);
            }

            //if (panelEdificios.gameObject.GetComponent<CanvasGroup>().alpha == 0)
            //{
            //    panelEdificios.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            //    panelEdificios.gameObject.GetComponent<CanvasGroup>().interactable = true;
            //    panelEdificios.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
            //}
            //else
            //{
            //    panelEdificios.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            //    panelEdificios.gameObject.GetComponent<CanvasGroup>().interactable = false;
            //    panelEdificios.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
            //}
        }

        public void RatonEntra()
        {
            Color colorPanel = panelConstruir.gameObject.GetComponent<Image>().color;

            if (colorPanel != new Color(60f / 255f, 60f / 255f, 60f / 255f, 255f))
            {
                panelConstruir.gameObject.GetComponent<Image>().color = new Color(60f / 255f, 60f / 255f, 60f / 255f, 255f);
            }            
        }

        public void RatonSale()
        {
            Color colorPanel = panelConstruir.gameObject.GetComponent<Image>().color;

            if (colorPanel != new Color(255f / 255f, 255f / 255f, 255f / 255f, 0f))
            {
                panelConstruir.gameObject.GetComponent<Image>().color = new Color(255f / 255f, 255f / 255f, 255f / 255f, 0f);
            }
        }
    }
}