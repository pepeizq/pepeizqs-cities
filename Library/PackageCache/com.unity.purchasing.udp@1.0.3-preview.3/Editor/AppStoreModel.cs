using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;

namespace UnityEngine.UDP.Editor
{
    public class UnityClientInfo
    {
        public string ClientId { get; set; }
        public string ClientKey { get; set; }
        public string ClientRSAPublicKey { get; set; }
        public string ClientSecret { get; set; }
    }

    public class RolePermission
    {
        public bool owner { get; set; }
        public bool manager { get; set; }
        public bool user { get; set; }

        public RolePermission()
        {
            owner = false;
            manager = false;
            user = false;
        }
    }

    public class TestAccount
    {
        public string email;
        public string password;
        public string playerId;
        public bool isUpdate = true;

        public TestAccount()
        {
            this.isUpdate = false;
            this.email = "";
            this.password = "";
            this.playerId = "";
        }

        public string Validate()
        {
            if (string.IsNullOrEmpty(email))
            {
                return "Email cannot be null";
            }
            else if (string.IsNullOrEmpty(password) || password == "Password")
            {
                return "Password cannot be null";
            }
            else if (password.Length < 6)
            {
                return "The min length of password is 6";
            }
            else if (!CheckEmailAddr())
            {
                return "Email is not valid";
            }

            return "";
        }

        private bool CheckEmailAddr()
        {
            string pattern =
                            @"^((([a-z]|\d|[!#\$%&'\*\+\-\/=\?\^_`{\|}~]|[\u00A0-\uD7FF\uF900-\uFDCF\uFDF0-\uFFEF])+(\.([a-z]|\d|[!#\$%&'\*\+\-\/=\?\^_`{\|}~]|[\u00A0-\uD7FF\uF900-\uFDCF\uFDF0-\uFFEF])+)*)|((\x22)((((\x20|\x09)*(\x0d\x0a))?(\x20|\x09)+)?(([\x01-\x08\x0b\x0c\x0e-\x1f\x7f]|\x21|[\x23-\x5b]|[\x5d-\x7e]|[\u00A0-\uD7FF\uF900-\uFDCF\uFDF0-\uFFEF])|(\\([\x01-\x09\x0b\x0c\x0d-\x7f]|[\u00A0-\uD7FF\uF900-\uFDCF\uFDF0-\uFFEF]))))*(((\x20|\x09)*(\x0d\x0a))?(\x20|\x09)+)?(\x22)))@((([a-z]|\d|[\u00A0-\uD7FF\uF900-\uFDCF\uFDF0-\uFFEF])|(([a-z]|\d|[\u00A0-\uD7FF\uF900-\uFDCF\uFDF0-\uFFEF])([a-z]|\d|-|\.|_|~|[\u00A0-\uD7FF\uF900-\uFDCF\uFDF0-\uFFEF])*([a-z]|\d|[\u00A0-\uD7FF\uF900-\uFDCF\uFDF0-\uFFEF])))\.)+(([a-z]|[\u00A0-\uD7FF\uF900-\uFDCF\uFDF0-\uFFEF])|(([a-z]|[\u00A0-\uD7FF\uF900-\uFDCF\uFDF0-\uFFEF])([a-z]|\d|-|\.|_|~|[\u00A0-\uD7FF\uF900-\uFDCF\uFDF0-\uFFEF])*([a-z]|[\u00A0-\uD7FF\uF900-\uFDCF\uFDF0-\uFFEF])))\.?$";
            return new Regex(pattern, RegexOptions.IgnoreCase).IsMatch(email);
        }
    }

    [Serializable]
    public class UnityClient
    {
        public string client_id;
        public string client_secret;
        public string client_name;
        public List<string> scopes;
        public UnityChannel channel;
        public string rev;
        public string owner;
        public string ownerType;

        public UnityClient()
        {
            this.scopes = new List<string>();
        }
    }

    [Serializable]
    public class UnityChannel
    {
        public string projectGuid;
        public ThirdPartySetting[] thirdPartySettings;
        public string callbackUrl;
        public string bundleIdentifier = "UDP";
    }

    [Serializable]
    public class ThirdPartySetting
    {
        public string appId;
        public string appType;
        public string appKey;
        public string appSecret;
        public ExtraProperties extraProperties;
    }

    [Serializable]
    public class ExtraProperties
    {
        public string pubKey;
        public string performIapCallbacks;
    }

    [Serializable]
    public class UnityClientResponseWrapper : GeneralResponse
    {
        public UnityClientResponse[] array;
    }

    [Serializable]
    public class UnityClientResponse : GeneralResponse
    {
        public string client_id;
        public string client_secret;
        public UnityChannelResponse channel;
        public string rev;
    }

    public class UnityIapItemUpdateResponse : GeneralResponse
    {

    }

    public class UnityIapItemCreateResponse : GeneralResponse
    {

    }

    [Serializable]
    public class UnityChannelResponse
    {
        public string projectGuid;
        public ThirdPartySetting[] thirdPartySettings;
        public string callbackUrl;
        public string publicRSAKey;
        public string channelSecret;
    }

