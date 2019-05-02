using System;
using NUnit.Framework;
using UnityEngine.UDP;

public class UDPRuntimeTests
{
    [Test]
    public void PlayModeTestInitializationPasses()
    {
        AppInfo appInfo = new AppInfo();
        StoreService.Initialize(new InitListener(), appInfo);
    }

    [Test]
    public void PlayModeTestPurchaseFails()
    {
        Assert.That(
            () =>
            {
                StoreService.Purchase("test.product", "test.developerPayload", new PurchaseListener());
            }, Throws.TypeOf<NullReferenceException>());
    }

    [Test]
    public void PlayModeTestQueryInventoryFails()
    {
        Assert.That(() => { StoreService.QueryInventory(new PurchaseListener()); }, Throws.TypeOf<NullReferenceException>());
    }

    [Test]
    public void PlayModeTestConsumePurchaseFails()
    {
        Assert.That(() => { StoreService.ConsumePurchase(new PurchaseInfo(), new PurchaseListener()); },
            Throws.TypeOf<NullReferenceException>());
    }

    [Test]
    public void PlayModeTestStoreNamePass()
    {
        Assert.AreEqual("UDP", StoreService.StoreName);
    }

    class PurchaseListener : IPurchaseListener
    {
        public void OnPurchase(PurchaseInfo purchaseInfo)
        {
            throw new System.NotImplementedException();
        }

        public void OnPurchaseFailed(string message, PurchaseInfo purchaseInfo)
        {
            throw new System.NotImplementedException();
        }

        public void OnPurchaseRepeated(string productId)
        {
            throw new System.NotImplementedException();
        }

        public void OnPurchaseConsume(PurchaseInfo purchaseInfo)
        {
            throw new System.NotImplementedException();
        }

        public void OnPurchaseConsumeFailed(string message, PurchaseInfo purchaseInfo)
        {
            throw new System.NotImplementedException();
        }

        public void OnQueryInventory(Inventory inventory)
        {
            throw new System.NotImplementedException();
        }

        public void OnQueryInventoryFailed(string message)
        {
            throw new System.NotImplementedException();
        }
    }

    class InitListener : IInitListener
    {
        public void OnInitialized(UserInfo userInfo)
        {
            Assert.Pass();
        }

        public void OnInitializeFailed(string message)
        {
            Assert.Fail();
        }
    }
}