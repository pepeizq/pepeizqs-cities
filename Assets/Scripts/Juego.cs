using Construcciones;
using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;
using UnityEngine.UI;

public class Juego : MonoBehaviour {

    public Idiomas idioma;

    public Canvas canvas;

    public Partidas partidas;

    [HideInInspector]
    public KeyCode teclaMenu;

    [HideInInspector]
    public KeyCode teclaRotacionEdificioIzquierda;

    [HideInInspector]
    public KeyCode teclaRotacionEdificioDerecha;

    [HideInInspector]
    public KeyCode teclaArrastrarConstruccion;

    [HideInInspector]
    public KeyCode teclaOcultarInterfaz;

    public Interfaz.MenuPrincipal menuPrincipal;
    public Interfaz.Opciones opciones;
    public Interfaz.Opciones2.General opcionesGeneral;
    public Interfaz.Opciones2.Graficos opcionesGraficos;
    public Interfaz.Opciones2.Teclado opcionesTeclado;
    public Interfaz.Ayuda ayuda;
    public Interfaz.MenuJuego menuJuego;

    public Text versionTexto;

    public Button botonContinuarPartida;
    public Button botonCargarPartida;

    public AudioSource musicaFondo;
    public AudioSource sonidoBoton;
    public AudioSource sonidoBotonConstruir;
    public AudioSource sonidoBotonDemoler;

    [SerializeField]
    private Ciudad ciudad = null;

    [SerializeField]
    public Construccion[] edificios;

    [SerializeField]
    private Construir construir = null;

    [SerializeField]
    private VistaPrevia vistaPrevia = null;

    [SerializeField]
    private DiaNoche diaNoche = null;

    private Construccion edificioSeleccionado;
    private List<Construccion2> edificiosSeleccionados = new List<Construccion2>();

    private bool construirActivar;
    private bool demolerActivar;

    public Button botonDemoler; 

    public Camera camara;

    public Escenario escenario;

    public Panel panelConstruir;
    public Panel panelConstruirSub;
    public Panel panelDemoler;
    public Panel panelDemolerSub;
    public Panel panelDatos;
    public Panel panelEdificios;
    public Panel panelGuardar;
    public Panel panelTiempo;
    public Panel panelCoste;
    public Text mensajeCoste;

    public Interfaz.Edificios panelEdificios2;
    public Panel panelCarreteras;

    private bool mantenerEjeX;
    private bool mantenerEjeZ;

    [HideInInspector]
    public bool ocultarEnseñarInterfaz = false;

    private void Start()
    {
        List<Guardado> partidasGuardadas = new List<Guardado>();

        try
        {
            partidasGuardadas = partidas.ListadoPartidas();
        }
        catch 
        {
            partidas.BorrarPartidas();
        }
       
        if (partidasGuardadas.Count > 0)
        {
            botonContinuarPartida.interactable = true;
            botonCargarPartida.interactable = true;

            if (partidasGuardadas.Count > 1)
            {
                partidasGuardadas.Sort((x, y) => y.id.CompareTo(x.id));
            }
                
            escenario.PonerTerreno(partidasGuardadas[0]);
            CargarEdificios(partidasGuardadas[0]);
            ayuda.Cargar(false);
        }
        else
        {
            botonContinuarPartida.interactable = false;
            botonCargarPartida.interactable = false;

            escenario.PonerTerreno(null);
            escenario.PonerArboles(null, construir);

            diaNoche.arranqueDia = 70000;
        }

        opciones.CargarInicio();
        opcionesGeneral.CargarInicio();
        opcionesGraficos.CargarInicio();
        opcionesTeclado.CargarInicio();

        opcionesGeneral.Sonido();
        idioma.CargarTextos();
     
        diaNoche.VelocidadMarchas(0);
        versionTexto.text = "v" + Application.version;

        //Captura.Generar(edificios[42].gameObject);
    }

    public void NuevaPartida(bool facil)
    {
        sonidoBoton.Play();

        if (facil == false)
        {
            ciudad.Dinero = 500;
            ciudad.ModoFacil = false;
        }
        else
        {
            ciudad.Dinero = 2000000;
            ciudad.ModoFacil = true;
        }
                  
        ciudad.PoblacionActual = 0f;
        ciudad.PoblacionTope = 0f;
        ciudad.TrabajosActual = 0;
        ciudad.TrabajosTope = 0;
        ciudad.Comida = 0f;

        camara.transform.position = new Vector3(10, 60, 10);

        construir.QuitarTodosEdificios();

        escenario.PonerTerreno(null);
        escenario.PonerArboles(null, construir);

        diaNoche.arranqueDia = 70000;
        diaNoche.contadorDias = 1;

        CargarInterfaz();
    }