    [Serializable]
    public class TokenRequest
    {
        public string code;
        public string client_id;
        public string client_secret;
        public string grant_type;
        public string redirect_uri;
        public string refresh_token;
    }

    [Serializable]
    public class TokenInfo : GeneralResponse
    {
        public string access_token;
        public string refresh_token;
    }

    [Serializable]
    public class UserIdResponse : GeneralResponse
    {
        public string sub;
    }

    [Serializable]
    public class OrgIdResponse : GeneralResponse
    {
        public string org_foreign_key;
    }

    [Serializable]
    public class OrgRoleResponse : GeneralResponse
    {
        public List<string> roles;
    }

    [Serializable]
    public class GeneralResponse
    {
        public string message;
    }

    [Serializable]
    public class IapItemSearchResponse : GeneralResponse
    {
        public int total;
        public List<IapItem> results;
    }

    [Serializable]
    public class IapItem
    {
        public string id;
        public string slug;
        public string name;
        public string masterItemSlug;
        public bool consumable = true;
        public string type = "IAP";
        public string status = "STAGE";
        public string ownerId;
        public string ownerType = "ORGANIZATION";
        public PriceSets priceSets = new PriceSets();
        //public Locales locales;

        public Properties properties = new Properties();
        //		public string refresh_token;

        private int CheckValidation()
        {
            if (string.IsNullOrEmpty(slug))
            {
                return -1;
            }
            if (string.IsNullOrEmpty(name))
            {
                return -2;
            }
            if (string.IsNullOrEmpty(masterItemSlug))
            {
                return -3;
            }
            if (priceSets == null || priceSets.PurchaseFee == null
            || priceSets.PurchaseFee.priceMap == null
            || priceSets.PurchaseFee.priceMap.DEFAULT.Count.Equals(0)
            || string.IsNullOrEmpty(priceSets.PurchaseFee.priceMap.DEFAULT[0].price))
            {
                return -4;
            }
            if (properties == null || string.IsNullOrEmpty(properties.description))
            {
                return -6;
            }
            return 0;
        }

        public string Validate()
        {
            int result = CheckValidation();

            switch (result)
            {
                case 0:
                    return "";
                case -1:
                    return "Product ID cannot be null";
                case -2:
                    return "Name cannot be null";
                case -4:
                    return "Price cannot be null";
                case -6:
                    return "Description cannot be null";
                default:
                    return "Unknown erorr, please retry";
            }
        }
    }

    [Serializable]
    public class PriceSets
    {
        public PurchaseFee PurchaseFee = new PurchaseFee();
    }

    [Serializable]
    public class PurchaseFee
    {
        public string priceType = "CUSTOM";
        public PriceMap priceMap = new PriceMap();
    }

    [Serializable]
    public class PriceMap
    {
        public List<PriceDetail> DEFAULT = new List<PriceDetail>();
    }

    [Serializable]
    public class PriceDetail
    {
        public string price;
        public string currency;
    }

    [Serializable]
    public class Locales
    {
        public Locale thisShouldBeENHyphenUS;
        public Locale thisShouldBeZHHyphenCN;
    }

    [Serializable]
    public class Locale
    {
        public string name;
        public string shortDescription;
        public string longDescription;
    }

    [Serializable]
    public class Player
    {
        public string email;
        public string password;
        public string clientId;
    }

    [Serializable]
    public class PlayerChangePasswordRequest
    {
        public string password;
        public string playerId;
    }

    [Serializable]
    public class PlayerResponse : GeneralResponse
    {
        public string nickName;
        public string id;
    }

    [Serializable]
    public class PlayerResponseWrapper : GeneralResponse
    {
        public int total;
        public PlayerResponse[] results;
    }

    [Serializable]
    public class AppItem
    {
        public string id;
        public string type;
        public string slug;
        public string name;
        public string status;
        public string ownerId;
        public string ownerType;
        public string clientId;
        public string packageName;
        public string revision;
    }

    [Serializable]
    public class Properties
    {
        public string description;
    }

    [Serializable]
    public class AppItemResponse : GeneralResponse
    {
        public string slug;
        public string name;
        public string id;
        public string status;
        public string type;
        public string ownerId;
        public string ownerType;
        public string clientId;
        public string packageName;
        public string revision;
    }

    [Serializable]
    public class AppItemResponseWrapper : GeneralResponse
    {
        public int total;
        public AppItemResponse[] results;
    }

    [Serializable]
    public class AppItemPublishResponse : GeneralResponse
    {
        public string revision;
    }

    [Serializable]
    public class PlayerVerifiedResponse : GeneralResponse
    {
    }

    [Serializable]
    public class PlayerDeleteResponse : GeneralResponse
    {
    }

    [Serializable]
    public class IapItemDeleteResponse : GeneralResponse
    {
    }

    [Serializable]
    public class ErrorResponse : GeneralResponse
    {
        public string code;
        public ErrorDetail[] details;
    }

    [Serializable]
    public class ErrorDetail
    {
        public string field;
        public string reason;
    }

    [Serializable]
    public class PlayerChangePasswordResponse : GeneralResponse
    {
    }

}
