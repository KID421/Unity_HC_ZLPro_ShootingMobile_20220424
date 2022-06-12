#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826;
// System.Action`1<Photon.Realtime.RegionHandler>
struct Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>
struct Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E;
// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>
struct Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>
struct Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>
struct IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Photon.Chat.ChatChannel>
struct KeyCollection_t3CC6366B12095908A6B3B512623B34284A09041D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Photon.Chat.Demo.FriendItem>
struct KeyCollection_t5A7BBF071446F8E068A6658B8FD8E3568B9EC2A4;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.UI.Toggle>
struct KeyCollection_t635DBC320EDF562E36389EC297EDFBF7DBB35A53;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension>
struct List_1_tF512ECCA426FF10471372F52B5C8784FC96A7EAC;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange>
struct List_1_tAE460F42AC335F9ADFDAB761B93C2E8883845E5F;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange>
struct List_1_t7628C79979ECE33C758FA5C52526761CA20F2167;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy>
struct List_1_tA7AAD9C9730173B4B69D3E42B07AF11817191181;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<Photon.Realtime.Region>
struct List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7;
// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger>
struct List_1_t6F972EAFC64258DD491584080B232EC12BE33581;
// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15;
// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable>
struct List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_t9BA80EF655597EC91F8BA37831960B5B70540B02;
// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange>
struct Queue_1_tF178FEC52A1E31BA7A3C30BE84E4770D020B061B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<UnityEngine.Purchasing.Product>
struct UnityAction_1_t883DB0050E6D028D160EC19EBB491300FABAC545;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B;
// UnityEngine.Events.UnityAction`2<System.Object,System.Int32Enum>
struct UnityAction_2_tBE7BA36C60DAE0644D6E9A8B9813D323D176832E;
// UnityEngine.Events.UnityAction`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>
struct UnityAction_2_t0B22D23CA1A25950B702D39FA05C0F818460A1D4;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>
struct UnityEvent_1_t6F642369BDFC7D0E708896E55DA6FB6124268644;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Int32Enum>
struct UnityEvent_2_t41C0620CCB22F69FCEF4542D5D5518083D1A18CE;
// UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>
struct UnityEvent_2_tCFCF0C97EE0ABE297CC34E23A38D361505D5AAFF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Photon.Chat.ChatChannel>
struct ValueCollection_tC039743F3DF97A944D4DC9D36739F442375E5D80;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Photon.Chat.Demo.FriendItem>
struct ValueCollection_t8EC9654DB430A0670ECC121F80DD606DBBC2A3EC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.UI.Toggle>
struct ValueCollection_t5777B20754B5D28BC1CC6B0576417443BB9FE136;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Photon.Chat.ChatChannel>[]
struct EntryU5BU5D_t4D8D831A3B049F41AC0645D0DE9994241B9C0926;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Photon.Chat.Demo.FriendItem>[]
struct EntryU5BU5D_t4B0A754922A68A443DD292FC1FE964E8F66BE571;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.UI.Toggle>[]
struct EntryU5BU5D_t8C9204C472D3D048FC5529E6A3FC243EEB625930;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Cinemachine.CinemachineComponentBase[]
struct CinemachineComponentBaseU5BU5D_t479D9A9F2F2C4AB6F50F6C64FAC4BC8EC602C077;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// Photon.Realtime.FriendInfo[]
struct FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// Photon.Realtime.RoomInfo[]
struct RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.SkinnedMeshRenderer[]
struct SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// Photon.Realtime.TypedLobbyInfo[]
struct TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// Cinemachine.CinemachineCore/Stage[]
struct StageU5BU5D_tF198CE3C6DE5C3D67552DAB4B9680F3BFF319981;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// KID.AdsManager
struct AdsManager_t71168750765A444342C2737FCB33AFE43B9DEF0D;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// Photon.Realtime.AppSettings
struct AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7;
// Photon.Chat.AuthenticationValues
struct AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// Photon.Chat.Demo.ChannelSelector
struct ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07;
// Photon.Chat.Demo.ChatAppIdCheckerUI
struct ChatAppIdCheckerUI_t43522738EEA1186C60A64B652B157BC5FA4FC22D;
// Photon.Chat.ChatAppSettings
struct ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689;
// Photon.Chat.ChatChannel
struct ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1;
// Photon.Chat.ChatClient
struct ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA;
// Photon.Chat.Demo.ChatGui
struct ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25;
// Photon.Chat.ChatPeer
struct ChatPeer_t216E56C8D1791380415477470013A3787DF76D43;
// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50;
// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Photon.Realtime.Demo.ConnectAndJoinRandomLb
struct ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD;
// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// KID.DamageManager
struct DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A;
// KID.DataManager
struct DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// KID.DestroySelf
struct DestroySelf_tA1D23D1E58EF5B23154178FCD64DE1F456EABE03;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// DynamicJoystick
struct DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_tF60CA97691A86635843C02EEA1D689A384BC7ED7;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// Photon.Chat.UtilityScripts.EventSystemSpawner
struct EventSystemSpawner_t823C33A21E4332F5D407768DB424BBDB0D17C77D;
// FixedJoystick
struct FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F;
// FloatingJoystick
struct FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// Photon.Chat.Demo.FriendItem
struct FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13;
// KID.GameManager
struct GameManager_t8EAA0FB362D2107B73A03A192A366F7E827EAC5F;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A;
// TravisGameAssets.HitImpactEffectsPreview
struct HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505;
// UnityEngine.Purchasing.IAPButton
struct IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8;
// KID.IAPManager
struct IAPManager_tFA110631DC797A96B6823AB71164EEBFE37BF3BD;
// Photon.Chat.IChatClientListener
struct IChatClientListener_t7809F4EE0368FF3496A7123CCAFF8BA0B1A02B2F;
// Cinemachine.ICinemachineTargetGroup
struct ICinemachineTargetGroup_t3741E5378B5C1636777589A1BE1811E9E96ADF1B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.Advertisements.IUnityAdsInitializationListener
struct IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7;
// UnityEngine.Advertisements.IUnityAdsLoadListener
struct IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039;
// UnityEngine.Advertisements.IUnityAdsShowListener
struct IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD;
// Photon.Chat.Demo.IgnoreUiRaycastWhenInactive
struct IgnoreUiRaycastWhenInactive_t4DD606784A41379E617458D4FF2D041690E7BAEF;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Joystick
struct Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A;
// JoystickPlayerExample
struct JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B;
// JoystickSetterExample
struct JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC;
// LobbyManager
struct LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tEDF984018478E15D3031775F859CD94D66275C97;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Photon.Pun.MonoBehaviourPun
struct MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD;
// Photon.Pun.MonoBehaviourPunCallbacks
struct MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783;
// Photon.Chat.Demo.NamePickGui
struct NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Photon.Chat.UtilityScripts.OnStartDelete
struct OnStartDelete_tAFE941550E5B7D4F434D3BB2D00C0D93610BDC11;
// Photon.Realtime.OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Photon.Pun.PhotonView
struct PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B;
// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C;
// KID.PlayerUIFollow
struct PlayerUIFollow_tC5A87D4CF1D9D5A2DA5F5D058A13A49F43C229D4;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.Purchasing.Product
struct Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t8C8138607558F5A57C08B6257B38FC2C77B32164;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Photon.Realtime.Region
struct Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A;
// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// Photon.Realtime.Room
struct Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373;
// Photon.Realtime.RoomOptions
struct RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Photon.Pun.ServerSettings
struct ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// KID.SystemAttack
struct SystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D;
// KID.SystemControl
struct SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// Photon.Chat.UtilityScripts.TextButtonTransition
struct TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// Photon.Chat.UtilityScripts.TextToggleIsOnTransition
struct TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// Photon.Realtime.TypedLobby
struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// VariableJoystick
struct VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// Cinemachine.CinemachineBrain/VcamActivatedEvent
struct VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154;
// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate
struct CreatePipelineDelegate_tC9ED5364DE6A2A753E8C9FF767C2C37C5CBB6BFC;
// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate
struct DestroyPipelineDelegate_tDBA135A8B9ACD670F6144200C281F32F728BB842;
// KID.DamageManager/<Dissolve>d__17
struct U3CDissolveU3Ed__17_tA6A4DCF6A76ABA736835BC81F49E5AABB941FCF0;
// KID.DataManager/<StartGetGASData>d__7
struct U3CStartGetGASDataU3Ed__7_t7BFEBEB62935222C1A10AF1ED67E56DB00ED3A7B;
// KID.DataManager/<StartSetGASData>d__9
struct U3CStartSetGASDataU3Ed__9_tD11A595674AD69FA7F0E3274383E263F032F9986;
// UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_t18A57F5B4A0DEB7D32E384CC96C3FF22F93CC062;
// UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_t0684C539D061372B1102E2EF9665451BB93462D4;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatState_t051505084374FEB7E666EAF9C3D7A8DFBA5119D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t4E0F3B7704316E8AB75E2D31CCAA4790C47642AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseFailureReason_t9E7D53591FEB36F565C985D78568BE1D2489F276_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDissolveU3Ed__17_tA6A4DCF6A76ABA736835BC81F49E5AABB941FCF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartGetGASDataU3Ed__7_t7BFEBEB62935222C1A10AF1ED67E56DB00ED3A7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartSetGASDataU3Ed__9_tD11A595674AD69FA7F0E3274383E263F032F9986_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t883DB0050E6D028D160EC19EBB491300FABAC545_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t0B22D23CA1A25950B702D39FA05C0F818460A1D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral011D7D9D78DC2A4EA6437F75F6AE9C5B1D038EC5;
IL2CPP_EXTERN_C String_t* _stringLiteral02B3E56E4708FA9AEED0B607268A8985B53DDF13;
IL2CPP_EXTERN_C String_t* _stringLiteral034210A24608091CCB8822F3F2A7FD136B8D23DF;
IL2CPP_EXTERN_C String_t* _stringLiteral068341F44E6AA2C1827A87ADA515553684C961CA;
IL2CPP_EXTERN_C String_t* _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18;
IL2CPP_EXTERN_C String_t* _stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F;
IL2CPP_EXTERN_C String_t* _stringLiteral0F45C1C537BBADB2FE21CC7BB49C59898B204E6E;
IL2CPP_EXTERN_C String_t* _stringLiteral118410E0D4EC44AA2FCD3142030E47DC49A64A18;
IL2CPP_EXTERN_C String_t* _stringLiteral1729AC1B7F3D22492501BEF772B5BFDEBCF05B70;
IL2CPP_EXTERN_C String_t* _stringLiteral187DC7C8E0EDA1DE1ED6DF6A69E16E1804984856;
IL2CPP_EXTERN_C String_t* _stringLiteral18BA82A745D9E10EF604341BD4FA08FA6FBF82D5;
IL2CPP_EXTERN_C String_t* _stringLiteral1E78A77A472CC638158D9590BA08B84BC8AEC927;
IL2CPP_EXTERN_C String_t* _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
IL2CPP_EXTERN_C String_t* _stringLiteral208F346CBED06FFC63A94061C6967D1842B04D09;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteral2472A4E84E68C033DFB129A3B5C74B8E327EE211;
IL2CPP_EXTERN_C String_t* _stringLiteral25D19D44AE79EC606DD671C43230AAA8F1766EE6;
IL2CPP_EXTERN_C String_t* _stringLiteral267DC82CEED84A8A27D924D2E08B92887794D1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F;
IL2CPP_EXTERN_C String_t* _stringLiteral2C91CEEB5E6ACD712F102DE9EE44CB907B557A17;
IL2CPP_EXTERN_C String_t* _stringLiteral2E1D0B7FC6AE1E4699086BAFDFD167B73A71BF62;
IL2CPP_EXTERN_C String_t* _stringLiteral300E1362F835BABF048E880C8978EF4F91E3867D;
IL2CPP_EXTERN_C String_t* _stringLiteral31775E5380AC9751F2E61EA3DD24D9243DE804B1;
IL2CPP_EXTERN_C String_t* _stringLiteral3293A8518D7DEE9D1DE57B7241DE59F641197895;
IL2CPP_EXTERN_C String_t* _stringLiteral361D3EBAF9E2C29F13DB3B6509697AA973E37A36;
IL2CPP_EXTERN_C String_t* _stringLiteral38DB4AF6DBE7A8DBCC3821BE5605A5BB55BCB3D4;
IL2CPP_EXTERN_C String_t* _stringLiteral3A5B15C27FE983DC69782B7A0D4D8E6CA383DF19;
IL2CPP_EXTERN_C String_t* _stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6;
IL2CPP_EXTERN_C String_t* _stringLiteral40D124D1D432B44A1074918639B3AF56F0F6DDB9;
IL2CPP_EXTERN_C String_t* _stringLiteral41540A8C28BA5EDA9B41BEBBF344C748063CDB90;
IL2CPP_EXTERN_C String_t* _stringLiteral4252275A225D631641FBED384918DA548C9413F2;
IL2CPP_EXTERN_C String_t* _stringLiteral42628EE9785D6F751A773C36F75CE00AE65765B0;
IL2CPP_EXTERN_C String_t* _stringLiteral429438F91CDC84FFEADE761A712F0504D1008237;
IL2CPP_EXTERN_C String_t* _stringLiteral42D0751E8C5BC97523F99027AC34BB0A8565365A;
IL2CPP_EXTERN_C String_t* _stringLiteral449C142076B28B752A4D108C6C80C9B148A27C7B;
IL2CPP_EXTERN_C String_t* _stringLiteral471DE307F0A493F6FDE4F1A2C69F37FB76E31F80;
IL2CPP_EXTERN_C String_t* _stringLiteral471E512CD36A060B52A0EE28B8A6D4EEC00378C1;
IL2CPP_EXTERN_C String_t* _stringLiteral4A36DF6525515FE29AEB2A52B49635745B5D8E56;
IL2CPP_EXTERN_C String_t* _stringLiteral4A40D860326E4F58DF247BAAC9F338720FCF0B75;
IL2CPP_EXTERN_C String_t* _stringLiteral4C1C60E7DD87FDC0AE21FF26DCF607569887BC9F;
IL2CPP_EXTERN_C String_t* _stringLiteral4E38E2B4F159337570AD4E9656D4BDAF8B0EBCF1;
IL2CPP_EXTERN_C String_t* _stringLiteral4EA805CAA1D5DA07DA80A5CE6032EB4899CAD7ED;
IL2CPP_EXTERN_C String_t* _stringLiteral5224DE4337BB6DBE135E6B5A4D01069A20195D5F;
IL2CPP_EXTERN_C String_t* _stringLiteral5378989CC9B9323498293F87C7482A385935964D;
IL2CPP_EXTERN_C String_t* _stringLiteral5BF582C773D2521208368B297B930B67904A7E32;
IL2CPP_EXTERN_C String_t* _stringLiteral5D6A39CF1E3A2BB7700481DB871D78DDB02A911D;
IL2CPP_EXTERN_C String_t* _stringLiteral5DF695F96AE9B00DBD2CB8F12E765C3159E02AF8;
IL2CPP_EXTERN_C String_t* _stringLiteral60D25464A0D2697B9DE85A8CE7C6E223B98C82E6;
IL2CPP_EXTERN_C String_t* _stringLiteral616AAB5C815906B453473975760BDFCC9B81FF5F;
IL2CPP_EXTERN_C String_t* _stringLiteral64762895D0E96D1CC9F92B82BDB7FCAD509A3E17;
IL2CPP_EXTERN_C String_t* _stringLiteral66B10F3B2A4D5BC08B98B534CB1D3B052DCDE6B8;
IL2CPP_EXTERN_C String_t* _stringLiteral693BD22F82043985FDDDDFCF5E8EC15BF8B82934;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral6C8EA4ECB883AD669394FC7A5E304891A38ADED4;
IL2CPP_EXTERN_C String_t* _stringLiteral6D938ACFC6143B8CE3DE4BB4C34729E6EE2B2B2D;
IL2CPP_EXTERN_C String_t* _stringLiteral6E904A75A9D67C8CC9E7C542E4F5F9250ECF5AF8;
IL2CPP_EXTERN_C String_t* _stringLiteral710F81E0EEB8CB48BACB8437BA5836E3B5349235;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral77F781BE1FA4EBA75ACC2DC942D3D87126A499DB;
IL2CPP_EXTERN_C String_t* _stringLiteral785A86EB6D751A80451E9721EE6064DB7E70DDCB;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
IL2CPP_EXTERN_C String_t* _stringLiteral7AF3924ECBFEE1C3C10293DCC92228F414341EE2;
IL2CPP_EXTERN_C String_t* _stringLiteral7C80641897C558C1F6E1A9224F6942376FBEB49D;
IL2CPP_EXTERN_C String_t* _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF;
IL2CPP_EXTERN_C String_t* _stringLiteral86C677CA2B54E7E4E81E71A6AF30E985B484A0AF;
IL2CPP_EXTERN_C String_t* _stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1;
IL2CPP_EXTERN_C String_t* _stringLiteral88A4E835FC47194C325AC1B4075B94D15767248A;
IL2CPP_EXTERN_C String_t* _stringLiteral8CB7873CC9B86C1D67BF2A619181392B42B2481F;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED;
IL2CPP_EXTERN_C String_t* _stringLiteral8FAA700A4B5D2B8CF766DD86DEBD05B153BE14F2;
IL2CPP_EXTERN_C String_t* _stringLiteral93CD26FD25F534D18F21EBB330F02E0264AC3C8C;
IL2CPP_EXTERN_C String_t* _stringLiteral9436233A75C85FD412182447760C0928731FF34F;
IL2CPP_EXTERN_C String_t* _stringLiteral9F64D7E6B580A7A21FE715CCB12CA3DB2257AB75;
IL2CPP_EXTERN_C String_t* _stringLiteralA1533BFD28F11C5F69CA87886E87821ECA526FE4;
IL2CPP_EXTERN_C String_t* _stringLiteralA36D615703FF124A704E046433369D41AA86C957;
IL2CPP_EXTERN_C String_t* _stringLiteralA7077659D26DAF185E52E2F2B77A29B3A2B818C1;
IL2CPP_EXTERN_C String_t* _stringLiteralA9C7FB6AE3FF5017534605F6975309544858780A;
IL2CPP_EXTERN_C String_t* _stringLiteralABC69156EF02ECFE6696FF6EED48CC377EA1A011;
IL2CPP_EXTERN_C String_t* _stringLiteralB3664676F50F442E724FBD9CC58E7261F51AA12F;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB41CB6D8916F327083B64DF0A43E93A0A0D66AA1;
IL2CPP_EXTERN_C String_t* _stringLiteralB500A72EA2BE93B50003168CED59A25127D1F737;
IL2CPP_EXTERN_C String_t* _stringLiteralB50FAF1A7F2FD7AB9794866C603F795D80A4DAA3;
IL2CPP_EXTERN_C String_t* _stringLiteralB61F8E5C6788E7093D4F1DE579EBD7C233090B94;
IL2CPP_EXTERN_C String_t* _stringLiteralBE0B15C357A2825F006228523C3B9DBE26192CF7;
IL2CPP_EXTERN_C String_t* _stringLiteralBE1823106E03B1A8E37190FA81CAA82064505504;
IL2CPP_EXTERN_C String_t* _stringLiteralBE4EEAA3C538A66727E1F57EEFC277047842C14C;
IL2CPP_EXTERN_C String_t* _stringLiteralC189D0C157412E84A29AFCADEACA84764545E6F5;
IL2CPP_EXTERN_C String_t* _stringLiteralC6C6FB22D4BDDC985BA1ACF87E184AB9560BAA57;
IL2CPP_EXTERN_C String_t* _stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE149C7622A20B800C0F221FF927D6238C6DD62;
IL2CPP_EXTERN_C String_t* _stringLiteralCE431F3EB006A8ABBEFB40252D152CCC0CCD14FF;
IL2CPP_EXTERN_C String_t* _stringLiteralCE57122DB4C0B2E5D49139FB62F64EBAE0DA6500;
IL2CPP_EXTERN_C String_t* _stringLiteralCFAB7B864AEB8B1F2F829E4E8E6C1EFFA5AAC3A3;
IL2CPP_EXTERN_C String_t* _stringLiteralD2BE1F0205F016676A789761F2CAF7E48564AE6F;
IL2CPP_EXTERN_C String_t* _stringLiteralD3992DF679A3EF8B96232992FF89A2B1F1DB5534;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralDEB153A4F640C1BF005F7E30CECC4A84EB08150A;
IL2CPP_EXTERN_C String_t* _stringLiteralE01396087B968D8089649181D62173B42DA52091;
IL2CPP_EXTERN_C String_t* _stringLiteralE0F902889DF6EC5CFE211AF8D1697BB12234DA66;
IL2CPP_EXTERN_C String_t* _stringLiteralE1BA34E8407E1622C279AB6F6CAF3C807280392E;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEDDFB8C38F6540D2929CA284F3F54CBDC4A05733;
IL2CPP_EXTERN_C String_t* _stringLiteralF0E91461B7ECDB6ABA60BFA77B9395C3A7DF66BE;
IL2CPP_EXTERN_C String_t* _stringLiteralF42CA861B921E46CC4B6FDFE4E8211D4A2A9EB09;
IL2CPP_EXTERN_C String_t* _stringLiteralF726A1EAC195324F63D384A1F2A33114361B699C;
IL2CPP_EXTERN_C String_t* _stringLiteralF7EC2CC8B2BCCFE99D62A88064B6986F79634000;
IL2CPP_EXTERN_C String_t* _stringLiteralF901E66F2A148065254F4D6B82528054EF835B28;
IL2CPP_EXTERN_C String_t* _stringLiteralF903ABCF81417315694F4593925EE527D6C1258B;
IL2CPP_EXTERN_C String_t* _stringLiteralF92D1197FE7F9C3266589153D13221067FA7BB4A;
IL2CPP_EXTERN_C String_t* _stringLiteralFB0DA295360002E063FF9B079B5E7DC3DB313083;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C String_t* _stringLiteralFCCA328F77D050FE98C954ABC27B722687F2666D;
IL2CPP_EXTERN_C String_t* _stringLiteralFD71CE46597EE79C26C6A1B3CEE866C471B92862;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E;
IL2CPP_EXTERN_C String_t* _stringLiteralFDB6E6D617A894CF6A5EC4195B7DBF4AFF000089;
IL2CPP_EXTERN_C String_t* _stringLiteralFF8AEDAF918CF6EF3D306EB2FB9FA00A4D0FA453;
IL2CPP_EXTERN_C const RuntimeMethod* AdsManager_LoadAds_m901B5F698965A3EC343116DDE0B7D2A6F61865C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07_mA5CB24AADA6105A0763F0F315A95A0B02EB5A05E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A_mC610CB424C67F160BC8EA7DA5E725FB8DFDD276A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisJoystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A_m0999AAD0E93516118520AC0831B56BAB595281D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D_m539867AF6C9C784743133077D3C6101F1133E9E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5_m69DF2786808A6763F4F22D64A4A3525D08BDCB1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m8600DF2023C681E503BBD879A6037C3F4F0D92C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectAndJoinRandomLb_OnRegionPingCompleted_mCD5E698C6C0900FF3ACDD4AA4FFC644BC4137CE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataManager_GetGASData_mAB67EA4FD604830C97C06E226CE717A7808868C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataManager_SetGASData_m50166ECD5A8C3FAB9B9CDC72EB435BA563B57E1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m7AC008F2D3DCBB5019F0BE948B7F9B77284CC86C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m43998BB50D68FD0B18E4445DED51EE80D6EF1643_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mFC86DBD8CA71ACF273A1F7FB6CD2DAD53449653E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m4F6FEFABCBACA9B9B3DED9BFAB8BDA9B47FA678B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m952BC71E0A6D29F848B1C6D854B9183CE0A5E83A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m05968164AFC47B4DAC2545E4FAC531C51F66C7FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1951C457B495EAFA02160F793A6277161FDCEA3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mFCFB38659217BF06006B6BC2FFD16389EF2A44EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m65B54189C1D9C6B6BD1BABB5755C0647EE39C89B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mD91F54F913AE58A20D0D60800D7E13B3A81BCDBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mFDB00FBC9AEC3F5411BC17218005A2DDC01A4EE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m536992E60E83B319EE1A63F673D65CDB7DA4B326_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m06019984AEF249BE743B261895FBDFCF3DE314FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m950509CD692BEAA25841830AE3528B713C36DAC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF6F3ECC910925263DF2A5278F4F56F520C1507A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_m35DDE72490FF0112059E3A8C5F21DD893E2026C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13_m0046B7B489607CF796C30CD83C51F1304D701F67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerUIFollow_tC5A87D4CF1D9D5A2DA5F5D058A13A49F43C229D4_mB9E4E2B0EB8F6A178E40FBF2FF1A74C15451E710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m6CA031C91E5D203C24D3315721B6E3910B9C8729_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPManager_PurchaseCompleteSkinRed_mFDDDE0D21A6012F7A421B12641FDF79D06ADF2DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPManager_PurchaseFailedSkinRed_m557F0E1DAE4381A9CCF73500F7D8E05F09DF8D17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_m8674F5DCCB9AB970A69F1E68C2EC297A51FEE54A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m60F8B739B5BA0140A146BCDB0A2B899A33E22C6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m15557773C5C7B03FA319A668FB60FD7A945F5A16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SystemAttack_Fire_mDFBD4A4B44590AD9018C33F195BCF66063818E2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDissolveU3Ed__17_System_Collections_IEnumerator_Reset_mF23D4801B67E224CA37F54B80268D29FC9B5E555_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartGetGASDataU3Ed__7_System_Collections_IEnumerator_Reset_m4BA1DBFAC241392FBE7EF98B7C4F17BAE3560A09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartSetGASDataU3Ed__9_System_Collections_IEnumerator_Reset_m5E092C8EBB5C2646AC8A49CB02F15F16A96FE3DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m697EDB104210070011D224B214BBF7D14B3A550B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_AddListener_m94664954F20AA9FE96E17A3F0CB25C46AC036703_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>
struct Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4D8D831A3B049F41AC0645D0DE9994241B9C0926* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t3CC6366B12095908A6B3B512623B34284A09041D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC039743F3DF97A944D4DC9D36739F442375E5D80* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>
struct Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4B0A754922A68A443DD292FC1FE964E8F66BE571* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5A7BBF071446F8E068A6658B8FD8E3568B9EC2A4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8EC9654DB430A0670ECC121F80DD606DBBC2A3EC* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>
struct Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t8C9204C472D3D048FC5529E6A3FC243EEB625930* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t635DBC320EDF562E36389EC297EDFBF7DBB35A53* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5777B20754B5D28BC1CC6B0576417443BB9FE136* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// Photon.Realtime.AppSettings
struct AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7  : public RuntimeObject
{
	// System.String Photon.Realtime.AppSettings::AppIdRealtime
	String_t* ___AppIdRealtime_0;
	// System.String Photon.Realtime.AppSettings::AppIdFusion
	String_t* ___AppIdFusion_1;
	// System.String Photon.Realtime.AppSettings::AppIdChat
	String_t* ___AppIdChat_2;
	// System.String Photon.Realtime.AppSettings::AppIdVoice
	String_t* ___AppIdVoice_3;
	// System.String Photon.Realtime.AppSettings::AppVersion
	String_t* ___AppVersion_4;
	// System.Boolean Photon.Realtime.AppSettings::UseNameServer
	bool ___UseNameServer_5;
	// System.String Photon.Realtime.AppSettings::FixedRegion
	String_t* ___FixedRegion_6;
	// System.String Photon.Realtime.AppSettings::BestRegionSummaryFromStorage
	String_t* ___BestRegionSummaryFromStorage_7;
	// System.String Photon.Realtime.AppSettings::Server
	String_t* ___Server_8;
	// System.Int32 Photon.Realtime.AppSettings::Port
	int32_t ___Port_9;
	// System.String Photon.Realtime.AppSettings::ProxyServer
	String_t* ___ProxyServer_10;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Realtime.AppSettings::Protocol
	uint8_t ___Protocol_11;
	// System.Boolean Photon.Realtime.AppSettings::EnableProtocolFallback
	bool ___EnableProtocolFallback_12;
	// Photon.Realtime.AuthModeOption Photon.Realtime.AppSettings::AuthMode
	int32_t ___AuthMode_13;
	// System.Boolean Photon.Realtime.AppSettings::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_14;
	// ExitGames.Client.Photon.DebugLevel Photon.Realtime.AppSettings::NetworkLogging
	uint8_t ___NetworkLogging_15;
};

// Photon.Chat.Demo.AppSettingsExtensions
struct AppSettingsExtensions_t59ECE03A5423182D8C7204044BC87A3F51186BF8  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// Photon.Chat.AuthenticationValues
struct AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C  : public RuntimeObject
{
	// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String Photon.Chat.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object Photon.Chat.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject* ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.Object Photon.Chat.AuthenticationValues::<Token>k__BackingField
	RuntimeObject* ___U3CTokenU3Ek__BackingField_3;
	// System.String Photon.Chat.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;
};

// Photon.Chat.ChatAppSettings
struct ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689  : public RuntimeObject
{
	// System.String Photon.Chat.ChatAppSettings::AppIdChat
	String_t* ___AppIdChat_0;
	// System.String Photon.Chat.ChatAppSettings::AppVersion
	String_t* ___AppVersion_1;
	// System.String Photon.Chat.ChatAppSettings::FixedRegion
	String_t* ___FixedRegion_2;
	// System.String Photon.Chat.ChatAppSettings::Server
	String_t* ___Server_3;
	// System.UInt16 Photon.Chat.ChatAppSettings::Port
	uint16_t ___Port_4;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Chat.ChatAppSettings::Protocol
	uint8_t ___Protocol_5;
	// System.Boolean Photon.Chat.ChatAppSettings::EnableProtocolFallback
	bool ___EnableProtocolFallback_6;
	// ExitGames.Client.Photon.DebugLevel Photon.Chat.ChatAppSettings::NetworkLogging
	uint8_t ___NetworkLogging_7;
};

// Photon.Chat.ChatChannel
struct ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1  : public RuntimeObject
{
	// System.String Photon.Chat.ChatChannel::Name
	String_t* ___Name_0;
	// System.Collections.Generic.List`1<System.String> Photon.Chat.ChatChannel::Senders
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___Senders_1;
	// System.Collections.Generic.List`1<System.Object> Photon.Chat.ChatChannel::Messages
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___Messages_2;
	// System.Int32 Photon.Chat.ChatChannel::MessageLimit
	int32_t ___MessageLimit_3;
	// System.Int32 Photon.Chat.ChatChannel::ChannelID
	int32_t ___ChannelID_4;
	// System.Boolean Photon.Chat.ChatChannel::<IsPrivate>k__BackingField
	bool ___U3CIsPrivateU3Ek__BackingField_5;
	// System.Int32 Photon.Chat.ChatChannel::<LastMsgId>k__BackingField
	int32_t ___U3CLastMsgIdU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Object> Photon.Chat.ChatChannel::properties
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___properties_7;
	// System.Boolean Photon.Chat.ChatChannel::<PublishSubscribers>k__BackingField
	bool ___U3CPublishSubscribersU3Ek__BackingField_8;
	// System.Int32 Photon.Chat.ChatChannel::<MaxSubscribers>k__BackingField
	int32_t ___U3CMaxSubscribersU3Ek__BackingField_9;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Chat.ChatChannel::Subscribers
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___Subscribers_10;
};

// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9  : public RuntimeObject
{
	// System.String Photon.Realtime.EnterRoomParams::RoomName
	String_t* ___RoomName_0;
	// Photon.Realtime.RoomOptions Photon.Realtime.EnterRoomParams::RoomOptions
	RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* ___RoomOptions_1;
	// Photon.Realtime.TypedLobby Photon.Realtime.EnterRoomParams::Lobby
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___Lobby_2;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.EnterRoomParams::PlayerProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___PlayerProperties_3;
	// System.Boolean Photon.Realtime.EnterRoomParams::OnGameServer
	bool ___OnGameServer_4;
	// Photon.Realtime.JoinMode Photon.Realtime.EnterRoomParams::JoinMode
	uint8_t ___JoinMode_5;
	// System.String[] Photon.Realtime.EnterRoomParams::ExpectedUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ExpectedUsers_6;
};

// Photon.Realtime.OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA  : public RuntimeObject
{
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.OpJoinRandomRoomParams::ExpectedCustomRoomProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___ExpectedCustomRoomProperties_0;
	// System.Byte Photon.Realtime.OpJoinRandomRoomParams::ExpectedMaxPlayers
	uint8_t ___ExpectedMaxPlayers_1;
	// Photon.Realtime.MatchmakingMode Photon.Realtime.OpJoinRandomRoomParams::MatchingType
	uint8_t ___MatchingType_2;
	// Photon.Realtime.TypedLobby Photon.Realtime.OpJoinRandomRoomParams::TypedLobby
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___TypedLobby_3;
	// System.String Photon.Realtime.OpJoinRandomRoomParams::SqlLobbyFilter
	String_t* ___SqlLobbyFilter_4;
	// System.String[] Photon.Realtime.OpJoinRandomRoomParams::ExpectedUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ExpectedUsers_5;
};

// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C  : public RuntimeObject
{
	// Photon.Realtime.Room Photon.Realtime.Player::<RoomReference>k__BackingField
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.Player::actorNumber
	int32_t ___actorNumber_1;
	// System.Boolean Photon.Realtime.Player::IsLocal
	bool ___IsLocal_2;
	// System.Boolean Photon.Realtime.Player::<HasRejoined>k__BackingField
	bool ___U3CHasRejoinedU3Ek__BackingField_3;
	// System.String Photon.Realtime.Player::nickName
	String_t* ___nickName_4;
	// System.String Photon.Realtime.Player::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_5;
	// System.Boolean Photon.Realtime.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_6;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::<CustomProperties>k__BackingField
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___U3CCustomPropertiesU3Ek__BackingField_7;
	// System.Object Photon.Realtime.Player::TagObject
	RuntimeObject* ___TagObject_8;
};

// UnityEngine.Purchasing.Product
struct Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E  : public RuntimeObject
{
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::<definition>k__BackingField
	ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* ___U3CdefinitionU3Ek__BackingField_0;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::<metadata>k__BackingField
	ProductMetadata_t8C8138607558F5A57C08B6257B38FC2C77B32164* ___U3CmetadataU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Purchasing.Product::<availableToPurchase>k__BackingField
	bool ___U3CavailableToPurchaseU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Product::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Product::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_4;
};

// Photon.Realtime.Region
struct Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A  : public RuntimeObject
{
	// System.String Photon.Realtime.Region::<Code>k__BackingField
	String_t* ___U3CCodeU3Ek__BackingField_0;
	// System.String Photon.Realtime.Region::<Cluster>k__BackingField
	String_t* ___U3CClusterU3Ek__BackingField_1;
	// System.String Photon.Realtime.Region::<HostAndPort>k__BackingField
	String_t* ___U3CHostAndPortU3Ek__BackingField_2;
	// System.Int32 Photon.Realtime.Region::<Ping>k__BackingField
	int32_t ___U3CPingU3Ek__BackingField_3;
};

// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Photon.Realtime.Region> Photon.Realtime.RegionHandler::<EnabledRegions>k__BackingField
	List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* ___U3CEnabledRegionsU3Ek__BackingField_1;
	// System.String Photon.Realtime.RegionHandler::availableRegionCodes
	String_t* ___availableRegionCodes_2;
	// Photon.Realtime.Region Photon.Realtime.RegionHandler::bestRegionCache
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* ___bestRegionCache_3;
	// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger> Photon.Realtime.RegionHandler::pingerList
	List_1_t6F972EAFC64258DD491584080B232EC12BE33581* ___pingerList_4;
	// System.Action`1<Photon.Realtime.RegionHandler> Photon.Realtime.RegionHandler::onCompleteCall
	Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* ___onCompleteCall_5;
	// System.Int32 Photon.Realtime.RegionHandler::previousPing
	int32_t ___previousPing_6;
	// System.Boolean Photon.Realtime.RegionHandler::<IsPinging>k__BackingField
	bool ___U3CIsPingingU3Ek__BackingField_7;
	// System.String Photon.Realtime.RegionHandler::previousSummaryProvided
	String_t* ___previousSummaryProvided_8;
};

struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_StaticFields
{
	// System.Type Photon.Realtime.RegionHandler::PingImplementation
	Type_t* ___PingImplementation_0;
	// System.UInt16 Photon.Realtime.RegionHandler::PortToPingOverride
	uint16_t ___PortToPingOverride_9;
};

// Photon.Realtime.RoomInfo
struct RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D  : public RuntimeObject
{
	// System.Boolean Photon.Realtime.RoomInfo::RemovedFromList
	bool ___RemovedFromList_0;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::customProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___customProperties_1;
	// System.Byte Photon.Realtime.RoomInfo::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.Int32 Photon.Realtime.RoomInfo::emptyRoomTtl
	int32_t ___emptyRoomTtl_3;
	// System.Int32 Photon.Realtime.RoomInfo::playerTtl
	int32_t ___playerTtl_4;
	// System.String[] Photon.Realtime.RoomInfo::expectedUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___expectedUsers_5;
	// System.Boolean Photon.Realtime.RoomInfo::isOpen
	bool ___isOpen_6;
	// System.Boolean Photon.Realtime.RoomInfo::isVisible
	bool ___isVisible_7;
	// System.Boolean Photon.Realtime.RoomInfo::autoCleanUp
	bool ___autoCleanUp_8;
	// System.String Photon.Realtime.RoomInfo::name
	String_t* ___name_9;
	// System.Int32 Photon.Realtime.RoomInfo::masterClientId
	int32_t ___masterClientId_10;
	// System.String[] Photon.Realtime.RoomInfo::propertiesListedInLobby
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertiesListedInLobby_11;
	// System.Int32 Photon.Realtime.RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_12;
};

// Photon.Realtime.RoomOptions
struct RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23  : public RuntimeObject
{
	// System.Boolean Photon.Realtime.RoomOptions::isVisible
	bool ___isVisible_0;
	// System.Boolean Photon.Realtime.RoomOptions::isOpen
	bool ___isOpen_1;
	// System.Byte Photon.Realtime.RoomOptions::MaxPlayers
	uint8_t ___MaxPlayers_2;
	// System.Int32 Photon.Realtime.RoomOptions::PlayerTtl
	int32_t ___PlayerTtl_3;
	// System.Int32 Photon.Realtime.RoomOptions::EmptyRoomTtl
	int32_t ___EmptyRoomTtl_4;
	// System.Boolean Photon.Realtime.RoomOptions::cleanupCacheOnLeave
	bool ___cleanupCacheOnLeave_5;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomOptions::CustomRoomProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___CustomRoomProperties_6;
	// System.String[] Photon.Realtime.RoomOptions::CustomRoomPropertiesForLobby
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___CustomRoomPropertiesForLobby_7;
	// System.String[] Photon.Realtime.RoomOptions::Plugins
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Plugins_8;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_9;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.RoomOptions::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_11;
	// System.Boolean Photon.Realtime.RoomOptions::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_12;
	// System.Boolean Photon.Realtime.RoomOptions::broadcastPropsChangeToAll
	bool ___broadcastPropsChangeToAll_13;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Photon.Realtime.TypedLobby
struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9  : public RuntimeObject
{
	// System.String Photon.Realtime.TypedLobby::Name
	String_t* ___Name_0;
	// Photon.Realtime.LobbyType Photon.Realtime.TypedLobby::Type
	uint8_t ___Type_1;
};

struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9_StaticFields
{
	// Photon.Realtime.TypedLobby Photon.Realtime.TypedLobby::Default
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___Default_2;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;
};

struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields
{
	// System.Byte[] UnityEngine.WWWForm::dDash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dDash_6;
	// System.Byte[] UnityEngine.WWWForm::crlf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___crlf_7;
	// System.Byte[] UnityEngine.WWWForm::contentTypeHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___contentTypeHeader_8;
	// System.Byte[] UnityEngine.WWWForm::dispositionHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dispositionHeader_9;
	// System.Byte[] UnityEngine.WWWForm::endQuote
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___endQuote_10;
	// System.Byte[] UnityEngine.WWWForm::fileNameField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fileNameField_11;
	// System.Byte[] UnityEngine.WWWForm::ampersand
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ampersand_12;
	// System.Byte[] UnityEngine.WWWForm::equal
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___equal_13;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// KID.DamageManager/<Dissolve>d__17
struct U3CDissolveU3Ed__17_tA6A4DCF6A76ABA736835BC81F49E5AABB941FCF0  : public RuntimeObject
{
	// System.Int32 KID.DamageManager/<Dissolve>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object KID.DamageManager/<Dissolve>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// KID.DamageManager KID.DamageManager/<Dissolve>d__17::<>4__this
	DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* ___U3CU3E4__this_2;
	// System.Single KID.DamageManager/<Dissolve>d__17::<valueDissolve>5__2
	float ___U3CvalueDissolveU3E5__2_3;
	// System.Int32 KID.DamageManager/<Dissolve>d__17::<i>5__3
	int32_t ___U3CiU3E5__3_4;
};

// KID.DataManager/<StartGetGASData>d__7
struct U3CStartGetGASDataU3Ed__7_t7BFEBEB62935222C1A10AF1ED67E56DB00ED3A7B  : public RuntimeObject
{
	// System.Int32 KID.DataManager/<StartGetGASData>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object KID.DataManager/<StartGetGASData>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// KID.DataManager KID.DataManager/<StartGetGASData>d__7::<>4__this
	DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest KID.DataManager/<StartGetGASData>d__7::<www>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwwwU3E5__2_3;
};

// KID.DataManager/<StartSetGASData>d__9
struct U3CStartSetGASDataU3Ed__9_tD11A595674AD69FA7F0E3274383E263F032F9986  : public RuntimeObject
{
	// System.Int32 KID.DataManager/<StartSetGASData>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object KID.DataManager/<StartSetGASData>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// KID.DataManager KID.DataManager/<StartSetGASData>d__9::<>4__this
	DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest KID.DataManager/<StartSetGASData>d__9::<www>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwwwU3E5__2_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UI.Toggle>
struct KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___value_1;
};

// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>
struct Nullable_1_tC61504D4999670A5A2480A3B5CB4AC8A71EEE32E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint8_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>
struct UnityEvent_1_t6F642369BDFC7D0E708896E55DA6FB6124268644  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>
struct UnityEvent_2_tCFCF0C97EE0ABE297CC34E23A38D361505D5AAFF  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// Photon.Realtime.PhotonPortDefinition
struct PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A 
{
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::NameServerPort
	uint16_t ___NameServerPort_1;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::MasterServerPort
	uint16_t ___MasterServerPort_2;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::GameServerPort
	uint16_t ___GameServerPort_3;
};

struct PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A_StaticFields
{
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.PhotonPortDefinition::AlternativeUdpPorts
	PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A ___AlternativeUdpPorts_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// Photon.Realtime.Room
struct Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373  : public RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D
{
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::<LoadBalancingClient>k__BackingField
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___U3CLoadBalancingClientU3Ek__BackingField_13;
	// System.Boolean Photon.Realtime.Room::isOffline
	bool ___isOffline_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::players
	Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* ___players_15;
	// System.Boolean Photon.Realtime.Room::<BroadcastPropertiesChangeToAll>k__BackingField
	bool ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16;
	// System.Boolean Photon.Realtime.Room::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_17;
	// System.Boolean Photon.Realtime.Room::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_18;
	// System.Boolean Photon.Realtime.Room::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_19;
	// System.Boolean Photon.Realtime.Room::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_20;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// Cinemachine.CameraState/CustomBlendable
struct CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB 
{
	// UnityEngine.Object Cinemachine.CameraState/CustomBlendable::m_Custom
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_Custom_0;
	// System.Single Cinemachine.CameraState/CustomBlendable::m_Weight
	float ___m_Weight_1;
};

// Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA 
{
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_BlendHint
	int32_t ___m_BlendHint_0;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_InheritPosition
	bool ___m_InheritPosition_1;
	// Cinemachine.CinemachineBrain/VcamActivatedEvent Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_OnCameraLive
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};
// Native definition for P/Invoke marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA_marshaled_pinvoke
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};
// Native definition for COM marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA_marshaled_com
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive_2;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.UI.Toggle>
struct Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Photon.Chat.ChatClient
struct ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA  : public RuntimeObject
{
	// System.Boolean Photon.Chat.ChatClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_3;
	// System.String Photon.Chat.ChatClient::<NameServerAddress>k__BackingField
	String_t* ___U3CNameServerAddressU3Ek__BackingField_4;
	// System.String Photon.Chat.ChatClient::<FrontendAddress>k__BackingField
	String_t* ___U3CFrontendAddressU3Ek__BackingField_5;
	// System.String Photon.Chat.ChatClient::chatRegion
	String_t* ___chatRegion_6;
	// Photon.Chat.ChatState Photon.Chat.ChatClient::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_7;
	// Photon.Chat.ChatDisconnectCause Photon.Chat.ChatClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_8;
	// System.String Photon.Chat.ChatClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_9;
	// System.String Photon.Chat.ChatClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_10;
	// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::<AuthValues>k__BackingField
	AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* ___U3CAuthValuesU3Ek__BackingField_11;
	// System.Int32 Photon.Chat.ChatClient::MessageLimit
	int32_t ___MessageLimit_12;
	// System.Int32 Photon.Chat.ChatClient::PrivateChatHistoryLength
	int32_t ___PrivateChatHistoryLength_13;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel> Photon.Chat.ChatClient::PublicChannels
	Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E* ___PublicChannels_14;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel> Photon.Chat.ChatClient::PrivateChannels
	Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E* ___PrivateChannels_15;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Chat.ChatClient::PublicChannelsUnsubscribing
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___PublicChannelsUnsubscribing_16;
	// Photon.Chat.IChatClientListener Photon.Chat.ChatClient::listener
	RuntimeObject* ___listener_17;
	// Photon.Chat.ChatPeer Photon.Chat.ChatClient::chatPeer
	ChatPeer_t216E56C8D1791380415477470013A3787DF76D43* ___chatPeer_18;
	// System.Boolean Photon.Chat.ChatClient::didAuthenticate
	bool ___didAuthenticate_20;
	// System.Nullable`1<System.Int32> Photon.Chat.ChatClient::statusToSetWhenConnected
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___statusToSetWhenConnected_21;
	// System.Object Photon.Chat.ChatClient::messageToSetWhenConnected
	RuntimeObject* ___messageToSetWhenConnected_22;
	// System.Int32 Photon.Chat.ChatClient::msDeltaForServiceCalls
	int32_t ___msDeltaForServiceCalls_23;
	// System.Int32 Photon.Chat.ChatClient::msTimestampOfLastServiceCall
	int32_t ___msTimestampOfLastServiceCall_24;
	// System.Boolean Photon.Chat.ChatClient::<UseBackgroundWorkerForSending>k__BackingField
	bool ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.ContactPoint
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 
{
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE 
{
	// System.Single Cinemachine.LensSettings::FieldOfView
	float ___FieldOfView_1;
	// System.Single Cinemachine.LensSettings::OrthographicSize
	float ___OrthographicSize_2;
	// System.Single Cinemachine.LensSettings::NearClipPlane
	float ___NearClipPlane_3;
	// System.Single Cinemachine.LensSettings::FarClipPlane
	float ___FarClipPlane_4;
	// System.Single Cinemachine.LensSettings::Dutch
	float ___Dutch_5;
	// Cinemachine.LensSettings/OverrideModes Cinemachine.LensSettings::ModeOverride
	int32_t ___ModeOverride_6;
	// UnityEngine.Vector2 Cinemachine.LensSettings::LensShift
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	// UnityEngine.Camera/GateFitMode Cinemachine.LensSettings::GateFit
	int32_t ___GateFit_8;
	// UnityEngine.Vector2 Cinemachine.LensSettings::m_SensorSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	// System.Boolean Cinemachine.LensSettings::m_OrthoFromCamera
	bool ___m_OrthoFromCamera_10;
	// System.Boolean Cinemachine.LensSettings::m_PhysicalFromCamera
	bool ___m_PhysicalFromCamera_11;
};

struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_StaticFields
{
	// Cinemachine.LensSettings Cinemachine.LensSettings::Default
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___Default_0;
};
// Native definition for P/Invoke marshalling of Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_pinvoke
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
};
// Native definition for COM marshalling of Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_com
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
};

// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4  : public RuntimeObject
{
	// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::<LoadBalancingPeer>k__BackingField
	LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* ___U3CLoadBalancingPeerU3Ek__BackingField_0;
	// System.String Photon.Realtime.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String Photon.Realtime.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// Photon.Realtime.ClientAppType Photon.Realtime.LoadBalancingClient::<ClientType>k__BackingField
	int32_t ___U3CClientTypeU3Ek__BackingField_3;
	// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* ___U3CAuthValuesU3Ek__BackingField_4;
	// Photon.Realtime.AuthModeOption Photon.Realtime.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_5;
	// Photon.Realtime.EncryptionMode Photon.Realtime.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_6;
	// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol> Photon.Realtime.LoadBalancingClient::<ExpectedProtocol>k__BackingField
	Nullable_1_tC61504D4999670A5A2480A3B5CB4AC8A71EEE32E ___U3CExpectedProtocolU3Ek__BackingField_7;
	// System.Object Photon.Realtime.LoadBalancingClient::tokenCache
	RuntimeObject* ___tokenCache_8;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_9;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_10;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12;
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.LoadBalancingClient::ServerPortOverrides
	PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A ___ServerPortOverrides_13;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_14;
	// System.String Photon.Realtime.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_15;
	// System.String Photon.Realtime.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_16;
	// Photon.Realtime.ServerConnection Photon.Realtime.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_17;
	// System.String Photon.Realtime.LoadBalancingClient::ProxyServerAddress
	String_t* ___ProxyServerAddress_18;
	// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::state
	int32_t ___state_19;
	// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState> Photon.Realtime.LoadBalancingClient::StateChanged
	Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* ___StateChanged_20;
	// System.Action`1<ExitGames.Client.Photon.EventData> Photon.Realtime.LoadBalancingClient::EventReceived
	Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295* ___EventReceived_21;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> Photon.Realtime.LoadBalancingClient::OpResponseReceived
	Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826* ___OpResponseReceived_22;
	// Photon.Realtime.ConnectionCallbacksContainer Photon.Realtime.LoadBalancingClient::ConnectionCallbackTargets
	ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD* ___ConnectionCallbackTargets_23;
	// Photon.Realtime.MatchMakingCallbacksContainer Photon.Realtime.LoadBalancingClient::MatchMakingCallbackTargets
	MatchMakingCallbacksContainer_tEDF984018478E15D3031775F859CD94D66275C97* ___MatchMakingCallbackTargets_24;
	// Photon.Realtime.InRoomCallbacksContainer Photon.Realtime.LoadBalancingClient::InRoomCallbackTargets
	InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488* ___InRoomCallbackTargets_25;
	// Photon.Realtime.LobbyCallbacksContainer Photon.Realtime.LoadBalancingClient::LobbyCallbackTargets
	LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC* ___LobbyCallbackTargets_26;
	// Photon.Realtime.WebRpcCallbacksContainer Photon.Realtime.LoadBalancingClient::WebRpcCallbackTargets
	WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851* ___WebRpcCallbackTargets_27;
	// Photon.Realtime.ErrorInfoCallbacksContainer Photon.Realtime.LoadBalancingClient::ErrorInfoCallbackTargets
	ErrorInfoCallbacksContainer_tF60CA97691A86635843C02EEA1D689A384BC7ED7* ___ErrorInfoCallbackTargets_28;
	// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_29;
	// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___U3CCurrentLobbyU3Ek__BackingField_30;
	// System.Boolean Photon.Realtime.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_31;
	// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo> Photon.Realtime.LoadBalancingClient::lobbyStatistics
	List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15* ___lobbyStatistics_32;
	// Photon.Realtime.Player Photon.Realtime.LoadBalancingClient::<LocalPlayer>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3CLocalPlayerU3Ek__BackingField_33;
	// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::<CurrentRoom>k__BackingField
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___U3CCurrentRoomU3Ek__BackingField_34;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_35;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_36;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_37;
	// Photon.Realtime.JoinType Photon.Realtime.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_38;
	// Photon.Realtime.EnterRoomParams Photon.Realtime.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___enterRoomParamsCache_39;
	// ExitGames.Client.Photon.OperationResponse Photon.Realtime.LoadBalancingClient::failedRoomEntryOperation
	OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* ___failedRoomEntryOperation_40;
	// System.String[] Photon.Realtime.LoadBalancingClient::friendListRequested
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___friendListRequested_42;
	// System.String Photon.Realtime.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_43;
	// System.String Photon.Realtime.LoadBalancingClient::<CurrentCluster>k__BackingField
	String_t* ___U3CCurrentClusterU3Ek__BackingField_44;
	// Photon.Realtime.RegionHandler Photon.Realtime.LoadBalancingClient::RegionHandler
	RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___RegionHandler_45;
	// System.String Photon.Realtime.LoadBalancingClient::bestRegionSummaryFromStorage
	String_t* ___bestRegionSummaryFromStorage_46;
	// System.String Photon.Realtime.LoadBalancingClient::SummaryToCache
	String_t* ___SummaryToCache_47;
	// System.Boolean Photon.Realtime.LoadBalancingClient::connectToBestRegion
	bool ___connectToBestRegion_48;
	// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange> Photon.Realtime.LoadBalancingClient::callbackTargetChanges
	Queue_1_t9BA80EF655597EC91F8BA37831960B5B70540B02* ___callbackTargetChanges_49;
	// System.Collections.Generic.HashSet`1<System.Object> Photon.Realtime.LoadBalancingClient::callbackTargets
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___callbackTargets_50;
	// System.Int32 Photon.Realtime.LoadBalancingClient::NameServerPortInAppSettings
	int32_t ___NameServerPortInAppSettings_51;
};

struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_StaticFields
{
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80* ___ProtocolToNameServerPort_11;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_t18A57F5B4A0DEB7D32E384CC96C3FF22F93CC062  : public UnityEvent_1_t6F642369BDFC7D0E708896E55DA6FB6124268644
{
};

// UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_t0684C539D061372B1102E2EF9665451BB93462D4  : public UnityEvent_2_tCFCF0C97EE0ABE297CC34E23A38D361505D5AAFF
{
};

// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 
{
	// Cinemachine.LensSettings Cinemachine.CameraState::Lens
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___Lens_0;
	// UnityEngine.Vector3 Cinemachine.CameraState::ReferenceUp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	// UnityEngine.Vector3 Cinemachine.CameraState::ReferenceLookAt
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	// UnityEngine.Vector3 Cinemachine.CameraState::RawPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	// UnityEngine.Quaternion Cinemachine.CameraState::RawOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	// UnityEngine.Vector3 Cinemachine.CameraState::PositionDampingBypass
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	// System.Single Cinemachine.CameraState::ShotQuality
	float ___ShotQuality_7;
	// UnityEngine.Vector3 Cinemachine.CameraState::PositionCorrection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	// UnityEngine.Quaternion Cinemachine.CameraState::OrientationCorrection
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	// Cinemachine.CameraState/BlendHintValue Cinemachine.CameraState::BlendHint
	int32_t ___BlendHint_10;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom0
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom1
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom2
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom3
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable> Cinemachine.CameraState::m_CustomOverflow
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	// System.Int32 Cinemachine.CameraState::<NumCustomBlendables>k__BackingField
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_StaticFields
{
	// UnityEngine.Vector3 Cinemachine.CameraState::kNoPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___kNoPoint_3;
};
// Native definition for P/Invoke marshalling of Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_marshaled_pinvoke
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_pinvoke ___Lens_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	float ___ShotQuality_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	int32_t ___BlendHint_10;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for COM marshalling of Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_marshaled_com
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_com ___Lens_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	float ___ShotQuality_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	int32_t ___BlendHint_10;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// System.Action`1<Photon.Realtime.RegionHandler>
struct Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.Purchasing.Product>
struct UnityAction_1_t883DB0050E6D028D160EC19EBB491300FABAC545  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>
struct UnityAction_2_t0B22D23CA1A25950B702D39FA05C0F818460A1D4  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Photon.Pun.ServerSettings
struct ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Photon.Realtime.AppSettings Photon.Pun.ServerSettings::AppSettings
	AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___AppSettings_4;
	// System.String Photon.Pun.ServerSettings::DevRegion
	String_t* ___DevRegion_5;
	// Photon.Pun.PunLogLevel Photon.Pun.ServerSettings::PunLogging
	int32_t ___PunLogging_6;
	// System.Boolean Photon.Pun.ServerSettings::EnableSupportLogger
	bool ___EnableSupportLogger_7;
	// System.Boolean Photon.Pun.ServerSettings::RunInBackground
	bool ___RunInBackground_8;
	// System.Boolean Photon.Pun.ServerSettings::StartInOfflineMode
	bool ___StartInOfflineMode_9;
	// System.Collections.Generic.List`1<System.String> Photon.Pun.ServerSettings::RpcList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___RpcList_10;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// KID.AdsManager
struct AdsManager_t71168750765A444342C2737FCB33AFE43B9DEF0D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 KID.AdsManager::addCoinValue
	int32_t ___addCoinValue_4;
	// System.Int32 KID.AdsManager::coinPlayer
	int32_t ___coinPlayer_5;
	// UnityEngine.UI.Button KID.AdsManager::btnAdsAddCoin
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnAdsAddCoin_6;
	// System.String KID.AdsManager::gameIdAndroid
	String_t* ___gameIdAndroid_7;
	// System.String KID.AdsManager::gameIdIos
	String_t* ___gameIdIos_8;
	// System.String KID.AdsManager::gameId
	String_t* ___gameId_9;
	// System.String KID.AdsManager::adsIdAndroid
	String_t* ___adsIdAndroid_10;
	// System.String KID.AdsManager::adsIdIos
	String_t* ___adsIdIos_11;
	// System.String KID.AdsManager::adsId
	String_t* ___adsId_12;
	// UnityEngine.UI.Text KID.AdsManager::textCoin
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textCoin_13;
};

// Photon.Chat.Demo.ChannelSelector
struct ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Photon.Chat.Demo.ChannelSelector::Channel
	String_t* ___Channel_4;
};

// Photon.Chat.Demo.ChatAppIdCheckerUI
struct ChatAppIdCheckerUI_t43522738EEA1186C60A64B652B157BC5FA4FC22D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Photon.Chat.Demo.ChatAppIdCheckerUI::Description
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Description_4;
};

// Photon.Chat.Demo.ChatGui
struct ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String[] Photon.Chat.Demo.ChatGui::ChannelsToJoinOnConnect
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ChannelsToJoinOnConnect_4;
	// System.String[] Photon.Chat.Demo.ChatGui::FriendsList
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___FriendsList_5;
	// System.Int32 Photon.Chat.Demo.ChatGui::HistoryLengthToFetch
	int32_t ___HistoryLengthToFetch_6;
	// System.String Photon.Chat.Demo.ChatGui::<UserName>k__BackingField
	String_t* ___U3CUserNameU3Ek__BackingField_7;
	// System.String Photon.Chat.Demo.ChatGui::selectedChannelName
	String_t* ___selectedChannelName_8;
	// Photon.Chat.ChatClient Photon.Chat.Demo.ChatGui::chatClient
	ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* ___chatClient_9;
	// Photon.Chat.ChatAppSettings Photon.Chat.Demo.ChatGui::chatAppSettings
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* ___chatAppSettings_10;
	// UnityEngine.GameObject Photon.Chat.Demo.ChatGui::missingAppIdErrorPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___missingAppIdErrorPanel_11;
	// UnityEngine.GameObject Photon.Chat.Demo.ChatGui::ConnectingLabel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ConnectingLabel_12;
	// UnityEngine.RectTransform Photon.Chat.Demo.ChatGui::ChatPanel
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___ChatPanel_13;
	// UnityEngine.GameObject Photon.Chat.Demo.ChatGui::UserIdFormPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___UserIdFormPanel_14;
	// UnityEngine.UI.InputField Photon.Chat.Demo.ChatGui::InputFieldChat
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___InputFieldChat_15;
	// UnityEngine.UI.Text Photon.Chat.Demo.ChatGui::CurrentChannelText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___CurrentChannelText_16;
	// UnityEngine.UI.Toggle Photon.Chat.Demo.ChatGui::ChannelToggleToInstantiate
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___ChannelToggleToInstantiate_17;
	// UnityEngine.GameObject Photon.Chat.Demo.ChatGui::FriendListUiItemtoInstantiate
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FriendListUiItemtoInstantiate_18;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle> Photon.Chat.Demo.ChatGui::channelToggles
	Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* ___channelToggles_19;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem> Photon.Chat.Demo.ChatGui::friendListItemLUT
	Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* ___friendListItemLUT_20;
	// System.Boolean Photon.Chat.Demo.ChatGui::ShowState
	bool ___ShowState_21;
	// UnityEngine.GameObject Photon.Chat.Demo.ChatGui::Title
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Title_22;
	// UnityEngine.UI.Text Photon.Chat.Demo.ChatGui::StateText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___StateText_23;
	// UnityEngine.UI.Text Photon.Chat.Demo.ChatGui::UserIdText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___UserIdText_24;
	// System.Int32 Photon.Chat.Demo.ChatGui::TestLength
	int32_t ___TestLength_26;
	// System.Byte[] Photon.Chat.Demo.ChatGui::testBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___testBytes_27;
};

struct ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_StaticFields
{
	// System.String Photon.Chat.Demo.ChatGui::HelpText
	String_t* ___HelpText_25;
};

// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String[] Cinemachine.CinemachineVirtualCameraBase::m_ExcludedPropertiesInInspector
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ExcludedPropertiesInInspector_4;
	// Cinemachine.CinemachineCore/Stage[] Cinemachine.CinemachineVirtualCameraBase::m_LockStageInInspector
	StageU5BU5D_tF198CE3C6DE5C3D67552DAB4B9680F3BFF319981* ___m_LockStageInInspector_5;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ValidatingStreamVersion
	int32_t ___m_ValidatingStreamVersion_6;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_OnValidateCalled
	bool ___m_OnValidateCalled_7;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_StreamingVersion
	int32_t ___m_StreamingVersion_8;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_Priority
	int32_t ___m_Priority_9;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ActivationId
	int32_t ___m_ActivationId_10;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::FollowTargetAttachment
	float ___FollowTargetAttachment_11;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::LookAtTargetAttachment
	float ___LookAtTargetAttachment_12;
	// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode Cinemachine.CinemachineVirtualCameraBase::m_StandbyUpdate
	int32_t ___m_StandbyUpdate_13;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension> Cinemachine.CinemachineVirtualCameraBase::<mExtensions>k__BackingField
	List_1_tF512ECCA426FF10471372F52B5C8784FC96A7EAC* ___U3CmExtensionsU3Ek__BackingField_14;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<PreviousStateIsValid>k__BackingField
	bool ___U3CPreviousStateIsValidU3Ek__BackingField_15;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_WasStarted
	bool ___m_WasStarted_16;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::mSlaveStatusUpdated
	bool ___mSlaveStatusUpdated_17;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_parentVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_parentVcam_18;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_QueuePriority
	int32_t ___m_QueuePriority_19;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedFollowTarget_20;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_CachedFollowTargetVcam_21;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTargetGroup
	RuntimeObject* ___m_CachedFollowTargetGroup_22;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedLookAtTarget_23;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_CachedLookAtTargetVcam_24;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTargetGroup
	RuntimeObject* ___m_CachedLookAtTargetGroup_25;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<FollowTargetChanged>k__BackingField
	bool ___U3CFollowTargetChangedU3Ek__BackingField_26;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<LookAtTargetChanged>k__BackingField
	bool ___U3CLookAtTargetChangedU3Ek__BackingField_27;
};

// Photon.Realtime.Demo.ConnectAndJoinRandomLb
struct ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Realtime.AppSettings Photon.Realtime.Demo.ConnectAndJoinRandomLb::appSettings
	AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___appSettings_4;
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Demo.ConnectAndJoinRandomLb::lbc
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___lbc_5;
	// Photon.Realtime.ConnectionHandler Photon.Realtime.Demo.ConnectAndJoinRandomLb::ch
	ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* ___ch_6;
	// UnityEngine.UI.Text Photon.Realtime.Demo.ConnectAndJoinRandomLb::StateUiText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___StateUiText_7;
};

// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.ConnectionHandler::<Client>k__BackingField
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___U3CClientU3Ek__BackingField_4;
	// System.Boolean Photon.Realtime.ConnectionHandler::DisconnectAfterKeepAlive
	bool ___DisconnectAfterKeepAlive_5;
	// System.Int32 Photon.Realtime.ConnectionHandler::KeepAliveInBackground
	int32_t ___KeepAliveInBackground_6;
	// System.Int32 Photon.Realtime.ConnectionHandler::<CountSendAcksOnly>k__BackingField
	int32_t ___U3CCountSendAcksOnlyU3Ek__BackingField_7;
	// System.Boolean Photon.Realtime.ConnectionHandler::ApplyDontDestroyOnLoad
	bool ___ApplyDontDestroyOnLoad_8;
	// System.Byte Photon.Realtime.ConnectionHandler::fallbackThreadId
	uint8_t ___fallbackThreadId_10;
	// System.Boolean Photon.Realtime.ConnectionHandler::didSendAcks
	bool ___didSendAcks_11;
	// System.Diagnostics.Stopwatch Photon.Realtime.ConnectionHandler::backgroundStopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___backgroundStopwatch_12;
};

struct ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_StaticFields
{
	// System.Boolean Photon.Realtime.ConnectionHandler::AppQuits
	bool ___AppQuits_9;
};

// KID.DataManager
struct DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String KID.DataManager::gasLink
	String_t* ___gasLink_4;
	// UnityEngine.WWWForm KID.DataManager::form
	WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* ___form_5;
	// UnityEngine.UI.Button KID.DataManager::btnGetData
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnGetData_6;
	// UnityEngine.UI.Text KID.DataManager::textPlayerName
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textPlayerName_7;
	// TMPro.TMP_InputField KID.DataManager::inputField
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField_8;
};

// Photon.Chat.UtilityScripts.EventSystemSpawner
struct EventSystemSpawner_t823C33A21E4332F5D407768DB424BBDB0D17C77D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Chat.Demo.FriendItem
struct FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Photon.Chat.Demo.FriendItem::NameLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___NameLabel_4;
	// UnityEngine.UI.Text Photon.Chat.Demo.FriendItem::StatusLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___StatusLabel_5;
	// UnityEngine.UI.Text Photon.Chat.Demo.FriendItem::Health
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Health_6;
};

// TravisGameAssets.HitImpactEffectsPreview
struct HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Collider TravisGameAssets.HitImpactEffectsPreview::floorCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___floorCollider_4;
	// UnityEngine.Transform TravisGameAssets.HitImpactEffectsPreview::particlesPool
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___particlesPool_5;
	// UnityEngine.UI.Text TravisGameAssets.HitImpactEffectsPreview::hitNameLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___hitNameLabel_6;
	// UnityEngine.UI.Text TravisGameAssets.HitImpactEffectsPreview::hitIndexLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___hitIndexLabel_7;
	// UnityEngine.Transform TravisGameAssets.HitImpactEffectsPreview::cameraPivot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraPivot_8;
	// System.Single TravisGameAssets.HitImpactEffectsPreview::cameraRotationSpeed
	float ___cameraRotationSpeed_9;
	// UnityEngine.MeshRenderer TravisGameAssets.HitImpactEffectsPreview::floor
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___floor_10;
	// UnityEngine.UI.Image TravisGameAssets.HitImpactEffectsPreview::rotationIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___rotationIcon_11;
	// UnityEngine.UI.Image TravisGameAssets.HitImpactEffectsPreview::floorIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___floorIcon_12;
	// UnityEngine.UI.Image TravisGameAssets.HitImpactEffectsPreview::slowMotionIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___slowMotionIcon_13;
	// UnityEngine.GameObject TravisGameAssets.HitImpactEffectsPreview::light
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___light_14;
	// UnityEngine.GameObject[] TravisGameAssets.HitImpactEffectsPreview::hitEffects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___hitEffects_15;
	// System.Int32 TravisGameAssets.HitImpactEffectsPreview::hitIndex
	int32_t ___hitIndex_16;
	// UnityEngine.Vector3 TravisGameAssets.HitImpactEffectsPreview::initCamPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initCamPosition_17;
	// UnityEngine.Quaternion TravisGameAssets.HitImpactEffectsPreview::initCamRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___initCamRotation_18;
	// System.Single TravisGameAssets.HitImpactEffectsPreview::initFov
	float ___initFov_19;
	// System.Single TravisGameAssets.HitImpactEffectsPreview::minFov
	float ___minFov_20;
	// System.Single TravisGameAssets.HitImpactEffectsPreview::maxFov
	float ___maxFov_21;
	// System.Single TravisGameAssets.HitImpactEffectsPreview::sensitivity
	float ___sensitivity_22;
	// System.Boolean TravisGameAssets.HitImpactEffectsPreview::cameraRotating
	bool ___cameraRotating_23;
	// System.Boolean TravisGameAssets.HitImpactEffectsPreview::floorVisible
	bool ___floorVisible_24;
	// System.Boolean TravisGameAssets.HitImpactEffectsPreview::slowMotion
	bool ___slowMotion_25;
	// System.Boolean TravisGameAssets.HitImpactEffectsPreview::lighting
	bool ___lighting_26;
};

// UnityEngine.Purchasing.IAPButton
struct IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UnityEngine.Purchasing.IAPButton::productId
	String_t* ___productId_4;
	// UnityEngine.Purchasing.IAPButton/ButtonType UnityEngine.Purchasing.IAPButton::buttonType
	int32_t ___buttonType_5;
	// System.Boolean UnityEngine.Purchasing.IAPButton::consumePurchase
	bool ___consumePurchase_6;
	// UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent UnityEngine.Purchasing.IAPButton::onPurchaseComplete
	OnPurchaseCompletedEvent_t18A57F5B4A0DEB7D32E384CC96C3FF22F93CC062* ___onPurchaseComplete_7;
	// UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent UnityEngine.Purchasing.IAPButton::onPurchaseFailed
	OnPurchaseFailedEvent_t0684C539D061372B1102E2EF9665451BB93462D4* ___onPurchaseFailed_8;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::titleText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___titleText_9;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::descriptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___descriptionText_10;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::priceText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___priceText_11;
};

// KID.IAPManager
struct IAPManager_tFA110631DC797A96B6823AB71164EEBFE37BF3BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Purchasing.IAPButton KID.IAPManager::iapBuySkinRed
	IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* ___iapBuySkinRed_4;
	// UnityEngine.UI.Text KID.IAPManager::textIAPTip
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textIAPTip_5;
	// System.Boolean KID.IAPManager::hasSkinRed
	bool ___hasSkinRed_6;
};

// Photon.Chat.Demo.IgnoreUiRaycastWhenInactive
struct IgnoreUiRaycastWhenInactive_t4DD606784A41379E617458D4FF2D041690E7BAEF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Joystick
struct Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Joystick::handleRange
	float ___handleRange_4;
	// System.Single Joystick::deadZone
	float ___deadZone_5;
	// AxisOptions Joystick::axisOptions
	int32_t ___axisOptions_6;
	// System.Boolean Joystick::snapX
	bool ___snapX_7;
	// System.Boolean Joystick::snapY
	bool ___snapY_8;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___background_9;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handle_10;
	// UnityEngine.RectTransform Joystick::baseRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___baseRect_11;
	// UnityEngine.Canvas Joystick::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_12;
	// UnityEngine.Camera Joystick::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_13;
	// UnityEngine.Vector2 Joystick::input
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input_14;
};

// JoystickPlayerExample
struct JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single JoystickPlayerExample::speed
	float ___speed_4;
	// VariableJoystick JoystickPlayerExample::variableJoystick
	VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* ___variableJoystick_5;
	// UnityEngine.Rigidbody JoystickPlayerExample::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_6;
};

// JoystickSetterExample
struct JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VariableJoystick JoystickSetterExample::variableJoystick
	VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* ___variableJoystick_4;
	// UnityEngine.UI.Text JoystickSetterExample::valueText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___valueText_5;
	// UnityEngine.UI.Image JoystickSetterExample::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_6;
	// UnityEngine.Sprite[] JoystickSetterExample::axisSprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___axisSprites_7;
};

// Photon.Pun.MonoBehaviourPun
struct MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::pvCache
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___pvCache_4;
};

// Photon.Chat.Demo.NamePickGui
struct NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Chat.Demo.ChatGui Photon.Chat.Demo.NamePickGui::chatNewComponent
	ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* ___chatNewComponent_5;
	// UnityEngine.UI.InputField Photon.Chat.Demo.NamePickGui::idInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___idInput_6;
};

// Photon.Chat.UtilityScripts.OnStartDelete
struct OnStartDelete_tAFE941550E5B7D4F434D3BB2D00C0D93610BDC11  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Pun.PhotonView
struct PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Byte Photon.Pun.PhotonView::Group
	uint8_t ___Group_4;
	// System.Int32 Photon.Pun.PhotonView::prefixField
	int32_t ___prefixField_5;
	// System.Object[] Photon.Pun.PhotonView::instantiationDataField
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___instantiationDataField_6;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::lastOnSerializeDataSent
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___lastOnSerializeDataSent_7;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::syncValues
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___syncValues_8;
	// System.Object[] Photon.Pun.PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___lastOnSerializeDataReceived_9;
	// Photon.Pun.ViewSynchronization Photon.Pun.PhotonView::Synchronization
	int32_t ___Synchronization_10;
	// System.Boolean Photon.Pun.PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable_11;
	// Photon.Pun.OwnershipOption Photon.Pun.PhotonView::OwnershipTransfer
	int32_t ___OwnershipTransfer_12;
	// Photon.Pun.PhotonView/ObservableSearch Photon.Pun.PhotonView::observableSearch
	int32_t ___observableSearch_13;
	// System.Collections.Generic.List`1<UnityEngine.Component> Photon.Pun.PhotonView::ObservedComponents
	List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ___ObservedComponents_14;
	// UnityEngine.MonoBehaviour[] Photon.Pun.PhotonView::RpcMonoBehaviours
	MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* ___RpcMonoBehaviours_15;
	// System.Boolean Photon.Pun.PhotonView::<IsMine>k__BackingField
	bool ___U3CIsMineU3Ek__BackingField_16;
	// Photon.Realtime.Player Photon.Pun.PhotonView::<Controller>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3CControllerU3Ek__BackingField_17;
	// System.Int32 Photon.Pun.PhotonView::<CreatorActorNr>k__BackingField
	int32_t ___U3CCreatorActorNrU3Ek__BackingField_18;
	// System.Boolean Photon.Pun.PhotonView::<AmOwner>k__BackingField
	bool ___U3CAmOwnerU3Ek__BackingField_19;
	// Photon.Realtime.Player Photon.Pun.PhotonView::<Owner>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3COwnerU3Ek__BackingField_20;
	// System.Int32 Photon.Pun.PhotonView::ownerActorNr
	int32_t ___ownerActorNr_21;
	// System.Int32 Photon.Pun.PhotonView::controllerActorNr
	int32_t ___controllerActorNr_22;
	// System.Int32 Photon.Pun.PhotonView::sceneViewId
	int32_t ___sceneViewId_23;
	// System.Int32 Photon.Pun.PhotonView::viewIdField
	int32_t ___viewIdField_24;
	// System.Int32 Photon.Pun.PhotonView::InstantiationId
	int32_t ___InstantiationId_25;
	// System.Boolean Photon.Pun.PhotonView::isRuntimeInstantiated
	bool ___isRuntimeInstantiated_26;
	// System.Boolean Photon.Pun.PhotonView::removedFromLocalViewList
	bool ___removedFromLocalViewList_27;
	// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange> Photon.Pun.PhotonView::CallbackChangeQueue
	Queue_1_tF178FEC52A1E31BA7A3C30BE84E4770D020B061B* ___CallbackChangeQueue_28;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy> Photon.Pun.PhotonView::OnPreNetDestroyCallbacks
	List_1_tA7AAD9C9730173B4B69D3E42B07AF11817191181* ___OnPreNetDestroyCallbacks_29;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange> Photon.Pun.PhotonView::OnOwnerChangeCallbacks
	List_1_t7628C79979ECE33C758FA5C52526761CA20F2167* ___OnOwnerChangeCallbacks_30;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange> Photon.Pun.PhotonView::OnControllerChangeCallbacks
	List_1_tAE460F42AC335F9ADFDAB761B93C2E8883845E5F* ___OnControllerChangeCallbacks_31;
};

// KID.PlayerUIFollow
struct PlayerUIFollow_tC5A87D4CF1D9D5A2DA5F5D058A13A49F43C229D4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 KID.PlayerUIFollow::v3Offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v3Offset_4;
	// System.String KID.PlayerUIFollow::namePlayer
	String_t* ___namePlayer_5;
	// UnityEngine.Transform KID.PlayerUIFollow::traPlayer
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___traPlayer_6;
};

// Photon.Chat.UtilityScripts.TextButtonTransition
struct TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Photon.Chat.UtilityScripts.TextButtonTransition::_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____text_4;
	// UnityEngine.UI.Selectable Photon.Chat.UtilityScripts.TextButtonTransition::Selectable
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___Selectable_5;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextButtonTransition::NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NormalColor_6;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextButtonTransition::HoverColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___HoverColor_7;
};

// Photon.Chat.UtilityScripts.TextToggleIsOnTransition
struct TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Toggle Photon.Chat.UtilityScripts.TextToggleIsOnTransition::toggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle_4;
	// UnityEngine.UI.Text Photon.Chat.UtilityScripts.TextToggleIsOnTransition::_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____text_5;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextToggleIsOnTransition::NormalOnColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NormalOnColor_6;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextToggleIsOnTransition::NormalOffColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NormalOffColor_7;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextToggleIsOnTransition::HoverOnColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___HoverOnColor_8;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextToggleIsOnTransition::HoverOffColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___HoverOffColor_9;
	// System.Boolean Photon.Chat.UtilityScripts.TextToggleIsOnTransition::isHover
	bool ___isHover_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_DefaultInput_9;
};

// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50  : public CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE
{
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_LookAt
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LookAt_28;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_Follow
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Follow_29;
	// Cinemachine.LensSettings Cinemachine.CinemachineVirtualCamera::m_Lens
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___m_Lens_30;
	// Cinemachine.CinemachineVirtualCameraBase/TransitionParams Cinemachine.CinemachineVirtualCamera::m_Transitions
	TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA ___m_Transitions_31;
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCamera::m_LegacyBlendHint
	int32_t ___m_LegacyBlendHint_32;
	// System.Boolean Cinemachine.CinemachineVirtualCamera::m_UserIsDragging
	bool ___m_UserIsDragging_36;
	// Cinemachine.CameraState Cinemachine.CinemachineVirtualCamera::m_State
	CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 ___m_State_37;
	// Cinemachine.CinemachineComponentBase[] Cinemachine.CinemachineVirtualCamera::m_ComponentPipeline
	CinemachineComponentBaseU5BU5D_t479D9A9F2F2C4AB6F50F6C64FAC4BC8EC602C077* ___m_ComponentPipeline_38;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_ComponentOwner
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ComponentOwner_39;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::mCachedLookAtTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___mCachedLookAtTarget_40;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCamera::mCachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___mCachedLookAtTargetVcam_41;
};

struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_StaticFields
{
	// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate Cinemachine.CinemachineVirtualCamera::CreatePipelineOverride
	CreatePipelineDelegate_tC9ED5364DE6A2A753E8C9FF767C2C37C5CBB6BFC* ___CreatePipelineOverride_34;
	// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate Cinemachine.CinemachineVirtualCamera::DestroyPipelineOverride
	DestroyPipelineDelegate_tDBA135A8B9ACD670F6144200C281F32F728BB842* ___DestroyPipelineOverride_35;
};

// KID.DamageManager
struct DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A  : public MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD
{
	// System.Single KID.DamageManager::hp
	float ___hp_5;
	// UnityEngine.GameObject KID.DamageManager::goVFXHit
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___goVFXHit_6;
	// UnityEngine.Shader KID.DamageManager::shaderDissolve
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shaderDissolve_7;
	// System.Single KID.DamageManager::hpMax
	float ___hpMax_8;
	// System.String KID.DamageManager::nameBullet
	String_t* ___nameBullet_9;
	// UnityEngine.SkinnedMeshRenderer[] KID.DamageManager::smr
	SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B* ___smr_10;
	// UnityEngine.UI.Image KID.DamageManager::imgHp
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imgHp_11;
	// TMPro.TextMeshProUGUI KID.DamageManager::textHp
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textHp_12;
	// UnityEngine.Material KID.DamageManager::materialDissolve
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___materialDissolve_13;
	// KID.SystemControl KID.DamageManager::systemControl
	SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5* ___systemControl_14;
	// KID.SystemAttack KID.DamageManager::systemAttack
	SystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D* ___systemAttack_15;
};

// KID.DestroySelf
struct DestroySelf_tA1D23D1E58EF5B23154178FCD64DE1F456EABE03  : public MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD
{
	// System.Single KID.DestroySelf::timeDestroy
	float ___timeDestroy_5;
	// System.Boolean KID.DestroySelf::collisionDestroy
	bool ___collisionDestroy_6;
};

// DynamicJoystick
struct DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
	// System.Single DynamicJoystick::moveThreshold
	float ___moveThreshold_15;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// FixedJoystick
struct FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
};

// FloatingJoystick
struct FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// Photon.Pun.MonoBehaviourPunCallbacks
struct MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783  : public MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD
{
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// KID.SystemAttack
struct SystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D  : public MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD
{
	// UnityEngine.UI.Button KID.SystemAttack::btnFire
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnFire_5;
	// UnityEngine.GameObject KID.SystemAttack::goBullet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___goBullet_6;
	// System.Int32 KID.SystemAttack::bulletCountMax
	int32_t ___bulletCountMax_7;
	// UnityEngine.Transform KID.SystemAttack::traFire
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___traFire_8;
	// System.Int32 KID.SystemAttack::speedFire
	int32_t ___speedFire_9;
	// System.Int32 KID.SystemAttack::bulletCountCurrent
	int32_t ___bulletCountCurrent_10;
};

// KID.SystemControl
struct SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5  : public MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD
{
	// System.Single KID.SystemControl::speed
	float ___speed_5;
	// System.Single KID.SystemControl::rangeDirectionIcon
	float ___rangeDirectionIcon_6;
	// System.Single KID.SystemControl::speedTurn
	float ___speedTurn_7;
	// System.String KID.SystemControl::parameterWalk
	String_t* ___parameterWalk_8;
	// UnityEngine.GameObject KID.SystemControl::goCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___goCanvas_9;
	// UnityEngine.GameObject KID.SystemControl::goCanvasPlayerInfo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___goCanvasPlayerInfo_10;
	// UnityEngine.GameObject KID.SystemControl::goDirection
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___goDirection_11;
	// UnityEngine.Rigidbody KID.SystemControl::rig
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rig_12;
	// UnityEngine.Animator KID.SystemControl::ani
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___ani_13;
	// Joystick KID.SystemControl::joystick
	Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* ___joystick_14;
	// Cinemachine.CinemachineVirtualCamera KID.SystemControl::cvc
	CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* ___cvc_15;
	// KID.SystemAttack KID.SystemControl::systemAttack
	SystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D* ___systemAttack_16;
	// KID.DamageManager KID.SystemControl::damageManager
	DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* ___damageManager_17;
	// UnityEngine.Transform KID.SystemControl::traDirectionIcon
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___traDirectionIcon_18;
};

// VariableJoystick
struct VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
	// System.Single VariableJoystick::moveThreshold
	float ___moveThreshold_15;
	// JoystickType VariableJoystick::joystickType
	int32_t ___joystickType_16;
	// UnityEngine.Vector2 VariableJoystick::fixedPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___fixedPosition_17;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// KID.GameManager
struct GameManager_t8EAA0FB362D2107B73A03A192A366F7E827EAC5F  : public MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783
{
	// UnityEngine.GameObject KID.GameManager::goCharacter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___goCharacter_5;
	// UnityEngine.Transform[] KID.GameManager::traSpawnPoint
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___traSpawnPoint_6;
	// System.Collections.Generic.List`1<UnityEngine.Transform> KID.GameManager::traSpawnPointList
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___traSpawnPointList_7;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_32;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_33;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_34;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_35;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_36;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_38;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_39;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_40;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_41;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_42;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_44;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_45;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_46;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_47;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_48;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_49;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_50;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_51;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_52;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_53;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_54;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_55;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_58;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_59;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_61;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_62;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_63;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_64;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_65;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_66;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_67;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_68;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_70;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// LobbyManager
struct LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797  : public MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783
{
	// UnityEngine.GameObject LobbyManager::goConnectView
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___goConnectView_5;
	// UnityEngine.UI.Button LobbyManager::btnBattle
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnBattle_6;
	// UnityEngine.UI.Text LobbyManager::textCountPlayer
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textCountPlayer_7;
	// System.Byte LobbyManager::maxCountPlayer
	uint8_t ___maxCountPlayer_8;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556  : public BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* ___m_MouseState_15;
};

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
};

struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530  : public PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556
{
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_16;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMoveVector_17;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMousePosition_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_MousePosition_20;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentFocusedGameObject_21;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___m_InputPointerEvent_22;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_26;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_28;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_29;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SkinnedMeshRenderer[]
struct SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B  : public RuntimeArray
{
	ALIGN_FIELD (8) SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* m_Items[1];

	inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411  : public RuntimeArray
{
	ALIGN_FIELD (8) ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 m_Items[1];

	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_mBEC549D549D1195DF965A15323B2D70D29448D23_gshared (UnityAction_2_tBE7BA36C60DAE0644D6E9A8B9813D323D176832E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Int32Enum>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_AddListener_mB8661B946603381B5B222841289FD087DF93FC8D_gshared (UnityEvent_2_t41C0620CCB22F69FCEF4542D5D5518083D1A18CE* __this, UnityAction_2_tBE7BA36C60DAE0644D6E9A8B9813D323D176832E* ___call0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method) ;

// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, int32_t ___joystickType0, const RuntimeMethod* method) ;
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransformUtility_WorldToScreenPoint_m5629068CE7C8D2E654F8F529E89DC5802F3452BB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPoint1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Canvas::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_mB1CA903ACF933DB0BE2016D105BB2B4702CF1004_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_m9668B13074D1664DD192669C14B3A8FC01676299_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___localPoint3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition0, const RuntimeMethod* method) ;
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) ;
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::SetResolution(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_SetResolution_m10750EEAE9DB2D7513D0A7882CB7A4A18CD35249 (int32_t ___width0, int32_t ___height1, bool ___fullscreen2, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::ConnectUsingSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_ConnectUsingSettings_mB2A659A9684CAC6BBBA81F453E31C765DA29E13D (const RuntimeMethod* method) ;
// System.Void Photon.Pun.MonoBehaviourPunCallbacks::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPunCallbacks_OnConnectedToMaster_m8F8226A0CC5E06EDE926F7B5227683BBE7F0E7DB (MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::JoinLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_JoinLobby_m9815B6661AB801FEE0FD3AC8AE9614990BBA2DE5 (const RuntimeMethod* method) ;
// System.Void Photon.Pun.MonoBehaviourPunCallbacks::OnJoinedLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPunCallbacks_OnJoinedLobby_mC8B9CB6380D91FE80BCBBD5CD886B88F7FDD23C7 (MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::JoinRandomRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_JoinRandomRoom_m88524DDB91009AAF7F7DB095EBC96C52A545B68A (const RuntimeMethod* method) ;
// System.Void Photon.Pun.MonoBehaviourPunCallbacks::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPunCallbacks_OnJoinRandomFailed_mF597D0B2F5B92ED02F0E771442DF653C5E03765A (MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783* __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.RoomOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions__ctor_m06A5DAB18D3385E8AED5DA84C8A89D9C7E8498F8 (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::CreateRoom(System.String,Photon.Realtime.RoomOptions,Photon.Realtime.TypedLobby,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_CreateRoom_m12D48FA7E2BFA9460038A06A7461B5D32404DD28 (String_t* ___roomName0, RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* ___roomOptions1, TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___typedLobby2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___expectedUsers3, const RuntimeMethod* method) ;
// System.Void Photon.Pun.MonoBehaviourPunCallbacks::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPunCallbacks_OnJoinedRoom_m817D94FDDAF24D66A92DC9FAB480FC53272A8EF5 (MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783* __this, const RuntimeMethod* method) ;
// Photon.Realtime.Room Photon.Pun.PhotonNetwork::get_CurrentRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97 (const RuntimeMethod* method) ;
// System.Byte Photon.Realtime.Room::get_PlayerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Room_get_PlayerCount_mB51FD867790C849B312565EA2052474828EA3F1A (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) ;
// System.Byte Photon.Realtime.Room::get_MaxPlayers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Room_get_MaxPlayers_m366A4F5F9AE034C75EE5D68F0D42BD5D44FF92D4_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void LobbyManager::LoadGameScene(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_LoadGameScene_m4544797F45225EB014E05A23551A9D28ABAEA5EE (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, int32_t ___currentCount0, int32_t ___maxCount1, const RuntimeMethod* method) ;
// System.Void Photon.Pun.MonoBehaviourPunCallbacks::OnPlayerEnteredRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPunCallbacks_OnPlayerEnteredRoom_m0951CB09066015931986C42556735ACDC1B2228C (MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___newPlayer0, const RuntimeMethod* method) ;
// System.Void Photon.Pun.PhotonNetwork::LoadLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_LoadLevel_m56CEF348D7FAB04D4707AB4F723B30B70FB26ABB (String_t* ___levelName0, const RuntimeMethod* method) ;
// System.Void Photon.Pun.MonoBehaviourPunCallbacks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPunCallbacks__ctor_m25DE2B188CA2481D58FBA9BB58CFBD65432B77E2 (MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void TravisGameAssets.HitImpactEffectsPreview::RefreshHitUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_RefreshHitUI_mF6020FE296846EE7188FA76D98C00269B7DECF23 (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void TravisGameAssets.HitImpactEffectsPreview::PreviousHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_PreviousHit_m4C03EFBA92EA6B4BEED3C8CEBB3818556E30407F (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) ;
// System.Void TravisGameAssets.HitImpactEffectsPreview::NextHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_NextHit_m68BC7C4EDDD7DD6352C8C16B83719A7D1B8B92AF (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.GameObject TravisGameAssets.HitImpactEffectsPreview::SpawnHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HitImpactEffectsPreview_SpawnHit_m0B6276660CE590154CCB7C9C55FBB2DA2F4705AC (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void TravisGameAssets.HitImpactEffectsPreview::ToggleRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_ToggleRotation_mDF257CEC93D29B988AB7C7D5351BA90D0F23D95A (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) ;
// System.Void TravisGameAssets.HitImpactEffectsPreview::ToggleFloor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_ToggleFloor_m46CAA22630F68A0091563740B922CF33A8A58D60 (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) ;
// System.Void TravisGameAssets.HitImpactEffectsPreview::ToggleSlowMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_ToggleSlowMotion_mBA6019B5589C94E3D4422E381A4B32AB41832F10 (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) ;
// System.Void TravisGameAssets.HitImpactEffectsPreview::ToggleLighting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_ToggleLighting_m9460655D22228DD82181A3A916B96801438FC05B (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Load_m18267376C71DD6875C832B7438C78656142B8F3C (String_t* ___placementId0, RuntimeObject* ___loadListener1, const RuntimeMethod* method) ;
// System.Void KID.AdsManager::ShowAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_ShowAds_m3A4F71F16F4905E8D75A66608EFFD98C5B942491 (AdsManager_t71168750765A444342C2737FCB33AFE43B9DEF0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_mC9F749C22FBCAF2E7581A35AA729C19EA6FE78C5 (String_t* ___placementId0, RuntimeObject* ___showListener1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void KID.AdsManager::InitializeAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_InitializeAds_mF342919F073F18D74B5D4A680FE5EBEF1559AAF2 (AdsManager_t71168750765A444342C2737FCB33AFE43B9DEF0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_m55B4E5A16566DB6F87FDC57B4E75AA708396AF6E (String_t* ___gameId0, bool ___testMode1, RuntimeObject* ___initializationListener2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<KID.SystemControl>()
inline SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5* Component_GetComponent_TisSystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5_m69DF2786808A6763F4F22D64A4A3525D08BDCB1D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<KID.SystemAttack>()
inline SystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D* Component_GetComponent_TisSystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D_m539867AF6C9C784743133077D3C6101F1133E9E5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.SkinnedMeshRenderer>()
inline SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B* Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m8600DF2023C681E503BBD879A6037C3F4F0D92C0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::get_photonView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67 (MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonView::get_IsMine()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648_inline (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.ContactPoint[] UnityEngine.Collision::get_contacts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473 (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208 (ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* __this, const RuntimeMethod* method) ;
// System.Void KID.DamageManager::Damage(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageManager_Damage_m4E2C2EFB18835077AEA85F0B94377AA6CBCCD37F (DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posHit0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// UnityEngine.GameObject Photon.Pun.PhotonNetwork::Instantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Byte,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PhotonNetwork_Instantiate_mDB16644B4DD135B74F606887D511E6BAD46634C6 (String_t* ___prefabName0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, uint8_t ___group3, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data4, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void Photon.Pun.PhotonView::RPC(System.String,Photon.Pun.RpcTarget,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_RPC_mD406BD732C9B9AFD46C149F63514AB3A923EB5BB (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, String_t* ___methodName0, int32_t ___target1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters2, const RuntimeMethod* method) ;
// System.Collections.IEnumerator KID.DamageManager::Dissolve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DamageManager_Dissolve_mA15E5C79BD8614E2ECB15D4FD4B803053BDBC1BC (DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void KID.DamageManager/<Dissolve>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDissolveU3Ed__17__ctor_m6B99FA9B477D7A18758221A047B9A07C81804DFA (U3CDissolveU3Ed__17_tA6A4DCF6A76ABA736835BC81F49E5AABB941FCF0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::LeaveRoom(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_LeaveRoom_mDCAACF6F9544774184AD90123492CAC3F811DC0A (bool ___becomeInactive0, const RuntimeMethod* method) ;
// System.Void Photon.Pun.MonoBehaviourPun::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPun__ctor_m52771D9D46565807FDF72A7B6622574D38C29A55 (MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void KID.DamageManager::ReturnToLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageManager_ReturnToLobby_m093195A691A55B36E03C69E5A75B76E714AB1B02 (DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TMP_InputField>()
inline TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* GameObject_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m6CA031C91E5D203C24D3315721B6E3910B9C8729 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::get_onEndEdit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* TMP_InputField_get_onEndEdit_m0CE9718C71A834CC279430E20DC7FF4F42114FD3_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71 (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.WWWForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6 (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, String_t* ___fieldName0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator KID.DataManager::StartGetGASData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataManager_StartGetGASData_m2251B27CF518093124C4945682FBDEE9428C28E9 (DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* __this, const RuntimeMethod* method) ;
// System.Void KID.DataManager/<StartGetGASData>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGetGASDataU3Ed__7__ctor_mE3D7BD641829C11B9F8DD1E3482F17B84F6E5E36 (U3CStartGetGASDataU3Ed__7_t7BFEBEB62935222C1A10AF1ED67E56DB00ED3A7B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String TMPro.TMP_InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator KID.DataManager::StartSetGASData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataManager_StartSetGASData_m08BD987BFEC9626F71E9083924CB444EFC8869A7 (DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* __this, const RuntimeMethod* method) ;
// System.Void KID.DataManager/<StartSetGASData>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartSetGASDataU3Ed__9__ctor_mCDFAB145AE008A486CD97E6AB5E54EF988E8D478 (U3CStartSetGASDataU3Ed__9_tD11A595674AD69FA7F0E3274383E263F032F9986* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void KID.DataManager/<StartGetGASData>d__7::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGetGASDataU3Ed__7_U3CU3Em__Finally1_m9AACA1B54862F675608BCB4DC3F1C11A52F5ECC2 (U3CStartGetGASDataU3Ed__7_t7BFEBEB62935222C1A10AF1ED67E56DB00ED3A7B* __this, const RuntimeMethod* method) ;
// System.Void KID.DataManager/<StartGetGASData>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGetGASDataU3Ed__7_System_IDisposable_Dispose_m2EC6D5DA3317C7290B1F891B50D978197B8A4E8E (U3CStartGetGASDataU3Ed__7_t7BFEBEB62935222C1A10AF1ED67E56DB00ED3A7B* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Post_m1F6BF341F959AC95110C738791EF920713B74786 (String_t* ___uri0, WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* ___formData1, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Void KID.DataManager/<StartSetGASData>d__9::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartSetGASDataU3Ed__9_U3CU3Em__Finally1_m1CE910369071606F872EC1552F303F7D51587DD6 (U3CStartSetGASDataU3Ed__9_tD11A595674AD69FA7F0E3274383E263F032F9986* __this, const RuntimeMethod* method) ;
// System.Void KID.DataManager/<StartSetGASData>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartSetGASDataU3Ed__9_System_IDisposable_Dispose_m924F334A598C135BD58340AD038F0CA96AD7F4D8 (U3CStartSetGASDataU3Ed__9_tD11A595674AD69FA7F0E3274383E263F032F9986* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Void Photon.Pun.PhotonNetwork::Destroy(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_Destroy_m60271BBE2EF6DF3C63689B01FF907E68EA14688A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetGo0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.Room::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_IsVisible_m88B1F48E1CDB171A2ECB10D9289596FA45EC74D7 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<UnityEngine.Transform>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* Enumerable_ToList_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m536992E60E83B319EE1A63F673D65CDB7DA4B326 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared)(___source0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void Photon.Pun.MonoBehaviourPunCallbacks::OnPlayerLeftRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPunCallbacks_OnPlayerLeftRoom_mD863D5DCFEB2C09DA8F4B222C9C0A7F345A03450 (MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___otherPlayer0, const RuntimeMethod* method) ;
// System.Void KID.GameManager::Win()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Win_m2562F1F2F866FECCEE6B0A2A810DFF979E28D2DA (GameManager_t8EAA0FB362D2107B73A03A192A366F7E827EAC5F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Purchasing.Product>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mEC892AB9205B3ABA1A41398D1FDCCAA97CC8EB4C (UnityAction_1_t883DB0050E6D028D160EC19EBB491300FABAC545* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t883DB0050E6D028D160EC19EBB491300FABAC545*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m697EDB104210070011D224B214BBF7D14B3A550B (UnityEvent_1_t6F642369BDFC7D0E708896E55DA6FB6124268644* __this, UnityAction_1_t883DB0050E6D028D160EC19EBB491300FABAC545* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6F642369BDFC7D0E708896E55DA6FB6124268644*, UnityAction_1_t883DB0050E6D028D160EC19EBB491300FABAC545*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m039EF8A33E5CACDEE09080CF27237C1DCC3578E1 (UnityAction_2_t0B22D23CA1A25950B702D39FA05C0F818460A1D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t0B22D23CA1A25950B702D39FA05C0F818460A1D4*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_mBEC549D549D1195DF965A15323B2D70D29448D23_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
inline void UnityEvent_2_AddListener_m94664954F20AA9FE96E17A3F0CB25C46AC036703 (UnityEvent_2_tCFCF0C97EE0ABE297CC34E23A38D361505D5AAFF* __this, UnityAction_2_t0B22D23CA1A25950B702D39FA05C0F818460A1D4* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tCFCF0C97EE0ABE297CC34E23A38D361505D5AAFF*, UnityAction_2_t0B22D23CA1A25950B702D39FA05C0F818460A1D4*, const RuntimeMethod*))UnityEvent_2_AddListener_mB8661B946603381B5B222841289FD087DF93FC8D_gshared)(__this, ___call0, method);
}
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void KID.PlayerUIFollow::Follow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerUIFollow_Follow_m492C98C08930ACDBDA6093221D49E3760CCF8585 (PlayerUIFollow_tC5A87D4CF1D9D5A2DA5F5D058A13A49F43C229D4* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<KID.DamageManager>()
inline DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* Component_GetComponent_TisDamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A_mC610CB424C67F160BC8EA7DA5E725FB8DFDD276A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<KID.PlayerUIFollow>()
inline PlayerUIFollow_tC5A87D4CF1D9D5A2DA5F5D058A13A49F43C229D4* GameObject_GetComponent_TisPlayerUIFollow_tC5A87D4CF1D9D5A2DA5F5D058A13A49F43C229D4_mB9E4E2B0EB8F6A178E40FBF2FF1A74C15451E710 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PlayerUIFollow_tC5A87D4CF1D9D5A2DA5F5D058A13A49F43C229D4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Joystick>()
inline Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* Component_GetComponent_TisJoystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A_m0999AAD0E93516118520AC0831B56BAB595281D6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Cinemachine.CinemachineVirtualCamera>()
inline CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void KID.SystemControl::UpdateDirectionIconPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemControl_UpdateDirectionIconPos_m87D712F6349B5C157AD268BF4747733E2FAE757B (SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5* __this, const RuntimeMethod* method) ;
// System.Void KID.SystemControl::LookDirectionIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemControl_LookDirectionIcon_mB280A297C83E948CFA4976EC2F65066419842209 (SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5* __this, const RuntimeMethod* method) ;
// System.Void KID.SystemControl::UpdateAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemControl_UpdateAnimation_mDC75635F7F577EDF8F1A8E3F8193F7116DCF697C (SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5* __this, const RuntimeMethod* method) ;
// System.Void KID.SystemControl::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemControl_Move_mF6AB70F16BABF35E9FDD3A44E49E56C216F0075A (SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient__ctor_mC3FD7885A9F9E80E8949ACDE2590016410F1186C (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, uint8_t ___protocol0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::AddCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_AddCallbackTarget_mF98AF4F5A8EF6794C9038C50C619B03EC7FB22B8 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Photon.Realtime.ConnectionHandler>()
inline ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* GameObject_GetComponent_TisConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_m35DDE72490FF0112059E3A8C5F21DD893E2026C1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.ConnectionHandler::set_Client(Photon.Realtime.LoadBalancingClient)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectionHandler_set_Client_m3ABCA8BEB50CC58254153280CE8F60154D42E29B_inline (ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* __this, LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.ConnectionHandler::StartFallbackSendAckThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionHandler_StartFallbackSendAckThread_mBA4B3FC1BABFBB2085F1D30D176B50D54F33AA69 (ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_Service_m0208D4872E63ABA1E7367E1D8FB89421E3050920 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_State_m8553D8C2483058BD64DDED8EC2648AE77836D12C_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::OpJoinRandomRoom(Photon.Realtime.OpJoinRandomRoomParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpJoinRandomRoom_mCB018C45C5BAC6CB7F10FA13BA9EBAC3BD0F45A1 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA* ___opJoinRandomRoomParams0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Photon.Realtime.RegionHandler>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m215F7D57B46C05B7411E4B5B4C7DDB91EEA86681 (Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean Photon.Realtime.RegionHandler::PingMinimumOfRegions(System.Action`1<Photon.Realtime.RegionHandler>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionHandler_PingMinimumOfRegions_mBDA481EF544E14116455B0352A160D07B6AF5762 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* ___onCompleteCallback0, String_t* ___previousSummary1, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.EnterRoomParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnterRoomParams__ctor_m59BB4C9762321F59D7238996F68C7EB970ACDBB8 (EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::OpCreateRoom(Photon.Realtime.EnterRoomParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpCreateRoom_mD4FC6543597FB872E8EE027EE49E723D83437310 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___enterRoomParams0, const RuntimeMethod* method) ;
// Photon.Realtime.Region Photon.Realtime.RegionHandler::get_BestRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* RegionHandler_get_BestRegion_mC9390E2B9A76B5F6A391F5D432D6CFD35F991D94 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.RegionHandler::get_SummaryToCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionHandler_get_SummaryToCache_m313FB26DCB72FB6D25EC366E51AF4118F8CD3722 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.Region::get_Code()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::ConnectToRegionMaster(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_ConnectToRegionMaster_m170672C2A5C0B12DB89090B0EE8ECF6028FA365B (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, String_t* ___region0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.AppSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppSettings__ctor_m0E9EF98D6C1FB02C989504407836FDA2B019AA43 (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* __this, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatAppSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatAppSettings__ctor_m0B6F25C335A13983DA701EBD9CFADAC43E6011A3 (ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.AppSettings::get_IsBestRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppSettings_get_IsBestRegion_m29A45FCEDFBC20C7C6E9CFA732A4E4FC2D1BBFED (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.AppSettings::get_IsDefaultNameServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppSettings_get_IsDefaultNameServer_m25CC5D537E41C3678015FEECF221843B9CAEBD29 (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Object::FindObjectOfType<Photon.Chat.Demo.ChatGui>()
inline ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_m8674F5DCCB9AB970A69F1E68C2EC297A51FEE54A (const RuntimeMethod* method)
{
	return ((  ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void Photon.Chat.Demo.ChatGui::ShowChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channelName0, const RuntimeMethod* method) ;
// Photon.Pun.ServerSettings Photon.Pun.PhotonNetwork::get_PhotonServerSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152* PhotonNetwork_get_PhotonServerSettings_m1B8E2B261E15DB33DECC60F93693C52504A8E9C9 (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.String Photon.Chat.Demo.ChatGui::get_UserName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m3499A4943E060ECB90E790A097D9691448AD1276 (const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.ChatGui::set_UserName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatGui_set_UserName_m2DEE5CF82BC6DBB2FA568AF956102BE0E125D0A7_inline (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Photon.Chat.ChatAppSettings Photon.Chat.Demo.AppSettingsExtensions::GetChatSettings(Photon.Realtime.AppSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* AppSettingsExtensions_GetChatSettings_m4875DA708BDB9B116A8CBA7A24709B33933D3EB2 (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___appSettings0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatClient::.ctor(Photon.Chat.IChatClientListener,ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient__ctor_m5C32CB0A0CAC33E980D4C6FA700B551D0DAF46F4 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, RuntimeObject* ___listener0, uint8_t ___protocol1, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatClient::set_UseBackgroundWorkerForSending(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_UseBackgroundWorkerForSending_m6B0CF62C2EBF74CB62FFB1557DC30969292B7596_inline (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Chat.AuthenticationValues::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_mB097BC3108CD439CAD77D4AE77F8616FA92C929D (AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* __this, String_t* ___userId0, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatClient::set_AuthValues(Photon.Chat.AuthenticationValues)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_mAAD43D4212103C80D1377FA04B33815397E28937_inline (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* ___value0, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::ConnectUsingSettings(Photon.Chat.ChatAppSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_ConnectUsingSettings_m3DCD03EA4CAE4ADDD935BDA323CCF37B5E96BB4C (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* ___appSettings0, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatClient::Disconnect(Photon.Chat.ChatDisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_Disconnect_m678FDF44265FD926B8DB5555B439F5F70D82BA52 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, int32_t ___cause0, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatClient::Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_Service_mD968988B9275FE4CA7113196FFB455F3BA79D0B7 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.ChatGui::SendChatMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_SendChatMessage_m4BD1A7C0CAAA5112EA9B3C1CE4F0F1ADC7018B5D (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___inputLine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::get_AuthValues()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* ChatClient_get_AuthValues_mC9F4405E66924D1BA21DEDE10848199C24915476_inline (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, const RuntimeMethod* method) ;
// System.String Photon.Chat.AuthenticationValues::get_UserId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m61CDE1031F42330B0EDC0EC489A75E46E1DB6B79_inline (AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_m736B989819416ADFFE92A9B4EB297FE6DC607E36 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, String_t* ___target0, RuntimeObject* ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m43998BB50D68FD0B18E4445DED51EE80D6EF1643 (Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Char::Equals(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B (Il2CppChar* __this, Il2CppChar ___obj0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m3C63FA89A52BE352B4E49DB5379F7AAD6ACCA0E8 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.ChatGui::PostHelpToCurrentChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_PostHelpToCurrentChannel_m707B7D1D556EACB05EC03E08F91A8F1ECA3642E9 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mA793BD64EB3D9ED4E360835951BD0333424C918D (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, int32_t ___status0, RuntimeObject* ___message1, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_mAB072792329A26749E58FED202C38A51691CD32C (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___channels0, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::Unsubscribe(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Unsubscribe_m384652194B1073EDB7A8CA3DBA04EFB7A14F0B0A (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___channels0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Remove(TKey)
inline bool Dictionary_2_Remove_m952BC71E0A6D29F848B1C6D854B9183CE0A5E83A (Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m5C5176103E0A618C661F6351BEBE408F4A06D925 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, String_t* ___channelName0, bool ___isPrivate1, ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1** ___channel2, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatChannel::ClearMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_ClearMessages_m046EA236CDD967B62CDE383F2098BF4B6ED80FFE (ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7 (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Boolean Photon.Chat.ChatClient::PublishMessage(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_PublishMessage_mC0EA414F46817A9F77DF910D9094AF23B563A2D8 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, String_t* ___channelName0, RuntimeObject* ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m4A3A6D2D5703A1D8CF8ED0CACA717114062A6559 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___channels0, int32_t ___messagesFromHistory1, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::AddFriends(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_AddFriends_mC7A8A45F98205A68592ED3BE7A5FC88BF4EFB809 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___friends0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.ChatGui::InstantiateFriendButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_InstantiateFriendButton_m76FB5E6D0ACF60E58F8EE09C10998D49020B4CD1 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___friendId0, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mEFE64834C76CBF45AB5B986DE9FE28A27D77E6CD (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, int32_t ___status0, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.ChatGui::InstantiateChannelButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_InstantiateChannelButton_m4C6135B30B8F5C9BDF9AE1753E8AFE63B791D401 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channelName0, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_mE405D676C6881553258F8BAD40A20B462D611068 (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.String Photon.Realtime.Extensions::ToStringFull(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_ToStringFull_mAC48EACD33E2EF6430A689C40DFF96C68B5C41D0 (RuntimeObject* ___origin0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.UI.Toggle>(T)
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* Object_Instantiate_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m15557773C5C7B03FA319A668FB60FD7A945F5A16 (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___original0, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// T UnityEngine.Component::GetComponentInChildren<Photon.Chat.Demo.ChannelSelector>()
inline ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* Component_GetComponentInChildren_TisChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07_mA5CB24AADA6105A0763F0F315A95A0B02EB5A05E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void Photon.Chat.Demo.ChannelSelector::SetChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelSelector_SetChannel_m7E493B7588E65D501C7DA99C72BF36DAA565250E (ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* __this, String_t* ___channel0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::Add(TKey,TValue)
inline void Dictionary_2_Add_m7AC008F2D3DCBB5019F0BE948B7F9B77284CC86C (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, String_t* ___key0, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, String_t*, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// T UnityEngine.GameObject::GetComponent<Photon.Chat.Demo.FriendItem>()
inline FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* GameObject_GetComponent_TisFriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13_m0046B7B489607CF796C30CD83C51F1304D701F67 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Photon.Chat.Demo.FriendItem::set_FriendId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem_set_FriendId_m49FB0C8B978DD2E35361DE3ED6863257B82E4BB2 (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mFDB00FBC9AEC3F5411BC17218005A2DDC01A4EE7 (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* __this, String_t* ___key0, FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E*, String_t*, FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::get_Item(TKey)
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* Dictionary_2_get_Item_m65B54189C1D9C6B6BD1BABB5755C0647EE39C89B (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::Remove(TKey)
inline bool Dictionary_2_Remove_m4F6FEFABCBACA9B9B3DED9BFAB8BDA9B47FA678B (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::get_Count()
inline int32_t Dictionary_2_get_Count_mFCFB38659217BF06006B6BC2FFD16389EF2A44EC (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::GetEnumerator()
inline Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5 (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UI.Toggle>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_inline (KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UI.Toggle>::get_Value()
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_inline (KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB* __this, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mFC86DBD8CA71ACF273A1F7FB6CD2DAD53449653E (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>::get_Item(TKey)
inline FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* Dictionary_2_get_Item_mD91F54F913AE58A20D0D60800D7E13B3A81BCDBC (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* (*) (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void Photon.Chat.Demo.FriendItem::OnFriendStatusUpdate(System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem_OnFriendStatusUpdate_mC336B386CEABD37A2BA65254CFE2C5125263E4CD (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, int32_t ___status0, bool ___gotMessage1, RuntimeObject* ___message2, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m596F2DCA70B7C83E7E82B92B341DDEE9A5864C0A (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, String_t* ___channelName0, ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1** ___channel1, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatChannel::Add(System.String,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_Add_m22E0343342399B1C9130CCDD12325EAA80DA9440 (ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* __this, String_t* ___sender0, RuntimeObject* ___message1, int32_t ___msgId2, const RuntimeMethod* method) ;
// System.String Photon.Chat.ChatChannel::ToStringMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatChannel_ToStringMessages_mB286B6E5F35FAF7A5F4F4EE259BB64207F34FE18 (ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.UI.Toggle>::Dispose()
inline void Enumerator_Dispose_m06019984AEF249BE743B261895FBDFCF3DE314FD (Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.UI.Toggle>::get_Current()
inline KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB Enumerator_get_Current_mF6F3ECC910925263DF2A5278F4F56F520C1507A6_inline (Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB (*) (Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.UI.Toggle>::MoveNext()
inline bool Enumerator_MoveNext_m950509CD692BEAA25841830AE3528B713C36DAC9 (Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::.ctor()
inline void Dictionary_2__ctor_m1951C457B495EAFA02160F793A6277161FDCEA3F (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>::.ctor()
inline void Dictionary_2__ctor_m05968164AFC47B4DAC2545E4FAC531C51F66C7FD (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.NamePickGui::StartChat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamePickGui_StartChat_m93395F4741F31632667938D7733EB30C48E04750 (NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B* __this, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.ChatGui::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_Connect_m073A7E59E9008C4D708663A6902A6C19882540E3 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m60F8B739B5BA0140A146BCDB0A2B899A33E22C6B (const RuntimeMethod* method)
{
	return ((  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.StandaloneInputModule>()
inline StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnValueChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, bool ___isOn0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JoystickPlayerExample::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample_FixedUpdate_m9AEDBA111F95D67A006A5D3821956048224541B7 (JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 direction = Vector3.forward * variableJoystick.Vertical + Vector3.right * variableJoystick.Horizontal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_5;
		NullCheck(L_1);
		float L_2;
		L_2 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_5 = __this->___variableJoystick_5;
		NullCheck(L_5);
		float L_6;
		L_6 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_4, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_7, NULL);
		V_0 = L_8;
		// rb.AddForce(direction * speed * Time.fixedDeltaTime, ForceMode.VelocityChange);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___rb_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, L_11, NULL);
		float L_13;
		L_13 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, L_13, NULL);
		NullCheck(L_9);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_9, L_14, 2, NULL);
		// }
		return;
	}
}
// System.Void JoystickPlayerExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample__ctor_m702422E0AE29402330CF41FDDBEE76F0506342E2 (JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JoystickSetterExample::ModeChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_ModeChanged_m35AF30EE3E6C8CEBF064A7AB80F5795E9AF06D23 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_0020;
			}
			case 2:
			{
				goto IL_002d;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// variableJoystick.SetMode(JoystickType.Fixed);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_4;
		NullCheck(L_1);
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(L_1, 0, NULL);
		// break;
		return;
	}

IL_0020:
	{
		// variableJoystick.SetMode(JoystickType.Floating);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_2 = __this->___variableJoystick_4;
		NullCheck(L_2);
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(L_2, 1, NULL);
		// break;
		return;
	}

IL_002d:
	{
		// variableJoystick.SetMode(JoystickType.Dynamic);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_3 = __this->___variableJoystick_4;
		NullCheck(L_3);
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(L_3, 2, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::AxisChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_AxisChanged_m5CA220FEA14E06BD8A445E31C5B66E4601C5E404 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_0033;
			}
			case 2:
			{
				goto IL_0053;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// variableJoystick.AxisOptions = AxisOptions.Both;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_4;
		NullCheck(L_1);
		Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline(L_1, 0, NULL);
		// background.sprite = axisSprites[index];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_3 = __this->___axisSprites_7;
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_6, NULL);
		// break;
		return;
	}

IL_0033:
	{
		// variableJoystick.AxisOptions = AxisOptions.Horizontal;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_7 = __this->___variableJoystick_4;
		NullCheck(L_7);
		Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline(L_7, 1, NULL);
		// background.sprite = axisSprites[index];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_9 = __this->___axisSprites_7;
		int32_t L_10 = ___index0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_8, L_12, NULL);
		// break;
		return;
	}

IL_0053:
	{
		// variableJoystick.AxisOptions = AxisOptions.Vertical;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_13 = __this->___variableJoystick_4;
		NullCheck(L_13);
		Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline(L_13, 2, NULL);
		// background.sprite = axisSprites[index];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_15 = __this->___axisSprites_7;
		int32_t L_16 = ___index0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_14, L_18, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_SnapX_m25A77C3DE4C6DBBE3B4A58E2DE8CD44B1773D6A1 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// variableJoystick.SnapX = value;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_0 = __this->___variableJoystick_4;
		bool L_1 = ___value0;
		NullCheck(L_0);
		Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_SnapY_m54FE8DCB2CE8D2BF5D2CDF84C68DE263F0E25B1B (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// variableJoystick.SnapY = value;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_0 = __this->___variableJoystick_4;
		bool L_1 = ___value0;
		NullCheck(L_0);
		Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_Update_m99B2432D22FE669B4DC3209696AD4A62096C7D41 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// valueText.text = "Current Value: " + variableJoystick.Direction;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___valueText_5;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_4;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC(L_1, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample__ctor_m2A3D66E05BCDF78D0F116348094717BEBA73EC91 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public float Horizontal { get { return (snapX) ? SnapFloat(input.x, AxisOptions.Horizontal) : input.x; } }
		bool L_0 = __this->___snapX_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___x_0;
		return L_2;
	}

IL_0014:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___input_14);
		float L_4 = L_3->___x_0;
		float L_5;
		L_5 = Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987(__this, L_4, 1, NULL);
		return L_5;
	}
}
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public float Vertical { get { return (snapY) ? SnapFloat(input.y, AxisOptions.Vertical) : input.y; } }
		bool L_0 = __this->___snapY_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___y_1;
		return L_2;
	}

IL_0014:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___input_14);
		float L_4 = L_3->___y_1;
		float L_5;
		L_5 = Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987(__this, L_4, 2, NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 Direction { get { return new Vector2(Horizontal, Vertical); } }
		float L_0;
		L_0 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(__this, NULL);
		float L_1;
		L_1 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Joystick::get_HandleRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_HandleRange_mB38F0D3B6ADE2D1557D7A3D6759C469F17509D77 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// get { return handleRange; }
		float L_0 = __this->___handleRange_4;
		return L_0;
	}
}
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { handleRange = Mathf.Abs(value); }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___handleRange_4 = L_1;
		// set { handleRange = Mathf.Abs(value); }
		return;
	}
}
// System.Single Joystick::get_DeadZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_DeadZone_mCE52B635A8CF24F6DD867C14E34094515DE6AEFC (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// get { return deadZone; }
		float L_0 = __this->___deadZone_5;
		return L_0;
	}
}
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { deadZone = Mathf.Abs(value); }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___deadZone_5 = L_1;
		// set { deadZone = Mathf.Abs(value); }
		return;
	}
}
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0;
		L_0 = Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388(__this, NULL);
		return L_0;
	}
}
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0 = ___value0;
		__this->___axisOptions_6 = L_0;
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		return;
	}
}
// System.Boolean Joystick::get_SnapX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapX_m51CAFDCC399606BA82986908700AAA45668A0F40 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = __this->___snapX_7;
		return L_0;
	}
}
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = ___value0;
		__this->___snapX_7 = L_0;
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		return;
	}
}
// System.Boolean Joystick::get_SnapY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapY_m35AFC1AD1DF5EDE5FCE8BAFEBE91AD51D7451613 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = __this->___snapY_8;
		return L_0;
	}
}
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = ___value0;
		__this->___snapY_8 = L_0;
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		return;
	}
}
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// HandleRange = handleRange;
		float L_0 = __this->___handleRange_4;
		Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505(__this, L_0, NULL);
		// DeadZone = deadZone;
		float L_1 = __this->___deadZone_5;
		Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19(__this, L_1, NULL);
		// baseRect = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___baseRect_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseRect_11), (void*)L_2);
		// canvas = GetComponentInParent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3;
		L_3 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(__this, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		__this->___canvas_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_12), (void*)L_3);
		// if (canvas == null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = __this->___canvas_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// Debug.LogError("The Joystick is not placed inside a canvas");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6, NULL);
	}

IL_0048:
	{
		// Vector2 center = new Vector2(0.5f, 0.5f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (0.5f), (0.5f), NULL);
		// background.pivot = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___background_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		NullCheck(L_6);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_6, L_7, NULL);
		// handle.anchorMin = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		NullCheck(L_8);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_8, L_9, NULL);
		// handle.anchorMax = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		NullCheck(L_10);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_10, L_11, NULL);
		// handle.pivot = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		NullCheck(L_12);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_12, L_13, NULL);
		// handle.anchoredPosition = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OnDrag(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// cam = null;
		__this->___cam_13 = (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_13), (void*)(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL);
		// if (canvas.renderMode == RenderMode.ScreenSpaceCamera)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_12;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		// cam = canvas.worldCamera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2 = __this->___canvas_12;
		NullCheck(L_2);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_2, NULL);
		__this->___cam_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_13), (void*)L_3);
	}

IL_0026:
	{
		// Vector2 position = RectTransformUtility.WorldToScreenPoint(cam, background.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cam_13;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___background_9;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransformUtility_WorldToScreenPoint_m5629068CE7C8D2E654F8F529E89DC5802F3452BB(L_4, L_6, NULL);
		V_0 = L_7;
		// Vector2 radius = background.sizeDelta / 2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___background_9;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_9, (2.0f), NULL);
		V_1 = L_10;
		// input = (eventData.position - position) / (radius * canvas.scaleFactor);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_11 = ___eventData0;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_12, L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_16 = __this->___canvas_12;
		NullCheck(L_16);
		float L_17;
		L_17 = Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921(L_16, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_15, L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Division_mB1CA903ACF933DB0BE2016D105BB2B4702CF1004_inline(L_14, L_18, NULL);
		__this->___input_14 = L_19;
		// FormatInput();
		Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342(__this, NULL);
		// HandleInput(input.magnitude, input.normalized, radius, cam);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = (&__this->___input_14);
		float L_21;
		L_21 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_20, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->___input_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline(L_22, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25 = __this->___cam_13;
		VirtualActionInvoker4< float, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(9 /* System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera) */, __this, L_21, L_23, L_24, L_25);
		// handle.anchoredPosition = input * radius * handleRange;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = __this->___input_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_27, L_28, NULL);
		float L_30 = __this->___handleRange_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_29, L_30, NULL);
		NullCheck(L_26);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_26, L_31, NULL);
		// }
		return;
	}
}
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) 
{
	{
		// if (magnitude > deadZone)
		float L_0 = ___magnitude0;
		float L_1 = __this->___deadZone_5;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0019;
		}
	}
	{
		// if (magnitude > 1)
		float L_2 = ___magnitude0;
		if ((!(((float)L_2) > ((float)(1.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		// input = normalised;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___normalised1;
		__this->___input_14 = L_3;
		return;
	}

IL_0019:
	{
		// input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___input_14 = L_4;
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// if (axisOptions == AxisOptions.Horizontal)
		int32_t L_0 = __this->___axisOptions_6;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		// input = new Vector2(input.x, 0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_2, (0.0f), /*hidden argument*/NULL);
		__this->___input_14 = L_3;
		return;
	}

IL_0025:
	{
		// else if (axisOptions == AxisOptions.Vertical)
		int32_t L_4 = __this->___axisOptions_6;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0049;
		}
	}
	{
		// input = new Vector2(0f, input.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___input_14);
		float L_6 = L_5->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), (0.0f), L_6, /*hidden argument*/NULL);
		__this->___input_14 = L_7;
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t G_B10_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (value == 0)
		float L_0 = ___value0;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000a;
		}
	}
	{
		// return value;
		float L_1 = ___value0;
		return L_1;
	}

IL_000a:
	{
		// if (axisOptions == AxisOptions.Both)
		int32_t L_2 = __this->___axisOptions_6;
		if (L_2)
		{
			goto IL_0075;
		}
	}
	{
		// float angle = Vector2.Angle(input, Vector2.up);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___input_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline(NULL);
		float L_5;
		L_5 = Vector2_Angle_m9668B13074D1664DD192669C14B3A8FC01676299_inline(L_3, L_4, NULL);
		V_0 = L_5;
		// if (snapAxis == AxisOptions.Horizontal)
		int32_t L_6 = ___snapAxis1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		// if (angle < 22.5f || angle > 157.5f)
		float L_7 = V_0;
		if ((((float)L_7) < ((float)(22.5f))))
		{
			goto IL_0037;
		}
	}
	{
		float L_8 = V_0;
		if ((!(((float)L_8) > ((float)(157.5f)))))
		{
			goto IL_003d;
		}
	}

IL_0037:
	{
		// return 0;
		return (0.0f);
	}

IL_003d:
	{
		// return (value > 0) ? 1 : -1;
		float L_9 = ___value0;
		if ((((float)L_9) > ((float)(0.0f))))
		{
			goto IL_0048;
		}
	}
	{
		G_B10_0 = (-1);
		goto IL_0049;
	}

IL_0048:
	{
		G_B10_0 = 1;
	}

IL_0049:
	{
		return ((float)G_B10_0);
	}

IL_004b:
	{
		// else if (snapAxis == AxisOptions.Vertical)
		int32_t L_10 = ___snapAxis1;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0073;
		}
	}
	{
		// if (angle > 67.5f && angle < 112.5f)
		float L_11 = V_0;
		if ((!(((float)L_11) > ((float)(67.5f)))))
		{
			goto IL_0065;
		}
	}
	{
		float L_12 = V_0;
		if ((!(((float)L_12) < ((float)(112.5f)))))
		{
			goto IL_0065;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_0065:
	{
		// return (value > 0) ? 1 : -1;
		float L_13 = ___value0;
		if ((((float)L_13) > ((float)(0.0f))))
		{
			goto IL_0070;
		}
	}
	{
		G_B18_0 = (-1);
		goto IL_0071;
	}

IL_0070:
	{
		G_B18_0 = 1;
	}

IL_0071:
	{
		return ((float)G_B18_0);
	}

IL_0073:
	{
		// return value;
		float L_14 = ___value0;
		return L_14;
	}

IL_0075:
	{
		// if (value > 0)
		float L_15 = ___value0;
		if ((!(((float)L_15) > ((float)(0.0f)))))
		{
			goto IL_0083;
		}
	}
	{
		// return 1;
		return (1.0f);
	}

IL_0083:
	{
		// if (value < 0)
		float L_16 = ___value0;
		if ((!(((float)L_16) < ((float)(0.0f)))))
		{
			goto IL_0091;
		}
	}
	{
		// return -1;
		return (-1.0f);
	}

IL_0091:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___input_14 = L_0;
		// handle.anchoredPosition = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_1, L_2, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 localPoint = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		V_0 = L_0;
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(baseRect, screenPosition, cam, out localPoint))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___baseRect_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___screenPosition0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cam_13;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_1, L_2, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0060;
		}
	}
	{
		// Vector2 pivotOffset = baseRect.pivot * baseRect.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___baseRect_11;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_5, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___baseRect_11;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_6, L_8, NULL);
		V_1 = L_9;
		// return localPoint - (background.anchorMax * baseRect.sizeDelta) + pivotOffset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___background_9;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB(L_11, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___baseRect_11;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_12, L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_10, L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_16, L_17, NULL);
		return L_18;
	}

IL_0060:
	{
		// return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		return L_19;
	}
}
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float handleRange = 1;
		__this->___handleRange_4 = (1.0f);
		// private Vector2 input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___input_14 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single DynamicJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DynamicJoystick_get_MoveThreshold_m16C670C1DA0A45E83F6F87C4304F459EDDEEDD5A (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->___moveThreshold_15;
		return L_0;
	}
}
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___moveThreshold_15 = L_1;
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void DynamicJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_Start_mFE16C6CE0B753F08E79A2AEC75782DEEF3B96F72 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	{
		// MoveThreshold = moveThreshold;
		float L_0 = __this->___moveThreshold_15;
		DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9(__this, L_0, NULL);
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerDown_mBFA3026A0DA4A6B53C0E747A1E892CBC7F43E136 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_2, NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_3, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___eventData0;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerUp_m10389907A9D3362F6B75FDC5F35AF37A5DD5AE7C (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_HandleInput_m3F157F4825BE6682228C8E135581C6404D268506 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (magnitude > moveThreshold)
		float L_0 = ___magnitude0;
		float L_1 = __this->___moveThreshold_15;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0035;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___normalised1;
		float L_3 = ___magnitude0;
		float L_4 = __this->___moveThreshold_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_2, ((float)il2cpp_codegen_subtract(L_3, L_4)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___radius2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_5, L_6, NULL);
		V_0 = L_7;
		// background.anchoredPosition += difference;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = L_8;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_10, L_11, NULL);
		NullCheck(L_9);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_9, L_12, NULL);
	}

IL_0035:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_13 = ___magnitude0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___normalised1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___radius2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = ___cam3;
		Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C(__this, L_13, L_14, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick__ctor_m9DDA6263314BD7B97679DF14A4664358BD3E58CB (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->___moveThreshold_15 = (1.0f);
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FixedJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedJoystick__ctor_m8C8BB74E5EA8CA2C3DD2AE084301EC91F519AD24 (FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F* __this, const RuntimeMethod* method) 
{
	{
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FloatingJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_Start_mB22059CD82AF77A8F94AC72E81A8BAE969399E81 (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerDown_mFE5B4F54D5BBCA72F9729AB64765F558FA5C7A54 (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_2, NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_3, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___eventData0;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerUp_m80ABA9C914E1953F91DBF74853CE84879352280D (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick__ctor_m6B72425996D46B025F9E9D22121E9D01BEC6BD3C (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, const RuntimeMethod* method) 
{
	{
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single VariableJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VariableJoystick_get_MoveThreshold_m8C9D3A63DB3B6CF1F0139C3504EC2E7AC4E7CF99 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->___moveThreshold_15;
		return L_0;
	}
}
// System.Void VariableJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_set_MoveThreshold_m23DC4187B405EB690D297379E2113568B40C705A (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___moveThreshold_15 = L_1;
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, int32_t ___joystickType0, const RuntimeMethod* method) 
{
	{
		// this.joystickType = joystickType;
		int32_t L_0 = ___joystickType0;
		__this->___joystickType_16 = L_0;
		// if(joystickType == JoystickType.Fixed)
		int32_t L_1 = ___joystickType0;
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		// background.anchoredPosition = fixedPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___fixedPosition_17;
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_2, L_3, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		return;
	}

IL_002d:
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_Start_m21743760641EA0317ACCD95949B99825446FE74D (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// fixedPosition = background.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		__this->___fixedPosition_17 = L_1;
		// SetMode(joystickType);
		int32_t L_2 = __this->___joystickType_16;
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerDown_m8ABE5C8EFBC8DB3A2EE135FFF3C0F67C533AF4B5 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->___joystickType_16;
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_3, NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_1, L_4, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
	}

IL_0030:
	{
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = ___eventData0;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerUp_m65296D82A6C2E1BDC2D622B9C922FAE8E4544526 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->___joystickType_16;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_HandleInput_mD1BCF9A068737A9C057EE8CEB7E6DEB682CC03AB (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (joystickType == JoystickType.Dynamic && magnitude > moveThreshold)
		int32_t L_0 = __this->___joystickType_16;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_003e;
		}
	}
	{
		float L_1 = ___magnitude0;
		float L_2 = __this->___moveThreshold_15;
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_003e;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___normalised1;
		float L_4 = ___magnitude0;
		float L_5 = __this->___moveThreshold_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_3, ((float)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___radius2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_6, L_7, NULL);
		V_0 = L_8;
		// background.anchoredPosition += difference;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_9;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_11, L_12, NULL);
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_10, L_13, NULL);
	}

IL_003e:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_14 = ___magnitude0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___normalised1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___radius2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = ___cam3;
		Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C(__this, L_14, L_15, L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick__ctor_m6C7B41973BE20A94F16DB5DCC9AA805C5D8DF852 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->___moveThreshold_15 = (1.0f);
		// private Vector2 fixedPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___fixedPosition_17 = L_0;
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LobbyManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_Awake_m55E6DF51682162CFF126F53F17428BDA50BB1734 (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Screen.SetResolution(1024, 576, false);
		Screen_SetResolution_m10750EEAE9DB2D7513D0A7882CB7A4A18CD35249(((int32_t)1024), ((int32_t)576), (bool)0, NULL);
		// PhotonNetwork.ConnectUsingSettings();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_ConnectUsingSettings_mB2A659A9684CAC6BBBA81F453E31C765DA29E13D(NULL);
		// }
		return;
	}
}
// System.Void LobbyManager::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_OnConnectedToMaster_m5FAD8041E7C7E170A7061319A250E83A06DEE8DD (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral034210A24608091CCB8822F3F2A7FD136B8D23DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnConnectedToMaster();
		MonoBehaviourPunCallbacks_OnConnectedToMaster_m8F8226A0CC5E06EDE926F7B5227683BBE7F0E7DB(__this, NULL);
		// print("<color=yellow>1. ?w?g?i?J????x</color>");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteral034210A24608091CCB8822F3F2A7FD136B8D23DF, NULL);
		// PhotonNetwork.JoinLobby();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_JoinLobby_m9815B6661AB801FEE0FD3AC8AE9614990BBA2DE5(NULL);
		// }
		return;
	}
}
// System.Void LobbyManager::OnJoinedLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_OnJoinedLobby_m17FD87B1172CD6496F4F2BCD99EE2C64F1EE744B (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABC69156EF02ECFE6696FF6EED48CC377EA1A011);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnJoinedLobby();
		MonoBehaviourPunCallbacks_OnJoinedLobby_mC8B9CB6380D91FE80BCBBD5CD886B88F7FDD23C7(__this, NULL);
		// print("<color=yellow>2. ?w?g?i?J?j?U</color>");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteralABC69156EF02ECFE6696FF6EED48CC377EA1A011, NULL);
		// btnBattle.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___btnBattle_6;
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void LobbyManager::StartConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_StartConnect_mAEFF480E7A3C0398C48779A37E71AD63FE1E469A (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AF3924ECBFEE1C3C10293DCC92228F414341EE2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("<color=yellow>3. ?}?l?s?u</color>");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteral7AF3924ECBFEE1C3C10293DCC92228F414341EE2, NULL);
		// goConnectView.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___goConnectView_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// PhotonNetwork.JoinRandomRoom();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PhotonNetwork_JoinRandomRoom_m88524DDB91009AAF7F7DB095EBC96C52A545B68A(NULL);
		// }
		return;
	}
}
// System.Void LobbyManager::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_OnJoinRandomFailed_mC1276B98983F3ADC1A975972D83ABD9ED3573409 (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E78A77A472CC638158D9590BA08B84BC8AEC927);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* V_0 = NULL;
	{
		// base.OnJoinRandomFailed(returnCode, message);
		int16_t L_0 = ___returnCode0;
		String_t* L_1 = ___message1;
		MonoBehaviourPunCallbacks_OnJoinRandomFailed_mF597D0B2F5B92ED02F0E771442DF653C5E03765A(__this, L_0, L_1, NULL);
		// print("<color=red>4. ?[?J?H?????????</color>");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteral1E78A77A472CC638158D9590BA08B84BC8AEC927, NULL);
		// RoomOptions ro = new RoomOptions();     // ?s?W????]?w????
		RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* L_2 = (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23*)il2cpp_codegen_object_new(RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RoomOptions__ctor_m06A5DAB18D3385E8AED5DA84C8A89D9C7E8498F8(L_2, NULL);
		V_0 = L_2;
		// ro.MaxPlayers = maxCountPlayer;         // ???w?????j?H??
		RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* L_3 = V_0;
		uint8_t L_4 = __this->___maxCountPlayer_8;
		NullCheck(L_3);
		L_3->___MaxPlayers_2 = L_4;
		// PhotonNetwork.CreateRoom("", ro);       // ?????????????????
		RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = PhotonNetwork_CreateRoom_m12D48FA7E2BFA9460038A06A7461B5D32404DD28(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_5, (TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9*)NULL, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
		// }
		return;
	}
}
// System.Void LobbyManager::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_OnJoinedRoom_m8CE303ED977B2AE73443F9DEC12973C52095E23E (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5378989CC9B9323498293F87C7482A385935964D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFAB7B864AEB8B1F2F829E4E8E6C1EFFA5AAC3A3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// base.OnJoinedRoom();
		MonoBehaviourPunCallbacks_OnJoinedRoom_m817D94FDDAF24D66A92DC9FAB480FC53272A8EF5(__this, NULL);
		// print("<color=yellow>5. ?}???i?J???</color>");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteralCFAB7B864AEB8B1F2F829E4E8E6C1EFFA5AAC3A3, NULL);
		// int currentCount = PhotonNetwork.CurrentRoom.PlayerCount;   // ???e????H??
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_0;
		L_0 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = Room_get_PlayerCount_mB51FD867790C849B312565EA2052474828EA3F1A(L_0, NULL);
		V_0 = L_1;
		// int maxCount = PhotonNetwork.CurrentRoom.MaxPlayers;        // ???e?????j?H??
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_2;
		L_2 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		NullCheck(L_2);
		uint8_t L_3;
		L_3 = Room_get_MaxPlayers_m366A4F5F9AE034C75EE5D68F0D42BD5D44FF92D4_inline(L_2, NULL);
		V_1 = L_3;
		// textCountPlayer.text = "?s?u?H?? " + currentCount + " / " + maxCount;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___textCountPlayer_7;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_7;
		L_7 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral5378989CC9B9323498293F87C7482A385935964D, L_5, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_6, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// LoadGameScene(currentCount, maxCount);
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		LobbyManager_LoadGameScene_m4544797F45225EB014E05A23551A9D28ABAEA5EE(__this, L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void LobbyManager::OnPlayerEnteredRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_OnPlayerEnteredRoom_m2F35E9DD90D66BF326DE4AA070EE9C17C6B2A36C (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___newPlayer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5378989CC9B9323498293F87C7482A385935964D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BF582C773D2521208368B297B930B67904A7E32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// base.OnPlayerEnteredRoom(newPlayer);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___newPlayer0;
		MonoBehaviourPunCallbacks_OnPlayerEnteredRoom_m0951CB09066015931986C42556735ACDC1B2228C(__this, L_0, NULL);
		// print("<color=yellow>6. ???a?i?J???</color>");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteral5BF582C773D2521208368B297B930B67904A7E32, NULL);
		// int currentCount = PhotonNetwork.CurrentRoom.PlayerCount;   // ???e????H??
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_1;
		L_1 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		NullCheck(L_1);
		uint8_t L_2;
		L_2 = Room_get_PlayerCount_mB51FD867790C849B312565EA2052474828EA3F1A(L_1, NULL);
		V_0 = L_2;
		// int maxCount = PhotonNetwork.CurrentRoom.MaxPlayers;        // ???e?????j?H??
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_3;
		L_3 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		NullCheck(L_3);
		uint8_t L_4;
		L_4 = Room_get_MaxPlayers_m366A4F5F9AE034C75EE5D68F0D42BD5D44FF92D4_inline(L_3, NULL);
		V_1 = L_4;
		// textCountPlayer.text = "?s?u?H?? " + currentCount + " / " + maxCount;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___textCountPlayer_7;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_8;
		L_8 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral5378989CC9B9323498293F87C7482A385935964D, L_6, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_7, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
		// LoadGameScene(currentCount, maxCount);
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		LobbyManager_LoadGameScene_m4544797F45225EB014E05A23551A9D28ABAEA5EE(__this, L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void LobbyManager::LoadGameScene(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_LoadGameScene_m4544797F45225EB014E05A23551A9D28ABAEA5EE (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, int32_t ___currentCount0, int32_t ___maxCount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDFB8C38F6540D2929CA284F3F54CBDC4A05733);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentCount == maxCount)
		int32_t L_0 = ___currentCount0;
		int32_t L_1 = ___maxCount1;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		// PhotonNetwork.LoadLevel("?C??????");
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		PhotonNetwork_LoadLevel_m56CEF348D7FAB04D4707AB4F723B30B70FB26ABB(_stringLiteralEDDFB8C38F6540D2929CA284F3F54CBDC4A05733, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void LobbyManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager__ctor_m1A4D2FDD6CF3611918EF889457B0D4ABA7384C4B (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	{
		// private byte maxCountPlayer = 3;
		__this->___maxCountPlayer_8 = (uint8_t)3;
		MonoBehaviourPunCallbacks__ctor_m25DE2B188CA2481D58FBA9BB58CFBD65432B77E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TravisGameAssets.HitImpactEffectsPreview::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_Start_mDBAE4636E9F53312E86D068F3B71820822E2FEE7 (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// hitIndex = 0;
		__this->___hitIndex_16 = 0;
		// cameraRotating = false;
		__this->___cameraRotating_23 = (bool)0;
		// floorVisible = true;
		__this->___floorVisible_24 = (bool)1;
		// slowMotion = false;
		__this->___slowMotion_25 = (bool)0;
		// lighting = true;
		__this->___lighting_26 = (bool)1;
		// initFov = Camera.main.fieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_0, NULL);
		__this->___initFov_19 = L_1;
		// initCamPosition = Camera.main.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___initCamPosition_17 = L_4;
		// initCamRotation = Camera.main.transform.rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		__this->___initCamRotation_18 = L_7;
		// hitEffects = new GameObject[particlesPool.childCount];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___particlesPool_5;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_8, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->___hitEffects_15 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hitEffects_15), (void*)L_10);
		// for(int i = 0; i < particlesPool.childCount; i++)
		V_0 = 0;
		goto IL_0094;
	}

IL_0077:
	{
		// hitEffects[i] = particlesPool.GetChild(i).gameObject;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->___hitEffects_15;
		int32_t L_12 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___particlesPool_5;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_13, L_14, NULL);
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_16);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_16);
		// for(int i = 0; i < particlesPool.childCount; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0094:
	{
		// for(int i = 0; i < particlesPool.childCount; i++)
		int32_t L_18 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___particlesPool_5;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_19, NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0077;
		}
	}
	{
		// RefreshHitUI();
		HitImpactEffectsPreview_RefreshHitUI_mF6020FE296846EE7188FA76D98C00269B7DECF23(__this, NULL);
		// }
		return;
	}
}
// System.Void TravisGameAssets.HitImpactEffectsPreview::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_Update_m3E5851C79F2B6FED8960F5854B7576BB9C2AE18B (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// if(Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)97), NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)276), NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}

IL_0015:
	{
		// PreviousHit();
		HitImpactEffectsPreview_PreviousHit_m4C03EFBA92EA6B4BEED3C8CEBB3818556E30407F(__this, NULL);
		goto IL_0038;
	}

IL_001d:
	{
		// else if(Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.RightArrow))
		bool L_2;
		L_2 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)100), NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)275), NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}

IL_0032:
	{
		// NextHit();
		HitImpactEffectsPreview_NextHit_m68BC7C4EDDD7DD6352C8C16B83719A7D1B8B92AF(__this, NULL);
	}

IL_0038:
	{
		// if(Input.GetMouseButtonDown(0))
		bool L_4;
		L_4 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_4)
		{
			goto IL_00a0;
		}
	}
	{
		// if(!EventSystem.current.IsPointerOverGameObject())
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_5;
		L_5 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38(L_5, NULL);
		if (L_6)
		{
			goto IL_00a0;
		}
	}
	{
		// RaycastHit hit = new RaycastHit();
		il2cpp_codegen_initobj((&V_1), sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// if(floorCollider.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, 1000f))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = __this->___floorCollider_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_8);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_10;
		L_10 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_8, L_9, NULL);
		NullCheck(L_7);
		bool L_11;
		L_11 = Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938(L_7, L_10, (&V_1), (1000.0f), NULL);
		if (!L_11)
		{
			goto IL_00a0;
		}
	}
	{
		// GameObject newHits = SpawnHit();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = HitImpactEffectsPreview_SpawnHit_m0B6276660CE590154CCB7C9C55FBB2DA2F4705AC(__this, NULL);
		V_2 = L_12;
		// newHits.transform.position = hit.point + newHits.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_2;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_2;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_15, L_18, NULL);
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_19, NULL);
	}

IL_00a0:
	{
		// if(Input.GetKeyDown("1"))
		bool L_20;
		L_20 = Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916(_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, NULL);
		if (!L_20)
		{
			goto IL_00b2;
		}
	}
	{
		// ToggleRotation();
		HitImpactEffectsPreview_ToggleRotation_mDF257CEC93D29B988AB7C7D5351BA90D0F23D95A(__this, NULL);
	}

IL_00b2:
	{
		// if(Input.GetKeyDown("2"))
		bool L_21;
		L_21 = Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916(_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, NULL);
		if (!L_21)
		{
			goto IL_00c4;
		}
	}
	{
		// ToggleFloor();
		HitImpactEffectsPreview_ToggleFloor_m46CAA22630F68A0091563740B922CF33A8A58D60(__this, NULL);
	}

IL_00c4:
	{
		// if(Input.GetKeyDown("3"))
		bool L_22;
		L_22 = Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916(_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE, NULL);
		if (!L_22)
		{
			goto IL_00d6;
		}
	}
	{
		// ToggleSlowMotion();
		HitImpactEffectsPreview_ToggleSlowMotion_mBA6019B5589C94E3D4422E381A4B32AB41832F10(__this, NULL);
	}

IL_00d6:
	{
		// if(Input.GetKeyDown(KeyCode.Space))
		bool L_23;
		L_23 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)32), NULL);
		if (!L_23)
		{
			goto IL_00e5;
		}
	}
	{
		// ToggleLighting();
		HitImpactEffectsPreview_ToggleLighting_m9460655D22228DD82181A3A916B96801438FC05B(__this, NULL);
	}

IL_00e5:
	{
		// float fov = Camera.main.fieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24;
		L_24 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_24);
		float L_25;
		L_25 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_24, NULL);
		V_0 = L_25;
		// fov -= Input.GetAxis("Mouse ScrollWheel") * sensitivity;
		float L_26 = V_0;
		float L_27;
		L_27 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		float L_28 = __this->___sensitivity_22;
		V_0 = ((float)il2cpp_codegen_subtract(L_26, ((float)il2cpp_codegen_multiply(L_27, L_28))));
		// fov = Mathf.Clamp(fov, minFov, maxFov);
		float L_29 = V_0;
		float L_30 = __this->___minFov_20;
		float L_31 = __this->___maxFov_21;
		float L_32;
		L_32 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_29, L_30, L_31, NULL);
		V_0 = L_32;
		// Camera.main.fieldOfView = fov;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_33;
		L_33 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		float L_34 = V_0;
		NullCheck(L_33);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_33, L_34, NULL);
		// if(Input.GetMouseButtonDown(1))
		bool L_35;
		L_35 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(1, NULL);
		if (!L_35)
		{
			goto IL_0162;
		}
	}
	{
		// Camera.main.transform.position = initCamPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_36;
		L_36 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = __this->___initCamPosition_17;
		NullCheck(L_37);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_37, L_38, NULL);
		// Camera.main.transform.rotation = initCamRotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_39;
		L_39 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_39, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41 = __this->___initCamRotation_18;
		NullCheck(L_40);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_40, L_41, NULL);
		// if(cameraRotating)
		bool L_42 = __this->___cameraRotating_23;
		if (!L_42)
		{
			goto IL_0162;
		}
	}
	{
		// ToggleRotation();
		HitImpactEffectsPreview_ToggleRotation_mDF257CEC93D29B988AB7C7D5351BA90D0F23D95A(__this, NULL);
	}

IL_0162:
	{
		// if(Input.GetMouseButtonDown(2))
		bool L_43;
		L_43 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(2, NULL);
		if (!L_43)
		{
			goto IL_017a;
		}
	}
	{
		// Camera.main.fieldOfView = initFov;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_44;
		L_44 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		float L_45 = __this->___initFov_19;
		NullCheck(L_44);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_44, L_45, NULL);
	}

IL_017a:
	{
		// if(cameraRotating)
		bool L_46 = __this->___cameraRotating_23;
		if (!L_46)
		{
			goto IL_01a3;
		}
	}
	{
		// cameraPivot.Rotate(Vector3.up * (cameraRotationSpeed * Time.deltaTime));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = __this->___cameraPivot_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_49 = __this->___cameraRotationSpeed_9;
		float L_50;
		L_50 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_48, ((float)il2cpp_codegen_multiply(L_49, L_50)), NULL);
		NullCheck(L_47);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_47, L_51, NULL);
	}

IL_01a3:
	{
		// }
		return;
	}
}
// System.Void TravisGameAssets.HitImpactEffectsPreview::ToggleRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_ToggleRotation_mDF257CEC93D29B988AB7C7D5351BA90D0F23D95A (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B3_1 = NULL;
	{
		// cameraRotating = !cameraRotating;
		bool L_0 = __this->___cameraRotating_23;
		__this->___cameraRotating_23 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// var newColor = rotationIcon.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___rotationIcon_11;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		V_0 = L_2;
		// newColor.a = cameraRotating ? 1f : 0.33f;
		bool L_3 = __this->___cameraRotating_23;
		G_B1_0 = (&V_0);
		if (L_3)
		{
			G_B2_0 = (&V_0);
			goto IL_002c;
		}
	}
	{
		G_B3_0 = (0.330000013f);
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_002c:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		G_B3_1->___a_3 = G_B3_0;
		// rotationIcon.color = newColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___rotationIcon_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = V_0;
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void TravisGameAssets.HitImpactEffectsPreview::ToggleFloor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_ToggleFloor_m46CAA22630F68A0091563740B922CF33A8A58D60 (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B3_1 = NULL;
	{
		// floorVisible = !floorVisible;
		bool L_0 = __this->___floorVisible_24;
		__this->___floorVisible_24 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// floor.enabled = floorVisible;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1 = __this->___floor_10;
		bool L_2 = __this->___floorVisible_24;
		NullCheck(L_1);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, L_2, NULL);
		// var newColor = floorIcon.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___floorIcon_12;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_3);
		V_0 = L_4;
		// newColor.a = floorVisible ? 1f : 0.33f;
		bool L_5 = __this->___floorVisible_24;
		G_B1_0 = (&V_0);
		if (L_5)
		{
			G_B2_0 = (&V_0);
			goto IL_003d;
		}
	}
	{
		G_B3_0 = (0.330000013f);
		G_B3_1 = G_B1_0;
		goto IL_0042;
	}

IL_003d:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
	}

IL_0042:
	{
		G_B3_1->___a_3 = G_B3_0;
		// floorIcon.color = newColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___floorIcon_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// }
		return;
	}
}
// System.Void TravisGameAssets.HitImpactEffectsPreview::ToggleSlowMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_ToggleSlowMotion_mBA6019B5589C94E3D4422E381A4B32AB41832F10 (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B5_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B6_1 = NULL;
	{
		// slowMotion = !slowMotion;
		bool L_0 = __this->___slowMotion_25;
		__this->___slowMotion_25 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// if(slowMotion)
		bool L_1 = __this->___slowMotion_25;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// Time.timeScale = 0.5f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.5f), NULL);
		goto IL_002d;
	}

IL_0023:
	{
		// Time.timeScale = 1.0f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
	}

IL_002d:
	{
		// var newColor = slowMotionIcon.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___slowMotionIcon_13;
		NullCheck(L_2);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		V_0 = L_3;
		// newColor.a = slowMotion ? 1f : 0.33f;
		bool L_4 = __this->___slowMotion_25;
		G_B4_0 = (&V_0);
		if (L_4)
		{
			G_B5_0 = (&V_0);
			goto IL_004a;
		}
	}
	{
		G_B6_0 = (0.330000013f);
		G_B6_1 = G_B4_0;
		goto IL_004f;
	}

IL_004a:
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B5_0;
	}

IL_004f:
	{
		G_B6_1->___a_3 = G_B6_0;
		// slowMotionIcon.color = newColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___slowMotionIcon_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void TravisGameAssets.HitImpactEffectsPreview::ToggleLighting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_ToggleLighting_m9460655D22228DD82181A3A916B96801438FC05B (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	{
		// lighting = !lighting;
		bool L_0 = __this->___lighting_26;
		__this->___lighting_26 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// light.SetActive(lighting);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___light_14;
		bool L_2 = __this->___lighting_26;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void TravisGameAssets.HitImpactEffectsPreview::NextHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_NextHit_m68BC7C4EDDD7DD6352C8C16B83719A7D1B8B92AF (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	{
		// hitIndex++;
		int32_t L_0 = __this->___hitIndex_16;
		__this->___hitIndex_16 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if(hitIndex >= hitEffects.Length)
		int32_t L_1 = __this->___hitIndex_16;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___hitEffects_15;
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0025;
		}
	}
	{
		// hitIndex = 0;
		__this->___hitIndex_16 = 0;
	}

IL_0025:
	{
		// RefreshHitUI();
		HitImpactEffectsPreview_RefreshHitUI_mF6020FE296846EE7188FA76D98C00269B7DECF23(__this, NULL);
		// }
		return;
	}
}
// System.Void TravisGameAssets.HitImpactEffectsPreview::PreviousHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_PreviousHit_m4C03EFBA92EA6B4BEED3C8CEBB3818556E30407F (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	{
		// hitIndex--;
		int32_t L_0 = __this->___hitIndex_16;
		__this->___hitIndex_16 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if(hitIndex < 0)
		int32_t L_1 = __this->___hitIndex_16;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// hitIndex = hitEffects.Length - 1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___hitEffects_15;
		NullCheck(L_2);
		__this->___hitIndex_16 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
	}

IL_0027:
	{
		// RefreshHitUI();
		HitImpactEffectsPreview_RefreshHitUI_mF6020FE296846EE7188FA76D98C00269B7DECF23(__this, NULL);
		// }
		return;
	}
}
// System.Void TravisGameAssets.HitImpactEffectsPreview::RefreshHitUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_RefreshHitUI_mF6020FE296846EE7188FA76D98C00269B7DECF23 (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// hitNameLabel.text = hitEffects[hitIndex].name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___hitNameLabel_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___hitEffects_15;
		int32_t L_2 = __this->___hitIndex_16;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// hitIndexLabel.text = string.Format("{0}/{1}", (hitIndex+1).ToString("00"), hitEffects.Length.ToString("00"));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___hitIndexLabel_7;
		int32_t L_7 = __this->___hitIndex_16;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		String_t* L_8;
		L_8 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_0), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___hitEffects_15;
		NullCheck(L_9);
		V_0 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		String_t* L_10;
		L_10 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_0), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		String_t* L_11;
		L_11 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_8, L_10, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_11);
		// }
		return;
	}
}
// UnityEngine.GameObject TravisGameAssets.HitImpactEffectsPreview::SpawnHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HitImpactEffectsPreview_SpawnHit_m0B6276660CE590154CCB7C9C55FBB2DA2F4705AC (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject spawnedHit = Instantiate(hitEffects[hitIndex]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___hitEffects_15;
		int32_t L_1 = __this->___hitIndex_16;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// spawnedHit.transform.LookAt(Camera.main.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_6);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_6, L_8, NULL);
		// return spawnedHit;
		return L_5;
	}
}
// System.Void TravisGameAssets.HitImpactEffectsPreview::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview__ctor_m55BC63E955B324AB77FCDD705DE282B6BFE0DD60 (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	{
		// public float cameraRotationSpeed = 10f;
		__this->___cameraRotationSpeed_9 = (10.0f);
		// private float minFov = 15f;
		__this->___minFov_20 = (15.0f);
		// private float maxFov = 90f;
		__this->___maxFov_21 = (90.0f);
		// private float sensitivity = 10f;
		__this->___sensitivity_22 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KID.AdsManager::OnInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_OnInitializationComplete_mDFC689D05558A22DED50D536D0C9AD19EB71AC05 (AdsManager_t71168750765A444342C2737FCB33AFE43B9DEF0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40D124D1D432B44A1074918639B3AF56F0F6DDB9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("<color=green>1. ?s?i??l????\</color>");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteral40D124D1D432B44A1074918639B3AF56F0F6DDB9, NULL);
		// }
		return;
	}
}
// System.Void KID.AdsManager::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_OnInitializationFailed_m6539FFEC9A543DA682778092D0F6AF7838C6CFBB (AdsManager_t71168750765A444342C2737FCB33AFE43B9DEF0D* __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC189D0C157412E84A29AFCADEACA84764545E6F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("<color=red>?s?i??l?????A??]?G" + message + "</color>");
		String_t* L_0 = ___message1;
		String_t* L_1;
		L_1 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralC189D0C157412E84A29AFCADEACA84764545E6F5, L_0, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_1, NULL);
		// }
		return;
	}
}
// System.Void KID.AdsManager::OnUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_OnUnityAdsAdLoaded_mDCB15A3DC319DD0797784E6EF8CD1697303F9636 (AdsManager_t71168750765A444342C2737FCB33AFE43B9DEF0D* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF42CA861B921E46CC4B6FDFE4E8211D4A2A9EB09);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("<color=green>2. ?s?i???J???\ " + placementId + "</color>");
		String_t* L_0 = ___placementId0;
		String_t* L_1;
		L_1 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralF42CA861B921E46CC4B6FDFE4E8211D4A2A9EB09, L_0, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_1, NULL);
		// }
		return;
	}
}
// System.Void KID.AdsManager::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_OnUnityAdsFailedToLoad_mEC25F872D7309FBEEC50400A2A6ABFD16F046A65 (AdsManager_t71168750765A444342C2737FCB33AFE43B9DEF0D* __this, String_t* ___placementId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9436233A75C85FD412182447760C0928731FF34F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("<color=red>?s?i???J????A??]?G" + message + "</color>");
		String_t* L_0 = ___message2;
		String_t* L_1;
		L_1 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral9436233A75C85FD412182447760C0928731FF34F, L_0, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_1, NULL);
		// }
		return;
	}
}
// System.Void KID.AdsManager::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_OnUnityAdsShowFailure_m4440A9BD09A341260F30B30AC8AC56268BB6360C (AdsManager_t71168750765A444342C2737FCB33AFE43B9DEF0D* __this, String_t* ___placementId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66B10F3B2A4D5BC08B98B534CB1D3B052DCDE6B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("<color=red>3. ?s?i?????? " + message + "</color>");
		String_t* L_0 = ___message2;
		String_t* L_1;
		L_1 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral66B10F3B2A4D5BC08B98B534CB1D3B052DCDE6B8, L_0, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_1, NULL);
		// }
		return;
	}
}
// System.Void KID.AdsManager::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_OnUnityAdsShowStart_mFD444AD42B614F31FCF4688A0DDDA61877682F78 (AdsManager_t71168750765A444342C2737FCB33AFE43B9DEF0D* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9C7FB6AE3FF5017534605F6975309544858780A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("<color=green>3. ?s?i???}?l " + placementId + "</color>");
		String_t* L_0 = ___placementId0;
		String_t* L_1;
		L_1 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralA9C7FB6AE3FF5017534605F6975309544858780A, L_0, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_1, NULL);
		// }
		return;
	}
}
// System.Void KID.AdsManager::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_OnUnityAdsShowClick_m46F72AEF373FA9D4BE2EBB15C9F528977D306D42 (AdsManager_t71168750765A444342C2737FCB33AFE43B9DEF0D* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6C6FB22D4BDDC985BA1ACF87E184AB9560BAA57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("<color=green>3. ?s?i????I??" + placementId + "</color>");
		String_t* L_0 = ___placementId0;
		String_t* L_1;
		L_1 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralC6C6FB22D4BDDC985BA1ACF87E184AB9560BAA57, L_0, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_1, NULL);
		// }
		return;
	}
}
// System.Void KID.AdsManager::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_OnUnityAdsShowComplete_m18F67BBCA5D94DE7F00E18C1B71621D697FB72EB (AdsManager_t71168750765A444342C2737FCB33AFE43B9DEF0D* __this, String_t* ___placementId0, int32_t ___showCompletionState1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FAA700A4B5D2B8CF766DD86DEBD05B153BE14F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("<color=green>3. ?s?i?????? " + placementId + "</color>");
		String_t* L_0 = ___placementId0;
		String_t* L_1;
		L_1 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral8FAA700A4B5D2B8CF766DD86DEBD05B153BE14F2, L_0, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_1, NULL);
		// coinPlayer += addCoinValue;
		int32_t L_2 = __this->___coinPlayer_5;
		int32_t L_3 = __this->___addCoinValue_4;
		__this->___coinPlayer_5 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		// textCoin.text = coinPlayer.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___textCoin_13;
		int32_t* L_5 = (&__this->___coinPlayer_5);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
		// }
		return;
	}
}
// System.Void KID.AdsManager::LoadAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_LoadAds_m901B5F698965A3EC343116DDE0B7D2A6F61865C7 (AdsManager_t71168750765A444342C2737FCB33AFE43B9DEF0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F64D7E6B580A7A21FE715CCB12CA3DB2257AB75);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("???J?s?i?AID?G" + adsId);
		String_t* L_0 = __this->___adsId_12;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral9F64D7E6B580A7A21FE715CCB12CA3DB2257AB75, L_0, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_1, NULL);
		// Advertisement.Load(adsId, this);
		String_t* L_2 = __this->___adsId_12;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m18267376C71DD6875C832B7438C78656142B8F3C(L_2, __this, NULL);
		// ShowAds();
		AdsManager_ShowAds_m3A4F71F16F4905E8D75A66608EFFD98C5B942491(__this, NULL);
		// }
		return;
	}
}
// System.Void KID.AdsManager::ShowAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_ShowAds_m3A4F71F16F4905E8D75A66608EFFD98C5B942491 (AdsManager_t71168750765A444342C2737FCB33AFE43B9DEF0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Advertisement.Show(adsId, this);
		String_t* L_0 = __this->___adsId_12;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_mC9F749C22FBCAF2E7581A35AA729C19EA6FE78C5(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void KID.AdsManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_Awake_m4C38E86824C66A65F504D1B1E4663C4948925272 (AdsManager_t71168750765A444342C2737FCB33AFE43B9DEF0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdsManager_LoadAds_m901B5F698965A3EC343116DDE0B7D2A6F61865C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral267DC82CEED84A8A27D924D2E08B92887794D1E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2BE1F0205F016676A789761F2CAF7E48564AE6F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textCoin = GameObject.Find("???a??????q").GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralD2BE1F0205F016676A789761F2CAF7E48564AE6F, NULL);
		NullCheck(L_0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_0, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->___textCoin_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textCoin_13), (void*)L_1);
		// btnAdsAddCoin = GameObject.Find("?s?i???s?K?[????").GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral267DC82CEED84A8A27D924D2E08B92887794D1E4, NULL);
		NullCheck(L_2);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3;
		L_3 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_2, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		__this->___btnAdsAddCoin_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___btnAdsAddCoin_6), (void*)L_3);
		// btnAdsAddCoin.onClick.AddListener(LoadAds);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___btnAdsAddCoin_6;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_4, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_6, __this, (intptr_t)((void*)AdsManager_LoadAds_m901B5F698965A3EC343116DDE0B7D2A6F61865C7_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_5, L_6, NULL);
		// InitializeAds();
		AdsManager_InitializeAds_mF342919F073F18D74B5D4A680FE5EBEF1559AAF2(__this, NULL);
		// adsId = adsIdAndroid;
		String_t* L_7 = __this->___adsIdAndroid_10;
		__this->___adsId_12 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adsId_12), (void*)L_7);
		// adsId = adsIdAndroid;
		String_t* L_8 = __this->___adsIdAndroid_10;
		__this->___adsId_12 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adsId_12), (void*)L_8);
		// }
		return;
	}
}
// System.Void KID.AdsManager::InitializeAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_InitializeAds_mF342919F073F18D74B5D4A680FE5EBEF1559AAF2 (AdsManager_t71168750765A444342C2737FCB33AFE43B9DEF0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameId = gameIdAndroid;
		String_t* L_0 = __this->___gameIdAndroid_7;
		__this->___gameId_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameId_9), (void*)L_0);
		// Advertisement.Initialize(gameId, true, this);
		String_t* L_1 = __this->___gameId_9;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Initialize_m55B4E5A16566DB6F87FDC57B4E75AA708396AF6E(L_1, (bool)1, __this, NULL);
		// }
		return;
	}
}
// System.Void KID.AdsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager__ctor_m902FFB59C86B31DAF3CBA57ABD5A57824AEBD5F7 (AdsManager_t71168750765A444342C2737FCB33AFE43B9DEF0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral068341F44E6AA2C1827A87ADA515553684C961CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C1C60E7DD87FDC0AE21FF26DCF607569887BC9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB41CB6D8916F327083B64DF0A43E93A0A0D66AA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int addCoinValue = 100;
		__this->___addCoinValue_4 = ((int32_t)100);
		// private string gameIdAndroid = "4754879";   // ??x Adnroid ID
		__this->___gameIdAndroid_7 = _stringLiteral068341F44E6AA2C1827A87ADA515553684C961CA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameIdAndroid_7), (void*)_stringLiteral068341F44E6AA2C1827A87ADA515553684C961CA);
		// private string gameIdIos = "4754878";       // ??x iOS ID
		__this->___gameIdIos_8 = _stringLiteral4C1C60E7DD87FDC0AE21FF26DCF607569887BC9F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameIdIos_8), (void*)_stringLiteral4C1C60E7DD87FDC0AE21FF26DCF607569887BC9F);
		// private string adsIdAndroid = "AddCoin";
		__this->___adsIdAndroid_10 = _stringLiteralB41CB6D8916F327083B64DF0A43E93A0A0D66AA1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adsIdAndroid_10), (void*)_stringLiteralB41CB6D8916F327083B64DF0A43E93A0A0D66AA1);
		// private string adsIdIos = "AddCoin";
		__this->___adsIdIos_11 = _stringLiteralB41CB6D8916F327083B64DF0A43E93A0A0D66AA1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adsIdIos_11), (void*)_stringLiteralB41CB6D8916F327083B64DF0A43E93A0A0D66AA1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KID.DamageManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageManager_Awake_mAC0996ABCF17B1F8E2A95237B58AD9DD46004AF9 (DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D_m539867AF6C9C784743133077D3C6101F1133E9E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5_m69DF2786808A6763F4F22D64A4A3525D08BDCB1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m8600DF2023C681E503BBD879A6037C3F4F0D92C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// systemControl = GetComponent<SystemControl>();
		SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5* L_0;
		L_0 = Component_GetComponent_TisSystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5_m69DF2786808A6763F4F22D64A4A3525D08BDCB1D(__this, Component_GetComponent_TisSystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5_m69DF2786808A6763F4F22D64A4A3525D08BDCB1D_RuntimeMethod_var);
		__this->___systemControl_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___systemControl_14), (void*)L_0);
		// systemAttack = GetComponent<SystemAttack>();
		SystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D* L_1;
		L_1 = Component_GetComponent_TisSystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D_m539867AF6C9C784743133077D3C6101F1133E9E5(__this, Component_GetComponent_TisSystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D_m539867AF6C9C784743133077D3C6101F1133E9E5_RuntimeMethod_var);
		__this->___systemAttack_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___systemAttack_15), (void*)L_1);
		// hpMax = hp;
		float L_2 = __this->___hp_5;
		__this->___hpMax_8 = L_2;
		// smr = GetComponentsInChildren<SkinnedMeshRenderer>();         // ???o?l??????????
		SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B* L_3;
		L_3 = Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m8600DF2023C681E503BBD879A6037C3F4F0D92C0(__this, Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m8600DF2023C681E503BBD879A6037C3F4F0D92C0_RuntimeMethod_var);
		__this->___smr_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___smr_10), (void*)L_3);
		// materialDissolve = new Material(shaderDissolve);              // ?s?W ?????? ????y
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = __this->___shaderDissolve_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_5, L_4, NULL);
		__this->___materialDissolve_13 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___materialDissolve_13), (void*)L_5);
		// for (int i = 0; i < smr.Length; i++)
		V_0 = 0;
		goto IL_005c;
	}

IL_0045:
	{
		// smr[i].material = materialDissolve;
		SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B* L_6 = __this->___smr_10;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___materialDissolve_13;
		NullCheck(L_9);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_9, L_10, NULL);
		// for (int i = 0; i < smr.Length; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_005c:
	{
		// for (int i = 0; i < smr.Length; i++)
		int32_t L_12 = V_0;
		SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B* L_13 = __this->___smr_10;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0045;
		}
	}
	{
		// if (photonView.IsMine) textHp.text = hp.ToString();
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_14;
		L_14 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648_inline(L_14, NULL);
		if (!L_15)
		{
			goto IL_008a;
		}
	}
	{
		// if (photonView.IsMine) textHp.text = hp.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_16 = __this->___textHp_12;
		float* L_17 = (&__this->___hp_5);
		String_t* L_18;
		L_18 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_17, NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_16, L_18);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void KID.DamageManager::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageManager_OnCollisionEnter_m08BC8180D3A76A78D35013934E02423641302DB1 (DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	{
		// if (!photonView.IsMine) return;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_0;
		L_0 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (!photonView.IsMine) return;
		return;
	}

IL_000e:
	{
		// if (collision.gameObject.name.Contains(nameBullet))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_2 = ___collision0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		String_t* L_5 = __this->___nameBullet_9;
		NullCheck(L_4);
		bool L_6;
		L_6 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// Damage(collision.contacts[0].point);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_7 = ___collision0;
		NullCheck(L_7);
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* L_8;
		L_8 = Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208(((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		DamageManager_Damage_m4E2C2EFB18835077AEA85F0B94377AA6CBCCD37F(__this, L_9, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void KID.DamageManager::OnCollisionStay(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageManager_OnCollisionStay_m90F3051009412D6E16335F495EB135CB2F6F1639 (DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void KID.DamageManager::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageManager_OnCollisionExit_mBDDA3E24A4F71E999E4F954EC3AAEED5083DF548 (DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void KID.DamageManager::Damage(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageManager_Damage_m4E2C2EFB18835077AEA85F0B94377AA6CBCCD37F (DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posHit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hp -= 20;
		float L_0 = __this->___hp_5;
		__this->___hp_5 = ((float)il2cpp_codegen_subtract(L_0, (20.0f)));
		// imgHp.fillAmount = hp / hpMax;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___imgHp_11;
		float L_2 = __this->___hp_5;
		float L_3 = __this->___hpMax_8;
		NullCheck(L_1);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_1, ((float)(L_2/L_3)), NULL);
		// hp = Mathf.Clamp(hp, 0, hpMax);
		float L_4 = __this->___hp_5;
		float L_5 = __this->___hpMax_8;
		float L_6;
		L_6 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_4, (0.0f), L_5, NULL);
		__this->___hp_5 = L_6;
		// textHp.text = hp.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___textHp_12;
		float* L_8 = (&__this->___hp_5);
		String_t* L_9;
		L_9 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_8, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_9);
		// PhotonNetwork.Instantiate(goVFXHit.name, posHit, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___goVFXHit_6;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___posHit0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = PhotonNetwork_Instantiate_mDB16644B4DD135B74F606887D511E6BAD46634C6(L_11, L_12, L_13, (uint8_t)0, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		// if (hp <= 0) photonView.RPC("Dead", RpcTarget.All);
		float L_15 = __this->___hp_5;
		if ((!(((float)L_15) <= ((float)(0.0f)))))
		{
			goto IL_0098;
		}
	}
	{
		// if (hp <= 0) photonView.RPC("Dead", RpcTarget.All);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_16;
		L_16 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17;
		L_17 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_16);
		PhotonView_RPC_mD406BD732C9B9AFD46C149F63514AB3A923EB5BB(L_16, _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, 0, L_17, NULL);
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void KID.DamageManager::Dead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageManager_Dead_m8472BC04147F0585EA4168F07DA2AE306F2BBA69 (DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Dissolve());
		RuntimeObject* L_0;
		L_0 = DamageManager_Dissolve_mA15E5C79BD8614E2ECB15D4FD4B803053BDBC1BC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator KID.DamageManager::Dissolve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DamageManager_Dissolve_mA15E5C79BD8614E2ECB15D4FD4B803053BDBC1BC (DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDissolveU3Ed__17_tA6A4DCF6A76ABA736835BC81F49E5AABB941FCF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDissolveU3Ed__17_tA6A4DCF6A76ABA736835BC81F49E5AABB941FCF0* L_0 = (U3CDissolveU3Ed__17_tA6A4DCF6A76ABA736835BC81F49E5AABB941FCF0*)il2cpp_codegen_object_new(U3CDissolveU3Ed__17_tA6A4DCF6A76ABA736835BC81F49E5AABB941FCF0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDissolveU3Ed__17__ctor_m6B99FA9B477D7A18758221A047B9A07C81804DFA(L_0, 0, NULL);
		U3CDissolveU3Ed__17_tA6A4DCF6A76ABA736835BC81F49E5AABB941FCF0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void KID.DamageManager::ReturnToLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageManager_ReturnToLobby_m093195A691A55B36E03C69E5A75B76E714AB1B02 (DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral429438F91CDC84FFEADE761A712F0504D1008237);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (photonView.IsMine)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_0;
		L_0 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// PhotonNetwork.LeaveRoom();              // ???}???
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PhotonNetwork_LeaveRoom_mDCAACF6F9544774184AD90123492CAC3F811DC0A((bool)1, NULL);
		// PhotonNetwork.LoadLevel("?C???j?U");     // ?^??j?U????
		PhotonNetwork_LoadLevel_m56CEF348D7FAB04D4707AB4F723B30B70FB26ABB(_stringLiteral429438F91CDC84FFEADE761A712F0504D1008237, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void KID.DamageManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageManager__ctor_m538F361DD865C2F9DD63DA5E56C3B5B8CC3B0FB0 (DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4252275A225D631641FBED384918DA548C9413F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float hp = 200;
		__this->___hp_5 = (200.0f);
		// private string nameBullet = "?l?u";
		__this->___nameBullet_9 = _stringLiteral4252275A225D631641FBED384918DA548C9413F2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nameBullet_9), (void*)_stringLiteral4252275A225D631641FBED384918DA548C9413F2);
		MonoBehaviourPun__ctor_m52771D9D46565807FDF72A7B6622574D38C29A55(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KID.DamageManager/<Dissolve>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDissolveU3Ed__17__ctor_m6B99FA9B477D7A18758221A047B9A07C81804DFA (U3CDissolveU3Ed__17_tA6A4DCF6A76ABA736835BC81F49E5AABB941FCF0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void KID.DamageManager/<Dissolve>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDissolveU3Ed__17_System_IDisposable_Dispose_m7FC64ED67B6AEC00E0F9EE58AE0908B9C2FFA699 (U3CDissolveU3Ed__17_tA6A4DCF6A76ABA736835BC81F49E5AABB941FCF0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean KID.DamageManager/<Dissolve>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDissolveU3Ed__17_MoveNext_m8BE18FEEDA53DFDAAC913B36135337ACBDACB9CD (U3CDissolveU3Ed__17_tA6A4DCF6A76ABA736835BC81F49E5AABB941FCF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE57122DB4C0B2E5D49139FB62F64EBAE0DA6500);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00b6;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// systemControl.enabled = false;
		DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* L_4 = V_1;
		NullCheck(L_4);
		SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5* L_5 = L_4->___systemControl_14;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		// systemAttack.enabled = false;
		DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* L_6 = V_1;
		NullCheck(L_6);
		SystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D* L_7 = L_6->___systemAttack_15;
		NullCheck(L_7);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)0, NULL);
		// if (systemControl.traDirectionIcon) systemControl.traDirectionIcon.gameObject.SetActive(false);
		DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* L_8 = V_1;
		NullCheck(L_8);
		SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5* L_9 = L_8->___systemControl_14;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = L_9->___traDirectionIcon_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_10, NULL);
		if (!L_11)
		{
			goto IL_0061;
		}
	}
	{
		// if (systemControl.traDirectionIcon) systemControl.traDirectionIcon.gameObject.SetActive(false);
		DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* L_12 = V_1;
		NullCheck(L_12);
		SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5* L_13 = L_12->___systemControl_14;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = L_13->___traDirectionIcon_18;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
	}

IL_0061:
	{
		// float valueDissolve = 5;                                        // ??????_?l??
		__this->___U3CvalueDissolveU3E5__2_3 = (5.0f);
		// for (int i = 0; i < 30; i++)                                    // ?j???????
		__this->___U3CiU3E5__3_4 = 0;
		goto IL_00cd;
	}

IL_0075:
	{
		// valueDissolve -= 0.3f;                                      // ???????? 0.3
		float L_16 = __this->___U3CvalueDissolveU3E5__2_3;
		__this->___U3CvalueDissolveU3E5__2_3 = ((float)il2cpp_codegen_subtract(L_16, (0.300000012f)));
		// materialDissolve.SetFloat("dissolve", valueDissolve);       // ??s??????A?`?N?n???? Reference
		DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* L_17 = V_1;
		NullCheck(L_17);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = L_17->___materialDissolve_13;
		float L_19 = __this->___U3CvalueDissolveU3E5__2_3;
		NullCheck(L_18);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_18, _stringLiteralCE57122DB4C0B2E5D49139FB62F64EBAE0DA6500, L_19, NULL);
		// yield return new WaitForSeconds(0.08f);                     // ????
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_20 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_20, (0.0799999982f), NULL);
		__this->___U3CU3E2__current_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_20);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00b6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < 30; i++)                                    // ?j???????
		int32_t L_21 = __this->___U3CiU3E5__3_4;
		V_2 = L_21;
		int32_t L_22 = V_2;
		__this->___U3CiU3E5__3_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_00cd:
	{
		// for (int i = 0; i < 30; i++)                                    // ?j???????
		int32_t L_23 = __this->___U3CiU3E5__3_4;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)30))))
		{
			goto IL_0075;
		}
	}
	{
		// ReturnToLobby();
		DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* L_24 = V_1;
		NullCheck(L_24);
		DamageManager_ReturnToLobby_m093195A691A55B36E03C69E5A75B76E714AB1B02(L_24, NULL);
		// }
		return (bool)0;
	}
}
// System.Object KID.DamageManager/<Dissolve>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDissolveU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4200F7D18524C236B1ABA34EA733C2E91D41EF7A (U3CDissolveU3Ed__17_tA6A4DCF6A76ABA736835BC81F49E5AABB941FCF0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void KID.DamageManager/<Dissolve>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDissolveU3Ed__17_System_Collections_IEnumerator_Reset_mF23D4801B67E224CA37F54B80268D29FC9B5E555 (U3CDissolveU3Ed__17_tA6A4DCF6A76ABA736835BC81F49E5AABB941FCF0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDissolveU3Ed__17_System_Collections_IEnumerator_Reset_mF23D4801B67E224CA37F54B80268D29FC9B5E555_RuntimeMethod_var)));
	}
}
// System.Object KID.DamageManager/<Dissolve>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDissolveU3Ed__17_System_Collections_IEnumerator_get_Current_m96156796D6C75DEE9D5B53D303D76EA74A65EC39 (U3CDissolveU3Ed__17_tA6A4DCF6A76ABA736835BC81F49E5AABB941FCF0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KID.DataManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_Start_m8728CD9318F6BFC73BFF1A739BB13B419B86B98B (DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_GetGASData_mAB67EA4FD604830C97C06E226CE717A7808868C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_SetGASData_m50166ECD5A8C3FAB9B9CDC72EB435BA563B57E1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m6CA031C91E5D203C24D3315721B6E3910B9C8729_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral208F346CBED06FFC63A94061C6967D1842B04D09);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D938ACFC6143B8CE3DE4BB4C34729E6EE2B2B2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD71CE46597EE79C26C6A1B3CEE866C471B92862);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textPlayerName = GameObject.Find("???a?W??").GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral6D938ACFC6143B8CE3DE4BB4C34729E6EE2B2B2D, NULL);
		NullCheck(L_0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_0, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->___textPlayerName_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textPlayerName_7), (void*)L_1);
		// btnGetData = GameObject.Find("???o???a?????s").GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral208F346CBED06FFC63A94061C6967D1842B04D09, NULL);
		NullCheck(L_2);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3;
		L_3 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_2, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		__this->___btnGetData_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___btnGetData_6), (void*)L_3);
		// btnGetData.onClick.AddListener(GetGASData);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___btnGetData_6;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_4, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_6, __this, (intptr_t)((void*)DataManager_GetGASData_mAB67EA4FD604830C97C06E226CE717A7808868C8_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_5, L_6, NULL);
		// inputField = GameObject.Find("??s???a?W??").GetComponent<TMP_InputField>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralFD71CE46597EE79C26C6A1B3CEE866C471B92862, NULL);
		NullCheck(L_7);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_8;
		L_8 = GameObject_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m6CA031C91E5D203C24D3315721B6E3910B9C8729(L_7, GameObject_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m6CA031C91E5D203C24D3315721B6E3910B9C8729_RuntimeMethod_var);
		__this->___inputField_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputField_8), (void*)L_8);
		// inputField.onEndEdit.AddListener(SetGASData);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_9 = __this->___inputField_8;
		NullCheck(L_9);
		SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* L_10;
		L_10 = TMP_InputField_get_onEndEdit_m0CE9718C71A834CC279430E20DC7FF4F42114FD3_inline(L_9, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_11 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_11, __this, (intptr_t)((void*)DataManager_SetGASData_m50166ECD5A8C3FAB9B9CDC72EB435BA563B57E1D_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_10, L_11, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void KID.DataManager::GetGASData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_GetGASData_mAB67EA4FD604830C97C06E226CE717A7808868C8 (DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EA805CAA1D5DA07DA80A5CE6032EB4899CAD7ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// form = new WWWForm();
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_0 = (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045*)il2cpp_codegen_object_new(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6(L_0, NULL);
		__this->___form_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___form_5), (void*)L_0);
		// form.AddField("method", "???o");
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_1 = __this->___form_5;
		NullCheck(L_1);
		WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_1, _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF, _stringLiteral4EA805CAA1D5DA07DA80A5CE6032EB4899CAD7ED, NULL);
		// StartCoroutine(StartGetGASData());
		RuntimeObject* L_2;
		L_2 = DataManager_StartGetGASData_m2251B27CF518093124C4945682FBDEE9428C28E9(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator KID.DataManager::StartGetGASData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataManager_StartGetGASData_m2251B27CF518093124C4945682FBDEE9428C28E9 (DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartGetGASDataU3Ed__7_t7BFEBEB62935222C1A10AF1ED67E56DB00ED3A7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartGetGASDataU3Ed__7_t7BFEBEB62935222C1A10AF1ED67E56DB00ED3A7B* L_0 = (U3CStartGetGASDataU3Ed__7_t7BFEBEB62935222C1A10AF1ED67E56DB00ED3A7B*)il2cpp_codegen_object_new(U3CStartGetGASDataU3Ed__7_t7BFEBEB62935222C1A10AF1ED67E56DB00ED3A7B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartGetGASDataU3Ed__7__ctor_mE3D7BD641829C11B9F8DD1E3482F17B84F6E5E36(L_0, 0, NULL);
		U3CStartGetGASDataU3Ed__7_t7BFEBEB62935222C1A10AF1ED67E56DB00ED3A7B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void KID.DataManager::SetGASData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_SetGASData_m50166ECD5A8C3FAB9B9CDC72EB435BA563B57E1D (DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42D0751E8C5BC97523F99027AC34BB0A8565365A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral616AAB5C815906B453473975760BDFCC9B81FF5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// form = new WWWForm();
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_0 = (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045*)il2cpp_codegen_object_new(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6(L_0, NULL);
		__this->___form_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___form_5), (void*)L_0);
		// form.AddField("method", "?]?w");
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_1 = __this->___form_5;
		NullCheck(L_1);
		WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_1, _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF, _stringLiteral42D0751E8C5BC97523F99027AC34BB0A8565365A, NULL);
		// form.AddField("playerName", inputField.text);
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_2 = __this->___form_5;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_3 = __this->___inputField_8;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_3, NULL);
		NullCheck(L_2);
		WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_2, _stringLiteral616AAB5C815906B453473975760BDFCC9B81FF5F, L_4, NULL);
		// StartCoroutine(StartSetGASData());
		RuntimeObject* L_5;
		L_5 = DataManager_StartSetGASData_m08BD987BFEC9626F71E9083924CB444EFC8869A7(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator KID.DataManager::StartSetGASData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataManager_StartSetGASData_m08BD987BFEC9626F71E9083924CB444EFC8869A7 (DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartSetGASDataU3Ed__9_tD11A595674AD69FA7F0E3274383E263F032F9986_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartSetGASDataU3Ed__9_tD11A595674AD69FA7F0E3274383E263F032F9986* L_0 = (U3CStartSetGASDataU3Ed__9_tD11A595674AD69FA7F0E3274383E263F032F9986*)il2cpp_codegen_object_new(U3CStartSetGASDataU3Ed__9_tD11A595674AD69FA7F0E3274383E263F032F9986_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartSetGASDataU3Ed__9__ctor_mCDFAB145AE008A486CD97E6AB5E54EF988E8D478(L_0, 0, NULL);
		U3CStartSetGASDataU3Ed__9_tD11A595674AD69FA7F0E3274383E263F032F9986* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void KID.DataManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager__ctor_m1D23F12E8776D1433DB73E209E659331E7FA0867 (DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785A86EB6D751A80451E9721EE6064DB7E70DDCB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string gasLink = "https://script.google.com/macros/s/AKfycbx0lXQTW9NwN7KEF8wzSkJRSD-wp2r_aJ3w9OTkdUB2RUpjbLvoQh29lQY4pM2EA6T1/exec";
		__this->___gasLink_4 = _stringLiteral785A86EB6D751A80451E9721EE6064DB7E70DDCB;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gasLink_4), (void*)_stringLiteral785A86EB6D751A80451E9721EE6064DB7E70DDCB);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KID.DataManager/<StartGetGASData>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGetGASDataU3Ed__7__ctor_mE3D7BD641829C11B9F8DD1E3482F17B84F6E5E36 (U3CStartGetGASDataU3Ed__7_t7BFEBEB62935222C1A10AF1ED67E56DB00ED3A7B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void KID.DataManager/<StartGetGASData>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGetGASDataU3Ed__7_System_IDisposable_Dispose_m2EC6D5DA3317C7290B1F891B50D978197B8A4E8E (U3CStartGetGASDataU3Ed__7_t7BFEBEB62935222C1A10AF1ED67E56DB00ED3A7B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CStartGetGASDataU3Ed__7_U3CU3Em__Finally1_m9AACA1B54862F675608BCB4DC3F1C11A52F5ECC2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean KID.DataManager/<StartGetGASData>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartGetGASDataU3Ed__7_MoveNext_m75E0899242533A5203DEF0A12F87BE573FF953C3 (U3CStartGetGASDataU3Ed__7_t7BFEBEB62935222C1A10AF1ED67E56DB00ED3A7B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* V_2 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_008f:
			{// begin fault (depth: 1)
				U3CStartGetGASDataU3Ed__7_System_IDisposable_Dispose_m2EC6D5DA3317C7290B1F891B50D978197B8A4E8E(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* L_1 = __this->___U3CU3E4__this_2;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_005b_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0096;
			}

IL_0019_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// using (UnityWebRequest www = UnityWebRequest.Post(gasLink, form))
				DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* L_4 = V_2;
				NullCheck(L_4);
				String_t* L_5 = L_4->___gasLink_4;
				DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* L_6 = V_2;
				NullCheck(L_6);
				WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_7 = L_6->___form_5;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8;
				L_8 = UnityWebRequest_Post_m1F6BF341F959AC95110C738791EF920713B74786(L_5, L_7, NULL);
				__this->___U3CwwwU3E5__2_3 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__2_3), (void*)L_8);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return www.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = __this->___U3CwwwU3E5__2_3;
				NullCheck(L_9);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_10;
				L_10 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_9, NULL);
				__this->___U3CU3E2__current_1 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0096;
			}

IL_005b_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// textPlayerName.text = www.downloadHandler.text;
				DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* L_11 = V_2;
				NullCheck(L_11);
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = L_11->___textPlayerName_7;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->___U3CwwwU3E5__2_3;
				NullCheck(L_13);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_14;
				L_14 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_13, NULL);
				NullCheck(L_14);
				String_t* L_15;
				L_15 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_14, NULL);
				NullCheck(L_12);
				VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
				// }
				U3CStartGetGASDataU3Ed__7_U3CU3Em__Finally1_m9AACA1B54862F675608BCB4DC3F1C11A52F5ECC2(__this, NULL);
				__this->___U3CwwwU3E5__2_3 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__2_3), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_0096;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0096:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Void KID.DataManager/<StartGetGASData>d__7::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGetGASDataU3Ed__7_U3CU3Em__Finally1_m9AACA1B54862F675608BCB4DC3F1C11A52F5ECC2 (U3CStartGetGASDataU3Ed__7_t7BFEBEB62935222C1A10AF1ED67E56DB00ED3A7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwwwU3E5__2_3;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CwwwU3E5__2_3;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object KID.DataManager/<StartGetGASData>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartGetGASDataU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m41487365EF6B3D72C4DA15412D8EDB08DCEE4253 (U3CStartGetGASDataU3Ed__7_t7BFEBEB62935222C1A10AF1ED67E56DB00ED3A7B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void KID.DataManager/<StartGetGASData>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGetGASDataU3Ed__7_System_Collections_IEnumerator_Reset_m4BA1DBFAC241392FBE7EF98B7C4F17BAE3560A09 (U3CStartGetGASDataU3Ed__7_t7BFEBEB62935222C1A10AF1ED67E56DB00ED3A7B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartGetGASDataU3Ed__7_System_Collections_IEnumerator_Reset_m4BA1DBFAC241392FBE7EF98B7C4F17BAE3560A09_RuntimeMethod_var)));
	}
}
// System.Object KID.DataManager/<StartGetGASData>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartGetGASDataU3Ed__7_System_Collections_IEnumerator_get_Current_m93663FE29D802A1CC6A9079C1E66171A59B9A70C (U3CStartGetGASDataU3Ed__7_t7BFEBEB62935222C1A10AF1ED67E56DB00ED3A7B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KID.DataManager/<StartSetGASData>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartSetGASDataU3Ed__9__ctor_mCDFAB145AE008A486CD97E6AB5E54EF988E8D478 (U3CStartSetGASDataU3Ed__9_tD11A595674AD69FA7F0E3274383E263F032F9986* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void KID.DataManager/<StartSetGASData>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartSetGASDataU3Ed__9_System_IDisposable_Dispose_m924F334A598C135BD58340AD038F0CA96AD7F4D8 (U3CStartSetGASDataU3Ed__9_tD11A595674AD69FA7F0E3274383E263F032F9986* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CStartSetGASDataU3Ed__9_U3CU3Em__Finally1_m1CE910369071606F872EC1552F303F7D51587DD6(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean KID.DataManager/<StartSetGASData>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartSetGASDataU3Ed__9_MoveNext_m64E9336007D88496C343C37F9D2C7C0645D8755A (U3CStartSetGASDataU3Ed__9_tD11A595674AD69FA7F0E3274383E263F032F9986* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* V_2 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00a2:
			{// begin fault (depth: 1)
				U3CStartSetGASDataU3Ed__9_System_IDisposable_Dispose_m924F334A598C135BD58340AD038F0CA96AD7F4D8(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* L_1 = __this->___U3CU3E4__this_2;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001c_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_005e_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00a9;
			}

IL_001c_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// using (UnityWebRequest www = UnityWebRequest.Post(gasLink, form))
				DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* L_4 = V_2;
				NullCheck(L_4);
				String_t* L_5 = L_4->___gasLink_4;
				DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* L_6 = V_2;
				NullCheck(L_6);
				WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_7 = L_6->___form_5;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8;
				L_8 = UnityWebRequest_Post_m1F6BF341F959AC95110C738791EF920713B74786(L_5, L_7, NULL);
				__this->___U3CwwwU3E5__2_3 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__2_3), (void*)L_8);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return www.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = __this->___U3CwwwU3E5__2_3;
				NullCheck(L_9);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_10;
				L_10 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_9, NULL);
				__this->___U3CU3E2__current_1 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00a9;
			}

IL_005e_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// textPlayerName.text = inputField.text;
				DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* L_11 = V_2;
				NullCheck(L_11);
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = L_11->___textPlayerName_7;
				DataManager_tACDB5914BDEAD9B9250EC847998F4EAC2CC59CAD* L_13 = V_2;
				NullCheck(L_13);
				TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_14 = L_13->___inputField_8;
				NullCheck(L_14);
				String_t* L_15;
				L_15 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_14, NULL);
				NullCheck(L_12);
				VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
				// print(www.downloadHandler.text);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_16 = __this->___U3CwwwU3E5__2_3;
				NullCheck(L_16);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_17;
				L_17 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_16, NULL);
				NullCheck(L_17);
				String_t* L_18;
				L_18 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_17, NULL);
				MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_18, NULL);
				// }
				U3CStartSetGASDataU3Ed__9_U3CU3Em__Finally1_m1CE910369071606F872EC1552F303F7D51587DD6(__this, NULL);
				__this->___U3CwwwU3E5__2_3 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__2_3), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_00a9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a9:
	{
		bool L_19 = V_0;
		return L_19;
	}
}
// System.Void KID.DataManager/<StartSetGASData>d__9::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartSetGASDataU3Ed__9_U3CU3Em__Finally1_m1CE910369071606F872EC1552F303F7D51587DD6 (U3CStartSetGASDataU3Ed__9_tD11A595674AD69FA7F0E3274383E263F032F9986* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwwwU3E5__2_3;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CwwwU3E5__2_3;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object KID.DataManager/<StartSetGASData>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartSetGASDataU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1FBE014A2C91AF6AA3769A36297B774F89DDDD28 (U3CStartSetGASDataU3Ed__9_tD11A595674AD69FA7F0E3274383E263F032F9986* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void KID.DataManager/<StartSetGASData>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartSetGASDataU3Ed__9_System_Collections_IEnumerator_Reset_m5E092C8EBB5C2646AC8A49CB02F15F16A96FE3DA (U3CStartSetGASDataU3Ed__9_tD11A595674AD69FA7F0E3274383E263F032F9986* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartSetGASDataU3Ed__9_System_Collections_IEnumerator_Reset_m5E092C8EBB5C2646AC8A49CB02F15F16A96FE3DA_RuntimeMethod_var)));
	}
}
// System.Object KID.DataManager/<StartSetGASData>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartSetGASDataU3Ed__9_System_Collections_IEnumerator_get_Current_m54E7F1799933896D67EBE4B6E1909EE6947D4F9A (U3CStartSetGASDataU3Ed__9_tD11A595674AD69FA7F0E3274383E263F032F9986* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KID.DestroySelf::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroySelf_Awake_mDA5D95747277BB3AEAACBA341927639464681F5E (DestroySelf_tA1D23D1E58EF5B23154178FCD64DE1F456EABE03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE0B15C357A2825F006228523C3B9DBE26192CF7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("DestroyDelay", timeDestroy);
		float L_0 = __this->___timeDestroy_5;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralBE0B15C357A2825F006228523C3B9DBE26192CF7, L_0, NULL);
		// }
		return;
	}
}
// System.Void KID.DestroySelf::DestroyDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroySelf_DestroyDelay_m7FD5C7EB844307EBDF5A40618B8743145C30520C (DestroySelf_tA1D23D1E58EF5B23154178FCD64DE1F456EABE03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		PhotonNetwork_Destroy_m60271BBE2EF6DF3C63689B01FF907E68EA14688A(L_0, NULL);
		// }
		return;
	}
}
// System.Void KID.DestroySelf::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroySelf_OnCollisionEnter_m0893D0B8A80F4F805F3C783D6EED580D8F7F539B (DestroySelf_tA1D23D1E58EF5B23154178FCD64DE1F456EABE03* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collisionDestroy)
		bool L_0 = __this->___collisionDestroy_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// PhotonNetwork.Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		PhotonNetwork_Destroy_m60271BBE2EF6DF3C63689B01FF907E68EA14688A(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void KID.DestroySelf::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroySelf__ctor_m04A63E367BCE20D4D43854CB66D53E6C0C9DBF03 (DestroySelf_tA1D23D1E58EF5B23154178FCD64DE1F456EABE03* __this, const RuntimeMethod* method) 
{
	{
		// private float timeDestroy = 5;
		__this->___timeDestroy_5 = (5.0f);
		MonoBehaviourPun__ctor_m52771D9D46565807FDF72A7B6622574D38C29A55(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KID.GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_mF9971059B523AC3382CDEF3858BD84E3DB7DFA62 (GameManager_t8EAA0FB362D2107B73A03A192A366F7E827EAC5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m536992E60E83B319EE1A63F673D65CDB7DA4B326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	{
		// PhotonNetwork.CurrentRoom.IsVisible = false;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_0;
		L_0 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		NullCheck(L_0);
		Room_set_IsVisible_m88B1F48E1CDB171A2ECB10D9289596FA45EC74D7(L_0, (bool)0, NULL);
		// traSpawnPointList = new List<Transform>();      // ?s?W ?M????
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_1 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_1, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___traSpawnPointList_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___traSpawnPointList_7), (void*)L_1);
		// traSpawnPointList = traSpawnPoint.ToList();     // ?}?C???M??????c
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = __this->___traSpawnPoint_6;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_3;
		L_3 = Enumerable_ToList_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m536992E60E83B319EE1A63F673D65CDB7DA4B326((RuntimeObject*)L_2, Enumerable_ToList_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m536992E60E83B319EE1A63F673D65CDB7DA4B326_RuntimeMethod_var);
		__this->___traSpawnPointList_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___traSpawnPointList_7), (void*)L_3);
		// int indexRandom = Random.Range(0, traSpawnPointList.Count);     // ???o?H???M??(0?A?M??????)
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_4 = __this->___traSpawnPointList_7;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_4, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		int32_t L_6;
		L_6 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_5, NULL);
		V_0 = L_6;
		// Transform tra = traSpawnPointList[indexRandom];                 // ???o?H???y??
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_7 = __this->___traSpawnPointList_7;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_7, L_8, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		V_1 = L_9;
		// PhotonNetwork.Instantiate(goCharacter.name, tra.position, tra.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___goCharacter_5;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_1;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_1;
		NullCheck(L_14);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_14, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = PhotonNetwork_Instantiate_mDB16644B4DD135B74F606887D511E6BAD46634C6(L_11, L_13, L_15, (uint8_t)0, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		// traSpawnPointList.RemoveAt(indexRandom);                        // ?R???w?g???o?L??????y????
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_17 = __this->___traSpawnPointList_7;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437(L_17, L_18, List_1_RemoveAt_m0303906D2E29080C32389BC92E3F60A437053437_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void KID.GameManager::OnPlayerLeftRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnPlayerLeftRoom_m830064DCD1B35CF6B560B2E7A5AC4AE211E5C55A (GameManager_t8EAA0FB362D2107B73A03A192A366F7E827EAC5F* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___otherPlayer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnPlayerLeftRoom(otherPlayer);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___otherPlayer0;
		MonoBehaviourPunCallbacks_OnPlayerLeftRoom_mD863D5DCFEB2C09DA8F4B222C9C0A7F345A03450(__this, L_0, NULL);
		// if (PhotonNetwork.CurrentRoom.PlayerCount == 1) Win();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_1;
		L_1 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		NullCheck(L_1);
		uint8_t L_2;
		L_2 = Room_get_PlayerCount_mB51FD867790C849B312565EA2052474828EA3F1A(L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}
	{
		// if (PhotonNetwork.CurrentRoom.PlayerCount == 1) Win();
		GameManager_Win_m2562F1F2F866FECCEE6B0A2A810DFF979E28D2DA(__this, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void KID.GameManager::Win()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Win_m2562F1F2F866FECCEE6B0A2A810DFF979E28D2DA (GameManager_t8EAA0FB362D2107B73A03A192A366F7E827EAC5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A5B15C27FE983DC69782B7A0D4D8E6CA383DF19);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("??Q");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteral3A5B15C27FE983DC69782B7A0D4D8E6CA383DF19, NULL);
		// }
		return;
	}
}
// System.Void KID.GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_m06393F13967B637AA24168B98D330F684432374C (GameManager_t8EAA0FB362D2107B73A03A192A366F7E827EAC5F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviourPunCallbacks__ctor_m25DE2B188CA2481D58FBA9BB58CFBD65432B77E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KID.IAPManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_Awake_mD0B1E92D59838F7BEF0171356B2BBE33FB273E6F (IAPManager_tFA110631DC797A96B6823AB71164EEBFE37BF3BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAPManager_PurchaseCompleteSkinRed_mFDDDE0D21A6012F7A421B12641FDF79D06ADF2DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAPManager_PurchaseFailedSkinRed_m557F0E1DAE4381A9CCF73500F7D8E05F09DF8D17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t883DB0050E6D028D160EC19EBB491300FABAC545_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t0B22D23CA1A25950B702D39FA05C0F818460A1D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m697EDB104210070011D224B214BBF7D14B3A550B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_AddListener_m94664954F20AA9FE96E17A3F0CB25C46AC036703_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iapBuySkinRed.onPurchaseComplete.AddListener(PurchaseCompleteSkinRed);
		IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* L_0 = __this->___iapBuySkinRed_4;
		NullCheck(L_0);
		OnPurchaseCompletedEvent_t18A57F5B4A0DEB7D32E384CC96C3FF22F93CC062* L_1 = L_0->___onPurchaseComplete_7;
		UnityAction_1_t883DB0050E6D028D160EC19EBB491300FABAC545* L_2 = (UnityAction_1_t883DB0050E6D028D160EC19EBB491300FABAC545*)il2cpp_codegen_object_new(UnityAction_1_t883DB0050E6D028D160EC19EBB491300FABAC545_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mEC892AB9205B3ABA1A41398D1FDCCAA97CC8EB4C(L_2, __this, (intptr_t)((void*)IAPManager_PurchaseCompleteSkinRed_mFDDDE0D21A6012F7A421B12641FDF79D06ADF2DB_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_m697EDB104210070011D224B214BBF7D14B3A550B(L_1, L_2, UnityEvent_1_AddListener_m697EDB104210070011D224B214BBF7D14B3A550B_RuntimeMethod_var);
		// iapBuySkinRed.onPurchaseFailed.AddListener(PurchaseFailedSkinRed);
		IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* L_3 = __this->___iapBuySkinRed_4;
		NullCheck(L_3);
		OnPurchaseFailedEvent_t0684C539D061372B1102E2EF9665451BB93462D4* L_4 = L_3->___onPurchaseFailed_8;
		UnityAction_2_t0B22D23CA1A25950B702D39FA05C0F818460A1D4* L_5 = (UnityAction_2_t0B22D23CA1A25950B702D39FA05C0F818460A1D4*)il2cpp_codegen_object_new(UnityAction_2_t0B22D23CA1A25950B702D39FA05C0F818460A1D4_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_2__ctor_m039EF8A33E5CACDEE09080CF27237C1DCC3578E1(L_5, __this, (intptr_t)((void*)IAPManager_PurchaseFailedSkinRed_m557F0E1DAE4381A9CCF73500F7D8E05F09DF8D17_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_2_AddListener_m94664954F20AA9FE96E17A3F0CB25C46AC036703(L_4, L_5, UnityEvent_2_AddListener_m94664954F20AA9FE96E17A3F0CB25C46AC036703_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void KID.IAPManager::PurchaseCompleteSkinRed(UnityEngine.Purchasing.Product)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_PurchaseCompleteSkinRed_mFDDDE0D21A6012F7A421B12641FDF79D06ADF2DB (IAPManager_tFA110631DC797A96B6823AB71164EEBFE37BF3BD* __this, Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* ___product0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64762895D0E96D1CC9F92B82BDB7FCAD509A3E17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E904A75A9D67C8CC9E7C542E4F5F9250ECF5AF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textIAPTip.text = "???????A??R???\?C";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___textIAPTip_5;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral64762895D0E96D1CC9F92B82BDB7FCAD509A3E17);
		// hasSkinRed = true;
		__this->___hasSkinRed_6 = (bool)1;
		// Invoke("HiddenIAPTip", 3);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral6E904A75A9D67C8CC9E7C542E4F5F9250ECF5AF8, (3.0f), NULL);
		// }
		return;
	}
}
// System.Void KID.IAPManager::PurchaseFailedSkinRed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_PurchaseFailedSkinRed_m557F0E1DAE4381A9CCF73500F7D8E05F09DF8D17 (IAPManager_tFA110631DC797A96B6823AB71164EEBFE37BF3BD* __this, Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* ___prodct0, int32_t ___reason1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchaseFailureReason_t9E7D53591FEB36F565C985D78568BE1D2489F276_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E904A75A9D67C8CC9E7C542E4F5F9250ECF5AF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7EC2CC8B2BCCFE99D62A88064B6986F79634000);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textIAPTip.text = "???????A??R????A??]?G" + reason;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___textIAPTip_5;
		Il2CppFakeBox<int32_t> L_1(PurchaseFailureReason_t9E7D53591FEB36F565C985D78568BE1D2489F276_il2cpp_TypeInfo_var, (&___reason1));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralF7EC2CC8B2BCCFE99D62A88064B6986F79634000, L_2, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// Invoke("HiddenIAPTip", 3);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral6E904A75A9D67C8CC9E7C542E4F5F9250ECF5AF8, (3.0f), NULL);
		// }
		return;
	}
}
// System.Void KID.IAPManager::HiddenIAPTip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager_HiddenIAPTip_m85A698F98143D01A15188B6ABEBFD18E641DA94A (IAPManager_tFA110631DC797A96B6823AB71164EEBFE37BF3BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textIAPTip.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___textIAPTip_5;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void KID.IAPManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPManager__ctor_mE40BB4B9A46AAD6761BEFA4A82F975451A891F55 (IAPManager_tFA110631DC797A96B6823AB71164EEBFE37BF3BD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KID.PlayerUIFollow::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerUIFollow_Awake_mADDC04CEB0AFCAB651D034D83621809A2CC01B2D (PlayerUIFollow_tC5A87D4CF1D9D5A2DA5F5D058A13A49F43C229D4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void KID.PlayerUIFollow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerUIFollow_Update_mFD85617829BDDB1178FA03A385849F46427F542D (PlayerUIFollow_tC5A87D4CF1D9D5A2DA5F5D058A13A49F43C229D4* __this, const RuntimeMethod* method) 
{
	{
		// Follow();
		PlayerUIFollow_Follow_m492C98C08930ACDBDA6093221D49E3760CCF8585(__this, NULL);
		// }
		return;
	}
}
// System.Void KID.PlayerUIFollow::Follow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerUIFollow_Follow_m492C98C08930ACDBDA6093221D49E3760CCF8585 (PlayerUIFollow_tC5A87D4CF1D9D5A2DA5F5D058A13A49F43C229D4* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = traPlayer.position + v3Offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___traPlayer_6;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___v3Offset_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_2, L_3, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void KID.PlayerUIFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerUIFollow__ctor_mDC6611F45ADFECBAEEA953F21C411459A282A2C3 (PlayerUIFollow_tC5A87D4CF1D9D5A2DA5F5D058A13A49F43C229D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42628EE9785D6F751A773C36F75CE00AE65765B0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string namePlayer = "??h";
		__this->___namePlayer_5 = _stringLiteral42628EE9785D6F751A773C36F75CE00AE65765B0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___namePlayer_5), (void*)_stringLiteral42628EE9785D6F751A773C36F75CE00AE65765B0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KID.SystemAttack::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemAttack_Awake_m6407EE9D41E4696BFCAB4550E8E5D753FA37689F (SystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemAttack_Fire_mDFBD4A4B44590AD9018C33F195BCF66063818E2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (photonView.IsMine)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_0;
		L_0 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// btnFire.onClick.AddListener(Fire);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___btnFire_5;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)SystemAttack_Fire_mDFBD4A4B44590AD9018C33F195BCF66063818E2F_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void KID.SystemAttack::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemAttack_Fire_mDFBD4A4B44590AD9018C33F195BCF66063818E2F (SystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject tempBullet = PhotonNetwork.Instantiate(goBullet.name, traFire.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___goBullet_6;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___traFire_8;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = PhotonNetwork_Instantiate_mDB16644B4DD135B74F606887D511E6BAD46634C6(L_1, L_3, L_4, (uint8_t)0, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		// tempBullet.GetComponent<Rigidbody>().AddForce(transform.forward * speedFire);
		NullCheck(L_5);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6;
		L_6 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_5, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_7, NULL);
		int32_t L_9 = __this->___speedFire_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_8, ((float)L_9), NULL);
		NullCheck(L_6);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_6, L_10, NULL);
		// }
		return;
	}
}
// System.Void KID.SystemAttack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemAttack__ctor_m7C33E4320834233A653E10C744AE567A575F1E08 (SystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D* __this, const RuntimeMethod* method) 
{
	{
		// private int bulletCountMax = 3;
		__this->___bulletCountMax_7 = 3;
		// private int speedFire = 500;
		__this->___speedFire_9 = ((int32_t)500);
		MonoBehaviourPun__ctor_m52771D9D46565807FDF72A7B6622574D38C29A55(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KID.SystemControl::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemControl_Awake_m2AFFCAD7E59CDA007710BA8D21006BFB63939AB2 (SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A_mC610CB424C67F160BC8EA7DA5E725FB8DFDD276A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisJoystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A_m0999AAD0E93516118520AC0831B56BAB595281D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D_m539867AF6C9C784743133077D3C6101F1133E9E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerUIFollow_tC5A87D4CF1D9D5A2DA5F5D058A13A49F43C229D4_mB9E4E2B0EB8F6A178E40FBF2FF1A74C15451E710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2472A4E84E68C033DFB129A3B5C74B8E327EE211);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral449C142076B28B752A4D108C6C80C9B148A27C7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C80641897C558C1F6E1A9224F6942376FBEB49D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB500A72EA2BE93B50003168CED59A25127D1F737);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB50FAF1A7F2FD7AB9794866C603F795D80A4DAA3);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// rig = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rig_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rig_12), (void*)L_0);
		// ani = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___ani_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ani_13), (void*)L_1);
		// systemAttack = GetComponent<SystemAttack>();
		SystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D* L_2;
		L_2 = Component_GetComponent_TisSystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D_m539867AF6C9C784743133077D3C6101F1133E9E5(__this, Component_GetComponent_TisSystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D_m539867AF6C9C784743133077D3C6101F1133E9E5_RuntimeMethod_var);
		__this->___systemAttack_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___systemAttack_16), (void*)L_2);
		// damageManager = GetComponent<DamageManager>();
		DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* L_3;
		L_3 = Component_GetComponent_TisDamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A_mC610CB424C67F160BC8EA7DA5E725FB8DFDD276A(__this, Component_GetComponent_TisDamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A_mC610CB424C67F160BC8EA7DA5E725FB8DFDD276A_RuntimeMethod_var);
		__this->___damageManager_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___damageManager_17), (void*)L_3);
		// if (photonView.IsMine)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_4;
		L_4 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0113;
		}
	}
	{
		// PlayerUIFollow follow = Instantiate(goCanvasPlayerInfo).GetComponent<PlayerUIFollow>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___goCanvasPlayerInfo_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		NullCheck(L_7);
		PlayerUIFollow_tC5A87D4CF1D9D5A2DA5F5D058A13A49F43C229D4* L_8;
		L_8 = GameObject_GetComponent_TisPlayerUIFollow_tC5A87D4CF1D9D5A2DA5F5D058A13A49F43C229D4_mB9E4E2B0EB8F6A178E40FBF2FF1A74C15451E710(L_7, GameObject_GetComponent_TisPlayerUIFollow_tC5A87D4CF1D9D5A2DA5F5D058A13A49F43C229D4_mB9E4E2B0EB8F6A178E40FBF2FF1A74C15451E710_RuntimeMethod_var);
		// follow.traPlayer = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		L_8->___traPlayer_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___traPlayer_6), (void*)L_9);
		// traDirectionIcon = Instantiate(goDirection).transform;                                              // ???o?????V???
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___goDirection_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		__this->___traDirectionIcon_18 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___traDirectionIcon_18), (void*)L_12);
		// GameObject tempCanvas = Instantiate(goCanvas);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___goCanvas_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_13, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		V_0 = L_14;
		// joystick = tempCanvas.transform.Find("Dynamic Joystick").GetComponent<Joystick>();       // ???o?e???????????n??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_0;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_16, _stringLiteral2472A4E84E68C033DFB129A3B5C74B8E327EE211, NULL);
		NullCheck(L_17);
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_18;
		L_18 = Component_GetComponent_TisJoystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A_m0999AAD0E93516118520AC0831B56BAB595281D6(L_17, Component_GetComponent_TisJoystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A_m0999AAD0E93516118520AC0831B56BAB595281D6_RuntimeMethod_var);
		__this->___joystick_14 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___joystick_14), (void*)L_18);
		// systemAttack.btnFire = tempCanvas.transform.Find("?o?g").GetComponent<Button>();
		SystemAttack_t31036A3CA0FF9D775A884642D6D3E32ABF25687D* L_19 = __this->___systemAttack_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_0;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_21, _stringLiteral7C80641897C558C1F6E1A9224F6942376FBEB49D, NULL);
		NullCheck(L_22);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_23;
		L_23 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_22, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_19);
		L_19->___btnFire_5 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___btnFire_5), (void*)L_23);
		// cvc = GameObject.Find("CM ??z??").GetComponent<CinemachineVirtualCamera>();                         // ???o??v?? CM ??z??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralB500A72EA2BE93B50003168CED59A25127D1F737, NULL);
		NullCheck(L_24);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_25;
		L_25 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_24, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		__this->___cvc_15 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cvc_15), (void*)L_25);
		// cvc.Follow = transform;                                                                             // ???w?l?????
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_26 = __this->___cvc_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_26);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(30 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_Follow(UnityEngine.Transform) */, L_26, L_27);
		// damageManager.imgHp = GameObject.Find("?????q").GetComponent<Image>();
		DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* L_28 = __this->___damageManager_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralB50FAF1A7F2FD7AB9794866C603F795D80A4DAA3, NULL);
		NullCheck(L_29);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_30;
		L_30 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_29, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		NullCheck(L_28);
		L_28->___imgHp_11 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->___imgHp_11), (void*)L_30);
		// damageManager.textHp = GameObject.Find("??r??q").GetComponent<TextMeshProUGUI>();
		DamageManager_t33EB1D846F58AE0F3FEC5A8A7F7F273CADC1FF0A* L_31 = __this->___damageManager_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral449C142076B28B752A4D108C6C80C9B148A27C7B, NULL);
		NullCheck(L_32);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_33;
		L_33 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_32, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		NullCheck(L_31);
		L_31->___textHp_12 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___textHp_12), (void*)L_33);
		return;
	}

IL_0113:
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void KID.SystemControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemControl_Update_mEB4F41E53EB901F6F8FCD2EFDB9E340640B1A294 (SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5* __this, const RuntimeMethod* method) 
{
	{
		// UpdateDirectionIconPos();
		SystemControl_UpdateDirectionIconPos_m87D712F6349B5C157AD268BF4747733E2FAE757B(__this, NULL);
		// LookDirectionIcon();
		SystemControl_LookDirectionIcon_mB280A297C83E948CFA4976EC2F65066419842209(__this, NULL);
		// UpdateAnimation();
		SystemControl_UpdateAnimation_mDC75635F7F577EDF8F1A8E3F8193F7116DCF697C(__this, NULL);
		// }
		return;
	}
}
// System.Void KID.SystemControl::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemControl_FixedUpdate_mE39371688D7A8CF86754D574225815E694CAD9FA (SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5* __this, const RuntimeMethod* method) 
{
	{
		// Move();
		SystemControl_Move_mF6AB70F16BABF35E9FDD3A44E49E56C216F0075A(__this, NULL);
		// }
		return;
	}
}
// System.Void KID.SystemControl::GetJoystickValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemControl_GetJoystickValue_mF63830147D76277B64A178C45FF44E9D3E6795C7 (SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE431F3EB006A8ABBEFB40252D152CCC0CCD14FF);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// print("<color=yellow>?????G" + joystick.Horizontal + "</color>");
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_0 = __this->___joystick_14;
		NullCheck(L_0);
		float L_1;
		L_1 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_0, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralCE431F3EB006A8ABBEFB40252D152CCC0CCD14FF, L_2, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_3, NULL);
		// }
		return;
	}
}
// System.Void KID.SystemControl::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemControl_Move_mF6AB70F16BABF35E9FDD3A44E49E56C216F0075A (SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5* __this, const RuntimeMethod* method) 
{
	{
		// rig.velocity = new Vector3(-joystick.Horizontal, 0, -joystick.Vertical) * speed;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rig_12;
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_1 = __this->___joystick_14;
		NullCheck(L_1);
		float L_2;
		L_2 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_1, NULL);
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_3 = __this->___joystick_14;
		NullCheck(L_3);
		float L_4;
		L_4 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), ((-L_2)), (0.0f), ((-L_4)), /*hidden argument*/NULL);
		float L_6 = __this->___speed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_5, L_6, NULL);
		NullCheck(L_0);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_0, L_7, NULL);
		// }
		return;
	}
}
// System.Void KID.SystemControl::UpdateDirectionIconPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemControl_UpdateDirectionIconPos_m87D712F6349B5C157AD268BF4747733E2FAE757B (SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 pos = transform.position + new Vector3(-joystick.Horizontal, 0.5f, -joystick.Vertical) * rangeDirectionIcon;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_2 = __this->___joystick_14;
		NullCheck(L_2);
		float L_3;
		L_3 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_2, NULL);
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_4 = __this->___joystick_14;
		NullCheck(L_4);
		float L_5;
		L_5 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_3)), (0.5f), ((-L_5)), /*hidden argument*/NULL);
		float L_7 = __this->___rangeDirectionIcon_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_1, L_8, NULL);
		V_0 = L_9;
		// traDirectionIcon.position = pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___traDirectionIcon_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void KID.SystemControl::LookDirectionIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemControl_LookDirectionIcon_mB280A297C83E948CFA4976EC2F65066419842209 (SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Mathf.Abs(joystick.Vertical) < 0.1f && Mathf.Abs(joystick.Horizontal) < 0.1f) return;
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_0 = __this->___joystick_14;
		NullCheck(L_0);
		float L_1;
		L_1 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(L_0, NULL);
		float L_2;
		L_2 = fabsf(L_1);
		if ((!(((float)L_2) < ((float)(0.100000001f)))))
		{
			goto IL_002f;
		}
	}
	{
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_3 = __this->___joystick_14;
		NullCheck(L_3);
		float L_4;
		L_4 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_3, NULL);
		float L_5;
		L_5 = fabsf(L_4);
		if ((!(((float)L_5) < ((float)(0.100000001f)))))
		{
			goto IL_002f;
		}
	}
	{
		// if (Mathf.Abs(joystick.Vertical) < 0.1f && Mathf.Abs(joystick.Horizontal) < 0.1f) return;
		return;
	}

IL_002f:
	{
		// Quaternion look = Quaternion.LookRotation(traDirectionIcon.position - transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___traDirectionIcon_18;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_7, L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_10, NULL);
		V_0 = L_11;
		// transform.rotation = Quaternion.Lerp(transform.rotation, look, speedTurn * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = V_0;
		float L_16 = __this->___speedTurn_7;
		float L_17;
		L_17 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792(L_14, L_15, ((float)il2cpp_codegen_multiply(L_16, L_17)), NULL);
		NullCheck(L_12);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_18, NULL);
		// transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_20, NULL);
		float L_22 = L_21.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), (0.0f), L_22, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_19, L_23, NULL);
		// }
		return;
	}
}
// System.Void KID.SystemControl::UpdateAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemControl_UpdateAnimation_mDC75635F7F577EDF8F1A8E3F8193F7116DCF697C (SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// bool run = joystick.Horizontal != 0 || joystick.Vertical != 0;
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_0 = __this->___joystick_14;
		NullCheck(L_0);
		float L_1;
		L_1 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_0, NULL);
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_2 = __this->___joystick_14;
		NullCheck(L_2);
		float L_3;
		L_3 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(L_2, NULL);
		G_B3_0 = ((((int32_t)((((float)L_3) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 1;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		// ani.SetBool(parameterWalk, run);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___ani_13;
		String_t* L_5 = __this->___parameterWalk_8;
		bool L_6 = V_0;
		NullCheck(L_4);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void KID.SystemControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemControl__ctor_mF2DAD4578A8E5724EAA539077CE6FA2AB8CB002A (SystemControl_t480C892AD1A110BDA0D9368050E8DA1323757AA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral471DE307F0A493F6FDE4F1A2C69F37FB76E31F80);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float speed = 3.5f;
		__this->___speed_5 = (3.5f);
		// private float rangeDirectionIcon = 2.5f;
		__this->___rangeDirectionIcon_6 = (2.5f);
		// private float speedTurn = 1.5f;
		__this->___speedTurn_7 = (1.5f);
		// private string parameterWalk = "?}???]?B";
		__this->___parameterWalk_8 = _stringLiteral471DE307F0A493F6FDE4F1A2C69F37FB76E31F80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameterWalk_8), (void*)_stringLiteral471DE307F0A493F6FDE4F1A2C69F37FB76E31F80);
		MonoBehaviourPun__ctor_m52771D9D46565807FDF72A7B6622574D38C29A55(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_Start_m654498A211F20CBE3A2648EF7A5D1ABC5F406BA2 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_m35DDE72490FF0112059E3A8C5F21DD893E2026C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A40D860326E4F58DF247BAAC9F338720FCF0B75);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.lbc = new LoadBalancingClient();
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4*)il2cpp_codegen_object_new(LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LoadBalancingClient__ctor_mC3FD7885A9F9E80E8949ACDE2590016410F1186C(L_0, 0, NULL);
		__this->___lbc_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lbc_5), (void*)L_0);
		// this.lbc.AddCallbackTarget(this);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_1 = __this->___lbc_5;
		NullCheck(L_1);
		LoadBalancingClient_AddCallbackTarget_mF98AF4F5A8EF6794C9038C50C619B03EC7FB22B8(L_1, __this, NULL);
		// if (!this.lbc.ConnectUsingSettings(appSettings))
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_2 = __this->___lbc_5;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_3 = __this->___appSettings_4;
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* >::Invoke(8 /* System.Boolean Photon.Realtime.LoadBalancingClient::ConnectUsingSettings(Photon.Realtime.AppSettings) */, L_2, L_3);
		if (L_4)
		{
			goto IL_0035;
		}
	}
	{
		// Debug.LogError("Error while connecting");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral4A40D860326E4F58DF247BAAC9F338720FCF0B75, NULL);
	}

IL_0035:
	{
		// this.ch = this.gameObject.GetComponent<ConnectionHandler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* L_6;
		L_6 = GameObject_GetComponent_TisConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_m35DDE72490FF0112059E3A8C5F21DD893E2026C1(L_5, GameObject_GetComponent_TisConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_m35DDE72490FF0112059E3A8C5F21DD893E2026C1_RuntimeMethod_var);
		__this->___ch_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ch_6), (void*)L_6);
		// if (this.ch != null)
		ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* L_7 = __this->___ch_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0070;
		}
	}
	{
		// this.ch.Client = this.lbc;
		ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* L_9 = __this->___ch_6;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_10 = __this->___lbc_5;
		NullCheck(L_9);
		ConnectionHandler_set_Client_m3ABCA8BEB50CC58254153280CE8F60154D42E29B_inline(L_9, L_10, NULL);
		// this.ch.StartFallbackSendAckThread();
		ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* L_11 = __this->___ch_6;
		NullCheck(L_11);
		ConnectionHandler_StartFallbackSendAckThread_mBA4B3FC1BABFBB2085F1D30D176B50D54F33AA69(L_11, NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_Update_m413825AB30ACB547809CE218087D281E8A2B2458 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F);
		s_Il2CppMethodInitialized = true;
	}
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* V_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// LoadBalancingClient client = this.lbc;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___lbc_5;
		V_0 = L_0;
		// if (client != null)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		// client.Service();
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_2 = V_0;
		NullCheck(L_2);
		LoadBalancingClient_Service_m0208D4872E63ABA1E7367E1D8FB89421E3050920(L_2, NULL);
		// Text uiText = this.StateUiText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___StateUiText_7;
		V_1 = L_3;
		// string state = client.State.ToString();
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = LoadBalancingClient_get_State_m8553D8C2483058BD64DDED8EC2648AE77836D12C_inline(L_4, NULL);
		V_3 = L_5;
		Il2CppFakeBox<int32_t> L_6(ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		V_2 = L_7;
		// if (uiText != null && !uiText.text.Equals(state))
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_10);
		String_t* L_12 = V_2;
		NullCheck(L_11);
		bool L_13;
		L_13 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_11, L_12, NULL);
		if (L_13)
		{
			goto IL_0054;
		}
	}
	{
		// uiText.text = "State: " + state;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = V_1;
		String_t* L_15 = V_2;
		String_t* L_16;
		L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F, L_15, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_16);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnConnected_m5AB09D698A05D7E0ABB90DC58B96103F4740CC85 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnConnectedToMaster_m91F5B4362E77D792C0F1C46C026BDAEEB5D764E3 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1BA34E8407E1622C279AB6F6CAF3C807280392E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnConnectedToMaster");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralE1BA34E8407E1622C279AB6F6CAF3C807280392E, NULL);
		// this.lbc.OpJoinRandomRoom();    // joins any open room (no filter)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___lbc_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = LoadBalancingClient_OpJoinRandomRoom_mCB018C45C5BAC6CB7F10FA13BA9EBAC3BD0F45A1(L_0, (OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnDisconnected(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnDisconnected_mDEE84E1C10157C22B0CD977AABF8BAF6E733F9FE (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, int32_t ___cause0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F45C1C537BBADB2FE21CC7BB49C59898B204E6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnDisconnected(" + cause + ")");
		Il2CppFakeBox<int32_t> L_0(DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var, (&___cause0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral0F45C1C537BBADB2FE21CC7BB49C59898B204E6E, L_1, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnCustomAuthenticationResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnCustomAuthenticationResponse_m0BC941D88E747C9A75C48164A1304C2BDE803070 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___data0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnCustomAuthenticationFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnCustomAuthenticationFailed_m58F68BCC12C87C37A0E3C99BBD7EBB2911E43A12 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, String_t* ___debugMessage0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnRegionListReceived(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnRegionListReceived_m725991BEFC0A7579B3F1107BB5DE2C738767D1BC (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___regionHandler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectAndJoinRandomLb_OnRegionPingCompleted_mCD5E698C6C0900FF3ACDD4AA4FFC644BC4137CE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CB7873CC9B86C1D67BF2A619181392B42B2481F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRegionListReceived");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral8CB7873CC9B86C1D67BF2A619181392B42B2481F, NULL);
		// regionHandler.PingMinimumOfRegions(this.OnRegionPingCompleted, null);
		RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* L_0 = ___regionHandler0;
		Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* L_1 = (Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74*)il2cpp_codegen_object_new(Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m215F7D57B46C05B7411E4B5B4C7DDB91EEA86681(L_1, __this, (intptr_t)((void*)ConnectAndJoinRandomLb_OnRegionPingCompleted_mCD5E698C6C0900FF3ACDD4AA4FFC644BC4137CE5_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = RegionHandler_PingMinimumOfRegions_mBDA481EF544E14116455B0352A160D07B6AF5762(L_0, L_1, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnRoomListUpdate(System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnRoomListUpdate_m4EF178F5B7FF803A1C05DDFB5E5DBDF9CE53B573 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* ___roomList0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnLobbyStatisticsUpdate(System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnLobbyStatisticsUpdate_m6A4DB87496CDE19E4C0D56FADA2178268B2F41DD (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15* ___lobbyStatistics0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnJoinedLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnJoinedLobby_mD5A48030FB4BADCC16784286C72F1820734D590B (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnLeftLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnLeftLobby_mD0FA0520CA3A6CF43772ED5C8DA88DC3643A6CAF (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnFriendListUpdate(System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnFriendListUpdate_mA1DD1E3098C1BB9AF2026998B56665D484F19B02 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F* ___friendList0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnCreatedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnCreatedRoom_m0BB38C14FA1ED134F03D4ED2E47B2CCC1D97B1F1 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnCreateRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnCreateRoomFailed_m3F6D9E69A2C31504ABD34BBDB2CD06EA255C4F4D (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnJoinedRoom_m5A6191E901FAD558767047BA3DB157E4D1AD1339 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D6A39CF1E3A2BB7700481DB871D78DDB02A911D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnJoinedRoom");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral5D6A39CF1E3A2BB7700481DB871D78DDB02A911D, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnJoinRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnJoinRoomFailed_mD484E74E080D160F2DD6446DD7DC96FB41587368 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnJoinRandomFailed_mA55EF2ED2497381C3A9564D37F6292C6A92CCA81 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3293A8518D7DEE9D1DE57B7241DE59F641197895);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnJoinRandomFailed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral3293A8518D7DEE9D1DE57B7241DE59F641197895, NULL);
		// this.lbc.OpCreateRoom(new EnterRoomParams());
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___lbc_5;
		EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* L_1 = (EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9*)il2cpp_codegen_object_new(EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EnterRoomParams__ctor_m59BB4C9762321F59D7238996F68C7EB970ACDBB8(L_1, NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = LoadBalancingClient_OpCreateRoom_mD4FC6543597FB872E8EE027EE49E723D83437310(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnLeftRoom_m94779C8B1AFF8C090388E85CBBE2515C5F8D174E (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnRegionPingCompleted(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnRegionPingCompleted_mCD5E698C6C0900FF3ACDD4AA4FFC644BC4137CE5 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___regionHandler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C8EA4ECB883AD669394FC7A5E304891A38ADED4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE4EEAA3C538A66727E1F57EEFC277047842C14C);
		s_Il2CppMethodInitialized = true;
	}
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// Debug.Log("OnRegionPingCompleted " + regionHandler.BestRegion);
		RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* L_0 = ___regionHandler0;
		NullCheck(L_0);
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_1;
		L_1 = RegionHandler_get_BestRegion_mC9390E2B9A76B5F6A391F5D432D6CFD35F991D94(L_0, NULL);
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteralBE4EEAA3C538A66727E1F57EEFC277047842C14C;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteralBE4EEAA3C538A66727E1F57EEFC277047842C14C;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0017;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
	}

IL_0017:
	{
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B3_1, G_B3_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_4, NULL);
		// Debug.Log("RegionPingSummary: " + regionHandler.SummaryToCache);
		RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* L_5 = ___regionHandler0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = RegionHandler_get_SummaryToCache_m313FB26DCB72FB6D25EC366E51AF4118F8CD3722(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral6C8EA4ECB883AD669394FC7A5E304891A38ADED4, L_6, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_7, NULL);
		// this.lbc.ConnectToRegionMaster(regionHandler.BestRegion.Code);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_8 = __this->___lbc_5;
		RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* L_9 = ___regionHandler0;
		NullCheck(L_9);
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_10;
		L_10 = RegionHandler_get_BestRegion_mC9390E2B9A76B5F6A391F5D432D6CFD35F991D94(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122_inline(L_10, NULL);
		NullCheck(L_8);
		bool L_12;
		L_12 = LoadBalancingClient_ConnectToRegionMaster_m170672C2A5C0B12DB89090B0EE8ECF6028FA365B(L_8, L_11, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb__ctor_m49A174D0CB130D2679BC62AF8E77709B2B705F40 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private AppSettings appSettings = new AppSettings();
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_0 = (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7*)il2cpp_codegen_object_new(AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AppSettings__ctor_m0E9EF98D6C1FB02C989504407836FDA2B019AA43(L_0, NULL);
		__this->___appSettings_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appSettings_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Photon.Chat.ChatAppSettings Photon.Chat.Demo.AppSettingsExtensions::GetChatSettings(Photon.Realtime.AppSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* AppSettingsExtensions_GetChatSettings_m4875DA708BDB9B116A8CBA7A24709B33933D3EB2 (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___appSettings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B2_0 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B2_1 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B1_0 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B3_1 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B3_2 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B5_0 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B5_1 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B4_0 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B6_1 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B6_2 = NULL;
	{
		// return new ChatAppSettings
		//        {
		//            AppIdChat = appSettings.AppIdChat,
		//            AppVersion = appSettings.AppVersion,
		//            FixedRegion = appSettings.IsBestRegion ? null : appSettings.FixedRegion,
		//            NetworkLogging = appSettings.NetworkLogging,
		//            Protocol = appSettings.Protocol,
		//            EnableProtocolFallback = appSettings.EnableProtocolFallback,
		//            Server = appSettings.IsDefaultNameServer ? null : appSettings.Server,
		//            Port = (ushort)appSettings.Port
		//        };
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_0 = (ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689*)il2cpp_codegen_object_new(ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ChatAppSettings__ctor_m0B6F25C335A13983DA701EBD9CFADAC43E6011A3(L_0, NULL);
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_1 = L_0;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_2 = ___appSettings0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___AppIdChat_2;
		NullCheck(L_1);
		L_1->___AppIdChat_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___AppIdChat_0), (void*)L_3);
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_4 = L_1;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_5 = ___appSettings0;
		NullCheck(L_5);
		String_t* L_6 = L_5->___AppVersion_4;
		NullCheck(L_4);
		L_4->___AppVersion_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___AppVersion_1), (void*)L_6);
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_7 = L_4;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_8 = ___appSettings0;
		NullCheck(L_8);
		bool L_9;
		L_9 = AppSettings_get_IsBestRegion_m29A45FCEDFBC20C7C6E9CFA732A4E4FC2D1BBFED(L_8, NULL);
		G_B1_0 = L_7;
		G_B1_1 = L_7;
		if (L_9)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_7;
			goto IL_002e;
		}
	}
	{
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_10 = ___appSettings0;
		NullCheck(L_10);
		String_t* L_11 = L_10->___FixedRegion_6;
		G_B3_0 = L_11;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_002f;
	}

IL_002e:
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___FixedRegion_2 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___FixedRegion_2), (void*)G_B3_0);
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_12 = G_B3_2;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_13 = ___appSettings0;
		NullCheck(L_13);
		uint8_t L_14 = L_13->___NetworkLogging_15;
		NullCheck(L_12);
		L_12->___NetworkLogging_7 = L_14;
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_15 = L_12;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_16 = ___appSettings0;
		NullCheck(L_16);
		uint8_t L_17 = L_16->___Protocol_11;
		NullCheck(L_15);
		L_15->___Protocol_5 = L_17;
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_18 = L_15;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_19 = ___appSettings0;
		NullCheck(L_19);
		bool L_20 = L_19->___EnableProtocolFallback_12;
		NullCheck(L_18);
		L_18->___EnableProtocolFallback_6 = L_20;
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_21 = L_18;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_22 = ___appSettings0;
		NullCheck(L_22);
		bool L_23;
		L_23 = AppSettings_get_IsDefaultNameServer_m25CC5D537E41C3678015FEECF221843B9CAEBD29(L_22, NULL);
		G_B4_0 = L_21;
		G_B4_1 = L_21;
		if (L_23)
		{
			G_B5_0 = L_21;
			G_B5_1 = L_21;
			goto IL_0069;
		}
	}
	{
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_24 = ___appSettings0;
		NullCheck(L_24);
		String_t* L_25 = L_24->___Server_8;
		G_B6_0 = L_25;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_006a;
	}

IL_0069:
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_006a:
	{
		NullCheck(G_B6_1);
		G_B6_1->___Server_3 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___Server_3), (void*)G_B6_0);
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_26 = G_B6_2;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_27 = ___appSettings0;
		NullCheck(L_27);
		int32_t L_28 = L_27->___Port_9;
		NullCheck(L_26);
		L_26->___Port_4 = (uint16_t)((int32_t)(uint16_t)L_28);
		return L_26;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.Demo.ChannelSelector::SetChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelSelector_SetChannel_m7E493B7588E65D501C7DA99C72BF36DAA565250E (ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* __this, String_t* ___channel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Channel = channel;
		String_t* L_0 = ___channel0;
		__this->___Channel_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Channel_4), (void*)L_0);
		// Text t = this.GetComponentInChildren<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(__this, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		// t.text = this.Channel;
		String_t* L_2 = __this->___Channel_4;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChannelSelector::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelSelector_OnPointerClick_mB3AE27915FCF9DE3F697BE3F6C93E9F408E4C3B6 (ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_m8674F5DCCB9AB970A69F1E68C2EC297A51FEE54A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChatGui handler = FindObjectOfType<ChatGui>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_0;
		L_0 = Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_m8674F5DCCB9AB970A69F1E68C2EC297A51FEE54A(Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_m8674F5DCCB9AB970A69F1E68C2EC297A51FEE54A_RuntimeMethod_var);
		// handler.ShowChannel(this.Channel);
		String_t* L_1 = __this->___Channel_4;
		NullCheck(L_0);
		ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChannelSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelSelector__ctor_m894F2E006A64350EDE2E7BA55B4C3D35F5148071 (ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.Demo.ChatAppIdCheckerUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatAppIdCheckerUI_Update_m4776B819CB357298B16E757F4A128977AB204D5F (ChatAppIdCheckerUI_t43522738EEA1186C60A64B652B157BC5FA4FC22D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF8AEDAF918CF6EF3D306EB2FB9FA00A4D0FA453);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(PhotonNetwork.PhotonServerSettings.AppSettings.AppIdChat))
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152* L_0;
		L_0 = PhotonNetwork_get_PhotonServerSettings_m1B8E2B261E15DB33DECC60F93693C52504A8E9C9(NULL);
		NullCheck(L_0);
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_1 = L_0->___AppSettings_4;
		NullCheck(L_1);
		String_t* L_2 = L_1->___AppIdChat_2;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// if (this.Description != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___Description_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		// this.Description.text = "<Color=Red>WARNING:</Color>\nPlease setup a Chat AppId in the PhotonServerSettings file.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___Description_4;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteralFF8AEDAF918CF6EF3D306EB2FB9FA00A4D0FA453);
		return;
	}

IL_0035:
	{
		// if (this.Description != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___Description_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		// this.Description.text = string.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___Description_4;
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_10);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatAppIdCheckerUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatAppIdCheckerUI__ctor_m63844AD1E8604F63D26595AD357A104B8ECE50FA (ChatAppIdCheckerUI_t43522738EEA1186C60A64B652B157BC5FA4FC22D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Photon.Chat.Demo.ChatGui::get_UserName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	{
		// public string UserName { get; set; }
		String_t* L_0 = __this->___U3CUserNameU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::set_UserName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_set_UserName_m2DEE5CF82BC6DBB2FA568AF956102BE0E125D0A7 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string UserName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CUserNameU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserNameU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_Start_m1BB89F3BC7EE841EDD681423C6077B22AC71DEBC (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral361D3EBAF9E2C29F13DB3B6509697AA973E37A36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3992DF679A3EF8B96232992FF89A2B1F1DB5534);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_0, NULL);
		// this.UserIdText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___UserIdText_24;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// this.StateText.text  = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___StateText_23;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// this.StateText.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___StateText_23;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// this.UserIdText.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___UserIdText_24;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// this.Title.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___Title_22;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// this.ChatPanel.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___ChatPanel_13;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// this.ConnectingLabel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___ConnectingLabel_12;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// if (string.IsNullOrEmpty(this.UserName))
		String_t* L_11;
		L_11 = ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline(__this, NULL);
		bool L_12;
		L_12 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_11, NULL);
		if (!L_12)
		{
			goto IL_00a3;
		}
	}
	{
		// this.UserName = "user" + Environment.TickCount%99; //made-up username
		int32_t L_13;
		L_13 = Environment_get_TickCount_m3499A4943E060ECB90E790A097D9691448AD1276(NULL);
		V_1 = ((int32_t)(L_13%((int32_t)99)));
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_15;
		L_15 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralD3992DF679A3EF8B96232992FF89A2B1F1DB5534, L_14, NULL);
		ChatGui_set_UserName_m2DEE5CF82BC6DBB2FA568AF956102BE0E125D0A7_inline(__this, L_15, NULL);
	}

IL_00a3:
	{
		// this.chatAppSettings = PhotonNetwork.PhotonServerSettings.AppSettings.GetChatSettings();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152* L_16;
		L_16 = PhotonNetwork_get_PhotonServerSettings_m1B8E2B261E15DB33DECC60F93693C52504A8E9C9(NULL);
		NullCheck(L_16);
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_17 = L_16->___AppSettings_4;
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_18;
		L_18 = AppSettingsExtensions_GetChatSettings_m4875DA708BDB9B116A8CBA7A24709B33933D3EB2(L_17, NULL);
		__this->___chatAppSettings_10 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chatAppSettings_10), (void*)L_18);
		// bool appIdPresent = !string.IsNullOrEmpty(this.chatAppSettings.AppIdChat);
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_19 = __this->___chatAppSettings_10;
		NullCheck(L_19);
		String_t* L_20 = L_19->___AppIdChat_0;
		bool L_21;
		L_21 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_20, NULL);
		V_0 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		// this.missingAppIdErrorPanel.SetActive(!appIdPresent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___missingAppIdErrorPanel_11;
		bool L_23 = V_0;
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0), NULL);
		// this.UserIdFormPanel.gameObject.SetActive(appIdPresent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___UserIdFormPanel_14;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_24, NULL);
		bool L_26 = V_0;
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, L_26, NULL);
		// if (!appIdPresent)
		bool L_27 = V_0;
		if (L_27)
		{
			goto IL_00f9;
		}
	}
	{
		// Debug.LogError("You need to set the chat app ID in the PhotonServerSettings file in order to continue.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral361D3EBAF9E2C29F13DB3B6509697AA973E37A36, NULL);
	}

IL_00f9:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_Connect_m073A7E59E9008C4D708663A6902A6C19882540E3 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1533BFD28F11C5F69CA87886E87821ECA526FE4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.UserIdFormPanel.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___UserIdFormPanel_14;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// this.chatClient = new ChatClient(this);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_2 = (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA*)il2cpp_codegen_object_new(ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ChatClient__ctor_m5C32CB0A0CAC33E980D4C6FA700B551D0DAF46F4(L_2, __this, 0, NULL);
		__this->___chatClient_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chatClient_9), (void*)L_2);
		// this.chatClient.UseBackgroundWorkerForSending = true;
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_3 = __this->___chatClient_9;
		NullCheck(L_3);
		ChatClient_set_UseBackgroundWorkerForSending_m6B0CF62C2EBF74CB62FFB1557DC30969292B7596_inline(L_3, (bool)1, NULL);
		// this.chatClient.AuthValues = new AuthenticationValues(this.UserName);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_4 = __this->___chatClient_9;
		String_t* L_5;
		L_5 = ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline(__this, NULL);
		AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* L_6 = (AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C*)il2cpp_codegen_object_new(AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AuthenticationValues__ctor_mB097BC3108CD439CAD77D4AE77F8616FA92C929D(L_6, L_5, NULL);
		NullCheck(L_4);
		ChatClient_set_AuthValues_mAAD43D4212103C80D1377FA04B33815397E28937_inline(L_4, L_6, NULL);
		// this.chatClient.ConnectUsingSettings(this.chatAppSettings);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_7 = __this->___chatClient_9;
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_8 = __this->___chatAppSettings_10;
		NullCheck(L_7);
		bool L_9;
		L_9 = ChatClient_ConnectUsingSettings_m3DCD03EA4CAE4ADDD935BDA323CCF37B5E96BB4C(L_7, L_8, NULL);
		// this.ChannelToggleToInstantiate.gameObject.SetActive(false);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_10 = __this->___ChannelToggleToInstantiate_17;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// Debug.Log("Connecting as: " + this.UserName);
		String_t* L_12;
		L_12 = ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline(__this, NULL);
		String_t* L_13;
		L_13 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralA1533BFD28F11C5F69CA87886E87821ECA526FE4, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_13, NULL);
		// this.ConnectingLabel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___ConnectingLabel_12;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnDestroy_m39C68FCB3C786B0D6533DAD7ADD4A998C9F4B0B9 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	{
		// if (this.chatClient != null)
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_0 = __this->___chatClient_9;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// this.chatClient.Disconnect();
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_1 = __this->___chatClient_9;
		NullCheck(L_1);
		ChatClient_Disconnect_m678FDF44265FD926B8DB5555B439F5F70D82BA52(L_1, ((int32_t)13), NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnApplicationQuit_m884A3FA45C488DFE254DD7BCA1FEF917A905133F (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	{
		// if (this.chatClient != null)
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_0 = __this->___chatClient_9;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// this.chatClient.Disconnect();
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_1 = __this->___chatClient_9;
		NullCheck(L_1);
		ChatClient_Disconnect_m678FDF44265FD926B8DB5555B439F5F70D82BA52(L_1, ((int32_t)13), NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_Update_m1121700352D668D142BE6861A856832006968BE0 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.chatClient != null)
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_0 = __this->___chatClient_9;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// this.chatClient.Service(); // make sure to call this regularly! it limits effort internally, so calling often is ok!
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_1 = __this->___chatClient_9;
		NullCheck(L_1);
		ChatClient_Service_mD968988B9275FE4CA7113196FFB455F3BA79D0B7(L_1, NULL);
	}

IL_0013:
	{
		// if ( this.StateText == null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___StateText_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
		// return;
		return;
	}

IL_002d:
	{
		// this.StateText.gameObject.SetActive(this.ShowState); // this could be handled more elegantly, but for the demo it's ok.
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___StateText_23;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		bool L_7 = __this->___ShowState_21;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnEnterSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnEnterSend_m7B3690E336D9A606F4C638FBDA76DF2EB295694F (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKey(KeyCode.Return) || Input.GetKey(KeyCode.KeypadEnter))
		bool L_0;
		L_0 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)13), NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)271), NULL);
		if (!L_1)
		{
			goto IL_0036;
		}
	}

IL_0015:
	{
		// this.SendChatMessage(this.InputFieldChat.text);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___InputFieldChat_15;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_2, NULL);
		ChatGui_SendChatMessage_m4BD1A7C0CAAA5112EA9B3C1CE4F0F1ADC7018B5D(__this, L_3, NULL);
		// this.InputFieldChat.text = "";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_4 = __this->___InputFieldChat_15;
		NullCheck(L_4);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnClickSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnClickSend_m10B5544E0F1A5F5D46E44BD8AA7002A06C5034CA (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.InputFieldChat != null)
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___InputFieldChat_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// this.SendChatMessage(this.InputFieldChat.text);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___InputFieldChat_15;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_2, NULL);
		ChatGui_SendChatMessage_m4BD1A7C0CAAA5112EA9B3C1CE4F0F1ADC7018B5D(__this, L_3, NULL);
		// this.InputFieldChat.text = "";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_4 = __this->___InputFieldChat_15;
		NullCheck(L_4);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::SendChatMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_SendChatMessage_m4BD1A7C0CAAA5112EA9B3C1CE4F0F1ADC7018B5D (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___inputLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m43998BB50D68FD0B18E4445DED51EE80D6EF1643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m952BC71E0A6D29F848B1C6D854B9183CE0A5E83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral118410E0D4EC44AA2FCD3142030E47DC49A64A18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral300E1362F835BABF048E880C8978EF4F91E3867D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41540A8C28BA5EDA9B41BEBBF344C748063CDB90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral471E512CD36A060B52A0EE28B8A6D4EEC00378C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5224DE4337BB6DBE135E6B5A4D01069A20195D5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DF695F96AE9B00DBD2CB8F12E765C3159E02AF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral693BD22F82043985FDDDDFCF5E8EC15BF8B82934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral710F81E0EEB8CB48BACB8437BA5836E3B5349235);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7077659D26DAF185E52E2F2B77A29B3A2B818C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3664676F50F442E724FBD9CC58E7261F51AA12F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE1823106E03B1A8E37190FA81CAA82064505504);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0E91461B7ECDB6ABA60BFA77B9395C3A7DF66BE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	Il2CppChar V_2 = 0x0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	int32_t V_4 = 0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_5 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_6 = NULL;
	ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* V_7 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_8 = NULL;
	String_t* V_9 = NULL;
	String_t* V_10 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_11 = NULL;
	{
		// if (string.IsNullOrEmpty(inputLine))
		String_t* L_0 = ___inputLine0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if ("test".Equals(inputLine))
		String_t* L_2 = ___inputLine0;
		NullCheck(_stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1);
		bool L_3;
		L_3 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(_stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1, L_2, NULL);
		if (!L_3)
		{
			goto IL_005a;
		}
	}
	{
		// if (this.TestLength != this.testBytes.Length)
		int32_t L_4 = __this->___TestLength_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___testBytes_27;
		NullCheck(L_5);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0037;
		}
	}
	{
		// this.testBytes = new byte[this.TestLength];
		int32_t L_6 = __this->___TestLength_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___testBytes_27 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___testBytes_27), (void*)L_7);
	}

IL_0037:
	{
		// this.chatClient.SendPrivateMessage(this.chatClient.AuthValues.UserId, this.testBytes, true);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_8 = __this->___chatClient_9;
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_9 = __this->___chatClient_9;
		NullCheck(L_9);
		AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* L_10;
		L_10 = ChatClient_get_AuthValues_mC9F4405E66924D1BA21DEDE10848199C24915476_inline(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = AuthenticationValues_get_UserId_m61CDE1031F42330B0EDC0EC489A75E46E1DB6B79_inline(L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___testBytes_27;
		NullCheck(L_8);
		bool L_13;
		L_13 = ChatClient_SendPrivateMessage_m736B989819416ADFFE92A9B4EB297FE6DC607E36(L_8, L_11, (RuntimeObject*)L_12, (bool)1, NULL);
	}

IL_005a:
	{
		// bool doingPrivateChat = this.chatClient.PrivateChannels.ContainsKey(this.selectedChannelName);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_14 = __this->___chatClient_9;
		NullCheck(L_14);
		Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E* L_15 = L_14->___PrivateChannels_15;
		String_t* L_16 = __this->___selectedChannelName_8;
		NullCheck(L_15);
		bool L_17;
		L_17 = Dictionary_2_ContainsKey_m43998BB50D68FD0B18E4445DED51EE80D6EF1643(L_15, L_16, Dictionary_2_ContainsKey_m43998BB50D68FD0B18E4445DED51EE80D6EF1643_RuntimeMethod_var);
		V_0 = L_17;
		// string privateChatTarget = string.Empty;
		String_t* L_18 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_18;
		// if (doingPrivateChat)
		bool L_19 = V_0;
		if (!L_19)
		{
			goto IL_0093;
		}
	}
	{
		// string[] splitNames = this.selectedChannelName.Split(new char[] { ':' });
		String_t* L_20 = __this->___selectedChannelName_8;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22 = L_21;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
		NullCheck(L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23;
		L_23 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_20, L_22, NULL);
		// privateChatTarget = splitNames[1];
		NullCheck(L_23);
		int32_t L_24 = 1;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_1 = L_25;
	}

IL_0093:
	{
		// if (inputLine[0].Equals('\\'))
		String_t* L_26 = ___inputLine0;
		NullCheck(L_26);
		Il2CppChar L_27;
		L_27 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_26, 0, NULL);
		V_2 = L_27;
		bool L_28;
		L_28 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&V_2), ((int32_t)92), NULL);
		if (!L_28)
		{
			goto IL_0324;
		}
	}
	{
		// string[] tokens = inputLine.Split(new char[] {' '}, 2);
		String_t* L_29 = ___inputLine0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_30 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_31 = L_30;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		NullCheck(L_29);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32;
		L_32 = String_Split_m3C63FA89A52BE352B4E49DB5379F7AAD6ACCA0E8(L_29, L_31, 2, NULL);
		V_3 = L_32;
		// if (tokens[0].Equals("\\help"))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_3;
		NullCheck(L_33);
		int32_t L_34 = 0;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		bool L_36;
		L_36 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_35, _stringLiteral118410E0D4EC44AA2FCD3142030E47DC49A64A18, NULL);
		if (!L_36)
		{
			goto IL_00d1;
		}
	}
	{
		// this.PostHelpToCurrentChannel();
		ChatGui_PostHelpToCurrentChannel_m707B7D1D556EACB05EC03E08F91A8F1ECA3642E9(__this, NULL);
	}

IL_00d1:
	{
		// if (tokens[0].Equals("\\state"))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = 0;
		String_t* L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		bool L_40;
		L_40 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_39, _stringLiteral5224DE4337BB6DBE135E6B5A4D01069A20195D5F, NULL);
		if (!L_40)
		{
			goto IL_0154;
		}
	}
	{
		// int newState = 0;
		V_4 = 0;
		// List<string> messages = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_41 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_41, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_5 = L_41;
		// messages.Add ("i am state " + newState);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_42 = V_5;
		String_t* L_43;
		L_43 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_44;
		L_44 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral300E1362F835BABF048E880C8978EF4F91E3867D, L_43, NULL);
		NullCheck(L_42);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_42, L_44, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// string[] subtokens = tokens[1].Split(new char[] {' ', ','});
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = V_3;
		NullCheck(L_45);
		int32_t L_46 = 1;
		String_t* L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_48 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_49 = L_48;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_50 = L_49;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)44));
		NullCheck(L_47);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51;
		L_51 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_47, L_50, NULL);
		V_6 = L_51;
		// if (subtokens.Length > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = V_6;
		NullCheck(L_52);
		if (!(((RuntimeArray*)L_52)->max_length))
		{
			goto IL_012c;
		}
	}
	{
		// newState = int.Parse(subtokens[0]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = V_6;
		NullCheck(L_53);
		int32_t L_54 = 0;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		int32_t L_56;
		L_56 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_55, NULL);
		V_4 = L_56;
	}

IL_012c:
	{
		// if (subtokens.Length > 1)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = V_6;
		NullCheck(L_57);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length))) <= ((int32_t)1)))
		{
			goto IL_013e;
		}
	}
	{
		// messages.Add(subtokens[1]);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_58 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_59 = V_6;
		NullCheck(L_59);
		int32_t L_60 = 1;
		String_t* L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_58);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_58, L_61, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_013e:
	{
		// this.chatClient.SetOnlineStatus(newState,messages.ToArray()); // this is how you set your own state and (any) message
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_62 = __this->___chatClient_9;
		int32_t L_63 = V_4;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_64 = V_5;
		NullCheck(L_64);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65;
		L_65 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_64, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		NullCheck(L_62);
		bool L_66;
		L_66 = ChatClient_SetOnlineStatus_mA793BD64EB3D9ED4E360835951BD0333424C918D(L_62, L_63, (RuntimeObject*)L_65, NULL);
		return;
	}

IL_0154:
	{
		// else if ((tokens[0].Equals("\\subscribe") || tokens[0].Equals("\\s")) && !string.IsNullOrEmpty(tokens[1]))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = V_3;
		NullCheck(L_67);
		int32_t L_68 = 0;
		String_t* L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_69);
		bool L_70;
		L_70 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_69, _stringLiteral41540A8C28BA5EDA9B41BEBBF344C748063CDB90, NULL);
		if (L_70)
		{
			goto IL_0172;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_3;
		NullCheck(L_71);
		int32_t L_72 = 0;
		String_t* L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		bool L_74;
		L_74 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_73, _stringLiteralB3664676F50F442E724FBD9CC58E7261F51AA12F, NULL);
		if (!L_74)
		{
			goto IL_01a1;
		}
	}

IL_0172:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76 = 1;
		String_t* L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		bool L_78;
		L_78 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_77, NULL);
		if (L_78)
		{
			goto IL_01a1;
		}
	}
	{
		// this.chatClient.Subscribe(tokens[1].Split(new char[] {' ', ','}));
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_79 = __this->___chatClient_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_3;
		NullCheck(L_80);
		int32_t L_81 = 1;
		String_t* L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_83 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_84 = L_83;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_85 = L_84;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)44));
		NullCheck(L_82);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_86;
		L_86 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_82, L_85, NULL);
		NullCheck(L_79);
		bool L_87;
		L_87 = ChatClient_Subscribe_mAB072792329A26749E58FED202C38A51691CD32C(L_79, L_86, NULL);
		return;
	}

IL_01a1:
	{
		// else if ((tokens[0].Equals("\\unsubscribe") || tokens[0].Equals("\\u")) && !string.IsNullOrEmpty(tokens[1]))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_88 = V_3;
		NullCheck(L_88);
		int32_t L_89 = 0;
		String_t* L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_90);
		bool L_91;
		L_91 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_90, _stringLiteralBE1823106E03B1A8E37190FA81CAA82064505504, NULL);
		if (L_91)
		{
			goto IL_01bf;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_92 = V_3;
		NullCheck(L_92);
		int32_t L_93 = 0;
		String_t* L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_94);
		bool L_95;
		L_95 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_94, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, NULL);
		if (!L_95)
		{
			goto IL_01ee;
		}
	}

IL_01bf:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_96 = V_3;
		NullCheck(L_96);
		int32_t L_97 = 1;
		String_t* L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		bool L_99;
		L_99 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_98, NULL);
		if (L_99)
		{
			goto IL_01ee;
		}
	}
	{
		// this.chatClient.Unsubscribe(tokens[1].Split(new char[] {' ', ','}));
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_100 = __this->___chatClient_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_101 = V_3;
		NullCheck(L_101);
		int32_t L_102 = 1;
		String_t* L_103 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_104 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_105 = L_104;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_106 = L_105;
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)44));
		NullCheck(L_103);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_107;
		L_107 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_103, L_106, NULL);
		NullCheck(L_100);
		bool L_108;
		L_108 = ChatClient_Unsubscribe_m384652194B1073EDB7A8CA3DBA04EFB7A14F0B0A(L_100, L_107, NULL);
		return;
	}

IL_01ee:
	{
		// else if (tokens[0].Equals("\\clear"))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_109 = V_3;
		NullCheck(L_109);
		int32_t L_110 = 0;
		String_t* L_111 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_111);
		bool L_112;
		L_112 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_111, _stringLiteralF0E91461B7ECDB6ABA60BFA77B9395C3A7DF66BE, NULL);
		if (!L_112)
		{
			goto IL_0239;
		}
	}
	{
		// if (doingPrivateChat)
		bool L_113 = V_0;
		if (!L_113)
		{
			goto IL_0218;
		}
	}
	{
		// this.chatClient.PrivateChannels.Remove(this.selectedChannelName);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_114 = __this->___chatClient_9;
		NullCheck(L_114);
		Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E* L_115 = L_114->___PrivateChannels_15;
		String_t* L_116 = __this->___selectedChannelName_8;
		NullCheck(L_115);
		bool L_117;
		L_117 = Dictionary_2_Remove_m952BC71E0A6D29F848B1C6D854B9183CE0A5E83A(L_115, L_116, Dictionary_2_Remove_m952BC71E0A6D29F848B1C6D854B9183CE0A5E83A_RuntimeMethod_var);
		return;
	}

IL_0218:
	{
		// if (this.chatClient.TryGetChannel(this.selectedChannelName, doingPrivateChat, out channel))
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_118 = __this->___chatClient_9;
		String_t* L_119 = __this->___selectedChannelName_8;
		bool L_120 = V_0;
		NullCheck(L_118);
		bool L_121;
		L_121 = ChatClient_TryGetChannel_m5C5176103E0A618C661F6351BEBE408F4A06D925(L_118, L_119, L_120, (&V_7), NULL);
		if (!L_121)
		{
			goto IL_034b;
		}
	}
	{
		// channel.ClearMessages();
		ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* L_122 = V_7;
		NullCheck(L_122);
		ChatChannel_ClearMessages_m046EA236CDD967B62CDE383F2098BF4B6ED80FFE(L_122, NULL);
		return;
	}

IL_0239:
	{
		// else if (tokens[0].Equals("\\msg") && !string.IsNullOrEmpty(tokens[1]))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_123 = V_3;
		NullCheck(L_123);
		int32_t L_124 = 0;
		String_t* L_125 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		NullCheck(L_125);
		bool L_126;
		L_126 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_125, _stringLiteralA7077659D26DAF185E52E2F2B77A29B3A2B818C1, NULL);
		if (!L_126)
		{
			goto IL_0293;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_127 = V_3;
		NullCheck(L_127);
		int32_t L_128 = 1;
		String_t* L_129 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		bool L_130;
		L_130 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_129, NULL);
		if (L_130)
		{
			goto IL_0293;
		}
	}
	{
		// string[] subtokens = tokens[1].Split(new char[] {' ', ','}, 2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_131 = V_3;
		NullCheck(L_131);
		int32_t L_132 = 1;
		String_t* L_133 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_134 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_135 = L_134;
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_136 = L_135;
		NullCheck(L_136);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)44));
		NullCheck(L_133);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_137;
		L_137 = String_Split_m3C63FA89A52BE352B4E49DB5379F7AAD6ACCA0E8(L_133, L_136, 2, NULL);
		V_8 = L_137;
		// if (subtokens.Length < 2) return;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_138 = V_8;
		NullCheck(L_138);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_138)->max_length))) >= ((int32_t)2)))
		{
			goto IL_0275;
		}
	}
	{
		// if (subtokens.Length < 2) return;
		return;
	}

IL_0275:
	{
		// string targetUser = subtokens[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_139 = V_8;
		NullCheck(L_139);
		int32_t L_140 = 0;
		String_t* L_141 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		V_9 = L_141;
		// string message = subtokens[1];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_142 = V_8;
		NullCheck(L_142);
		int32_t L_143 = 1;
		String_t* L_144 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		V_10 = L_144;
		// this.chatClient.SendPrivateMessage(targetUser, message);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_145 = __this->___chatClient_9;
		String_t* L_146 = V_9;
		String_t* L_147 = V_10;
		NullCheck(L_145);
		bool L_148;
		L_148 = ChatClient_SendPrivateMessage_m736B989819416ADFFE92A9B4EB297FE6DC607E36(L_145, L_146, L_147, (bool)0, NULL);
		return;
	}

IL_0293:
	{
		// else if ((tokens[0].Equals("\\join") || tokens[0].Equals("\\j")) && !string.IsNullOrEmpty(tokens[1]))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_149 = V_3;
		NullCheck(L_149);
		int32_t L_150 = 0;
		String_t* L_151 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		NullCheck(L_151);
		bool L_152;
		L_152 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_151, _stringLiteral710F81E0EEB8CB48BACB8437BA5836E3B5349235, NULL);
		if (L_152)
		{
			goto IL_02b1;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_153 = V_3;
		NullCheck(L_153);
		int32_t L_154 = 0;
		String_t* L_155 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		NullCheck(L_155);
		bool L_156;
		L_156 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_155, _stringLiteral471E512CD36A060B52A0EE28B8A6D4EEC00378C1, NULL);
		if (!L_156)
		{
			goto IL_030c;
		}
	}

IL_02b1:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_157 = V_3;
		NullCheck(L_157);
		int32_t L_158 = 1;
		String_t* L_159 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		bool L_160;
		L_160 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_159, NULL);
		if (L_160)
		{
			goto IL_030c;
		}
	}
	{
		// string[] subtokens = tokens[1].Split(new char[] { ' ', ',' }, 2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_161 = V_3;
		NullCheck(L_161);
		int32_t L_162 = 1;
		String_t* L_163 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_164 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_165 = L_164;
		NullCheck(L_165);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_166 = L_165;
		NullCheck(L_166);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)44));
		NullCheck(L_163);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_167;
		L_167 = String_Split_m3C63FA89A52BE352B4E49DB5379F7AAD6ACCA0E8(L_163, L_166, 2, NULL);
		V_11 = L_167;
		// if (this.channelToggles.ContainsKey(subtokens[0]))
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_168 = __this->___channelToggles_19;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_169 = V_11;
		NullCheck(L_169);
		int32_t L_170 = 0;
		String_t* L_171 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		NullCheck(L_168);
		bool L_172;
		L_172 = Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7(L_168, L_171, Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var);
		if (!L_172)
		{
			goto IL_02f2;
		}
	}
	{
		// this.ShowChannel(subtokens[0]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_173 = V_11;
		NullCheck(L_173);
		int32_t L_174 = 0;
		String_t* L_175 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211(__this, L_175, NULL);
		return;
	}

IL_02f2:
	{
		// this.chatClient.Subscribe(new string[] { subtokens[0] });
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_176 = __this->___chatClient_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_177 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_178 = L_177;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_179 = V_11;
		NullCheck(L_179);
		int32_t L_180 = 0;
		String_t* L_181 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		NullCheck(L_178);
		ArrayElementTypeCheck (L_178, L_181);
		(L_178)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_181);
		NullCheck(L_176);
		bool L_182;
		L_182 = ChatClient_Subscribe_mAB072792329A26749E58FED202C38A51691CD32C(L_176, L_178, NULL);
		return;
	}

IL_030c:
	{
		// Debug.Log("The command '" + tokens[0] + "' is invalid.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_183 = V_3;
		NullCheck(L_183);
		int32_t L_184 = 0;
		String_t* L_185 = (L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		String_t* L_186;
		L_186 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral5DF695F96AE9B00DBD2CB8F12E765C3159E02AF8, L_185, _stringLiteral693BD22F82043985FDDDDFCF5E8EC15BF8B82934, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_186, NULL);
		return;
	}

IL_0324:
	{
		// if (doingPrivateChat)
		bool L_187 = V_0;
		if (!L_187)
		{
			goto IL_0337;
		}
	}
	{
		// this.chatClient.SendPrivateMessage(privateChatTarget, inputLine);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_188 = __this->___chatClient_9;
		String_t* L_189 = V_1;
		String_t* L_190 = ___inputLine0;
		NullCheck(L_188);
		bool L_191;
		L_191 = ChatClient_SendPrivateMessage_m736B989819416ADFFE92A9B4EB297FE6DC607E36(L_188, L_189, L_190, (bool)0, NULL);
		return;
	}

IL_0337:
	{
		// this.chatClient.PublishMessage(this.selectedChannelName, inputLine);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_192 = __this->___chatClient_9;
		String_t* L_193 = __this->___selectedChannelName_8;
		String_t* L_194 = ___inputLine0;
		NullCheck(L_192);
		bool L_195;
		L_195 = ChatClient_PublishMessage_mC0EA414F46817A9F77DF910D9094AF23B563A2D8(L_192, L_193, L_194, (bool)0, NULL);
	}

IL_034b:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::PostHelpToCurrentChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_PostHelpToCurrentChannel_m707B7D1D556EACB05EC03E08F91A8F1ECA3642E9 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.CurrentChannelText.text += HelpText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___CurrentChannelText_16;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = L_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		il2cpp_codegen_runtime_class_init_inline(ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var);
		String_t* L_3 = ((ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_StaticFields*)il2cpp_codegen_static_fields_for(ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var))->___HelpText_25;
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_2, L_3, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_DebugReturn_m7034DAA4D24C5AB19C4E3341D0CD896058DE710F (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, uint8_t ___level0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (level == ExitGames.Client.Photon.DebugLevel.ERROR)
		uint8_t L_0 = ___level0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000b;
		}
	}
	{
		// Debug.LogError(message);
		String_t* L_1 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_1, NULL);
		return;
	}

IL_000b:
	{
		// else if (level == ExitGames.Client.Photon.DebugLevel.WARNING)
		uint8_t L_2 = ___level0;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0016;
		}
	}
	{
		// Debug.LogWarning(message);
		String_t* L_3 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_3, NULL);
		return;
	}

IL_0016:
	{
		// Debug.Log(message);
		String_t* L_4 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_4, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnConnected_mEA68753CDC2CAE5D5205A24D535E276CC17F9ED5 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18BA82A745D9E10EF604341BD4FA08FA6FBF82D5);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// if (this.ChannelsToJoinOnConnect != null && this.ChannelsToJoinOnConnect.Length > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___ChannelsToJoinOnConnect_4;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___ChannelsToJoinOnConnect_4;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0029;
		}
	}
	{
		// this.chatClient.Subscribe(this.ChannelsToJoinOnConnect, this.HistoryLengthToFetch);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_2 = __this->___chatClient_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = __this->___ChannelsToJoinOnConnect_4;
		int32_t L_4 = __this->___HistoryLengthToFetch_6;
		NullCheck(L_2);
		bool L_5;
		L_5 = ChatClient_Subscribe_m4A3A6D2D5703A1D8CF8ED0CACA717114062A6559(L_2, L_3, L_4, NULL);
	}

IL_0029:
	{
		// this.ConnectingLabel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___ConnectingLabel_12;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// this.UserIdText.text = "Connected as "+ this.UserName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___UserIdText_24;
		String_t* L_8;
		L_8 = ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline(__this, NULL);
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral18BA82A745D9E10EF604341BD4FA08FA6FBF82D5, L_8, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_9);
		// this.ChatPanel.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___ChatPanel_13;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// if (this.FriendsList!=null  && this.FriendsList.Length>0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = __this->___FriendsList_5;
		if (!L_12)
		{
			goto IL_00c0;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = __this->___FriendsList_5;
		NullCheck(L_13);
		if (!(((RuntimeArray*)L_13)->max_length))
		{
			goto IL_00c0;
		}
	}
	{
		// this.chatClient.AddFriends(this.FriendsList); // Add some users to the server-list to get their status updates
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_14 = __this->___chatClient_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = __this->___FriendsList_5;
		NullCheck(L_14);
		bool L_16;
		L_16 = ChatClient_AddFriends_mC7A8A45F98205A68592ED3BE7A5FC88BF4EFB809(L_14, L_15, NULL);
		// foreach(string _friend in this.FriendsList)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = __this->___FriendsList_5;
		V_0 = L_17;
		V_1 = 0;
		goto IL_00ba;
	}

IL_008f:
	{
		// foreach(string _friend in this.FriendsList)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		String_t* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_2 = L_21;
		// if (this.FriendListUiItemtoInstantiate != null && _friend!= this.UserName)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___FriendListUiItemtoInstantiate_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00b6;
		}
	}
	{
		String_t* L_24 = V_2;
		String_t* L_25;
		L_25 = ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline(__this, NULL);
		bool L_26;
		L_26 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_24, L_25, NULL);
		if (!L_26)
		{
			goto IL_00b6;
		}
	}
	{
		// this.InstantiateFriendButton(_friend);
		String_t* L_27 = V_2;
		ChatGui_InstantiateFriendButton_m76FB5E6D0ACF60E58F8EE09C10998D49020B4CD1(__this, L_27, NULL);
	}

IL_00b6:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00ba:
	{
		// foreach(string _friend in this.FriendsList)
		int32_t L_29 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = V_0;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_008f;
		}
	}

IL_00c0:
	{
		// if (this.FriendListUiItemtoInstantiate != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___FriendListUiItemtoInstantiate_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_31, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_32)
		{
			goto IL_00da;
		}
	}
	{
		// this.FriendListUiItemtoInstantiate.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___FriendListUiItemtoInstantiate_18;
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)0, NULL);
	}

IL_00da:
	{
		// this.chatClient.SetOnlineStatus(ChatUserStatus.Online); // You can set your online state (without a mesage).
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_34 = __this->___chatClient_9;
		NullCheck(L_34);
		bool L_35;
		L_35 = ChatClient_SetOnlineStatus_mEFE64834C76CBF45AB5B986DE9FE28A27D77E6CD(L_34, 2, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnDisconnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnDisconnected_m7E9FDB43A4AB5E24B2776DA8E451777DC70AC089 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	{
		// this.ConnectingLabel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ConnectingLabel_12;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnChatStateChange(Photon.Chat.ChatState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnChatStateChange_mB6DE685B2B39B84A3568D59E86289DEE53A055AD (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, int32_t ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatState_t051505084374FEB7E666EAF9C3D7A8DFBA5119D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.StateText.text = state.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___StateText_23;
		Il2CppFakeBox<int32_t> L_1(ChatState_t051505084374FEB7E666EAF9C3D7A8DFBA5119D6_il2cpp_TypeInfo_var, (&___state0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnSubscribed(System.String[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnSubscribed_mB6644A294FF6AE8EF9E7BE72B2DF72E3FA64C6E4 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___channels0, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___results1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02B3E56E4708FA9AEED0B607268A8985B53DDF13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25D19D44AE79EC606DD671C43230AAA8F1766EE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// foreach (string channel in channels)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___channels0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0036;
	}

IL_0006:
	{
		// foreach (string channel in channels)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// this.chatClient.PublishMessage(channel, "says 'hi'."); // you don't HAVE to send a msg on join but you could.
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_5 = __this->___chatClient_9;
		String_t* L_6 = V_2;
		NullCheck(L_5);
		bool L_7;
		L_7 = ChatClient_PublishMessage_mC0EA414F46817A9F77DF910D9094AF23B563A2D8(L_5, L_6, _stringLiteral02B3E56E4708FA9AEED0B607268A8985B53DDF13, (bool)0, NULL);
		// if (this.ChannelToggleToInstantiate != null)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_8 = __this->___ChannelToggleToInstantiate_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0032;
		}
	}
	{
		// this.InstantiateChannelButton(channel);
		String_t* L_10 = V_2;
		ChatGui_InstantiateChannelButton_m4C6135B30B8F5C9BDF9AE1753E8AFE63B791D401(__this, L_10, NULL);
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0036:
	{
		// foreach (string channel in channels)
		int32_t L_12 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// Debug.Log("OnSubscribed: " + string.Join(", ", channels));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = ___channels0;
		String_t* L_15;
		L_15 = String_Join_mE405D676C6881553258F8BAD40A20B462D611068(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral25D19D44AE79EC606DD671C43230AAA8F1766EE6, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_16, NULL);
		// this.ShowChannel(channels[0]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = ___channels0;
		NullCheck(L_17);
		int32_t L_18 = 0;
		String_t* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211(__this, L_19, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnSubscribed(System.String,System.String[],System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnSubscribed_mAE9A9BA2F388C116F4CBC4F7A2113BD23E06B0F8 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channel0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___users1, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___properties2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A36DF6525515FE29AEB2A52B49635745B5D8E56);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("OnSubscribed: {0}, users.Count: {1} Channel-props: {2}.", channel, users.Length, properties.ToStringFull());
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___channel0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___users1;
		NullCheck(L_4);
		int32_t L_5 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_8 = ___properties2;
		il2cpp_codegen_runtime_class_init_inline(Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Extensions_ToStringFull_mAC48EACD33E2EF6430A689C40DFF96C68B5C41D0(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral4A36DF6525515FE29AEB2A52B49635745B5D8E56, L_7, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::InstantiateChannelButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_InstantiateChannelButton_m4C6135B30B8F5C9BDF9AE1753E8AFE63B791D401 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channelName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07_mA5CB24AADA6105A0763F0F315A95A0B02EB5A05E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m7AC008F2D3DCBB5019F0BE948B7F9B77284CC86C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m15557773C5C7B03FA319A668FB60FD7A945F5A16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF726A1EAC195324F63D384A1F2A33114361B699C);
		s_Il2CppMethodInitialized = true;
	}
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* V_0 = NULL;
	{
		// if (this.channelToggles.ContainsKey(channelName))
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_0 = __this->___channelToggles_19;
		String_t* L_1 = ___channelName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7(L_0, L_1, Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.Log("Skipping creation for an existing channel toggle.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralF726A1EAC195324F63D384A1F2A33114361B699C, NULL);
		// return;
		return;
	}

IL_0019:
	{
		// Toggle cbtn = (Toggle)Instantiate(this.ChannelToggleToInstantiate);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3 = __this->___ChannelToggleToInstantiate_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_4;
		L_4 = Object_Instantiate_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m15557773C5C7B03FA319A668FB60FD7A945F5A16(L_3, Object_Instantiate_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m15557773C5C7B03FA319A668FB60FD7A945F5A16_RuntimeMethod_var);
		V_0 = L_4;
		// cbtn.gameObject.SetActive(true);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_5 = V_0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// cbtn.GetComponentInChildren<ChannelSelector>().SetChannel(channelName);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_7 = V_0;
		NullCheck(L_7);
		ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* L_8;
		L_8 = Component_GetComponentInChildren_TisChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07_mA5CB24AADA6105A0763F0F315A95A0B02EB5A05E(L_7, Component_GetComponentInChildren_TisChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07_mA5CB24AADA6105A0763F0F315A95A0B02EB5A05E_RuntimeMethod_var);
		String_t* L_9 = ___channelName0;
		NullCheck(L_8);
		ChannelSelector_SetChannel_m7E493B7588E65D501C7DA99C72BF36DAA565250E(L_8, L_9, NULL);
		// cbtn.transform.SetParent(this.ChannelToggleToInstantiate.transform.parent, false);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_10 = V_0;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_12 = __this->___ChannelToggleToInstantiate_17;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_13, NULL);
		NullCheck(L_11);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_11, L_14, (bool)0, NULL);
		// this.channelToggles.Add(channelName, cbtn);
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_15 = __this->___channelToggles_19;
		String_t* L_16 = ___channelName0;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_17 = V_0;
		NullCheck(L_15);
		Dictionary_2_Add_m7AC008F2D3DCBB5019F0BE948B7F9B77284CC86C(L_15, L_16, L_17, Dictionary_2_Add_m7AC008F2D3DCBB5019F0BE948B7F9B77284CC86C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::InstantiateFriendButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_InstantiateFriendButton_m76FB5E6D0ACF60E58F8EE09C10998D49020B4CD1 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___friendId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mFDB00FBC9AEC3F5411BC17218005A2DDC01A4EE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13_m0046B7B489607CF796C30CD83C51F1304D701F67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* V_0 = NULL;
	{
		// GameObject fbtn = (GameObject)Instantiate(this.FriendListUiItemtoInstantiate);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___FriendListUiItemtoInstantiate_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// fbtn.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// FriendItem  _friendItem =    fbtn.GetComponent<FriendItem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_2;
		NullCheck(L_4);
		FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* L_5;
		L_5 = GameObject_GetComponent_TisFriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13_m0046B7B489607CF796C30CD83C51F1304D701F67(L_4, GameObject_GetComponent_TisFriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13_m0046B7B489607CF796C30CD83C51F1304D701F67_RuntimeMethod_var);
		V_0 = L_5;
		// _friendItem.FriendId = friendId;
		FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* L_6 = V_0;
		String_t* L_7 = ___friendId0;
		NullCheck(L_6);
		FriendItem_set_FriendId_m49FB0C8B978DD2E35361DE3ED6863257B82E4BB2(L_6, L_7, NULL);
		// fbtn.transform.SetParent(this.FriendListUiItemtoInstantiate.transform.parent, false);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___FriendListUiItemtoInstantiate_18;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_10, NULL);
		NullCheck(L_8);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_8, L_11, (bool)0, NULL);
		// this.friendListItemLUT[friendId] = _friendItem;
		Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* L_12 = __this->___friendListItemLUT_20;
		String_t* L_13 = ___friendId0;
		FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* L_14 = V_0;
		NullCheck(L_12);
		Dictionary_2_set_Item_mFDB00FBC9AEC3F5411BC17218005A2DDC01A4EE7(L_12, L_13, L_14, Dictionary_2_set_Item_mFDB00FBC9AEC3F5411BC17218005A2DDC01A4EE7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnUnsubscribed(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnUnsubscribed_mA0056721C7A125C3E1D4AC1A2143744BC162D905 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___channels0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m4F6FEFABCBACA9B9B3DED9BFAB8BDA9B47FA678B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mFCFB38659217BF06006B6BC2FFD16389EF2A44EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m65B54189C1D9C6B6BD1BABB5755C0647EE39C89B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t4E0F3B7704316E8AB75E2D31CCAA4790C47642AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA36D615703FF124A704E046433369D41AA86C957);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF901E66F2A148065254F4D6B82528054EF835B28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDB6E6D617A894CF6A5EC4195B7DBF4AFF000089);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// foreach (string channelName in channels)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___channels0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_00cf;
	}

IL_0009:
	{
		// foreach (string channelName in channels)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (this.channelToggles.ContainsKey(channelName))
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_5 = __this->___channelToggles_19;
		String_t* L_6 = V_2;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7(L_5, L_6, Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_00b6;
		}
	}
	{
		// Toggle t = this.channelToggles[channelName];
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_8 = __this->___channelToggles_19;
		String_t* L_9 = V_2;
		NullCheck(L_8);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_10;
		L_10 = Dictionary_2_get_Item_m65B54189C1D9C6B6BD1BABB5755C0647EE39C89B(L_8, L_9, Dictionary_2_get_Item_m65B54189C1D9C6B6BD1BABB5755C0647EE39C89B_RuntimeMethod_var);
		// Destroy(t.gameObject);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_11, NULL);
		// this.channelToggles.Remove(channelName);
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_12 = __this->___channelToggles_19;
		String_t* L_13 = V_2;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_Remove_m4F6FEFABCBACA9B9B3DED9BFAB8BDA9B47FA678B(L_12, L_13, Dictionary_2_Remove_m4F6FEFABCBACA9B9B3DED9BFAB8BDA9B47FA678B_RuntimeMethod_var);
		// Debug.Log("Unsubscribed from channel '" + channelName + "'.");
		String_t* L_15 = V_2;
		String_t* L_16;
		L_16 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralFDB6E6D617A894CF6A5EC4195B7DBF4AFF000089, L_15, _stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_16, NULL);
		// if (channelName == this.selectedChannelName && this.channelToggles.Count > 0)
		String_t* L_17 = V_2;
		String_t* L_18 = __this->___selectedChannelName_8;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_00cb;
		}
	}
	{
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_20 = __this->___channelToggles_19;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Dictionary_2_get_Count_mFCFB38659217BF06006B6BC2FFD16389EF2A44EC(L_20, Dictionary_2_get_Count_mFCFB38659217BF06006B6BC2FFD16389EF2A44EC_RuntimeMethod_var);
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		// IEnumerator<KeyValuePair<string, Toggle>> firstEntry = this.channelToggles.GetEnumerator();
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_22 = __this->___channelToggles_19;
		NullCheck(L_22);
		Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 L_23;
		L_23 = Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5(L_22, Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5_RuntimeMethod_var);
		Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 L_24 = L_23;
		RuntimeObject* L_25 = Box(Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08_il2cpp_TypeInfo_var, &L_24);
		V_3 = (RuntimeObject*)L_25;
		// firstEntry.MoveNext();
		RuntimeObject* L_26 = V_3;
		NullCheck(L_26);
		bool L_27;
		L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
		// this.ShowChannel(firstEntry.Current.Key);
		RuntimeObject* L_28 = V_3;
		NullCheck(L_28);
		KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB L_29;
		L_29 = InterfaceFuncInvoker0< KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UI.Toggle>>::get_Current() */, IEnumerator_1_t4E0F3B7704316E8AB75E2D31CCAA4790C47642AC_il2cpp_TypeInfo_var, L_28);
		V_4 = L_29;
		String_t* L_30;
		L_30 = KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_inline((&V_4), KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_RuntimeMethod_var);
		ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211(__this, L_30, NULL);
		// firstEntry.Current.Value.isOn = true;
		RuntimeObject* L_31 = V_3;
		NullCheck(L_31);
		KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB L_32;
		L_32 = InterfaceFuncInvoker0< KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UI.Toggle>>::get_Current() */, IEnumerator_1_t4E0F3B7704316E8AB75E2D31CCAA4790C47642AC_il2cpp_TypeInfo_var, L_31);
		V_4 = L_32;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_33;
		L_33 = KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_inline((&V_4), KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_RuntimeMethod_var);
		NullCheck(L_33);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_33, (bool)1, NULL);
		goto IL_00cb;
	}

IL_00b6:
	{
		// Debug.Log("Can't unsubscribe from channel '" + channelName + "' because you are currently not subscribed to it.");
		String_t* L_34 = V_2;
		String_t* L_35;
		L_35 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralA36D615703FF124A704E046433369D41AA86C957, L_34, _stringLiteralF901E66F2A148065254F4D6B82528054EF835B28, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_35, NULL);
	}

IL_00cb:
	{
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00cf:
	{
		// foreach (string channelName in channels)
		int32_t L_37 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = V_0;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnGetMessages(System.String,System.String[],System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnGetMessages_m9115E1E3EF6E1CC79DBF18C66E4990C33A545E35 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channelName0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___senders1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___messages2, const RuntimeMethod* method) 
{
	{
		// if (channelName.Equals(this.selectedChannelName))
		String_t* L_0 = ___channelName0;
		String_t* L_1 = __this->___selectedChannelName_8;
		NullCheck(L_0);
		bool L_2;
		L_2 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// this.ShowChannel(this.selectedChannelName);
		String_t* L_3 = __this->___selectedChannelName_8;
		ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211(__this, L_3, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnPrivateMessage(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnPrivateMessage_mE602C58AC56D281B29F1E19F5DFC98A8E480177A (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___sender0, RuntimeObject* ___message1, String_t* ___channelName2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB61F8E5C6788E7093D4F1DE579EBD7C233090B94);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// this.InstantiateChannelButton(channelName);
		String_t* L_0 = ___channelName2;
		ChatGui_InstantiateChannelButton_m4C6135B30B8F5C9BDF9AE1753E8AFE63B791D401(__this, L_0, NULL);
		// byte[] msgBytes = message as byte[];
		RuntimeObject* L_1 = ___message1;
		V_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)IsInst((RuntimeObject*)L_1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		// if (msgBytes != null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// Debug.Log("Message with byte[].Length: "+ msgBytes.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_3);
		V_1 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB61F8E5C6788E7093D4F1DE579EBD7C233090B94, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
	}

IL_002b:
	{
		// if (this.selectedChannelName.Equals(channelName))
		String_t* L_6 = __this->___selectedChannelName_8;
		String_t* L_7 = ___channelName2;
		NullCheck(L_6);
		bool L_8;
		L_8 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		// this.ShowChannel(channelName);
		String_t* L_9 = ___channelName2;
		ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211(__this, L_9, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnStatusUpdate(System.String,System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnStatusUpdate_mEABCBD812C9D9AF133E285BAE9E83994A726E0A4 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___user0, int32_t ___status1, bool ___gotMessage2, RuntimeObject* ___message3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFC86DBD8CA71ACF273A1F7FB6CD2DAD53449653E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD91F54F913AE58A20D0D60800D7E13B3A81BCDBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral187DC7C8E0EDA1DE1ED6DF6A69E16E1804984856);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE149C7622A20B800C0F221FF927D6238C6DD62);
		s_Il2CppMethodInitialized = true;
	}
	FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* V_0 = NULL;
	{
		// Debug.LogWarning("status: " + string.Format("{0} is {1}. Msg:{2}", user, status, message));
		String_t* L_0 = ___user0;
		int32_t L_1 = ___status1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		RuntimeObject* L_4 = ___message3;
		String_t* L_5;
		L_5 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral187DC7C8E0EDA1DE1ED6DF6A69E16E1804984856, L_0, L_3, L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralCCE149C7622A20B800C0F221FF927D6238C6DD62, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_6, NULL);
		// if (this.friendListItemLUT.ContainsKey(user))
		Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* L_7 = __this->___friendListItemLUT_20;
		String_t* L_8 = ___user0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_ContainsKey_mFC86DBD8CA71ACF273A1F7FB6CD2DAD53449653E(L_7, L_8, Dictionary_2_ContainsKey_mFC86DBD8CA71ACF273A1F7FB6CD2DAD53449653E_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		// FriendItem _friendItem = this.friendListItemLUT[user];
		Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* L_10 = __this->___friendListItemLUT_20;
		String_t* L_11 = ___user0;
		NullCheck(L_10);
		FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* L_12;
		L_12 = Dictionary_2_get_Item_mD91F54F913AE58A20D0D60800D7E13B3A81BCDBC(L_10, L_11, Dictionary_2_get_Item_mD91F54F913AE58A20D0D60800D7E13B3A81BCDBC_RuntimeMethod_var);
		V_0 = L_12;
		// if ( _friendItem!=null) _friendItem.OnFriendStatusUpdate(status,gotMessage,message);
		FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0050;
		}
	}
	{
		// if ( _friendItem!=null) _friendItem.OnFriendStatusUpdate(status,gotMessage,message);
		FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* L_15 = V_0;
		int32_t L_16 = ___status1;
		bool L_17 = ___gotMessage2;
		RuntimeObject* L_18 = ___message3;
		NullCheck(L_15);
		FriendItem_OnFriendStatusUpdate_mC336B386CEABD37A2BA65254CFE2C5125263E4CD(L_15, L_16, L_17, L_18, NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnUserSubscribed(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnUserSubscribed_m4D1CE2135AEECD1C76069F86FFCD0BD9FDAA2721 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channel0, String_t* ___user1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93CD26FD25F534D18F21EBB330F02E0264AC3C8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("OnUserSubscribed: channel=\"{0}\" userId=\"{1}\"", channel, user);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___channel0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___user1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral93CD26FD25F534D18F21EBB330F02E0264AC3C8C, L_3, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnUserUnsubscribed(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnUserUnsubscribed_m761BB5EFEE4CBCFFC651343C4AEA1C01DFCADC94 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channel0, String_t* ___user1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31775E5380AC9751F2E61EA3DD24D9243DE804B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("OnUserUnsubscribed: channel=\"{0}\" userId=\"{1}\"", channel, user);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___channel0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___user1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral31775E5380AC9751F2E61EA3DD24D9243DE804B1, L_3, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnChannelPropertiesChanged(System.String,System.String,System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnChannelPropertiesChanged_m69468897BD50BC64B49B64DB314BCC0BB6D253DE (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channel0, String_t* ___userId1, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___properties2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E1D0B7FC6AE1E4699086BAFDFD167B73A71BF62);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("OnChannelPropertiesChanged: {0} by {1}. Props: {2}.", channel, userId, Extensions.ToStringFull(properties));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___channel0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___userId1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_6 = ___properties2;
		il2cpp_codegen_runtime_class_init_inline(Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = Extensions_ToStringFull_mAC48EACD33E2EF6430A689C40DFF96C68B5C41D0(L_6, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral2E1D0B7FC6AE1E4699086BAFDFD167B73A71BF62, L_5, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnUserPropertiesChanged(System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnUserPropertiesChanged_mA9630BFDC595612F70BA891940B4B1FF350AD215 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channel0, String_t* ___targetUserId1, String_t* ___senderUserId2, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___properties3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCCA328F77D050FE98C954ABC27B722687F2666D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("OnUserPropertiesChanged: (channel:{0} user:{1}) by {2}. Props: {3}.", channel, targetUserId, senderUserId, Extensions.ToStringFull(properties));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___channel0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___targetUserId1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___senderUserId2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_8 = ___properties3;
		il2cpp_codegen_runtime_class_init_inline(Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Extensions_ToStringFull_mAC48EACD33E2EF6430A689C40DFF96C68B5C41D0(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_9);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteralFCCA328F77D050FE98C954ABC27B722687F2666D, L_7, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnErrorInfo(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnErrorInfo_m775944C548C91A8C1461451BA2ED1A925A63F0B8 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channel0, String_t* ___error1, RuntimeObject* ___data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE01396087B968D8089649181D62173B42DA52091);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("OnErrorInfo for channel {0}. Error: {1} Data: {2}", channel, error, data);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___channel0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___error1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		RuntimeObject* L_6 = ___data2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteralE01396087B968D8089649181D62173B42DA52091, L_5, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::AddMessageToSelectedChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_AddMessageToSelectedChannel_m7765D7820D47185D32243EB135854241B358E4CE (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E38E2B4F159337570AD4E9656D4BDAF8B0EBCF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB153A4F640C1BF005F7E30CECC4A84EB08150A);
		s_Il2CppMethodInitialized = true;
	}
	ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* V_0 = NULL;
	{
		// ChatChannel channel = null;
		V_0 = (ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1*)NULL;
		// bool found = this.chatClient.TryGetChannel(this.selectedChannelName, out channel);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_0 = __this->___chatClient_9;
		String_t* L_1 = __this->___selectedChannelName_8;
		NullCheck(L_0);
		bool L_2;
		L_2 = ChatClient_TryGetChannel_m596F2DCA70B7C83E7E82B92B341DDEE9A5864C0A(L_0, L_1, (&V_0), NULL);
		// if (!found)
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		// Debug.Log("AddMessageToSelectedChannel failed to find channel: " + this.selectedChannelName);
		String_t* L_3 = __this->___selectedChannelName_8;
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral4E38E2B4F159337570AD4E9656D4BDAF8B0EBCF1, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_4, NULL);
		// return;
		return;
	}

IL_002d:
	{
		// if (channel != null)
		ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* L_5 = V_0;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		// channel.Add("Bot", msg,0); //TODO: how to use msgID?
		ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* L_6 = V_0;
		String_t* L_7 = ___msg0;
		NullCheck(L_6);
		ChatChannel_Add_m22E0343342399B1C9130CCDD12325EAA80DA9440(L_6, _stringLiteralDEB153A4F640C1BF005F7E30CECC4A84EB08150A, L_7, 0, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::ShowChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channelName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m06019984AEF249BE743B261895FBDFCF3DE314FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m950509CD692BEAA25841830AE3528B713C36DAC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF6F3ECC910925263DF2A5278F4F56F520C1507A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D25464A0D2697B9DE85A8CE7C6E223B98C82E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF92D1197FE7F9C3266589153D13221067FA7BB4A);
		s_Il2CppMethodInitialized = true;
	}
	ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* V_0 = NULL;
	Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB V_2;
	memset((&V_2), 0, sizeof(V_2));
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* G_B8_0 = NULL;
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* G_B9_1 = NULL;
	{
		// if (string.IsNullOrEmpty(channelName))
		String_t* L_0 = ___channelName0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// ChatChannel channel = null;
		V_0 = (ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1*)NULL;
		// bool found = this.chatClient.TryGetChannel(channelName, out channel);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_2 = __this->___chatClient_9;
		String_t* L_3 = ___channelName0;
		NullCheck(L_2);
		bool L_4;
		L_4 = ChatClient_TryGetChannel_m596F2DCA70B7C83E7E82B92B341DDEE9A5864C0A(L_2, L_3, (&V_0), NULL);
		// if (!found)
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		// Debug.Log("ShowChannel failed to find channel: " + channelName);
		String_t* L_5 = ___channelName0;
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral60D25464A0D2697B9DE85A8CE7C6E223B98C82E6, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_6, NULL);
		// return;
		return;
	}

IL_002c:
	{
		// this.selectedChannelName = channelName;
		String_t* L_7 = ___channelName0;
		__this->___selectedChannelName_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedChannelName_8), (void*)L_7);
		// this.CurrentChannelText.text = channel.ToStringMessages();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___CurrentChannelText_16;
		ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ChatChannel_ToStringMessages_mB286B6E5F35FAF7A5F4F4EE259BB64207F34FE18(L_9, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_10);
		// Debug.Log("ShowChannel: " + this.selectedChannelName);
		String_t* L_11 = __this->___selectedChannelName_8;
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralF92D1197FE7F9C3266589153D13221067FA7BB4A, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_12, NULL);
		// foreach (KeyValuePair<string, Toggle> pair in this.channelToggles)
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_13 = __this->___channelToggles_19;
		NullCheck(L_13);
		Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 L_14;
		L_14 = Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5(L_13, Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5_RuntimeMethod_var);
		V_1 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m06019984AEF249BE743B261895FBDFCF3DE314FD((&V_1), Enumerator_Dispose_m06019984AEF249BE743B261895FBDFCF3DE314FD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008e_1;
			}

IL_0067_1:
			{
				// foreach (KeyValuePair<string, Toggle> pair in this.channelToggles)
				KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB L_15;
				L_15 = Enumerator_get_Current_mF6F3ECC910925263DF2A5278F4F56F520C1507A6_inline((&V_1), Enumerator_get_Current_mF6F3ECC910925263DF2A5278F4F56F520C1507A6_RuntimeMethod_var);
				V_2 = L_15;
				// pair.Value.isOn = pair.Key == channelName ? true : false;
				Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_16;
				L_16 = KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_inline((&V_2), KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_RuntimeMethod_var);
				String_t* L_17;
				L_17 = KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_inline((&V_2), KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_RuntimeMethod_var);
				String_t* L_18 = ___channelName0;
				bool L_19;
				L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, L_18, NULL);
				G_B7_0 = L_16;
				if (L_19)
				{
					G_B8_0 = L_16;
					goto IL_0088_1;
				}
			}
			{
				G_B9_0 = 0;
				G_B9_1 = G_B7_0;
				goto IL_0089_1;
			}

IL_0088_1:
			{
				G_B9_0 = 1;
				G_B9_1 = G_B8_0;
			}

IL_0089_1:
			{
				NullCheck(G_B9_1);
				Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(G_B9_1, (bool)G_B9_0, NULL);
			}

IL_008e_1:
			{
				// foreach (KeyValuePair<string, Toggle> pair in this.channelToggles)
				bool L_20;
				L_20 = Enumerator_MoveNext_m950509CD692BEAA25841830AE3528B713C36DAC9((&V_1), Enumerator_MoveNext_m950509CD692BEAA25841830AE3528B713C36DAC9_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00a7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OpenDashboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OpenDashboard_m331E5792848FBF938E160C747A9C5D3848E9A265 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral011D7D9D78DC2A4EA6437F75F6AE9C5B1D038EC5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL("https://dashboard.photonengine.com");
		Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564(_stringLiteral011D7D9D78DC2A4EA6437F75F6AE9C5B1D038EC5, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui__ctor_m9914600AC511E7817210F48145D05D3DBDD56B2C (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m05968164AFC47B4DAC2545E4FAC531C51F66C7FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1951C457B495EAFA02160F793A6277161FDCEA3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<string, Toggle> channelToggles = new Dictionary<string, Toggle>();
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_0 = (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*)il2cpp_codegen_object_new(Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m1951C457B495EAFA02160F793A6277161FDCEA3F(L_0, Dictionary_2__ctor_m1951C457B495EAFA02160F793A6277161FDCEA3F_RuntimeMethod_var);
		__this->___channelToggles_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___channelToggles_19), (void*)L_0);
		// private readonly Dictionary<string,FriendItem> friendListItemLUT =  new Dictionary<string, FriendItem>();
		Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* L_1 = (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E*)il2cpp_codegen_object_new(Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m05968164AFC47B4DAC2545E4FAC531C51F66C7FD(L_1, Dictionary_2__ctor_m05968164AFC47B4DAC2545E4FAC531C51F66C7FD_RuntimeMethod_var);
		__this->___friendListItemLUT_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___friendListItemLUT_20), (void*)L_1);
		// public bool ShowState = true;
		__this->___ShowState_21 = (bool)1;
		// public int TestLength = 2048;
		__this->___TestLength_26 = ((int32_t)2048);
		// private byte[] testBytes = new byte[2048];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		__this->___testBytes_27 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___testBytes_27), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui__cctor_m79B7C86603C6C96C642DF0592078E4F4CA5103E4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C91CEEB5E6ACD712F102DE9EE44CB907B557A17);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string HelpText = "\n    -- HELP --\n" +
		//     "To subscribe to channel(s) (channelnames are case sensitive) :  \n" +
		//         "\t<color=#E07B00>\\subscribe</color> <color=green><list of channelnames></color>\n" +
		//         "\tor\n" +
		//         "\t<color=#E07B00>\\s</color> <color=green><list of channelnames></color>\n" +
		//         "\n" +
		//         "To leave channel(s):\n" +
		//         "\t<color=#E07B00>\\unsubscribe</color> <color=green><list of channelnames></color>\n" +
		//         "\tor\n" +
		//         "\t<color=#E07B00>\\u</color> <color=green><list of channelnames></color>\n" +
		//         "\n" +
		//         "To switch the active channel\n" +
		//         "\t<color=#E07B00>\\join</color> <color=green><channelname></color>\n" +
		//         "\tor\n" +
		//         "\t<color=#E07B00>\\j</color> <color=green><channelname></color>\n" +
		//         "\n" +
		//         "To send a private message: (username are case sensitive)\n" +
		//         "\t\\<color=#E07B00>msg</color> <color=green><username></color> <color=green><message></color>\n" +
		//         "\n" +
		//         "To change status:\n" +
		//         "\t\\<color=#E07B00>state</color> <color=green><stateIndex></color> <color=green><message></color>\n" +
		//         "<color=green>0</color> = Offline " +
		//         "<color=green>1</color> = Invisible " +
		//         "<color=green>2</color> = Online " +
		//         "<color=green>3</color> = Away \n" +
		//         "<color=green>4</color> = Do not disturb " +
		//         "<color=green>5</color> = Looking For Group " +
		//         "<color=green>6</color> = Playing" +
		//         "\n\n" +
		//         "To clear the current chat tab (private chats get closed):\n" +
		//         "\t<color=#E07B00>\\clear</color>";
		((ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_StaticFields*)il2cpp_codegen_static_fields_for(ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var))->___HelpText_25 = _stringLiteral2C91CEEB5E6ACD712F102DE9EE44CB907B557A17;
		Il2CppCodeGenWriteBarrier((void**)(&((ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_StaticFields*)il2cpp_codegen_static_fields_for(ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var))->___HelpText_25), (void*)_stringLiteral2C91CEEB5E6ACD712F102DE9EE44CB907B557A17);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.Demo.FriendItem::set_FriendId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem_set_FriendId_m49FB0C8B978DD2E35361DE3ED6863257B82E4BB2 (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.NameLabel.text = value; }
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___NameLabel_4;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// set { this.NameLabel.text = value; }
		return;
	}
}
// System.String Photon.Chat.Demo.FriendItem::get_FriendId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FriendItem_get_FriendId_mA0037DB139EEC1F38A1B2E31707128111FE5DCD4 (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.NameLabel.text; }
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___NameLabel_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		return L_1;
	}
}
// System.Void Photon.Chat.Demo.FriendItem::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem_Awake_m8BCC676379DCE1B967BC706C9247541A424F3C42 (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Health.text = string.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___Health_6;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.FriendItem::OnFriendStatusUpdate(System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem_OnFriendStatusUpdate_mC336B386CEABD37A2BA65254CFE2C5125263E4CD (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, int32_t ___status0, bool ___gotMessage1, RuntimeObject* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1729AC1B7F3D22492501BEF772B5BFDEBCF05B70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38DB4AF6DBE7A8DBCC3821BE5605A5BB55BCB3D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77F781BE1FA4EBA75ACC2DC942D3D87126A499DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86C677CA2B54E7E4E81E71A6AF30E985B484A0AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F902889DF6EC5CFE211AF8D1697BB12234DA66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF903ABCF81417315694F4593925EE527D6C1258B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB0DA295360002E063FF9B079B5E7DC3DB313083);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	{
		int32_t L_0 = ___status0;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, 1)))
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0032;
			}
			case 3:
			{
				goto IL_003a;
			}
			case 4:
			{
				goto IL_0042;
			}
			case 5:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_0052;
	}

IL_0022:
	{
		// _status = "Invisible";
		V_0 = _stringLiteralE0F902889DF6EC5CFE211AF8D1697BB12234DA66;
		// break;
		goto IL_0058;
	}

IL_002a:
	{
		// _status = "Online";
		V_0 = _stringLiteralF903ABCF81417315694F4593925EE527D6C1258B;
		// break;
		goto IL_0058;
	}

IL_0032:
	{
		// _status = "Away";
		V_0 = _stringLiteral1729AC1B7F3D22492501BEF772B5BFDEBCF05B70;
		// break;
		goto IL_0058;
	}

IL_003a:
	{
		// _status = "Do not disturb";
		V_0 = _stringLiteral86C677CA2B54E7E4E81E71A6AF30E985B484A0AF;
		// break;
		goto IL_0058;
	}

IL_0042:
	{
		// _status = "Looking For Game/Group";
		V_0 = _stringLiteralFB0DA295360002E063FF9B079B5E7DC3DB313083;
		// break;
		goto IL_0058;
	}

IL_004a:
	{
		// _status = "Playing";
		V_0 = _stringLiteral38DB4AF6DBE7A8DBCC3821BE5605A5BB55BCB3D4;
		// break;
		goto IL_0058;
	}

IL_0052:
	{
		// _status = "Offline";
		V_0 = _stringLiteral77F781BE1FA4EBA75ACC2DC942D3D87126A499DB;
	}

IL_0058:
	{
		// this.StatusLabel.text = _status;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___StatusLabel_5;
		String_t* L_2 = V_0;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// if (gotMessage)
		bool L_3 = ___gotMessage1;
		if (!L_3)
		{
			goto IL_009a;
		}
	}
	{
		// string _health = string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_4;
		// if (message != null)
		RuntimeObject* L_5 = ___message2;
		if (!L_5)
		{
			goto IL_008e;
		}
	}
	{
		// string[] _messages = message as string[];
		RuntimeObject* L_6 = ___message2;
		V_2 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)IsInst((RuntimeObject*)L_6, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		// if (_messages != null && _messages.Length >= 2)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_2;
		if (!L_7)
		{
			goto IL_008e;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_2;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) < ((int32_t)2)))
		{
			goto IL_008e;
		}
	}
	{
		// _health = (string)_messages[1] + "%";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10 = 1;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_11, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		V_1 = L_12;
	}

IL_008e:
	{
		// this.Health.text = _health;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___Health_6;
		String_t* L_14 = V_1;
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_14);
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.FriendItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem__ctor_mEF78B22B2415C36B99555074B166E333AAB60EC2 (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Photon.Chat.Demo.IgnoreUiRaycastWhenInactive::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IgnoreUiRaycastWhenInactive_IsRaycastLocationValid_m47CCC76507FA3811C9E41548B12A0E85830F13C9 (IgnoreUiRaycastWhenInactive_t4DD606784A41379E617458D4FF2D041690E7BAEF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___eventCamera1, const RuntimeMethod* method) 
{
	{
		// return this.gameObject.activeInHierarchy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		return L_1;
	}
}
// System.Void Photon.Chat.Demo.IgnoreUiRaycastWhenInactive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreUiRaycastWhenInactive__ctor_m6BFAC886ACA5E3CB2403424B3F1D53BD695F833E (IgnoreUiRaycastWhenInactive_t4DD606784A41379E617458D4FF2D041690E7BAEF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.Demo.NamePickGui::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamePickGui_Start_m10935A8B8CF57FC8505F0178067BA92426555E8B (NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_m8674F5DCCB9AB970A69F1E68C2EC297A51FEE54A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88A4E835FC47194C325AC1B4075B94D15767248A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// this.chatNewComponent = FindObjectOfType<ChatGui>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_0;
		L_0 = Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_m8674F5DCCB9AB970A69F1E68C2EC297A51FEE54A(Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_m8674F5DCCB9AB970A69F1E68C2EC297A51FEE54A_RuntimeMethod_var);
		__this->___chatNewComponent_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chatNewComponent_5), (void*)L_0);
		// string prefsName = PlayerPrefs.GetString(UserNamePlayerPref);
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteral88A4E835FC47194C325AC1B4075B94D15767248A, NULL);
		V_0 = L_1;
		// if (!string.IsNullOrEmpty(prefsName))
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_2, NULL);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		// this.idInput.text = prefsName;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_4 = __this->___idInput_6;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_4, L_5, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.NamePickGui::EndEditOnEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamePickGui_EndEditOnEnter_m12622E58FF59DA84D6523AC12874DA9863199C9A (NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKey(KeyCode.Return) || Input.GetKey(KeyCode.KeypadEnter))
		bool L_0;
		L_0 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)13), NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)271), NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}

IL_0015:
	{
		// this.StartChat();
		NamePickGui_StartChat_m93395F4741F31632667938D7733EB30C48E04750(__this, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.NamePickGui::StartChat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamePickGui_StartChat_m93395F4741F31632667938D7733EB30C48E04750 (NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_m8674F5DCCB9AB970A69F1E68C2EC297A51FEE54A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88A4E835FC47194C325AC1B4075B94D15767248A);
		s_Il2CppMethodInitialized = true;
	}
	ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* V_0 = NULL;
	{
		// ChatGui chatNewComponent = FindObjectOfType<ChatGui>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_0;
		L_0 = Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_m8674F5DCCB9AB970A69F1E68C2EC297A51FEE54A(Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_m8674F5DCCB9AB970A69F1E68C2EC297A51FEE54A_RuntimeMethod_var);
		V_0 = L_0;
		// chatNewComponent.UserName = this.idInput.text.Trim();
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_1 = V_0;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___idInput_6;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_3, NULL);
		NullCheck(L_1);
		ChatGui_set_UserName_m2DEE5CF82BC6DBB2FA568AF956102BE0E125D0A7_inline(L_1, L_4, NULL);
		// chatNewComponent.Connect();
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_5 = V_0;
		NullCheck(L_5);
		ChatGui_Connect_m073A7E59E9008C4D708663A6902A6C19882540E3(L_5, NULL);
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// PlayerPrefs.SetString(UserNamePlayerPref, chatNewComponent.UserName);
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline(L_6, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteral88A4E835FC47194C325AC1B4075B94D15767248A, L_7, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.NamePickGui::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamePickGui__ctor_mFF3AFAF1D13B70F7612ADEC741FCC056B2774EB5 (NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.UtilityScripts.EventSystemSpawner::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemSpawner_OnEnable_mE862EC0D6C69AA07F7D83951631687391609E80B (EventSystemSpawner_t823C33A21E4332F5D407768DB424BBDB0D17C77D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m60F8B739B5BA0140A146BCDB0A2B899A33E22C6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventSystem sceneEventSystem = FindObjectOfType<EventSystem>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m60F8B739B5BA0140A146BCDB0A2B899A33E22C6B(Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m60F8B739B5BA0140A146BCDB0A2B899A33E22C6B_RuntimeMethod_var);
		// if (sceneEventSystem == null)
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// GameObject eventSystem = new GameObject("EventSystem");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F, NULL);
		// eventSystem.AddComponent<EventSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		NullCheck(L_3);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8(L_3, GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var);
		// eventSystem.AddComponent<StandaloneInputModule>();
		NullCheck(L_3);
		StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* L_5;
		L_5 = GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D(L_3, GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.EventSystemSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemSpawner__ctor_mF241B0B2DADE23009B467FDE4D04A33457D02822 (EventSystemSpawner_t823C33A21E4332F5D407768DB424BBDB0D17C77D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.UtilityScripts.OnStartDelete::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartDelete_Start_m9B7CA6E5BF48F098BD682241471AC10B5A7DE583 (OnStartDelete_tAFE941550E5B7D4F434D3BB2D00C0D93610BDC11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.OnStartDelete::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartDelete__ctor_m0680CFA8D0C53535AB1CAF48FB605524BF8BBA75 (OnStartDelete_tAFE941550E5B7D4F434D3BB2D00C0D93610BDC11* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_Awake_m9486D72B1C4AAF16C5E7A54D449DA6A9F7042A20 (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _text = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->____text_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____text_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnEnable_mDF3ACAD5152C4158E63C0CB55434E0B8F58C64DB (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, const RuntimeMethod* method) 
{
	{
		// _text.color = NormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___NormalColor_6;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnDisable_m6030F868A53F2ACA849BCFF3194B856D0EEED602 (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, const RuntimeMethod* method) 
{
	{
		// _text.color = NormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___NormalColor_6;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnPointerEnter_m060ADDFAB4FE7E2ADDA013C785097C30E32D2940 (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Selectable == null || Selectable.IsInteractable()) {
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_0 = __this->___Selectable_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_2 = __this->___Selectable_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(24 /* System.Boolean UnityEngine.UI.Selectable::IsInteractable() */, L_2);
		if (!L_3)
		{
			goto IL_002c;
		}
	}

IL_001b:
	{
		// _text.color = HoverColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->____text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___HoverColor_7;
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnPointerExit_mC89333A759DCAEF054B364A0CF05AAAF73A1E06C (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Selectable == null || Selectable.IsInteractable()) {
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_0 = __this->___Selectable_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_2 = __this->___Selectable_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(24 /* System.Boolean UnityEngine.UI.Selectable::IsInteractable() */, L_2);
		if (!L_3)
		{
			goto IL_002c;
		}
	}

IL_001b:
	{
		// _text.color = NormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->____text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___NormalColor_6;
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition__ctor_m1AC221F8BF501F4B4912898B5D5A1EAD0D2B40E9 (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, const RuntimeMethod* method) 
{
	{
		// public Color NormalColor= Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___NormalColor_6 = L_0;
		// public Color HoverColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___HoverColor_7 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnEnable_mEB5D1BAE23AB550072188EE81FBF5E0CB1FA003C (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _text = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->____text_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____text_5), (void*)L_0);
		// OnValueChanged (toggle.isOn);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___toggle_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_1, NULL);
		TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA(__this, L_2, NULL);
		// toggle.onValueChanged.AddListener(OnValueChanged);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3 = __this->___toggle_4;
		NullCheck(L_3);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_4 = L_3->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_5 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_5, __this, (intptr_t)((void*)TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_4, L_5, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnDisable_m017F8825457A0A4400681B78CE1D1DF62999662D (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// toggle.onValueChanged.RemoveListener(OnValueChanged);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle_4;
		NullCheck(L_0);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_1 = L_0->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_2 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_2, __this, (intptr_t)((void*)TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130(L_1, L_2, UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnValueChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, bool ___isOn0, const RuntimeMethod* method) 
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B4_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B7_1 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B6_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_0 = NULL;
	{
		// _text.color = isOn? (isHover?HoverOnColor:HoverOnColor) : (isHover?NormalOffColor:NormalOffColor) ;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_5;
		bool L_1 = ___isOn0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B4_0 = L_0;
			goto IL_0021;
		}
	}
	{
		bool L_2 = __this->___isHover_10;
		G_B2_0 = G_B1_0;
		if (L_2)
		{
			G_B3_0 = G_B1_0;
			goto IL_0019;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___NormalOffColor_7;
		G_B7_0 = L_3;
		G_B7_1 = G_B2_0;
		goto IL_0037;
	}

IL_0019:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___NormalOffColor_7;
		G_B7_0 = L_4;
		G_B7_1 = G_B3_0;
		goto IL_0037;
	}

IL_0021:
	{
		bool L_5 = __this->___isHover_10;
		G_B5_0 = G_B4_0;
		if (L_5)
		{
			G_B6_0 = G_B4_0;
			goto IL_0031;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___HoverOnColor_8;
		G_B7_0 = L_6;
		G_B7_1 = G_B5_0;
		goto IL_0037;
	}

IL_0031:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->___HoverOnColor_8;
		G_B7_0 = L_7;
		G_B7_1 = G_B6_0;
	}

IL_0037:
	{
		NullCheck(G_B7_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B7_1, G_B7_0);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnPointerEnter_m94378570919CDF3B8C15622F21D0B0B7FD7956B1 (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// isHover = true;
		__this->___isHover_10 = (bool)1;
		// _text.color = toggle.isOn?HoverOnColor:HoverOffColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_5;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___toggle_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_1, NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0022;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___HoverOffColor_9;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0022:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___HoverOnColor_8;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnPointerExit_m4BB2859E42DE14373D78A2217D72EB17B3FB9D28 (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// isHover = false;
		__this->___isHover_10 = (bool)0;
		// _text.color = toggle.isOn?NormalOnColor:NormalOffColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_5;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___toggle_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_1, NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0022;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___NormalOffColor_7;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0022:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___NormalOnColor_6;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition__ctor_m31BCC4091B72C664D8E1B13777EF1D56DFAC5CDA (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, const RuntimeMethod* method) 
{
	{
		// public Color NormalOnColor= Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___NormalOnColor_6 = L_0;
		// public Color NormalOffColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___NormalOffColor_7 = L_1;
		// public Color HoverOnColor= Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___HoverOnColor_8 = L_2;
		// public Color HoverOffColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___HoverOffColor_9 = L_3;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0 = ___value0;
		__this->___axisOptions_6 = L_0;
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = ___value0;
		__this->___snapX_7 = L_0;
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = ___value0;
		__this->___snapY_8 = L_0;
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_mB1CA903ACF933DB0BE2016D105BB2B4702CF1004_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)(L_1/L_3)), ((float)(L_5/L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_m9668B13074D1664DD192669C14B3A8FC01676299_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___from0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___to1;
		float L_7;
		L_7 = Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Room_get_MaxPlayers_m366A4F5F9AE034C75EE5D68F0D42BD5D44FF92D4_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	{
		// return this.maxPlayers;
		uint8_t L_0 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___maxPlayers_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648_inline (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsMine { get; private set; }
		bool L_0 = __this->___U3CIsMineU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* TMP_InputField_get_onEndEdit_m0CE9718C71A834CC279430E20DC7FF4F42114FD3_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// public SubmitEvent onEndEdit { get { return m_OnEndEdit; } set { SetPropertyUtility.SetClass(ref m_OnEndEdit, value); } }
		SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* L_0 = __this->___m_OnEndEdit_48;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_60;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectionHandler_set_Client_m3ABCA8BEB50CC58254153280CE8F60154D42E29B_inline (ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* __this, LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___value0, const RuntimeMethod* method) 
{
	{
		// public LoadBalancingClient Client { get; set; }
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = ___value0;
		__this->___U3CClientU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_State_m8553D8C2483058BD64DDED8EC2648AE77836D12C_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// return this.state;
		int32_t L_0 = __this->___state_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) 
{
	{
		// public string Code { get; private set; }
		String_t* L_0 = __this->___U3CCodeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	{
		// public string UserName { get; set; }
		String_t* L_0 = __this->___U3CUserNameU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatGui_set_UserName_m2DEE5CF82BC6DBB2FA568AF956102BE0E125D0A7_inline (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string UserName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CUserNameU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserNameU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_UseBackgroundWorkerForSending_m6B0CF62C2EBF74CB62FFB1557DC30969292B7596_inline (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool UseBackgroundWorkerForSending { get; set; }
		bool L_0 = ___value0;
		__this->___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_mAAD43D4212103C80D1377FA04B33815397E28937_inline (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* ___value0, const RuntimeMethod* method) 
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* L_0 = ___value0;
		__this->___U3CAuthValuesU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthValuesU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* ChatClient_get_AuthValues_mC9F4405E66924D1BA21DEDE10848199C24915476_inline (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, const RuntimeMethod* method) 
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* L_0 = __this->___U3CAuthValuesU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m61CDE1031F42330B0EDC0EC489A75E46E1DB6B79_inline (AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* __this, const RuntimeMethod* method) 
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = __this->___U3CUserIdU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
