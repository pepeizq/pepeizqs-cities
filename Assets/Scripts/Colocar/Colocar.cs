using UnityEngine;

public class Colocar : MonoBehaviour
{
    private int contadorIds;

    public Construccion[,] edificios = new Construccion[100, 100];
    public Construccion edificioVacio;

    public Vehiculo[] vehiculos;

    private void Start()
    {
        contadorIds = 0;
    }

    public void AñadirConstruccion(Construccion edificio, Vector3 posicion, bool encender)
    {
        edificio.GetComponent<Renderer>().receiveShadows = true;
        edificio.GetComponent<Renderer>().shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;

        posicion = ColocarFunciones.PosicionEdificio(edificio, posicion, edificio.rotacionColocacion);
        ComprobarLucesEdificio(encender, edificio);

        Construccion edificioFinal = Instantiate(edificio, posicion, Quaternion.identity);
        edificioFinal.transform.Rotate(Vector3.up, edificio.rotacionAdicional + edificio.rotacionColocacion, Space.World);
        edificioFinal.posicionX = (int)posicion.x;
        edificioFinal.posicionZ = (int)posicion.z;
        edificioFinal.id2 = contadorIds;
        contadorIds += 1;

        edificioVacio.id2 = edificioFinal.id2;

        edificios[(int)posicion.x, (int)posicion.z] = edificioFinal;
        edificios = ColocarFunciones.RellenarEdificioVacio(edificios, edificio, posicion, edificioVacio);
    }

    public Construccion ComprobarConstruccionesPosicion(Construccion edificio, Vector3 posicion)
    {
        return ColocarFunciones.ComprobarPosicion(edificios, edificio, posicion);
    }

    public void QuitarEdificio(Construccion edificio, Vector3 posicion)
    {
        edificios = ColocarFunciones.QuitarEdificios(edificios, edificio, posicion);
    }

    public void QuitarTodosEdificios()
    {
        for (int x = 0; x < edificios.GetLength(0); x++)
        {
            for (int z = 0; z < edificios.GetLength(1); z++)
            {
                if (edificios[x, z] != null)
                {
                    Object.Destroy(edificios[x, z].gameObject);
                    edificios[x, z] = null;
                }
            }
        }
    }

    public Construccion[,] DevolverConstrucciones()
    {
        return edificios;
    }

    public void DemolerColorRojo(int id2)
    {
        foreach (Construccion subedificio in edificios)
        {
            if (subedificio != null)
            {
                if (subedificio.id != 99)
                {
                    if (subedificio.id2 == id2)
                    {
                        subedificio.gameObject.GetComponent<MeshRenderer>().material.color = new Color(255f / 255f, 98f / 255f, 98f / 255f);
                    }
                }
            }
        }
    }

    public void DemolerColorQuitar()
    {
        foreach (Construccion subedificio in edificios)
        {
            if (subedificio != null)
            {
                subedificio.gameObject.GetComponent<MeshRenderer>().material.color = Color.white;
            }
        }
    }

    public void ComprobarLuces(bool encender)
    {
        foreach (Construccion subedificio in edificios)
        {
            if (subedificio != null)
            {
                ComprobarLucesEdificio(encender, subedificio);
            }
        }
    }

    public void ComprobarLucesEdificio(bool encender, Construccion edificio)
    {
        bool lucesEdificio = true;

        if (edificio.categoria == 1)
        {
            if (edificio.id == 10)
            {
                lucesEdificio = false;
            }
            else if (edificio.id == 11)
            {
                lucesEdificio = false;
            }
        }

        if (lucesEdificio == true)
        {
            Light[] luces = edificio.GetComponentsInChildren<Light>();

            foreach (Light luz in luces)
            {
                int azar = Random.Range(0, 100 - edificio.luzProbabilidad);

                if (encender == true)
                {
                    if ((edificio.luzProbabilidad == 100) || (azar > 50))
                    {
                        luz.intensity = edificio.luzIntesidad;
                        luz.range = edificio.luzRango;
                    }
                    else
                    {
                        luz.intensity = 0;
                        luz.range = 0;
                    }
                }
                else
                {
                    luz.intensity = 0;
                    luz.range = 0;
                }
            }
        }
    }

    public void CambiarLucesSemaforos(int accion)
    {
        foreach (Construccion subedificio in edificios)
        {
            if (subedificio != null)
            {
                bool lucesCarretera = false;

                if (subedificio.categoria == 1)
                {
                    if (subedificio.id == 10)
                    {
                        lucesCarretera = true;
                    }
                    else if (subedificio.id == 11)
                    {
                        lucesCarretera = true;
                    }
                }
             
                if (lucesCarretera == true)
                {
                    Light[] luces = subedificio.GetComponentsInChildren<Light>();

                    foreach (Light luz in luces)
                    {
                        if (accion == 0)
                        {
                            bool activarLuz = false;

                            if (luz.name.ToLower().Contains("luzrojo1"))
                            {
                                activarLuz = true;
                            }
                            else if (luz.name.ToLower().Contains("luzrojo3"))
                            {
                                activarLuz = true;
                            }
                            else if (luz.name.ToLower().Contains("luzverde2"))
                            {
                                activarLuz = true;
                            }
                            else if (luz.name.ToLower().Contains("luzverde4"))
                            {
                                activarLuz = true;
                            }

                            if (activarLuz == true)
                            {
                                luz.intensity = 1.0f;
                                luz.range = 0.3f;
                            }
                            else
                            {
                                luz.intensity = 0f;
                                luz.range = 0f;
                            }
                        }
                        else if (accion == 1)
                        {
                            bool activarLuz = false;

                            if (luz.name.ToLower().Contains("luzrojo2"))
                            {
                                activarLuz = true;
                            }
                            else if (luz.name.ToLower().Contains("luzrojo4"))
                            {
                                activarLuz = true;
                            }
                            else if (luz.name.ToLower().Contains("luzverde1"))
                            {
                                activarLuz = true;
                            }
                            else if (luz.name.ToLower().Contains("luzverde3"))
                            {
                                activarLuz = true;
                            }

                            if (activarLuz == true)
                            {
                                luz.intensity = 1.0f;
                                luz.range = 0.3f;
                            }
                            else
                            {
                                luz.intensity = 0f;
                                luz.range = 0f;
                            }
                        }
                        else
                        {
                            luz.intensity = 0f;
                            luz.range = 0f;
                        }
                    }
                }
            }
        }
    }

    public void GenerarVehiculos()
    {
        foreach (Construccion subedificio in edificios)
        {
            if (subedificio != null)
            {
                if (subedificio.categoria == 1)
                {

                }
            }
        }
    }
}