    public void ContinuarPartida()
    {
        sonidoBoton.Play();

        construir.QuitarTodosEdificios();

        List<Guardado> partidasGuardadas = partidas.ListadoPartidas();

        if (partidasGuardadas.Count > 0)
        {
            partidasGuardadas.Sort((x, y) => y.id.CompareTo(x.id));

            escenario.PonerTerreno(partidasGuardadas[0]);
            CargarEdificios(partidasGuardadas[0]);
        }

        CargarInterfaz();
    }

    public void CargarInterfaz()
    {
        menuPrincipal.MostrarJuego();
        ayuda.Cargar(true);
        ayuda.EstadoCajas(true);
        diaNoche.VelocidadMarchas(1);
        construir.CambiarLucesSemaforos(1);
        vistaPrevia.QuitarTodosEdificios();
        panelEdificios2.Arranque(edificios);

        construirActivar = false;
        ConstruirCambiarColor();

        demolerActivar = false;
        DemolerCambiarColor();

        musicaFondo.loop = true;
        musicaFondo.Play();   
    }

    void Update ()
    {
        if (canvas.gameObject.GetComponent<CanvasGroup>().alpha == 1)
        {
            if (Input.GetKeyDown(teclaMenu))
            {
                menuJuego.MostrarMenu();
            }

            if (Input.GetMouseButtonDown(1))
            {
                if (construirActivar == true)
                {
                    construirActivar = false;
                    ConstruirCambiarColor();
                    ConstruirOcultarPanelEdificios();
                    vistaPrevia.QuitarTodosEdificios();

                    edificioSeleccionado = null;
                    panelCoste.gameObject.GetComponent<CanvasGroup>().alpha = 0;
                }

                if (demolerActivar == true)
                {
                    demolerActivar = false;
                    DemolerCambiarColor();
                }
            }

            if (edificioSeleccionado != null)
            {
                if (construirActivar == true)
                {
                    if (Input.GetKeyDown(teclaRotacionEdificioDerecha))
                    {
                        int rotacion = edificioSeleccionado.rotacionColocacion + 90;

                        if (rotacion > 0)
                        {
                            rotacion = -270;
                        }

                        edificioSeleccionado.rotacionColocacion = rotacion;
                    }

                    if (Input.GetKeyDown(teclaRotacionEdificioIzquierda))
                    {
                        int rotacion = edificioSeleccionado.rotacionColocacion - 90;

                        if (rotacion < -270)
                        {
                            rotacion = 0;
                        }

                        edificioSeleccionado.rotacionColocacion = rotacion;
                    }
                
                    if (Input.GetKey(teclaArrastrarConstruccion))
                    {
                        if (edificioSeleccionado.id == 6)
                        {
                            EdificioVistaPrevia(true, 1);
                        }
                        else if (edificioSeleccionado.id == 12)
                        {
                            EdificioVistaPrevia(true, 2);
                        }
                    }
                    else
                    {
                        mantenerEjeX = true;
                        mantenerEjeZ = true;

                        foreach (Construccion2 edificio in edificiosSeleccionados)
                        {
                            vistaPrevia.QuitarEdificio(edificio.edificio, edificio.posicion);
                        }
                    
                        edificiosSeleccionados.Clear();
                        EdificioVistaPrevia(false, 0);
                    }
                }

                if (Input.GetMouseButtonDown(0))
                {
                    EdificioConstruir(0);
                }
            }

            if (demolerActivar == true)
            {
                EdificioVistaPreviaQuitar();

                if (Input.GetMouseButtonDown(0))
                {
                    EdificioConstruir(1);
                }
            }
        }

        //-----------------------------------------------

        if (canvas.gameObject.GetComponent<CanvasGroup>().alpha == 1)
        {
            if (Input.GetKeyDown(teclaOcultarInterfaz))
            {
                ocultarEnseñarInterfaz = true;
                canvas.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            }
        }
        else
        {
            if (Input.GetKeyDown(teclaOcultarInterfaz) && ocultarEnseñarInterfaz == true)
            {
                ocultarEnseñarInterfaz = false;
                canvas.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            }
        }

        //-----------------------------------------------

        if (panelCoste.gameObject.GetComponent<CanvasGroup>().alpha == 1)
        {
            Vector3 posicion = Input.mousePosition;
            posicion.x = posicion.x + 10;
            posicion.y = posicion.y - 35;

            panelCoste.gameObject.transform.position = posicion;
        }
    }

