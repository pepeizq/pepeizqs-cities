using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Juego : MonoBehaviour {

    public Idiomas idioma;

    public Canvas canvas;

    public MenuPrincipal menuPrincipal;
    public Opciones opciones;
    public Ayuda ayuda;
    public MenuJuego menuJuego;

    public Text versionTexto;

    public Button botonCargarPartida;

    public AudioSource musicaFondo;
    public AudioSource sonidoBoton;
    public AudioSource sonidoBotonConstruir;
    public AudioSource sonidoBotonDemoler;

    [SerializeField]
    private Ciudad ciudad;

    [SerializeField]
    private Construccion[] edificios;

    [SerializeField]
    private Colocar colocar;

    [SerializeField]
    private ColocarPrevio colocarPrevio;

    [SerializeField]
    private DiaNoche diaNoche;

    private Construccion edificioSeleccionado;

    private int rotacionColocar = -180;
    private int rotacionesPosicion = 0;

    private bool enseñarPrevio;
    private bool activarDemoler;

    public Button botonDemoler; 

    public Camera camara;

    public ArbolesInicio arbolesInicio;

    public Panel panelConstruir;
    public Panel panelDemoler;
    public Panel panelDatos;
    public Panel panelEdificios;
    public Panel panelGuardar;
    public Panel panelTiempo;

    public GameObject botonEdificiosPrefab;

    public Panel panelEdificiosCarreteras;
    public Button botonEdificiosCarreteras;
    public Sprite botonEdificiosCarreterasSprite1;
    public Sprite botonEdificiosCarreterasSprite2;

    public Panel panelEdificiosCasas;
    public Button botonEdificiosCasas;
    public Sprite botonEdificiosCasasSprite1;
    public Sprite botonEdificiosCasasSprite2;

    public Panel panelEdificiosComida;
    public Button botonEdificiosComida;
    public Sprite botonEdificiosComidaSprite1;
    public Sprite botonEdificiosComidaSprite2;

    public Panel panelEdificiosTiendas;
    public Button botonEdificiosTiendas;
    public Sprite botonEdificiosTiendasSprite1;
    public Sprite botonEdificiosTiendasSprite2;

    public Panel panelEdificiosIndustria;
    public Button botonEdificiosIndustria;
    public Sprite botonEdificiosIndustriaSprite1;
    public Sprite botonEdificiosIndustriaSprite2;

    public Panel panelEdificiosDecoracion;
    public Button botonEdificiosDecoracion;
    public Sprite botonEdificiosDecoracionSprite1;
    public Sprite botonEdificiosDecoracionSprite2;

    public EdificiosInfo panelEdificiosInfo;

    private void Start()
    {
        opciones.CargarInicio();
        opciones.Sonido();
        idioma.CargarTextos();

        File.Delete(Application.persistentDataPath + "/guardado.save");
        diaNoche.ArrancarParar();
        versionTexto.text = "v" + Application.version;

        if (DetectarPartidaGuardada() != null)
        {
            botonCargarPartida.interactable = true;
            CargarEdificios();
            ayuda.Cargar(false);
        }
        else
        {
            botonCargarPartida.interactable = false;
            arbolesInicio.Colocar(colocar);
        }            
    }

    public void NuevaPartida()
    {
        sonidoBoton.Play();

        if (File.Exists(Application.persistentDataPath + "/guardado.save"))
        {
            File.Delete(Application.persistentDataPath + "/guardado.save");
        }

        diaNoche.tiempoDia = 0.4f;
        ciudad.Dinero = 2000000;
        //ciudad.Dinero = 200;
        ciudad.PoblacionActual = 0f;
        ciudad.PoblacionTope = 0f;
        ciudad.TrabajosActual = 0;
        ciudad.TrabajosTope = 0;
        ciudad.Comida = 0f;

        camara.transform.position = new Vector3(10, 60, 10);
        colocar.QuitarTodosEdificios();
        arbolesInicio.Colocar(colocar);
        CargarInterfaz();
    }

    public void CargarPartida()
    {
        sonidoBoton.Play();
        colocar.QuitarTodosEdificios();
        CargarEdificios();
        CargarInterfaz();      
    }

    private void CargarInterfaz()
    {
        menuPrincipal.MostrarJuego();
        ayuda.Cargar(true);
        diaNoche.ArrancarParar();
        panelEdificiosInfo.Arranque();

        musicaFondo.loop = true;
        musicaFondo.Play();
        enseñarPrevio = false;

        foreach (Transform boton in panelEdificiosDecoracion.gameObject.transform)
        {
            GameObject.Destroy(boton.gameObject);
        }

        foreach (Transform boton in panelEdificiosCarreteras.gameObject.transform)
        {
            GameObject.Destroy(boton.gameObject);
        }

        foreach (Transform boton in panelEdificiosCasas.gameObject.transform)
        {
            GameObject.Destroy(boton.gameObject);
        }

        foreach (Transform boton in panelEdificiosComida.gameObject.transform)
        {
            GameObject.Destroy(boton.gameObject);
        }

        foreach (Transform boton in panelEdificiosTiendas.gameObject.transform)
        {
            GameObject.Destroy(boton.gameObject);
        }

        foreach (Transform boton in panelEdificiosIndustria.gameObject.transform)
        {
            GameObject.Destroy(boton.gameObject);
        }

        foreach (Construccion edificio in edificios)
        {
            GameObject botonObjeto = Instantiate(botonEdificiosPrefab);

            if (edificio.categoria == 0)
            {
                botonObjeto.transform.SetParent(panelEdificiosDecoracion.transform, false);
            }
            else if (edificio.categoria == 1)
            {
                botonObjeto.transform.SetParent(panelEdificiosCarreteras.transform, false);
            }
            else if (edificio.categoria == 2)
            {
                botonObjeto.transform.SetParent(panelEdificiosCasas.transform, false);
            }
            else if (edificio.categoria == 3)
            {
                botonObjeto.transform.SetParent(panelEdificiosComida.transform, false);
            }
            else if (edificio.categoria == 4)
            {
                botonObjeto.transform.SetParent(panelEdificiosTiendas.transform, false);
            }
            else if (edificio.categoria == 5)
            {
                botonObjeto.transform.SetParent(panelEdificiosIndustria.transform, false);
            }

            Image imagen = botonObjeto.GetComponent<Image>();
            imagen.sprite = edificio.botonImagen;

            Button boton = botonObjeto.GetComponent<Button>();
            boton.onClick.AddListener(() => SeleccionarEdificio(edificio.id));

            EventTrigger evento = botonObjeto.AddComponent<EventTrigger>();
            EventTrigger.Entry pointerEnter = new EventTrigger.Entry
            {
                eventID = EventTriggerType.PointerEnter
            };

            pointerEnter.callback.AddListener((data) => { panelEdificiosInfo.OnPointerEnter((PointerEventData)data, edificio); });
            evento.triggers.Add(pointerEnter);

            EventTrigger.Entry pointerExit = new EventTrigger.Entry
            {
                eventID = EventTriggerType.PointerExit
            };

            pointerExit.callback.AddListener((data) => { panelEdificiosInfo.OnPointerExit((PointerEventData)data); });
            evento.triggers.Add(pointerExit);
        }
    }

    void Update ()
    {
        if (canvas.gameObject.GetComponent<CanvasGroup>().alpha == 1)
        {
            if (Input.GetKeyDown(KeyCode.Escape))
            {
                menuJuego.MostrarMenu();
            }

            if (Input.GetKeyDown(KeyCode.F))
            {
                enseñarPrevio = false;
            }

            if (edificioSeleccionado != null)
            {
                if (enseñarPrevio == true)
                {
                    int[] rotaciones = new int[4];

                    rotaciones[0] = -180;
                    rotaciones[1] = -270;
                    rotaciones[2] = 0;
                    rotaciones[3] = -90;

                    if (Input.GetKeyDown(KeyCode.E))
                    {
                        rotacionesPosicion += 1;

                        if (rotacionesPosicion == 4)
                        {
                            rotacionesPosicion = 0;
                        }

                        rotacionColocar = rotaciones[rotacionesPosicion];
                    }

                    if (Input.GetKeyDown(KeyCode.Q))
                    {
                        rotacionesPosicion -= 1;

                        if (rotacionesPosicion == -1)
                        {
                            rotacionesPosicion = 3;
                        }

                        rotacionColocar = rotaciones[rotacionesPosicion];
                    }

                    ColocarEdificioPrevio();
                }

                if (Input.GetMouseButtonDown(0))
                {
                    ColocarEdificio(0);
                }
            }

            if (activarDemoler == true)
            {
                DemolerPrevio();

                if (Input.GetMouseButtonDown(0))
                {
                    ColocarEdificio(1);
                }
            }
        }      
    }

    public void Construir()
    {
        DemolerBoton(false);
        enseñarPrevio = false;
        colocarPrevio.QuitarTodosEdificios();

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

        sonidoBoton.Play();
       
        MostrarPanelEdificios(panelEdificiosCarreteras);
    }

    public void MostrarPanelEdificios(Panel panelVisible)
    {        
        panelEdificiosCarreteras.gameObject.SetActive(false);
        panelEdificiosCasas.gameObject.SetActive(false);
        panelEdificiosComida.gameObject.SetActive(false);
        panelEdificiosTiendas.gameObject.SetActive(false);
        panelEdificiosIndustria.gameObject.SetActive(false);
        panelEdificiosDecoracion.gameObject.SetActive(false);

        panelVisible.gameObject.SetActive(true);

        botonEdificiosCarreteras.GetComponent<Image>().sprite = botonEdificiosCarreterasSprite2;
        botonEdificiosCasas.GetComponent<Image>().sprite = botonEdificiosCasasSprite2;
        botonEdificiosComida.GetComponent<Image>().sprite = botonEdificiosComidaSprite2;
        botonEdificiosTiendas.GetComponent<Image>().sprite = botonEdificiosTiendasSprite2;
        botonEdificiosIndustria.GetComponent<Image>().sprite = botonEdificiosIndustriaSprite2;
        botonEdificiosDecoracion.GetComponent<Image>().sprite = botonEdificiosDecoracionSprite2;

        if (panelVisible.nombre == "carreteras")
        {
            botonEdificiosCarreteras.GetComponent<Image>().sprite = botonEdificiosCarreterasSprite1;
        }
        else if (panelVisible.nombre == "casas")
        {
            botonEdificiosCasas.GetComponent<Image>().sprite = botonEdificiosCasasSprite1;
        }
        else if (panelVisible.nombre == "comida")
        {
            botonEdificiosComida.GetComponent<Image>().sprite = botonEdificiosComidaSprite1;
        }
        else if(panelVisible.nombre == "tiendas")
        {
            botonEdificiosTiendas.GetComponent<Image>().sprite = botonEdificiosTiendasSprite1;
        }
        else if (panelVisible.nombre == "industria")
        {
            botonEdificiosIndustria.GetComponent<Image>().sprite = botonEdificiosIndustriaSprite1;
        }
        else if (panelVisible.nombre == "decoracion")
        {
            botonEdificiosDecoracion.GetComponent<Image>().sprite = botonEdificiosDecoracionSprite1;
        }        
    }

    public void SeleccionarEdificio(int edificio)
    {
        panelEdificios.gameObject.GetComponent<CanvasGroup>().alpha = 0;
        panelEdificios.gameObject.GetComponent<CanvasGroup>().interactable = false;
        panelEdificios.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

        DemolerBoton(false);
        edificioSeleccionado = edificios[edificio];
        enseñarPrevio = true;
        ColocarEdificioPrevio();
        sonidoBoton.Play();
    }

    void ColocarEdificio(int accion)
    {     
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit))
        {            
            Vector3 gridPosicion = RedondearPosicion.Buscar(hit.point, edificioSeleccionado);

            if (((int)gridPosicion.x > 0) && ((int)gridPosicion.x < 100) && ((int)gridPosicion.z > 0) && ((int)gridPosicion.z < 100))
            {
                if (!EventSystem.current.IsPointerOverGameObject())
                {     
                    if (edificioSeleccionado != null)
                    {
                        edificioSeleccionado.rotacionColocacion = rotacionColocar;
                    }

                    if (accion == 0 && colocar.ComprobarConstruccionesPosicion(edificioSeleccionado, gridPosicion) == null)
                    {                       
                        if (ciudad.Dinero >= edificioSeleccionado.coste)
                        {                    
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
                            //DemolerBoton(false);
                            sonidoBotonDemoler.Play();
                        }
                    }                   
                }
            }                 
        }
    }

    void ColocarEdificioPrevio()
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit))
        {
            if (!EventSystem.current.IsPointerOverGameObject())
            {
                Vector3 gridPosicion = RedondearPosicion.Buscar(hit.point, edificioSeleccionado);

                if (((int)gridPosicion.x > 0) && ((int)gridPosicion.x < 100) && ((int)gridPosicion.z > 0) && ((int)gridPosicion.z < 100))
                {
                    if (edificioSeleccionado != null)
                    {
                        edificioSeleccionado.rotacionColocacion = rotacionColocar;
                    }
           
                    if (colocar.ComprobarConstruccionesPosicion(edificioSeleccionado, gridPosicion) == null)
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

    public void Demoler()
    {
        enseñarPrevio = false;
        colocarPrevio.QuitarTodosEdificios();

        DemolerBoton(true);
    }

    void DemolerPrevio()
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit))
        {
            Vector3 gridPosicion = RedondearPosicion.Buscar(hit.point, edificioSeleccionado);

            if (((int)gridPosicion.x > 0) && ((int)gridPosicion.x < 100) && ((int)gridPosicion.z > 0) && ((int)gridPosicion.z < 100))
            {
                if (!EventSystem.current.IsPointerOverGameObject())
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
    }

    void DemolerBoton(bool estado)
    {
        activarDemoler = estado;

        ColorBlock color = botonDemoler.colors;

        if (estado == true)
        {           
            color.normalColor = new Color32(159, 0, 0, 255);        
        }
        else
        {
            color.normalColor = Color.white;
        }

        botonDemoler.colors = color;
    }

    public Guardado DetectarPartidaGuardada()
    {
        if (File.Exists(Application.persistentDataPath + "/guardado.save"))
        {
            BinaryFormatter bf = new BinaryFormatter();
            FileStream fichero = File.Open(Application.persistentDataPath + "/guardado.save", FileMode.Open);
            Guardado guardado = (Guardado)bf.Deserialize(fichero);
            fichero.Close();

            if (guardado.edificiosID.Count > 0)
            {
                return guardado;
            }
            else
            {
                return null;
            }
        }
        else
        {
            return null;
        }
    }

    public void CargarEdificios()
    {
        if (File.Exists(Application.persistentDataPath + "/guardado.save"))
        {
            BinaryFormatter bf = new BinaryFormatter();
            FileStream fichero = File.Open(Application.persistentDataPath + "/guardado.save", FileMode.Open);
            Guardado guardado = (Guardado)bf.Deserialize(fichero);
            fichero.Close();

            diaNoche.tiempoTotalDias = guardado.dia;
            diaNoche.tiempoDia = guardado.hora;
            diaNoche.ActualizarLuces();

            int i = 0;
            while (i < guardado.edificiosID.Count)
            {
                Construccion edificioGuardado = edificios[guardado.edificiosID[i]];
                edificioGuardado.rotacionColocacion = guardado.edificiosRotacion[i];

                Vector3 vector = new Vector3(guardado.edificiosX[i], 1, guardado.edificiosZ[i]);
                colocar.AñadirConstruccion(edificioGuardado, vector, diaNoche.encender);

                i++;
            }

            camara.transform.position = new Vector3(guardado.camaraPosicionX, guardado.camaraPosicionY, guardado.camaraPosicionZ);
            camara.transform.Rotate(new Vector3(guardado.camaraRotacionX, guardado.camaraRotacionY, guardado.camaraRotacionZ));

            ciudad.Dinero = guardado.dinero;
            ciudad.PoblacionActual = guardado.poblacionActual;
            ciudad.PoblacionTope = guardado.poblacionTope;
            ciudad.TrabajosActual = guardado.trabajosActual;
            ciudad.TrabajosTope = guardado.trabajosTope;
            ciudad.Comida = guardado.comida;
        }
    }

    public void GuardarPartida()
    {
        Guardado guardado = new Guardado();

        Construccion[,] edificiosGuardar = colocar.DevolverConstrucciones();

        for (int x = 0; x < edificiosGuardar.GetLength(0); x++)
        {
            for (int z = 0; z < edificiosGuardar.GetLength(1); z++)
            {
                if (edificiosGuardar[x,z] != null)
                {
                    if (edificiosGuardar[x, z].id < 100)
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
        FileStream fichero = File.Create(Application.persistentDataPath + "/guardado.save");
        bf.Serialize(fichero, guardado);
        fichero.Close();
    }
}
