using UnityEngine;

public class Colocar : MonoBehaviour {

    public Construccion[,] edificios = new Construccion[100, 100];

    public void AñadirConstruccion(Construccion edificio, Vector3 posicion, int rotacion)
    {
        posicion.y = 1;
        edificios[(int)posicion.x, (int)posicion.z] = Instantiate(edificio, posicion, Quaternion.identity);
        edificios[(int)posicion.x, (int)posicion.z].transform.Rotate(Vector3.up, rotacion, Space.World);
    }

    public Construccion ComprobarConstruccionesPosicion(Vector3 posicion)
    {
        if (((int)posicion.x > 0) && ((int)posicion.x <= 100) && ((int)posicion.z > 0) && ((int)posicion.z <= 100))
        {
            return edificios[(int)posicion.x, (int)posicion.z];
        }
        else
        {
            return null;
        }
    }

    public void QuitarEdificio(Vector3 posicion)
    {
        Destroy(edificios[(int)posicion.x, (int)posicion.z].gameObject);
        edificios[(int)posicion.x, (int)posicion.z] = null;
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
                int azar = Random.Range(subedificio.luzProbabilidad, 100);

                foreach (Light luz in subedificio.GetComponentsInChildren<Light>())
                {                   
                    if (tiempoDia >= 0.75f)
                    {
                        if (azar < 50)
                        {
                            luz.intensity = subedificio.luzIntesidad;
                            luz.range = 0.5f;
                        }                       
                    }
                    else if (tiempoDia <= 0.3f)
                    {
                        if (azar < 50)
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
