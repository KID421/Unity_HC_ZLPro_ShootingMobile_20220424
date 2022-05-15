using UnityEngine;
using Photon.Pun;

namespace KID
{
    public class GameManager : MonoBehaviourPunCallbacks
    {
        [SerializeField]
        private GameObject goPlayer;

        private void Start()
        {
            if (PlayerManager.localPlayer == null)
            {
                PhotonNetwork.Instantiate(goPlayer.name, Vector3.zero, Quaternion.identity);
            }
        }
    }
}
