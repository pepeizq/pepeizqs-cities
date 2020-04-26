using Construcciones;
using UnityEngine;
using UnityEngine.UI;

namespace Interfaz.Juego2
{
    public class MenuAbajoIzq : MonoBehaviour
    {
        public Panel panelMenu;

        public Juego juego;

        [SerializeField]
        private VistaPrevia colocarPrevio = null;

        [SerializeField]
        private DiaNoche diaNoche = null;

        private Color colorEntra = new Color(3f / 255f, 28f / 255f, 39f / 255f, 255f);
        private Color colorTransparente = new Color(255f / 255f, 255f / 255f, 255f / 255f, 0f);

        public void RatonEntra(Panel panel)
        {
            Color colorPanel = panel.gameObject.GetComponent<Image>().color;

            if (colorPanel != colorEntra)
            {
                panel.gameObject.GetComponent<Image>().color = colorEntra;
            }
        }

        public void RatonSale(Panel panel)
        {
            Color colorPanel = panel.gameObject.GetComponent<Image>().color;

            if (colorPanel != colorTransparente)
            {
                panel.gameObject.GetComponent<Image>().color = colorTransparente;
            }
        }

        public void RatonSaleBotonMenu()
        {
            bool cambiar = true;

            if (panelMenu.gameObject.GetComponent<CanvasGroup>().alpha == 1)
            {
                cambiar = false;
            }

            if (cambiar == true)
            {
                Color colorPanel = panelMenu.gameObject.GetComponent<Image>().color;

                if (colorPanel != colorTransparente)
                {
                    panelMenu.gameObject.GetComponent<Image>().color = colorTransparente;
                }
            }
        }

        //-----------------------------------------------------

        public void AbrirMenu()
        {
            colocarPrevio.QuitarTodosEdificios();

            if (panelMenu.gameObject.GetComponent<CanvasGroup>().alpha == 0)
            {
                AbrirPanel(panelMenu);

                Animator animacion = panelMenu.GetComponent<Animator>();

                if (animacion != null)
                {
                    animacion.Play("PanelMenuAbajoIzq", 0, 1f);
                }
            }
            else
            {
                CerrarPanel(panelMenu);
            }
        }

        //-----------------------------------------------------

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
