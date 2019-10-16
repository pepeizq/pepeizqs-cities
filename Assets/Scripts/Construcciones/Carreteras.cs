using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Construcciones
{
    public static class Carreteras
    {
        public static void Construir(List<Construccion2> carreteras, Ciudad ciudad, Construir construir, DiaNoche diaNoche, Construccion[] edificios, AudioSource sonidoBotonConstruir)
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
                        if (construir.ComprobarPosicion(subcarretera.edificio, subcarretera.posicion) == null)
                        {
                            construir.AñadirConstruccion(subcarretera.edificio, subcarretera.posicion, diaNoche.EstadoEncendidoLuces());
                        }
                        else
                        {
                            Construccion edificioEncontrado = construir.ComprobarPosicion(subcarretera.edificio, subcarretera.posicion);

                            if (edificioEncontrado.categoria == 0)
                            {
                                construir.QuitarEdificio(edificioEncontrado, subcarretera.posicion);
                                construir.AñadirConstruccion(subcarretera.edificio, subcarretera.posicion, diaNoche.EstadoEncendidoLuces());

                                ciudad.DepositoDinero(edificioEncontrado.coste / 2);
                            }

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
                                    construir.QuitarEdificio(edificioEncontrado, subcarretera.posicion);

                                    construir.AñadirConstruccion(subcarretera.edificio, subcarretera.posicion, diaNoche.EstadoEncendidoLuces());
                                }
                            }
                        }
                    }

                    ciudad.DepositoDinero(-coste);
                    ciudad.ActualizarUI(false);
                }
            }
        }

        public static void VistaPrevia(List<Construccion2> carreteras, Ciudad ciudad, Construccion carretera, Vector3 posicionCarretera,
                                        Construir construir, VistaPrevia vistaPrevia, Construccion[] edificios, bool mantenerEjeX, bool mantenerEjeZ,
                                        Panel panelCoste, Text mensajeCoste, CarreterasIDs ids, Escenario escenario)
        {
            int eje = 0;

            if (carreteras.Count == 0)
            {
                bool añadir = true;

                if (escenario.ComprobarEdificable(carretera, posicionCarretera) == false)
                {
                    añadir = false;
                }

                if (vistaPrevia.ComprobarPosicion(carretera, posicionCarretera) != null)
                {
                    añadir = false;
                }

                if (construir.ComprobarPosicion(carretera, posicionCarretera) != null)
                {
                    añadir = false;
                }

                if (añadir == true)
                {
                    carreteras.Add(new Construccion2(carretera, posicionCarretera));
                }         
            }
            else if (carreteras.Count > 0)
            {
                if (mantenerEjeX == true)
                {
                    if (((carreteras[0].posicion.z == posicionCarretera.z) && (carreteras[0].posicion.x < posicionCarretera.x)) || ((carreteras[0].posicion.z == posicionCarretera.z) && (carreteras[0].posicion.x > posicionCarretera.x)))
                    {
                        if (carretera.id == ids.recta)
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
                        if (carretera.id == ids.recta)
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

            int costeTotal = 0;
            foreach (Construccion2 subcarretera in carreteras)
            {
                if (escenario.ComprobarEdificable(subcarretera.edificio, subcarretera.posicion) == false)
                {
                    int rotacion = subcarretera.edificio.rotacionColocacion;
                    subcarretera.edificio = edificios[ids.puente];
                    subcarretera.edificio.rotacionColocacion = rotacion;
                }

                costeTotal = costeTotal + subcarretera.edificio.coste;

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

                carretera1 = BuscarCarreteras(carretera1, construir, vistaPrevia, carreteras, subcarretera.edificio, posicion1, eje, ids);
                carretera2 = BuscarCarreteras(carretera2, construir, vistaPrevia, carreteras, subcarretera.edificio, posicion2, eje, ids);
                carretera3 = BuscarCarreteras(carretera3, construir, vistaPrevia, carreteras, subcarretera.edificio, posicion3, eje, ids);

                if ((carretera1 == false) && (carretera2 == true) && (carretera3 == false))
                {
                    subcarretera.edificio = edificios[ids.curva];

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
                    subcarretera.edificio = edificios[ids.curva];

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
                    subcarretera.edificio = edificios[ids.cruce3];

                    if ((eje == 1) || (eje == 2))
                    {
                        subcarretera.edificio.rotacionColocacion = 0;
                    }
                    else if ((eje == 3) || (eje == 4))
                    {
                        subcarretera.edificio.rotacionColocacion = -270;
                    }
                }

                if ((carretera1 == true) && (carretera2 == false) && (carretera3 == true))
                {
                    subcarretera.edificio = edificios[ids.cruce3];

                    if ((eje == 1) || (eje == 2))
                    {
                        subcarretera.edificio.rotacionColocacion = -180;
                    }
                    else if ((eje == 3) || (eje == 4))
                    {
                        subcarretera.edificio.rotacionColocacion = -90;
                    }
                }

                if ((carretera1 == false) && (carretera2 == true) && (carretera3 == true))
                {
                    subcarretera.edificio = edificios[ids.cruce3];

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
                        subcarretera.edificio.rotacionColocacion = -180;
                    }
                    else if (eje == 4)
                    {
                        subcarretera.edificio.rotacionColocacion = 0;
                    }
                }

                if ((carretera1 == true) && (carretera2 == true) && (carretera3 == true))
                {
                    if ((eje == 1) || (eje == 2) || (eje == 3) || (eje == 4))
                    {
                        subcarretera.edificio = edificios[ids.cruce4];
                    }
                }

                if (vistaPrevia.ComprobarPosicion(subcarretera.edificio, subcarretera.posicion) == null)
                {
                    vistaPrevia.AñadirConstruccion(subcarretera.edificio, subcarretera.posicion);
                }
            }

            panelCoste.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            mensajeCoste.text = string.Format("-{0} €", costeTotal);
        }

        private static bool BuscarCarreteras(bool estado, Construir construir, VistaPrevia vistaPrevia, List<Construccion2> carreteras, Construccion carretera, Vector3 posicion, int eje, CarreterasIDs ids)
        {
            if (construir.ComprobarPosicion(carretera, posicion) != null)
            {
                Construccion carreteraEncontrada = construir.ComprobarPosicion(carretera, posicion);

                if (carreteraEncontrada.categoria == 1)
                {
                    if (carreteraEncontrada.id == ids.recta || carreteraEncontrada.id == ids.puente)
                    {
                        if ((eje == 1) || (eje == 2))
                        {
                            if ((carreteraEncontrada.rotacionColocacion == -180) || (carreteraEncontrada.rotacionColocacion == 0))
                            {
                                estado = true;
                            }
                        }
                        else if ((eje == 3) || (eje == 4))
                        {
                            if ((carreteraEncontrada.rotacionColocacion == -270) || (carreteraEncontrada.rotacionColocacion == -90))
                            {
                                estado = true;
                            }
                        }
                    }
                    else if (carreteraEncontrada.id == ids.cruce3)
                    {
                        estado = true;
                    }
                    else if (carreteraEncontrada.id == ids.cruce3)
                    {
                        estado = true;
                    }
                }
            }

            if (vistaPrevia.ComprobarPosicion(carretera, posicion) != null)
            {
                Construccion carreteraVistaPrevia = vistaPrevia.ComprobarPosicion(carretera, posicion);

                if (carreteraVistaPrevia.categoria == 1)
                {
                    if (carreteraVistaPrevia.id == ids.recta)
                    {
                        if ((eje == 1) || (eje == 2))
                        {
                            if ((carreteraVistaPrevia.rotacionColocacion == -180) || (carreteraVistaPrevia.rotacionColocacion == 0))
                            {
                                estado = true;
                            }
                        }
                        else if ((eje == 3) || (eje == 4))
                        {
                            if ((carreteraVistaPrevia.rotacionColocacion == -270) || (carreteraVistaPrevia.rotacionColocacion == -90))
                            {
                                estado = true;
                            }
                        }
                    }
                    else if (carreteraVistaPrevia.id == ids.cruce3)
                    {
                        estado = true;
                    }
                    else if (carreteraVistaPrevia.id == ids.cruce4)
                    {
                        estado = true;
                    }
                }
            }

            foreach (Construccion2 subcarretera in carreteras)
            {
                if (subcarretera.posicion == posicion)
                {
                    if (subcarretera.edificio.id == ids.recta)
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
                            if ((subcarretera.edificio.rotacionColocacion == -180) || (subcarretera.edificio.rotacionColocacion == 0))
                            {
                                estado = true;
                            }
                        }
                    }
                    else if (subcarretera.edificio.id == ids.cruce3)
                    {
                        estado = true;
                    }
                    else if (subcarretera.edificio.id == ids.cruce4)
                    {
                        estado = true;
                    }
                }
            }

            return estado;
        }
    }
}

