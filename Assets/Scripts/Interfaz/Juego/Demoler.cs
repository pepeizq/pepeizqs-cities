using UnityEngine;
using UnityEngine.UI;

namespace Interfaz.Juego2
{
    public class Demoler : MonoBehaviour
    {
        public Panel botonDemoler;

        public Juego juego;

        private Color colorDemoler = new Color(209f / 255f, 0f / 255f, 0f / 255f, 255f);
        private Color colorTransparente = new Color(255f / 255f, 255f / 255f, 255f / 255f, 0f);

        public void RatonEntra()
        {
            Color colorPanel = botonDemoler.gameObject.GetComponent<Image>().color;

            if (colorPanel != colorDemoler)
            {
                botonDemoler.gameObject.GetComponent<Image>().color = colorDemoler;
            }
        }

        public void RatonSale()
        {
            bool cambiar = true;

            if (juego.demolerActivar == true)
            {
                cambiar = false;
            }

            if (cambiar == true)
            {
                Color colorPanel = botonDemoler.gameObject.GetComponent<Image>().color;

                if (colorPanel != colorTransparente)
                {
                    botonDemoler.gameObject.GetComponent<Image>().color = colorTransparente;
                }
            }               
        }
    }
}
