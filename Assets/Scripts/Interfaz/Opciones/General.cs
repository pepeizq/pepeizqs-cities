using UnityEngine;
using UnityEngine.UI;

namespace Interfaz.Opciones2
{
    public class General : MonoBehaviour
    {
        public Idiomas idioma;

        public Sonido sonido;

        public Slider sliderVolumenEfectos;
        public Slider sliderVolumenMusica;

        public Dropdown dpPantalla;
        public Dropdown dpResoluciones;

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

            if (PlayerPrefs.HasKey("volumenEfectos") == false)
            {
                PlayerPrefs.SetFloat("volumenEfectos", 0.7f);
            }

            sliderVolumenEfectos.value = PlayerPrefs.GetFloat("volumenEfectos");

            if (PlayerPrefs.HasKey("volumenMusica") == false)
            {
                PlayerPrefs.SetFloat("volumenMusica", 0);
            }

            sliderVolumenMusica.value = PlayerPrefs.GetFloat("volumenMusica");

            //-----------------------------------------------------------

            idioma.TraduccionesDpPantalla();

            if (PlayerPrefs.HasKey("pantalla") == false)
            {
                PlayerPrefs.SetInt("pantalla", 1);
            }

            dpPantalla.value = PlayerPrefs.GetInt("pantalla");

            //-----------------------------------------------------------

            Resolution[] resoluciones = Screen.resolutions;

            foreach (Resolution resolucion in resoluciones)
            {
                dpResoluciones.options.Add(new Dropdown.OptionData() { text = string.Format("{0}x{1}", resolucion.width, resolucion.height) });
            }

            if (PlayerPrefs.HasKey("resolucion") == false)
            {
                PlayerPrefs.SetInt("resolucion", dpResoluciones.options.Count - 1);
            }

            dpResoluciones.value = PlayerPrefs.GetInt("resolucion");
        }

        public void ControlVolumenSonidoEfectos(Slider slider)
        {
            sonido.EfectosVolumen(slider.value);
        }

        public void ControlVolumenSonidoMusica(Slider slider)
        {
            sonido.MusicaVolumen(slider.value);
        }

        public void ControlPantalla(Dropdown dp)
        {
            PlayerPrefs.SetInt("pantalla", dp.value);

            Resolution[] resoluciones = Screen.resolutions;

            int resolucion = PlayerPrefs.GetInt("resolucion");

            if (dp.value == 0)
            {
                Screen.SetResolution(resoluciones[resolucion].width, resoluciones[resolucion].height, FullScreenMode.FullScreenWindow);
            }
            else if (dp.value == 1)
            {
                Screen.SetResolution(resoluciones[resolucion].width, resoluciones[resolucion].height, FullScreenMode.MaximizedWindow);
            }
            else if (dp.value == 2)
            {
                Screen.SetResolution(resoluciones[resolucion].width, resoluciones[resolucion].height, FullScreenMode.Windowed);
            }
        }

        public void ControlResolucion(Dropdown dp)
        {
            PlayerPrefs.SetInt("resolucion", dp.value);

            Resolution[] resoluciones = Screen.resolutions;

            int modo = PlayerPrefs.GetInt("pantalla");

            if (modo == 0)
            {
                Screen.SetResolution(resoluciones[dp.value].width, resoluciones[dp.value].height, FullScreenMode.FullScreenWindow);
            }
            else if (modo == 1)
            {
                Screen.SetResolution(resoluciones[dp.value].width, resoluciones[dp.value].height, FullScreenMode.MaximizedWindow);
            }
            else if (modo == 2)
            {
                Screen.SetResolution(resoluciones[dp.value].width, resoluciones[dp.value].height, FullScreenMode.Windowed);
            }
        }
    }
}
