using System.Collections.Generic;
using UnityEngine;

public class Escenario : MonoBehaviour {

    public Terreno tierra;

    [HideInInspector]
    public List<Terreno2> terrenos = new List<Terreno2>();

    public Construccion[] arboles;

    public void PonerTerreno()
    {
        if (tierra != null)
        {
            int i = 0;
            while (i < 100)
            {
                int j = 0;
                while (j < 100)
                {
                    bool añadir = true;
                    Vector3 posicion = new Vector3(i, -0.5f, j);

                    if (terrenos.Count > 0)
                    {
                        foreach (Terreno2 subterreno in terrenos)
                        {
                            if (subterreno.posicion == posicion)
                            {
                                añadir = false;
                            }
                        }
                    }

                    if (añadir == true)
                    {
                        terrenos.Add(new Terreno2(tierra, posicion));
                        Instantiate(tierra, posicion, Quaternion.identity);
                    }
                   
                    j += 1;
                }
                i += 1;
            }
        }
    }

    public void PonerArboles(Colocar colocar)
    {
        if (arboles != null)
        {
            if (arboles.Length > 0)
            {
                int arbolesColocar = 200;

                int i = 0;
                while (i < arbolesColocar)
                {
                    Vector3 posicion = new Vector3(Random.Range(1, 99), 1, Random.Range(1, 99));
                    int j = Random.Range(0, arboles.Length);

                    if (arboles[j] != null)
                    {
                        if (colocar.ComprobarConstruccionesPosicion(arboles[j], posicion) == null)
                        {
                            colocar.AñadirConstruccion(arboles[j], posicion, false);
                        }
                    }
                    i++;
                }
            }
        }
    }
}