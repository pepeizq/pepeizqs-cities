using UnityEngine;
using UnityEngine.UI;

namespace Interfaz.Opciones2
{
    public class Teclado : MonoBehaviour
    {
        private int boton;
        private bool poderCambiar;
        public AudioSource sonidoBoton;

        public Camara camara;

        public Button botonMovimientoIzquierda;
        public Button botonMovimientoArriba;
        public Button botonMovimientoDerecha;
        public Button botonMovimientoAbajo;
        public Button botonRotacionIzquierda;
        public Button botonRotacionDerecha;

        public Text textoMovimientoIzquierda;
        public Text textoMovimientoArriba;
        public Text textoMovimientoDerecha;
        public Text textoMovimientoAbajo;
        public Text textoRotacionIzquierda;
        public Text textoRotacionDerecha;

        public Juego juego;
        public DiaNoche diaNoche;

        public Button botonMenuJuego;
        public Button botonArrancarParar;
        public Button botonRotacionEdificioIzquierda;
        public Button botonRotacionEdificioDerecha;
        public Button botonArrastrarConstruccion;

        public Text textoMenuJuego;
        public Text textoArrancarParar;
        public Text textoRotacionEdificioIzquierda;
        public Text textoRotacionEdificioDerecha;
        public Text textoArrastrarConstruccion;
        public Text textoOcultarInterfaz;

