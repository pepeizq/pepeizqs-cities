using UnityEngine;

public static class Semaforos
{
    public static void CambiarLuces(Construccion[] edificios, int accion)
    {
        foreach (Construccion subedificio in edificios)
        {
            if (subedificio != null)
            {
                bool lucesCarretera = false;

                if (subedificio.categoria == 1)
                {
                    if (subedificio.id == 10)
                    {
                        lucesCarretera = true;
                    }
                    else if (subedificio.id == 11)
                    {
                        lucesCarretera = true;
                    }
                }

                if (lucesCarretera == true)
                {
                    Light[] luces = subedificio.GetComponentsInChildren<Light>();
                    Debug.Log(accion);
                    foreach (Light luz in luces)
                    {                     
                        if (accion == 0)
                        {
                            bool activarLuz = false;

                            if (luz.name.ToLower().Contains("luzrojo1"))
                            {
                                activarLuz = true;
                            }
                            else if (luz.name.ToLower().Contains("luzrojo3"))
                            {
                                activarLuz = true;
                            }

                            if (activarLuz == true)
                            {
                                Debug.Log(luz.name.ToLower());
                                luz.intensity = 1f;
                                luz.range = 1f;
                            }
                            else
                            {
                                luz.intensity = 0;
                                luz.range = 0;
                            }
                        }
                        else 
                        {
                            luz.intensity = 0;
                            luz.range = 0;
                        }
                    }
                }
            }
        }
    }
}
