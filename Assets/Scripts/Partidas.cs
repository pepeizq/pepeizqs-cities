using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;

public class Partidas : MonoBehaviour
{
    public bool ComprobarPartida(string nombre)
    {
        bool existe = false;

        if (File.Exists(Application.persistentDataPath + "/" + nombre + ".save"))
        {
            BinaryFormatter bf = new BinaryFormatter();
            FileStream fichero = File.Open(Application.persistentDataPath + "/" + nombre + ".save", FileMode.Open);
            Guardado guardado = (Guardado)bf.Deserialize(fichero);
            fichero.Close();

            if (guardado != null)
            {
                existe = true;
            }
        }

        return existe;
    }

    public Guardado CargarPartida(string nombre)
    {
        Guardado partida = null;

        if (File.Exists(Application.persistentDataPath + "/" + nombre + ".save"))
        {
            BinaryFormatter bf = new BinaryFormatter();
            FileStream fichero = File.Open(Application.persistentDataPath + "/" + nombre + ".save", FileMode.Open);
            partida = (Guardado)bf.Deserialize(fichero);
            fichero.Close();
        }

        return partida;
    }

    public List<Guardado> ListadoPartidas()
    {
        List<Guardado> partidas = new List<Guardado>();

        DirectoryInfo carpeta = new DirectoryInfo(Application.persistentDataPath);
        FileInfo[] ficheros = carpeta.GetFiles();
     
        foreach (FileInfo fichero in ficheros)
        {
            if (fichero.Name.Contains(".save"))
            {
                BinaryFormatter bf = new BinaryFormatter();
                FileStream fichero2 = File.Open(Application.persistentDataPath + "/" + fichero.Name, FileMode.Open);
                partidas.Add((Guardado)bf.Deserialize(fichero2));
                fichero2.Close();
            }
        }

        return partidas;
    }

    public void BorrarPartida(int id)
    {
        DirectoryInfo carpeta = new DirectoryInfo(Application.persistentDataPath);
        FileInfo[] ficheros = carpeta.GetFiles();

        string nombre = id.ToString();

        if (File.Exists(Application.persistentDataPath + "/" + nombre + ".save"))
        {
            File.Delete(Application.persistentDataPath + "/" + nombre + ".save");
        }
    }

    public void BorrarPartidasAntiguas()
    {
        DirectoryInfo carpeta = new DirectoryInfo(Application.persistentDataPath);
        FileInfo[] ficheros = carpeta.GetFiles();

        foreach (FileInfo fichero in ficheros)
        {
            if (fichero.Name.Contains(".save"))
            {
                DateTime fecha = fichero.LastWriteTime;

                if (fecha.Year == 2019)
                {
                    File.Delete(Application.persistentDataPath + "/" + fichero.Name);
                }              
            }
        }
    }
}
