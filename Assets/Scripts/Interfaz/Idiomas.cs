﻿using System.Collections;
using System.Xml;
using UnityEngine;
using UnityEngine.UI;

public class Idiomas : MonoBehaviour {

    public TextAsset ficheroIdiomas;

    private Hashtable cadenas;

    public Interfaz.Opciones2.Sonido sonido;

    public Text menuPrincipalNuevaPartida;
    public Text menuPrincipalContinuarPartida;
    public Text menuPrincipalCargarPartida;
    public Text menuPrincipalSalir;

    public Text cargarPartidaVolver;

    public Text infoCodigoFuente;

    public Text opcionesVolver;
    public Text opcionesGeneral;
    public Text opcionesGraficos;
    public Text opcionesTeclado;

    public Text opcionesIdiomas;
    public Text opcionesSonidoVolumenEfectos;
    public Text opcionesSonidoVolumenMusica;
    public Text opcionesPantalla;
    public Dropdown opcionesDpPantalla;
    public Text opcionesResolucion;

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
    public Text opcionesTecladoArrancarParar;
    public Text opcionesTecladoRotacionEdificioIzquierda;
    public Text opcionesTecladoRotacionEdificioDerecha;
    public Text opcionesTecladoArrastrarConstruccion;
    public Text opcionesTecladoOcultarInterfaz;

    public Text nuevaPartidaEmpezar;
    public Text nuevaPartidaModoNormal;
    public Text nuevaPartidaModoSandbox;
    public Text nuevaPartidaAyuda;

    public Text ayuda1;
    public Text ayuda2;
    public Text ayuda3;
    public Text ayuda4;
    public Text ayuda5;
    public Text ayuda6;
    public Text ayuda7;

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

    public Text juegoCreditos;
    public Text juegoCreditoSolicitar1;

    public void CargarTextos()
    {
        menuPrincipalNuevaPartida.text = CogerCadena("newGame").ToLower();
        menuPrincipalContinuarPartida.text = CogerCadena("continueGame").ToLower();
        menuPrincipalCargarPartida.text = CogerCadena("loadGame").ToLower();
        menuPrincipalSalir.text = CogerCadena("exitGame").ToLower();

        cargarPartidaVolver.text = CogerCadena("back");

        infoCodigoFuente.text = CogerCadena("infoSourceCode");

        opcionesVolver.text = CogerCadena("back");
        opcionesGeneral.text = CogerCadena("general");
        opcionesGraficos.text = CogerCadena("graphics");
        opcionesTeclado.text = CogerCadena("keyboard");

        opcionesIdiomas.text = CogerCadena("languages").ToLower();
        opcionesSonidoVolumenEfectos.text = CogerCadena("soundVolumeEffects").ToLower();
        opcionesSonidoVolumenMusica.text = CogerCadena("soundVolumeMusic").ToLower();
        opcionesPantalla.text = CogerCadena("screen").ToLower();
        TraduccionesDpPantalla();
        opcionesResolucion.text = CogerCadena("resolution").ToLower();

        opcionesSombras.text = CogerCadena("shadows").ToLower();
        TraduccionesDpSombras();
        opcionesSombrasCalidad.text = CogerCadena("shadowsQuality").ToLower();
        opcionesTexturas.text = CogerCadena("textures").ToLower();
        opcionesAntiAliasing.text = CogerCadena("antiAliasing").ToLower();

        opcionesTecladoCamara.text = CogerCadena("keyboardCamera");
        opcionesTecladoIzquierda.text = CogerCadena("keyboardLeft").ToLower();
        opcionesTecladoArriba.text = CogerCadena("keyboardUp").ToLower();
        opcionesTecladoDerecha.text = CogerCadena("keyboardRight").ToLower();
        opcionesTecladoAbajo.text = CogerCadena("keyboardDown").ToLower();
        opcionesTecladoRotarIzquierda.text = CogerCadena("keyboardRotateLeft").ToLower();
        opcionesTecladoRotarDerecha.text = CogerCadena("keyboardRotateRight").ToLower();

        opcionesTecladoJuego.text = CogerCadena("keyboardGame");
        opcionesTecladoEnseñarMenu.text = CogerCadena("keyboardShowMenu").ToLower();
        opcionesTecladoArrancarParar.text = CogerCadena("keyboardPlayStop").ToLower();
        opcionesTecladoRotacionEdificioIzquierda.text = CogerCadena("keyboardRotateBuildingLeft").ToLower();
        opcionesTecladoRotacionEdificioDerecha.text = CogerCadena("keyboardRotateBuildingRight").ToLower();
        opcionesTecladoArrastrarConstruccion.text = CogerCadena("keyboardDragBuilding").ToLower();
        opcionesTecladoOcultarInterfaz.text = CogerCadena("keyboardHideInterface").ToLower();

        nuevaPartidaEmpezar.text = CogerCadena("newGameStart");
        nuevaPartidaModoNormal.text = CogerCadena("newGameNormalMode");
        nuevaPartidaModoSandbox.text = CogerCadena("newGameSandboxMode");
        nuevaPartidaAyuda.text = CogerCadena("newGameHelp");

        ayuda1.text = CogerCadena("help1");
        ayuda2.text = CogerCadena("help2");
        ayuda3.text = CogerCadena("help3");
        ayuda4.text = CogerCadena("help4");
        ayuda5.text = CogerCadena("help5");
        ayuda6.text = CogerCadena("help6");
        ayuda7.text = CogerCadena("help7");

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

        juegoCreditos.text = CogerCadena("credits");
        juegoCreditoSolicitar1.text = CogerCadena("creditRequest");
    }

    public void CargarEnglish()
    {
        sonido.RatonClick();
        CargarIdioma(ficheroIdiomas, "English");
        PlayerPrefs.SetString("idioma", "English");
        CargarTextos();
    }

    public void CargarSpanish()
    {
        sonido.RatonClick();
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

    public void TraduccionesDpPantalla()
    {
        opcionesDpPantalla.options.Clear();
        opcionesDpPantalla.options.Add(new Dropdown.OptionData() { text = CogerCadena("screenMode1") });
        opcionesDpPantalla.options.Add(new Dropdown.OptionData() { text = CogerCadena("screenMode2") });
        opcionesDpPantalla.options.Add(new Dropdown.OptionData() { text = CogerCadena("screenMode3") });
        opcionesDpPantalla.RefreshShownValue();
    }

    public void TraduccionesDpSombras()
    {
        opcionesDpSombras.options.Clear();
        opcionesDpSombras.options.Add(new Dropdown.OptionData() { text = CogerCadena("low") });
        opcionesDpSombras.options.Add(new Dropdown.OptionData() { text = CogerCadena("high") });
        opcionesDpSombras.RefreshShownValue();
    }
}
