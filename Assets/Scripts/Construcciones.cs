using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Construcciones : MonoBehaviour {

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

    private void Start()
    {
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

                    if (colocar.ComprobarConstruccionesPosicion(posicion) == null)
                    {
                        colocar.AñadirConstruccion(arbolInicio, posicion, 0);
                    }
                    i++;
                }
            }
        } 
    }

    void Update () {

        if (edificioSeleccionado != null)
        {
            if (enseñarPrevio == true)
            {
                int[] rotaciones = new int[4];

                if (edificioSeleccionado.nombre == "casa")
                {
                    rotaciones[0] = -180;
                    rotaciones[1] = 0;
                    rotaciones[2] = 90;
                    rotaciones[3] = 270;
                }
                else
                {
                    rotaciones[0] = -180;
                    rotaciones[1] = -270;
                    rotaciones[2] = 0;
                    rotaciones[3] = -90;
                }
               
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

                ColocarPrevio();
            }
           
            if (Input.GetMouseButton(0) && Input.GetKey(KeyCode.LeftShift))
            {
                Colocar(0);
            }
            else if (Input.GetMouseButtonDown(0))
            {
                Colocar(0);
            }
        }
                  
        if (activarDemoler == true)
        {
            DemolerPrevio();

            if (Input.GetMouseButtonDown(0))
            {
                Colocar(1);                
            }
        }       
    }

    public void Construir(RectTransform panel)
    {
        DemolerBoton(false);
        enseñarPrevio = false;
        colocarPrevio.QuitarTodosEdificios();

        if (panel.gameObject.GetComponent<CanvasGroup>().alpha == 0)
        {
            panel.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            panel.gameObject.GetComponent<CanvasGroup>().interactable = true;
        }
        else
        {
            panel.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            panel.gameObject.GetComponent<CanvasGroup>().interactable = false;
        }
    }

    public void Seleccionar(int edificio)
    {
        DemolerBoton(false);

        edificioSeleccionado = edificios[edificio];
        enseñarPrevio = true;
        ColocarPrevio();
    }

    void Colocar(int accion)
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
                    if (accion == 0 && colocar.ComprobarConstruccionesPosicion(gridPosicion) == null)
                    {                       
                        if (ciudad.Dinero >= edificioSeleccionado.coste)
                        {                          
                            ciudad.DepositoDinero(-edificioSeleccionado.coste);
                            ciudad.ActualizarUI(false);
                            colocar.AñadirConstruccion(edificioSeleccionado, gridPosicion, rotacionColocar);                           
                        }
                    }
                    else if (accion == 1 && colocar.ComprobarConstruccionesPosicion(gridPosicion) != null)
                    {
                        ciudad.DepositoDinero(colocar.ComprobarConstruccionesPosicion(gridPosicion).coste / 3);
                        ciudad.ActualizarUI(false);
                        colocar.QuitarEdificio(gridPosicion);

                        DemolerBoton(false);
                    }
                }
            }                 
        }
    }

    void ColocarPrevio()
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
                    if (colocar.ComprobarConstruccionesPosicion(gridPosicion) == null)
                    {
                        if (colocarPrevio.ComprobarConstruccionesPosicion(gridPosicion) == null)
                        {
                            colocarPrevio.AñadirConstruccion(edificioSeleccionado, gridPosicion, rotacionColocar);
                        }
                        else
                        {
                            colocarPrevio.QuitarEdificio(gridPosicion);
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
                    if (colocar.ComprobarConstruccionesPosicion(gridPosicion) != null)
                    {
                        Construccion edificioDemoler = colocar.ComprobarConstruccionesPosicion(gridPosicion);
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
                    guardado.edificiosID.Add(edificiosGuardar[x, z].id);
                    guardado.edificiosX.Add(x);
                    guardado.edificiosZ.Add(z);
                    guardado.edificiosRotacion.Add((int)edificiosGuardar[x, z].gameObject.transform.eulerAngles.y);
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
        SceneManager.LoadScene("MenuPrincipal");
    }
}
