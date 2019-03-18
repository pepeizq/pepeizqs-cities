public static class Logros
{
    public static void Steam(string id)
    {
        Steamworks.SteamUserStats.SetAchievement(id);
        Steamworks.SteamUserStats.StoreStats();
    }
}
