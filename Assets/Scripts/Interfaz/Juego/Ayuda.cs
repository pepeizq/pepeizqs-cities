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

                    AbrirPanel(ayuda1);

                    velocidad.VelocidadMarchas(0);
                }
                else
                {
                    CerrarPanel(ayuda1);
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

            CerrarPanel(ayuda1);

            AbrirPanel(ayuda2);
        }

        public void CerrarAyuda2()
        {
            sonidoBoton.Play();

            CerrarPanel(ayuda2);

            AbrirPanel(ayuda3);
        }

        public void CerrarAyuda3()
        {
            sonidoBoton.Play();

            CerrarPanel(ayuda3);

            AbrirPanel(ayuda4);
        }

        public void CerrarAyuda4()
        {
            sonidoBoton.Play();

            CerrarPanel(ayuda4);

            AbrirPanel(ayuda5);
        }

        public void CerrarAyuda5()
        {
            sonidoBoton.Play();

            CerrarPanel(ayuda5);

            velocidad.VelocidadMarchas(1);
        }

        public void AbrirAyuda6o7(int categoria)
        {
            if (PlayerPrefs.GetString("ayuda") == "true")
            {
                CerrarPanel(ayuda6);
                CerrarPanel(ayuda7);

                if (categoria != 1)
                {
                    AbrirPanel(ayuda6);
                }
                else
                {
                    AbrirPanel(ayuda7);
                }
            }
        }

        public void CerrarAyuda6o7(Panel ayuda)
        {
            sonidoBoton.Play();

            CerrarPanel(ayuda);
        }

        //-----------------------------------------------------

        private void AbrirPanel(Panel panel)
        {
            panel.gameObject.GetComponent<CanvasGroup>().alpha = 1;
            panel.gameObject.GetComponent<CanvasGroup>().interactable = true;
            panel.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
            panel.gameObject.SetActive(true);
        }

        private void CerrarPanel(Panel panel)
        {
            panel.gameObject.GetComponent<CanvasGroup>().alpha = 0;
            panel.gameObject.GetComponent<CanvasGroup>().interactable = false;
            panel.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
            panel.gameObject.SetActive(false);
        }
    }
}


