using UnityEngine;

public class Colocar : MonoBehaviour {

    private Construccion[,] edificios = new Construccion[100, 100];

	public void AñadirConstruccion(Construccion edificio, Vector3 posicion)
    {
        edificios[(int)posicion.x, (int)posicion.z] = Instantiate(edificio, posicion, Quaternion.identity);
    }

    public Construccion ComprobarConstruccionesPosicion(Vector3 posicion)
    {
        return edificios[(int)posicion.x, (int)posicion.z];
    }

    public void QuitarEdificio(Vector3 posicion)
    {
        Destroy(edificios[(int)posicion.x, (int)posicion.z].gameObject);
        edificios[(int)posicion.x, (int)posicion.z] = null;
    }

    public Vector3 RedondearGridPosicion(Vector3 posicion)
    {
        return new Vector3(Mathf.Round(posicion.x), .5f, Mathf.Round(posicion.z));
    }
}
