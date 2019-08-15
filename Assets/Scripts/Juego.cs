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
    private Colocar colocar = null;

    [SerializeField]
    private ColocarPrevio colocarPrevio = null;

    [SerializeField]
    private DiaNoche diaNoche = null;

    private Construccion edificioSeleccionado;
    private List<Construccion2> edificiosSeleccionados = new List<Construccion2>();

    private int rotacionColocar = -180;
    private int rotacionesPosicion = 0;

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

    private void Start()
    {
        if (File.Exists(Application.persistentDataPath + "/guardado.save"))
        {
            File.Delete(Application.persistentDataPath + "/guardado.save");
        }

        //---------------------------------------

        List<Guardado> partidasGuardadas = partidas.ListadoPartidas();

        if (partidasGuardadas.Count > 0)
        {
            botonContinuarPartida.interactable = true;
            botonCargarPartida.interactable = true;

            partidasGuardadas.Sort((x, y) => x.fecha.CompareTo(y.fecha));

            escenario.PonerTerreno(partidasGuardadas[0]);
            escenario.PonerArboles(partidasGuardadas[0], colocar);
            CargarEdificios(partidasGuardadas[0]);
            ayuda.Cargar(false);
        }
        else
        {
            botonContinuarPartida.interactable = false;
            botonCargarPartida.interactable = false;

            escenario.PonerTerreno(null);
            escenario.PonerArboles(null, colocar);
            diaNoche.tiempoDia = 24000;
        }

        opciones.CargarInicio();
        opcionesGeneral.CargarInicio();
        opcionesGraficos.CargarInicio();
        opcionesTeclado.CargarInicio();

        opcionesGeneral.Sonido();
        idioma.CargarTextos();
     
        diaNoche.VelocidadMarchas(0);
        versionTexto.text = "v" + Application.version;

        //Captura cap = Captura.MakeSnapshotCamera(16);
        //cap.defaultScale = new Vector3(1f, 1f, 1f);
        //cap.defaultPositionOffset = new Vector3(0, 0, 20f);
        
        //GameObject objeto = edificios[12].gameObject;
        //objeto.gameObject.transform.position = new Vector3(0, 0, 0);

        //Material material = objeto.gameObject.GetComponent<Renderer>().sharedMaterial;
        //material.DisableKeyword("_EMISSION");
        //material.globalIlluminationFlags = MaterialGlobalIlluminationFlags.EmissiveIsBlack;

        //Texture2D textura = cap.TakePrefabSnapshot(objeto, 512, 512);
        //Captura.SavePNG(textura);
    }

    public void NuevaPartida()
    {
        sonidoBoton.Play();

        ciudad.Dinero = 2000000;
        //ciudad.Dinero = 200;
        ciudad.PoblacionActual = 0f;
        ciudad.PoblacionTope = 0f;
        ciudad.TrabajosActual = 0;
        ciudad.TrabajosTope = 0;
        ciudad.Comida = 0f;

        camara.transform.position = new Vector3(10, 60, 10);

        colocar.QuitarTodosEdificios();
        escenario.PonerTerreno(null);
        escenario.PonerArboles(null, colocar);

        CargarInterfaz();
    }

    public void ContinuarPartida()
    {
        sonidoBoton.Play();
        colocar.QuitarTodosEdificios();
        CargarInterfaz();

        List<Guardado> partidasGuardadas = partidas.ListadoPartidas();

        if (partidasGuardadas.Count > 0)
        {
            partidasGuardadas.Sort((x, y) => x.fecha.CompareTo(y.fecha));

            escenario.PonerTerreno(partidasGuardadas[0]);
            escenario.PonerArboles(partidasGuardadas[0], colocar);
            CargarEdificios(partidasGuardadas[0]);
        }
    }

    private void CargarInterfaz()
    {
        menuPrincipal.MostrarJuego();
        ayuda.Cargar(true);
        ayuda.EstadoCajas(true);
        diaNoche.VelocidadMarchas(1);
        colocar.CambiarLucesSemaforos(1);
        colocar.GenerarVehiculos();
        colocarPrevio.QuitarTodosEdificios();
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
                    colocarPrevio.QuitarTodosEdificios();

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
                    int[] rotaciones = new int[4];

                    rotaciones[0] = -180;
                    rotaciones[1] = -270;
                    rotaciones[2] = 0;
                    rotaciones[3] = -90;

                    if (Input.GetKeyDown(teclaRotacionEdificioDerecha))
                    {
                        rotacionesPosicion += 1;

                        if (rotacionesPosicion == 4)
                        {
                            rotacionesPosicion = 0;
                        }

                        rotacionColocar = rotaciones[rotacionesPosicion];
                    }

                    if (Input.GetKeyDown(teclaRotacionEdificioIzquierda))
                    {
                        rotacionesPosicion -= 1;

                        if (rotacionesPosicion == -1)
                        {
                            rotacionesPosicion = 3;
                        }

                        rotacionColocar = rotaciones[rotacionesPosicion];
                    }
                
                    if (Input.GetKey(teclaArrastrarConstruccion))
                    {
                        if (edificioSeleccionado.id == 6)
                        {
                            ColocarEdificioPrevio(true, 1);
                        }
                        else if (edificioSeleccionado.id == 12)
                        {
                            ColocarEdificioPrevio(true, 2);
                        }
                    }
                    else
                    {
                        mantenerEjeX = true;
                        mantenerEjeZ = true;

                        foreach (Construccion2 edificio in edificiosSeleccionados)
                        {
                            colocarPrevio.QuitarEdificio(edificio.edificio, edificio.posicion);
                        }
                    
                        edificiosSeleccionados.Clear();
                        ColocarEdificioPrevio(false, 0);
                    }
                }

                if (Input.GetMouseButtonDown(0))
                {
                    ColocarEdificio(0);
                }
            }

            if (demolerActivar == true)
            {
                DemolerPrevio();

                if (Input.GetMouseButtonDown(0))
                {
                    ColocarEdificio(1);
                }
            }

            if (Input.GetKeyDown(KeyCode.F8))
            {
                InterfazOcultar();
            }   
        }    
        
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

        colocarPrevio.QuitarTodosEdificios();
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

    void ColocarEdificio(int accion)
    {
        Vector3 raton = Posicion.Raton();

        if (raton != Vector3.zero)
        {
            Vector3 gridPosicion = Posicion.Redondear(raton, edificioSeleccionado);

            if (Posicion.Limites(gridPosicion, 100) == true)
            {
                if (edificiosSeleccionados.Count > 0)
                {
                    if (edificiosSeleccionados[0].edificio.categoria == 1)
                    {
                        Carreteras.Colocar(edificiosSeleccionados, ciudad, colocar, diaNoche, edificios, sonidoBotonConstruir);
                    }
                }     
                else
                {
                    if (edificioSeleccionado != null)
                    {
                        edificioSeleccionado.rotacionColocacion = rotacionColocar;
                    }

                    if (accion == 0 && colocar.ComprobarConstruccionesPosicion(edificioSeleccionado, gridPosicion) == null)
                    {
                        if (ciudad.Dinero >= edificioSeleccionado.coste)
                        {
                            panelCoste.gameObject.GetComponent<CanvasGroup>().alpha = 0;

                            ciudad.DepositoDinero(-edificioSeleccionado.coste);
                            ciudad.ActualizarUI(false);
                            colocar.AñadirConstruccion(edificioSeleccionado, gridPosicion, diaNoche.EstadoEncendidoLuces());
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
                            colocar.QuitarEdificio(edificioEliminar, gridPosicion);
                            sonidoBotonDemoler.Play();
                        }
                    }
                }               
            }
        }
    }

    void ColocarEdificioPrevio(bool mantener, int modo)
    {
        Vector3 raton = Posicion.Raton();

        if (raton != Vector3.zero)
        {
            Vector3 gridPosicion = Posicion.Redondear(raton, edificioSeleccionado);

            if (Posicion.Limites(gridPosicion, 100) == true)
            {
                colocarPrevio.QuitarTodosEdificios();

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
                        }
                        else if (modo == 2)
                        {
                            ids.recta = 12;
                            ids.curva = 40;
                            ids.cruce3 = 14;
                            ids.cruce4 = 13;
                        }

                        Carreteras.ColocarPrevio(edificiosSeleccionados, ciudad, edificioSeleccionado, 
                            gridPosicion, colocar, colocarPrevio, edificios, mantenerEjeX, mantenerEjeZ, 
                            panelCoste, mensajeCoste, ids);
                    }       
                }
                else
                {
                    if (edificioSeleccionado != null)
                    {
                        edificioSeleccionado.rotacionColocacion = rotacionColocar;

                        panelCoste.gameObject.GetComponent<CanvasGroup>().alpha = 1;
                        mensajeCoste.text = string.Format("-{0} €", edificioSeleccionado.coste);

                        if (colocar.ComprobarConstruccionesPosicion(edificioSeleccionado,gridPosicion) == null)
                        {
                            if (colocarPrevio.ComprobarConstruccionesPosicion(edificioSeleccionado, gridPosicion) == null)
                            {
                                colocarPrevio.AñadirConstruccion(edificioSeleccionado, gridPosicion);
                            }
                            else
                            {
                                colocarPrevio.QuitarEdificio(edificioSeleccionado, gridPosicion);
                                colocarPrevio.AñadirConstruccion(edificioSeleccionado, gridPosicion);
                            }
                        }                       
                    }
                }                
            }
        }
    }

    public void Demoler()
    {
        sonidoBoton.Play();

        construirActivar = false;
        ConstruirCambiarColor();
        ConstruirOcultarPanelEdificios();

        colocarPrevio.QuitarTodosEdificios();
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

    void DemolerPrevio()
    {
        Vector3 raton = Posicion.Raton();

        if (raton != Vector3.zero)
        {
            Vector3 gridPosicion = Posicion.Redondear(raton, edificioSeleccionado);

            if (Posicion.Limites(gridPosicion, 100) == true)
            {
                edificioSeleccionado = colocar.ComprobarConstruccionesPosicion(null, gridPosicion);
                colocar.DemolerColorQuitar();

                if (edificioSeleccionado != null)
                {
                    colocar.DemolerColorRojo(edificioSeleccionado.id2);
                }
            }
        }
    }

    public void CargarEdificios(Guardado partida)
    {
        if (partida != null)
        {
            diaNoche.tiempoTotalDias = partida.dia;
            diaNoche.tiempoDia = partida.hora;
            diaNoche.ActualizarLuces();

            int i = 0;
            while (i < partida.edificiosID.Count)
            {
                Construccion edificioGuardado = edificios[partida.edificiosID[i]];
                edificioGuardado.rotacionColocacion = partida.edificiosRotacion[i];

                Vector3 posicion = new Vector3(partida.edificiosX[i], 1, partida.edificiosZ[i]);
                colocar.AñadirConstruccion(edificioGuardado, posicion, diaNoche.encender);

                i++;
            }

            //camara.transform.position = new Vector3(guardado.camaraPosicionX, guardado.camaraPosicionY, guardado.camaraPosicionZ);
            //camara.transform.Rotate(new Vector3(guardado.camaraRotacionX, guardado.camaraRotacionY, guardado.camaraRotacionZ));

            ciudad.Dinero = partida.dinero;
            ciudad.PoblacionActual = partida.poblacionActual;
            ciudad.PoblacionTope = partida.poblacionTope;
            ciudad.TrabajosActual = partida.trabajosActual;
            ciudad.TrabajosTope = partida.trabajosTope;
            ciudad.Comida = partida.comida;
        }
    }

    public void GuardarPartida()
    {
        Guardado guardado = new Guardado();

        guardado.nombre = "test";
        guardado.fecha = DateTime.Now.ToString();
        guardado.versionJuego = Application.version;

        guardado.terrenosID = escenario.terrenosID;
        guardado.terrenosX = escenario.terrenosX;
        guardado.terrenosZ = escenario.terrenosZ;

        Construccion[,] edificiosGuardar = colocar.DevolverConstrucciones();

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
                        guardado.edificiosX.Add(ColocarFunciones.RotacionGuardadoX(x, edificiosGuardar[x, z]));
                        guardado.edificiosZ.Add(ColocarFunciones.RotacionGuardadoZ(z, edificiosGuardar[x, z]));
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

        guardado.dia = (int)diaNoche.tiempoTotalDias;
        guardado.hora = diaNoche.tiempoDia;

        guardado.dinero = ciudad.Dinero;
        guardado.poblacionActual = ciudad.PoblacionActual;
        guardado.poblacionTope = ciudad.PoblacionTope;
        guardado.trabajosActual = ciudad.TrabajosActual;
        guardado.trabajosTope = ciudad.TrabajosTope;
        guardado.comida = ciudad.Comida;

        BinaryFormatter bf = new BinaryFormatter();
        FileStream fichero = File.Create(Application.persistentDataPath + "/" + guardado.nombre + ".save");
        bf.Serialize(fichero, guardado);
        fichero.Close();
    }

    public void InterfazOcultar()
    {
        if (canvas.gameObject.GetComponent<CanvasGroup>().alpha == 1)
        {
            canvas.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            canvas.gameObject.GetComponent<CanvasGroup>().interactable = false;
            canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
        }
        else
        {
            canvas.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            canvas.gameObject.GetComponent<CanvasGroup>().interactable = true;
            canvas.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
        }
    }
}
