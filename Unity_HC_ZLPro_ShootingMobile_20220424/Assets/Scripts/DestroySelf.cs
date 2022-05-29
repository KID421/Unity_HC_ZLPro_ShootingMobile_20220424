using UnityEngine;
using Photon.Pun;

namespace KID
{
    /// <summary>
    /// 刪除本身
    /// </summary>
    public class DestroySelf : MonoBehaviourPun
    {
        [SerializeField, Header("刪除時間"), Range(0, 10)]
        private float timeDestroy = 5;
        [SerializeField, Header("是否需要碰撞後刪除")]
        private bool collisionDestroy;

        private void Awake()
        {
            Invoke("DestroyDelay", timeDestroy);
        }

        /// <summary>
        /// 延遲刪除方法
        /// </summary>
        private void DestroyDelay()
        {
            // 連線.刪除(遊戲物件) - 刪除伺服器內的物件
            PhotonNetwork.Destroy(gameObject);
        }

        private void OnCollisionEnter(Collision collision)
        {
            // 如果 需要碰撞後刪除 就 連線.刪除
            if (collisionDestroy)
            {
                PhotonNetwork.Destroy(gameObject);
            }
        }
    }
}

