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
                                     Colocar colocar, ColocarPrevio colocarPrevio, Construccion[] edificios, bool mantenerEjeX, bool mantenerEjeZ)
    {
        int eje = 0;

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
                        eje = 1;
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
                        eje = 2;
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
                        eje = 3;
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
                        eje = 4;
                    }

                    mantenerEjeX = false;
                }
            }
        }

        foreach (Construccion2 subcarretera in carreteras)
        {
            bool carretera1 = false;
            Vector3 posicion1 = subcarretera.posicion;

            bool carretera2 = false;
            Vector3 posicion2 = subcarretera.posicion;

            bool carretera3 = false;
            Vector3 posicion3 = subcarretera.posicion;

            if (eje == 1)
            {
                posicion1.x = posicion1.x + 1;
                posicion2.z = posicion2.z + 1;
                posicion3.z = posicion3.z - 1;
            }
            else if (eje == 2)
            {
                posicion1.x = posicion1.x - 1;
                posicion2.z = posicion2.z + 1;
                posicion3.z = posicion3.z - 1;
            }
            else if (eje == 3)
            {
                posicion1.z = posicion1.z + 1;
                posicion2.x = posicion2.x + 1;
                posicion3.x = posicion3.x - 1;
            }
            else if (eje == 4)
            {
                posicion1.z = posicion1.z - 1;
                posicion2.x = posicion2.x + 1;
                posicion3.x = posicion3.x - 1;
            }

            carretera1 = BuscarCarretera(carretera1, colocar, colocarPrevio, carreteras, subcarretera.edificio, posicion1, eje);
            carretera2 = BuscarCarretera(carretera2, colocar, colocarPrevio, carreteras, subcarretera.edificio, posicion2, eje);
            carretera3 = BuscarCarretera(carretera3, colocar, colocarPrevio, carreteras, subcarretera.edificio, posicion3, eje);

            if ((carretera1 == true) && (carretera2 == false) && (carretera3 == false))
            {
          
            }

            if ((carretera1 == false) && (carretera2 == true) && (carretera3 == false))
            {
                subcarretera.edificio = edificios[39];

                if (eje == 1)
                {
                    subcarretera.edificio.rotacionColocacion = 0;
                }
                else if (eje == 2)
                {
                    subcarretera.edificio.rotacionColocacion = -270;
                }
                else if (eje == 3)
                {
                    subcarretera.edificio.rotacionColocacion = -180;
                }
                else if (eje == 4)
                {
                    subcarretera.edificio.rotacionColocacion = -270;
                }
            }

            if ((carretera1 == false) && (carretera2 == false) && (carretera3 == true))
            {
                subcarretera.edificio = edificios[39];
                  
                if (eje == 1)
                {
                    subcarretera.edificio.rotacionColocacion = -90;
                }
                else if (eje == 2)
                {
                    subcarretera.edificio.rotacionColocacion = -180;
                }
                else if (eje == 3)
                {
                    subcarretera.edificio.rotacionColocacion = -90;
                }
                else if (eje == 4)
                {
                    subcarretera.edificio.rotacionColocacion = 0;
                }
            }

            if ((carretera1 == true) && (carretera2 == true) && (carretera3 == false))
            {
                subcarretera.edificio = edificios[10];

                if ((eje == 1) || (eje == 2))
                {
                    subcarretera.edificio.rotacionColocacion = 0;
                }
                else if (eje == 3)
                {

                }
                else if (eje == 4)
                {

                }
            }

            if ((carretera1 == true) && (carretera2 == false) && (carretera3 == true))
            {
                subcarretera.edificio = edificios[10];

                if ((eje == 1) || (eje == 2))
                {
                    subcarretera.edificio.rotacionColocacion = -180;
                }
                else if (eje == 3)
                {

                }
                else if (eje == 4)
                {

                }
            }

            if ((carretera1 == false) && (carretera2 == true) && (carretera3 == true))
            {
                subcarretera.edificio = edificios[10];

                if (eje == 1)
                {
                    subcarretera.edificio.rotacionColocacion = -90;
                }
                else if (eje == 2)
                {
                    subcarretera.edificio.rotacionColocacion = -270;
                }
                else if (eje == 3)
                {

                }
                else if (eje == 4)
                {

                }
            }

            if ((carretera1 == true) && (carretera2 == true) && (carretera3 == true))
            {
                if ((eje == 1) || (eje == 2) || (eje == 3) || (eje == 4))
                {
                    subcarretera.edificio = edificios[11];
                }               
            }
       
            if (colocarPrevio.ComprobarConstruccionesPosicion(subcarretera.edificio, subcarretera.posicion) == null)
            {
                colocarPrevio.AñadirConstruccion(subcarretera.edificio, subcarretera.posicion);
            }
        }
    }

    private static bool BuscarCarretera(bool estado, Colocar colocar, ColocarPrevio colocarPrevio, List<Construccion2> carreteras, Construccion carretera, Vector3 posicion, int eje)
    {
        if (colocar.ComprobarConstruccionesPosicion(carretera, posicion) != null)
        {
            Construccion edificioEncontrado = colocar.ComprobarConstruccionesPosicion(carretera, posicion);

            if (edificioEncontrado.categoria == 1)
            {
                if (edificioEncontrado.id == 6)
                {
                    if ((eje == 1) || (eje == 2))
                    {
                        if ((edificioEncontrado.rotacionColocacion == -180) || (edificioEncontrado.rotacionColocacion == 0))
                        {
                            estado = true;
                        }
                    }
                    else if ((eje == 3) || (eje == 4))
                    {
                        if ((edificioEncontrado.rotacionColocacion == -270) || (edificioEncontrado.rotacionColocacion == -90))
                        {
                            estado = true;
                        }
                    }
                }
                else if (edificioEncontrado.id == 10)
                {
                    if (eje == 1)
                    {
                        if ((edificioEncontrado.rotacionColocacion == -180) || (edificioEncontrado.rotacionColocacion == -90) || (edificioEncontrado.rotacionColocacion == 0))
                        {
                            estado = true;
                        }
                    }
                    else if (eje == 2)
                    {
                        if ((edificioEncontrado.rotacionColocacion == -270) || (edificioEncontrado.rotacionColocacion == -90) || (edificioEncontrado.rotacionColocacion == 0))
                        {
                            estado = true;
                        }
                    }
                    else if (eje == 3)
                    {
                        if ((edificioEncontrado.rotacionColocacion == -270) || (edificioEncontrado.rotacionColocacion == -90) || (edificioEncontrado.rotacionColocacion == 0))
                        {
                            estado = true;
                        }
                    }
                    else if (eje == 4)
                    {

                    }
                }
                else if (edificioEncontrado.id == 11)
                {
                    estado = true;
                }
            }
        }

        if (colocarPrevio.ComprobarConstruccionesPosicion(carretera, posicion) != null)
        {
            Construccion edificioEncontradoPrevio = colocarPrevio.ComprobarConstruccionesPosicion(carretera, posicion);

            if (edificioEncontradoPrevio.categoria == 1)
            {
                if (edificioEncontradoPrevio.id == 6)
                {
                    if ((eje == 1) || (eje == 2))
                    {
                        if ((edificioEncontradoPrevio.rotacionColocacion == -180) || (edificioEncontradoPrevio.rotacionColocacion == 0))
                        {
                            estado = true;
                        }
                    }
                    else if ((eje == 3) || (eje == 4))
                    {
                        if ((edificioEncontradoPrevio.rotacionColocacion == -270) || (edificioEncontradoPrevio.rotacionColocacion == -90))
                        {
                            estado = true;
                        }
                    }
                }
                else if (edificioEncontradoPrevio.id == 10)
                {
                    if (eje == 1)
                    {
                        if ((edificioEncontradoPrevio.rotacionColocacion == -180) || (edificioEncontradoPrevio.rotacionColocacion == -90) || (edificioEncontradoPrevio.rotacionColocacion == 0))
                        {
                            estado = true;
                        }
                    }
                    else if (eje == 2)
                    {
                        if ((edificioEncontradoPrevio.rotacionColocacion == -270) || (edificioEncontradoPrevio.rotacionColocacion == -90) || (edificioEncontradoPrevio.rotacionColocacion == 0))
                        {
                            estado = true;
                        }
                    }
                    else if (eje == 3)
                    {
                        if ((edificioEncontradoPrevio.rotacionColocacion == -270) || (edificioEncontradoPrevio.rotacionColocacion == -90) || (edificioEncontradoPrevio.rotacionColocacion == 0))
                        {
                            estado = true;
                        }
                    }
                    else if (eje == 4)
                    {

                    }
                }
                else if (edificioEncontradoPrevio.id == 11)
                {
                    estado = true;
                }
            }
        }

        foreach (Construccion2 subcarretera in carreteras)
        {
            if (subcarretera.posicion == posicion)
            {
                if (subcarretera.edificio.id == 6)
                {
                    if ((eje == 1) || (eje == 2))
                    {
                        if ((subcarretera.edificio.rotacionColocacion == -270) || (subcarretera.edificio.rotacionColocacion == -90))
                        {
                            estado = true;
                        }
                    }
                    else if ((eje == 3) || (eje == 4))
                    {
                        if ((subcarretera.edificio.rotacionColocacion == -270) || (subcarretera.edificio.rotacionColocacion == -90))
                        {
                            estado = true;
                        }
                    }
                }
                else if (subcarretera.edificio.id == 10)
                {
                    if (eje == 1)
                    {
                        if ((subcarretera.edificio.rotacionColocacion == -180) || (subcarretera.edificio.rotacionColocacion == -90) || (subcarretera.edificio.rotacionColocacion == 0))
                        {
                            estado = true;
                        }
                    }
                    else if (eje == 2)
                    {
                        if ((subcarretera.edificio.rotacionColocacion == -270) || (subcarretera.edificio.rotacionColocacion == -90) || (subcarretera.edificio.rotacionColocacion == 0))
                        {
                            estado = true;
                        }
                    }
                    else if (eje == 3)
                    {
                        if ((subcarretera.edificio.rotacionColocacion == -270) || (subcarretera.edificio.rotacionColocacion == -90) || (subcarretera.edificio.rotacionColocacion == 0))
                        {
                            estado = true;
                        }
                    }
                    else if (eje == 4)
                    {

                    }
                }
                else if (subcarretera.edificio.id == 11)
                {
                    estado = true;
                }
            }
        }

        return estado;
    }
}
