using UnityEngine;
using UnityEngine.UI;

namespace Interfaz.Juego2
{
    public class Demoler : MonoBehaviour
    {



        public void RatonEntra(Panel panel)
        {
            Color colorPanel = panel.gameObject.GetComponent<Image>().color;

            if (colorPanel != new Color(209f / 255f, 0f / 255f, 0f / 255f, 255f))
            {
                panel.gameObject.GetComponent<Image>().color = new Color(209f / 255f, 0f / 255f, 0f / 255f, 255f);
            }
        }

        public void RatonSale(Panel panel)
        {
            Color colorPanel = panel.gameObject.GetComponent<Image>().color;

            if (colorPanel != new Color(255f / 255f, 255f / 255f, 255f / 255f, 0f))
            {
                panel.gameObject.GetComponent<Image>().color = new Color(255f / 255f, 255f / 255f, 255f / 255f, 0f);
            }
        }
    }
}
