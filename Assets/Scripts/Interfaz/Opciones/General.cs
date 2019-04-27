using UnityEngine;
using UnityEngine.UI;

namespace Interfaz.Opciones2
{
    public class General : MonoBehaviour
    {
        public AudioSource sonidoBoton;
        public AudioSource musicaFondo;

        public Idiomas idioma;

        public bool sonidoParar;

        public Panel panelVolumen;
        public Slider sliderVolumen;

        public Button botonSonido;
        public Sprite botonSonidoSiSprite;
        public Sprite botonSonidoNoSprite;

        public Toggle toggleAyuda;
        public Dropdown dpPantalla;

        public void CargarInicio()
        {
            if (PlayerPrefs.HasKey("idioma") == false)
            {
                idioma.CargarIdioma(idioma.ficheroIdiomas, "English");
                PlayerPrefs.SetString("idioma", "English");
            }
            else
            {
                idioma.CargarIdioma(idioma.ficheroIdiomas, PlayerPrefs.GetString("idioma"));
            }

            //-----------------------------------------------------------

            if (PlayerPrefs.HasKey("sonido") == false)
            {
                PlayerPrefs.SetString("sonido", "true");
                sonidoParar = false;
            }
            else
            {
                if (PlayerPrefs.GetString("sonido") == "true")
                {
                    sonidoParar = false;
                }
                else
                {
                    sonidoParar = true;
                }
            }

            //-----------------------------------------------------------

            if (PlayerPrefs.HasKey("volumen") == false)
            {
                PlayerPrefs.SetFloat("volumen", 0.7f);
            }

            sliderVolumen.value = PlayerPrefs.GetFloat("volumen");

            //-----------------------------------------------------------

            if (PlayerPrefs.HasKey("ayuda") == false)
            {
                PlayerPrefs.SetString("ayuda", "true");
                toggleAyuda.isOn = true;
            }
            else
            {
                if (PlayerPrefs.GetString("ayuda") == "true")
                {
                    toggleAyuda.isOn = true;
                }
                else
                {
                    toggleAyuda.isOn = false;
                }
            }

            //-----------------------------------------------------------

            if (PlayerPrefs.HasKey("pantalla") == false)
            {
                PlayerPrefs.SetInt("pantalla", 1);
            }

            dpPantalla.value = PlayerPrefs.GetInt("pantalla");

            //-----------------------------------------------------------
        }

        public void Sonido()
        {
            if (musicaFondo != null)
            {
                musicaFondo.loop = true;
                musicaFondo.Play();
            }

            if (sonidoParar == false)
            {
                AudioListener.pause = false;
                botonSonido.GetComponent<Image>().sprite = botonSonidoSiSprite;
                PlayerPrefs.SetString("sonido", "true");
                sonidoParar = true;
                panelVolumen.GetComponent<CanvasGroup>().interactable = true;
            }
            else
            {
                AudioListener.pause = true;
                botonSonido.GetComponent<Image>().sprite = botonSonidoNoSprite;
                PlayerPrefs.SetString("sonido", "false");
                sonidoParar = false;
                panelVolumen.GetComponent<CanvasGroup>().interactable = false;
            }
        }

        public void ActivarAyuda()
        {
            sonidoBoton.Play();

            if (toggleAyuda.isOn == true)
            {
                PlayerPrefs.SetString("ayuda", "true");
            }
            else
            {
                PlayerPrefs.SetString("ayuda", "false");
            }
        }

        public void ControlVolumenSonido(Slider slider)
        {
            PlayerPrefs.SetFloat("volumen", slider.value);
            AudioListener.volume = slider.value;
        }

        public void ControlPantalla(Dropdown dp)
        {
            PlayerPrefs.SetInt("pantalla", dp.value);
       
            if (dp.value == 0)
            {
                Screen.SetResolution(Screen.width, Screen.height, FullScreenMode.FullScreenWindow);
            }
            else if (dp.value == 1)
            {
                Screen.SetResolution(Screen.width, Screen.height, FullScreenMode.MaximizedWindow);
            }
            else if (dp.value == 2)
            {
                Screen.SetResolution(Screen.width, Screen.height, FullScreenMode.Windowed);
            }
        }
    }
}
