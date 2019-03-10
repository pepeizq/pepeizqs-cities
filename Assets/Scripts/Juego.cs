using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Juego : MonoBehaviour {

    public TextAsset ficheroIdiomas;
    public Idiomas idioma;

    public Canvas canvasMenuPrincipal;
    public Canvas canvasMenuOpciones;
    public Canvas canvasJuego;

    public Text versionTexto;

    public bool sonidoParar;

    public Button botonSonido;
    public Sprite botonSonidoSiSprite;
    public Sprite botonSonidoNoSprite;

    public Button botonCargarPartida;

    public Text botonNuevaPartidaTexto;
    public Text botonCargarPartidaTexto;
    public Text botonOpcionesTexto;
    public Text botonSalirJuegoTexto;
    public Text botonVolverTexto;
    public Text toggleAyudaTexto;
    public Text botonSonidoTexto;

    public Toggle toggleAyuda;

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

    private bool menuPrincipal;
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

    public Panel volverMenu;
    public Text volverMenuTexto;
    public Text volverMenuTextoSi;
    public Text volverMenuTextoNo;
    public Text volverMenuTextoCancelar;

    public Panel ayuda1;
    public Text ayuda1Texto;
    public Panel ayuda2;
    public Text ayuda2Texto;
    public Panel ayuda3;
    public Text ayuda3Texto;

    private void Start()
    {
        menuPrincipal = true;
        diaNoche.ArrancarParar();

        versionTexto.text = "v" + Application.version;

        if (PlayerPrefs.HasKey("idioma") == false)
        {
            idioma.CargarIdioma(ficheroIdiomas, "English");
            PlayerPrefs.SetString("idioma", "English");
        }
        else
        {
            idioma.CargarIdioma(ficheroIdiomas, PlayerPrefs.GetString("idioma"));
        }

        if (PlayerPrefs.HasKey("sonido") == false)
        {
            PlayerPrefs.SetString("sonido", "true");
            sonidoParar = false;
        }
        else
        {
            if (PlayerPrefs.GetString("sonido") == "true")
            {
                sonidoParar = false;
            }
            else
            {
                sonidoParar = true;
            }
        }

        Sonido();

        if (PlayerPrefs.HasKey("ayuda") == false)
        {
            PlayerPrefs.SetString("ayuda", "true");
            toggleAyuda.isOn = true;
        }
        else
        {
            if (PlayerPrefs.GetString("ayuda") == "true")
            {
                toggleAyuda.isOn = true;
            }
            else
            {
                toggleAyuda.isOn = false;
            }
        }

        CargarIdiomaTexto();

        if (DetectarPartidaGuardada() != null)
        {
            botonCargarPartida.interactable = true;
            CargarEdificios(false);
        }
        else
        {
            botonCargarPartida.interactable = false;
            arbolesInicio.Colocar(colocar);
        }            
    }

    public void Sonido()
    {
        if (musicaFondo != null)
        {
            musicaFondo.loop = true;
            musicaFondo.Play();
        }

        if (sonidoParar == false)
        {
            AudioListener.pause = false;
            botonSonido.GetComponent<Image>().sprite = botonSonidoSiSprite;
            botonSonidoTexto.text = idioma.CogerCadena("soundYes");
            PlayerPrefs.SetString("sonido", "true");
            sonidoParar = true;
        }
        else
        {
            AudioListener.pause = true;
            botonSonido.GetComponent<Image>().sprite = botonSonidoNoSprite;
            botonSonidoTexto.text = idioma.CogerCadena("soundNo");
            PlayerPrefs.SetString("sonido", "false");
            sonidoParar = false;
        }
    }

    public void ActivarAyuda()
    {
        sonidoBoton.Play();

        if (toggleAyuda.isOn == true)
        {
            PlayerPrefs.SetString("ayuda", "true");
            toggleAyudaTexto.text = idioma.CogerCadena("helpYes");
        }
        else
        {
            PlayerPrefs.SetString("ayuda", "false");
            toggleAyudaTexto.text = idioma.CogerCadena("helpNo");
        }
    }

    public void CargarIdiomaEnglish()
    {
        sonidoBoton.Play();
        idioma.CargarIdioma(ficheroIdiomas, "English");
        PlayerPrefs.SetString("idioma", "English");
        CargarIdiomaTexto();
    }

    public void CargarIdiomaSpanish()
    {
        sonidoBoton.Play();
        idioma.CargarIdioma(ficheroIdiomas, "Spanish");
        PlayerPrefs.SetString("idioma", "Spanish");
        CargarIdiomaTexto();
    }

    private void CargarIdiomaTexto()
    {
        botonNuevaPartidaTexto.text = idioma.CogerCadena("newGame").ToUpper();
        botonCargarPartidaTexto.text = idioma.CogerCadena("loadGame").ToUpper();
        botonOpcionesTexto.text = idioma.CogerCadena("options").ToUpper();
        botonSalirJuegoTexto.text = idioma.CogerCadena("exitGame").ToUpper();
        botonVolverTexto.text = idioma.CogerCadena("back").ToUpper();

        if (PlayerPrefs.GetString("ayuda") == "true")
        {
            toggleAyudaTexto.text = idioma.CogerCadena("helpYes");
        }
        else
        {
            toggleAyudaTexto.text = idioma.CogerCadena("helpNo");
        }

        if (PlayerPrefs.GetString("sonido") == "true")
        {
            botonSonidoTexto.text = idioma.CogerCadena("soundYes");
        }
        else
        {
            botonSonidoTexto.text = idioma.CogerCadena("soundNo");
        }
    }

    public void MostrarCanvasOpciones()
    {
        if (canvasMenuPrincipal.gameObject.GetComponent<CanvasGroup>().alpha == 1)
        {
            canvasMenuPrincipal.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            canvasMenuPrincipal.gameObject.GetComponent<CanvasGroup>().interactable = false;
            canvasMenuPrincipal.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

            canvasMenuOpciones.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            canvasMenuOpciones.gameObject.GetComponent<CanvasGroup>().interactable = true;
            canvasMenuOpciones.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
        }
        else
        {
            canvasMenuPrincipal.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            canvasMenuPrincipal.gameObject.GetComponent<CanvasGroup>().interactable = true;
            canvasMenuPrincipal.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;

            if (DetectarPartidaGuardada() != null)
            {
                botonCargarPartida.interactable = true;
            }
            else
            {
                botonCargarPartida.interactable = false;
            }

            canvasMenuOpciones.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            canvasMenuOpciones.gameObject.GetComponent<CanvasGroup>().interactable = false;
            canvasMenuOpciones.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
        }
    }

    public void MostrarCanvasJuego()
    {
        if (canvasMenuPrincipal.gameObject.GetComponent<CanvasGroup>().alpha == 1)
        {
            canvasMenuPrincipal.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            canvasMenuPrincipal.gameObject.GetComponent<CanvasGroup>().interactable = false;
            canvasMenuPrincipal.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

            canvasJuego.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            canvasJuego.gameObject.GetComponent<CanvasGroup>().interactable = true;
            canvasJuego.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;

            MostrarCanvasJuegoCajas(true);
        }
        else
        {
            canvasMenuPrincipal.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            canvasMenuPrincipal.gameObject.GetComponent<CanvasGroup>().interactable = true;
            canvasMenuPrincipal.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;

            if (DetectarPartidaGuardada() != null)
            {
                botonCargarPartida.interactable = true;
            }
            else
            {
                botonCargarPartida.interactable = false;
            }

            canvasJuego.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            canvasJuego.gameObject.GetComponent<CanvasGroup>().interactable = false;
            canvasJuego.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;

            MostrarCanvasJuegoCajas(false);
        }
    }

    public void MostrarCanvasJuegoCajas(bool estado)
    {
        panelConstruir.gameObject.SetActive(estado);
        panelDemoler.gameObject.SetActive(estado);
        panelDatos.gameObject.SetActive(estado);
        panelEdificios.gameObject.SetActive(estado);
        panelGuardar.gameObject.SetActive(estado);
        panelTiempo.gameObject.SetActive(estado);

        ayuda1.gameObject.SetActive(estado);
        ayuda2.gameObject.SetActive(estado);
        ayuda3.gameObject.SetActive(estado);
    }

    public void AbrirWeb1()
    {
        sonidoBoton.Play();
        Application.OpenURL("https://pepeizqapps.com/");
    }

    public void AbrirWeb2()
    {
        sonidoBoton.Play();
        Application.OpenURL("https://pepeizqdeals.com/");
    }

    public void SalirJuego()
    {
        Application.Quit();
    }

    public void NuevaPartida()
    {
        menuPrincipal = false;
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

        camara.transform.position = new Vector3(20, 60, 20);
        colocar.QuitarTodosEdicios();
        arbolesInicio.Colocar(colocar);
        CargarInterfaz();
    }

    public void CargarPartida()
    {
        menuPrincipal = false;
        sonidoBoton.Play();
        colocar.QuitarTodosEdicios();
        CargarEdificios(true);
        CargarInterfaz();
    }

    private void CargarInterfaz()
    {
        diaNoche.ArrancarParar();

        MostrarCanvasJuego();

        panelEdificiosInfo.Arranque();

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

        volverMenuTexto.text = idioma.CogerCadena("exitQuestion");
        volverMenuTextoSi.text = idioma.CogerCadena("yes");
        volverMenuTextoNo.text = idioma.CogerCadena("no");
        volverMenuTextoCancelar.text = idioma.CogerCadena("cancel");

        musicaFondo.loop = true;
        musicaFondo.Play();
    }

    void Update ()
    {
        if (menuPrincipal == false)
        {
            if (Input.GetKeyDown(KeyCode.Escape))
            {
                VolverMenu();
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
                            DemolerBoton(false);
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

                    if (edificioSeleccionado != null)
                    {
                        if (edificioSeleccionado.id > 99)
                        {
                            edificioSeleccionado = colocar.QuitarEdificioBuscar(edificioSeleccionado, gridPosicion);
                        }
                    }

                    if (edificioSeleccionado != null)
                    {
                        colocar.LimpiarColorEdificios();

                        if (edificioSeleccionado.id < 99)
                        {
                            edificioSeleccionado.gameObject.GetComponent<MeshRenderer>().material.color = new Color(255, 0, 0, 0.1f);                           
                        } 
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
            Debug.Log(guardado.edificiosID.Count);
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

    public void CargarEdificios(bool mostrarAyuda)
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

        if (mostrarAyuda == true)
        {
            if (PlayerPrefs.GetString("ayuda") == "true")
            {
                ayuda1.GetComponent<CanvasGroup>().alpha = 1;
                ayuda1.GetComponent<CanvasGroup>().interactable = true;
                ayuda1.GetComponent<CanvasGroup>().blocksRaycasts = true;
                ayuda1.gameObject.SetActive(true);

                ayuda1Texto.text = idioma.CogerCadena("help1");
                ayuda2Texto.text = idioma.CogerCadena("help2");
                ayuda3Texto.text = idioma.CogerCadena("help3");

                diaNoche.ArrancarParar();
            }
            else
            {
                ayuda1.gameObject.SetActive(false);
            }
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
        FileStream fichero = File.Create(Application.persistentDataPath + "/guardado.save");
        bf.Serialize(fichero, guardado);
        fichero.Close();
    }

    public void VolverMenu()
    {
        MostrarCanvasJuegoCajas(false);

        volverMenu.GetComponent<CanvasGroup>().alpha = 1;
        volverMenu.GetComponent<CanvasGroup>().interactable = true;
        volverMenu.GetComponent<CanvasGroup>().blocksRaycasts = true;
        volverMenu.gameObject.SetActive(true);

        if (diaNoche.parar == false)
        {
            diaNoche.ArrancarParar();
        }

        enseñarPrevio = false;
        sonidoBoton.Play();
    }

    public void VolverMenuSi()
    {
        sonidoBoton.Play();
        menuPrincipal = true;
        GuardarPartida();
        colocarPrevio.QuitarTodosEdificios();

        if (diaNoche.parar == false)
        {
            diaNoche.ArrancarParar();
        }

        MostrarCanvasJuego();

        volverMenu.GetComponent<CanvasGroup>().alpha = 0;
        volverMenu.GetComponent<CanvasGroup>().interactable = false;
        volverMenu.GetComponent<CanvasGroup>().blocksRaycasts = false;
        volverMenu.gameObject.SetActive(false);
    }

    public void VolverMenuNo()
    {
        sonidoBoton.Play();
        menuPrincipal = true;
        colocarPrevio.QuitarTodosEdificios();

        if (diaNoche.parar == false)
        {
            diaNoche.ArrancarParar();
        }

        MostrarCanvasJuego();

        volverMenu.GetComponent<CanvasGroup>().alpha = 0;
        volverMenu.GetComponent<CanvasGroup>().interactable = false;
        volverMenu.GetComponent<CanvasGroup>().blocksRaycasts = false;
        volverMenu.gameObject.SetActive(false);
    }

    public void VolverMenuCancelar()
    {
        sonidoBoton.Play();

        MostrarCanvasJuegoCajas(true);

        volverMenu.GetComponent<CanvasGroup>().alpha = 0;
        volverMenu.GetComponent<CanvasGroup>().interactable = false;
        volverMenu.GetComponent<CanvasGroup>().blocksRaycasts = false;
        volverMenu.gameObject.SetActive(false);

        if (diaNoche.parar == true)
        {
            diaNoche.ArrancarParar();
        }
    }

    public void CerrarAyuda1()
    {
        sonidoBoton.Play();

        ayuda1.GetComponent<CanvasGroup>().alpha = 0;
        ayuda1.GetComponent<CanvasGroup>().interactable = false;
        ayuda1.GetComponent<CanvasGroup>().blocksRaycasts = false;
        ayuda1.gameObject.SetActive(false);

        ayuda2.GetComponent<CanvasGroup>().alpha = 1;
        ayuda2.GetComponent<CanvasGroup>().interactable = true;
        ayuda2.GetComponent<CanvasGroup>().blocksRaycasts = true;
        ayuda2.gameObject.SetActive(true);
    }

    public void CerrarAyuda2()
    {
        sonidoBoton.Play();

        ayuda2.GetComponent<CanvasGroup>().alpha = 0;
        ayuda2.GetComponent<CanvasGroup>().interactable = false;
        ayuda2.GetComponent<CanvasGroup>().blocksRaycasts = false;
        ayuda2.gameObject.SetActive(false);

        ayuda3.GetComponent<CanvasGroup>().alpha = 1;
        ayuda3.GetComponent<CanvasGroup>().interactable = true;
        ayuda3.GetComponent<CanvasGroup>().blocksRaycasts = true;
        ayuda3.gameObject.SetActive(true);
    }

    public void CerrarAyuda3()
    {
        sonidoBoton.Play();

        ayuda3.GetComponent<CanvasGroup>().alpha = 0;
        ayuda3.GetComponent<CanvasGroup>().interactable = false;
        ayuda3.GetComponent<CanvasGroup>().blocksRaycasts = false;
        ayuda3.gameObject.SetActive(false);

        if (diaNoche.parar == true)
        {
            diaNoche.ArrancarParar();
        }
    }
}
