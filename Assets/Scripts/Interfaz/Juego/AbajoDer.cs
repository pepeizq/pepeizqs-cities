using UnityEngine;
using UnityEngine.UI;

namespace Interfaz.Juego2
{
    public class AbajoDer : MonoBehaviour
    {
        public Idiomas idioma;

        public Panel botonPausa;
        public Panel botonPlay1;
        public Panel botonPlay2;

        public Text tiempo;

        public Velocidad velocidad;

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
            bool cambiar = true;

            if ((velocidad.velocidad == 0) && (panel.nombre == "pausa"))
            {
                cambiar = false;
            }
            else if ((velocidad.velocidad == 1) && (panel.nombre == "play1"))
            {
                cambiar = false;
            }
            else if ((velocidad.velocidad == 2) && (panel.nombre == "play2"))
            {
                cambiar = false;
            }
     
            if (cambiar == true)
            {
                Color colorPanel = panel.gameObject.GetComponent<Image>().color;

                if (colorPanel != colorTransparente)
                {
                    panel.gameObject.GetComponent<Image>().color = colorTransparente;
                }
            }
        }

        public void MarcarVelocidad(int velocidad)
        {
            botonPausa.gameObject.GetComponent<Image>().color = colorTransparente;
            botonPlay1.gameObject.GetComponent<Image>().color = colorTransparente;
            botonPlay2.gameObject.GetComponent<Image>().color = colorTransparente;

            if (velocidad == 0)
            {
                botonPausa.gameObject.GetComponent<Image>().color = colorEntra;
            }
            else if (velocidad == 1)
            {
                botonPlay1.gameObject.GetComponent<Image>().color = colorEntra;
            }
            else if (velocidad == 2)
            {
                botonPlay2.gameObject.GetComponent<Image>().color = colorEntra;
            }
        }

        public void TiempoActualizar(float dias, string reloj)
        {
            string tiempoTexto = null;

            if (idioma.CogerCadena("day") != null)
            {
                tiempoTexto = string.Format(idioma.CogerCadena("day").ToLower() + " {0}", Mathf.Round(dias));
            }

            tiempoTexto = tiempoTexto + " • " + reloj;

            if (tiempoTexto.Trim().Length > 0)
            {
                tiempo.text = tiempoTexto;
            }
        }
    }
}
