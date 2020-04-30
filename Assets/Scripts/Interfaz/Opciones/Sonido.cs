using UnityEngine;

namespace Interfaz.Opciones2
{
    public class Sonido : MonoBehaviour
    {
        public AudioSource botonRatonClick;
        public AudioSource botonRatonEntra;

        public AudioSource botonConstruir;
        public AudioSource botonDemoler;

        public AudioSource musicaFondo;

        public void RatonClick()
        {
            float volumen = PlayerPrefs.GetFloat("volumenEfectos");

            if (volumen > 0)
            {
                botonRatonClick.Play();
            }         
        }

        public void RatonEntra()
        {
            float volumen = PlayerPrefs.GetFloat("volumenEfectos");

            if (volumen > 0)
            {
                botonRatonEntra.Play();
            }         
        }

        public void Construir()
        {
            float volumen = PlayerPrefs.GetFloat("volumenEfectos");

            if (volumen > 0)
            {
                botonConstruir.Play();
            }
        }

        public void Demoler()
        {
            float volumen = PlayerPrefs.GetFloat("volumenEfectos");

            if (volumen > 0)
            {
                botonDemoler.Play();
            }
        }

        public void EfectosVolumen(float volumen)
        {
            botonRatonClick.volume = volumen;
            botonRatonEntra.volume = volumen;

            PlayerPrefs.SetFloat("volumenEfectos", volumen);
        }

        public void MusicaFondo()
        {
            float volumen = PlayerPrefs.GetFloat("volumenMusica");

            if (volumen > 0.0f)
            {
                musicaFondo.loop = true;
                musicaFondo.Play();
            }
        }

        public void MusicaVolumen(float volumen)
        {           
            musicaFondo.volume = volumen;
            PlayerPrefs.SetFloat("volumenMusica", volumen);

            if (volumen > 0.0f)
            {
                musicaFondo.loop = true;
                musicaFondo.Play();
            }
        }
    }
}
