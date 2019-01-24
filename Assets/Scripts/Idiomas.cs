using System.Collections;
using System.Xml;
using UnityEngine;

public class Idiomas : MonoBehaviour {

    private Hashtable cadenas;

    public void CargarIdioma(string path, string idioma)
    {
        var xml = new XmlDocument();
        xml.Load(path);

        cadenas = new Hashtable();
        var elemento = xml.DocumentElement[idioma];
        if (elemento != null)
        {
            var elemEnum = elemento.GetEnumerator();
            while (elemEnum.MoveNext())
            {
                var xmlItem = (XmlElement)elemEnum.Current;
                cadenas.Add(xmlItem.GetAttribute("name"), xmlItem.InnerText);
            }
        }
    }

    public string CogerCadena(string clave)
    {
        if (cadenas.ContainsKey(clave))
        {
            return (string)cadenas[clave];
        }
        else
        {
            return null;
        }       
    }
}
