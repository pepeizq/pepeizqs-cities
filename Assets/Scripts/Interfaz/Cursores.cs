using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Cursores : MonoBehaviour
{
    public Interfaz.Opciones2.Sonido sonido;

    public Texture2D cursor1;
    public Texture2D cursor2;

    private Color colorBotonEntra = new Color(3f / 255f, 28f / 255f, 39f / 255f, 255f);
    private Color colorBotonSale = new Color(10f / 255f, 60f / 255f, 89f / 255f, 255f);

    private Color colorTextoEntra = new Color(130f / 255f, 210f / 255f, 245f / 255f, 255f);
    private Color colorTextoSale = new Color(255f / 255f, 255f / 255f, 255f / 255f, 255f);

    public void Entra()
    {
        if (sonido != null)
        {
            sonido.RatonEntra();
        }

        Cursor.SetCursor(cursor2, Vector2.zero, CursorMode.Auto);
    }

    public void Sale()
    {
        Cursor.SetCursor(cursor1, Vector2.zero, CursorMode.Auto);
    }

    public void EntraBoton(Button boton)
    {
        if (sonido != null)
        {
            sonido.RatonEntra();
        }

        Cursor.SetCursor(cursor2, Vector2.zero, CursorMode.Auto);

        CambiarColorBotonEntra(boton);
        CambiarColorTextoEntra(boton.gameObject.transform.GetChild(0));
    }

    public void SaleBoton(Button boton)
    {
        Cursor.SetCursor(cursor1, Vector2.zero, CursorMode.Auto);

        CambiarColorBotonSale(boton);
        CambiarColorTextoSale(boton.gameObject.transform.GetChild(0));
    }

    public void EntraBoton2(Button boton)
    {
        if (sonido != null)
        {
            sonido.RatonEntra();
        }

        Cursor.SetCursor(cursor2, Vector2.zero, CursorMode.Auto);

        CambiarColorBotonEntra(boton);
        CambiarColorTextoProEntra(boton.gameObject.transform.GetChild(0));
    }

    public void SaleBoton2(Button boton)
    {
        Cursor.SetCursor(cursor1, Vector2.zero, CursorMode.Auto);

        CambiarColorBotonSale(boton);
        CambiarColorTextoProSale(boton.gameObject.transform.GetChild(0));
    }

    public void EntraBoton3(Button boton)
    {
        if (sonido != null)
        {
            sonido.RatonEntra();
        }

        Cursor.SetCursor(cursor2, Vector2.zero, CursorMode.Auto);

        CambiarColorBotonEntra(boton);
        CambiarColorTextoProEntra(boton.gameObject.transform.GetChild(0));
        CambiarColorTextoEntra(boton.gameObject.transform.GetChild(1));
    }

    public void SaleBoton3(Button boton)
    {
        Cursor.SetCursor(cursor1, Vector2.zero, CursorMode.Auto);

        CambiarColorBotonSale(boton);
        CambiarColorTextoProSale(boton.gameObject.transform.GetChild(0));
        CambiarColorTextoSale(boton.gameObject.transform.GetChild(1));
    }

    public void EntraBoton4(Button boton)
    {
        if (sonido != null)
        {
            sonido.RatonEntra();
        }
       
        Cursor.SetCursor(cursor2, Vector2.zero, CursorMode.Auto);

        CambiarColorBotonEntra(boton);
        CambiarColorTextoEntra(boton.gameObject.transform.GetChild(0));
        CambiarColorTextoEntra(boton.gameObject.transform.GetChild(1));
    }

    public void SaleBoton4(Button boton)
    {
        Cursor.SetCursor(cursor1, Vector2.zero, CursorMode.Auto);

        CambiarColorBotonSale(boton);
        CambiarColorTextoSale(boton.gameObject.transform.GetChild(0));
        CambiarColorTextoSale(boton.gameObject.transform.GetChild(1));
    }

    //-----------------------------------------------------

    private void CambiarColorBotonEntra(Button boton)
    {
        Color colorBoton = boton.gameObject.GetComponent<Image>().color;

        if (colorBoton != colorBotonEntra)
        {
            boton.gameObject.GetComponent<Image>().color = colorBotonEntra;
        }
    }

    private void CambiarColorBotonSale(Button boton)
    {
        Color colorBoton = boton.gameObject.GetComponent<Image>().color;

        if (colorBoton != colorBotonSale)
        {
            boton.gameObject.GetComponent<Image>().color = colorBotonSale;
        }
    }

    //-----------------------------------------------------

    private void CambiarColorTextoEntra(Transform objeto)
    {
        Color colorTexto = objeto.gameObject.GetComponent<Text>().color;

        if (colorTexto != colorTextoEntra)
        {
            objeto.gameObject.GetComponent<Text>().color = colorTextoEntra;
        }
    }

    private void CambiarColorTextoSale(Transform objeto)
    {
        Color colorTexto = objeto.gameObject.GetComponent<Text>().color;

        if (colorTexto != colorTextoSale)
        {
            objeto.gameObject.GetComponent<Text>().color = colorTextoSale;
        }
    }

    //-----------------------------------------------------

    private void CambiarColorTextoProEntra(Transform objeto)
    {
        Color colorTexto = objeto.gameObject.GetComponent<TextMeshProUGUI>().color;

        if (colorTexto != colorTextoEntra)
        {
            objeto.gameObject.GetComponent<TextMeshProUGUI>().color = colorTextoEntra;
        }
    }

    private void CambiarColorTextoProSale(Transform objeto)
    {
        Color colorTexto = objeto.gameObject.GetComponent<TextMeshProUGUI>().color;

        if (colorTexto != colorTextoSale)
        {
            objeto.gameObject.GetComponent<TextMeshProUGUI>().color = colorTextoSale;
        }
    }
}
