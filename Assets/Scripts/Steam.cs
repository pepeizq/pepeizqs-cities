using UnityEngine;

public static class Steam
{
    public static void Logros(string id)
    {
        bool steamIniciado = Steamworks.SteamAPI.IsSteamRunning();

        if (steamIniciado == true)
        {
            if (SteamManager.Initialized)
            {
                Steamworks.SteamUserStats.SetAchievement(id);
                Steamworks.SteamUserStats.StoreStats();
            }
        }         
    }

    public static void AbrirWeb(string url)
    {
        bool steamIniciado = Steamworks.SteamAPI.IsSteamRunning();

        if (steamIniciado == true)
        {
            if (SteamManager.Initialized)
            {
                Steamworks.SteamFriends.ActivateGameOverlayToWebPage(url);
            }
            else
            {
                Application.OpenURL(url);
            }
        }     
        else
        {
            Application.OpenURL(url);
        }
    }
}
