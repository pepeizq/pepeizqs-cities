using UnityEngine;
using UnityEngine.UI;

public class Ayuda : MonoBehaviour
{
    public Idiomas idioma;

    public AudioSource sonidoBoton;

    [SerializeField]
    private DiaNoche diaNoche;

    public Panel ayuda1;
    public Panel ayuda2;
    public Panel ayuda3;
    public Panel ayuda4;
    public Panel ayuda5;

    public void Cargar(bool mostrar)
    {
        if (mostrar == true)
        {
            if (PlayerPrefs.GetString("ayuda") == "true")
            {
                ayuda1.GetComponent<CanvasGroup>().alpha = 1;
                ayuda1.GetComponent<CanvasGroup>().interactable = true;
                ayuda1.GetComponent<CanvasGroup>().blocksRaycasts = true;
                ayuda1.gameObject.SetActive(true);

                diaNoche.ArrancarParar();
            }
            else
            {
                ayuda1.gameObject.SetActive(false);
            }
        }
    }

    public void EstadoCajas(bool estado)
    {
        ayuda1.gameObject.SetActive(estado);
        ayuda2.gameObject.SetActive(estado);
        ayuda3.gameObject.SetActive(estado);
        ayuda4.gameObject.SetActive(estado);
        ayuda5.gameObject.SetActive(estado);
    }

    public void CerrarAyuda1()
    {
        sonidoBoton.Play();

        ayuda1.GetComponent<CanvasGroup>().alpha = 0;
        ayuda1.GetComponent<CanvasGroup>().interactable = false;
        ayuda1.GetComponent<CanvasGroup>().blocksRaycasts = false;
        ayuda1.gameObject.SetActive(false);

        ayuda2.GetComponent<CanvasGroup>().alpha = 1;
        ayuda2.GetComponent<CanvasGroup>().interactable = true;
        ayuda2.GetComponent<CanvasGroup>().blocksRaycasts = true;
        ayuda2.gameObject.SetActive(true);
    }

    public void CerrarAyuda2()
    {
        sonidoBoton.Play();

        ayuda2.GetComponent<CanvasGroup>().alpha = 0;
        ayuda2.GetComponent<CanvasGroup>().interactable = false;
        ayuda2.GetComponent<CanvasGroup>().blocksRaycasts = false;
        ayuda2.gameObject.SetActive(false);

        ayuda3.GetComponent<CanvasGroup>().alpha = 1;
        ayuda3.GetComponent<CanvasGroup>().interactable = true;
        ayuda3.GetComponent<CanvasGroup>().blocksRaycasts = true;
        ayuda3.gameObject.SetActive(true);
    }

    public void CerrarAyuda3()
    {
        sonidoBoton.Play();

        ayuda3.GetComponent<CanvasGroup>().alpha = 0;
        ayuda3.GetComponent<CanvasGroup>().interactable = false;
        ayuda3.GetComponent<CanvasGroup>().blocksRaycasts = false;
        ayuda3.gameObject.SetActive(false);

        ayuda4.GetComponent<CanvasGroup>().alpha = 1;
        ayuda4.GetComponent<CanvasGroup>().interactable = true;
        ayuda4.GetComponent<CanvasGroup>().blocksRaycasts = true;
        ayuda4.gameObject.SetActive(true);
    }

    public void CerrarAyuda4()
    {
        sonidoBoton.Play();

        ayuda4.GetComponent<CanvasGroup>().alpha = 0;
        ayuda4.GetComponent<CanvasGroup>().interactable = false;
        ayuda4.GetComponent<CanvasGroup>().blocksRaycasts = false;
        ayuda4.gameObject.SetActive(false);

        ayuda5.GetComponent<CanvasGroup>().alpha = 1;
        ayuda5.GetComponent<CanvasGroup>().interactable = true;
        ayuda5.GetComponent<CanvasGroup>().blocksRaycasts = true;
        ayuda5.gameObject.SetActive(true);
    }

    public void CerrarAyuda5()
    {
        sonidoBoton.Play();

        ayuda5.GetComponent<CanvasGroup>().alpha = 0;
        ayuda5.GetComponent<CanvasGroup>().interactable = false;
        ayuda5.GetComponent<CanvasGroup>().blocksRaycasts = false;
        ayuda5.gameObject.SetActive(false);

        if (diaNoche.parar == true)
        {
            diaNoche.ArrancarParar();
        }
    }
}
