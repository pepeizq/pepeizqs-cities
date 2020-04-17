using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Cursores : MonoBehaviour
{
    public Texture2D cursor1;
    public Texture2D cursor2;

    public void Entra()
    {
        Cursor.SetCursor(cursor2, Vector2.zero, CursorMode.Auto);
    }

    public void Sale()
    {
        Cursor.SetCursor(cursor1, Vector2.zero, CursorMode.Auto);
    }

    public void EntraBoton(Button boton)
    {
        Cursor.SetCursor(cursor2, Vector2.zero, CursorMode.Auto);

        Color colorBoton = boton.gameObject.GetComponent<Image>().color;

        if (colorBoton != new Color(3f / 255f, 28f / 255f, 39f / 255f, 255f))
        {
            boton.gameObject.GetComponent<Image>().color = new Color(3f / 255f, 28f / 255f, 39f / 255f, 255f);
        }

        Transform textoObjeto = boton.gameObject.transform.GetChild(0);
        Color colorTexto = textoObjeto.gameObject.GetComponent<Text>().color;
    
        if (colorTexto != new Color(130f / 255f, 210f / 255f, 245f / 255f, 255f))
        {
            textoObjeto.gameObject.GetComponent<Text>().color = new Color(130f / 255f, 210f / 255f, 245f / 255f, 255f);
        }
    }

    public void SaleBoton(Button boton)
    {
        Cursor.SetCursor(cursor1, Vector2.zero, CursorMode.Auto);

        Color colorBoton = boton.gameObject.GetComponent<Image>().color;

        if (colorBoton != new Color(10f / 255f, 60f / 255f, 89f / 255f, 255f))
        {
            boton.gameObject.GetComponent<Image>().color = new Color(10f / 255f, 60f / 255f, 89f / 255f, 255f);
        }

        Transform textoObjeto = boton.gameObject.transform.GetChild(0);
        Color colorTexto = textoObjeto.gameObject.GetComponent<Text>().color;

        if (colorTexto != new Color(255f / 255f, 255f / 255f, 255f / 255f, 255f))
        {
            textoObjeto.gameObject.GetComponent<Text>().color = new Color(255f / 255f, 255f / 255f, 255f / 255f, 255f);
        }
    }

    public void EntraBoton2(Button boton)
    {
        Cursor.SetCursor(cursor2, Vector2.zero, CursorMode.Auto);

        Color colorBoton = boton.gameObject.GetComponent<Image>().color;

        if (colorBoton != new Color(3f / 255f, 28f / 255f, 39f / 255f, 255f))
        {
            boton.gameObject.GetComponent<Image>().color = new Color(3f / 255f, 28f / 255f, 39f / 255f, 255f);
        }

        Transform textoObjeto = boton.gameObject.transform.GetChild(0);
        Color colorTexto = textoObjeto.gameObject.GetComponent<TextMeshProUGUI>().color;

        if (colorTexto != new Color(130f / 255f, 210f / 255f, 245f / 255f, 255f))
        {
            textoObjeto.gameObject.GetComponent<TextMeshProUGUI>().color = new Color(130f / 255f, 210f / 255f, 245f / 255f, 255f);
        }
    }

    public void SaleBoton2(Button boton)
    {
        Cursor.SetCursor(cursor1, Vector2.zero, CursorMode.Auto);

        Color colorBoton = boton.gameObject.GetComponent<Image>().color;

        if (colorBoton != new Color(10f / 255f, 60f / 255f, 89f / 255f, 255f))
        {
            boton.gameObject.GetComponent<Image>().color = new Color(10f / 255f, 60f / 255f, 89f / 255f, 255f);
        }

        Transform textoObjeto = boton.gameObject.transform.GetChild(0);
        Color colorTexto = textoObjeto.gameObject.GetComponent<TextMeshProUGUI>().color;

        if (colorTexto != new Color(255f / 255f, 255f / 255f, 255f / 255f, 255f))
        {
            textoObjeto.gameObject.GetComponent<TextMeshProUGUI>().color = new Color(255f / 255f, 255f / 255f, 255f / 255f, 255f);
        }
    }
}
