using UnityEngine;
using UnityEngine.UI;

namespace Interfaz
{
    public class Teclado : MonoBehaviour
    {
        private int boton;
        private bool poderCambiar;

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
        }

        public void PulsarBoton(int botonPulsado)
        {
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
                }      
            }
        }
    }
}
