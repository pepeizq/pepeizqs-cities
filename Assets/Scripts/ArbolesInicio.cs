using UnityEngine;

public class ArbolesInicio : MonoBehaviour {

    public Construccion[] arbolesInicio;

    public void Colocar(Colocar colocar)
    {
        if (arbolesInicio != null)
        {
            if (arbolesInicio.Length > 0)
            {
                int arbolesColocar = 200;

                int i = 0;
                while (i < arbolesColocar)
                {
                    Vector3 posicion = new Vector3(Random.Range(1, 99), 1, Random.Range(1, 99));
                    int j = Random.Range(0, arbolesInicio.Length);

                    if (arbolesInicio[j] != null)
                    {
                        if (colocar.ComprobarConstruccionesPosicion(arbolesInicio[j], posicion) == null)
                        {
                            colocar.AñadirConstruccion(arbolesInicio[j], posicion);
                        }
                    }
                    i++;
                }
            }
        }
    }
}