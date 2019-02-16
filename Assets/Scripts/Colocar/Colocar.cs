using UnityEngine;

public class Colocar : MonoBehaviour {

    public Construccion[,] edificios = new Construccion[100, 100];

    public Construccion edificioVacio;

    public void AñadirConstruccion(Construccion edificio, Vector3 posicion, int rotacion)
    {
        posicion = ColocarFunciones.PosicionEdificio(edificio, posicion, rotacion);

        Construccion edificioFinal = Instantiate(edificio, posicion, Quaternion.identity);
        edificioFinal.transform.Rotate(Vector3.up, rotacion, Space.World);

        edificios[(int)posicion.x, (int)posicion.z] = edificioFinal;

        edificios = ColocarFunciones.RellenarEdificioVacio(edificios, edificio, posicion, rotacion, edificioVacio);
    }

    public Construccion ComprobarConstruccionesPosicion(Construccion edificio, Vector3 posicion, int rotacion)
    {
        return ColocarFunciones.ComprobarPosicion(edificios, edificio, posicion, rotacion);
    }

    public void QuitarEdificio(Construccion edificio, Vector3 posicion, int rotacion)
    {
        edificios = ColocarFunciones.QuitarEdificios(edificios, edificio, posicion, rotacion);
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

    public void ComprobarLuces(bool encendido)
    {
        foreach (Construccion subedificio in edificios)
        {
            if (subedificio != null)
            {
                Light[] luces = subedificio.GetComponentsInChildren<Light>();
               
                foreach (Light luz in luces)
                {
                    int azar = Random.Range(0, 100 - subedificio.luzProbabilidad);

                    if (encendido == true)
                    {
                        if ((subedificio.luzProbabilidad == 100) || (azar > 50))
                        {
                            luz.intensity = subedificio.luzIntesidad;
                            luz.range = subedificio.luzRango;
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
}
