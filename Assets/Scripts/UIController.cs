using UnityEngine;
using UnityEngine.UI;

public class UIController : MonoBehaviour {

    [SerializeField]
    private Text diaTexto;

    [SerializeField]
    private Text ciudadTexto;

    private Ciudad ciudad;

	void Start () {
        ciudad = GetComponent<Ciudad>();
	}

    public void ActualizarCiudadInfo()
    {
        ciudadTexto.text = string.Format("Jobs {0}/{1}\nCash {2}€ (+{6}€)\nPopulation {3}/{4}\nFood {5}", 
            ciudad.TrabajosActual, ciudad.TrabajosTecho, ciudad.Dinero, (int)ciudad.PoblacionActual, (int)ciudad.PoblacionTope, (int)ciudad.Comida, ciudad.TrabajosActual * 2);
    }
	
	public void ActualizarDiaContador()
    {
        diaTexto.text = string.Format("Day {0}",ciudad.Dia);
    }
}
