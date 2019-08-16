using UnityEngine;
using System;
using System.Collections.Generic;
using System.IO;
using System.Text.RegularExpressions;

public class Captura : MonoBehaviour
{
#pragma warning disable 0649

    private Camera camara;
    private int capa;

#pragma warning restore 0649

    public Vector3 defectoPosicionOffset = new Vector3(0, 0, 1);
    public Vector3 defectoRotacion = new Vector3(345.8529f, 313.8297f, 14.28433f);
    public Vector3 defectoEscala = new Vector3(1, 1, 1);

    private Captura()
    {

    }

    public static Captura TomarCaptura(string capa, string nombre = "Captura Camara")
    {
        return TomarCaptura(LayerMask.NameToLayer(capa), nombre);
    }

    public static Captura TomarCaptura(int capa = 5, string nombre = "Captura Camara")
    {
        if (capa < 0 || capa > 31)
            throw new ArgumentOutOfRangeException("layer", "layer argument must specify a valid layer between 0 and 31");

        GameObject objeto = new GameObject(nombre);

        Camera camara = objeto.AddComponent<Camera>();
        camara.cullingMask = 1 << capa;
        camara.orthographic = true;
        camara.orthographicSize = 1;
        camara.clearFlags = CameraClearFlags.SolidColor;
        camara.backgroundColor = Color.clear;
        camara.nearClipPlane = 0.1f;
        camara.enabled = false;

        Captura capturaCamara = objeto.AddComponent<Captura>();
        capturaCamara.camara = camara;
        capturaCamara.capa = capa;

        return capturaCamara;
    }

    #region PNG guardado

    private static string LimpiarFicheroNombre(string nombre)
    {
        string invalidosChars = Regex.Escape(new string(Path.GetInvalidFileNameChars()));
        string invalidosStrings = string.Format(@"([{0}]*\.+$)|([{0}]+)", invalidosChars);

        return Regex.Replace(nombre, invalidosStrings, "_");
    }

    public static FileInfo GuardarPNG(byte[] bytes, string nombreFichero = "", string directorio = "")
    {
        directorio = directorio != "" ? Directory.CreateDirectory(directorio).FullName : Directory.CreateDirectory(Path.Combine(Application.dataPath, "../Capturas")).FullName;
        nombreFichero = nombreFichero != "" ? LimpiarFicheroNombre(nombreFichero) + ".png" : DateTime.Now.ToString("yyyy-MM-dd-HH-mm-ss-ffff") + ".png";

        string ficheroDirectorio = Path.Combine(directorio, nombreFichero);
     
        File.WriteAllBytes(ficheroDirectorio, bytes);

        return new FileInfo(ficheroDirectorio);
    }

    public static FileInfo GuardarPNG(Texture2D textura, string nombreFichero = "", string directorio = "")
    {
        return GuardarPNG(textura.EncodeToPNG(), nombreFichero, directorio);
    }

    #endregion

    #region Objeto preparación

    private struct ObjetoCaptura
    {
        private GameObject objeto;
        private Vector3 posicion;
        private Quaternion rotacion;
        private Vector3 escala;
        private Dictionary<GameObject, int> capas;

        public ObjetoCaptura(GameObject objeto)
        {
            this.objeto = objeto;
            this.posicion = objeto.transform.position;
            this.rotacion = objeto.transform.rotation;
            this.escala = objeto.transform.localScale;

            this.capas = new Dictionary<GameObject, int>();
            foreach (Transform t in objeto.GetComponentsInChildren<Transform>(true))
            {
                this.capas.Add(t.gameObject, t.gameObject.layer);
            }
        }

        public void Restaurar()
        {
            this.objeto.transform.position = this.posicion;
            this.objeto.transform.rotation = this.rotacion;
            this.objeto.transform.localScale = this.escala;

            foreach (KeyValuePair<GameObject, int> entrada in this.capas)
            {
                entrada.Key.layer = entrada.Value;
            }
        }
    }

    private void EstablecerCapas(GameObject objeto)
    {
        foreach (Transform transform in objeto.GetComponentsInChildren<Transform>(true))
            transform.gameObject.layer = capa;
    }

    private ObjetoCaptura PrepararObjeto(GameObject objeto, Vector3 posicionOffset, Quaternion rotacion, Vector3 escala)
    {
        ObjetoCaptura oc = new ObjetoCaptura(objeto);

        objeto.transform.position = transform.position + posicionOffset;
        objeto.transform.rotation = rotacion;
        objeto.transform.localScale = escala;
        EstablecerCapas(objeto);

        return oc;
    }

    private GameObject PrepararPrefab(GameObject prefab, Vector3 posicionOffset, Quaternion rotacion, Vector3 escala)
    {
        GameObject objeto = GameObject.Instantiate(prefab, transform.position + posicionOffset, rotacion) as GameObject;
        objeto.transform.localScale = escala;
        //objeto.transform.Rotate(Vector3.up, -90, Space.Self);
        EstablecerCapas(objeto);

        return objeto;
    }
    #endregion

