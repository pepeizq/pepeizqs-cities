using UnityEngine;

public class Colocar : MonoBehaviour {

    public Construccion[,] edificios = new Construccion[100, 100];

    public Construccion edificioVacio;

    public void AñadirConstruccion(Construccion edificio, Vector3 posicion, int rotacion)
    {
        if ((edificio.dimensiones.x == 2) && (edificio.dimensiones.y == 2) && (edificio.dimensiones.z == 2))
        {
            posicion.x = posicion.x + 0.5f;
            posicion.y = 1.5f;
            posicion.z = posicion.z + 0.5f;
            edificio.gameObject.transform.localScale = new Vector3(2f, 2f, 2f);
        }
        else
        {
            posicion.y = 1;
        }

        Construccion edificioFinal = Instantiate(edificio, posicion, Quaternion.identity);
        edificioFinal.transform.Rotate(Vector3.up, rotacion, Space.World);

        edificios[(int)posicion.x, (int)posicion.z] = edificioFinal;

        if ((edificio.dimensiones.x == 2) && (edificio.dimensiones.y == 2) && (edificio.dimensiones.z == 2))
        {
            edificios[(int)posicion.x + 1, (int)posicion.z] = Instantiate(edificioVacio);
            edificios[(int)posicion.x, (int)posicion.z + 1] = Instantiate(edificioVacio);
            edificios[(int)posicion.x + 1, (int)posicion.z + 1] = Instantiate(edificioVacio);
        }
    }

    public Construccion ComprobarConstruccionesPosicion(Construccion edificio, Vector3 posicion)
    {
        if (((int)posicion.x > 0) && ((int)posicion.x <= 100) && ((int)posicion.z > 0) && ((int)posicion.z <= 100))
        {
            if ((edificio.dimensiones.x == 2) && (edificio.dimensiones.y == 2) && (edificio.dimensiones.z == 2))
            {
                if (edificios[(int)posicion.x, (int)posicion.z] != null)
                {
                    return edificios[(int)posicion.x, (int)posicion.z];
                }

                if (edificios[(int)posicion.x + 1, (int)posicion.z] != null)
                {
                    return edificios[(int)posicion.x + 1, (int)posicion.z];
                }

                if (edificios[(int)posicion.x, (int)posicion.z + 1] != null)
                {
                    return edificios[(int)posicion.x, (int)posicion.z + 1];
                }

                if (edificios[(int)posicion.x + 1, (int)posicion.z + 1] != null)
                {
                    return edificios[(int)posicion.x + 1, (int)posicion.z + 1];
                }

                return null;
            }
            else
            {
                return edificios[(int)posicion.x, (int)posicion.z];
            }
        }
        else
        {
            return null;
        }
    }

    public void QuitarEdificio(Construccion edificio, Vector3 posicion)
    {
        if ((edificio.dimensiones.x == 2) && (edificio.dimensiones.y == 2) && (edificio.dimensiones.z == 2))
        {
            if (edificios[(int)posicion.x, (int)posicion.z] != null)
            {
                Destroy(edificios[(int)posicion.x, (int)posicion.z].gameObject);
                edificios[(int)posicion.x, (int)posicion.z] = null;
            }

            if (edificios[(int)posicion.x + 1, (int)posicion.z] != null)
            {
                Destroy(edificios[(int)posicion.x + 1, (int)posicion.z].gameObject);
                edificios[(int)posicion.x + 1, (int)posicion.z] = null;
            }

            if (edificios[(int)posicion.x, (int)posicion.z + 1] != null)
            {
                Destroy(edificios[(int)posicion.x, (int)posicion.z + 1].gameObject);
                edificios[(int)posicion.x, (int)posicion.z + 1] = null;
            }

            if (edificios[(int)posicion.x + 1, (int)posicion.z + 1] != null)
            {
                Destroy(edificios[(int)posicion.x + 1, (int)posicion.z + 1].gameObject);
                edificios[(int)posicion.x + 1, (int)posicion.z + 1] = null;
            }
        }
        else
        {
            Destroy(edificios[(int)posicion.x, (int)posicion.z].gameObject);
            edificios[(int)posicion.x, (int)posicion.z] = null;
        }
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

    public void ComprobarLuces(float tiempoDia)
    {
        foreach (Construccion subedificio in edificios)
        {
            if (subedificio != null)
            {
                int azar = Random.Range(0, subedificio.luzProbabilidad);

                foreach (Light luz in subedificio.GetComponentsInChildren<Light>())
                {                   
                    if (tiempoDia >= 0.75f)
                    {
                        if ((subedificio.luzProbabilidad == 100) || (azar > 50))
                        {
                            luz.intensity = subedificio.luzIntesidad;
                            luz.range = 0.5f;
                        }                       
                    }
                    else if (tiempoDia <= 0.3f)
                    {
                        if ((subedificio.luzProbabilidad == 100) || (azar > 50))
                        {
                            luz.intensity = subedificio.luzIntesidad;
                            luz.range = 0.5f;
                        }                           
                    }
                    else
                    {
                        luz.intensity = 0;
                    }
                }
            }
        }
    }
}
