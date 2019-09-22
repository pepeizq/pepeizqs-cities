using System.Collections.Generic;
using UnityEngine;

namespace Construcciones
{
    public class Construir : MonoBehaviour
    {
        private int contadorIdsConstrucciones;

        [HideInInspector]
        public Construccion[,] edificios = new Construccion[100, 100];

        public Construccion edificioVacio;

        private void Start()
        {
            contadorIdsConstrucciones = 0;
        }

        public void AñadirConstruccion(Construccion edificio, Vector3 posicion, bool encender)
        {
            edificio.GetComponent<Renderer>().receiveShadows = true;
            edificio.GetComponent<Renderer>().shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;

            posicion = Funciones.PosicionEdificio(edificio, posicion);
            ComprobarLucesEdificio(encender, edificio);

            Construccion edificioConstruido = Instantiate(edificio, posicion, Quaternion.identity);
            edificioConstruido.transform.Rotate(Vector3.up, edificio.rotacionAdicional + edificio.rotacionColocacion, Space.World);
            edificioConstruido.posicionX = (int)posicion.x;
            edificioConstruido.posicionZ = (int)posicion.z;
            edificioConstruido.id2 = contadorIdsConstrucciones;
            contadorIdsConstrucciones += 1;

            edificioVacio.id2 = edificioConstruido.id2;

            edificios[(int)posicion.x, (int)posicion.z] = edificioConstruido;
            edificios = Funciones.RellenarEdificioVacio(edificios, edificio, posicion, edificioVacio);
        }

        public Construccion ComprobarPosicion(Construccion edificio, Vector3 posicion)
        {
            return Funciones.ComprobarPosicion(edificios, edificio, posicion);
        }

        public void QuitarEdificio(Construccion edificio, Vector3 posicion)
        {
            edificios = Funciones.QuitarEdificios(edificios, edificio, posicion);
        }

        public void QuitarTodosEdificios()
        {
            for (int x = 0; x < edificios.GetLength(0); x++)
            {
                for (int z = 0; z < edificios.GetLength(1); z++)
                {
                    if (edificios[x, z] != null)
                    {
                        Object.DestroyImmediate(edificios[x, z].gameObject, true);
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
            bool modificar = false;
            Material material = edificio.gameObject.GetComponent<Renderer>().sharedMaterial;

            if (encender == true)
            {
                if (edificio.categoria == 1)
                {
                    bool lucesCarretera = true;

                    if (edificio.categoria == 1)
                    {
                        if (edificio.id == 10)
                        {
                            lucesCarretera = false;
                        }
                        else if (edificio.id == 11)
                        {
                            lucesCarretera = false;
                        }
                    }

                    if (lucesCarretera == true)
                    {
                        Light[] luces = edificio.GetComponentsInChildren<Light>();

                        foreach (Light luz in luces)
                        {
                            luz.intensity = edificio.luzIntesidad;
                            luz.range = edificio.luzRango;
                        }
                    }
                }

                if (edificio.categoria == 2)
                {
                    modificar = true;
                }
                else if (edificio.categoria == 4)
                {
                    modificar = true;
                }
                else if (edificio.categoria == 5)
                {
                    modificar = true;
                }

                if (modificar == true)
                {
                    material.EnableKeyword("_EMISSION");
                    material.globalIlluminationFlags = MaterialGlobalIlluminationFlags.RealtimeEmissive;
                }
            }
            else
            {
                if (edificio.categoria == 1)
                {
                    bool lucesCarretera = true;

                    if (edificio.categoria == 1)
                    {
                        if (edificio.id == 10)
                        {
                            lucesCarretera = false;
                        }
                        else if (edificio.id == 11)
                        {
                            lucesCarretera = false;
                        }
                    }

                    if (lucesCarretera == true)
                    {
                        Light[] luces = edificio.GetComponentsInChildren<Light>();

                        foreach (Light luz in luces)
                        {
                            luz.intensity = 0;
                            luz.range = 0;
                        }
                    }
                }

                if (edificio.categoria == 2)
                {
                    modificar = true;
                }
                else if (edificio.categoria == 4)
                {
                    modificar = true;
                }
                else if (edificio.categoria == 5)
                {
                    modificar = true;
                }

                if (modificar == true)
                {
                    material.DisableKeyword("_EMISSION");
                    material.globalIlluminationFlags = MaterialGlobalIlluminationFlags.EmissiveIsBlack;
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
    }
}
