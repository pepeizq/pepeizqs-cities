using Construcciones;
using System.Collections.Generic;
using UnityEngine;

public class Escenario : MonoBehaviour {

    [HideInInspector]
    public int tamaño = 100;

    public Partidas partidas;

    public Terreno tierra;
    public Terreno rio;

    [SerializeField]
    public Terreno[] terrenos;

    [HideInInspector]
    public Terreno[,] terrenos2 = new Terreno[100,100];

    public Construccion[] arboles;

    public Nube[] nubes;

    [HideInInspector]
    public List<Nube> nubesGeneradas = new List<Nube>();

    private int contadorIdsNubes;

    public Colisiones colisiones;

    private void Start()
    {
        terrenos2 = new Terreno[tamaño, tamaño];
        contadorIdsNubes = 0;
    }

    public void PonerTerreno(Guardado partida)
    {
        for (int x = 0; x < terrenos2.GetLength(0); x++)
        {
            for (int z = 0; z < terrenos2.GetLength(1); z++)
            {
                if (terrenos2[x, z] != null)
                {
                    Object.DestroyImmediate(terrenos2[x, z].gameObject, true);
                    terrenos2[x, z] = null;
                }
            }
        }

        if (partida != null)
        {
            if (partida.terrenosID.Count > 0)
            {
                int i = 0;
                while (i < partida.terrenosID.Count)
                {
                    Terreno terreno = terrenos[partida.terrenosID[i]];                  
                    Vector3 posicion = new Vector3(partida.terrenosX[i], -0.5f, partida.terrenosZ[i]);
                    GenerarTerreno(terreno, posicion);

                    i += 1;
                }
            }
        }
        else
        {
            if (rio != null)
            {
                int origen = Random.Range(40, 60);
                int primerTramo = Random.Range(20, 30);

                int i = 0;
                while (i < primerTramo)
                {
                    GenerarTerreno(rio, new Vector3(origen, -0.5f, i));
                    GenerarTerreno(rio, new Vector3(origen + 1, -0.5f, i));

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
                        GenerarTerreno(rio, new Vector3(origen + i, -0.5f, primerTramo));
                        GenerarTerreno(rio, new Vector3(origen + i, -0.5f, primerTramo - 1));

                        i -= 1;
                    }
                }
                else
                {
                    segundoTramo = Random.Range(10, 20);
                    i = 0;
                    while (i < segundoTramo)
                    {
                        GenerarTerreno(rio, new Vector3(origen + i + 1, -0.5f, primerTramo));
                        GenerarTerreno(rio, new Vector3(origen + i + 1, -0.5f, primerTramo - 1));

                        i += 1;
                    }
                }

                int tercerTramo = Random.Range(30, 40);

                i = 0;
                while (i < tercerTramo)
                {
                    GenerarTerreno(rio, new Vector3(origen + segundoTramo, -0.5f, primerTramo + i));
                    GenerarTerreno(rio, new Vector3(origen + segundoTramo + 1, -0.5f, primerTramo + i));

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
                        GenerarTerreno(rio, new Vector3(origen + segundoTramo + i, -0.5f, primerTramo + tercerTramo));
                        GenerarTerreno(rio, new Vector3(origen + segundoTramo + i, -0.5f, primerTramo + tercerTramo - 1));

                        i -= 1;
                    }
                }
                else
                {
                    cuartoTramo = Random.Range(10, 20);
                    i = 0;
                    while (i < cuartoTramo)
                    {                      
                        if (i > 0)
                        {
                            GenerarTerreno(rio, new Vector3(origen + segundoTramo + i, -0.5f, primerTramo + tercerTramo));
                        }

                        GenerarTerreno(rio, new Vector3(origen + segundoTramo + i + 1, -0.5f, primerTramo + tercerTramo - 1));

                        i += 1;
                    }
                }

                i = 0;
                while ((primerTramo + tercerTramo + i) < 100)
                {
                    GenerarTerreno(rio, new Vector3(origen + segundoTramo + cuartoTramo, -0.5f, primerTramo + tercerTramo + i));
                    GenerarTerreno(rio, new Vector3(origen + segundoTramo + cuartoTramo + 1, -0.5f, primerTramo + tercerTramo + i));

                    i += 1;
                }
            }

