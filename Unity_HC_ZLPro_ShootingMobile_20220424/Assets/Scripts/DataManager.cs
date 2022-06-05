using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System.Collections;

namespace KID
{
    /// <summary>
    /// 資料管理
    /// </summary>
    public class DataManager : MonoBehaviour
    {
        // 新增部署作業內的網址，有變更 GAS 都要更新
        private string gasLink = "https://script.google.com/macros/s/AKfycbzQ9_JeR9NnuNvqYj9viV0gmMT6Vk3ypsgV4jKe8_8IRIDBRst0eWkPSMGCGNh6CRbL/exec";
        private WWWForm form;

        private Button btnGetData;
        private Text textPlayerName;

        private void Start()
        {
            textPlayerName = GameObject.Find("玩家名稱").GetComponent<Text>();
            btnGetData = GameObject.Find("取得玩家資料按鈕").GetComponent<Button>();
            btnGetData.onClick.AddListener(GetGASData);
        }
        
        /// <summary>
        /// 取得 GAS 資料
        /// </summary>
        private void GetGASData()
        {
            form = new WWWForm();
            form.AddField("method", "取得");

            StartCoroutine(StartGetGASData());
        }

        private IEnumerator StartGetGASData()
        {
            // 新增網頁連線要求 (gasLink，表單資料)
            using (UnityWebRequest www = UnityWebRequest.Post(gasLink, form))
            {
                // 等待網頁連線要求
                yield return www.SendWebRequest();
                // 玩家名稱 = 連線要求下載的文字訊息
                textPlayerName.text = www.downloadHandler.text;
            }
        }
    }
}
