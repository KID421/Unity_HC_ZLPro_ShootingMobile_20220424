using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

namespace KID
{
    /// <summary>
    /// 受傷管理
    /// </summary>
    public class DamageManager : MonoBehaviourPun
    {
        [SerializeField, Header("血量"), Range(0, 1000)]
        private float hp = 200;
        [SerializeField, Header("擊中特效")]
        private GameObject goVFXHit;

        private float hpMax;

        private string nameBullet = "子彈";

        [HideInInspector]
        public Image imgHp;
        [HideInInspector]
        public Text textHp;

        private void Awake()
        {
            hpMax = hp;

            if (photonView.IsMine) textHp.text = hp.ToString();
        }

        // 進入
        private void OnCollisionEnter(Collision collision)
        {
            // 如果 不是自己的玩家物件 就跳出
            if (!photonView.IsMine) return;

            // 如果 碰撞物件名稱 包含 子彈 就處理 受傷
            if (collision.gameObject.name.Contains(nameBullet))
            {
                // collision.contacts[0] 碰到的第一個物件
                // point 碰到物件的座標
                Damage(collision.contacts[0].point);
            }
        }

        // 持續
        private void OnCollisionStay(Collision collision)
        {
            
        }

        // 離開
        private void OnCollisionExit(Collision collision)
        {
            
        }

        private void Damage(Vector3 posHit)
        {
            hp -= 20;
            imgHp.fillAmount = hp / hpMax;

            // 血量 = 數學.夾住(血量，最小值，最大值)
            hp = Mathf.Clamp(hp, 0, hpMax);
            textHp.text = hp.ToString();

            // 連線.生成(特效，擊中座標，角度)
            PhotonNetwork.Instantiate(goVFXHit.name, posHit, Quaternion.identity);
        }
    }
}

