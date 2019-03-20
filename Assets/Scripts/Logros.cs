public static class Logros
{
    public static void Steam(string id)
    {
        if (SteamManager.Initialized)
        {
            Steamworks.SteamUserStats.SetAchievement(id);
            Steamworks.SteamUserStats.StoreStats();
        }           
    }
}
