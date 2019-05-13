using UnityEngine;

public class Colocar : MonoBehaviour {

    private int contadorIds;

    public Construccion[,] edificios = new Construccion[100, 100];

    public Construccion edificioVacio;

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
}
