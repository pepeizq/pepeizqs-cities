using UnityEngine;

namespace Interfaz
{
    public static class Objetos
    {
        public static void Mostrar(GameObject objeto)
        {
            objeto.GetComponent<CanvasGroup>().alpha = 1;
            objeto.GetComponent<CanvasGroup>().interactable = true;
            objeto.GetComponent<CanvasGroup>().blocksRaycasts = true;
        }

        public static void Ocultar(GameObject objeto)
        {
            objeto.GetComponent<CanvasGroup>().alpha = 0;
            objeto.GetComponent<CanvasGroup>().interactable = false;
            objeto.GetComponent<CanvasGroup>().blocksRaycasts = false;
        }
    }
}

