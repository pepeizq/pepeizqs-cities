using UnityEngine;
using UnityEngine.UI;

namespace Interfaz.Juego2
{
    public class MenuIzqAbajo : MonoBehaviour
    {
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

        public void MostrarMenu()
        {

        }
    }
}