    #region TomarCapturaObjeto

    public Texture2D TomarCapturaObjeto(GameObject objeto, int ancho = 128, int alto = 128)
    {
        return TomarCapturaObjeto(objeto, Color.clear, defectoPosicionOffset, Quaternion.Euler(defectoRotacion), defectoEscala, ancho, alto);
    }

    public Texture2D TomarCapturaObjeto(GameObject objeto, Color fondoColor, int ancho = 128, int alto = 128)
    {
        return TomarCapturaObjeto(objeto, fondoColor, defectoPosicionOffset, Quaternion.Euler(defectoRotacion), defectoEscala, ancho, alto);
    }

    public Texture2D TomarCapturaObjeto(GameObject objeto, Vector3 posicionOffset, Quaternion rotacion, Vector3 escala, int ancho = 128, int alto = 128)
    {
        return TomarCapturaObjeto(objeto, Color.clear, posicionOffset, rotacion, escala, ancho, alto);
    }

    public Texture2D TomarCapturaObjeto(GameObject objeto, Color fondoColor, Vector3 posicionOffset, Quaternion rotacion, Vector3 escala, int ancho = 128, int alto = 128)
    {
        if (objeto == null)
            throw new ArgumentNullException("gameObject");
        else if (objeto.scene.name == null)
            throw new ArgumentException("gameObject parameter must be an instantiated GameObject! If you want to use a prefab directly, use TakePrefabSnapshot instead.", "gameObject");

        ObjetoCaptura estadoPrevio = PrepararObjeto(objeto, posicionOffset, rotacion, escala);

        Texture2D captura = GenerarCaptura(fondoColor, ancho, alto);

        estadoPrevio.Restaurar();

        return captura;
    }
    #endregion

    #region GenerarCapturaPrefab

    public Texture2D GenerarCapturaPrefab(GameObject prefab, int ancho = 128, int alto = 128)
    {
        return GenerarCapturaPrefab(prefab, Color.clear, defectoPosicionOffset, Quaternion.Euler(defectoRotacion), defectoEscala, ancho, alto);
    }

    public Texture2D GenerarCapturaPrefab(GameObject prefab, Color fondoColor, int ancho = 128, int alto = 128)
    {
        return GenerarCapturaPrefab(prefab, fondoColor, defectoPosicionOffset, Quaternion.Euler(defectoRotacion), defectoEscala, ancho, alto);
    }

    public Texture2D GenerarCapturaPrefab(GameObject prefab, Vector3 posicionOffset, Quaternion rotacion, Vector3 escala, int ancho = 128, int alto = 128)
    {
        return GenerarCapturaPrefab(prefab, Color.clear, posicionOffset, rotacion, escala, ancho, alto);
    }

    public Texture2D GenerarCapturaPrefab(GameObject prefab, Color fondoColor, Vector3 posicionOffset, Quaternion rotacion, Vector3 escala, int ancho = 128, int alto = 128)
    {
        if (prefab == null)
            throw new ArgumentNullException("prefab");
        else if (prefab.scene.name != null)
            throw new ArgumentException("prefab parameter must be a prefab! If you want to use an instance, use TakeObjectSnapshot instead.", "prefab");

        GameObject instancia = PrepararPrefab(prefab, posicionOffset, rotacion, escala);
        Texture2D captura = GenerarCaptura(fondoColor, ancho, alto);
        DestroyImmediate(instancia);

        return captura;
    }

    #endregion

    private Texture2D GenerarCaptura(Color fondoColor, int ancho, int alto)
    {
        camara.backgroundColor = fondoColor;
        camara.targetTexture = RenderTexture.GetTemporary(ancho, alto, 24);
        camara.Render();

        RenderTexture estadoPrevio = RenderTexture.active;
        RenderTexture.active = camara.targetTexture;

        Texture2D textura = new Texture2D(camara.targetTexture.width, camara.targetTexture.height, TextureFormat.ARGB32, false);
        textura.ReadPixels(new Rect(0, 0, camara.targetTexture.width, camara.targetTexture.height), 0, 0);
        textura.Apply(false);

        RenderTexture.active = estadoPrevio;

        camara.targetTexture = null;
        RenderTexture.ReleaseTemporary(camara.targetTexture);

        return textura;
    }

    public static void Generar(GameObject objeto)
    {
        Captura captura = Captura.TomarCaptura(16);
        captura.defectoEscala = new Vector3(1f, 1f, 1f);
        captura.defectoPosicionOffset = new Vector3(0, 0, 20f);

        objeto.gameObject.transform.position = new Vector3(0, 0, 0);

        Material material = objeto.gameObject.GetComponent<Renderer>().sharedMaterial;
        material.DisableKeyword("_EMISSION");
        material.globalIlluminationFlags = MaterialGlobalIlluminationFlags.EmissiveIsBlack;

        Texture2D textura = captura.GenerarCapturaPrefab(objeto, 512, 512);
        Captura.GuardarPNG(textura);
    }
}
