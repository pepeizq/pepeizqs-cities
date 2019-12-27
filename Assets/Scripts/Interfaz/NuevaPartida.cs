using UnityEngine;
using UnityEngine.UI;

namespace Interfaz
{
    public class NuevaPartida : MonoBehaviour
    {
        public AudioSource sonidoBoton;

        public Canvas canvas;

        public MenuPrincipal menuPrincipal;

        public Idiomas idiomas;

        public Text texto1;
        public Text texto2;

        public void Cargar()
        {
            menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().interactable = false;
            menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

            canvas.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            canvas.gameObject.GetComponent<CanvasGroup>().interactable = true;
            canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
        }

        public void CambiarTexto(int modo)
        {
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

        public void EliminarTexto()
        {
            texto1.text = null;
            texto2.text = null;
        }

        public void ActivarAyuda(Toggle ayuda)
        {
            sonidoBoton.Play();

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