        public void CargarInicio()
        {
            if (PlayerPrefs.HasKey("tecladoMovimientoIzquierda") == false)
            {
                KeyCode tecla = KeyCode.A;
                PlayerPrefs.SetString("tecladoMovimientoIzquierda", tecla.ToString());
                textoMovimientoIzquierda.text = tecla.ToString();
            }
            else
            {
                textoMovimientoIzquierda.text = PlayerPrefs.GetString("tecladoMovimientoIzquierda");
            }

            camara.teclaMovimientoIzquierda = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoMovimientoIzquierda"));

            //-------------------------------------

            if (PlayerPrefs.HasKey("tecladoMovimientoArriba") == false)
            {
                KeyCode tecla = KeyCode.W;
                PlayerPrefs.SetString("tecladoMovimientoArriba", tecla.ToString());
                textoMovimientoArriba.text = tecla.ToString();
            }
            else
            {
                textoMovimientoArriba.text = PlayerPrefs.GetString("tecladoMovimientoArriba");
            }

            camara.teclaMovimientoArriba = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoMovimientoArriba"));

            //-------------------------------------

            if (PlayerPrefs.HasKey("tecladoMovimientoDerecha") == false)
            {
                KeyCode tecla = KeyCode.D;
                PlayerPrefs.SetString("tecladoMovimientoDerecha", tecla.ToString());
                textoMovimientoDerecha.text = tecla.ToString();
            }
            else
            {
                textoMovimientoDerecha.text = PlayerPrefs.GetString("tecladoMovimientoDerecha");
            }

            camara.teclaMovimientoDerecha = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoMovimientoDerecha"));

            //-------------------------------------

            if (PlayerPrefs.HasKey("tecladoMovimientoAbajo") == false)
            {
                KeyCode tecla = KeyCode.S;
                PlayerPrefs.SetString("tecladoMovimientoAbajo", tecla.ToString());
                textoMovimientoAbajo.text = tecla.ToString();
            }
            else
            {
                textoMovimientoAbajo.text = PlayerPrefs.GetString("tecladoMovimientoAbajo");
            }

            camara.teclaMovimientoAbajo = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoMovimientoAbajo"));

            //-------------------------------------

            if (PlayerPrefs.HasKey("tecladoRotacionIzquierda") == false)
            {
                KeyCode tecla = KeyCode.F1;
                PlayerPrefs.SetString("tecladoRotacionIzquierda", tecla.ToString());
                textoRotacionIzquierda.text = tecla.ToString();
            }
            else
            {
                textoRotacionIzquierda.text = PlayerPrefs.GetString("tecladoRotacionIzquierda");
            }

            camara.teclaRotacionIzquierda = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoRotacionIzquierda"));

            //-------------------------------------

            if (PlayerPrefs.HasKey("tecladoRotacionDerecha") == false)
            {
                KeyCode tecla = KeyCode.F2;
                PlayerPrefs.SetString("tecladoRotacionDerecha", tecla.ToString());
                textoRotacionDerecha.text = tecla.ToString();
            }
            else
            {
                textoRotacionDerecha.text = PlayerPrefs.GetString("tecladoRotacionDerecha");
            }

            camara.teclaRotacionDerecha = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoRotacionDerecha"));

            //-------------------------------------

            if (PlayerPrefs.HasKey("tecladoMenuJuego") == false)
            {
                KeyCode tecla = KeyCode.Escape;
                PlayerPrefs.SetString("tecladoMenuJuego", tecla.ToString());
                textoMenuJuego.text = tecla.ToString();
            }
            else
            {
                textoMenuJuego.text = PlayerPrefs.GetString("tecladoMenuJuego");
            }

            juego.teclaMenu = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoMenuJuego"));

            //-------------------------------------

            if (PlayerPrefs.HasKey("tecladoArrancarParar") == false)
            {
                KeyCode tecla = KeyCode.Space;
                PlayerPrefs.SetString("tecladoArrancarParar", tecla.ToString());
                textoArrancarParar.text = tecla.ToString();
            }
            else
            {
                textoArrancarParar.text = PlayerPrefs.GetString("tecladoArrancarParar");
            }

            diaNoche.teclaArrancarPararTiempo = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoArrancarParar"));

            //-------------------------------------

            if (PlayerPrefs.HasKey("tecladoRotacionEdificioIzquierda") == false)
            {
                KeyCode tecla = KeyCode.Q;
                PlayerPrefs.SetString("tecladoRotacionEdificioIzquierda", tecla.ToString());
                textoRotacionEdificioIzquierda.text = tecla.ToString();
            }
            else
            {
                textoRotacionEdificioIzquierda.text = PlayerPrefs.GetString("tecladoRotacionEdificioIzquierda");
            }

            juego.teclaRotacionEdificioIzquierda = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoRotacionEdificioIzquierda"));

            //-------------------------------------

            if (PlayerPrefs.HasKey("tecladoRotacionEdificioDerecha") == false)
            {
                KeyCode tecla = KeyCode.E;
                PlayerPrefs.SetString("tecladoRotacionEdificioDerecha", tecla.ToString());
                textoRotacionEdificioDerecha.text = tecla.ToString();
            }
            else
            {
                textoRotacionEdificioDerecha.text = PlayerPrefs.GetString("tecladoRotacionEdificioDerecha");
            }

            juego.teclaRotacionEdificioDerecha = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoRotacionEdificioDerecha"));

            //-------------------------------------

            if (PlayerPrefs.HasKey("tecladoArrastrarConstruccion") == false)
            {
                KeyCode tecla = KeyCode.LeftControl;
                PlayerPrefs.SetString("tecladoArrastrarConstruccion", tecla.ToString());
                textoArrastrarConstruccion.text = tecla.ToString();
            }
            else
            {
                textoArrastrarConstruccion.text = PlayerPrefs.GetString("tecladoArrastrarConstruccion");
            }

            juego.teclaArrastrarConstruccion = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoArrastrarConstruccion"));

            //-------------------------------------

            if (PlayerPrefs.HasKey("tecladoOcultarInterfaz") == false)
            {
                KeyCode tecla = KeyCode.F8;
                PlayerPrefs.SetString("tecladoOcultarInterfaz", tecla.ToString());
                textoOcultarInterfaz.text = tecla.ToString();
            }
            else
            {
                textoOcultarInterfaz.text = PlayerPrefs.GetString("tecladoOcultarInterfaz");
            }

            juego.teclaOcultarInterfaz = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoOcultarInterfaz"));
        }

