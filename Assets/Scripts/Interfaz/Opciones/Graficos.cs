using UnityEngine;
using UnityEngine.UI;

namespace Interfaz.Opciones2
{
    public class Graficos : MonoBehaviour
    {
        public Idiomas idioma;

        public Panel panelGraficosSombrasCalidad;

        public Toggle toggleSombras;

        public Dropdown dpSombras;
        public Dropdown dpTexturas;
        public Dropdown dpAntiAliasing;

        public void CargarInicio()
        {
            if (PlayerPrefs.HasKey("sombras") == false)
            {
                PlayerPrefs.SetInt("sombras", 1);
                toggleSombras.isOn = true;
            }
            else
            {
                if (PlayerPrefs.GetInt("sombras") == 0)
                {
                    toggleSombras.isOn = false;
                }
                else
                {
                    toggleSombras.isOn = true;
                }
            }

            if (toggleSombras.isOn == true)
            {
                QualitySettings.shadows = ShadowQuality.HardOnly;

                panelGraficosSombrasCalidad.gameObject.GetComponent<CanvasGroup>().alpha = 1;
                panelGraficosSombrasCalidad.gameObject.GetComponent<CanvasGroup>().interactable = true;
                panelGraficosSombrasCalidad.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
            }
            else
            {
                QualitySettings.shadows = ShadowQuality.Disable;

                panelGraficosSombrasCalidad.gameObject.GetComponent<CanvasGroup>().alpha = 0;
                panelGraficosSombrasCalidad.gameObject.GetComponent<CanvasGroup>().interactable = false;
                panelGraficosSombrasCalidad.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
            }

            //-----------------------------------------------------------

            idioma.TraduccionesDpSombras();

            if (PlayerPrefs.HasKey("sombrasCalidad") == false)
            {
                PlayerPrefs.SetInt("sombrasCalidad", 1);
            }

            dpSombras.value = PlayerPrefs.GetInt("sombrasCalidad");

            if (dpSombras.value == 0)
            {
                QualitySettings.shadowProjection = ShadowProjection.StableFit;
            }
            else if (dpSombras.value == 1)
            {
                QualitySettings.shadowProjection = ShadowProjection.CloseFit;
            }

            //-----------------------------------------------------------

            dpTexturas.options.Add(new Dropdown.OptionData() { text = "Full Res" });
            dpTexturas.options.Add(new Dropdown.OptionData() { text = "Half Res" });
            dpTexturas.options.Add(new Dropdown.OptionData() { text = "Quarter Res" });
            dpTexturas.options.Add(new Dropdown.OptionData() { text = "Eighth Res" });

            if (PlayerPrefs.HasKey("texturas") == false)
            {
                PlayerPrefs.SetInt("texturas", 0);
            }

            dpTexturas.value = PlayerPrefs.GetInt("texturas");

            QualitySettings.masterTextureLimit = dpTexturas.value;

            //-----------------------------------------------------------

            dpAntiAliasing.options.Add(new Dropdown.OptionData() { text = "Disasbled" });
            dpAntiAliasing.options.Add(new Dropdown.OptionData() { text = "2x" });
            dpAntiAliasing.options.Add(new Dropdown.OptionData() { text = "4x" });
            dpAntiAliasing.options.Add(new Dropdown.OptionData() { text = "8x" });

            if (PlayerPrefs.HasKey("antiAliasing") == false)
            {
                PlayerPrefs.SetInt("antiAliasing", 1);
            }

            dpAntiAliasing.value = PlayerPrefs.GetInt("antiAliasing");

            if (dpAntiAliasing.value == 0)
            {
                QualitySettings.antiAliasing = 0;
            }
            else if (dpAntiAliasing.value == 1)
            {
                QualitySettings.antiAliasing = 2;
            }
            else if (dpAntiAliasing.value == 2)
            {
                QualitySettings.antiAliasing = 4;
            }
            else if (dpAntiAliasing.value == 3)
            {
                QualitySettings.antiAliasing = 8;
            }
        }

        public void ControlSombras(Toggle toggle)
        {
            if (toggle.isOn == true)
            {
                PlayerPrefs.SetInt("sombras", 1);
                QualitySettings.shadows = ShadowQuality.HardOnly;

                panelGraficosSombrasCalidad.gameObject.GetComponent<CanvasGroup>().interactable = true;
                panelGraficosSombrasCalidad.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = true;
            }
            else
            {
                PlayerPrefs.SetInt("sombras", 0);
                QualitySettings.shadows = ShadowQuality.Disable;

                panelGraficosSombrasCalidad.gameObject.GetComponent<CanvasGroup>().interactable = false;
                panelGraficosSombrasCalidad.gameObject.GetComponent<CanvasGroup>().blocksRaycasts = false;
            }
        }

        public void ControlSombrasCalidad(Dropdown dp)
        {
            PlayerPrefs.SetInt("sombrasCalidad", dp.value);

            if (dp.value == 0)
            {
                QualitySettings.shadowProjection = ShadowProjection.StableFit;
            }
            else if (dp.value == 1)
            {
                QualitySettings.shadowProjection = ShadowProjection.CloseFit;
            }
        }

        public void ControlTexturas(Dropdown dp)
        {
            PlayerPrefs.SetInt("texturas", dp.value);
            QualitySettings.masterTextureLimit = dp.value;
        }

        public void ControlAntiAliasing(Dropdown dp)
        {
            PlayerPrefs.SetInt("antiAliasing", dp.value);

            if (dp.value == 0)
            {
                QualitySettings.antiAliasing = 0;
            }
            else if (dp.value == 1)
            {
                QualitySettings.antiAliasing = 2;
            }
            else if (dp.value == 2)
            {
                QualitySettings.antiAliasing = 4;
            }
            else if (dp.value == 3)
            {
                QualitySettings.antiAliasing = 8;
            }
        }
    }
}
