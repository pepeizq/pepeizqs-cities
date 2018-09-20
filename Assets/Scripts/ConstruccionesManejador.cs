using UnityEngine;

public class ConstruccionesManejador : MonoBehaviour {

    [SerializeField]
    private Ciudad ciudad;

    [SerializeField]
    private UIController ui;

    [SerializeField]
    private Construccion[] edificios;

    [SerializeField]
    private Colocar colocar;

    private Construccion edificioSeleccionado;

	void Update () {
       
        if (Input.GetMouseButton(0) && Input.GetKey(KeyCode.LeftShift) && edificioSeleccionado != null)
        {
            InteractuarColocar(0);
        }
        else if (Input.GetMouseButtonDown(0) && edificioSeleccionado != null)
        {
            InteractuarColocar(0);
        }

        if (Input.GetMouseButtonDown(1))
        {
            InteractuarColocar(1);
        }
    }

    void InteractuarColocar(int accion)
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit))
        {            
            Vector3 gridPosicion = colocar.RedondearGridPosicion(hit.point);

            if (!UnityEngine.EventSystems.EventSystem.current.IsPointerOverGameObject())
            {
                if (accion == 0 && colocar.ComprobarConstruccionesPosicion(gridPosicion) == null)
                {
                    if (ciudad.Dinero >= edificioSeleccionado.coste)
                    {
                        ciudad.DepositoDinero(-edificioSeleccionado.coste);
                        ui.ActualizarCiudadInfo();
                        ciudad.ListaConstrucciones[edificioSeleccionado.id]++;
                        colocar.AñadirConstruccion(edificioSeleccionado, gridPosicion);
                    }
                }
                else if (accion == 1 && colocar.ComprobarConstruccionesPosicion(gridPosicion) != null)
                {
                    ciudad.DepositoDinero(colocar.ComprobarConstruccionesPosicion(gridPosicion).coste/3);
                    colocar.QuitarEdificio(gridPosicion);
                    ui.ActualizarCiudadInfo();
                }
            }            
        }
    }

    public void ActivarConstruccion(int edificio)
    {
        edificioSeleccionado = edificios[edificio];
    }
}
