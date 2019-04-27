using System.Collections;
using System.Xml;
using UnityEngine;
using UnityEngine.UI;

public class Idiomas : MonoBehaviour {

    public TextAsset ficheroIdiomas;

    private Hashtable cadenas;

    public AudioSource sonidoBoton;

    public Text menuPrincipalNuevaPartida;
    public Text menuPrincipalCargarPartida;
    public Text menuPrincipalOpciones;
    public Text menuPrincipalSalir;
    public Text menuPrincipalAviso;

    public Text opcionesVolver;
    public Text opcionesGeneral;
    public Text opcionesGraficos;
    public Text opcionesTeclado;

    public Text opcionesIdiomas;
    public Text opcionesAyuda;
    public Text opcionesSonido;
    public Text opcionesSonidoVolumen;
    public Text opcionesPantalla;
    public Dropdown opcionesDpPantalla;

    public Text opcionesSombras;
    public Dropdown opcionesDpSombras;  
    public Text opcionesSombrasCalidad;
    public Text opcionesTexturas;
    public Text opcionesAntiAliasing;

    public Text opcionesTecladoCamara;
    public Text opcionesTecladoIzquierda;
    public Text opcionesTecladoArriba;
    public Text opcionesTecladoDerecha;
    public Text opcionesTecladoAbajo;
    public Text opcionesTecladoRotarIzquierda;
    public Text opcionesTecladoRotarDerecha;

    public Text opcionesTecladoJuego;
    public Text opcionesTecladoEnseñarMenu;
    public Text opcionesTecladoRotacionEdificioIzquierda;
    public Text opcionesTecladoRotacionEdificioDerecha;
    public Text opcionesTecladoArrastrarConstruccion;

    public Text ayuda1;
    public Text ayuda2;
    public Text ayuda3;
    public Text ayuda4;
    public Text ayuda5;

    public Text edificiosCoste;
    public Text edificiosPoblacion;
    public Text edificiosComida;
    public Text edificiosTrabajo;

    public Text menuJuegoGuardarPartida;
    public Text menuJuegoOpciones;
    public Text menuJuegoReportarFallo;
    public Text menuJuegoVolverMenuPrincipal;
    public Text menuJuegoSalir;
    public Text menuJuegoGuardarMenuPrincipal;
    public Text menuJuegoGuardarMenuPrincipalSi;
    public Text menuJuegoGuardarMenuPrincipalNo;
    public Text menuJuegoGuardarSalir;
    public Text menuJuegoGuardarSalirSi;
    public Text menuJuegoGuardarSalirNo;

    public void CargarTextos()
    {
        menuPrincipalNuevaPartida.text = CogerCadena("newGame").ToUpper();
        menuPrincipalCargarPartida.text = CogerCadena("loadGame").ToUpper();
        menuPrincipalOpciones.text = CogerCadena("options").ToUpper();
        menuPrincipalSalir.text = CogerCadena("exitGame").ToUpper();
        menuPrincipalAviso.text = CogerCadena("warning");

        opcionesVolver.text = CogerCadena("back");
        opcionesGeneral.text = CogerCadena("general");
        opcionesGraficos.text = CogerCadena("graphics");
        opcionesTeclado.text = CogerCadena("keyboard");

        opcionesIdiomas.text = CogerCadena("languages");
        opcionesAyuda.text = CogerCadena("help");
        opcionesSonido.text = CogerCadena("sound");
        opcionesSonidoVolumen.text = CogerCadena("soundVolume");
        opcionesPantalla.text = CogerCadena("screen");
        opcionesDpPantalla.options.Clear();
        opcionesDpPantalla.options.Add(new Dropdown.OptionData() { text = CogerCadena("screenMode1") });
        opcionesDpPantalla.options.Add(new Dropdown.OptionData() { text = CogerCadena("screenMode2") });
        opcionesDpPantalla.options.Add(new Dropdown.OptionData() { text = CogerCadena("screenMode3") });
        opcionesDpPantalla.value = 

        opcionesSombras.text = CogerCadena("shadows");
        opcionesDpSombras.options.Clear();
        opcionesDpSombras.options.Add(new Dropdown.OptionData() { text = CogerCadena("low") });
        opcionesDpSombras.options.Add(new Dropdown.OptionData() { text = CogerCadena("high") });
        opcionesSombrasCalidad.text = CogerCadena("shadowsQuality");
        opcionesTexturas.text = CogerCadena("textures");
        opcionesAntiAliasing.text = CogerCadena("antiAliasing");

        opcionesTecladoCamara.text = CogerCadena("keyboardCamera");
        opcionesTecladoIzquierda.text = CogerCadena("keyboardLeft");
        opcionesTecladoArriba.text = CogerCadena("keyboardUp");
        opcionesTecladoDerecha.text = CogerCadena("keyboardRight");
        opcionesTecladoAbajo.text = CogerCadena("keyboardDown");
        opcionesTecladoRotarIzquierda.text = CogerCadena("keyboardRotateLeft");
        opcionesTecladoRotarDerecha.text = CogerCadena("keyboardRotateRight");

        opcionesTecladoJuego.text = CogerCadena("keyboardGame");
        opcionesTecladoEnseñarMenu.text = CogerCadena("keyboardShowMenu");
        opcionesTecladoRotacionEdificioIzquierda.text = CogerCadena("keyboardRotateBuildingLeft");
        opcionesTecladoRotacionEdificioDerecha.text = CogerCadena("keyboardRotateBuildingRight");
        opcionesTecladoArrastrarConstruccion.text = CogerCadena("keyboardDragBuilding");

        ayuda1.text = CogerCadena("help1");
        ayuda2.text = CogerCadena("help2");
        ayuda3.text = CogerCadena("help3");
        ayuda4.text = CogerCadena("help4");
        ayuda5.text = CogerCadena("help5");

        edificiosCoste.text = CogerCadena("cost");
        edificiosPoblacion.text = CogerCadena("population");
        edificiosComida.text = CogerCadena("food");
        edificiosTrabajo.text = CogerCadena("jobs");

        menuJuegoGuardarPartida.text = CogerCadena("saveGame");
        menuJuegoOpciones.text = CogerCadena("options");
        menuJuegoReportarFallo.text = CogerCadena("reportBug");
        menuJuegoVolverMenuPrincipal.text = CogerCadena("backMenu");
        menuJuegoSalir.text = CogerCadena("exitGame2");
        menuJuegoGuardarMenuPrincipal.text = CogerCadena("exitQuestion");
        menuJuegoGuardarMenuPrincipalSi.text = CogerCadena("yes");
        menuJuegoGuardarMenuPrincipalNo.text = CogerCadena("no");
        menuJuegoGuardarSalir.text = CogerCadena("exitQuestion2");
        menuJuegoGuardarSalirSi.text = CogerCadena("yes");
        menuJuegoGuardarSalirNo.text = CogerCadena("no");
    }

    public void CargarEnglish()
    {
        sonidoBoton.Play();
        CargarIdioma(ficheroIdiomas, "English");
        PlayerPrefs.SetString("idioma", "English");
        CargarTextos();
    }

    public void CargarSpanish()
    {
        sonidoBoton.Play();
        CargarIdioma(ficheroIdiomas, "Spanish");
        PlayerPrefs.SetString("idioma", "Spanish");
        CargarTextos();
    }

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
