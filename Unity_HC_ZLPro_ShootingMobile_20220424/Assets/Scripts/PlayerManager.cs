using UnityEngine;
using Photon.Pun;

namespace KID
{
    public class PlayerManager : MonoBehaviourPunCallbacks
    {
        public static GameObject localPlayer;

        private void Awake()
        {
            if (photonView.IsMine)
            {
                localPlayer = this.gameObject;
            }
        }
    }
}

