using UnityEngine;

namespace Interfaz
{
    public class NuevaPartida : MonoBehaviour
    {
        public Canvas canvas;

        public MenuPrincipal menuPrincipal;

        public void Cargar()
        {
            menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().interactable = false;
            menuPrincipal.canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

            canvas.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            canvas.gameObject.GetComponent<CanvasGroup>().interactable = true;
            canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
        }
    }
}
