using System.Collections;
using System.Xml;
using UnityEngine;

public class Idiomas : MonoBehaviour {

    private Hashtable cadenas;

    public void CargarIdioma(TextAsset fichero, string idioma)
    {
        XmlDocument xml = new XmlDocument();
        xml.LoadXml(fichero.text);

        cadenas = new Hashtable();
        XmlElement elemento = xml.DocumentElement[idioma];
        if (elemento != null)
        {
            IEnumerator elemEnum = elemento.GetEnumerator();
            while (elemEnum.MoveNext())
            {
                XmlElement xmlItem = (XmlElement)elemEnum.Current;
                cadenas.Add(xmlItem.GetAttribute("name"), xmlItem.InnerText);
            }
        }
    }
 
    public string CogerCadena(string clave)
    {
        if (cadenas != null)
        {
            if (cadenas.ContainsKey(clave))
            {
                return (string)cadenas[clave];
            }
        }

        return null;
    }
}
