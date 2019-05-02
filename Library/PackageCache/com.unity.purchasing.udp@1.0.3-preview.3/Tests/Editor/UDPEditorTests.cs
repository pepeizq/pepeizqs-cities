using UnityEditor;
using NUnit.Framework;
using UnityEngine.UDP;

public class UDPEditorTests
{
    [Test]
    public void CannotGetAppStoreSettings()
    {
        var appStoreSettings =
            (AppStoreSettings) AssetDatabase.LoadAssetAtPath(AppStoreSettings.appStoreSettingsAssetPath,
                typeof(AppStoreSettings));

        Assert.AreEqual(null, appStoreSettings);
    }
}