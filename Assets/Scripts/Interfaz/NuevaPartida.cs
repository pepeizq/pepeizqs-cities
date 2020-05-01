using UnityEngine;
using UnityEngine.UI;

namespace Interfaz
{
    public class NuevaPartida : MonoBehaviour
    {
        public Opciones2.Sonido sonido;

        public Canvas canvas;

        public MenuPrincipal menuPrincipal;

        public Idiomas idiomas;

        public Panel panelNuevaPartida;
        public Panel panelInfo;
        public Text texto1;
        public Text texto2;

        public void Cargar()
        {
            Objetos.Ocultar(menuPrincipal.canvas.gameObject);
            Objetos.Mostrar(canvas.gameObject);
        }

        public void RatonEntra(int modo)
        {
            Objetos.Mostrar(panelInfo.gameObject);

            if (modo == 0)
            {
                texto1.text = idiomas.CogerCadena("newGameNormalMode1");
                texto2.text = idiomas.CogerCadena("newGameNormalMode2");
            }
            else if (modo == 1)
            {
                texto1.text = idiomas.CogerCadena("newGameSandboxMode1");
                texto2.text = idiomas.CogerCadena("newGameSandboxMode2");
            }
        }

        public void RatonSale()
        {
            Objetos.Ocultar(panelInfo.gameObject);

            texto1.text = null;
            texto2.text = null;
        }

        public void ActivarAyuda(Toggle ayuda)
        {
            sonido.RatonClick();

            if (ayuda.isOn == true)
            {
                PlayerPrefs.SetString("ayuda", "true");
            }
            else
            {
                PlayerPrefs.SetString("ayuda", "false");
            }
        }
    }
}