            if (tierra != null)
            {
                int i = 0;
                while (i < tamaño)
                {
                    int j = 0;
                    while (j < tamaño)
                    {
                        Vector3 posicion = new Vector3(i, -0.5f, j);
                        GenerarTerreno(tierra, posicion);

                        j += 1;
                    }
                    i += 1;
                }
            }
        }     
    }

    private void GenerarTerreno(Terreno terreno, Vector3 posicion)
    {
        if (terrenos2[(int)posicion.x, (int)posicion.z] == null)
        {
            Terreno terreno2 = Instantiate(terreno, posicion, Quaternion.identity);
            terrenos2[(int)posicion.x, (int)posicion.z] = terreno2;
        }       
    }

    public bool ComprobarEdificable(Construccion edificio, Vector3 posicion)
    {
        return colisiones.Terreno(terrenos2, edificio, posicion);
    }

    public void PonerArboles(Guardado partida, Construir construir)
    {
        if (partida != null)
        {
            if (partida.edificiosID.Count > 0)
            {
                int i = 0;
                while (i < partida.edificiosID.Count)
                {
                    Vector3 posicion = new Vector3(partida.edificiosX[i], 0.5f, partida.edificiosZ[i]);

                    Construccion arbol = null;

                    foreach (Construccion arbol2 in arboles)
                    {
                        if (arbol2.id == partida.edificiosID[i])
                        {
                            arbol = arbol2;
                        }
                    }

                    if (arbol != null)
                    {
                        GenerarArbol(arbol, posicion, construir);
                    }

                    i += 1;
                }
            }
        }
        else
        {
            if (arboles != null)
            {
                if (arboles.Length > 0)
                {
                    int arbolesTramo1 = 250;

                    int i = 0;
                    while (i < arbolesTramo1)
                    {
                        Vector3 posicion = new Vector3(Random.Range(0, 30), 1, Random.Range(0, 99));
                        int j = Random.Range(0, arboles.Length);

                        if (arboles[j] != null)
                        {
                            GenerarArbol(arboles[j], posicion, construir);
                        }
                        i++;
                    }

                    int arbolesTramo2 = 30;
                    i = 0;
                    while (i < arbolesTramo2)
                    {
                        Vector3 posicion = new Vector3(Random.Range(31, 69), 1, Random.Range(0, 99));
                        int j = Random.Range(0, arboles.Length);

                        if (arboles[j] != null)
                        {
                            GenerarArbol(arboles[j], posicion, construir);
                        }
                        i++;
                    }

                    int arbolesTramo3 = 250;
                    i = 0;
                    while (i < arbolesTramo3)
                    {
                        Vector3 posicion = new Vector3(Random.Range(70, 99), 1, Random.Range(0, 99));
                        int j = Random.Range(0, arboles.Length);

                        if (arboles[j] != null)
                        {
                            GenerarArbol(arboles[j], posicion, construir);
                        }
                        i++;
                    }
                }
            }
        }       
    }

    public void GenerarArbol(Construccion arbol, Vector3 posicion, Construir construir)
    {
        bool añadir = true;

        if (ComprobarEdificable(arbol, posicion) == false)
        {
            añadir = false;
        }

        if (construir.ComprobarPosicion(arbol, posicion) != null)
        {
            añadir = false;
        }

        if (añadir == true)
        {
            construir.AñadirConstruccion(arbol, posicion, false);
        }
    }

    public Terreno[,] DevolverTerrenos()
    {
        return terrenos2;
    }

    public void GenerarNubes()
    {
        int direccion = 0;

        Vector3 posicion = new Vector3(-(tamaño / 4), 50, -(tamaño / 4));

        if ((direccion == 0) || (direccion == 1) || (direccion == 4))
        {
            posicion.z = Random.Range(-(tamaño / 2), (tamaño / 2));
        }
        else if ((direccion == 2) || (direccion == 3))
        {
            posicion.z = Random.Range(0, tamaño);
        }
        else if (direccion == 5)
        {
            posicion.x = tamaño;
            posicion.z = Random.Range(0, tamaño);
        }
        else if ((direccion == 6) || (direccion == 7))
        {
            posicion.x = Random.Range(0, tamaño);
            posicion.z = tamaño;
        }

        int nubeAzar = Random.Range(0, nubes.Length);
        Nube nube2 = Instantiate(nubes[nubeAzar], posicion, Quaternion.identity);
        nube2.direccion = direccion;
        nube2.id2 = contadorIdsNubes;
        nube2.topeEscenario = tamaño;

        //Material[] materiales = nube2.gameObject.GetComponent<MeshRenderer>().materials;

        //materiales[0].SetFloat("_Mode", 3);
        //materiales[0].SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
        //materiales[0].SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
        //materiales[0].SetInt("_ZWrite", 0);
        //materiales[0].DisableKeyword("_ALPHATEST_ON");
        //materiales[0].DisableKeyword("_ALPHABLEND_ON");
        //materiales[0].EnableKeyword("_ALPHAPREMULTIPLY_ON");
        //materiales[0].renderQueue = 3000;
        //materiales[0].color = new Color(1.0f, 1.0f, 1.0f, 0.5f);

        //materiales[0].DisableKeyword("_EMISSION");
        //materiales[0].globalIlluminationFlags = MaterialGlobalIlluminationFlags.EmissiveIsBlack;

        //nube2.gameObject.GetComponent<MeshRenderer>().materials = materiales;

        contadorIdsNubes += 1;
        //Debug.Log(contadorIdsNubes);
        nubesGeneradas.Add(nube2);
    }

    public void ArrancarPararNubes(int velocidad)
    {
        foreach (Nube nube in nubesGeneradas)
        {
            if (velocidad == 0)
            {
                nube.parada = true;
            }
            else
            {
                nube.parada = false;
            }
        }
    }
}