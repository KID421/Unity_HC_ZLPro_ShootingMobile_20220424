using UnityEngine;
using Photon.Pun;
using System.Linq;                      // 引用 系統查詢語言 (資料結構轉換 API)
using System.Collections.Generic;       // 引用 系統及和一般 (資料結構，List, ArrayList...)

namespace KID
{
    /// <summary>
    /// 遊戲管理器
    /// 判斷如果是連線進入的玩家
    /// 就生成角色物件 (戰士)
    /// </summary>
    public class GameManager : MonoBehaviourPun
    {
        [SerializeField, Header("角色物件")]
        private GameObject goCharacter;
        [SerializeField, Header("生成座標物件")]
        private Transform[] traSpawnPoint;

        /// <summary>
        /// 儲存生成座標清單
        /// </summary>
        [SerializeField]
        private List<Transform> traSpawnPointList;

        private void Awake()
        {
            traSpawnPointList = new List<Transform>();      // 新增 清單物件
            traSpawnPointList = traSpawnPoint.ToList();     // 陣列轉為清單資料結構

            // 如果是連線進入的玩家就在伺服器生成角色物件
            if (photonView.IsMine)
            {
                int indexRandom = Random.Range(0, traSpawnPointList.Count);     // 取得隨機清單(0，清單的長度)
                Transform tra = traSpawnPointList[indexRandom];                 // 取得隨機座標

                // Photon 伺服器.生成(物件.名稱，座標，角度)
                PhotonNetwork.Instantiate(goCharacter.name, tra.position, tra.rotation);

                traSpawnPointList.RemoveAt(indexRandom);                        // 刪除已經取得過的生成座標資料
            }
        }
    }
}

