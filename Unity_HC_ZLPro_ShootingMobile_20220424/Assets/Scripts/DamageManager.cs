using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using TMPro;
using System.Collections;

namespace KID
{
    /// <summary>
    /// ���˺޲z
    /// </summary>
    public class DamageManager : MonoBehaviourPun
    {
        [SerializeField, Header("��q"), Range(0, 1000)]
        private float hp = 200;
        [SerializeField, Header("�����S��")]
        private GameObject goVFXHit;

        private float hpMax;

        private string nameBullet = "�l�u";

        [HideInInspector]
        public Image imgHp;
        [HideInInspector]
        public TextMeshProUGUI textHp;

        public Material materialNew;
        public Shader shader;

        SkinnedMeshRenderer[] smr;

        private void Awake()
        {
            hpMax = hp;

            smr = GetComponentsInChildren<SkinnedMeshRenderer>();
            materialNew = new Material(shader);

            for (int i = 0; i < smr.Length; i++)
            {
                smr[i].material = materialNew;
            }

            if (photonView.IsMine)
            {
                textHp.text = hp.ToString();
            }
        }

        // �i�J
        private void OnCollisionEnter(Collision collision)
        {
            // �p�G ���O�ۤv�����a���� �N���X
            if (!photonView.IsMine) return;

            // �p�G �I������W�� �]�t �l�u �N�B�z ����
            if (collision.gameObject.name.Contains(nameBullet))
            {
                // collision.contacts[0] �I�쪺�Ĥ@�Ӫ���
                // point �I�쪫�󪺮y��
                Damage(collision.contacts[0].point);
            }
        }

        // ����
        private void OnCollisionStay(Collision collision)
        {
            
        }

        // ���}
        private void OnCollisionExit(Collision collision)
        {
            
        }

        private void Damage(Vector3 posHit)
        {
            hp -= 20;
            imgHp.fillAmount = hp / hpMax;

            // ��q = �ƾ�.����(��q�A�̤p�ȡA�̤j��)
            hp = Mathf.Clamp(hp, 0, hpMax);
            textHp.text = hp.ToString();

            // �s�u.�ͦ�(�S�ġA�����y�СA����)
            PhotonNetwork.Instantiate(goVFXHit.name, posHit, Quaternion.identity);

            if (hp <= 0) photonView.RPC("Dead", RpcTarget.All);
        }

        [PunRPC]
        private void Dead()
        {
            StartCoroutine(Dissolve());
        }

        private IEnumerator Dissolve()
        {
            float valueDissolve = 5;

            for (int i = 0; i < 10; i++)
            {
                valueDissolve -= 0.6f;
                materialNew.SetFloat("dissolve", valueDissolve);
                yield return new WaitForSeconds(0.05f);
            }
        }
    }
}

