using Construcciones;
using Interfaz;
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

    public MenuPrincipal menuPrincipal;
    public NuevaPartida nuevaPartida;
    public Opciones opciones;
    public Interfaz.Opciones2.General opcionesGeneral;
    public Interfaz.Opciones2.Graficos opcionesGraficos;
    public Interfaz.Opciones2.Teclado opcionesTeclado;
    public Interfaz.Juego2.Construir construirInterfaz;
    public Interfaz.Juego2.Demoler demolerInterfaz;
    public Interfaz.Juego2.AbajoIzq abajoIzqInterfaz;
    public Interfaz.Juego2.Ayuda ayudaInterfaz;

    public Interfaz.Opciones2.Sonido sonido;

    public Text versionTexto;

    public Button botonContinuarPartida;
    public Button botonCargarPartida;

    [SerializeField]
    private Ciudad ciudad = null;

    [SerializeField]
    public Construccion[] edificios;

    [SerializeField]
    private Construir construir = null;

    [SerializeField]
    private VistaPrevia vistaPrevia = null;

    [SerializeField]
    private Velocidad velocidad = null;

    private Construccion edificioSeleccionado;
    private List<Construccion2> edificiosSeleccionados = new List<Construccion2>();

    [HideInInspector]
    public bool construirActivar = false;

    [HideInInspector]
    public bool demolerActivar = false;

    public Camera camara;

    public Escenario escenario;

    public Panel panelCoste;
    public Text mensajeCoste;

    private bool mantenerEjeX;
    private bool mantenerEjeZ;

    [HideInInspector]
    public bool ocultarEnseñarInterfaz = false;

    private void Start()
    {
        sonido.MusicaFondo();

        partidas.BorrarPartidasAntiguas();

        List<Guardado> partidasGuardadas = new List<Guardado>();
        partidasGuardadas = partidas.ListadoPartidas();

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
        }
        else
        {
            botonContinuarPartida.interactable = false;
            botonCargarPartida.interactable = false;

            escenario.PonerTerreno(null);
            escenario.PonerArboles(null, construir);

            velocidad.arranqueDia = 70000;
        }

        opciones.CargarInicio();
        opcionesGeneral.CargarInicio();
        opcionesGraficos.CargarInicio();
        opcionesTeclado.CargarInicio();

        idioma.CargarTextos();
     
        velocidad.VelocidadMarchas(0);
        versionTexto.text = "v" + Application.version;

        //Captura.Generar(edificios[42].gameObject);
    }

    public void NuevaPartida(bool facil)
    {
        sonido.RatonClick();

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

        velocidad.arranqueDia = 70000;
        velocidad.contadorDias = 1;

        ayudaInterfaz.Cargar(ayudaInterfaz.estadoPartida);

        Objetos.Ocultar(nuevaPartida.canvas.gameObject);

        CargarInterfaz();
    }

    public void ContinuarPartida()
    {
        sonido.RatonClick();

        construir.QuitarTodosEdificios();

        List<Guardado> partidasGuardadas = partidas.ListadoPartidas();

        if (partidasGuardadas.Count > 0)
        {
            partidasGuardadas.Sort((x, y) => y.id.CompareTo(x.id));

            escenario.PonerTerreno(partidasGuardadas[0]);
            CargarEdificios(partidasGuardadas[0]);
            ayudaInterfaz.Cargar(partidasGuardadas[0].ayuda);
        }

        CargarInterfaz();
    }

    public void CargarInterfaz()
    {
        menuPrincipal.MostrarJuego();
        velocidad.VelocidadMarchas(1);
        construir.CambiarLucesSemaforos(1);
        vistaPrevia.QuitarTodosEdificios();
    }

    void Update ()
    {
        if (canvas.gameObject.GetComponent<CanvasGroup>().alpha == 1)
        {
            if (Input.GetKeyDown(teclaMenu))
            {
                abajoIzqInterfaz.AbrirMenu();
            }

            if (Input.GetMouseButtonDown(1))
            {
                if (construirActivar == true)
                {
                    construirActivar = false;
                    vistaPrevia.QuitarTodosEdificios();
                    construirInterfaz.RatonSaleBotonEdificios();

                    edificioSeleccionado = null;

                    panelCoste.gameObject.GetComponent<CanvasGroup>().alpha = 0;
                }

                if (demolerActivar == true)
                {
                    demolerActivar = false;
                    construir.DemolerCambiarColores(0);
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
                EdificioVistaPreviaDemoler();

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
                Objetos.Ocultar(canvas.gameObject);
            }
        }
        else
        {
            if (Input.GetKeyDown(teclaOcultarInterfaz) && ocultarEnseñarInterfaz == true)
            {
                ocultarEnseñarInterfaz = false;
                Objetos.Mostrar(canvas.gameObject);
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

    public void ConstruirSeleccionarEdificio(int edificio)
    {
        sonido.RatonClick();

        demolerActivar = false;
        construirActivar = true;

        vistaPrevia.QuitarTodosEdificios();
        abajoIzqInterfaz.CerrarMenu();

        edificioSeleccionado = edificios[edificio];
        ayudaInterfaz.AbrirAyuda6o7(edificioSeleccionado.categoria);
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
                        Carreteras.Construir(edificiosSeleccionados, ciudad, construir, velocidad);
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

                        //if (construir.ComprobarCarretera(edificioSeleccionado, posicion) == false)
                        //{
                        //    añadir = false;
                        //}

                        if (añadir == true)
                        {
                            construirActivar = false;
                            vistaPrevia.QuitarTodosEdificios();
                            construirInterfaz.RatonSaleBotonEdificios();

                            panelCoste.gameObject.GetComponent<CanvasGroup>().alpha = 0;

                            ciudad.DepositoDinero(-edificioSeleccionado.coste);
                            ciudad.ActualizarUI(false);
                            construir.AñadirConstruccion(edificioSeleccionado, posicion, velocidad.EstadoEncendidoLuces());
                            sonido.Construir();

                            if (edificioSeleccionado.categoria == 6)
                            {
                                ciudad.Banco = true;
                            }
                        }
                    }

                    if (accion == 1)
                    {
                        if (edificioSeleccionado != null)
                        {
                            demolerActivar = false;
                            vistaPrevia.QuitarTodosEdificios();
                            demolerInterfaz.RatonSale();

                            Construccion edificioEliminar = edificioSeleccionado;

                            if (edificioEliminar.categoria != 0)
                            {
                                ciudad.DepositoDinero(edificioEliminar.coste / 3);
                            }

                            ciudad.ActualizarUI(false);
                            construir.QuitarEdificio(edificioEliminar, posicion);
                            sonido.Demoler();
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

                        //if (construir.ComprobarCarretera(edificioSeleccionado, posicion) == false)
                        //{
                        //    mostrar = false;
                        //}

                        if (mostrar == true)
                        {
                            vistaPrevia.AñadirConstruccion(edificioSeleccionado, posicion);
                        }                    
                    }
                }                
            }
        }
    }

    public void Demoler()
    {
        sonido.RatonClick();

        vistaPrevia.QuitarTodosEdificios();
        abajoIzqInterfaz.CerrarMenu();
        panelCoste.gameObject.GetComponent<CanvasGroup>().alpha = 0;

        if (demolerActivar == true)
        {
            demolerActivar = false;
        }
        else
        {
            demolerActivar = true;
        }
    }

    void EdificioVistaPreviaDemoler()
    {
        Vector3 raton = Posicion.Raton();

        if (raton != Vector3.zero)
        {
            Vector3 gridPosicion = Posicion.Redondear(raton, edificioSeleccionado);

            if (Posicion.Limites(gridPosicion, 100) == true)
            {
                edificioSeleccionado = construir.ComprobarPosicion(null, gridPosicion);

                if (edificioSeleccionado != null)
                {
                    construir.DemolerCambiarColores(edificioSeleccionado.id2);
                }
            }
        }
    }

    public void CargarEdificios(Guardado partida)
    {
        if (partida != null)
        {
            velocidad.contadorDias = partida.dia;
            velocidad.arranqueDia = partida.hora;
            velocidad.ActualizarLuces();

            int i = 0;
            while (i < partida.edificiosID.Count)
            {
                Construccion edificioGuardado = edificios[partida.edificiosID[i]];

                if (edificioGuardado != null)
                {
                    edificioGuardado.rotacionColocacion = partida.edificiosRotacion[i];

                    Vector3 posicion = new Vector3(partida.edificiosX[i], 0.5f, partida.edificiosZ[i]);
                    posicion = Posicion.EdificioAjusteCarga(edificioGuardado, posicion);
                    construir.AñadirConstruccion(edificioGuardado, posicion, velocidad.encender);
                }

                i++;
            }

            //camara.transform.position = new Vector3(guardado.camaraPosicionX, guardado.camaraPosicionY, guardado.camaraPosicionZ);
            //camara.transform.Rotate(new Vector3(guardado.camaraRotacionX, guardado.camaraRotacionY, guardado.camaraRotacionZ));

            ciudad.Dinero = partida.dinero;
            ciudad.ModoFacil = partida.modoFacil;
            ciudad.Banco = partida.banco;
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

        guardado.dia = (int)velocidad.contadorDias;
        guardado.hora = velocidad.arranqueDia;

        guardado.dinero = ciudad.Dinero;
        guardado.modoFacil = ciudad.ModoFacil;
        guardado.banco = ciudad.Banco;
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