        public void PulsarBoton(int botonPulsado)
        {
            sonidoBoton.Play();
            boton = botonPulsado;
            poderCambiar = true;

            if (boton == 0)
            {
                textoMovimientoIzquierda.text = null;
            }
            else if (boton == 1)
            {
                textoMovimientoArriba.text = null;
            }
            else if (boton == 2)
            {
                textoMovimientoDerecha.text = null;
            }
            else if (boton == 3)
            {
                textoMovimientoAbajo.text = null;
            }
            else if (boton == 4)
            {
                textoRotacionIzquierda.text = null;
            }
            else if (boton == 5)
            {
                textoRotacionDerecha.text = null;
            }
            else if (boton == 6)
            {
                textoMenuJuego.text = null;
            }
            else if (boton == 7)
            {
                textoRotacionEdificioIzquierda.text = null;
            }
            else if (boton == 8)
            {
                textoRotacionEdificioDerecha.text = null;
            }
            else if (boton == 9)
            {
                textoArrastrarConstruccion.text = null;
            }
            else if (boton == 10)
            {
                textoOcultarInterfaz.text = null;
            }
        }

        private void OnGUI()
        {           
            if (poderCambiar == true)
            {
                Event evento = Event.current;

                if (evento.isKey == true)
                {
                    KeyCode tecla = evento.keyCode;
                    poderCambiar = false;

                    if (boton == 0)
                    {
                        PlayerPrefs.SetString("tecladoMovimientoIzquierda", tecla.ToString());
                        textoMovimientoIzquierda.text = tecla.ToString();
                        camara.teclaMovimientoIzquierda = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoMovimientoIzquierda"));
                    }
                    else if (boton == 1)
                    {
                        PlayerPrefs.SetString("tecladoMovimientoArriba", tecla.ToString());
                        textoMovimientoArriba.text = tecla.ToString();
                        camara.teclaMovimientoArriba = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoMovimientoArriba"));
                    }
                    else if (boton == 2)
                    {
                        PlayerPrefs.SetString("tecladoMovimientoDerecha", tecla.ToString());
                        textoMovimientoDerecha.text = tecla.ToString();
                        camara.teclaMovimientoDerecha = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoMovimientoDerecha"));
                    }
                    else if (boton == 3)
                    {
                        PlayerPrefs.SetString("tecladoMovimientoAbajo", tecla.ToString());
                        textoMovimientoAbajo.text = tecla.ToString();
                        camara.teclaMovimientoAbajo = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoMovimientoAbajo"));
                    }
                    else if (boton == 4)
                    {
                        PlayerPrefs.SetString("tecladoRotacionIzquierda", tecla.ToString());
                        textoRotacionIzquierda.text = tecla.ToString();
                        camara.teclaRotacionIzquierda = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoRotacionIzquierda"));
                    }
                    else if (boton == 5)
                    {
                        PlayerPrefs.SetString("tecladoRotacionDerecha", tecla.ToString());
                        textoRotacionDerecha.text = tecla.ToString();
                        camara.teclaRotacionDerecha = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoRotacionDerecha"));
                    }
                    else if (boton == 6)
                    {
                        PlayerPrefs.SetString("tecladoMenuJuego", tecla.ToString());
                        textoMenuJuego.text = tecla.ToString();
                        juego.teclaMenu = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoMenuJuego"));
                    }
                    else if (boton == 7)
                    {
                        PlayerPrefs.SetString("tecladoRotacionEdificioIzquierda", tecla.ToString());
                        textoRotacionEdificioIzquierda.text = tecla.ToString();
                        juego.teclaRotacionEdificioIzquierda = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoRotacionEdificioIzquierda"));
                    }
                    else if (boton == 8)
                    {
                        PlayerPrefs.SetString("tecladoRotacionEdificioDerecha", tecla.ToString());
                        textoRotacionEdificioDerecha.text = tecla.ToString();
                        juego.teclaRotacionEdificioDerecha = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoRotacionEdificioDerecha"));
                    }
                    else if (boton == 9)
                    {
                        PlayerPrefs.SetString("tecladoArrastrarConstruccion", tecla.ToString());
                        textoArrastrarConstruccion.text = tecla.ToString();
                        juego.teclaArrastrarConstruccion = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoArrastrarConstruccion"));
                    }
                    else if (boton == 10)
                    {
                        PlayerPrefs.SetString("tecladoOcultarInterfaz", tecla.ToString());
                        textoOcultarInterfaz.text = tecla.ToString();
                        juego.teclaOcultarInterfaz = (KeyCode)System.Enum.Parse(typeof(KeyCode), PlayerPrefs.GetString("tecladoOcultarInterfaz"));
                    }
                }      
            }
        }
    }
}
