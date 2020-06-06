using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Interfaz.Efectos
{
    //Estilo 1: Boton Oscuro - Texto Normal
    //Estilo 2: Boton Transparente - Texto Pro
    //Estilo 3: Boton Oscuro - Imagen - Texto Normal

    public class Botones : MonoBehaviour
    {
        public Opciones2.Sonido sonido;

        public Texture2D cursor1;
        public Texture2D cursor2;

        private Color colorBotonEntra = new Color(3f / 255f, 28f / 255f, 39f / 255f, 255f);
        private Color colorBotonSale = new Color(10f / 255f, 60f / 255f, 89f / 255f, 255f);

        private Color colorTextoEntra = new Color(130f / 255f, 210f / 255f, 245f / 255f, 255f);
        private Color colorTextoSale = new Color(255f / 255f, 255f / 255f, 255f / 255f, 255f);

        private Color colorTransparente = new Color(255f / 255f, 255f / 255f, 255f / 255f, 0f);

        public void Estilo1Entra(Boton boton)
        {
            if (boton.hover == true)
            {
                if (sonido != null)
                {
                    sonido.RatonEntra();
                }

                Cursor.SetCursor(cursor2, Vector2.zero, CursorMode.Auto);

                CambiarBotonFondo(boton.gameObject.GetComponent<Button>(), colorBotonEntra);
                CambiarTextoColor(boton.gameObject.transform.GetChild(0), colorTextoEntra);
            }
        }

        public void Estilo1Sale(Boton boton)
        {
            if (boton.hover == true)
            {
                Cursor.SetCursor(cursor1, Vector2.zero, CursorMode.Auto);

                CambiarBotonFondo(boton.gameObject.GetComponent<Button>(), colorBotonSale);
                CambiarTextoColor(boton.gameObject.transform.GetChild(0), colorTextoSale);
            }             
        }

        public void Estilo2Entra(Boton boton)
        {
            if (boton.hover == true)
            {
                if (sonido != null)
                {
                    sonido.RatonEntra();
                }

                Cursor.SetCursor(cursor2, Vector2.zero, CursorMode.Auto);

                CambiarBotonFondo(boton.gameObject.GetComponent<Button>(), colorBotonEntra);
                CambiarTextoProColor(boton.gameObject.transform.GetChild(0), colorTextoEntra);
            }
        }

        public void Estilo2Sale(Boton boton)
        {
            if (boton.hover == true)
            {
                Cursor.SetCursor(cursor1, Vector2.zero, CursorMode.Auto);

                CambiarBotonFondo(boton.gameObject.GetComponent<Button>(), colorTransparente);
                CambiarTextoProColor(boton.gameObject.transform.GetChild(0), colorTextoSale);
            }
        }

        public void Estilo3Entra(Boton boton)
        {
            if (boton.hover == true)
            {
                if (sonido != null)
                {
                    sonido.RatonEntra();
                }

                Cursor.SetCursor(cursor2, Vector2.zero, CursorMode.Auto);

                CambiarBotonFondo(boton.gameObject.GetComponent<Button>(), colorBotonEntra);
                CambiarImagenColor(boton.gameObject.transform.GetChild(0), colorTextoEntra);
                CambiarTextoColor(boton.gameObject.transform.GetChild(1), colorTextoEntra);
            }
        }

        public void Estilo3Sale(Boton boton)
        {
            if (boton.hover == true)
            {
                Cursor.SetCursor(cursor1, Vector2.zero, CursorMode.Auto);

                CambiarBotonFondo(boton.gameObject.GetComponent<Button>(), colorBotonSale);
                CambiarImagenColor(boton.gameObject.transform.GetChild(0), colorTextoSale);
                CambiarTextoColor(boton.gameObject.transform.GetChild(1), colorTextoSale);
            }
        }

        //-----------------------------------------------------

        private void CambiarBotonFondo(Button boton, Color fondo)
        {
            Color colorBoton = boton.gameObject.GetComponent<Image>().color;

            if (colorBoton != fondo)
            {
                boton.gameObject.GetComponent<Image>().color = fondo;
            }
        }

        private void CambiarTextoColor(Transform objeto, Color textoNuevoColor)
        {
            Color colorTexto = objeto.gameObject.GetComponent<Text>().color;

            if (colorTexto != textoNuevoColor)
            {
                objeto.gameObject.GetComponent<Text>().color = textoNuevoColor;
            }
        }

        private void CambiarTextoProColor(Transform objeto, Color textoNuevoColor)
        {
            Color colorTexto = objeto.gameObject.GetComponent<TextMeshProUGUI>().color;

            if (colorTexto != textoNuevoColor)
            {
                objeto.gameObject.GetComponent<TextMeshProUGUI>().color = textoNuevoColor;
            }
        }

        private void CambiarImagenColor(Transform objeto, Color textoNuevoColor)
        {
            Color colorTexto = objeto.gameObject.GetComponent<Image>().color;

            if (colorTexto != textoNuevoColor)
            {
                objeto.gameObject.GetComponent<Image>().color = textoNuevoColor;
            }
        }
    }
}
