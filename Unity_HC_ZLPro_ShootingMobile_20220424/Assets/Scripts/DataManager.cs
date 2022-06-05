using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System.Collections;
using TMPro;

namespace KID
{
    /// <summary>
    /// ��ƺ޲z
    /// </summary>
    public class DataManager : MonoBehaviour
    {
        // �s�W���p�@�~�������}�A���ܧ� GAS ���n��s
        private string gasLink = "https://script.google.com/macros/s/AKfycbx0lXQTW9NwN7KEF8wzSkJRSD-wp2r_aJ3w9OTkdUB2RUpjbLvoQh29lQY4pM2EA6T1/exec";
        private WWWForm form;

        private Button btnGetData;
        private Text textPlayerName;
        private TMP_InputField inputField;

        private void Start()
        {
            textPlayerName = GameObject.Find("���a�W��").GetComponent<Text>();
            btnGetData = GameObject.Find("���o���a��ƫ��s").GetComponent<Button>();
            btnGetData.onClick.AddListener(GetGASData);

            inputField = GameObject.Find("��s���a�W��").GetComponent<TMP_InputField>();
            inputField.onEndEdit.AddListener(SetGASData);
        }
        
        /// <summary>
        /// ���o GAS ���
        /// </summary>
        private void GetGASData()
        {
            form = new WWWForm();
            form.AddField("method", "���o");

            StartCoroutine(StartGetGASData());
        }

        private IEnumerator StartGetGASData()
        {
            // �s�W�����s�u�n�D (gasLink�A�����)
            using (UnityWebRequest www = UnityWebRequest.Post(gasLink, form))
            {
                // ���ݺ����s�u�n�D
                yield return www.SendWebRequest();
                // ���a�W�� = �s�u�n�D�U������r�T��
                textPlayerName.text = www.downloadHandler.text;
            }
        }

        private void SetGASData(string value)
        {
            form = new WWWForm();
            form.AddField("method", "�]�w");
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
