using UnityEngine;

public class Colocar : MonoBehaviour {

    public Construccion[,] edificios = new Construccion[100, 100];

    public Construccion edificioVacio;

    public void AñadirConstruccion(Construccion edificio, Vector3 posicion, bool encender)
    {
        edificio.GetComponent<Renderer>().receiveShadows = true;
        edificio.GetComponent<Renderer>().shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;

        posicion = ColocarFunciones.PosicionEdificio(edificio, posicion, edificio.rotacionColocacion);
        ComprobarLucesEdificio(encender, edificio);

        Construccion edificioFinal = Instantiate(edificio, posicion, Quaternion.identity);      
        edificioFinal.transform.Rotate(Vector3.up, edificio.rotacionAdicional + edificio.rotacionColocacion, Space.World);

        edificios[(int)posicion.x, (int)posicion.z] = edificioFinal;
        //edificios = ColocarFunciones.RellenarEdificioVacio(edificios, edificio, posicion, edificio.rotacionColocacion, edificioVacio);
    }

    public Construccion ComprobarConstruccionesPosicion(Construccion edificio, Vector3 posicion)
    {
        return ColocarFunciones.ComprobarPosicion(edificios, edificio, posicion);
    }

    public void QuitarEdificio(Construccion edificio, Vector3 posicion)
    {
        edificios = ColocarFunciones.QuitarEdificios(edificios, edificio, posicion, edificio.rotacionColocacion);
    }

    public Construccion[,] DevolverConstrucciones()
    {
        return edificios;
    }

    public void LimpiarColorEdificios()
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
