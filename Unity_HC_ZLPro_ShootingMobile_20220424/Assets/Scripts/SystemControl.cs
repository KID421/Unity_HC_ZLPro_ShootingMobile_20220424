using UnityEngine;
using Photon.Pun;
using Cinemachine;

// namespace 命名空間：程式區塊
namespace KID
{
    /// <summary>
    /// 控制系統：荒野亂鬥移動功能
    /// 虛擬搖桿控制角色移動
    /// </summary>
    public class SystemControl : MonoBehaviourPun
    {
        [SerializeField, Header("移動速度"), Range(0, 300)]
        private float speed = 3.5f;
        [SerializeField, Header("角色方向圖示範圍"), Range(0, 5)]
        private float rangeDirectionIcon = 2.5f;
        [SerializeField, Header("角色旋轉速度"), Range(0, 100)]
        private float speedTurn = 1.5f;
        [SerializeField, Header("動畫參數跑步")]
        private string parameterWalk = "開關跑步";
        [SerializeField, Header("畫布")]
        private GameObject goCanvas;
        [SerializeField, Header("畫布玩家資訊")]
        private GameObject goCanvasPlayerInfo;
        [SerializeField, Header("角色方向圖示")]
        private GameObject goDirection;

        private Rigidbody rig;
        private Animator ani;
        private Joystick joystick;
        private Transform traDirectionIcon;
        private CinemachineVirtualCamera cvc;

        private void Awake()
        {
            rig = GetComponent<Rigidbody>();
            ani = GetComponent<Animator>();

            // 如果是連線進入的玩家 就生成玩家需要的物件
            if (photonView.IsMine)
            {
                PlayerUIFollow follow = Instantiate(goCanvasPlayerInfo).GetComponent<PlayerUIFollow>();
                follow.traPlayer = transform;

                traDirectionIcon = Instantiate(goDirection).transform;                                              // 取得角色方向圖示

                // transform.Find(子物件名稱) - 透過名稱搜尋子物件
                joystick = Instantiate(goCanvas).transform.Find("Dynamic Joystick").GetComponent<Joystick>();       // 取得畫布內的虛擬搖桿

                cvc = GameObject.Find("CM 管理器").GetComponent<CinemachineVirtualCamera>();                         // 取得攝影機 CM 管理器
                cvc.Follow = transform;                                                                             // 指定追蹤物件
            }
            // 否則 不是進入的玩家 就關閉控制系統，避免控制到多個物件
            else
            {
                enabled = false;
            }
        }

        private void Update()
        {
            // GetJoystickValue();
            UpdateDirectionIconPos();
            LookDirectionIcon();
            UpdateAnimation();
        }

        private void FixedUpdate()
        {
            Move();
        }

        /// <summary>
        /// 取得虛擬搖桿值
        /// </summary>
        private void GetJoystickValue()
        {
            print("<color=yellow>水平：" + joystick.Horizontal + "</color>");
        }

        /// <summary>
        /// 移動功能
        /// </summary>
        private void Move()
        {
            // 剛體.加速度 = 三維向量(X，Y，Z)
            rig.velocity = new Vector3(-joystick.Horizontal, 0, -joystick.Vertical) * speed;
        }

        /// <summary>
        /// 更新角色方向圖示的座標
        /// </summary>
        private void UpdateDirectionIconPos()
        {
            // 新座標 = 角色的座標 + 三維向量(虛擬搖桿的水平與垂直) * 方向圖示的範圍)
            Vector3 pos = transform.position + new Vector3(-joystick.Horizontal, 0.5f, -joystick.Vertical) * rangeDirectionIcon;
            // 更新方向圖示的座標 = 新座標
            traDirectionIcon.position = pos;
        }

        /// <summary>
        /// 面向方向圖示
        /// </summary>
        private void LookDirectionIcon()
        {
            // 取得面向角度 = 四位元.面向角度(方向圖示 - 角色) - 方向圖示與角色的向量
            Quaternion look = Quaternion.LookRotation(traDirectionIcon.position - transform.position);
            // 角色的角度 = 四位元.插值(角色的角度，面向角度，旋轉速度 * 一幀的時間)
            transform.rotation = Quaternion.Lerp(transform.rotation, look, speedTurn * Time.deltaTime);
            // 角色的歐拉角度 = 三維向量(0，原本的歐拉角度Y，0)
            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
        }

        /// <summary>
        /// 更新動畫
        /// </summary>
        private void UpdateAnimation()
        {
            // 是否跑步 = 虛擬搖桿 水平 不為零 或者 垂直 不為零
            bool run = joystick.Horizontal != 0 || joystick.Vertical != 0;
            ani.SetBool(parameterWalk, run);
        }
    }
}
