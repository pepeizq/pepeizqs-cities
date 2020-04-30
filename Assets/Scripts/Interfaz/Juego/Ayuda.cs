using UnityEngine;
using UnityEngine.UI;

namespace Interfaz.Juego2
{
    public class Ayuda : MonoBehaviour
    {
        public Idiomas idioma;

        public Camara camara;
        public Juego juego;

        public AudioSource sonidoBoton;

        [SerializeField]
        private Velocidad velocidad = null;

        public Panel ayuda1;
        public Text ayuda1Tecla1;
        public Text ayuda1Tecla2;
        public Text ayuda1Tecla3;
        public Text ayuda1Tecla4;

        public Panel ayuda2;

        public Panel ayuda3;
        public Text ayuda3Tecla1;

        public Panel ayuda4;
        public Text ayuda4Tecla1;
        public Text ayuda4Tecla2;

        public Panel ayuda5;

        public Panel ayuda6;
        public Text ayuda6Tecla1;
        public Text ayuda6Tecla2;

        public Panel ayuda7;
        public Text ayuda7Tecla1;

        public void Cargar(bool mostrar)
        {
            if (mostrar == true)
            {
                if (PlayerPrefs.GetString("ayuda") == "true")
                {
                    CargarTeclas();

                    Objetos.Mostrar(ayuda1.gameObject);

                    velocidad.VelocidadMarchas(0);
                }
                else
                {
                    Objetos.Ocultar(ayuda1.gameObject);
                }
            }
        }

        public void CargarTeclas()
        {
            ayuda1Tecla1.text = camara.teclaMovimientoIzquierda.ToString();
            ayuda1Tecla2.text = camara.teclaMovimientoArriba.ToString();
            ayuda1Tecla3.text = camara.teclaMovimientoDerecha.ToString();
            ayuda1Tecla4.text = camara.teclaMovimientoAbajo.ToString();

            ayuda3Tecla1.text = velocidad.teclaArrancarPararTiempo.ToString();

            ayuda4Tecla1.text = camara.teclaRotacionIzquierda.ToString();
            ayuda4Tecla2.text = camara.teclaRotacionDerecha.ToString();

            ayuda6Tecla1.text = juego.teclaRotacionEdificioIzquierda.ToString();
            ayuda6Tecla2.text = juego.teclaRotacionEdificioDerecha.ToString();

            ayuda7Tecla1.text = juego.teclaArrastrarConstruccion.ToString();
        }

        public void CerrarAyuda1()
        {
            sonidoBoton.Play();

            Objetos.Ocultar(ayuda1.gameObject);
            Objetos.Mostrar(ayuda2.gameObject);
        }

        public void CerrarAyuda2()
        {
            sonidoBoton.Play();

            Objetos.Ocultar(ayuda2.gameObject);
            Objetos.Mostrar(ayuda3.gameObject);
        }

        public void CerrarAyuda3()
        {
            sonidoBoton.Play();

            Objetos.Ocultar(ayuda3.gameObject);
            Objetos.Mostrar(ayuda4.gameObject);
        }

        public void CerrarAyuda4()
        {
            sonidoBoton.Play();

            Objetos.Ocultar(ayuda4.gameObject);
            Objetos.Mostrar(ayuda5.gameObject);
        }

        public void CerrarAyuda5()
        {
            sonidoBoton.Play();

            Objetos.Ocultar(ayuda5.gameObject);

            velocidad.VelocidadMarchas(1);
        }

        public void AbrirAyuda6o7(int categoria)
        {
            if (PlayerPrefs.GetString("ayuda") == "true")
            {
                Objetos.Ocultar(ayuda6.gameObject);
                Objetos.Ocultar(ayuda7.gameObject);

                if (categoria != 1)
                {
                    Objetos.Mostrar(ayuda6.gameObject);
                }
                else
                {
                    Objetos.Mostrar(ayuda7.gameObject);
                }
            }
        }

        public void CerrarAyuda6o7(Panel ayuda)
        {
            sonidoBoton.Play();

            Objetos.Ocultar(ayuda.gameObject);
        }        
    }
}