    public void Construir()
    {
        sonidoBoton.Play();

        demolerActivar = false;
        DemolerCambiarColor();

        vistaPrevia.QuitarTodosEdificios();
        menuJuego.CerrarPanel();

        if (construirActivar == true)
        {
            construirActivar = false;
        }
        else
        {
            construirActivar = true;
        }

        if (construirActivar == true)
        {
            panelConstruirSub.gameObject.GetComponent<Image>().color = new Color(118f / 255f, 118f / 255f, 118f / 255f, 255f);
        }
        else
        {
            panelConstruirSub.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 50f / 255f);
        }

        if (panelEdificios.gameObject.GetComponent<CanvasGroup>().alpha == 0)
        {
            panelEdificios.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            panelEdificios.gameObject.GetComponent<CanvasGroup>().interactable = true;
            panelEdificios.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
        }
        else
        {
            panelEdificios.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            panelEdificios.gameObject.GetComponent<CanvasGroup>().interactable = false;
            panelEdificios.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
        }

        panelEdificios2.ConstruirMostrarPanel(panelCarreteras);
    }

    public void ConstruirRatonEntra()
    {
        if (construirActivar == false)
        {
            panelConstruirSub.gameObject.GetComponent<Image>().color = new Color(118f / 255f, 118f / 255f, 118f / 255f, 255f);
        }
        else
        {
            panelConstruirSub.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 50f / 255f);
        }
    }

    public void ConstruirCambiarColor()
    {
        if (construirActivar == true)
        {
            panelConstruirSub.gameObject.GetComponent<Image>().color = new Color(118f / 255f, 118f / 255f, 118f / 255f, 255f);
        }
        else
        {
            panelConstruirSub.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 50f / 255f);
        }
    }

    public void ConstruirOcultarPanelEdificios()
    {
        panelEdificios.gameObject.GetComponent<CanvasGroup>().alpha = 0;
        panelEdificios.gameObject.GetComponent<CanvasGroup>().interactable = false;
        panelEdificios.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
    }

    public void ConstruirSeleccionarEdificio(int edificio)
    {
        demolerActivar = false;
        DemolerCambiarColor();

        construirActivar = true;
        ConstruirOcultarPanelEdificios();

        edificioSeleccionado = edificios[edificio];
        ayuda.AbrirAyuda6o7(edificioSeleccionado.categoria);
        sonidoBoton.Play();
    }

    void EdificioConstruir(int accion)
    {
        Vector3 raton = Posicion.Raton();

        if (raton != Vector3.zero)
        {
            Vector3 posicion = Posicion.Redondear(raton, edificioSeleccionado);
            
            if (Posicion.Limites(posicion, 100) == true)
            {
                if (edificiosSeleccionados.Count > 0)
                {
                    if (edificiosSeleccionados[0].edificio.categoria == 1)
                    {
                        Carreteras.Construir(edificiosSeleccionados, ciudad, construir, diaNoche, edificios, sonidoBotonConstruir);
                    }
                }     
                else
                {
                    if (accion == 0)
                    {
                        bool añadir = true;

                        if (escenario.ComprobarEdificable(edificioSeleccionado, posicion) == false)
                        {
                            añadir = false;
                        }

                        if (construir.ComprobarPosicion(edificioSeleccionado, posicion) != null)
                        {
                            añadir = false;
                        }

                        if (ciudad.Dinero < edificioSeleccionado.coste)
                        {
                            añadir = false;
                        }

                        if (añadir == true)
                        {
                            panelCoste.gameObject.GetComponent<CanvasGroup>().alpha = 0;

                            ciudad.DepositoDinero(-edificioSeleccionado.coste);
                            ciudad.ActualizarUI(false);
                            construir.AñadirConstruccion(edificioSeleccionado, posicion, diaNoche.EstadoEncendidoLuces());
                            sonidoBotonConstruir.Play();
                        }
                    }

                    if (edificioSeleccionado != null)
                    {
                        if (accion == 1)
                        {
                            Construccion edificioEliminar = edificioSeleccionado;

                            if (edificioEliminar.categoria != 0)
                            {
                                ciudad.DepositoDinero(edificioEliminar.coste / 3);
                            }

                            ciudad.ActualizarUI(false);
                            construir.QuitarEdificio(edificioEliminar, posicion);
                            sonidoBotonDemoler.Play();
                        }
                    }
                }               
            }
        }
    }

    void EdificioVistaPrevia(bool mantener, int modo)
    {
        Vector3 raton = Posicion.Raton();

        if (raton != Vector3.zero)
        {
            Vector3 posicion = Posicion.Redondear(raton, edificioSeleccionado);
            
            if (Posicion.Limites(posicion, 100) == true)
            {
                vistaPrevia.QuitarTodosEdificios();

                if (mantener == true)
                {
                    if ((modo == 1) || (modo == 2))
                    {
                        CarreterasIDs ids = new CarreterasIDs();

                        if (modo == 1)
                        {
                            ids.recta = 6;
                            ids.curva = 39;
                            ids.cruce3 = 10;
                            ids.cruce4 = 11;
                            ids.puente = 41;
                        }
                        else if (modo == 2)
                        {
                            ids.recta = 12;
                            ids.curva = 40;
                            ids.cruce3 = 14;
                            ids.cruce4 = 13;
                            ids.puente = 41;
                        }

                        Carreteras.VistaPrevia(edificiosSeleccionados, ciudad, edificioSeleccionado, 
                            posicion, construir, vistaPrevia, edificios, mantenerEjeX, mantenerEjeZ, 
                            panelCoste, mensajeCoste, ids, escenario);
                    }       
                }
                else
                {
                    if (edificioSeleccionado != null)
                    {
                        panelCoste.gameObject.GetComponent<CanvasGroup>().alpha = 1;
                        mensajeCoste.text = string.Format("-{0} €", edificioSeleccionado.coste);

                        bool mostrar = true;

                        if (escenario.ComprobarEdificable(edificioSeleccionado, posicion) == false)
                        {
                            mostrar = false;
                        }

                        if (construir.ComprobarPosicion(edificioSeleccionado, posicion) != null)
                        {
                            mostrar = false;
                        }

                        if (vistaPrevia.ComprobarPosicion(edificioSeleccionado, posicion) != null)
                        {
                            mostrar = false;
                            vistaPrevia.QuitarEdificio(edificioSeleccionado, posicion);
                        }

                        if (mostrar == true)
                        {
                            vistaPrevia.AñadirConstruccion(edificioSeleccionado, posicion);
                        }                    
                    }
                }                
            }
        }
    }

    public void EdificioQuitar()
    {
        sonidoBoton.Play();

        construirActivar = false;
        ConstruirCambiarColor();
        ConstruirOcultarPanelEdificios();

        vistaPrevia.QuitarTodosEdificios();
        menuJuego.CerrarPanel();
        panelCoste.gameObject.GetComponent<CanvasGroup>().alpha = 0;

        if (demolerActivar == true)
        {
            demolerActivar = false;
        }
        else
        {
            demolerActivar = true;
        }

        if (demolerActivar == true)
        {
            panelDemolerSub.gameObject.GetComponent<Image>().color = new Color(255f / 255f, 98f / 255f, 98f / 255f, 255f);
        }
        else
        {
            panelDemolerSub.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 50f / 255f);
        }
    }

    public void DemolerRatonEntra()
    {
        if (demolerActivar == false)
        {
            panelDemolerSub.gameObject.GetComponent<Image>().color = new Color(255f / 255f, 98f / 255f, 98f / 255f, 255f);
        }
        else
        {
            panelDemolerSub.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 50f / 255f);
        }
    }

    public void DemolerCambiarColor()
    {
        if (demolerActivar == true)
        {
            panelDemolerSub.gameObject.GetComponent<Image>().color = new Color(255f / 255f, 98f / 255f, 98f / 255f, 255f);
        }
        else
        {
            panelDemolerSub.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 50f / 255f);
        }
    }

    void EdificioVistaPreviaQuitar()
    {
        Vector3 raton = Posicion.Raton();

        if (raton != Vector3.zero)
        {
            Vector3 gridPosicion = Posicion.Redondear(raton, edificioSeleccionado);

            if (Posicion.Limites(gridPosicion, 100) == true)
            {
                edificioSeleccionado = construir.ComprobarPosicion(null, gridPosicion);
                construir.DemolerColorQuitar();

                if (edificioSeleccionado != null)
                {
                    construir.DemolerColorRojo(edificioSeleccionado.id2);
                }
            }
        }
    }

    public void CargarEdificios(Guardado partida)
    {
        if (partida != null)
        {
            diaNoche.contadorDias = partida.dia;
            diaNoche.arranqueDia = partida.hora;
            diaNoche.ActualizarLuces();

            int i = 0;
            while (i < partida.edificiosID.Count)
            {
                Construccion edificioGuardado = edificios[partida.edificiosID[i]];

                if (edificioGuardado != null)
                {
                    edificioGuardado.rotacionColocacion = partida.edificiosRotacion[i];

                    Vector3 posicion = new Vector3(partida.edificiosX[i], 0.5f, partida.edificiosZ[i]);
                    posicion = Posicion.EdificioAjusteCarga(edificioGuardado, posicion);
                    construir.AñadirConstruccion(edificioGuardado, posicion, diaNoche.encender);
                }

                i++;
            }

            //camara.transform.position = new Vector3(guardado.camaraPosicionX, guardado.camaraPosicionY, guardado.camaraPosicionZ);
            //camara.transform.Rotate(new Vector3(guardado.camaraRotacionX, guardado.camaraRotacionY, guardado.camaraRotacionZ));

            ciudad.Dinero = partida.dinero;
            ciudad.ModoFacil = partida.modoFacil;
            ciudad.PoblacionActual = partida.poblacionActual;
            ciudad.PoblacionTope = partida.poblacionTope;
            ciudad.TrabajosActual = partida.trabajosActual;
            ciudad.TrabajosTope = partida.trabajosTope;
            ciudad.Comida = partida.comida;
        }
    }

    public void GuardarPartida()
    {
        List<Guardado> partidasGuardadas = partidas.ListadoPartidas();
        int id = 0;

        if (partidasGuardadas.Count > 0)
        {
            partidasGuardadas.Sort((x, y) => y.id.CompareTo(x.id));

            id = partidasGuardadas[0].id + 1;
        }
        else
        {
            id = 1;
        }

        Guardado guardado = new Guardado
        {
            nombre = id.ToString(),
            id = id,
            fecha = DateTime.Now.ToString(),
            versionJuego = Application.version
        };

        Terreno[,] terrenosGuardar = escenario.DevolverTerrenos();

        for (int x = 0; x < terrenosGuardar.GetLength(0); x++)
        {
            for (int z = 0; z < terrenosGuardar.GetLength(1); z++)
            {
                if (terrenosGuardar[x, z] != null)
                {
                    guardado.terrenosID.Add(terrenosGuardar[x, z].id);
                    guardado.terrenosX.Add(x);
                    guardado.terrenosZ.Add(z);
                }
            }
        }

        Construccion[,] edificiosGuardar = construir.DevolverConstrucciones();

        for (int x = 0; x < edificiosGuardar.GetLength(0); x++)
        {
            for (int z = 0; z < edificiosGuardar.GetLength(1); z++)
            {
                if (edificiosGuardar[x,z] != null)
                {
                    if (edificiosGuardar[x, z].id != 99)
                    {
                        guardado.edificiosID.Add(edificiosGuardar[x, z].id);                       
                        guardado.edificiosRotacion.Add(edificiosGuardar[x,z].rotacionColocacion);
                        guardado.edificiosX.Add(Funciones.RotacionGuardadoX(x, edificiosGuardar[x, z]));
                        guardado.edificiosZ.Add(Funciones.RotacionGuardadoZ(z, edificiosGuardar[x, z]));
                    }                    
                }
            }
        }

        guardado.camaraPosicionX = camara.transform.position.x;
        guardado.camaraPosicionY = camara.transform.position.y;
        guardado.camaraPosicionZ = camara.transform.position.z;

        guardado.camaraRotacionX = camara.transform.rotation.x;
        guardado.camaraRotacionY = camara.transform.rotation.y;
        guardado.camaraRotacionZ = camara.transform.rotation.z;

        guardado.dia = (int)diaNoche.contadorDias;
        guardado.hora = diaNoche.arranqueDia;

        guardado.dinero = ciudad.Dinero;
        guardado.modoFacil = ciudad.ModoFacil;
        guardado.poblacionActual = ciudad.PoblacionActual;
        guardado.poblacionTope = ciudad.PoblacionTope;
        guardado.trabajosActual = ciudad.TrabajosActual;
        guardado.trabajosTope = ciudad.TrabajosTope;
        guardado.comida = ciudad.Comida;

        BinaryFormatter bf = new BinaryFormatter();
        FileStream fichero = File.Create(Application.persistentDataPath + "/" + guardado.id + ".save");
        bf.Serialize(fichero, guardado);
        fichero.Close();
    }
}
