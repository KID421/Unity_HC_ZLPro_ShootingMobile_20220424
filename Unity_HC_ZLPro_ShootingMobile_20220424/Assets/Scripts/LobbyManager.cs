using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;       // 引用 Photon Pun API
using Photon.Realtime;  // 引用 Photon 即時 API

/// <summary>
/// 大廳管理器
/// 玩家按下對戰按鈕後開始匹配房間
/// </summary>
// MonoBehaviourPunCallbacks 連線功能回呼類別
// 例如：登入大廳後回呼你指定的程式
public class LobbyManager : MonoBehaviourPunCallbacks
{
    // GameObject 遊戲物件：存放 Unity 場景內所有物件
    // SerializeField 將私人欄位顯示在屬性面板上
    // Heder 標題，在屬性面板上顯示粗體字標題
    [SerializeField, Header("連線中畫面")]
    private GameObject goConnectView;
    [SerializeField, Header("對戰按鈕")]
    private Button btnBattle;
    [SerializeField, Header("連線人數")]
    private Text textCountPlayer;

    // 喚醒事件：播放遊戲時執行一次，初始化設定
    private void Awake()
    {
        // Photon 連線 的 連線使用設定
        PhotonNetwork.ConnectUsingSettings();
    }

    // override 允許複寫繼承的父類別成員
    // 連線至控制台，在 ConnectUsingSettings 執行後會自動連線
    public override void OnConnectedToMaster()
    {
        base.OnConnectedToMaster();
        print("<color=yellow>1. 已經進入控制台</color>");

        // Photon 連線.加入大廳
        PhotonNetwork.JoinLobby();
    }

    // 連線至大廳成功後會執行此方法
    public override void OnJoinedLobby()
    {
        base.OnJoinedLobby();
        print("<color=yellow>2. 已經進入大廳</color>");

        // 對戰按鈕.互動 = 啟動
        btnBattle.interactable = true;
    }

    // 註解：說明
    // 讓按鈕跟程式溝通的流程
    // 1. 提供公開的方法 Public Method
    // 2. 按鈕在點擊 On Click 後設定呼叫此方法

    // 開始連線對戰
    public void StartConnect()
    {
        print("<color=yellow>3. 開始連線</color>");

        // 遊戲物件.啟動設定（布林值）- true 顯示，false 隱藏
        goConnectView.SetActive(true);

        // Photon 連線 的 加入隨機房間
        PhotonNetwork.JoinRandomRoom();
    }

    // 加入隨機房間失敗
    // 1. 連線品質差導致失敗
    // 2. 還沒有房間
    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        base.OnJoinRandomFailed(returnCode, message);
        print("<color=red>4. 加入隨機房間失敗</color>");

        RoomOptions ro = new RoomOptions();     // 新增房間設定物件
        ro.MaxPlayers = 5;                      // 指定房間最大人數
        PhotonNetwork.CreateRoom("", ro);       // 建立房間並給予房間物件
    }

    // 加入房間
    public override void OnJoinedRoom()
    {
        base.OnJoinedRoom();
        print("<color=yellow>5. 開房者進入房間</color>");
        int currentCount = PhotonNetwork.CurrentRoom.PlayerCount;   // 當前房間人數
        int maxCount = PhotonNetwork.CurrentRoom.MaxPlayers;        // 當前房間最大人數

        textCountPlayer.text = "連線人數 " + currentCount + " / " + maxCount;

        if (currentCount == 3) PhotonNetwork.LoadLevel("遊戲場景");
    }

    // 其他玩家進入房間
    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        base.OnPlayerEnteredRoom(newPlayer);
        print("<color=yellow>6. 玩家進入房間</color>");
        int currentCount = PhotonNetwork.CurrentRoom.PlayerCount;   // 當前房間人數
        int maxCount = PhotonNetwork.CurrentRoom.MaxPlayers;        // 當前房間最大人數

        textCountPlayer.text = "連線人數 " + currentCount + " / " + maxCount;

        if (currentCount == 3) PhotonNetwork.LoadLevel("遊戲場景");
    }
}
