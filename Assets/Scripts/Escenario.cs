using System.Collections.Generic;
using UnityEngine;

public class Escenario : MonoBehaviour {

    public Terreno tierra;
    public Terreno rio;

    [SerializeField]
    public Terreno[] terrenos;

    [HideInInspector]
    public List<int> terrenosID = new List<int>();

    [HideInInspector]
    public List<int> terrenosX = new List<int>();

    [HideInInspector]
    public List<int> terrenosZ = new List<int>();

    public Construccion[] arboles;

    public void PonerTerreno()
    {
        if (rio != null)
        {
            int origen = Random.Range(40, 60);
            int primerTramo = Random.Range(20, 30);

            int i = 0;
            while (i < primerTramo)
            {
                Vector3 posicion = new Vector3(origen, -0.5f, i);
                GenerarTerreno(rio, posicion);

                i += 1;
            }

            int positivoNegativo = Random.Range(0, 2);
            int segundoTramo = 0;

            if (positivoNegativo == 0)
            {
                segundoTramo = Random.Range(-10, -20);
                i = 0;
                while (i > segundoTramo)
                {
                    Vector3 posicion = new Vector3(origen + i, -0.5f, primerTramo);
                    GenerarTerreno(rio, posicion);

                    i -= 1;
                }
            }
            else
            {
                segundoTramo = Random.Range(10, 20);
                i = 0;
                while (i < segundoTramo)
                {
                    Vector3 posicion = new Vector3(origen + i, -0.5f, primerTramo);
                    GenerarTerreno(rio, posicion);

                    i += 1;
                }
            }

            int tercerTramo = Random.Range(30, 40);

            i = 0;
            while (i < tercerTramo)
            {
                Vector3 posicion = new Vector3(origen + segundoTramo, -0.5f, primerTramo + i);
                GenerarTerreno(rio, posicion);

                i += 1;
            }

            positivoNegativo = Random.Range(0, 2);
            int cuartoTramo = 0;

            if (positivoNegativo == 0)
            {
                cuartoTramo = Random.Range(-10, -20);
                i = 0;
                while (i > cuartoTramo)
                {
                    Vector3 posicion = new Vector3(origen + segundoTramo + i, -0.5f, primerTramo + tercerTramo);
                    GenerarTerreno(rio, posicion);

                    i -= 1;
                }
            }
            else
            {
                cuartoTramo = Random.Range(10, 20);
                i = 0;
                while (i < cuartoTramo)
                {
                    Vector3 posicion = new Vector3(origen + segundoTramo + i, -0.5f, primerTramo + tercerTramo);
                    GenerarTerreno(rio, posicion);

                    i += 1;
                }
            }

            i = 0;
            while ((primerTramo + tercerTramo + i) < 100)
            {
                Vector3 posicion = new Vector3(origen + segundoTramo + cuartoTramo, -0.5f, primerTramo + tercerTramo + i);
                GenerarTerreno(rio, posicion);

                i += 1;
            }
        }

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

                    if (terrenosID .Count > 0)
                    {
                        int k = 0;
                        while (k < terrenosID.Count)
                        {
                            if (terrenosX[k] == i)
                            {
                                if (terrenosZ[k] == j)
                                {
                                    añadir = false;
                                }
                            }
                            k += 1;
                        }
                    }

                    if (añadir == true)
                    {
                        GenerarTerreno(tierra, posicion);
                    }
                   
                    j += 1;
                }
                i += 1;
            }
        }
    }

    private void GenerarTerreno(Terreno terreno, Vector3 posicion)
    {
        terrenosID.Add(terreno.id);
        terrenosX.Add((int)posicion.x);
        terrenosZ.Add((int)posicion.z);

        Instantiate(terreno, posicion, Quaternion.identity);
    }

    public bool ComprobarEdificable(Vector3 posicion)
    {
        bool edificable = true;

        if (terrenosID != null)
        {
            if (terrenosID.Count > 0)
            {
                int k = 0;
                while (k < terrenosID.Count)
                {
                    if (terrenosX[k] == posicion.x)
                    {
                        if (terrenosZ[k] == posicion.z)
                        {
                            Terreno terreno = terrenos[terrenosID[k]];

                            if (terreno.edificable == false)
                            {
                                edificable = false;
                            }
                        }
                    }
                    k += 1;
                }
            }
        }     

        return edificable;
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
                        bool añadir = true;

                        if (ComprobarEdificable(posicion) == false)
                        {
                            añadir = false;
                        }

                        if (colocar.ComprobarConstruccionesPosicion(arboles[j], posicion) != null)
                        {
                            añadir = false;
                        }

                        if (añadir == true)
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