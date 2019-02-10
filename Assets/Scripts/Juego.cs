using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Juego : MonoBehaviour {

    public TextAsset ficheroIdiomas;
    public Idiomas idioma;

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

    public Construccion arbolInicio;

    public Camera camara;

    public Panel panelConstruir;
    public Panel panelDemoler;
    public Panel panelDatos;
    public Panel panelEdificios;
    public Panel panelGuardar;
    public Panel panelTiempo;

    public GameObject botonEdificiosPrefab;
    public Panel panelEdificiosDecoracion;
    public Panel panelEdificiosCarreteras;
    public Panel panelEdificiosCasas;
    public Panel panelEdificiosComida;
    public Panel panelEdificiosTrabajo;

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
        idioma.CargarIdioma(ficheroIdiomas, PlayerPrefs.GetString("idioma"));

        foreach (Construccion edificio in edificios)
        {
            GameObject botonObjeto = Instantiate(botonEdificiosPrefab);

            if (edificio.categoria == 0)
            {
                botonObjeto.transform.SetParent(panelEdificiosDecoracion.transform, false);
            }
            else if(edificio.categoria == 1)
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
                botonObjeto.transform.SetParent(panelEdificiosTrabajo.transform, false);
            }

            Image imagen = botonObjeto.GetComponent<Image>();
            imagen.sprite = edificio.imagen;

            Button boton = botonObjeto.GetComponent<Button>();
            boton.onClick.AddListener(() => SeleccionarEdificio(edificio.id));
            //boton.OnPointerEnter.
        }

        if (File.Exists(Application.persistentDataPath + "/guardado.save"))
        {
            BinaryFormatter bf = new BinaryFormatter();
            FileStream fichero = File.Open(Application.persistentDataPath + "/guardado.save", FileMode.Open);
            Guardado guardado = (Guardado)bf.Deserialize(fichero);
            fichero.Close();

            int i = 0;
            while (i < guardado.edificiosID.Count)
            {
                Construccion edificioGuardado = edificios[guardado.edificiosID[i]];
                Vector3 vector = new Vector3(guardado.edificiosX[i], 1, guardado.edificiosZ[i]);
                colocar.AñadirConstruccion(edificioGuardado, vector, guardado.edificiosRotacion[i]);

                i++;
            }

            camara.transform.position = new Vector3(guardado.camaraX, guardado.camaraY, guardado.camaraZ);

            diaNoche.tiempoTotalDias = guardado.dia;
            diaNoche.tiempoDia = guardado.hora;
            diaNoche.ActualizarLuces();

            ciudad.Dinero = guardado.dinero;
            ciudad.PoblacionActual = guardado.poblacionActual;
            ciudad.PoblacionTope = guardado.poblacionTope;
            ciudad.TrabajosActual = guardado.trabajosActual;
            ciudad.TrabajosTope = guardado.trabajosTope;
            ciudad.Comida = guardado.comida;
        }
        else
        {
            if (arbolInicio != null)
            {
                int arbolesColocar = 100;

                int i = 0;
                while (i < arbolesColocar)
                {
                    Vector3 posicion = new Vector3(Random.Range(1, 99), 1, Random.Range(1, 99));

                    if (arbolInicio != null)
                    {
                        if (colocar.ComprobarConstruccionesPosicion(arbolInicio, posicion) == null)
                        {
                            colocar.AñadirConstruccion(arbolInicio, posicion, 0);
                        }
                    }
                    
                    i++;
                }
            }
        }

        volverMenuTexto.text = idioma.CogerCadena("exitQuestion");
        volverMenuTextoSi.text = idioma.CogerCadena("yes");
        volverMenuTextoNo.text = idioma.CogerCadena("no");
        volverMenuTextoCancelar.text = idioma.CogerCadena("cancel");

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

        musicaFondo.loop = true;
        musicaFondo.Play();
    }

    void Update ()
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
        panelEdificiosDecoracion.gameObject.SetActive(false);
        panelEdificiosCarreteras.gameObject.SetActive(false);
        panelEdificiosCasas.gameObject.SetActive(false);
        panelEdificiosComida.gameObject.SetActive(false);
        panelEdificiosTrabajo.gameObject.SetActive(false);

        panelVisible.gameObject.SetActive(true);
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
            Vector3 gridPosicion = RedondearPosicion.Buscar(hit.point);

            if (((int)gridPosicion.x > 0) && ((int)gridPosicion.x < 100) && ((int)gridPosicion.z > 0) && ((int)gridPosicion.z < 100))
            {
                if (!UnityEngine.EventSystems.EventSystem.current.IsPointerOverGameObject())
                {                   
                    if (accion == 0 && colocar.ComprobarConstruccionesPosicion(edificioSeleccionado,gridPosicion) == null)
                    {                       
                        if (ciudad.Dinero >= edificioSeleccionado.coste)
                        {                          
                            ciudad.DepositoDinero(-edificioSeleccionado.coste);
                            ciudad.ActualizarUI(false);
                            colocar.AñadirConstruccion(edificioSeleccionado, gridPosicion, rotacionColocar);
                            sonidoBotonConstruir.Play();
                        }
                    }
                    else if (accion == 1 && colocar.ComprobarConstruccionesPosicion(edificioSeleccionado, gridPosicion) != null)
                    {
                        if (edificioSeleccionado.categoria != 0)
                        {
                            ciudad.DepositoDinero(colocar.ComprobarConstruccionesPosicion(edificioSeleccionado, gridPosicion).coste / 3);
                        }
                        
                        ciudad.ActualizarUI(false);
                        colocar.QuitarEdificio(edificioSeleccionado, gridPosicion);
                        DemolerBoton(false);
                        sonidoBotonDemoler.Play();
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
            if (!UnityEngine.EventSystems.EventSystem.current.IsPointerOverGameObject())
            {
                Vector3 gridPosicion = RedondearPosicion.Buscar(hit.point);

                if (((int)gridPosicion.x > 0) && ((int)gridPosicion.x < 100) && ((int)gridPosicion.z > 0) && ((int)gridPosicion.z < 100))
                {
                    if (colocar.ComprobarConstruccionesPosicion(edificioSeleccionado, gridPosicion) == null)
                    {
                        if (colocarPrevio.ComprobarConstruccionesPosicion(edificioSeleccionado, gridPosicion) == null)
                        {
                            colocarPrevio.AñadirConstruccion(edificioSeleccionado, gridPosicion, rotacionColocar);
                        }
                        else
                        {
                            colocarPrevio.QuitarEdificio(edificioSeleccionado, gridPosicion);
                            colocarPrevio.AñadirConstruccion(edificioSeleccionado, gridPosicion, rotacionColocar);
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
            Vector3 gridPosicion = RedondearPosicion.Buscar(hit.point);

            if (((int)gridPosicion.x > 0) && ((int)gridPosicion.x < 100) && ((int)gridPosicion.z > 0) && ((int)gridPosicion.z < 100))
            {
                colocar.LimpiarColorEdificios();

                if (!UnityEngine.EventSystems.EventSystem.current.IsPointerOverGameObject())
                {
                    if (colocar.ComprobarConstruccionesPosicion(edificioSeleccionado, gridPosicion) != null)
                    {
                        Construccion edificioDemoler = colocar.ComprobarConstruccionesPosicion(edificioSeleccionado, gridPosicion);
                        edificioDemoler.gameObject.GetComponent<MeshRenderer>().material.color = new Color(255, 0, 0, 0.1f);
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
                        guardado.edificiosX.Add(x);
                        guardado.edificiosZ.Add(z);
                        guardado.edificiosRotacion.Add((int)edificiosGuardar[x, z].gameObject.transform.eulerAngles.y);
                    }                    
                }
            }
        }

        guardado.camaraX = (int)camara.transform.position.x;
        guardado.camaraY = (int)camara.transform.position.y;
        guardado.camaraZ = (int)camara.transform.position.z;

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
        panelConstruir.gameObject.SetActive(false);
        panelDemoler.gameObject.SetActive(false);
        panelDatos.gameObject.SetActive(false);
        panelEdificios.gameObject.SetActive(false);
        panelGuardar.gameObject.SetActive(false);
        panelTiempo.gameObject.SetActive(false);

        ayuda1.gameObject.SetActive(false);
        ayuda2.gameObject.SetActive(false);
        ayuda3.gameObject.SetActive(false);

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
        GuardarPartida();
        SceneManager.LoadScene("MenuPrincipal");
    }

    public void VolverMenuNo()
    {
        sonidoBoton.Play();
        SceneManager.LoadScene("MenuPrincipal");
    }

    public void VolverMenuCancelar()
    {
        sonidoBoton.Play();

        panelConstruir.gameObject.SetActive(true);
        panelDemoler.gameObject.SetActive(true);
        panelDatos.gameObject.SetActive(true);
        panelEdificios.gameObject.SetActive(true);
        panelGuardar.gameObject.SetActive(true);
        panelTiempo.gameObject.SetActive(true);

        ayuda1.gameObject.SetActive(true);
        ayuda2.gameObject.SetActive(true);
        ayuda3.gameObject.SetActive(true);

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
