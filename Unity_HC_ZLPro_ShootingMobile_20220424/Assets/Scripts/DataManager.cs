using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System.Collections;
using TMPro;

namespace KID
{
    /// <summary>
    /// 資料管理
    /// </summary>
    public class DataManager : MonoBehaviour
    {
        // 新增部署作業內的網址，有變更 GAS 都要更新
        private string gasLink = "https://script.google.com/macros/s/AKfycbx0lXQTW9NwN7KEF8wzSkJRSD-wp2r_aJ3w9OTkdUB2RUpjbLvoQh29lQY4pM2EA6T1/exec";
        private WWWForm form;

        private Button btnGetData;
        private Text textPlayerName;
        private TMP_InputField inputField;

        private void Start()
        {
            textPlayerName = GameObject.Find("玩家名稱").GetComponent<Text>();
            btnGetData = GameObject.Find("取得玩家資料按鈕").GetComponent<Button>();
            btnGetData.onClick.AddListener(GetGASData);

            inputField = GameObject.Find("更新玩家名稱").GetComponent<TMP_InputField>();
            inputField.onEndEdit.AddListener(SetGASData);
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

        private void SetGASData(string value)
        {
            form = new WWWForm();
            form.AddField("method", "設定");
            form.AddField("playerName", inputField.text);

            StartCoroutine(StartSetGASData());
        }

        private IEnumerator StartSetGASData()
        {
            using (UnityWebRequest www = UnityWebRequest.Post(gasLink, form))
            {
                yield return www.SendWebRequest();
                textPlayerName.text = inputField.text;
                print(www.downloadHandler.text);
            }
        }
    }
}
