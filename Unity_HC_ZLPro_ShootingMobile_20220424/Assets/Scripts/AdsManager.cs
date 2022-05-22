using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Advertisements;       // 引用廣告 API

namespace KID
{
    /// <summary>
    /// 按下看廣告按鈕後觀看廣告
    /// 看完廣告添加金幣回饋
    /// </summary>
    public class AdsManager : MonoBehaviour, IUnityAdsInitializationListener, IUnityAdsLoadListener, IUnityAdsShowListener
    {
        #region 資料
        [SerializeField, Header("看完廣告的金幣"), Range(0, 1000)]
        private int addCoinValue = 100;

        private int coinPlayer;
        /// <summary>
        /// 廣告按鈕添加金幣
        /// </summary>
        private Button btnAdsAddCoin;

        private string gameIdAndroid = "4754879";   // 後台 Adnroid ID
        private string gameIdIos = "4754878";       // 後台 iOS ID
        private string gameId;

        private string adsIdAndroid = "AddCoin";
        private string adsIdIos = "AddCoin";
        private string adsId;
        #endregion

        #region 初始化與載入廣告
        // 初始化成功會執行的方法
        public void OnInitializationComplete()
        {
            print("<color=green>1. 廣告初始化成功</color>");
        }

        // 初始化失敗會執行的方法
        public void OnInitializationFailed(UnityAdsInitializationError error, string message)
        {
            print("<color=red>廣告初始化失敗，原因：" + message + "</color>");
        }

        // 載入廣告成功會執行的方法
        public void OnUnityAdsAdLoaded(string placementId)
        {
            print("<color=green>2. 廣告載入成功 " + placementId + "</color>");
        }

        // 載入廣告失敗會執行的方法
        public void OnUnityAdsFailedToLoad(string placementId, UnityAdsLoadError error, string message)
        {
            print("<color=red>廣告載入失敗，原因：" + message + "</color>");
        }
        #endregion

        /// <summary>
        /// 玩家金幣數量
        /// </summary>
        private Text textCoin;

        public void OnUnityAdsShowFailure(string placementId, UnityAdsShowError error, string message)
        {
            print("<color=red>3. 廣告顯示失敗 " + message + "</color>");
        }

        public void OnUnityAdsShowStart(string placementId)
        {
            print("<color=green>3. 廣告顯示開始 " + placementId + "</color>");
        }

        public void OnUnityAdsShowClick(string placementId)
        {
            print("<color=green>3. 廣告顯示點擊" + placementId + "</color>");
        }

        public void OnUnityAdsShowComplete(string placementId, UnityAdsShowCompletionState showCompletionState)
        {
            print("<color=green>3. 廣告顯示完成 " + placementId + "</color>");

            coinPlayer += addCoinValue;
            textCoin.text = coinPlayer.ToString();
        }

        /// <summary>
        /// 載入廣告
        /// </summary>
        private void LoadAds()
        {
            print("載入廣告，ID：" + adsId);
            Advertisement.Load(adsId, this);
            ShowAds();
        }

        /// <summary>
        /// 顯示廣告
        /// </summary>
        private void ShowAds()
        {
            Advertisement.Show(adsId, this);
        }

        private void Awake()
        {
            textCoin = GameObject.Find("玩家金幣數量").GetComponent<Text>();
            btnAdsAddCoin = GameObject.Find("廣告按鈕添加金幣").GetComponent<Button>();
            btnAdsAddCoin.onClick.AddListener(LoadAds);

            InitializeAds();

            #region 初始化廣告 ID
            // #if 程式區塊判斷式，條件達成才會執行該區塊
            // 如果 玩家 作業系統 是 iOS 就指定為 iOS 廣告
            // 否則如果 玩家 作業系統 是 Android 就指定為 Android 廣告
#if UNITY_IOS
            adsId = adsIdIos;
#elif UNITY_ANDROID
            adsId = adsIdAndroid;
#endif

            // PC 端測試
            adsId = adsIdAndroid;
            #endregion
        }

        /// <summary>
        /// 初始化廣告系統
        /// </summary>
        private void InitializeAds()
        {
            gameId = gameIdAndroid;
            Advertisement.Initialize(gameId, true, this);
        }
    }
}
