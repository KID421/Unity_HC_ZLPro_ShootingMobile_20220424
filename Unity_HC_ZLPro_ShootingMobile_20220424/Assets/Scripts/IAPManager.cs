using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Purchasing;

namespace KID
{
    public class IAPManager : MonoBehaviour
    {
        [SerializeField, Header("�ʶR�ֽ����s")]
        private IAPButton iapBuySkinRed;
        [SerializeField, Header("�ʶR���ܰT��")]
        private Text textIAPTip;

        /// <summary>
        /// �֦�����ֽ�
        /// </summary>
        private bool hasSkinRed;

        private void Awake()
        {
            // ����ֽ����ʫ��s �ʶR���\�� �K�[��ť�� (�ʶR���\��k)
            iapBuySkinRed.onPurchaseComplete.AddListener(PurchaseCompleteSkinRed);
            // ����ֽ����ʫ��s �ʶR���ѫ� �K�[��ť�� (�ʶR���Ѥ�k)
            iapBuySkinRed.onPurchaseFailed.AddListener(PurchaseFailedSkinRed);
        }

        /// <summary>
        /// �ʶR���\
        /// </summary>
        private void PurchaseCompleteSkinRed(Product product)
        {
            textIAPTip.text = "����ֽ��A�ʶR���\�C";

            // �B�z�ʶR���\�᪺�欰
            hasSkinRed = true;

            // ����T����I�s���ä��ʴ��ܰT��
            // ����I�s(��k�W�١A����ɶ�)
            Invoke("HiddenIAPTip", 3);
        }

        /// <summary>
        /// �ʶR����
        /// </summary>
        private void PurchaseFailedSkinRed(Product prodct, PurchaseFailureReason reason)
        {
            textIAPTip.text = "����ֽ��A�ʶR���ѡA��]�G" + reason;

            Invoke("HiddenIAPTip", 3);
        }

        /// <summary>
        /// ���ä��ʴ��ܰT��
        /// </summary>
        private void HiddenIAPTip()
        {
            textIAPTip.text = "";
        }
    }
}