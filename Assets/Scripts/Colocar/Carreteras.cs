using System.Collections.Generic;
using UnityEngine;

public static class Carreteras
{
    public static void Colocar(List<Construccion2> carreteras, Ciudad ciudad, Colocar colocar, DiaNoche diaNoche, Construccion[] edificios, AudioSource sonidoBotonConstruir)
    {
        if (carreteras.Count > 0)
        {
            int coste = 0;

            foreach (Construccion2 subcarretera in carreteras)
            {
                coste = coste + subcarretera.edificio.coste;
            }

            if (ciudad.Dinero >= coste)
            {
                sonidoBotonConstruir.Play();

                foreach (Construccion2 subcarretera in carreteras)
                {
                    if (colocar.ComprobarConstruccionesPosicion(subcarretera.edificio, subcarretera.posicion) == null)
                    {
                        colocar.AñadirConstruccion(subcarretera.edificio, subcarretera.posicion, diaNoche.EstadoEncendidoLuces());
                    }
                    else
                    {
                        Construccion edificioEncontrado = colocar.ComprobarConstruccionesPosicion(subcarretera.edificio, subcarretera.posicion);

                        if (edificioEncontrado.categoria == 1)
                        {
                            bool eliminar = false;

                            if (edificioEncontrado.id != subcarretera.edificio.id)
                            {
                                eliminar = true;
                            }
                            else
                            {
                                if (edificioEncontrado.rotacionColocacion != subcarretera.edificio.rotacionColocacion)
                                {
                                    eliminar = true;
                                }
                            }

                            if (eliminar == true)
                            {
                                if (edificioEncontrado.categoria != 0)
                                {
                                    ciudad.DepositoDinero(edificioEncontrado.coste / 3);
                                }

                                ciudad.ActualizarUI(false);
                                colocar.QuitarEdificio(edificioEncontrado, subcarretera.posicion);

                                if (subcarretera.edificio.id == 6)
                                {
                                    subcarretera.edificio = edificios[11];
                                }

                                colocar.AñadirConstruccion(subcarretera.edificio, subcarretera.posicion, diaNoche.EstadoEncendidoLuces());
                            }
                        }
                    }
                }

                ciudad.DepositoDinero(-coste);
                ciudad.ActualizarUI(false);
            }
        }
    }

    public static void ColocarPrevio(List<Construccion2> carreteras, Ciudad ciudad, Construccion carretera, Vector3 posicionCarretera,
                                     Colocar colocar, ColocarPrevio colocarPrevio, bool mantenerEjeX, bool mantenerEjeZ)
    {
        if (carreteras.Count == 0)
        {
            if (colocar.ComprobarConstruccionesPosicion(carretera, posicionCarretera) == null)
            {
                if (colocarPrevio.ComprobarConstruccionesPosicion(carretera, posicionCarretera) == null)
                {
                    carreteras.Add(new Construccion2(carretera, posicionCarretera));
                }
            }
        }
        else if (carreteras.Count > 0)
        {
            if (mantenerEjeX == true)
            {
                if (((carreteras[0].posicion.z == posicionCarretera.z) && (carreteras[0].posicion.x < posicionCarretera.x)) || ((carreteras[0].posicion.z == posicionCarretera.z) && (carreteras[0].posicion.x > posicionCarretera.x)))
                {
                    if (carretera.id == 6)
                    {
                        carretera.rotacionColocacion = -270;
                    }

                    float mantenerOrigenX = carreteras[0].posicion.x;
                    float mantenerDestinoX = posicionCarretera.x;
                    Vector3 nuevaPosicion = carreteras[0].posicion;

                    if (mantenerDestinoX > mantenerOrigenX)
                    {
                        while (nuevaPosicion.x <= mantenerDestinoX)
                        {
                            bool añadir = true;
                            int coste = 0;

                            foreach (Construccion2 subcarretera in carreteras)
                            {
                                coste = coste + subcarretera.edificio.coste;

                                if (subcarretera.posicion == nuevaPosicion)
                                {
                                    añadir = false;
                                }
                            }

                            if (ciudad.Dinero < coste)
                            {
                                añadir = false;
                            }

                            if (añadir == true)
                            {
                                carreteras.Add(new Construccion2(carretera, nuevaPosicion));
                            }

                            nuevaPosicion.x = nuevaPosicion.x + 1;
                        }
                    }
                    else
                    {
                        while (nuevaPosicion.x >= mantenerDestinoX)
                        {
                            bool añadir = true;

                            foreach (Construccion2 edificio in carreteras)
                            {
                                if (edificio.posicion == nuevaPosicion)
                                {
                                    añadir = false;
                                }
                            }

                            if (añadir == true)
                            {
                                carreteras.Add(new Construccion2(carretera, nuevaPosicion));
                            }

                            nuevaPosicion.x = nuevaPosicion.x - 1;
                        }
                    }

                    mantenerEjeZ = false;
                }
            }

            if (mantenerEjeZ == true)
            {
                if (((carreteras[0].posicion.x == posicionCarretera.x) && (carreteras[0].posicion.z < posicionCarretera.z)) || ((carreteras[0].posicion.x == posicionCarretera.x) && (carreteras[0].posicion.z > posicionCarretera.z)))
                {
                    if (carretera.id == 6)
                    {
                        carretera.rotacionColocacion = 0;
                    }

                    float mantenerOrigenZ = carreteras[0].posicion.z;
                    float mantenerDestinoZ = posicionCarretera.z;
                    Vector3 nuevaPosicion = carreteras[0].posicion;

                    if (mantenerDestinoZ > mantenerOrigenZ)
                    {
                        while (nuevaPosicion.z <= mantenerDestinoZ)
                        {
                            bool añadir = true;

                            foreach (Construccion2 subcarretera in carreteras)
                            {
                                if (subcarretera.posicion == nuevaPosicion)
                                {
                                    añadir = false;
                                }
                            }

                            if (añadir == true)
                            {
                                carreteras.Add(new Construccion2(carretera, nuevaPosicion));
                            }

                            nuevaPosicion.z = nuevaPosicion.z + 1;
                        }
                    }
                    else
                    {
                        while (nuevaPosicion.z >= mantenerDestinoZ)
                        {
                            bool añadir = true;

                            foreach (Construccion2 subcarretera in carreteras)
                            {
                                if (subcarretera.posicion == nuevaPosicion)
                                {
                                    añadir = false;
                                }
                            }

                            if (añadir == true)
                            {
                                carreteras.Add(new Construccion2(carretera, nuevaPosicion));
                            }

                            nuevaPosicion.z = nuevaPosicion.z - 1;
                        }
                    }

                    mantenerEjeX = false;
                }
            }
        }

        foreach (Construccion2 subcarretera in carreteras)
        {
            if (colocarPrevio.ComprobarConstruccionesPosicion(subcarretera.edificio, subcarretera.posicion) == null)
            {
                colocarPrevio.AñadirConstruccion(subcarretera.edificio, subcarretera.posicion);
            }
        }
    }
}
