#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// CameraMover
struct CameraMover_t2845631541;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Transform
struct Transform_t3600365921;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t4286651560;
// Conveyor
struct Conveyor_t2171737337;
// Machine
struct Machine_t4122409742;
// MachineUI
struct MachineUI_t252077060;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// GridThing
struct GridThing_t3152339074;
// Crate
struct Crate_t3334083239;
// UnityEngine.Object
struct Object_t631007953;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Collections.Generic.List`1<Crate>
struct List_1_t511190685;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// CrateGroup
struct CrateGroup_t1115957032;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t3628304265;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// Crate/<CheckPusherArms>c__AnonStorey2
struct U3CCheckPusherArmsU3Ec__AnonStorey2_t340666492;
// System.Action`1<Machine>
struct Action_1_t4294877337;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// Crate/<AnimateMove>c__Iterator0
struct U3CAnimateMoveU3Ec__Iterator0_t1583435394;
// Crate/<AnimateRotation>c__Iterator1
struct U3CAnimateRotationU3Ec__Iterator1_t2176702074;
// StairMaster
struct StairMaster_t3581666356;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t899420910;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// System.Collections.Generic.IEnumerable`1<Crate>
struct IEnumerable_1_t2313936128;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// Crates
struct Crates_t3341619879;
// GridOf`1<Crate>
struct GridOf_1_t2910844907;
// GridOf`1<System.Object>
struct GridOf_1_t2656867832;
// System.Collections.Generic.List`1<CrateGroup>
struct List_1_t2588031774;
// Crates/<Groups>c__AnonStorey0
struct U3CGroupsU3Ec__AnonStorey0_t4083570762;
// System.Action`1<Crate>
struct Action_1_t3506550834;
// System.Action`1<CrateGroup>
struct Action_1_t1288424627;
// DropZone
struct DropZone_t3709174205;
// DropZoneGroup
struct DropZoneGroup_t2340995414;
// System.Collections.Generic.List`1<DropZone>
struct List_1_t886281651;
// System.Collections.Generic.IEnumerable`1<DropZone>
struct IEnumerable_1_t2689027094;
// GameManager
struct GameManager_t1536523654;
// Tap
struct Tap_t1232705552;
// Generator
struct Generator_t2248380420;
// Machines
struct Machines_t3020028686;
// GridOf`1<Machine>
struct GridOf_1_t3699171410;
// MachineUI/<SetupButton>c__AnonStorey0
struct U3CSetupButtonU3Ec__AnonStorey0_t1115115811;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t48803504;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2581268647;
// Paint
struct Paint_t1033728073;
// Painter
struct Painter_t2372114961;
// Pusher
struct Pusher_t3016537238;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.Collections.Generic.List`1<Sensor>
struct List_1_t3217410706;
// Sensor
struct Sensor_t1745335964;
// WireGroup
struct WireGroup_t228895900;
// System.Collections.Generic.IEnumerable`1<Sensor>
struct IEnumerable_1_t725188853;
// Rotator
struct Rotator_t2029754672;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>
struct IEnumerable_1_t1136082412;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct List_1_t805411711;
// System.Double[]
struct DoubleU5BU5D_t3413330114;
// RunUI
struct RunUI_t3214653273;
// UnityEngine.UI.Text
struct Text_t1901882714;
// SelectUI
struct SelectUI_t1349636119;
// Wire
struct Wire_t1115128131;
// System.Collections.Generic.List`1<Generator>
struct List_1_t3720455162;
// StairMaster/<GetGenerators>c__AnonStorey0
struct U3CGetGeneratorsU3Ec__AnonStorey0_t1713985753;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UI
struct UI_t167124789;
// Wall
struct Wall_t2206666577;
// Welder
struct Welder_t3775122660;
// System.Collections.Generic.List`1<Wire>
struct List_1_t2587202873;
// System.Collections.Generic.IEnumerable`1<Wire>
struct IEnumerable_1_t94981020;
// CrateGroup[]
struct CrateGroupU5BU5D_t618975033;
// Sensor[]
struct SensorU5BU5D_t1149235061;
// System.Collections.Generic.List`1<UnityEngine.Vector2>[]
struct List_1U5BU5D_t357803060;
// Generator[]
struct GeneratorU5BU5D_t4195793773;
// Machine[,]
struct MachineU5BU2CU5D_t2987630844;
// Crate[]
struct CrateU5BU5D_t1007788766;
// DropZone[]
struct DropZoneU5BU5D_t470914736;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// System.Char[]
struct CharU5BU5D_t3528271667;
// Crate[,]
struct CrateU5BU2CU5D_t1007788767;
// Wire[]
struct WireU5BU5D_t192281170;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t3491343620;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t2019268878;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t2475741330;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3903027533;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t3135238028;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern const RuntimeMethod* Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var;
extern const RuntimeMethod* GridOf_1_Width_m179343242_RuntimeMethod_var;
extern const RuntimeMethod* GridOf_1_Height_m3407359771_RuntimeMethod_var;
extern const uint32_t CameraMover_Start_m2355516190_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t CameraMover_RecordDragStart_m4021900204_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4135548174;
extern String_t* _stringLiteral2956504559;
extern const uint32_t CameraMover_Move_m1495737743_MetadataUsageId;
extern const uint32_t CameraMover_SnapToBoundaries_m3844210631_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Physics2D_t1528932956_il2cpp_TypeInfo_var;
extern const uint32_t CameraMover_GameObjectsUnderTap_m159032426_MetadataUsageId;
extern const uint32_t CameraMover_MouseWorldPosition_m1675890510_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GridOf_1_At_m3659202116_RuntimeMethod_var;
extern const uint32_t Conveyor_OnStepStart_m3824368036_MetadataUsageId;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern const uint32_t Crate__ctor_m2112968563_MetadataUsageId;
extern RuntimeClass* BooleanU5BU5D_t2897418192_il2cpp_TypeInfo_var;
extern const uint32_t Crate_WorldPainted_m579725209_MetadataUsageId;
extern const uint32_t Crate_GetSideIntFromVector_m175488776_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4130575780_RuntimeMethod_var;
extern const uint32_t Crate_PaintCrateOnCrateSide_m3420533723_MetadataUsageId;
extern const RuntimeMethod* GridOf_1_InBounds_m3234954020_RuntimeMethod_var;
extern const RuntimeMethod* GridOf_1_At_m3872141981_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m2773044595_RuntimeMethod_var;
extern const uint32_t Crate_CanMove_m3784799477_MetadataUsageId;
extern RuntimeClass* Rotator_t2029754672_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_GetEnumerator_m809843680_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2598000980_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4079852040_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2367629053_RuntimeMethod_var;
extern const uint32_t Crate_CanRotate_m4019342585_MetadataUsageId;
extern const RuntimeMethod* GridOf_1_Remove_m3068458711_RuntimeMethod_var;
extern const RuntimeMethod* GridOf_1_Add_m1381055868_RuntimeMethod_var;
extern const uint32_t Crate_Rotate_m1528817573_MetadataUsageId;
extern RuntimeClass* U3CCheckPusherArmsU3Ec__AnonStorey2_t340666492_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t4294877337_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CCheckPusherArmsU3Ec__AnonStorey2_U3CU3Em__0_m3803264653_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m3536267445_RuntimeMethod_var;
extern const RuntimeMethod* GridOf_1_ForEach_m659143872_RuntimeMethod_var;
extern const uint32_t Crate_CheckPusherArms_m2800673058_MetadataUsageId;
extern const uint32_t Crate_Move_m4290318053_MetadataUsageId;
extern const uint32_t Crate_FallOffGrid_m1872323598_MetadataUsageId;
extern RuntimeClass* U3CAnimateMoveU3Ec__Iterator0_t1583435394_il2cpp_TypeInfo_var;
extern const uint32_t Crate_AnimateMove_m3374185797_MetadataUsageId;
extern RuntimeClass* U3CAnimateRotationU3Ec__Iterator1_t2176702074_il2cpp_TypeInfo_var;
extern const uint32_t Crate_AnimateRotation_m345258124_MetadataUsageId;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern const uint32_t U3CAnimateMoveU3Ec__Iterator0_MoveNext_m794432184_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const uint32_t U3CAnimateMoveU3Ec__Iterator0_Reset_m3162567155_MetadataUsageId;
extern const uint32_t U3CAnimateRotationU3Ec__Iterator1_MoveNext_m1246994048_MetadataUsageId;
extern const uint32_t U3CAnimateRotationU3Ec__Iterator1_Reset_m442515703_MetadataUsageId;
extern RuntimeClass* Pusher_t3016537238_il2cpp_TypeInfo_var;
extern const uint32_t U3CCheckPusherArmsU3Ec__AnonStorey2_U3CU3Em__0_m3803264653_MetadataUsageId;
extern RuntimeClass* List_1_t899420910_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t511190685_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1536473967_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2191809278_RuntimeMethod_var;
extern const uint32_t CrateGroup__ctor_m374315206_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m576380744_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m200663048_RuntimeMethod_var;
extern const uint32_t CrateGroup_ApplyForces_m3042020236_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m2890427122_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m636774770_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1672660585_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1904545155_RuntimeMethod_var;
extern const uint32_t CrateGroup_CanRotate_m2768719090_MetadataUsageId;
extern const uint32_t CrateGroup_Rotate_m3334215566_MetadataUsageId;
extern const uint32_t CrateGroup_TryMoveFromForce_m499060411_MetadataUsageId;
extern const uint32_t CrateGroup_CanMove_m1914781014_MetadataUsageId;
extern const uint32_t CrateGroup_Move_m3386982613_MetadataUsageId;
extern RuntimeClass* Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var;
extern const uint32_t CrateGroup_DirectionsFromVectorForce_m3105363727_MetadataUsageId;
extern const RuntimeMethod* List_1_Clear_m3097985365_RuntimeMethod_var;
extern const uint32_t CrateGroup_OnStepStart_m2709797750_MetadataUsageId;
extern const RuntimeMethod* List_1_AddRange_m3878005525_RuntimeMethod_var;
extern const uint32_t CrateGroup_Merge_m1723941264_MetadataUsageId;
extern String_t* _stringLiteral2811477127;
extern String_t* _stringLiteral3849618341;
extern String_t* _stringLiteral2499083471;
extern String_t* _stringLiteral176628444;
extern const uint32_t CrateGroup_LogForces_m2699463212_MetadataUsageId;
extern const RuntimeMethod* GridOf_1__ctor_m1795928600_RuntimeMethod_var;
extern const uint32_t Crates__ctor_m4164780719_MetadataUsageId;
extern RuntimeClass* U3CGroupsU3Ec__AnonStorey0_t4083570762_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2588031774_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3506550834_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m976941798_RuntimeMethod_var;
extern const RuntimeMethod* U3CGroupsU3Ec__AnonStorey0_U3CU3Em__0_m511532314_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m3887988901_RuntimeMethod_var;
extern const RuntimeMethod* GridOf_1_ForEach_m2734291113_RuntimeMethod_var;
extern const uint32_t Crates_Groups_m1691412986_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m141122379_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3351093824_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m4049214814_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1755727745_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m705539179_RuntimeMethod_var;
extern const uint32_t Crates_ForEachGroup_m2669004922_MetadataUsageId;
extern const RuntimeMethod* List_1_Contains_m1771383488_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m205543450_RuntimeMethod_var;
extern const uint32_t U3CGroupsU3Ec__AnonStorey0_U3CU3Em__0_m511532314_MetadataUsageId;
extern const uint32_t DropZone__ctor_m962380907_MetadataUsageId;
extern RuntimeClass* DropZoneGroup_t2340995414_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_Add_m2906265207_RuntimeMethod_var;
extern const uint32_t DropZone_Start_m2646663775_MetadataUsageId;
extern const uint32_t DropZone_PaintZone_m1983948669_MetadataUsageId;
extern RuntimeClass* DropZone_t3709174205_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GridOf_1_InBounds_m3069315835_RuntimeMethod_var;
extern const uint32_t DropZone_Connect_m2826822892_MetadataUsageId;
extern const uint32_t DropZone__cctor_m1798572158_MetadataUsageId;
extern RuntimeClass* List_1_t886281651_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3032259779_RuntimeMethod_var;
extern const uint32_t DropZoneGroup__ctor_m3659004622_MetadataUsageId;
extern const RuntimeMethod* List_1_AddRange_m1842284837_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3829137046_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1621422558_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2372141819_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3659853165_RuntimeMethod_var;
extern const uint32_t DropZoneGroup_Merge_m3985976498_MetadataUsageId;
extern String_t* _stringLiteral42345049;
extern const uint32_t DropZoneGroup_Buzz_m3268081106_MetadataUsageId;
extern RuntimeClass* GameManager_t1536523654_il2cpp_TypeInfo_var;
extern const uint32_t GameManager_get_StairMaster_m618266316_MetadataUsageId;
extern const uint32_t GameManager_get_Tap_m2968961825_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisStairMaster_t3581666356_m286112584_RuntimeMethod_var;
extern const RuntimeMethod* GridOf_1_Init_m343331089_RuntimeMethod_var;
extern const RuntimeMethod* GridOf_1_Init_m752518202_RuntimeMethod_var;
extern const uint32_t GameManager_Awake_m2466247815_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* CrateGroup_t1115957032_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisCrate_t3334083239_m2831429645_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m108745738_RuntimeMethod_var;
extern const uint32_t Generator_MakeCrate_m191444529_MetadataUsageId;
extern const uint32_t Generator_DestroyUnmovedCrate_m3629071203_MetadataUsageId;
extern const RuntimeMethod* GridOf_1_Add_m641575355_RuntimeMethod_var;
extern const uint32_t Machine_Start_m764592851_MetadataUsageId;
extern const RuntimeMethod* GridOf_1_Remove_m3477036051_RuntimeMethod_var;
extern const uint32_t Machine_Delete_m3808337440_MetadataUsageId;
extern const RuntimeMethod* GridOf_1__ctor_m2376768582_RuntimeMethod_var;
extern const uint32_t Machines__ctor_m92552663_MetadataUsageId;
extern RuntimeClass* GameObjectU5BU5D_t3328599146_il2cpp_TypeInfo_var;
extern const uint32_t MachineUI_Start_m2600148524_MetadataUsageId;
extern RuntimeClass* U3CSetupButtonU3Ec__AnonStorey0_t1115115811_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_t3245792599_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var;
extern const RuntimeMethod* U3CSetupButtonU3Ec__AnonStorey0_U3CU3Em__0_m2368594731_RuntimeMethod_var;
extern const uint32_t MachineUI_SetupButton_m3209500000_MetadataUsageId;
extern const uint32_t Painter_Paint_m1577536615_MetadataUsageId;
extern RuntimeClass* Painter_t2372114961_il2cpp_TypeInfo_var;
extern const uint32_t Painter__cctor_m662125785_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593_RuntimeMethod_var;
extern const uint32_t Pusher_Start_m1979371091_MetadataUsageId;
extern const uint32_t Pusher_OnStepStart_m2943932459_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m217734469_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3155876505_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3205074374_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m785474812_RuntimeMethod_var;
extern const uint32_t Pusher_AnySensorActivated_m2062834046_MetadataUsageId;
extern RuntimeClass* List_1_t3217410706_il2cpp_TypeInfo_var;
extern RuntimeClass* Wire_t1115128131_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m63149084_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m2510231272_RuntimeMethod_var;
extern const uint32_t Pusher_GetSensors_m2451983428_MetadataUsageId;
extern const uint32_t Pusher__cctor_m1998471936_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m1524640104_RuntimeMethod_var;
extern const uint32_t Rotator_OnStepStart_m618984106_MetadataUsageId;
extern const uint32_t Rotator_GetSquaresToCheck_m3524065233_MetadataUsageId;
extern RuntimeClass* List_1_t3628304265_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_IndexOf_m698163972_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1536470898_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetRange_m390786444_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1202123918_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m705206751_RuntimeMethod_var;
extern const uint32_t Rotator_InclusiveSlice_m336522371_MetadataUsageId;
extern const uint32_t Rotator_RotateVector_m3711280816_MetadataUsageId;
extern RuntimeClass* List_1_t805411711_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3876179742_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2934800696_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3902301990_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2298161512_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Reverse_m3814808058_RuntimeMethod_var;
extern const uint32_t Rotator_MidpointCenterAlgorithm_m4218409032_MetadataUsageId;
extern RuntimeClass* DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5B0___U2C0___U5D_t385246373_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255366____U24fieldU2D789A03B883709A48092EAA34B7D094B9AC0EC2DF_0_FieldInfo_var;
extern const uint32_t Rotator_Quadrent_m2459454899_MetadataUsageId;
extern const uint32_t Rotator_MakeCircle_m2396613248_MetadataUsageId;
extern const uint32_t Rotator__cctor_m2055196742_MetadataUsageId;
extern const RuntimeMethod* RunUI_U3CStartU3Em__0_m3037021528_RuntimeMethod_var;
extern const RuntimeMethod* RunUI_U3CStartU3Em__1_m3037087064_RuntimeMethod_var;
extern const RuntimeMethod* RunUI_U3CStartU3Em__2_m3037152600_RuntimeMethod_var;
extern const RuntimeMethod* RunUI_U3CStartU3Em__3_m3037218136_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var;
extern const uint32_t RunUI_Start_m2306852156_MetadataUsageId;
extern const uint32_t RunUI_SetupButton_m982209168_MetadataUsageId;
extern String_t* _stringLiteral1953642114;
extern const uint32_t RunUI_Play_m892847452_MetadataUsageId;
extern String_t* _stringLiteral3446402837;
extern const uint32_t RunUI_Pause_m212226886_MetadataUsageId;
extern RuntimeClass* RunUI_t3214653273_il2cpp_TypeInfo_var;
extern const RuntimeMethod* RunUI_U3CResetU3Em__4_m2806862794_RuntimeMethod_var;
extern const RuntimeMethod* GridOf_1_RemoveAll_m1714554047_RuntimeMethod_var;
extern const uint32_t RunUI_Reset_m223038848_MetadataUsageId;
extern const RuntimeMethod* RunUI_U3CClearU3Em__5_m477827032_RuntimeMethod_var;
extern const uint32_t RunUI_Clear_m512761987_MetadataUsageId;
extern const uint32_t RunUI_U3CResetU3Em__4_m2806862794_MetadataUsageId;
extern const uint32_t RunUI_U3CClearU3Em__5_m477827032_MetadataUsageId;
extern const RuntimeMethod* SelectUI_U3CStartU3Em__0_m4073274552_RuntimeMethod_var;
extern const RuntimeMethod* SelectUI_U3CStartU3Em__1_m4073274553_RuntimeMethod_var;
extern const RuntimeMethod* SelectUI_U3CStartU3Em__2_m4073274550_RuntimeMethod_var;
extern const uint32_t SelectUI_Start_m3194522008_MetadataUsageId;
extern const uint32_t SelectUI_SetupButton_m3578307291_MetadataUsageId;
extern const uint32_t SelectUI_Select_m973328249_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisMachine_t4122409742_m396407119_RuntimeMethod_var;
extern const uint32_t SelectUI_Turn_m2502060509_MetadataUsageId;
extern const uint32_t SelectUI_Delete_m4055503885_MetadataUsageId;
extern const uint32_t Sensor__ctor_m1042152069_MetadataUsageId;
extern const RuntimeMethod* GridOf_1_ElementAt_m3269700101_RuntimeMethod_var;
extern const uint32_t Sensor_Activated_m2355377676_MetadataUsageId;
extern RuntimeClass* List_1_t3720455162_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3942288599_RuntimeMethod_var;
extern const uint32_t StairMaster__ctor_m1362067779_MetadataUsageId;
extern RuntimeClass* StairMaster_t3581666356_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t1288424627_il2cpp_TypeInfo_var;
extern const RuntimeMethod* StairMaster_U3COnStepStartU3Em__0_m698338935_RuntimeMethod_var;
extern const RuntimeMethod* StairMaster_U3COnStepStartU3Em__1_m252000574_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m305965143_RuntimeMethod_var;
extern const RuntimeMethod* StairMaster_U3COnStepStartU3Em__2_m1955564271_RuntimeMethod_var;
extern const uint32_t StairMaster_OnStepStart_m3732032887_MetadataUsageId;
extern const RuntimeMethod* StairMaster_U3CApplyForcesU3Em__3_m2682308455_RuntimeMethod_var;
extern const uint32_t StairMaster_ApplyForces_m923564638_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m828876251_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2888408249_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2974675826_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3668585393_RuntimeMethod_var;
extern const uint32_t StairMaster_StepGenerators_m2782568791_MetadataUsageId;
extern RuntimeClass* U3CGetGeneratorsU3Ec__AnonStorey0_t1713985753_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CGetGeneratorsU3Ec__AnonStorey0_U3CU3Em__0_m2910384112_RuntimeMethod_var;
extern const uint32_t StairMaster_GetGenerators_m4205969117_MetadataUsageId;
extern RuntimeClass* Generator_t2248380420_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_Add_m3805783809_RuntimeMethod_var;
extern const uint32_t U3CGetGeneratorsU3Ec__AnonStorey0_U3CU3Em__0_m2910384112_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisCameraMover_t2845631541_m3015587433_RuntimeMethod_var;
extern const uint32_t Tap_Start_m2868098987_MetadataUsageId;
extern String_t* _stringLiteral344811725;
extern const uint32_t Tap_Update_m2433900001_MetadataUsageId;
extern const RuntimeMethod* GridOf_1_ElementAt_m1892461303_RuntimeMethod_var;
extern const uint32_t Tap_CanPlaceMachine_m1846831374_MetadataUsageId;
extern const uint32_t Tap_PlaceMachine_m1732139582_MetadataUsageId;
extern const uint32_t Tap_CanSelectMachine_m1727297178_MetadataUsageId;
extern const uint32_t Tap_SelectMachine_m1748397180_MetadataUsageId;
extern String_t* _stringLiteral3457267691;
extern const uint32_t Tap_IsPointerOverUI_m4063516749_MetadataUsageId;
extern RuntimeClass* EventSystem_t1003666588_il2cpp_TypeInfo_var;
extern const uint32_t Tap_IsPointerOverTag_m56860595_MetadataUsageId;
extern const uint32_t Tap_MouseWorldPosition_m3981404498_MetadataUsageId;
extern RuntimeClass* UI_t167124789_il2cpp_TypeInfo_var;
extern const uint32_t UI_get_RunControls_m444179742_MetadataUsageId;
extern const uint32_t UI_get_Machines_m4279099061_MetadataUsageId;
extern const uint32_t UI_get_Select_m3339981865_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisRunUI_t3214653273_m237926909_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisMachineUI_t252077060_m4251883980_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisSelectUI_t1349636119_m1154063999_RuntimeMethod_var;
extern const uint32_t UI_Awake_m3990333464_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m4199684629_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m482029729_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m470654483_RuntimeMethod_var;
extern const uint32_t Welder_Weld_m33740497_MetadataUsageId;
extern RuntimeClass* Welder_t3775122660_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_Contains_m1070748127_RuntimeMethod_var;
extern const uint32_t Welder_GetWeldGroups_m335897980_MetadataUsageId;
extern const RuntimeMethod* Welder_U3CGetWeldSquaresU3Em__0_m319006993_RuntimeMethod_var;
extern const uint32_t Welder_GetWeldSquares_m1391546050_MetadataUsageId;
extern const uint32_t Welder__cctor_m3643777369_MetadataUsageId;
extern const uint32_t Welder_U3CGetWeldSquaresU3Em__0_m319006993_MetadataUsageId;
extern RuntimeClass* WireGroup_t228895900_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_Add_m860147963_RuntimeMethod_var;
extern const uint32_t Wire_Start_m2850373620_MetadataUsageId;
extern const uint32_t Wire_Connect_m1657954004_MetadataUsageId;
extern const uint32_t Wire__cctor_m1118857705_MetadataUsageId;
extern RuntimeClass* List_1_t2587202873_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1638165137_RuntimeMethod_var;
extern const uint32_t WireGroup__ctor_m2268275209_MetadataUsageId;
extern RuntimeClass* Sensor_t1745335964_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_GetEnumerator_m860095735_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1765168993_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m815867368_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2871313586_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2152453677_RuntimeMethod_var;
extern const uint32_t WireGroup_Sensors_m2731798325_MetadataUsageId;
extern const RuntimeMethod* List_1_AddRange_m1519339901_RuntimeMethod_var;
extern const uint32_t WireGroup_Merge_m3655234051_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;
struct RaycastHit2DU5BU5D_t4286651560;
struct Int32U5BU5D_t385246372;
struct BooleanU5BU5D_t2897418192;
struct Vector2U5BU5D_t1457185986;
struct GameObjectU5BU5D_t3328599146;
struct DoubleU5BU5D_t3413330114;
struct Int32U5B0___U2C0___U5D_t385246373;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CMODULEU3E_T692745546_H
#define U3CMODULEU3E_T692745546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745546 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745546_H
#ifndef LIST_1_T2588031774_H
#define LIST_1_T2588031774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<CrateGroup>
struct  List_1_t2588031774  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CrateGroupU5BU5D_t618975033* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2588031774, ____items_1)); }
	inline CrateGroupU5BU5D_t618975033* get__items_1() const { return ____items_1; }
	inline CrateGroupU5BU5D_t618975033** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CrateGroupU5BU5D_t618975033* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2588031774, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2588031774, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2588031774_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	CrateGroupU5BU5D_t618975033* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2588031774_StaticFields, ___EmptyArray_4)); }
	inline CrateGroupU5BU5D_t618975033* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline CrateGroupU5BU5D_t618975033** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(CrateGroupU5BU5D_t618975033* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2588031774_H
#ifndef LIST_1_T3217410706_H
#define LIST_1_T3217410706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Sensor>
struct  List_1_t3217410706  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SensorU5BU5D_t1149235061* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3217410706, ____items_1)); }
	inline SensorU5BU5D_t1149235061* get__items_1() const { return ____items_1; }
	inline SensorU5BU5D_t1149235061** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SensorU5BU5D_t1149235061* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3217410706, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3217410706, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3217410706_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	SensorU5BU5D_t1149235061* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3217410706_StaticFields, ___EmptyArray_4)); }
	inline SensorU5BU5D_t1149235061* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline SensorU5BU5D_t1149235061** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(SensorU5BU5D_t1149235061* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3217410706_H
#ifndef WIREGROUP_T228895900_H
#define WIREGROUP_T228895900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WireGroup
struct  WireGroup_t228895900  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Wire> WireGroup::wires
	List_1_t2587202873 * ___wires_0;

public:
	inline static int32_t get_offset_of_wires_0() { return static_cast<int32_t>(offsetof(WireGroup_t228895900, ___wires_0)); }
	inline List_1_t2587202873 * get_wires_0() const { return ___wires_0; }
	inline List_1_t2587202873 ** get_address_of_wires_0() { return &___wires_0; }
	inline void set_wires_0(List_1_t2587202873 * value)
	{
		___wires_0 = value;
		Il2CppCodeGenWriteBarrier((&___wires_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIREGROUP_T228895900_H
#ifndef LIST_1_T805411711_H
#define LIST_1_T805411711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  List_1_t805411711  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t357803060* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t805411711, ____items_1)); }
	inline List_1U5BU5D_t357803060* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_t357803060** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_t357803060* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t805411711, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t805411711, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t805411711_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	List_1U5BU5D_t357803060* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t805411711_StaticFields, ___EmptyArray_4)); }
	inline List_1U5BU5D_t357803060* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline List_1U5BU5D_t357803060** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(List_1U5BU5D_t357803060* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T805411711_H
#ifndef LIST_1_T3720455162_H
#define LIST_1_T3720455162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Generator>
struct  List_1_t3720455162  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GeneratorU5BU5D_t4195793773* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3720455162, ____items_1)); }
	inline GeneratorU5BU5D_t4195793773* get__items_1() const { return ____items_1; }
	inline GeneratorU5BU5D_t4195793773** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GeneratorU5BU5D_t4195793773* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3720455162, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3720455162, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3720455162_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GeneratorU5BU5D_t4195793773* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3720455162_StaticFields, ___EmptyArray_4)); }
	inline GeneratorU5BU5D_t4195793773* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GeneratorU5BU5D_t4195793773** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GeneratorU5BU5D_t4195793773* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3720455162_H
#ifndef U3CGROUPSU3EC__ANONSTOREY0_T4083570762_H
#define U3CGROUPSU3EC__ANONSTOREY0_T4083570762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Crates/<Groups>c__AnonStorey0
struct  U3CGroupsU3Ec__AnonStorey0_t4083570762  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<CrateGroup> Crates/<Groups>c__AnonStorey0::groups
	List_1_t2588031774 * ___groups_0;

public:
	inline static int32_t get_offset_of_groups_0() { return static_cast<int32_t>(offsetof(U3CGroupsU3Ec__AnonStorey0_t4083570762, ___groups_0)); }
	inline List_1_t2588031774 * get_groups_0() const { return ___groups_0; }
	inline List_1_t2588031774 ** get_address_of_groups_0() { return &___groups_0; }
	inline void set_groups_0(List_1_t2588031774 * value)
	{
		___groups_0 = value;
		Il2CppCodeGenWriteBarrier((&___groups_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGROUPSU3EC__ANONSTOREY0_T4083570762_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef GRIDOF_1_T3699171410_H
#define GRIDOF_1_T3699171410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GridOf`1<Machine>
struct  GridOf_1_t3699171410  : public RuntimeObject
{
public:
	// System.Int32 GridOf`1::width
	int32_t ___width_1;
	// System.Int32 GridOf`1::height
	int32_t ___height_2;
	// T[0...,0...] GridOf`1::ts
	MachineU5BU2CU5D_t2987630844* ___ts_3;

public:
	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(GridOf_1_t3699171410, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(GridOf_1_t3699171410, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}

	inline static int32_t get_offset_of_ts_3() { return static_cast<int32_t>(offsetof(GridOf_1_t3699171410, ___ts_3)); }
	inline MachineU5BU2CU5D_t2987630844* get_ts_3() const { return ___ts_3; }
	inline MachineU5BU2CU5D_t2987630844** get_address_of_ts_3() { return &___ts_3; }
	inline void set_ts_3(MachineU5BU2CU5D_t2987630844* value)
	{
		___ts_3 = value;
		Il2CppCodeGenWriteBarrier((&___ts_3), value);
	}
};

struct GridOf_1_t3699171410_StaticFields
{
public:
	// GridOf`1<T> GridOf`1::instance
	GridOf_1_t3699171410 * ___instance_0;
	// System.Action`1<T> GridOf`1::<>f__am$cache0
	Action_1_t4294877337 * ___U3CU3Ef__amU24cache0_4;
	// System.Action`1<T> GridOf`1::<>f__am$cache1
	Action_1_t4294877337 * ___U3CU3Ef__amU24cache1_5;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(GridOf_1_t3699171410_StaticFields, ___instance_0)); }
	inline GridOf_1_t3699171410 * get_instance_0() const { return ___instance_0; }
	inline GridOf_1_t3699171410 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(GridOf_1_t3699171410 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(GridOf_1_t3699171410_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Action_1_t4294877337 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Action_1_t4294877337 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Action_1_t4294877337 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_5() { return static_cast<int32_t>(offsetof(GridOf_1_t3699171410_StaticFields, ___U3CU3Ef__amU24cache1_5)); }
	inline Action_1_t4294877337 * get_U3CU3Ef__amU24cache1_5() const { return ___U3CU3Ef__amU24cache1_5; }
	inline Action_1_t4294877337 ** get_address_of_U3CU3Ef__amU24cache1_5() { return &___U3CU3Ef__amU24cache1_5; }
	inline void set_U3CU3Ef__amU24cache1_5(Action_1_t4294877337 * value)
	{
		___U3CU3Ef__amU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRIDOF_1_T3699171410_H
#ifndef LIST_1_T3628304265_H
#define LIST_1_T3628304265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct  List_1_t3628304265  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_t1457185986* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____items_1)); }
	inline Vector2U5BU5D_t1457185986* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_t1457185986** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_t1457185986* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3628304265_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector2U5BU5D_t1457185986* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3628304265_StaticFields, ___EmptyArray_4)); }
	inline Vector2U5BU5D_t1457185986* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector2U5BU5D_t1457185986** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector2U5BU5D_t1457185986* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3628304265_H
#ifndef LIST_1_T511190685_H
#define LIST_1_T511190685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Crate>
struct  List_1_t511190685  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CrateU5BU5D_t1007788766* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t511190685, ____items_1)); }
	inline CrateU5BU5D_t1007788766* get__items_1() const { return ____items_1; }
	inline CrateU5BU5D_t1007788766** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CrateU5BU5D_t1007788766* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t511190685, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t511190685, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t511190685_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	CrateU5BU5D_t1007788766* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t511190685_StaticFields, ___EmptyArray_4)); }
	inline CrateU5BU5D_t1007788766* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline CrateU5BU5D_t1007788766** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(CrateU5BU5D_t1007788766* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T511190685_H
#ifndef LIST_1_T886281651_H
#define LIST_1_T886281651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<DropZone>
struct  List_1_t886281651  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DropZoneU5BU5D_t470914736* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t886281651, ____items_1)); }
	inline DropZoneU5BU5D_t470914736* get__items_1() const { return ____items_1; }
	inline DropZoneU5BU5D_t470914736** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DropZoneU5BU5D_t470914736* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t886281651, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t886281651, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t886281651_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	DropZoneU5BU5D_t470914736* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t886281651_StaticFields, ___EmptyArray_4)); }
	inline DropZoneU5BU5D_t470914736* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline DropZoneU5BU5D_t470914736** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(DropZoneU5BU5D_t470914736* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T886281651_H
#ifndef U3CSETUPBUTTONU3EC__ANONSTOREY0_T1115115811_H
#define U3CSETUPBUTTONU3EC__ANONSTOREY0_T1115115811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MachineUI/<SetupButton>c__AnonStorey0
struct  U3CSetupButtonU3Ec__AnonStorey0_t1115115811  : public RuntimeObject
{
public:
	// UnityEngine.GameObject MachineUI/<SetupButton>c__AnonStorey0::machineGob
	GameObject_t1113636619 * ___machineGob_0;
	// MachineUI MachineUI/<SetupButton>c__AnonStorey0::$this
	MachineUI_t252077060 * ___U24this_1;

public:
	inline static int32_t get_offset_of_machineGob_0() { return static_cast<int32_t>(offsetof(U3CSetupButtonU3Ec__AnonStorey0_t1115115811, ___machineGob_0)); }
	inline GameObject_t1113636619 * get_machineGob_0() const { return ___machineGob_0; }
	inline GameObject_t1113636619 ** get_address_of_machineGob_0() { return &___machineGob_0; }
	inline void set_machineGob_0(GameObject_t1113636619 * value)
	{
		___machineGob_0 = value;
		Il2CppCodeGenWriteBarrier((&___machineGob_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CSetupButtonU3Ec__AnonStorey0_t1115115811, ___U24this_1)); }
	inline MachineUI_t252077060 * get_U24this_1() const { return ___U24this_1; }
	inline MachineUI_t252077060 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(MachineUI_t252077060 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSETUPBUTTONU3EC__ANONSTOREY0_T1115115811_H
#ifndef LIST_1_T899420910_H
#define LIST_1_T899420910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t899420910  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t1718750761* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____items_1)); }
	inline Vector3U5BU5D_t1718750761* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t1718750761** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t1718750761* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t899420910_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector3U5BU5D_t1718750761* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t899420910_StaticFields, ___EmptyArray_4)); }
	inline Vector3U5BU5D_t1718750761* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector3U5BU5D_t1718750761** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector3U5BU5D_t1718750761* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T899420910_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef DROPZONEGROUP_T2340995414_H
#define DROPZONEGROUP_T2340995414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DropZoneGroup
struct  DropZoneGroup_t2340995414  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<DropZone> DropZoneGroup::zones
	List_1_t886281651 * ___zones_0;

public:
	inline static int32_t get_offset_of_zones_0() { return static_cast<int32_t>(offsetof(DropZoneGroup_t2340995414, ___zones_0)); }
	inline List_1_t886281651 * get_zones_0() const { return ___zones_0; }
	inline List_1_t886281651 ** get_address_of_zones_0() { return &___zones_0; }
	inline void set_zones_0(List_1_t886281651 * value)
	{
		___zones_0 = value;
		Il2CppCodeGenWriteBarrier((&___zones_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DROPZONEGROUP_T2340995414_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef GRIDOF_1_T2910844907_H
#define GRIDOF_1_T2910844907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GridOf`1<Crate>
struct  GridOf_1_t2910844907  : public RuntimeObject
{
public:
	// System.Int32 GridOf`1::width
	int32_t ___width_1;
	// System.Int32 GridOf`1::height
	int32_t ___height_2;
	// T[0...,0...] GridOf`1::ts
	CrateU5BU2CU5D_t1007788767* ___ts_3;

public:
	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(GridOf_1_t2910844907, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(GridOf_1_t2910844907, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}

	inline static int32_t get_offset_of_ts_3() { return static_cast<int32_t>(offsetof(GridOf_1_t2910844907, ___ts_3)); }
	inline CrateU5BU2CU5D_t1007788767* get_ts_3() const { return ___ts_3; }
	inline CrateU5BU2CU5D_t1007788767** get_address_of_ts_3() { return &___ts_3; }
	inline void set_ts_3(CrateU5BU2CU5D_t1007788767* value)
	{
		___ts_3 = value;
		Il2CppCodeGenWriteBarrier((&___ts_3), value);
	}
};

struct GridOf_1_t2910844907_StaticFields
{
public:
	// GridOf`1<T> GridOf`1::instance
	GridOf_1_t2910844907 * ___instance_0;
	// System.Action`1<T> GridOf`1::<>f__am$cache0
	Action_1_t3506550834 * ___U3CU3Ef__amU24cache0_4;
	// System.Action`1<T> GridOf`1::<>f__am$cache1
	Action_1_t3506550834 * ___U3CU3Ef__amU24cache1_5;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(GridOf_1_t2910844907_StaticFields, ___instance_0)); }
	inline GridOf_1_t2910844907 * get_instance_0() const { return ___instance_0; }
	inline GridOf_1_t2910844907 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(GridOf_1_t2910844907 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(GridOf_1_t2910844907_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Action_1_t3506550834 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Action_1_t3506550834 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Action_1_t3506550834 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_5() { return static_cast<int32_t>(offsetof(GridOf_1_t2910844907_StaticFields, ___U3CU3Ef__amU24cache1_5)); }
	inline Action_1_t3506550834 * get_U3CU3Ef__amU24cache1_5() const { return ___U3CU3Ef__amU24cache1_5; }
	inline Action_1_t3506550834 ** get_address_of_U3CU3Ef__amU24cache1_5() { return &___U3CU3Ef__amU24cache1_5; }
	inline void set_U3CU3Ef__amU24cache1_5(Action_1_t3506550834 * value)
	{
		___U3CU3Ef__amU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRIDOF_1_T2910844907_H
#ifndef U3CGETGENERATORSU3EC__ANONSTOREY0_T1713985753_H
#define U3CGETGENERATORSU3EC__ANONSTOREY0_T1713985753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StairMaster/<GetGenerators>c__AnonStorey0
struct  U3CGetGeneratorsU3Ec__AnonStorey0_t1713985753  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Generator> StairMaster/<GetGenerators>c__AnonStorey0::list
	List_1_t3720455162 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(U3CGetGeneratorsU3Ec__AnonStorey0_t1713985753, ___list_0)); }
	inline List_1_t3720455162 * get_list_0() const { return ___list_0; }
	inline List_1_t3720455162 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3720455162 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETGENERATORSU3EC__ANONSTOREY0_T1713985753_H
#ifndef LIST_1_T2587202873_H
#define LIST_1_T2587202873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Wire>
struct  List_1_t2587202873  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WireU5BU5D_t192281170* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2587202873, ____items_1)); }
	inline WireU5BU5D_t192281170* get__items_1() const { return ____items_1; }
	inline WireU5BU5D_t192281170** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WireU5BU5D_t192281170* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2587202873, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2587202873, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2587202873_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	WireU5BU5D_t192281170* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2587202873_StaticFields, ___EmptyArray_4)); }
	inline WireU5BU5D_t192281170* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline WireU5BU5D_t192281170** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(WireU5BU5D_t192281170* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2587202873_H
#ifndef ENUMERATOR_T2400434562_H
#define ENUMERATOR_T2400434562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Crate>
struct  Enumerator_t2400434562 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t511190685 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Crate_t3334083239 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2400434562, ___l_0)); }
	inline List_1_t511190685 * get_l_0() const { return ___l_0; }
	inline List_1_t511190685 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t511190685 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2400434562, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2400434562, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2400434562, ___current_3)); }
	inline Crate_t3334083239 * get_current_3() const { return ___current_3; }
	inline Crate_t3334083239 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Crate_t3334083239 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2400434562_H
#ifndef ENUMERATOR_T182308355_H
#define ENUMERATOR_T182308355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<CrateGroup>
struct  Enumerator_t182308355 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2588031774 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	CrateGroup_t1115957032 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t182308355, ___l_0)); }
	inline List_1_t2588031774 * get_l_0() const { return ___l_0; }
	inline List_1_t2588031774 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2588031774 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t182308355, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t182308355, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t182308355, ___current_3)); }
	inline CrateGroup_t1115957032 * get_current_3() const { return ___current_3; }
	inline CrateGroup_t1115957032 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(CrateGroup_t1115957032 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T182308355_H
#ifndef CRATES_T3341619879_H
#define CRATES_T3341619879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Crates
struct  Crates_t3341619879  : public GridOf_1_t2910844907
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRATES_T3341619879_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef ENUMERATOR_T181479454_H
#define ENUMERATOR_T181479454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Wire>
struct  Enumerator_t181479454 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2587202873 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Wire_t1115128131 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t181479454, ___l_0)); }
	inline List_1_t2587202873 * get_l_0() const { return ___l_0; }
	inline List_1_t2587202873 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2587202873 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t181479454, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t181479454, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t181479454, ___current_3)); }
	inline Wire_t1115128131 * get_current_3() const { return ___current_3; }
	inline Wire_t1115128131 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Wire_t1115128131 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T181479454_H
#ifndef ENUMERATOR_T1314731743_H
#define ENUMERATOR_T1314731743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Generator>
struct  Enumerator_t1314731743 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3720455162 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Generator_t2248380420 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1314731743, ___l_0)); }
	inline List_1_t3720455162 * get_l_0() const { return ___l_0; }
	inline List_1_t3720455162 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3720455162 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1314731743, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1314731743, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1314731743, ___current_3)); }
	inline Generator_t2248380420 * get_current_3() const { return ___current_3; }
	inline Generator_t2248380420 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Generator_t2248380420 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1314731743_H
#ifndef ENUMERATOR_T811687287_H
#define ENUMERATOR_T811687287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Sensor>
struct  Enumerator_t811687287 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3217410706 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Sensor_t1745335964 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t811687287, ___l_0)); }
	inline List_1_t3217410706 * get_l_0() const { return ___l_0; }
	inline List_1_t3217410706 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3217410706 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t811687287, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t811687287, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t811687287, ___current_3)); }
	inline Sensor_t1745335964 * get_current_3() const { return ___current_3; }
	inline Sensor_t1745335964 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Sensor_t1745335964 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T811687287_H
#ifndef UNITYEVENT_T2581268647_H
#define UNITYEVENT_T2581268647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t2581268647  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t2581268647, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T2581268647_H
#ifndef MACHINES_T3020028686_H
#define MACHINES_T3020028686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Machines
struct  Machines_t3020028686  : public GridOf_1_t3699171410
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACHINES_T3020028686_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef ENUMERATOR_T2775525528_H
#define ENUMERATOR_T2775525528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<DropZone>
struct  Enumerator_t2775525528 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t886281651 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	DropZone_t3709174205 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2775525528, ___l_0)); }
	inline List_1_t886281651 * get_l_0() const { return ___l_0; }
	inline List_1_t886281651 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t886281651 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2775525528, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2775525528, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2775525528, ___current_3)); }
	inline DropZone_t3709174205 * get_current_3() const { return ___current_3; }
	inline DropZone_t3709174205 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(DropZone_t3709174205 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2775525528_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef U24ARRAYTYPEU3D36_T120960362_H
#define U24ARRAYTYPEU3D36_T120960362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=36
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D36_t120960362 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D36_t120960362__padding[36];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D36_T120960362_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef U3CANIMATEMOVEU3EC__ITERATOR0_T1583435394_H
#define U3CANIMATEMOVEU3EC__ITERATOR0_T1583435394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Crate/<AnimateMove>c__Iterator0
struct  U3CAnimateMoveU3Ec__Iterator0_t1583435394  : public RuntimeObject
{
public:
	// System.Int32 Crate/<AnimateMove>c__Iterator0::<frames>__0
	int32_t ___U3CframesU3E__0_0;
	// System.Single Crate/<AnimateMove>c__Iterator0::<animationTime>__0
	float ___U3CanimationTimeU3E__0_1;
	// System.Int32 Crate/<AnimateMove>c__Iterator0::<i>__1
	int32_t ___U3CiU3E__1_2;
	// UnityEngine.Vector2 Crate/<AnimateMove>c__Iterator0::direction
	Vector2_t2156229523  ___direction_3;
	// UnityEngine.Vector2 Crate/<AnimateMove>c__Iterator0::destination
	Vector2_t2156229523  ___destination_4;
	// System.Boolean Crate/<AnimateMove>c__Iterator0::destroyAfter
	bool ___destroyAfter_5;
	// Crate Crate/<AnimateMove>c__Iterator0::$this
	Crate_t3334083239 * ___U24this_6;
	// System.Object Crate/<AnimateMove>c__Iterator0::$current
	RuntimeObject * ___U24current_7;
	// System.Boolean Crate/<AnimateMove>c__Iterator0::$disposing
	bool ___U24disposing_8;
	// System.Int32 Crate/<AnimateMove>c__Iterator0::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_U3CframesU3E__0_0() { return static_cast<int32_t>(offsetof(U3CAnimateMoveU3Ec__Iterator0_t1583435394, ___U3CframesU3E__0_0)); }
	inline int32_t get_U3CframesU3E__0_0() const { return ___U3CframesU3E__0_0; }
	inline int32_t* get_address_of_U3CframesU3E__0_0() { return &___U3CframesU3E__0_0; }
	inline void set_U3CframesU3E__0_0(int32_t value)
	{
		___U3CframesU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CanimationTimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CAnimateMoveU3Ec__Iterator0_t1583435394, ___U3CanimationTimeU3E__0_1)); }
	inline float get_U3CanimationTimeU3E__0_1() const { return ___U3CanimationTimeU3E__0_1; }
	inline float* get_address_of_U3CanimationTimeU3E__0_1() { return &___U3CanimationTimeU3E__0_1; }
	inline void set_U3CanimationTimeU3E__0_1(float value)
	{
		___U3CanimationTimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E__1_2() { return static_cast<int32_t>(offsetof(U3CAnimateMoveU3Ec__Iterator0_t1583435394, ___U3CiU3E__1_2)); }
	inline int32_t get_U3CiU3E__1_2() const { return ___U3CiU3E__1_2; }
	inline int32_t* get_address_of_U3CiU3E__1_2() { return &___U3CiU3E__1_2; }
	inline void set_U3CiU3E__1_2(int32_t value)
	{
		___U3CiU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_direction_3() { return static_cast<int32_t>(offsetof(U3CAnimateMoveU3Ec__Iterator0_t1583435394, ___direction_3)); }
	inline Vector2_t2156229523  get_direction_3() const { return ___direction_3; }
	inline Vector2_t2156229523 * get_address_of_direction_3() { return &___direction_3; }
	inline void set_direction_3(Vector2_t2156229523  value)
	{
		___direction_3 = value;
	}

	inline static int32_t get_offset_of_destination_4() { return static_cast<int32_t>(offsetof(U3CAnimateMoveU3Ec__Iterator0_t1583435394, ___destination_4)); }
	inline Vector2_t2156229523  get_destination_4() const { return ___destination_4; }
	inline Vector2_t2156229523 * get_address_of_destination_4() { return &___destination_4; }
	inline void set_destination_4(Vector2_t2156229523  value)
	{
		___destination_4 = value;
	}

	inline static int32_t get_offset_of_destroyAfter_5() { return static_cast<int32_t>(offsetof(U3CAnimateMoveU3Ec__Iterator0_t1583435394, ___destroyAfter_5)); }
	inline bool get_destroyAfter_5() const { return ___destroyAfter_5; }
	inline bool* get_address_of_destroyAfter_5() { return &___destroyAfter_5; }
	inline void set_destroyAfter_5(bool value)
	{
		___destroyAfter_5 = value;
	}

	inline static int32_t get_offset_of_U24this_6() { return static_cast<int32_t>(offsetof(U3CAnimateMoveU3Ec__Iterator0_t1583435394, ___U24this_6)); }
	inline Crate_t3334083239 * get_U24this_6() const { return ___U24this_6; }
	inline Crate_t3334083239 ** get_address_of_U24this_6() { return &___U24this_6; }
	inline void set_U24this_6(Crate_t3334083239 * value)
	{
		___U24this_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_6), value);
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CAnimateMoveU3Ec__Iterator0_t1583435394, ___U24current_7)); }
	inline RuntimeObject * get_U24current_7() const { return ___U24current_7; }
	inline RuntimeObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(RuntimeObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_7), value);
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3CAnimateMoveU3Ec__Iterator0_t1583435394, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CAnimateMoveU3Ec__Iterator0_t1583435394, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CANIMATEMOVEU3EC__ITERATOR0_T1583435394_H
#ifndef SPACE_T654135784_H
#define SPACE_T654135784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t654135784 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Space_t654135784, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACE_T654135784_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef BUTTONCLICKEDEVENT_T48803504_H
#define BUTTONCLICKEDEVENT_T48803504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button/ButtonClickedEvent
struct  ButtonClickedEvent_t48803504  : public UnityEvent_t2581268647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONCLICKEDEVENT_T48803504_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef RAYCASTHIT2D_T2279581989_H
#define RAYCASTHIT2D_T2279581989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t2279581989 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t2156229523  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t2156229523  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t2156229523  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// UnityEngine.Collider2D UnityEngine.RaycastHit2D::m_Collider
	Collider2D_t2806799626 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Centroid_0)); }
	inline Vector2_t2156229523  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_t2156229523 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_t2156229523  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Point_1)); }
	inline Vector2_t2156229523  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_t2156229523 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_t2156229523  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Normal_2)); }
	inline Vector2_t2156229523  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_t2156229523 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_t2156229523  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Collider_5)); }
	inline Collider2D_t2806799626 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider2D_t2806799626 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider2D_t2806799626 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t2279581989_marshaled_pinvoke
{
	Vector2_t2156229523  ___m_Centroid_0;
	Vector2_t2156229523  ___m_Point_1;
	Vector2_t2156229523  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t2806799626 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t2279581989_marshaled_com
{
	Vector2_t2156229523  ___m_Centroid_0;
	Vector2_t2156229523  ___m_Point_1;
	Vector2_t2156229523  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t2806799626 * ___m_Collider_5;
};
#endif // RAYCASTHIT2D_T2279581989_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef U3CCHECKPUSHERARMSU3EC__ANONSTOREY2_T340666492_H
#define U3CCHECKPUSHERARMSU3EC__ANONSTOREY2_T340666492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Crate/<CheckPusherArms>c__AnonStorey2
struct  U3CCheckPusherArmsU3Ec__AnonStorey2_t340666492  : public RuntimeObject
{
public:
	// UnityEngine.Vector2 Crate/<CheckPusherArms>c__AnonStorey2::target
	Vector2_t2156229523  ___target_0;
	// System.Boolean Crate/<CheckPusherArms>c__AnonStorey2::blockedByPusherArm
	bool ___blockedByPusherArm_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CCheckPusherArmsU3Ec__AnonStorey2_t340666492, ___target_0)); }
	inline Vector2_t2156229523  get_target_0() const { return ___target_0; }
	inline Vector2_t2156229523 * get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Vector2_t2156229523  value)
	{
		___target_0 = value;
	}

	inline static int32_t get_offset_of_blockedByPusherArm_1() { return static_cast<int32_t>(offsetof(U3CCheckPusherArmsU3Ec__AnonStorey2_t340666492, ___blockedByPusherArm_1)); }
	inline bool get_blockedByPusherArm_1() const { return ___blockedByPusherArm_1; }
	inline bool* get_address_of_blockedByPusherArm_1() { return &___blockedByPusherArm_1; }
	inline void set_blockedByPusherArm_1(bool value)
	{
		___blockedByPusherArm_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCHECKPUSHERARMSU3EC__ANONSTOREY2_T340666492_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef U3CANIMATEROTATIONU3EC__ITERATOR1_T2176702074_H
#define U3CANIMATEROTATIONU3EC__ITERATOR1_T2176702074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Crate/<AnimateRotation>c__Iterator1
struct  U3CAnimateRotationU3Ec__Iterator1_t2176702074  : public RuntimeObject
{
public:
	// System.Int32 Crate/<AnimateRotation>c__Iterator1::<frames>__0
	int32_t ___U3CframesU3E__0_0;
	// System.Single Crate/<AnimateRotation>c__Iterator1::<animationTime>__0
	float ___U3CanimationTimeU3E__0_1;
	// UnityEngine.Vector3 Crate/<AnimateRotation>c__Iterator1::spin
	Vector3_t3722313464  ___spin_2;
	// System.Single Crate/<AnimateRotation>c__Iterator1::<angle>__0
	float ___U3CangleU3E__0_3;
	// System.Int32 Crate/<AnimateRotation>c__Iterator1::<i>__1
	int32_t ___U3CiU3E__1_4;
	// UnityEngine.Vector3 Crate/<AnimateRotation>c__Iterator1::<pp>__2
	Vector3_t3722313464  ___U3CppU3E__2_5;
	// UnityEngine.Vector2 Crate/<AnimateRotation>c__Iterator1::destination
	Vector2_t2156229523  ___destination_6;
	// System.Boolean Crate/<AnimateRotation>c__Iterator1::destroyAfter
	bool ___destroyAfter_7;
	// Crate Crate/<AnimateRotation>c__Iterator1::$this
	Crate_t3334083239 * ___U24this_8;
	// System.Object Crate/<AnimateRotation>c__Iterator1::$current
	RuntimeObject * ___U24current_9;
	// System.Boolean Crate/<AnimateRotation>c__Iterator1::$disposing
	bool ___U24disposing_10;
	// System.Int32 Crate/<AnimateRotation>c__Iterator1::$PC
	int32_t ___U24PC_11;

public:
	inline static int32_t get_offset_of_U3CframesU3E__0_0() { return static_cast<int32_t>(offsetof(U3CAnimateRotationU3Ec__Iterator1_t2176702074, ___U3CframesU3E__0_0)); }
	inline int32_t get_U3CframesU3E__0_0() const { return ___U3CframesU3E__0_0; }
	inline int32_t* get_address_of_U3CframesU3E__0_0() { return &___U3CframesU3E__0_0; }
	inline void set_U3CframesU3E__0_0(int32_t value)
	{
		___U3CframesU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CanimationTimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CAnimateRotationU3Ec__Iterator1_t2176702074, ___U3CanimationTimeU3E__0_1)); }
	inline float get_U3CanimationTimeU3E__0_1() const { return ___U3CanimationTimeU3E__0_1; }
	inline float* get_address_of_U3CanimationTimeU3E__0_1() { return &___U3CanimationTimeU3E__0_1; }
	inline void set_U3CanimationTimeU3E__0_1(float value)
	{
		___U3CanimationTimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_spin_2() { return static_cast<int32_t>(offsetof(U3CAnimateRotationU3Ec__Iterator1_t2176702074, ___spin_2)); }
	inline Vector3_t3722313464  get_spin_2() const { return ___spin_2; }
	inline Vector3_t3722313464 * get_address_of_spin_2() { return &___spin_2; }
	inline void set_spin_2(Vector3_t3722313464  value)
	{
		___spin_2 = value;
	}

	inline static int32_t get_offset_of_U3CangleU3E__0_3() { return static_cast<int32_t>(offsetof(U3CAnimateRotationU3Ec__Iterator1_t2176702074, ___U3CangleU3E__0_3)); }
	inline float get_U3CangleU3E__0_3() const { return ___U3CangleU3E__0_3; }
	inline float* get_address_of_U3CangleU3E__0_3() { return &___U3CangleU3E__0_3; }
	inline void set_U3CangleU3E__0_3(float value)
	{
		___U3CangleU3E__0_3 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E__1_4() { return static_cast<int32_t>(offsetof(U3CAnimateRotationU3Ec__Iterator1_t2176702074, ___U3CiU3E__1_4)); }
	inline int32_t get_U3CiU3E__1_4() const { return ___U3CiU3E__1_4; }
	inline int32_t* get_address_of_U3CiU3E__1_4() { return &___U3CiU3E__1_4; }
	inline void set_U3CiU3E__1_4(int32_t value)
	{
		___U3CiU3E__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CppU3E__2_5() { return static_cast<int32_t>(offsetof(U3CAnimateRotationU3Ec__Iterator1_t2176702074, ___U3CppU3E__2_5)); }
	inline Vector3_t3722313464  get_U3CppU3E__2_5() const { return ___U3CppU3E__2_5; }
	inline Vector3_t3722313464 * get_address_of_U3CppU3E__2_5() { return &___U3CppU3E__2_5; }
	inline void set_U3CppU3E__2_5(Vector3_t3722313464  value)
	{
		___U3CppU3E__2_5 = value;
	}

	inline static int32_t get_offset_of_destination_6() { return static_cast<int32_t>(offsetof(U3CAnimateRotationU3Ec__Iterator1_t2176702074, ___destination_6)); }
	inline Vector2_t2156229523  get_destination_6() const { return ___destination_6; }
	inline Vector2_t2156229523 * get_address_of_destination_6() { return &___destination_6; }
	inline void set_destination_6(Vector2_t2156229523  value)
	{
		___destination_6 = value;
	}

	inline static int32_t get_offset_of_destroyAfter_7() { return static_cast<int32_t>(offsetof(U3CAnimateRotationU3Ec__Iterator1_t2176702074, ___destroyAfter_7)); }
	inline bool get_destroyAfter_7() const { return ___destroyAfter_7; }
	inline bool* get_address_of_destroyAfter_7() { return &___destroyAfter_7; }
	inline void set_destroyAfter_7(bool value)
	{
		___destroyAfter_7 = value;
	}

	inline static int32_t get_offset_of_U24this_8() { return static_cast<int32_t>(offsetof(U3CAnimateRotationU3Ec__Iterator1_t2176702074, ___U24this_8)); }
	inline Crate_t3334083239 * get_U24this_8() const { return ___U24this_8; }
	inline Crate_t3334083239 ** get_address_of_U24this_8() { return &___U24this_8; }
	inline void set_U24this_8(Crate_t3334083239 * value)
	{
		___U24this_8 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_8), value);
	}

	inline static int32_t get_offset_of_U24current_9() { return static_cast<int32_t>(offsetof(U3CAnimateRotationU3Ec__Iterator1_t2176702074, ___U24current_9)); }
	inline RuntimeObject * get_U24current_9() const { return ___U24current_9; }
	inline RuntimeObject ** get_address_of_U24current_9() { return &___U24current_9; }
	inline void set_U24current_9(RuntimeObject * value)
	{
		___U24current_9 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_9), value);
	}

	inline static int32_t get_offset_of_U24disposing_10() { return static_cast<int32_t>(offsetof(U3CAnimateRotationU3Ec__Iterator1_t2176702074, ___U24disposing_10)); }
	inline bool get_U24disposing_10() const { return ___U24disposing_10; }
	inline bool* get_address_of_U24disposing_10() { return &___U24disposing_10; }
	inline void set_U24disposing_10(bool value)
	{
		___U24disposing_10 = value;
	}

	inline static int32_t get_offset_of_U24PC_11() { return static_cast<int32_t>(offsetof(U3CAnimateRotationU3Ec__Iterator1_t2176702074, ___U24PC_11)); }
	inline int32_t get_U24PC_11() const { return ___U24PC_11; }
	inline int32_t* get_address_of_U24PC_11() { return &___U24PC_11; }
	inline void set_U24PC_11(int32_t value)
	{
		___U24PC_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CANIMATEROTATIONU3EC__ITERATOR1_T2176702074_H
#ifndef ENUMERATOR_T1222580846_H
#define ENUMERATOR_T1222580846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>
struct  Enumerator_t1222580846 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3628304265 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Vector2_t2156229523  ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1222580846, ___l_0)); }
	inline List_1_t3628304265 * get_l_0() const { return ___l_0; }
	inline List_1_t3628304265 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3628304265 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1222580846, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1222580846, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1222580846, ___current_3)); }
	inline Vector2_t2156229523  get_current_3() const { return ___current_3; }
	inline Vector2_t2156229523 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Vector2_t2156229523  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1222580846_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef CRATEGROUP_T1115957032_H
#define CRATEGROUP_T1115957032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CrateGroup
struct  CrateGroup_t1115957032  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Crate> CrateGroup::crates
	List_1_t511190685 * ___crates_0;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> CrateGroup::spins
	List_1_t899420910 * ___spins_1;
	// UnityEngine.Vector2 CrateGroup::pusherForce
	Vector2_t2156229523  ___pusherForce_2;
	// UnityEngine.Vector2 CrateGroup::netForce
	Vector2_t2156229523  ___netForce_3;
	// UnityEngine.Vector2 CrateGroup::lastDirection
	Vector2_t2156229523  ___lastDirection_4;

public:
	inline static int32_t get_offset_of_crates_0() { return static_cast<int32_t>(offsetof(CrateGroup_t1115957032, ___crates_0)); }
	inline List_1_t511190685 * get_crates_0() const { return ___crates_0; }
	inline List_1_t511190685 ** get_address_of_crates_0() { return &___crates_0; }
	inline void set_crates_0(List_1_t511190685 * value)
	{
		___crates_0 = value;
		Il2CppCodeGenWriteBarrier((&___crates_0), value);
	}

	inline static int32_t get_offset_of_spins_1() { return static_cast<int32_t>(offsetof(CrateGroup_t1115957032, ___spins_1)); }
	inline List_1_t899420910 * get_spins_1() const { return ___spins_1; }
	inline List_1_t899420910 ** get_address_of_spins_1() { return &___spins_1; }
	inline void set_spins_1(List_1_t899420910 * value)
	{
		___spins_1 = value;
		Il2CppCodeGenWriteBarrier((&___spins_1), value);
	}

	inline static int32_t get_offset_of_pusherForce_2() { return static_cast<int32_t>(offsetof(CrateGroup_t1115957032, ___pusherForce_2)); }
	inline Vector2_t2156229523  get_pusherForce_2() const { return ___pusherForce_2; }
	inline Vector2_t2156229523 * get_address_of_pusherForce_2() { return &___pusherForce_2; }
	inline void set_pusherForce_2(Vector2_t2156229523  value)
	{
		___pusherForce_2 = value;
	}

	inline static int32_t get_offset_of_netForce_3() { return static_cast<int32_t>(offsetof(CrateGroup_t1115957032, ___netForce_3)); }
	inline Vector2_t2156229523  get_netForce_3() const { return ___netForce_3; }
	inline Vector2_t2156229523 * get_address_of_netForce_3() { return &___netForce_3; }
	inline void set_netForce_3(Vector2_t2156229523  value)
	{
		___netForce_3 = value;
	}

	inline static int32_t get_offset_of_lastDirection_4() { return static_cast<int32_t>(offsetof(CrateGroup_t1115957032, ___lastDirection_4)); }
	inline Vector2_t2156229523  get_lastDirection_4() const { return ___lastDirection_4; }
	inline Vector2_t2156229523 * get_address_of_lastDirection_4() { return &___lastDirection_4; }
	inline void set_lastDirection_4(Vector2_t2156229523  value)
	{
		___lastDirection_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRATEGROUP_T1115957032_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255366  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=36 <PrivateImplementationDetails>::$field-789A03B883709A48092EAA34B7D094B9AC0EC2DF
	U24ArrayTypeU3D36_t120960362  ___U24fieldU2D789A03B883709A48092EAA34B7D094B9AC0EC2DF_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D789A03B883709A48092EAA34B7D094B9AC0EC2DF_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2D789A03B883709A48092EAA34B7D094B9AC0EC2DF_0)); }
	inline U24ArrayTypeU3D36_t120960362  get_U24fieldU2D789A03B883709A48092EAA34B7D094B9AC0EC2DF_0() const { return ___U24fieldU2D789A03B883709A48092EAA34B7D094B9AC0EC2DF_0; }
	inline U24ArrayTypeU3D36_t120960362 * get_address_of_U24fieldU2D789A03B883709A48092EAA34B7D094B9AC0EC2DF_0() { return &___U24fieldU2D789A03B883709A48092EAA34B7D094B9AC0EC2DF_0; }
	inline void set_U24fieldU2D789A03B883709A48092EAA34B7D094B9AC0EC2DF_0(U24ArrayTypeU3D36_t120960362  value)
	{
		___U24fieldU2D789A03B883709A48092EAA34B7D094B9AC0EC2DF_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef ACTION_1_T4294877337_H
#define ACTION_1_T4294877337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<Machine>
struct  Action_1_t4294877337  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T4294877337_H
#ifndef ACTION_1_T3506550834_H
#define ACTION_1_T3506550834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<Crate>
struct  Action_1_t3506550834  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3506550834_H
#ifndef ACTION_1_T1288424627_H
#define ACTION_1_T1288424627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<CrateGroup>
struct  Action_1_t1288424627  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1288424627_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef UNITYACTION_T3245792599_H
#define UNITYACTION_T3245792599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t3245792599  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T3245792599_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef STAIRMASTER_T3581666356_H
#define STAIRMASTER_T3581666356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StairMaster
struct  StairMaster_t3581666356  : public MonoBehaviour_t3962482529
{
public:
	// System.Single StairMaster::stepSize
	float ___stepSize_2;
	// System.Single StairMaster::stepTime
	float ___stepTime_5;
	// System.Boolean StairMaster::running
	bool ___running_6;
	// System.Collections.Generic.List`1<Generator> StairMaster::generators
	List_1_t3720455162 * ___generators_7;

public:
	inline static int32_t get_offset_of_stepSize_2() { return static_cast<int32_t>(offsetof(StairMaster_t3581666356, ___stepSize_2)); }
	inline float get_stepSize_2() const { return ___stepSize_2; }
	inline float* get_address_of_stepSize_2() { return &___stepSize_2; }
	inline void set_stepSize_2(float value)
	{
		___stepSize_2 = value;
	}

	inline static int32_t get_offset_of_stepTime_5() { return static_cast<int32_t>(offsetof(StairMaster_t3581666356, ___stepTime_5)); }
	inline float get_stepTime_5() const { return ___stepTime_5; }
	inline float* get_address_of_stepTime_5() { return &___stepTime_5; }
	inline void set_stepTime_5(float value)
	{
		___stepTime_5 = value;
	}

	inline static int32_t get_offset_of_running_6() { return static_cast<int32_t>(offsetof(StairMaster_t3581666356, ___running_6)); }
	inline bool get_running_6() const { return ___running_6; }
	inline bool* get_address_of_running_6() { return &___running_6; }
	inline void set_running_6(bool value)
	{
		___running_6 = value;
	}

	inline static int32_t get_offset_of_generators_7() { return static_cast<int32_t>(offsetof(StairMaster_t3581666356, ___generators_7)); }
	inline List_1_t3720455162 * get_generators_7() const { return ___generators_7; }
	inline List_1_t3720455162 ** get_address_of_generators_7() { return &___generators_7; }
	inline void set_generators_7(List_1_t3720455162 * value)
	{
		___generators_7 = value;
		Il2CppCodeGenWriteBarrier((&___generators_7), value);
	}
};

struct StairMaster_t3581666356_StaticFields
{
public:
	// System.Action`1<Crate> StairMaster::<>f__am$cache0
	Action_1_t3506550834 * ___U3CU3Ef__amU24cache0_8;
	// System.Action`1<CrateGroup> StairMaster::<>f__am$cache1
	Action_1_t1288424627 * ___U3CU3Ef__amU24cache1_9;
	// System.Action`1<Machine> StairMaster::<>f__am$cache2
	Action_1_t4294877337 * ___U3CU3Ef__amU24cache2_10;
	// System.Action`1<CrateGroup> StairMaster::<>f__am$cache3
	Action_1_t1288424627 * ___U3CU3Ef__amU24cache3_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_8() { return static_cast<int32_t>(offsetof(StairMaster_t3581666356_StaticFields, ___U3CU3Ef__amU24cache0_8)); }
	inline Action_1_t3506550834 * get_U3CU3Ef__amU24cache0_8() const { return ___U3CU3Ef__amU24cache0_8; }
	inline Action_1_t3506550834 ** get_address_of_U3CU3Ef__amU24cache0_8() { return &___U3CU3Ef__amU24cache0_8; }
	inline void set_U3CU3Ef__amU24cache0_8(Action_1_t3506550834 * value)
	{
		___U3CU3Ef__amU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_9() { return static_cast<int32_t>(offsetof(StairMaster_t3581666356_StaticFields, ___U3CU3Ef__amU24cache1_9)); }
	inline Action_1_t1288424627 * get_U3CU3Ef__amU24cache1_9() const { return ___U3CU3Ef__amU24cache1_9; }
	inline Action_1_t1288424627 ** get_address_of_U3CU3Ef__amU24cache1_9() { return &___U3CU3Ef__amU24cache1_9; }
	inline void set_U3CU3Ef__amU24cache1_9(Action_1_t1288424627 * value)
	{
		___U3CU3Ef__amU24cache1_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_10() { return static_cast<int32_t>(offsetof(StairMaster_t3581666356_StaticFields, ___U3CU3Ef__amU24cache2_10)); }
	inline Action_1_t4294877337 * get_U3CU3Ef__amU24cache2_10() const { return ___U3CU3Ef__amU24cache2_10; }
	inline Action_1_t4294877337 ** get_address_of_U3CU3Ef__amU24cache2_10() { return &___U3CU3Ef__amU24cache2_10; }
	inline void set_U3CU3Ef__amU24cache2_10(Action_1_t4294877337 * value)
	{
		___U3CU3Ef__amU24cache2_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_11() { return static_cast<int32_t>(offsetof(StairMaster_t3581666356_StaticFields, ___U3CU3Ef__amU24cache3_11)); }
	inline Action_1_t1288424627 * get_U3CU3Ef__amU24cache3_11() const { return ___U3CU3Ef__amU24cache3_11; }
	inline Action_1_t1288424627 ** get_address_of_U3CU3Ef__amU24cache3_11() { return &___U3CU3Ef__amU24cache3_11; }
	inline void set_U3CU3Ef__amU24cache3_11(Action_1_t1288424627 * value)
	{
		___U3CU3Ef__amU24cache3_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STAIRMASTER_T3581666356_H
#ifndef CAMERAMOVER_T2845631541_H
#define CAMERAMOVER_T2845631541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraMover
struct  CameraMover_t2845631541  : public MonoBehaviour_t3962482529
{
public:
	// System.Single CameraMover::dragSpeed
	float ___dragSpeed_2;
	// System.Single CameraMover::mapBuffer
	float ___mapBuffer_3;
	// System.Boolean CameraMover::scrollVert
	bool ___scrollVert_4;
	// System.Boolean CameraMover::scrollHor
	bool ___scrollHor_5;
	// UnityEngine.Vector3 CameraMover::dragOrigin
	Vector3_t3722313464  ___dragOrigin_6;
	// System.Single CameraMover::dragStartTime
	float ___dragStartTime_7;
	// System.Single CameraMover::dragTimeThreshold
	float ___dragTimeThreshold_8;
	// System.Single CameraMover::leftBound
	float ___leftBound_9;
	// System.Single CameraMover::rightBound
	float ___rightBound_10;
	// System.Single CameraMover::upperBound
	float ___upperBound_11;
	// System.Single CameraMover::lowerBound
	float ___lowerBound_12;

public:
	inline static int32_t get_offset_of_dragSpeed_2() { return static_cast<int32_t>(offsetof(CameraMover_t2845631541, ___dragSpeed_2)); }
	inline float get_dragSpeed_2() const { return ___dragSpeed_2; }
	inline float* get_address_of_dragSpeed_2() { return &___dragSpeed_2; }
	inline void set_dragSpeed_2(float value)
	{
		___dragSpeed_2 = value;
	}

	inline static int32_t get_offset_of_mapBuffer_3() { return static_cast<int32_t>(offsetof(CameraMover_t2845631541, ___mapBuffer_3)); }
	inline float get_mapBuffer_3() const { return ___mapBuffer_3; }
	inline float* get_address_of_mapBuffer_3() { return &___mapBuffer_3; }
	inline void set_mapBuffer_3(float value)
	{
		___mapBuffer_3 = value;
	}

	inline static int32_t get_offset_of_scrollVert_4() { return static_cast<int32_t>(offsetof(CameraMover_t2845631541, ___scrollVert_4)); }
	inline bool get_scrollVert_4() const { return ___scrollVert_4; }
	inline bool* get_address_of_scrollVert_4() { return &___scrollVert_4; }
	inline void set_scrollVert_4(bool value)
	{
		___scrollVert_4 = value;
	}

	inline static int32_t get_offset_of_scrollHor_5() { return static_cast<int32_t>(offsetof(CameraMover_t2845631541, ___scrollHor_5)); }
	inline bool get_scrollHor_5() const { return ___scrollHor_5; }
	inline bool* get_address_of_scrollHor_5() { return &___scrollHor_5; }
	inline void set_scrollHor_5(bool value)
	{
		___scrollHor_5 = value;
	}

	inline static int32_t get_offset_of_dragOrigin_6() { return static_cast<int32_t>(offsetof(CameraMover_t2845631541, ___dragOrigin_6)); }
	inline Vector3_t3722313464  get_dragOrigin_6() const { return ___dragOrigin_6; }
	inline Vector3_t3722313464 * get_address_of_dragOrigin_6() { return &___dragOrigin_6; }
	inline void set_dragOrigin_6(Vector3_t3722313464  value)
	{
		___dragOrigin_6 = value;
	}

	inline static int32_t get_offset_of_dragStartTime_7() { return static_cast<int32_t>(offsetof(CameraMover_t2845631541, ___dragStartTime_7)); }
	inline float get_dragStartTime_7() const { return ___dragStartTime_7; }
	inline float* get_address_of_dragStartTime_7() { return &___dragStartTime_7; }
	inline void set_dragStartTime_7(float value)
	{
		___dragStartTime_7 = value;
	}

	inline static int32_t get_offset_of_dragTimeThreshold_8() { return static_cast<int32_t>(offsetof(CameraMover_t2845631541, ___dragTimeThreshold_8)); }
	inline float get_dragTimeThreshold_8() const { return ___dragTimeThreshold_8; }
	inline float* get_address_of_dragTimeThreshold_8() { return &___dragTimeThreshold_8; }
	inline void set_dragTimeThreshold_8(float value)
	{
		___dragTimeThreshold_8 = value;
	}

	inline static int32_t get_offset_of_leftBound_9() { return static_cast<int32_t>(offsetof(CameraMover_t2845631541, ___leftBound_9)); }
	inline float get_leftBound_9() const { return ___leftBound_9; }
	inline float* get_address_of_leftBound_9() { return &___leftBound_9; }
	inline void set_leftBound_9(float value)
	{
		___leftBound_9 = value;
	}

	inline static int32_t get_offset_of_rightBound_10() { return static_cast<int32_t>(offsetof(CameraMover_t2845631541, ___rightBound_10)); }
	inline float get_rightBound_10() const { return ___rightBound_10; }
	inline float* get_address_of_rightBound_10() { return &___rightBound_10; }
	inline void set_rightBound_10(float value)
	{
		___rightBound_10 = value;
	}

	inline static int32_t get_offset_of_upperBound_11() { return static_cast<int32_t>(offsetof(CameraMover_t2845631541, ___upperBound_11)); }
	inline float get_upperBound_11() const { return ___upperBound_11; }
	inline float* get_address_of_upperBound_11() { return &___upperBound_11; }
	inline void set_upperBound_11(float value)
	{
		___upperBound_11 = value;
	}

	inline static int32_t get_offset_of_lowerBound_12() { return static_cast<int32_t>(offsetof(CameraMover_t2845631541, ___lowerBound_12)); }
	inline float get_lowerBound_12() const { return ___lowerBound_12; }
	inline float* get_address_of_lowerBound_12() { return &___lowerBound_12; }
	inline void set_lowerBound_12(float value)
	{
		___lowerBound_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAMOVER_T2845631541_H
#ifndef UI_T167124789_H
#define UI_T167124789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UI
struct  UI_t167124789  : public MonoBehaviour_t3962482529
{
public:
	// RunUI UI::runControls
	RunUI_t3214653273 * ___runControls_3;
	// MachineUI UI::machines
	MachineUI_t252077060 * ___machines_4;
	// SelectUI UI::select
	SelectUI_t1349636119 * ___select_5;

public:
	inline static int32_t get_offset_of_runControls_3() { return static_cast<int32_t>(offsetof(UI_t167124789, ___runControls_3)); }
	inline RunUI_t3214653273 * get_runControls_3() const { return ___runControls_3; }
	inline RunUI_t3214653273 ** get_address_of_runControls_3() { return &___runControls_3; }
	inline void set_runControls_3(RunUI_t3214653273 * value)
	{
		___runControls_3 = value;
		Il2CppCodeGenWriteBarrier((&___runControls_3), value);
	}

	inline static int32_t get_offset_of_machines_4() { return static_cast<int32_t>(offsetof(UI_t167124789, ___machines_4)); }
	inline MachineUI_t252077060 * get_machines_4() const { return ___machines_4; }
	inline MachineUI_t252077060 ** get_address_of_machines_4() { return &___machines_4; }
	inline void set_machines_4(MachineUI_t252077060 * value)
	{
		___machines_4 = value;
		Il2CppCodeGenWriteBarrier((&___machines_4), value);
	}

	inline static int32_t get_offset_of_select_5() { return static_cast<int32_t>(offsetof(UI_t167124789, ___select_5)); }
	inline SelectUI_t1349636119 * get_select_5() const { return ___select_5; }
	inline SelectUI_t1349636119 ** get_address_of_select_5() { return &___select_5; }
	inline void set_select_5(SelectUI_t1349636119 * value)
	{
		___select_5 = value;
		Il2CppCodeGenWriteBarrier((&___select_5), value);
	}
};

struct UI_t167124789_StaticFields
{
public:
	// UI UI::instance
	UI_t167124789 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(UI_t167124789_StaticFields, ___instance_2)); }
	inline UI_t167124789 * get_instance_2() const { return ___instance_2; }
	inline UI_t167124789 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(UI_t167124789 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___instance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UI_T167124789_H
#ifndef TAP_T1232705552_H
#define TAP_T1232705552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tap
struct  Tap_t1232705552  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Tap::isStarted
	bool ___isStarted_2;
	// System.Boolean Tap::isHeld
	bool ___isHeld_3;
	// UnityEngine.GameObject Tap::cameraGob
	GameObject_t1113636619 * ___cameraGob_4;
	// CameraMover Tap::cameraMover
	CameraMover_t2845631541 * ___cameraMover_5;

public:
	inline static int32_t get_offset_of_isStarted_2() { return static_cast<int32_t>(offsetof(Tap_t1232705552, ___isStarted_2)); }
	inline bool get_isStarted_2() const { return ___isStarted_2; }
	inline bool* get_address_of_isStarted_2() { return &___isStarted_2; }
	inline void set_isStarted_2(bool value)
	{
		___isStarted_2 = value;
	}

	inline static int32_t get_offset_of_isHeld_3() { return static_cast<int32_t>(offsetof(Tap_t1232705552, ___isHeld_3)); }
	inline bool get_isHeld_3() const { return ___isHeld_3; }
	inline bool* get_address_of_isHeld_3() { return &___isHeld_3; }
	inline void set_isHeld_3(bool value)
	{
		___isHeld_3 = value;
	}

	inline static int32_t get_offset_of_cameraGob_4() { return static_cast<int32_t>(offsetof(Tap_t1232705552, ___cameraGob_4)); }
	inline GameObject_t1113636619 * get_cameraGob_4() const { return ___cameraGob_4; }
	inline GameObject_t1113636619 ** get_address_of_cameraGob_4() { return &___cameraGob_4; }
	inline void set_cameraGob_4(GameObject_t1113636619 * value)
	{
		___cameraGob_4 = value;
		Il2CppCodeGenWriteBarrier((&___cameraGob_4), value);
	}

	inline static int32_t get_offset_of_cameraMover_5() { return static_cast<int32_t>(offsetof(Tap_t1232705552, ___cameraMover_5)); }
	inline CameraMover_t2845631541 * get_cameraMover_5() const { return ___cameraMover_5; }
	inline CameraMover_t2845631541 ** get_address_of_cameraMover_5() { return &___cameraMover_5; }
	inline void set_cameraMover_5(CameraMover_t2845631541 * value)
	{
		___cameraMover_5 = value;
		Il2CppCodeGenWriteBarrier((&___cameraMover_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAP_T1232705552_H
#ifndef RUNUI_T3214653273_H
#define RUNUI_T3214653273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RunUI
struct  RunUI_t3214653273  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject RunUI::playPauseBtn
	GameObject_t1113636619 * ___playPauseBtn_2;
	// UnityEngine.GameObject RunUI::fastForwardBtn
	GameObject_t1113636619 * ___fastForwardBtn_3;
	// UnityEngine.GameObject RunUI::resetBtn
	GameObject_t1113636619 * ___resetBtn_4;
	// UnityEngine.GameObject RunUI::clearBtn
	GameObject_t1113636619 * ___clearBtn_5;
	// UnityEngine.UI.Text RunUI::playPause
	Text_t1901882714 * ___playPause_6;

public:
	inline static int32_t get_offset_of_playPauseBtn_2() { return static_cast<int32_t>(offsetof(RunUI_t3214653273, ___playPauseBtn_2)); }
	inline GameObject_t1113636619 * get_playPauseBtn_2() const { return ___playPauseBtn_2; }
	inline GameObject_t1113636619 ** get_address_of_playPauseBtn_2() { return &___playPauseBtn_2; }
	inline void set_playPauseBtn_2(GameObject_t1113636619 * value)
	{
		___playPauseBtn_2 = value;
		Il2CppCodeGenWriteBarrier((&___playPauseBtn_2), value);
	}

	inline static int32_t get_offset_of_fastForwardBtn_3() { return static_cast<int32_t>(offsetof(RunUI_t3214653273, ___fastForwardBtn_3)); }
	inline GameObject_t1113636619 * get_fastForwardBtn_3() const { return ___fastForwardBtn_3; }
	inline GameObject_t1113636619 ** get_address_of_fastForwardBtn_3() { return &___fastForwardBtn_3; }
	inline void set_fastForwardBtn_3(GameObject_t1113636619 * value)
	{
		___fastForwardBtn_3 = value;
		Il2CppCodeGenWriteBarrier((&___fastForwardBtn_3), value);
	}

	inline static int32_t get_offset_of_resetBtn_4() { return static_cast<int32_t>(offsetof(RunUI_t3214653273, ___resetBtn_4)); }
	inline GameObject_t1113636619 * get_resetBtn_4() const { return ___resetBtn_4; }
	inline GameObject_t1113636619 ** get_address_of_resetBtn_4() { return &___resetBtn_4; }
	inline void set_resetBtn_4(GameObject_t1113636619 * value)
	{
		___resetBtn_4 = value;
		Il2CppCodeGenWriteBarrier((&___resetBtn_4), value);
	}

	inline static int32_t get_offset_of_clearBtn_5() { return static_cast<int32_t>(offsetof(RunUI_t3214653273, ___clearBtn_5)); }
	inline GameObject_t1113636619 * get_clearBtn_5() const { return ___clearBtn_5; }
	inline GameObject_t1113636619 ** get_address_of_clearBtn_5() { return &___clearBtn_5; }
	inline void set_clearBtn_5(GameObject_t1113636619 * value)
	{
		___clearBtn_5 = value;
		Il2CppCodeGenWriteBarrier((&___clearBtn_5), value);
	}

	inline static int32_t get_offset_of_playPause_6() { return static_cast<int32_t>(offsetof(RunUI_t3214653273, ___playPause_6)); }
	inline Text_t1901882714 * get_playPause_6() const { return ___playPause_6; }
	inline Text_t1901882714 ** get_address_of_playPause_6() { return &___playPause_6; }
	inline void set_playPause_6(Text_t1901882714 * value)
	{
		___playPause_6 = value;
		Il2CppCodeGenWriteBarrier((&___playPause_6), value);
	}
};

struct RunUI_t3214653273_StaticFields
{
public:
	// System.Action`1<Crate> RunUI::<>f__am$cache0
	Action_1_t3506550834 * ___U3CU3Ef__amU24cache0_7;
	// System.Action`1<Machine> RunUI::<>f__am$cache1
	Action_1_t4294877337 * ___U3CU3Ef__amU24cache1_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(RunUI_t3214653273_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Action_1_t3506550834 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Action_1_t3506550834 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Action_1_t3506550834 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_8() { return static_cast<int32_t>(offsetof(RunUI_t3214653273_StaticFields, ___U3CU3Ef__amU24cache1_8)); }
	inline Action_1_t4294877337 * get_U3CU3Ef__amU24cache1_8() const { return ___U3CU3Ef__amU24cache1_8; }
	inline Action_1_t4294877337 ** get_address_of_U3CU3Ef__amU24cache1_8() { return &___U3CU3Ef__amU24cache1_8; }
	inline void set_U3CU3Ef__amU24cache1_8(Action_1_t4294877337 * value)
	{
		___U3CU3Ef__amU24cache1_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNUI_T3214653273_H
#ifndef GRIDTHING_T3152339074_H
#define GRIDTHING_T3152339074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GridThing
struct  GridThing_t3152339074  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector2 GridThing::_xy
	Vector2_t2156229523  ____xy_2;

public:
	inline static int32_t get_offset_of__xy_2() { return static_cast<int32_t>(offsetof(GridThing_t3152339074, ____xy_2)); }
	inline Vector2_t2156229523  get__xy_2() const { return ____xy_2; }
	inline Vector2_t2156229523 * get_address_of__xy_2() { return &____xy_2; }
	inline void set__xy_2(Vector2_t2156229523  value)
	{
		____xy_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRIDTHING_T3152339074_H
#ifndef SELECTUI_T1349636119_H
#define SELECTUI_T1349636119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SelectUI
struct  SelectUI_t1349636119  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject[] SelectUI::buttons
	GameObjectU5BU5D_t3328599146* ___buttons_2;
	// UnityEngine.GameObject SelectUI::turnLeftBtn
	GameObject_t1113636619 * ___turnLeftBtn_3;
	// UnityEngine.GameObject SelectUI::turnRightBtn
	GameObject_t1113636619 * ___turnRightBtn_4;
	// UnityEngine.GameObject SelectUI::deleteBtn
	GameObject_t1113636619 * ___deleteBtn_5;
	// UnityEngine.GameObject SelectUI::selectedMachineGob
	GameObject_t1113636619 * ___selectedMachineGob_6;

public:
	inline static int32_t get_offset_of_buttons_2() { return static_cast<int32_t>(offsetof(SelectUI_t1349636119, ___buttons_2)); }
	inline GameObjectU5BU5D_t3328599146* get_buttons_2() const { return ___buttons_2; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_buttons_2() { return &___buttons_2; }
	inline void set_buttons_2(GameObjectU5BU5D_t3328599146* value)
	{
		___buttons_2 = value;
		Il2CppCodeGenWriteBarrier((&___buttons_2), value);
	}

	inline static int32_t get_offset_of_turnLeftBtn_3() { return static_cast<int32_t>(offsetof(SelectUI_t1349636119, ___turnLeftBtn_3)); }
	inline GameObject_t1113636619 * get_turnLeftBtn_3() const { return ___turnLeftBtn_3; }
	inline GameObject_t1113636619 ** get_address_of_turnLeftBtn_3() { return &___turnLeftBtn_3; }
	inline void set_turnLeftBtn_3(GameObject_t1113636619 * value)
	{
		___turnLeftBtn_3 = value;
		Il2CppCodeGenWriteBarrier((&___turnLeftBtn_3), value);
	}

	inline static int32_t get_offset_of_turnRightBtn_4() { return static_cast<int32_t>(offsetof(SelectUI_t1349636119, ___turnRightBtn_4)); }
	inline GameObject_t1113636619 * get_turnRightBtn_4() const { return ___turnRightBtn_4; }
	inline GameObject_t1113636619 ** get_address_of_turnRightBtn_4() { return &___turnRightBtn_4; }
	inline void set_turnRightBtn_4(GameObject_t1113636619 * value)
	{
		___turnRightBtn_4 = value;
		Il2CppCodeGenWriteBarrier((&___turnRightBtn_4), value);
	}

	inline static int32_t get_offset_of_deleteBtn_5() { return static_cast<int32_t>(offsetof(SelectUI_t1349636119, ___deleteBtn_5)); }
	inline GameObject_t1113636619 * get_deleteBtn_5() const { return ___deleteBtn_5; }
	inline GameObject_t1113636619 ** get_address_of_deleteBtn_5() { return &___deleteBtn_5; }
	inline void set_deleteBtn_5(GameObject_t1113636619 * value)
	{
		___deleteBtn_5 = value;
		Il2CppCodeGenWriteBarrier((&___deleteBtn_5), value);
	}

	inline static int32_t get_offset_of_selectedMachineGob_6() { return static_cast<int32_t>(offsetof(SelectUI_t1349636119, ___selectedMachineGob_6)); }
	inline GameObject_t1113636619 * get_selectedMachineGob_6() const { return ___selectedMachineGob_6; }
	inline GameObject_t1113636619 ** get_address_of_selectedMachineGob_6() { return &___selectedMachineGob_6; }
	inline void set_selectedMachineGob_6(GameObject_t1113636619 * value)
	{
		___selectedMachineGob_6 = value;
		Il2CppCodeGenWriteBarrier((&___selectedMachineGob_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTUI_T1349636119_H
#ifndef MACHINEUI_T252077060_H
#define MACHINEUI_T252077060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MachineUI
struct  MachineUI_t252077060  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject[] MachineUI::buttons
	GameObjectU5BU5D_t3328599146* ___buttons_2;
	// UnityEngine.GameObject MachineUI::conveyorBtn
	GameObject_t1113636619 * ___conveyorBtn_3;
	// UnityEngine.GameObject MachineUI::spinnerBtn
	GameObject_t1113636619 * ___spinnerBtn_4;
	// UnityEngine.GameObject MachineUI::welderBtn
	GameObject_t1113636619 * ___welderBtn_5;
	// UnityEngine.GameObject MachineUI::pusherBtn
	GameObject_t1113636619 * ___pusherBtn_6;
	// UnityEngine.GameObject MachineUI::sensorBtn
	GameObject_t1113636619 * ___sensorBtn_7;
	// UnityEngine.GameObject MachineUI::wireBtn
	GameObject_t1113636619 * ___wireBtn_8;
	// UnityEngine.GameObject MachineUI::conveyorPrefab
	GameObject_t1113636619 * ___conveyorPrefab_9;
	// UnityEngine.GameObject MachineUI::spinnerPrefab
	GameObject_t1113636619 * ___spinnerPrefab_10;
	// UnityEngine.GameObject MachineUI::welderPrefab
	GameObject_t1113636619 * ___welderPrefab_11;
	// UnityEngine.GameObject MachineUI::pusherPrefab
	GameObject_t1113636619 * ___pusherPrefab_12;
	// UnityEngine.GameObject MachineUI::sensorPrefab
	GameObject_t1113636619 * ___sensorPrefab_13;
	// UnityEngine.GameObject MachineUI::wirePrefab
	GameObject_t1113636619 * ___wirePrefab_14;
	// UnityEngine.GameObject MachineUI::toPlace
	GameObject_t1113636619 * ___toPlace_15;

public:
	inline static int32_t get_offset_of_buttons_2() { return static_cast<int32_t>(offsetof(MachineUI_t252077060, ___buttons_2)); }
	inline GameObjectU5BU5D_t3328599146* get_buttons_2() const { return ___buttons_2; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_buttons_2() { return &___buttons_2; }
	inline void set_buttons_2(GameObjectU5BU5D_t3328599146* value)
	{
		___buttons_2 = value;
		Il2CppCodeGenWriteBarrier((&___buttons_2), value);
	}

	inline static int32_t get_offset_of_conveyorBtn_3() { return static_cast<int32_t>(offsetof(MachineUI_t252077060, ___conveyorBtn_3)); }
	inline GameObject_t1113636619 * get_conveyorBtn_3() const { return ___conveyorBtn_3; }
	inline GameObject_t1113636619 ** get_address_of_conveyorBtn_3() { return &___conveyorBtn_3; }
	inline void set_conveyorBtn_3(GameObject_t1113636619 * value)
	{
		___conveyorBtn_3 = value;
		Il2CppCodeGenWriteBarrier((&___conveyorBtn_3), value);
	}

	inline static int32_t get_offset_of_spinnerBtn_4() { return static_cast<int32_t>(offsetof(MachineUI_t252077060, ___spinnerBtn_4)); }
	inline GameObject_t1113636619 * get_spinnerBtn_4() const { return ___spinnerBtn_4; }
	inline GameObject_t1113636619 ** get_address_of_spinnerBtn_4() { return &___spinnerBtn_4; }
	inline void set_spinnerBtn_4(GameObject_t1113636619 * value)
	{
		___spinnerBtn_4 = value;
		Il2CppCodeGenWriteBarrier((&___spinnerBtn_4), value);
	}

	inline static int32_t get_offset_of_welderBtn_5() { return static_cast<int32_t>(offsetof(MachineUI_t252077060, ___welderBtn_5)); }
	inline GameObject_t1113636619 * get_welderBtn_5() const { return ___welderBtn_5; }
	inline GameObject_t1113636619 ** get_address_of_welderBtn_5() { return &___welderBtn_5; }
	inline void set_welderBtn_5(GameObject_t1113636619 * value)
	{
		___welderBtn_5 = value;
		Il2CppCodeGenWriteBarrier((&___welderBtn_5), value);
	}

	inline static int32_t get_offset_of_pusherBtn_6() { return static_cast<int32_t>(offsetof(MachineUI_t252077060, ___pusherBtn_6)); }
	inline GameObject_t1113636619 * get_pusherBtn_6() const { return ___pusherBtn_6; }
	inline GameObject_t1113636619 ** get_address_of_pusherBtn_6() { return &___pusherBtn_6; }
	inline void set_pusherBtn_6(GameObject_t1113636619 * value)
	{
		___pusherBtn_6 = value;
		Il2CppCodeGenWriteBarrier((&___pusherBtn_6), value);
	}

	inline static int32_t get_offset_of_sensorBtn_7() { return static_cast<int32_t>(offsetof(MachineUI_t252077060, ___sensorBtn_7)); }
	inline GameObject_t1113636619 * get_sensorBtn_7() const { return ___sensorBtn_7; }
	inline GameObject_t1113636619 ** get_address_of_sensorBtn_7() { return &___sensorBtn_7; }
	inline void set_sensorBtn_7(GameObject_t1113636619 * value)
	{
		___sensorBtn_7 = value;
		Il2CppCodeGenWriteBarrier((&___sensorBtn_7), value);
	}

	inline static int32_t get_offset_of_wireBtn_8() { return static_cast<int32_t>(offsetof(MachineUI_t252077060, ___wireBtn_8)); }
	inline GameObject_t1113636619 * get_wireBtn_8() const { return ___wireBtn_8; }
	inline GameObject_t1113636619 ** get_address_of_wireBtn_8() { return &___wireBtn_8; }
	inline void set_wireBtn_8(GameObject_t1113636619 * value)
	{
		___wireBtn_8 = value;
		Il2CppCodeGenWriteBarrier((&___wireBtn_8), value);
	}

	inline static int32_t get_offset_of_conveyorPrefab_9() { return static_cast<int32_t>(offsetof(MachineUI_t252077060, ___conveyorPrefab_9)); }
	inline GameObject_t1113636619 * get_conveyorPrefab_9() const { return ___conveyorPrefab_9; }
	inline GameObject_t1113636619 ** get_address_of_conveyorPrefab_9() { return &___conveyorPrefab_9; }
	inline void set_conveyorPrefab_9(GameObject_t1113636619 * value)
	{
		___conveyorPrefab_9 = value;
		Il2CppCodeGenWriteBarrier((&___conveyorPrefab_9), value);
	}

	inline static int32_t get_offset_of_spinnerPrefab_10() { return static_cast<int32_t>(offsetof(MachineUI_t252077060, ___spinnerPrefab_10)); }
	inline GameObject_t1113636619 * get_spinnerPrefab_10() const { return ___spinnerPrefab_10; }
	inline GameObject_t1113636619 ** get_address_of_spinnerPrefab_10() { return &___spinnerPrefab_10; }
	inline void set_spinnerPrefab_10(GameObject_t1113636619 * value)
	{
		___spinnerPrefab_10 = value;
		Il2CppCodeGenWriteBarrier((&___spinnerPrefab_10), value);
	}

	inline static int32_t get_offset_of_welderPrefab_11() { return static_cast<int32_t>(offsetof(MachineUI_t252077060, ___welderPrefab_11)); }
	inline GameObject_t1113636619 * get_welderPrefab_11() const { return ___welderPrefab_11; }
	inline GameObject_t1113636619 ** get_address_of_welderPrefab_11() { return &___welderPrefab_11; }
	inline void set_welderPrefab_11(GameObject_t1113636619 * value)
	{
		___welderPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((&___welderPrefab_11), value);
	}

	inline static int32_t get_offset_of_pusherPrefab_12() { return static_cast<int32_t>(offsetof(MachineUI_t252077060, ___pusherPrefab_12)); }
	inline GameObject_t1113636619 * get_pusherPrefab_12() const { return ___pusherPrefab_12; }
	inline GameObject_t1113636619 ** get_address_of_pusherPrefab_12() { return &___pusherPrefab_12; }
	inline void set_pusherPrefab_12(GameObject_t1113636619 * value)
	{
		___pusherPrefab_12 = value;
		Il2CppCodeGenWriteBarrier((&___pusherPrefab_12), value);
	}

	inline static int32_t get_offset_of_sensorPrefab_13() { return static_cast<int32_t>(offsetof(MachineUI_t252077060, ___sensorPrefab_13)); }
	inline GameObject_t1113636619 * get_sensorPrefab_13() const { return ___sensorPrefab_13; }
	inline GameObject_t1113636619 ** get_address_of_sensorPrefab_13() { return &___sensorPrefab_13; }
	inline void set_sensorPrefab_13(GameObject_t1113636619 * value)
	{
		___sensorPrefab_13 = value;
		Il2CppCodeGenWriteBarrier((&___sensorPrefab_13), value);
	}

	inline static int32_t get_offset_of_wirePrefab_14() { return static_cast<int32_t>(offsetof(MachineUI_t252077060, ___wirePrefab_14)); }
	inline GameObject_t1113636619 * get_wirePrefab_14() const { return ___wirePrefab_14; }
	inline GameObject_t1113636619 ** get_address_of_wirePrefab_14() { return &___wirePrefab_14; }
	inline void set_wirePrefab_14(GameObject_t1113636619 * value)
	{
		___wirePrefab_14 = value;
		Il2CppCodeGenWriteBarrier((&___wirePrefab_14), value);
	}

	inline static int32_t get_offset_of_toPlace_15() { return static_cast<int32_t>(offsetof(MachineUI_t252077060, ___toPlace_15)); }
	inline GameObject_t1113636619 * get_toPlace_15() const { return ___toPlace_15; }
	inline GameObject_t1113636619 ** get_address_of_toPlace_15() { return &___toPlace_15; }
	inline void set_toPlace_15(GameObject_t1113636619 * value)
	{
		___toPlace_15 = value;
		Il2CppCodeGenWriteBarrier((&___toPlace_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACHINEUI_T252077060_H
#ifndef PAINT_T1033728073_H
#define PAINT_T1033728073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Paint
struct  Paint_t1033728073  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector2 Paint::_xy
	Vector2_t2156229523  ____xy_2;

public:
	inline static int32_t get_offset_of__xy_2() { return static_cast<int32_t>(offsetof(Paint_t1033728073, ____xy_2)); }
	inline Vector2_t2156229523  get__xy_2() const { return ____xy_2; }
	inline Vector2_t2156229523 * get_address_of__xy_2() { return &____xy_2; }
	inline void set__xy_2(Vector2_t2156229523  value)
	{
		____xy_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAINT_T1033728073_H
#ifndef GAMEMANAGER_T1536523654_H
#define GAMEMANAGER_T1536523654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t1536523654  : public MonoBehaviour_t3962482529
{
public:
	// StairMaster GameManager::stairMaster
	StairMaster_t3581666356 * ___stairMaster_3;
	// Tap GameManager::tap
	Tap_t1232705552 * ___tap_4;
	// System.Int32 GameManager::height
	int32_t ___height_5;
	// System.Int32 GameManager::width
	int32_t ___width_6;

public:
	inline static int32_t get_offset_of_stairMaster_3() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___stairMaster_3)); }
	inline StairMaster_t3581666356 * get_stairMaster_3() const { return ___stairMaster_3; }
	inline StairMaster_t3581666356 ** get_address_of_stairMaster_3() { return &___stairMaster_3; }
	inline void set_stairMaster_3(StairMaster_t3581666356 * value)
	{
		___stairMaster_3 = value;
		Il2CppCodeGenWriteBarrier((&___stairMaster_3), value);
	}

	inline static int32_t get_offset_of_tap_4() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___tap_4)); }
	inline Tap_t1232705552 * get_tap_4() const { return ___tap_4; }
	inline Tap_t1232705552 ** get_address_of_tap_4() { return &___tap_4; }
	inline void set_tap_4(Tap_t1232705552 * value)
	{
		___tap_4 = value;
		Il2CppCodeGenWriteBarrier((&___tap_4), value);
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___height_5)); }
	inline int32_t get_height_5() const { return ___height_5; }
	inline int32_t* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(int32_t value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_width_6() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___width_6)); }
	inline int32_t get_width_6() const { return ___width_6; }
	inline int32_t* get_address_of_width_6() { return &___width_6; }
	inline void set_width_6(int32_t value)
	{
		___width_6 = value;
	}
};

struct GameManager_t1536523654_StaticFields
{
public:
	// GameManager GameManager::instance
	GameManager_t1536523654 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GameManager_t1536523654_StaticFields, ___instance_2)); }
	inline GameManager_t1536523654 * get_instance_2() const { return ___instance_2; }
	inline GameManager_t1536523654 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GameManager_t1536523654 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___instance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEMANAGER_T1536523654_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef EVENTSYSTEM_T1003666588_H
#define EVENTSYSTEM_T1003666588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t1003666588  : public UIBehaviour_t3495933518
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t3491343620 * ___m_SystemInputModules_2;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t2019268878 * ___m_CurrentInputModule_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t1113636619 * ___m_FirstSelected_5;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_6;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_7;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t1113636619 * ___m_CurrentSelected_8;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_9;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_10;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t3903027533 * ___m_DummyData_11;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_2() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_SystemInputModules_2)); }
	inline List_1_t3491343620 * get_m_SystemInputModules_2() const { return ___m_SystemInputModules_2; }
	inline List_1_t3491343620 ** get_address_of_m_SystemInputModules_2() { return &___m_SystemInputModules_2; }
	inline void set_m_SystemInputModules_2(List_1_t3491343620 * value)
	{
		___m_SystemInputModules_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SystemInputModules_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_3() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_CurrentInputModule_3)); }
	inline BaseInputModule_t2019268878 * get_m_CurrentInputModule_3() const { return ___m_CurrentInputModule_3; }
	inline BaseInputModule_t2019268878 ** get_address_of_m_CurrentInputModule_3() { return &___m_CurrentInputModule_3; }
	inline void set_m_CurrentInputModule_3(BaseInputModule_t2019268878 * value)
	{
		___m_CurrentInputModule_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentInputModule_3), value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_5() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_FirstSelected_5)); }
	inline GameObject_t1113636619 * get_m_FirstSelected_5() const { return ___m_FirstSelected_5; }
	inline GameObject_t1113636619 ** get_address_of_m_FirstSelected_5() { return &___m_FirstSelected_5; }
	inline void set_m_FirstSelected_5(GameObject_t1113636619 * value)
	{
		___m_FirstSelected_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_FirstSelected_5), value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_6() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_sendNavigationEvents_6)); }
	inline bool get_m_sendNavigationEvents_6() const { return ___m_sendNavigationEvents_6; }
	inline bool* get_address_of_m_sendNavigationEvents_6() { return &___m_sendNavigationEvents_6; }
	inline void set_m_sendNavigationEvents_6(bool value)
	{
		___m_sendNavigationEvents_6 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_7() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_DragThreshold_7)); }
	inline int32_t get_m_DragThreshold_7() const { return ___m_DragThreshold_7; }
	inline int32_t* get_address_of_m_DragThreshold_7() { return &___m_DragThreshold_7; }
	inline void set_m_DragThreshold_7(int32_t value)
	{
		___m_DragThreshold_7 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_8() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_CurrentSelected_8)); }
	inline GameObject_t1113636619 * get_m_CurrentSelected_8() const { return ___m_CurrentSelected_8; }
	inline GameObject_t1113636619 ** get_address_of_m_CurrentSelected_8() { return &___m_CurrentSelected_8; }
	inline void set_m_CurrentSelected_8(GameObject_t1113636619 * value)
	{
		___m_CurrentSelected_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentSelected_8), value);
	}

	inline static int32_t get_offset_of_m_HasFocus_9() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_HasFocus_9)); }
	inline bool get_m_HasFocus_9() const { return ___m_HasFocus_9; }
	inline bool* get_address_of_m_HasFocus_9() { return &___m_HasFocus_9; }
	inline void set_m_HasFocus_9(bool value)
	{
		___m_HasFocus_9 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_10() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_SelectionGuard_10)); }
	inline bool get_m_SelectionGuard_10() const { return ___m_SelectionGuard_10; }
	inline bool* get_address_of_m_SelectionGuard_10() { return &___m_SelectionGuard_10; }
	inline void set_m_SelectionGuard_10(bool value)
	{
		___m_SelectionGuard_10 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_11() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_DummyData_11)); }
	inline BaseEventData_t3903027533 * get_m_DummyData_11() const { return ___m_DummyData_11; }
	inline BaseEventData_t3903027533 ** get_address_of_m_DummyData_11() { return &___m_DummyData_11; }
	inline void set_m_DummyData_11(BaseEventData_t3903027533 * value)
	{
		___m_DummyData_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_DummyData_11), value);
	}
};

struct EventSystem_t1003666588_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t2475741330 * ___m_EventSystems_4;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t3135238028 * ___s_RaycastComparer_12;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::<>f__mg$cache0
	Comparison_1_t3135238028 * ___U3CU3Ef__mgU24cache0_13;

public:
	inline static int32_t get_offset_of_m_EventSystems_4() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___m_EventSystems_4)); }
	inline List_1_t2475741330 * get_m_EventSystems_4() const { return ___m_EventSystems_4; }
	inline List_1_t2475741330 ** get_address_of_m_EventSystems_4() { return &___m_EventSystems_4; }
	inline void set_m_EventSystems_4(List_1_t2475741330 * value)
	{
		___m_EventSystems_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystems_4), value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_12() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___s_RaycastComparer_12)); }
	inline Comparison_1_t3135238028 * get_s_RaycastComparer_12() const { return ___s_RaycastComparer_12; }
	inline Comparison_1_t3135238028 ** get_address_of_s_RaycastComparer_12() { return &___s_RaycastComparer_12; }
	inline void set_s_RaycastComparer_12(Comparison_1_t3135238028 * value)
	{
		___s_RaycastComparer_12 = value;
		Il2CppCodeGenWriteBarrier((&___s_RaycastComparer_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_13() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___U3CU3Ef__mgU24cache0_13)); }
	inline Comparison_1_t3135238028 * get_U3CU3Ef__mgU24cache0_13() const { return ___U3CU3Ef__mgU24cache0_13; }
	inline Comparison_1_t3135238028 ** get_address_of_U3CU3Ef__mgU24cache0_13() { return &___U3CU3Ef__mgU24cache0_13; }
	inline void set_U3CU3Ef__mgU24cache0_13(Comparison_1_t3135238028 * value)
	{
		___U3CU3Ef__mgU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTSYSTEM_T1003666588_H
#ifndef CRATE_T3334083239_H
#define CRATE_T3334083239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Crate
struct  Crate_t3334083239  : public GridThing_t3152339074
{
public:
	// UnityEngine.GameObject Crate::paintPrefab
	GameObject_t1113636619 * ___paintPrefab_3;
	// CrateGroup Crate::group
	CrateGroup_t1115957032 * ___group_4;
	// System.Boolean Crate::hasMoved
	bool ___hasMoved_5;
	// System.Int32[] Crate::painted
	Int32U5BU5D_t385246372* ___painted_6;

public:
	inline static int32_t get_offset_of_paintPrefab_3() { return static_cast<int32_t>(offsetof(Crate_t3334083239, ___paintPrefab_3)); }
	inline GameObject_t1113636619 * get_paintPrefab_3() const { return ___paintPrefab_3; }
	inline GameObject_t1113636619 ** get_address_of_paintPrefab_3() { return &___paintPrefab_3; }
	inline void set_paintPrefab_3(GameObject_t1113636619 * value)
	{
		___paintPrefab_3 = value;
		Il2CppCodeGenWriteBarrier((&___paintPrefab_3), value);
	}

	inline static int32_t get_offset_of_group_4() { return static_cast<int32_t>(offsetof(Crate_t3334083239, ___group_4)); }
	inline CrateGroup_t1115957032 * get_group_4() const { return ___group_4; }
	inline CrateGroup_t1115957032 ** get_address_of_group_4() { return &___group_4; }
	inline void set_group_4(CrateGroup_t1115957032 * value)
	{
		___group_4 = value;
		Il2CppCodeGenWriteBarrier((&___group_4), value);
	}

	inline static int32_t get_offset_of_hasMoved_5() { return static_cast<int32_t>(offsetof(Crate_t3334083239, ___hasMoved_5)); }
	inline bool get_hasMoved_5() const { return ___hasMoved_5; }
	inline bool* get_address_of_hasMoved_5() { return &___hasMoved_5; }
	inline void set_hasMoved_5(bool value)
	{
		___hasMoved_5 = value;
	}

	inline static int32_t get_offset_of_painted_6() { return static_cast<int32_t>(offsetof(Crate_t3334083239, ___painted_6)); }
	inline Int32U5BU5D_t385246372* get_painted_6() const { return ___painted_6; }
	inline Int32U5BU5D_t385246372** get_address_of_painted_6() { return &___painted_6; }
	inline void set_painted_6(Int32U5BU5D_t385246372* value)
	{
		___painted_6 = value;
		Il2CppCodeGenWriteBarrier((&___painted_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRATE_T3334083239_H
#ifndef MACHINE_T4122409742_H
#define MACHINE_T4122409742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Machine
struct  Machine_t4122409742  : public GridThing_t3152339074
{
public:
	// System.Boolean Machine::isObstacle
	bool ___isObstacle_3;
	// System.Boolean Machine::wasPlaced
	bool ___wasPlaced_4;

public:
	inline static int32_t get_offset_of_isObstacle_3() { return static_cast<int32_t>(offsetof(Machine_t4122409742, ___isObstacle_3)); }
	inline bool get_isObstacle_3() const { return ___isObstacle_3; }
	inline bool* get_address_of_isObstacle_3() { return &___isObstacle_3; }
	inline void set_isObstacle_3(bool value)
	{
		___isObstacle_3 = value;
	}

	inline static int32_t get_offset_of_wasPlaced_4() { return static_cast<int32_t>(offsetof(Machine_t4122409742, ___wasPlaced_4)); }
	inline bool get_wasPlaced_4() const { return ___wasPlaced_4; }
	inline bool* get_address_of_wasPlaced_4() { return &___wasPlaced_4; }
	inline void set_wasPlaced_4(bool value)
	{
		___wasPlaced_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACHINE_T4122409742_H
#ifndef GENERATOR_T2248380420_H
#define GENERATOR_T2248380420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Generator
struct  Generator_t2248380420  : public Machine_t4122409742
{
public:
	// UnityEngine.GameObject Generator::cratePrefab
	GameObject_t1113636619 * ___cratePrefab_5;
	// UnityEngine.Vector2 Generator::direction
	Vector2_t2156229523  ___direction_6;
	// System.Int32 Generator::stepsPerCrate
	int32_t ___stepsPerCrate_7;
	// System.Int32 Generator::stepsSinceCrate
	int32_t ___stepsSinceCrate_8;

public:
	inline static int32_t get_offset_of_cratePrefab_5() { return static_cast<int32_t>(offsetof(Generator_t2248380420, ___cratePrefab_5)); }
	inline GameObject_t1113636619 * get_cratePrefab_5() const { return ___cratePrefab_5; }
	inline GameObject_t1113636619 ** get_address_of_cratePrefab_5() { return &___cratePrefab_5; }
	inline void set_cratePrefab_5(GameObject_t1113636619 * value)
	{
		___cratePrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___cratePrefab_5), value);
	}

	inline static int32_t get_offset_of_direction_6() { return static_cast<int32_t>(offsetof(Generator_t2248380420, ___direction_6)); }
	inline Vector2_t2156229523  get_direction_6() const { return ___direction_6; }
	inline Vector2_t2156229523 * get_address_of_direction_6() { return &___direction_6; }
	inline void set_direction_6(Vector2_t2156229523  value)
	{
		___direction_6 = value;
	}

	inline static int32_t get_offset_of_stepsPerCrate_7() { return static_cast<int32_t>(offsetof(Generator_t2248380420, ___stepsPerCrate_7)); }
	inline int32_t get_stepsPerCrate_7() const { return ___stepsPerCrate_7; }
	inline int32_t* get_address_of_stepsPerCrate_7() { return &___stepsPerCrate_7; }
	inline void set_stepsPerCrate_7(int32_t value)
	{
		___stepsPerCrate_7 = value;
	}

	inline static int32_t get_offset_of_stepsSinceCrate_8() { return static_cast<int32_t>(offsetof(Generator_t2248380420, ___stepsSinceCrate_8)); }
	inline int32_t get_stepsSinceCrate_8() const { return ___stepsSinceCrate_8; }
	inline int32_t* get_address_of_stepsSinceCrate_8() { return &___stepsSinceCrate_8; }
	inline void set_stepsSinceCrate_8(int32_t value)
	{
		___stepsSinceCrate_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERATOR_T2248380420_H
#ifndef DROPZONE_T3709174205_H
#define DROPZONE_T3709174205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DropZone
struct  DropZone_t3709174205  : public Machine_t4122409742
{
public:
	// UnityEngine.GameObject DropZone::paintPrefab
	GameObject_t1113636619 * ___paintPrefab_5;
	// System.Boolean[] DropZone::paintEncoding
	BooleanU5BU5D_t2897418192* ___paintEncoding_6;
	// DropZoneGroup DropZone::group
	DropZoneGroup_t2340995414 * ___group_7;

public:
	inline static int32_t get_offset_of_paintPrefab_5() { return static_cast<int32_t>(offsetof(DropZone_t3709174205, ___paintPrefab_5)); }
	inline GameObject_t1113636619 * get_paintPrefab_5() const { return ___paintPrefab_5; }
	inline GameObject_t1113636619 ** get_address_of_paintPrefab_5() { return &___paintPrefab_5; }
	inline void set_paintPrefab_5(GameObject_t1113636619 * value)
	{
		___paintPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___paintPrefab_5), value);
	}

	inline static int32_t get_offset_of_paintEncoding_6() { return static_cast<int32_t>(offsetof(DropZone_t3709174205, ___paintEncoding_6)); }
	inline BooleanU5BU5D_t2897418192* get_paintEncoding_6() const { return ___paintEncoding_6; }
	inline BooleanU5BU5D_t2897418192** get_address_of_paintEncoding_6() { return &___paintEncoding_6; }
	inline void set_paintEncoding_6(BooleanU5BU5D_t2897418192* value)
	{
		___paintEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___paintEncoding_6), value);
	}

	inline static int32_t get_offset_of_group_7() { return static_cast<int32_t>(offsetof(DropZone_t3709174205, ___group_7)); }
	inline DropZoneGroup_t2340995414 * get_group_7() const { return ___group_7; }
	inline DropZoneGroup_t2340995414 ** get_address_of_group_7() { return &___group_7; }
	inline void set_group_7(DropZoneGroup_t2340995414 * value)
	{
		___group_7 = value;
		Il2CppCodeGenWriteBarrier((&___group_7), value);
	}
};

struct DropZone_t3709174205_StaticFields
{
public:
	// UnityEngine.Vector2[] DropZone::cardinalDirections
	Vector2U5BU5D_t1457185986* ___cardinalDirections_8;

public:
	inline static int32_t get_offset_of_cardinalDirections_8() { return static_cast<int32_t>(offsetof(DropZone_t3709174205_StaticFields, ___cardinalDirections_8)); }
	inline Vector2U5BU5D_t1457185986* get_cardinalDirections_8() const { return ___cardinalDirections_8; }
	inline Vector2U5BU5D_t1457185986** get_address_of_cardinalDirections_8() { return &___cardinalDirections_8; }
	inline void set_cardinalDirections_8(Vector2U5BU5D_t1457185986* value)
	{
		___cardinalDirections_8 = value;
		Il2CppCodeGenWriteBarrier((&___cardinalDirections_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DROPZONE_T3709174205_H
#ifndef BUTTON_T4055032469_H
#define BUTTON_T4055032469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button
struct  Button_t4055032469  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t48803504 * ___m_OnClick_16;

public:
	inline static int32_t get_offset_of_m_OnClick_16() { return static_cast<int32_t>(offsetof(Button_t4055032469, ___m_OnClick_16)); }
	inline ButtonClickedEvent_t48803504 * get_m_OnClick_16() const { return ___m_OnClick_16; }
	inline ButtonClickedEvent_t48803504 ** get_address_of_m_OnClick_16() { return &___m_OnClick_16; }
	inline void set_m_OnClick_16(ButtonClickedEvent_t48803504 * value)
	{
		___m_OnClick_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnClick_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTON_T4055032469_H
#ifndef WALL_T2206666577_H
#define WALL_T2206666577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wall
struct  Wall_t2206666577  : public Machine_t4122409742
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WALL_T2206666577_H
#ifndef WELDER_T3775122660_H
#define WELDER_T3775122660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Welder
struct  Welder_t3775122660  : public Machine_t4122409742
{
public:
	// UnityEngine.Vector2 Welder::direction
	Vector2_t2156229523  ___direction_5;
	// System.Boolean Welder::hasWelded
	bool ___hasWelded_6;

public:
	inline static int32_t get_offset_of_direction_5() { return static_cast<int32_t>(offsetof(Welder_t3775122660, ___direction_5)); }
	inline Vector2_t2156229523  get_direction_5() const { return ___direction_5; }
	inline Vector2_t2156229523 * get_address_of_direction_5() { return &___direction_5; }
	inline void set_direction_5(Vector2_t2156229523  value)
	{
		___direction_5 = value;
	}

	inline static int32_t get_offset_of_hasWelded_6() { return static_cast<int32_t>(offsetof(Welder_t3775122660, ___hasWelded_6)); }
	inline bool get_hasWelded_6() const { return ___hasWelded_6; }
	inline bool* get_address_of_hasWelded_6() { return &___hasWelded_6; }
	inline void set_hasWelded_6(bool value)
	{
		___hasWelded_6 = value;
	}
};

struct Welder_t3775122660_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Welder::weldSquares
	List_1_t3628304265 * ___weldSquares_7;
	// UnityEngine.Vector2[] Welder::cardinalDirections
	Vector2U5BU5D_t1457185986* ___cardinalDirections_8;
	// System.Action`1<Machine> Welder::<>f__am$cache0
	Action_1_t4294877337 * ___U3CU3Ef__amU24cache0_9;

public:
	inline static int32_t get_offset_of_weldSquares_7() { return static_cast<int32_t>(offsetof(Welder_t3775122660_StaticFields, ___weldSquares_7)); }
	inline List_1_t3628304265 * get_weldSquares_7() const { return ___weldSquares_7; }
	inline List_1_t3628304265 ** get_address_of_weldSquares_7() { return &___weldSquares_7; }
	inline void set_weldSquares_7(List_1_t3628304265 * value)
	{
		___weldSquares_7 = value;
		Il2CppCodeGenWriteBarrier((&___weldSquares_7), value);
	}

	inline static int32_t get_offset_of_cardinalDirections_8() { return static_cast<int32_t>(offsetof(Welder_t3775122660_StaticFields, ___cardinalDirections_8)); }
	inline Vector2U5BU5D_t1457185986* get_cardinalDirections_8() const { return ___cardinalDirections_8; }
	inline Vector2U5BU5D_t1457185986** get_address_of_cardinalDirections_8() { return &___cardinalDirections_8; }
	inline void set_cardinalDirections_8(Vector2U5BU5D_t1457185986* value)
	{
		___cardinalDirections_8 = value;
		Il2CppCodeGenWriteBarrier((&___cardinalDirections_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_9() { return static_cast<int32_t>(offsetof(Welder_t3775122660_StaticFields, ___U3CU3Ef__amU24cache0_9)); }
	inline Action_1_t4294877337 * get_U3CU3Ef__amU24cache0_9() const { return ___U3CU3Ef__amU24cache0_9; }
	inline Action_1_t4294877337 ** get_address_of_U3CU3Ef__amU24cache0_9() { return &___U3CU3Ef__amU24cache0_9; }
	inline void set_U3CU3Ef__amU24cache0_9(Action_1_t4294877337 * value)
	{
		___U3CU3Ef__amU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WELDER_T3775122660_H
#ifndef ROTATOR_T2029754672_H
#define ROTATOR_T2029754672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Rotator
struct  Rotator_t2029754672  : public Machine_t4122409742
{
public:
	// System.Boolean Rotator::isCCW
	bool ___isCCW_5;
	// CrateGroup Rotator::lastGroup
	CrateGroup_t1115957032 * ___lastGroup_8;

public:
	inline static int32_t get_offset_of_isCCW_5() { return static_cast<int32_t>(offsetof(Rotator_t2029754672, ___isCCW_5)); }
	inline bool get_isCCW_5() const { return ___isCCW_5; }
	inline bool* get_address_of_isCCW_5() { return &___isCCW_5; }
	inline void set_isCCW_5(bool value)
	{
		___isCCW_5 = value;
	}

	inline static int32_t get_offset_of_lastGroup_8() { return static_cast<int32_t>(offsetof(Rotator_t2029754672, ___lastGroup_8)); }
	inline CrateGroup_t1115957032 * get_lastGroup_8() const { return ___lastGroup_8; }
	inline CrateGroup_t1115957032 ** get_address_of_lastGroup_8() { return &___lastGroup_8; }
	inline void set_lastGroup_8(CrateGroup_t1115957032 * value)
	{
		___lastGroup_8 = value;
		Il2CppCodeGenWriteBarrier((&___lastGroup_8), value);
	}
};

struct Rotator_t2029754672_StaticFields
{
public:
	// System.Int32 Rotator::STEPS
	int32_t ___STEPS_6;
	// System.Double Rotator::ANG_STEP
	double ___ANG_STEP_7;

public:
	inline static int32_t get_offset_of_STEPS_6() { return static_cast<int32_t>(offsetof(Rotator_t2029754672_StaticFields, ___STEPS_6)); }
	inline int32_t get_STEPS_6() const { return ___STEPS_6; }
	inline int32_t* get_address_of_STEPS_6() { return &___STEPS_6; }
	inline void set_STEPS_6(int32_t value)
	{
		___STEPS_6 = value;
	}

	inline static int32_t get_offset_of_ANG_STEP_7() { return static_cast<int32_t>(offsetof(Rotator_t2029754672_StaticFields, ___ANG_STEP_7)); }
	inline double get_ANG_STEP_7() const { return ___ANG_STEP_7; }
	inline double* get_address_of_ANG_STEP_7() { return &___ANG_STEP_7; }
	inline void set_ANG_STEP_7(double value)
	{
		___ANG_STEP_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATOR_T2029754672_H
#ifndef PUSHER_T3016537238_H
#define PUSHER_T3016537238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pusher
struct  Pusher_t3016537238  : public Machine_t4122409742
{
public:
	// UnityEngine.Vector2 Pusher::direction
	Vector2_t2156229523  ___direction_5;
	// System.Boolean Pusher::extended
	bool ___extended_6;
	// System.Collections.Generic.List`1<Sensor> Pusher::sensors
	List_1_t3217410706 * ___sensors_7;
	// UnityEngine.Sprite Pusher::spriteExtended
	Sprite_t280657092 * ___spriteExtended_8;
	// UnityEngine.Sprite Pusher::spriteRetracted
	Sprite_t280657092 * ___spriteRetracted_9;
	// UnityEngine.SpriteRenderer Pusher::renderer
	SpriteRenderer_t3235626157 * ___renderer_10;

public:
	inline static int32_t get_offset_of_direction_5() { return static_cast<int32_t>(offsetof(Pusher_t3016537238, ___direction_5)); }
	inline Vector2_t2156229523  get_direction_5() const { return ___direction_5; }
	inline Vector2_t2156229523 * get_address_of_direction_5() { return &___direction_5; }
	inline void set_direction_5(Vector2_t2156229523  value)
	{
		___direction_5 = value;
	}

	inline static int32_t get_offset_of_extended_6() { return static_cast<int32_t>(offsetof(Pusher_t3016537238, ___extended_6)); }
	inline bool get_extended_6() const { return ___extended_6; }
	inline bool* get_address_of_extended_6() { return &___extended_6; }
	inline void set_extended_6(bool value)
	{
		___extended_6 = value;
	}

	inline static int32_t get_offset_of_sensors_7() { return static_cast<int32_t>(offsetof(Pusher_t3016537238, ___sensors_7)); }
	inline List_1_t3217410706 * get_sensors_7() const { return ___sensors_7; }
	inline List_1_t3217410706 ** get_address_of_sensors_7() { return &___sensors_7; }
	inline void set_sensors_7(List_1_t3217410706 * value)
	{
		___sensors_7 = value;
		Il2CppCodeGenWriteBarrier((&___sensors_7), value);
	}

	inline static int32_t get_offset_of_spriteExtended_8() { return static_cast<int32_t>(offsetof(Pusher_t3016537238, ___spriteExtended_8)); }
	inline Sprite_t280657092 * get_spriteExtended_8() const { return ___spriteExtended_8; }
	inline Sprite_t280657092 ** get_address_of_spriteExtended_8() { return &___spriteExtended_8; }
	inline void set_spriteExtended_8(Sprite_t280657092 * value)
	{
		___spriteExtended_8 = value;
		Il2CppCodeGenWriteBarrier((&___spriteExtended_8), value);
	}

	inline static int32_t get_offset_of_spriteRetracted_9() { return static_cast<int32_t>(offsetof(Pusher_t3016537238, ___spriteRetracted_9)); }
	inline Sprite_t280657092 * get_spriteRetracted_9() const { return ___spriteRetracted_9; }
	inline Sprite_t280657092 ** get_address_of_spriteRetracted_9() { return &___spriteRetracted_9; }
	inline void set_spriteRetracted_9(Sprite_t280657092 * value)
	{
		___spriteRetracted_9 = value;
		Il2CppCodeGenWriteBarrier((&___spriteRetracted_9), value);
	}

	inline static int32_t get_offset_of_renderer_10() { return static_cast<int32_t>(offsetof(Pusher_t3016537238, ___renderer_10)); }
	inline SpriteRenderer_t3235626157 * get_renderer_10() const { return ___renderer_10; }
	inline SpriteRenderer_t3235626157 ** get_address_of_renderer_10() { return &___renderer_10; }
	inline void set_renderer_10(SpriteRenderer_t3235626157 * value)
	{
		___renderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___renderer_10), value);
	}
};

struct Pusher_t3016537238_StaticFields
{
public:
	// UnityEngine.Vector2[] Pusher::cardinalDirections
	Vector2U5BU5D_t1457185986* ___cardinalDirections_11;

public:
	inline static int32_t get_offset_of_cardinalDirections_11() { return static_cast<int32_t>(offsetof(Pusher_t3016537238_StaticFields, ___cardinalDirections_11)); }
	inline Vector2U5BU5D_t1457185986* get_cardinalDirections_11() const { return ___cardinalDirections_11; }
	inline Vector2U5BU5D_t1457185986** get_address_of_cardinalDirections_11() { return &___cardinalDirections_11; }
	inline void set_cardinalDirections_11(Vector2U5BU5D_t1457185986* value)
	{
		___cardinalDirections_11 = value;
		Il2CppCodeGenWriteBarrier((&___cardinalDirections_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUSHER_T3016537238_H
#ifndef CONVEYOR_T2171737337_H
#define CONVEYOR_T2171737337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Conveyor
struct  Conveyor_t2171737337  : public Machine_t4122409742
{
public:
	// UnityEngine.Vector2 Conveyor::direction
	Vector2_t2156229523  ___direction_5;

public:
	inline static int32_t get_offset_of_direction_5() { return static_cast<int32_t>(offsetof(Conveyor_t2171737337, ___direction_5)); }
	inline Vector2_t2156229523  get_direction_5() const { return ___direction_5; }
	inline Vector2_t2156229523 * get_address_of_direction_5() { return &___direction_5; }
	inline void set_direction_5(Vector2_t2156229523  value)
	{
		___direction_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVEYOR_T2171737337_H
#ifndef PAINTER_T2372114961_H
#define PAINTER_T2372114961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Painter
struct  Painter_t2372114961  : public Machine_t4122409742
{
public:
	// UnityEngine.Vector2 Painter::direction
	Vector2_t2156229523  ___direction_5;

public:
	inline static int32_t get_offset_of_direction_5() { return static_cast<int32_t>(offsetof(Painter_t2372114961, ___direction_5)); }
	inline Vector2_t2156229523  get_direction_5() const { return ___direction_5; }
	inline Vector2_t2156229523 * get_address_of_direction_5() { return &___direction_5; }
	inline void set_direction_5(Vector2_t2156229523  value)
	{
		___direction_5 = value;
	}
};

struct Painter_t2372114961_StaticFields
{
public:
	// UnityEngine.Vector2[] Painter::cardinalDirections
	Vector2U5BU5D_t1457185986* ___cardinalDirections_6;

public:
	inline static int32_t get_offset_of_cardinalDirections_6() { return static_cast<int32_t>(offsetof(Painter_t2372114961_StaticFields, ___cardinalDirections_6)); }
	inline Vector2U5BU5D_t1457185986* get_cardinalDirections_6() const { return ___cardinalDirections_6; }
	inline Vector2U5BU5D_t1457185986** get_address_of_cardinalDirections_6() { return &___cardinalDirections_6; }
	inline void set_cardinalDirections_6(Vector2U5BU5D_t1457185986* value)
	{
		___cardinalDirections_6 = value;
		Il2CppCodeGenWriteBarrier((&___cardinalDirections_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAINTER_T2372114961_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef WIRE_T1115128131_H
#define WIRE_T1115128131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wire
struct  Wire_t1115128131  : public Machine_t4122409742
{
public:
	// WireGroup Wire::group
	WireGroup_t228895900 * ___group_5;

public:
	inline static int32_t get_offset_of_group_5() { return static_cast<int32_t>(offsetof(Wire_t1115128131, ___group_5)); }
	inline WireGroup_t228895900 * get_group_5() const { return ___group_5; }
	inline WireGroup_t228895900 ** get_address_of_group_5() { return &___group_5; }
	inline void set_group_5(WireGroup_t228895900 * value)
	{
		___group_5 = value;
		Il2CppCodeGenWriteBarrier((&___group_5), value);
	}
};

struct Wire_t1115128131_StaticFields
{
public:
	// UnityEngine.Vector2[] Wire::cardinalDirections
	Vector2U5BU5D_t1457185986* ___cardinalDirections_6;

public:
	inline static int32_t get_offset_of_cardinalDirections_6() { return static_cast<int32_t>(offsetof(Wire_t1115128131_StaticFields, ___cardinalDirections_6)); }
	inline Vector2U5BU5D_t1457185986* get_cardinalDirections_6() const { return ___cardinalDirections_6; }
	inline Vector2U5BU5D_t1457185986** get_address_of_cardinalDirections_6() { return &___cardinalDirections_6; }
	inline void set_cardinalDirections_6(Vector2U5BU5D_t1457185986* value)
	{
		___cardinalDirections_6 = value;
		Il2CppCodeGenWriteBarrier((&___cardinalDirections_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIRE_T1115128131_H
#ifndef SENSOR_T1745335964_H
#define SENSOR_T1745335964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sensor
struct  Sensor_t1745335964  : public Wire_t1115128131
{
public:
	// UnityEngine.Vector2 Sensor::direction
	Vector2_t2156229523  ___direction_7;

public:
	inline static int32_t get_offset_of_direction_7() { return static_cast<int32_t>(offsetof(Sensor_t1745335964, ___direction_7)); }
	inline Vector2_t2156229523  get_direction_7() const { return ___direction_7; }
	inline Vector2_t2156229523 * get_address_of_direction_7() { return &___direction_7; }
	inline void set_direction_7(Vector2_t2156229523  value)
	{
		___direction_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENSOR_T1745335964_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t4286651560  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastHit2D_t2279581989  m_Items[1];

public:
	inline RaycastHit2D_t2279581989  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t2279581989 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t2279581989  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t2279581989  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t2279581989 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t2279581989  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t2897418192  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
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
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_t2156229523  m_Items[1];

public:
	inline Vector2_t2156229523  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t2156229523  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Double[]
struct DoubleU5BU5D_t3413330114  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[0...,0...]
struct Int32U5B0___U2C0___U5D_t385246373  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Int32 GridOf`1<System.Object>::Width()
extern "C"  int32_t GridOf_1_Width_m3856973779_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 GridOf`1<System.Object>::Height()
extern "C"  int32_t GridOf_1_Height_m1515774238_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// T GridOf`1<System.Object>::At(UnityEngine.Vector2)
extern "C"  RuntimeObject * GridOf_1_At_m1089391161_gshared (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform,System.Boolean)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1858812370_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Transform_t3600365921 * p1, bool p2, const RuntimeMethod* method);
// System.Boolean GridOf`1<System.Object>::InBounds(UnityEngine.Vector2)
extern "C"  bool GridOf_1_InBounds_m4041078103_gshared (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C"  bool List_1_Contains_m2654125393_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Vector2>::GetEnumerator()
extern "C"  Enumerator_t1222580846  List_1_GetEnumerator_m809843680_gshared (List_1_t3628304265 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::get_Current()
extern "C"  Vector2_t2156229523  Enumerator_get_Current_m2598000980_gshared (Enumerator_t1222580846 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m4079852040_gshared (Enumerator_t1222580846 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::Dispose()
extern "C"  void Enumerator_Dispose_m2367629053_gshared (Enumerator_t1222580846 * __this, const RuntimeMethod* method);
// T GridOf`1<System.Object>::Remove(UnityEngine.Vector2)
extern "C"  RuntimeObject * GridOf_1_Remove_m4264802354_gshared (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void GridOf`1<System.Object>::Add(T)
extern "C"  void GridOf_1_Add_m2302913748_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void GridOf`1<System.Object>::ForEach(System.Action`1<T>)
extern "C"  void GridOf_1_ForEach_m1608426594_gshared (RuntimeObject * __this /* static, unused */, Action_1_t3252573759 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
extern "C"  void List_1__ctor_m1536473967_gshared (List_1_t899420910 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
extern "C"  int32_t List_1_get_Count_m576380744_gshared (List_1_t899420910 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C"  Vector3_t3722313464  List_1_get_Item_m200663048_gshared (List_1_t899420910 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
extern "C"  void List_1_Clear_m3097985365_gshared (List_1_t899420910 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1_AddRange_m3709462088_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void GridOf`1<System.Object>::.ctor(System.Int32,System.Int32)
extern "C"  void GridOf_1__ctor_m177047406_gshared (GridOf_1_t2656867832 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C"  void Action_1_Invoke_m2461023210_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void GridOf`1<System.Object>::Init(System.Int32,System.Int32)
extern "C"  void GridOf_1_Init_m290567127_gshared (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
extern "C"  void List_1_Add_m1524640104_gshared (List_1_t899420910 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::IndexOf(!0)
extern "C"  int32_t List_1_IndexOf_m698163972_gshared (List_1_t3628304265 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
extern "C"  void List_1__ctor_m1536470898_gshared (List_1_t3628304265 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!0> System.Collections.Generic.List`1<UnityEngine.Vector2>::GetRange(System.Int32,System.Int32)
extern "C"  List_1_t3628304265 * List_1_GetRange_m390786444_gshared (List_1_t3628304265 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
extern "C"  int32_t List_1_get_Count_m1202123918_gshared (List_1_t3628304265 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1_AddRange_m705206751_gshared (List_1_t3628304265 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
extern "C"  void List_1_Add_m2298161512_gshared (List_1_t3628304265 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Reverse()
extern "C"  void List_1_Reverse_m3814808058_gshared (List_1_t3628304265 * __this, const RuntimeMethod* method);
// System.Void GridOf`1<System.Object>::RemoveAll()
extern "C"  void GridOf_1_RemoveAll_m157992776_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean GridOf`1<System.Object>::ElementAt(UnityEngine.Vector2)
extern "C"  bool GridOf_1_ElementAt_m2648224107_gshared (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::Contains(!0)
extern "C"  bool List_1_Contains_m1070748127_gshared (List_1_t3628304265 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t4157153871_m1557787507(__this, method) ((  Camera_t4157153871 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C"  float Camera_get_orthographicSize_m3903216845 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_aspect()
extern "C"  float Camera_get_aspect_m862507514 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 GridOf`1<Crate>::Width()
#define GridOf_1_Width_m179343242(__this /* static, unused */, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))GridOf_1_Width_m3856973779_gshared)(__this /* static, unused */, method)
// System.Int32 GridOf`1<Crate>::Height()
#define GridOf_1_Height_m3407359771(__this /* static, unused */, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))GridOf_1_Height_m1515774238_gshared)(__this /* static, unused */, method)
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_time()
extern "C"  float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Camera_ScreenToViewportPoint_m3569032523 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
extern "C"  void Debug_LogFormat_m309087137 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMover::SnapToBoundaries()
extern "C"  void CameraMover_SnapToBoundaries_m3844210631 (CameraMover_t2845631541 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 CameraMover::MouseWorldPosition()
extern "C"  Vector2_t2156229523  CameraMover_MouseWorldPosition_m1675890510 (CameraMover_t2845631541 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C"  Vector2_t2156229523  Vector2_get_zero_m540426400 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  RaycastHit2DU5BU5D_t4286651560* Physics2D_RaycastAll_m3534418674 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 CameraMover::RoundVector(UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  CameraMover_RoundVector_m1886078930 (CameraMover_t2845631541 * __this, Vector2_t2156229523  ___v0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Camera_ScreenToWorldPoint_m3978588570 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Machine::.ctor()
extern "C"  void Machine__ctor_m2672044869 (Machine_t4122409742 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Machine::Start()
extern "C"  void Machine_Start_m764592851 (Machine_t4122409742 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Machine::RotateVector(UnityEngine.Vector2,System.Boolean)
extern "C"  Vector2_t2156229523  Machine_RotateVector_m1548302461 (Machine_t4122409742 * __this, Vector2_t2156229523  ___v0, bool ___clockwise1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C"  void Transform_Rotate_m1886816857 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// MachineUI UI::get_Machines()
extern "C"  MachineUI_t252077060 * UI_get_Machines_m4279099061 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GridThing::get_xy()
extern "C"  Vector2_t2156229523  GridThing_get_xy_m738839343 (GridThing_t3152339074 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T GridOf`1<Crate>::At(UnityEngine.Vector2)
#define GridOf_1_At_m3659202116(__this /* static, unused */, p0, method) ((  Crate_t3334083239 * (*) (RuntimeObject * /* static, unused */, Vector2_t2156229523 , const RuntimeMethod*))GridOf_1_At_m1089391161_gshared)(__this /* static, unused */, p0, method)
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Addition_m800700293 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GridThing::.ctor()
extern "C"  void GridThing__ctor_m370494398 (GridThing_t3152339074 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Crate::IsPaintedWorldSide(System.Int32)
extern "C"  bool Crate_IsPaintedWorldSide_m3833883755 (Crate_t3334083239 * __this, int32_t ___side0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C"  Vector3_t3722313464  Transform_get_eulerAngles_m2743581774 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Crate::GetSideIntFromVector(UnityEngine.Vector2)
extern "C"  int32_t Crate_GetSideIntFromVector_m175488776 (Crate_t3334083239 * __this, Vector2_t2156229523  ___sideVect0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Crate::nfmod(System.Int32,System.Int32)
extern "C"  int32_t Crate_nfmod_m3334865158 (Crate_t3334083239 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Crate::PaintCrateOnCrateSide(System.Int32)
extern "C"  void Crate_PaintCrateOnCrateSide_m3420533723 (Crate_t3334083239 * __this, int32_t ___side0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean[] Crate::WorldPainted()
extern "C"  BooleanU5BU5D_t2897418192* Crate_WorldPainted_m579725209 (Crate_t3334083239 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
extern "C"  Vector2_t2156229523  Vector2_get_right_m1027081661 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool Vector2_op_Equality_m2303255133 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
extern "C"  Vector2_t2156229523  Vector2_get_up_m2647420593 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_left()
extern "C"  Vector2_t2156229523  Vector2_get_left_m1559018038 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
extern "C"  Vector2_t2156229523  Vector2_get_down_m2886001705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform,System.Boolean)
#define Object_Instantiate_TisGameObject_t1113636619_m4130575780(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Transform_t3600365921 *, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1858812370_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C"  void Transform_set_parent_m786917804 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
extern "C"  void Transform_Rotate_m720511863 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C"  void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean GridOf`1<Crate>::InBounds(UnityEngine.Vector2)
#define GridOf_1_InBounds_m3234954020(__this /* static, unused */, p0, method) ((  bool (*) (RuntimeObject * /* static, unused */, Vector2_t2156229523 , const RuntimeMethod*))GridOf_1_InBounds_m4041078103_gshared)(__this /* static, unused */, p0, method)
// T GridOf`1<Machine>::At(UnityEngine.Vector2)
#define GridOf_1_At_m3872141981(__this /* static, unused */, p0, method) ((  Machine_t4122409742 * (*) (RuntimeObject * /* static, unused */, Vector2_t2156229523 , const RuntimeMethod*))GridOf_1_At_m1089391161_gshared)(__this /* static, unused */, p0, method)
// System.Boolean Crate::CheckPusherArms(UnityEngine.Vector2)
extern "C"  bool Crate_CheckPusherArms_m2800673058 (Crate_t3334083239 * __this, Vector2_t2156229523  ___target0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<Crate>::Contains(!0)
#define List_1_Contains_m2773044595(__this, p0, method) ((  bool (*) (List_1_t511190685 *, Crate_t3334083239 *, const RuntimeMethod*))List_1_Contains_m2654125393_gshared)(__this, p0, method)
// System.Boolean CrateGroup::CanMove(UnityEngine.Vector2)
extern "C"  bool CrateGroup_CanMove_m1914781014 (CrateGroup_t1115957032 * __this, Vector2_t2156229523  ___direction0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> Rotator::GetSquaresToCheck(UnityEngine.Vector2,UnityEngine.Vector3)
extern "C"  List_1_t3628304265 * Rotator_GetSquaresToCheck_m3524065233 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___xy0, Vector3_t3722313464  ___spin1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Vector2>::GetEnumerator()
#define List_1_GetEnumerator_m809843680(__this, method) ((  Enumerator_t1222580846  (*) (List_1_t3628304265 *, const RuntimeMethod*))List_1_GetEnumerator_m809843680_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::get_Current()
#define Enumerator_get_Current_m2598000980(__this, method) ((  Vector2_t2156229523  (*) (Enumerator_t1222580846 *, const RuntimeMethod*))Enumerator_get_Current_m2598000980_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::MoveNext()
#define Enumerator_MoveNext_m4079852040(__this, method) ((  bool (*) (Enumerator_t1222580846 *, const RuntimeMethod*))Enumerator_MoveNext_m4079852040_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>::Dispose()
#define Enumerator_Dispose_m2367629053(__this, method) ((  void (*) (Enumerator_t1222580846 *, const RuntimeMethod*))Enumerator_Dispose_m2367629053_gshared)(__this, method)
// UnityEngine.Vector2 Rotator::RotateVector(UnityEngine.Vector2,UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Rotator_RotateVector_m3711280816 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___xy0, Vector3_t3722313464  ___spin1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T GridOf`1<Crate>::Remove(UnityEngine.Vector2)
#define GridOf_1_Remove_m3068458711(__this /* static, unused */, p0, method) ((  Crate_t3334083239 * (*) (RuntimeObject * /* static, unused */, Vector2_t2156229523 , const RuntimeMethod*))GridOf_1_Remove_m4264802354_gshared)(__this /* static, unused */, p0, method)
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Subtraction_m73004381 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GridThing::set_xy(UnityEngine.Vector2)
extern "C"  void GridThing_set_xy_m3795576369 (GridThing_t3152339074 * __this, Vector2_t2156229523  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GridOf`1<Crate>::Add(T)
#define GridOf_1_Add_m1381055868(__this /* static, unused */, p0, method) ((  void (*) (RuntimeObject * /* static, unused */, Crate_t3334083239 *, const RuntimeMethod*))GridOf_1_Add_m2302913748_gshared)(__this /* static, unused */, p0, method)
// System.Collections.IEnumerator Crate::AnimateRotation(UnityEngine.Vector2,UnityEngine.Vector3,System.Boolean)
extern "C"  RuntimeObject* Crate_AnimateRotation_m345258124 (Crate_t3334083239 * __this, Vector2_t2156229523  ___destination0, Vector3_t3722313464  ___spin1, bool ___destroyAfter2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Crate/<CheckPusherArms>c__AnonStorey2::.ctor()
extern "C"  void U3CCheckPusherArmsU3Ec__AnonStorey2__ctor_m2601164063 (U3CCheckPusherArmsU3Ec__AnonStorey2_t340666492 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<Machine>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m3536267445(__this, p0, p1, method) ((  void (*) (Action_1_t4294877337 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method)
// System.Void GridOf`1<Machine>::ForEach(System.Action`1<T>)
#define GridOf_1_ForEach_m659143872(__this /* static, unused */, p0, method) ((  void (*) (RuntimeObject * /* static, unused */, Action_1_t4294877337 *, const RuntimeMethod*))GridOf_1_ForEach_m1608426594_gshared)(__this /* static, unused */, p0, method)
// System.Void Crate::FallOffGrid(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void Crate_FallOffGrid_m1872323598 (Crate_t3334083239 * __this, Vector2_t2156229523  ___destination0, Vector2_t2156229523  ___direction1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CrateGroup::Move(UnityEngine.Vector2)
extern "C"  void CrateGroup_Move_m3386982613 (CrateGroup_t1115957032 * __this, Vector2_t2156229523  ___direction0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Crate::AnimateMove(UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C"  RuntimeObject* Crate_AnimateMove_m3374185797 (Crate_t3334083239 * __this, Vector2_t2156229523  ___destination0, Vector2_t2156229523  ___direction1, bool ___destroyAfter2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Crate/<AnimateMove>c__Iterator0::.ctor()
extern "C"  void U3CAnimateMoveU3Ec__Iterator0__ctor_m430563843 (U3CAnimateMoveU3Ec__Iterator0_t1583435394 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Crate/<AnimateRotation>c__Iterator1::.ctor()
extern "C"  void U3CAnimateRotationU3Ec__Iterator1__ctor_m621359371 (U3CAnimateRotationU3Ec__Iterator1_t2176702074 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// StairMaster GameManager::get_StairMaster()
extern "C"  StairMaster_t3581666356 * GameManager_get_StairMaster_m618266316 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_op_Division_m132623573 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
extern "C"  float Vector3_get_Item_m668685504 (Vector3_t3722313464 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C"  Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  void Transform_RotateAround_m2651195670 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
#define List_1__ctor_m1536473967(__this, method) ((  void (*) (List_1_t899420910 *, const RuntimeMethod*))List_1__ctor_m1536473967_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Crate>::.ctor()
#define List_1__ctor_m2191809278(__this, method) ((  void (*) (List_1_t511190685 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
#define List_1_get_Count_m576380744(__this, method) ((  int32_t (*) (List_1_t899420910 *, const RuntimeMethod*))List_1_get_Count_m576380744_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
#define List_1_get_Item_m200663048(__this, p0, method) ((  Vector3_t3722313464  (*) (List_1_t899420910 *, int32_t, const RuntimeMethod*))List_1_get_Item_m200663048_gshared)(__this, p0, method)
// System.Void CrateGroup::TryRotation(UnityEngine.Vector3)
extern "C"  void CrateGroup_TryRotation_m2372677632 (CrateGroup_t1115957032 * __this, Vector3_t3722313464  ___spin0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool Vector2_op_Inequality_m3858779880 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CrateGroup::TryMoveFromForce(UnityEngine.Vector2)
extern "C"  void CrateGroup_TryMoveFromForce_m499060411 (CrateGroup_t1115957032 * __this, Vector2_t2156229523  ___force0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean CrateGroup::CanRotate(UnityEngine.Vector3)
extern "C"  bool CrateGroup_CanRotate_m2768719090 (CrateGroup_t1115957032 * __this, Vector3_t3722313464  ___spin0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CrateGroup::Rotate(UnityEngine.Vector3)
extern "C"  void CrateGroup_Rotate_m3334215566 (CrateGroup_t1115957032 * __this, Vector3_t3722313464  ___spin0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Crate>::GetEnumerator()
#define List_1_GetEnumerator_m2890427122(__this, method) ((  Enumerator_t2400434562  (*) (List_1_t511190685 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Crate>::get_Current()
#define Enumerator_get_Current_m636774770(__this, method) ((  Crate_t3334083239 * (*) (Enumerator_t2400434562 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean Crate::CanRotate(UnityEngine.Vector3)
extern "C"  bool Crate_CanRotate_m4019342585 (Crate_t3334083239 * __this, Vector3_t3722313464  ___spin0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Crate>::MoveNext()
#define Enumerator_MoveNext_m1672660585(__this, method) ((  bool (*) (Enumerator_t2400434562 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Crate>::Dispose()
#define Enumerator_Dispose_m1904545155(__this, method) ((  void (*) (Enumerator_t2400434562 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void Crate::Rotate(UnityEngine.Vector3)
extern "C"  void Crate_Rotate_m1528817573 (Crate_t3334083239 * __this, Vector3_t3722313464  ___spin0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] CrateGroup::DirectionsFromVectorForce(UnityEngine.Vector2)
extern "C"  Vector2U5BU5D_t1457185986* CrateGroup_DirectionsFromVectorForce_m3105363727 (CrateGroup_t1115957032 * __this, Vector2_t2156229523  ___force0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Crate::CanMove(UnityEngine.Vector2)
extern "C"  bool Crate_CanMove_m3784799477 (Crate_t3334083239 * __this, Vector2_t2156229523  ___direction0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Crate::Move(UnityEngine.Vector2)
extern "C"  void Crate_Move_m4290318053 (Crate_t3334083239 * __this, Vector2_t2156229523  ___direction0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C"  float Vector2_get_magnitude_m2752892833 (Vector2_t2156229523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
#define List_1_Clear_m3097985365(__this, method) ((  void (*) (List_1_t899420910 *, const RuntimeMethod*))List_1_Clear_m3097985365_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Crate>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m3878005525(__this, p0, method) ((  void (*) (List_1_t511190685 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3709462088_gshared)(__this, p0, method)
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GridOf`1<Crate>::.ctor(System.Int32,System.Int32)
#define GridOf_1__ctor_m1795928600(__this, p0, p1, method) ((  void (*) (GridOf_1_t2910844907 *, int32_t, int32_t, const RuntimeMethod*))GridOf_1__ctor_m177047406_gshared)(__this, p0, p1, method)
// System.Void Crates/<Groups>c__AnonStorey0::.ctor()
extern "C"  void U3CGroupsU3Ec__AnonStorey0__ctor_m2715118668 (U3CGroupsU3Ec__AnonStorey0_t4083570762 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<CrateGroup>::.ctor()
#define List_1__ctor_m976941798(__this, method) ((  void (*) (List_1_t2588031774 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Action`1<Crate>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m3887988901(__this, p0, p1, method) ((  void (*) (Action_1_t3506550834 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method)
// System.Void GridOf`1<Crate>::ForEach(System.Action`1<T>)
#define GridOf_1_ForEach_m2734291113(__this /* static, unused */, p0, method) ((  void (*) (RuntimeObject * /* static, unused */, Action_1_t3506550834 *, const RuntimeMethod*))GridOf_1_ForEach_m1608426594_gshared)(__this /* static, unused */, p0, method)
// System.Collections.Generic.List`1<CrateGroup> Crates::Groups()
extern "C"  List_1_t2588031774 * Crates_Groups_m1691412986 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<CrateGroup>::GetEnumerator()
#define List_1_GetEnumerator_m141122379(__this, method) ((  Enumerator_t182308355  (*) (List_1_t2588031774 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<CrateGroup>::get_Current()
#define Enumerator_get_Current_m3351093824(__this, method) ((  CrateGroup_t1115957032 * (*) (Enumerator_t182308355 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void System.Action`1<CrateGroup>::Invoke(!0)
#define Action_1_Invoke_m4049214814(__this, p0, method) ((  void (*) (Action_1_t1288424627 *, CrateGroup_t1115957032 *, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<CrateGroup>::MoveNext()
#define Enumerator_MoveNext_m1755727745(__this, method) ((  bool (*) (Enumerator_t182308355 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<CrateGroup>::Dispose()
#define Enumerator_Dispose_m705539179(__this, method) ((  void (*) (Enumerator_t182308355 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<CrateGroup>::Contains(!0)
#define List_1_Contains_m1771383488(__this, p0, method) ((  bool (*) (List_1_t2588031774 *, CrateGroup_t1115957032 *, const RuntimeMethod*))List_1_Contains_m2654125393_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<CrateGroup>::Add(!0)
#define List_1_Add_m205543450(__this, p0, method) ((  void (*) (List_1_t2588031774 *, CrateGroup_t1115957032 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void DropZoneGroup::.ctor()
extern "C"  void DropZoneGroup__ctor_m3659004622 (DropZoneGroup_t2340995414 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<DropZone>::Add(!0)
#define List_1_Add_m2906265207(__this, p0, method) ((  void (*) (List_1_t886281651 *, DropZone_t3709174205 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void DropZone::PaintZone(System.Int32)
extern "C"  void DropZone_PaintZone_m1983948669 (DropZone_t3709174205 * __this, int32_t ___side0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DropZone::Connect()
extern "C"  void DropZone_Connect_m2826822892 (DropZone_t3709174205 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DropZoneGroup::Buzz()
extern "C"  void DropZoneGroup_Buzz_m3268081106 (DropZoneGroup_t2340995414 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean GridOf`1<Machine>::InBounds(UnityEngine.Vector2)
#define GridOf_1_InBounds_m3069315835(__this /* static, unused */, p0, method) ((  bool (*) (RuntimeObject * /* static, unused */, Vector2_t2156229523 , const RuntimeMethod*))GridOf_1_InBounds_m4041078103_gshared)(__this /* static, unused */, p0, method)
// System.Void DropZoneGroup::Merge(DropZoneGroup)
extern "C"  void DropZoneGroup_Merge_m3985976498 (DropZoneGroup_t2340995414 * __this, DropZoneGroup_t2340995414 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<DropZone>::.ctor()
#define List_1__ctor_m3032259779(__this, method) ((  void (*) (List_1_t886281651 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<DropZone>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m1842284837(__this, p0, method) ((  void (*) (List_1_t886281651 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3709462088_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<DropZone>::GetEnumerator()
#define List_1_GetEnumerator_m3829137046(__this, method) ((  Enumerator_t2775525528  (*) (List_1_t886281651 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<DropZone>::get_Current()
#define Enumerator_get_Current_m1621422558(__this, method) ((  DropZone_t3709174205 * (*) (Enumerator_t2775525528 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<DropZone>::MoveNext()
#define Enumerator_MoveNext_m2372141819(__this, method) ((  bool (*) (Enumerator_t2775525528 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<DropZone>::Dispose()
#define Enumerator_Dispose_m3659853165(__this, method) ((  void (*) (Enumerator_t2775525528 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean DropZone::CheckPaint(Crate)
extern "C"  bool DropZone_CheckPaint_m4268379242 (DropZone_t3709174205 * __this, Crate_t3334083239 * ___crate0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<StairMaster>()
#define GameObject_GetComponent_TisStairMaster_t3581666356_m286112584(__this, method) ((  StairMaster_t3581666356 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void GridOf`1<Machine>::Init(System.Int32,System.Int32)
#define GridOf_1_Init_m343331089(__this /* static, unused */, p0, p1, method) ((  void (*) (RuntimeObject * /* static, unused */, int32_t, int32_t, const RuntimeMethod*))GridOf_1_Init_m290567127_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void GridOf`1<Crate>::Init(System.Int32,System.Int32)
#define GridOf_1_Init_m752518202(__this /* static, unused */, p0, p1, method) ((  void (*) (RuntimeObject * /* static, unused */, int32_t, int32_t, const RuntimeMethod*))GridOf_1_Init_m290567127_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void Generator::DestroyUnmovedCrate()
extern "C"  void Generator_DestroyUnmovedCrate_m3629071203 (Generator_t2248380420 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Crate Generator::MakeCrate()
extern "C"  Crate_t3334083239 * Generator_MakeCrate_m191444529 (Generator_t2248380420 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1113636619_m3006960551(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method)
// !!0 UnityEngine.GameObject::GetComponent<Crate>()
#define GameObject_GetComponent_TisCrate_t3334083239_m2831429645(__this, method) ((  Crate_t3334083239 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.Vector2 GridThing::get_RoundedPosition()
extern "C"  Vector2_t2156229523  GridThing_get_RoundedPosition_m1427808004 (GridThing_t3152339074 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CrateGroup::.ctor()
extern "C"  void CrateGroup__ctor_m374315206 (CrateGroup_t1115957032 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Crate>::Add(!0)
#define List_1_Add_m108745738(__this, p0, method) ((  void (*) (List_1_t511190685 *, Crate_t3334083239 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void GridThing::Start()
extern "C"  void GridThing_Start_m2452750932 (GridThing_t3152339074 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GridOf`1<Machine>::Add(T)
#define GridOf_1_Add_m641575355(__this /* static, unused */, p0, method) ((  void (*) (RuntimeObject * /* static, unused */, Machine_t4122409742 *, const RuntimeMethod*))GridOf_1_Add_m2302913748_gshared)(__this /* static, unused */, p0, method)
// T GridOf`1<Machine>::Remove(UnityEngine.Vector2)
#define GridOf_1_Remove_m3477036051(__this /* static, unused */, p0, method) ((  Machine_t4122409742 * (*) (RuntimeObject * /* static, unused */, Vector2_t2156229523 , const RuntimeMethod*))GridOf_1_Remove_m4264802354_gshared)(__this /* static, unused */, p0, method)
// System.Void GridOf`1<Machine>::.ctor(System.Int32,System.Int32)
#define GridOf_1__ctor_m2376768582(__this, p0, p1, method) ((  void (*) (GridOf_1_t3699171410 *, int32_t, int32_t, const RuntimeMethod*))GridOf_1__ctor_m177047406_gshared)(__this, p0, p1, method)
// System.Void MachineUI::SetupButton(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  void MachineUI_SetupButton_m3209500000 (MachineUI_t252077060 * __this, GameObject_t1113636619 * ___btnGob0, GameObject_t1113636619 * ___machineGob1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MachineUI::SetInitialRotations()
extern "C"  void MachineUI_SetInitialRotations_m1518092707 (MachineUI_t252077060 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MachineUI/<SetupButton>c__AnonStorey0::.ctor()
extern "C"  void U3CSetupButtonU3Ec__AnonStorey0__ctor_m117983695 (U3CSetupButtonU3Ec__AnonStorey0_t1115115811 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
#define GameObject_GetComponent_TisButton_t4055032469_m1515138076(__this, method) ((  Button_t4055032469 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C"  ButtonClickedEvent_t48803504 * Button_get_onClick_m2332132945 (Button_t4055032469 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction__ctor_m772160306 (UnityAction_t3245792599 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C"  void UnityEvent_AddListener_m2276267359 (UnityEvent_t2581268647 * __this, UnityAction_t3245792599 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
extern "C"  void Transform_set_eulerAngles_m135219616 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Painter::Paint()
extern "C"  void Painter_Paint_m1577536615 (Painter_t2372114961 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_UnaryNegation_m2172448356 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Crate::Paint(UnityEngine.Vector2)
extern "C"  void Crate_Paint_m4231015055 (Crate_t3334083239 * __this, Vector2_t2156229523  ___side0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
#define GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593(__this, method) ((  SpriteRenderer_t3235626157 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Boolean Pusher::AnySensorActivated()
extern "C"  bool Pusher_AnySensorActivated_m2062834046 (Pusher_t3016537238 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Pusher::Extend()
extern "C"  void Pusher_Extend_m3250081751 (Pusher_t3016537238 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Pusher::Retract()
extern "C"  void Pusher_Retract_m2155967485 (Pusher_t3016537238 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C"  void SpriteRenderer_set_sprite_m1286893786 (SpriteRenderer_t3235626157 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Sensor> Pusher::GetSensors()
extern "C"  List_1_t3217410706 * Pusher_GetSensors_m2451983428 (Pusher_t3016537238 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Sensor>::GetEnumerator()
#define List_1_GetEnumerator_m217734469(__this, method) ((  Enumerator_t811687287  (*) (List_1_t3217410706 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Sensor>::get_Current()
#define Enumerator_get_Current_m3155876505(__this, method) ((  Sensor_t1745335964 * (*) (Enumerator_t811687287 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean Sensor::Activated()
extern "C"  bool Sensor_Activated_m2355377676 (Sensor_t1745335964 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Sensor>::MoveNext()
#define Enumerator_MoveNext_m3205074374(__this, method) ((  bool (*) (Enumerator_t811687287 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Sensor>::Dispose()
#define Enumerator_Dispose_m785474812(__this, method) ((  void (*) (Enumerator_t811687287 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Sensor>::.ctor()
#define List_1__ctor_m63149084(__this, method) ((  void (*) (List_1_t3217410706 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Collections.Generic.List`1<Sensor> WireGroup::Sensors()
extern "C"  List_1_t3217410706 * WireGroup_Sensors_m2731798325 (WireGroup_t228895900 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Sensor>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m2510231272(__this, p0, method) ((  void (*) (List_1_t3217410706 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3709462088_gshared)(__this, p0, method)
// System.Int32 GridThing::get_x()
extern "C"  int32_t GridThing_get_x_m1761905480 (GridThing_t3152339074 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 GridThing::get_y()
extern "C"  int32_t GridThing_get_y_m1761905479 (GridThing_t3152339074 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
#define List_1_Add_m1524640104(__this, p0, method) ((  void (*) (List_1_t899420910 *, Vector3_t3722313464 , const RuntimeMethod*))List_1_Add_m1524640104_gshared)(__this, p0, method)
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
extern "C"  float Vector2_get_Item_m3559215723 (Vector2_t2156229523 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> Rotator::MakeCircle(UnityEngine.Vector2,System.Double)
extern "C"  List_1_t3628304265 * Rotator_MakeCircle_m2396613248 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___center0, double ___radius1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> Rotator::InclusiveSlice(System.Collections.Generic.List`1<UnityEngine.Vector2>,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C"  List_1_t3628304265 * Rotator_InclusiveSlice_m336522371 (RuntimeObject * __this /* static, unused */, List_1_t3628304265 * ___l0, Vector2_t2156229523  ___start1, Vector2_t2156229523  ___end2, bool ___ccw3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::IndexOf(!0)
#define List_1_IndexOf_m698163972(__this, p0, method) ((  int32_t (*) (List_1_t3628304265 *, Vector2_t2156229523 , const RuntimeMethod*))List_1_IndexOf_m698163972_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
#define List_1__ctor_m1536470898(__this, method) ((  void (*) (List_1_t3628304265 *, const RuntimeMethod*))List_1__ctor_m1536470898_gshared)(__this, method)
// System.Collections.Generic.List`1<!0> System.Collections.Generic.List`1<UnityEngine.Vector2>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m390786444(__this, p0, p1, method) ((  List_1_t3628304265 * (*) (List_1_t3628304265 *, int32_t, int32_t, const RuntimeMethod*))List_1_GetRange_m390786444_gshared)(__this, p0, p1, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
#define List_1_get_Count_m1202123918(__this, method) ((  int32_t (*) (List_1_t3628304265 *, const RuntimeMethod*))List_1_get_Count_m1202123918_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m705206751(__this, p0, method) ((  void (*) (List_1_t3628304265 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m705206751_gshared)(__this, p0, method)
// UnityEngine.Vector2 Rotator::RotateNinety(UnityEngine.Vector2,System.Boolean)
extern "C"  Vector2_t2156229523  Rotator_RotateNinety_m83057391 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___xy0, bool ___ccw1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>::.ctor()
#define List_1__ctor_m3876179742(__this, method) ((  void (*) (List_1_t805411711 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>::Add(!0)
#define List_1_Add_m2934800696(__this, p0, method) ((  void (*) (List_1_t805411711 *, List_1_t3628304265 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// !0 System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>::get_Item(System.Int32)
#define List_1_get_Item_m3902301990(__this, p0, method) ((  List_1_t3628304265 * (*) (List_1_t805411711 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
#define List_1_Add_m2298161512(__this, p0, method) ((  void (*) (List_1_t3628304265 *, Vector2_t2156229523 , const RuntimeMethod*))List_1_Add_m2298161512_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Reverse()
#define List_1_Reverse_m3814808058(__this, method) ((  void (*) (List_1_t3628304265 *, const RuntimeMethod*))List_1_Reverse_m3814808058_gshared)(__this, method)
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Round(System.Double,System.Int32)
extern "C"  double Math_Round_m3279303474 (RuntimeObject * __this /* static, unused */, double p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Rotator::Quadrent(System.Double[])
extern "C"  int32_t Rotator_Quadrent_m2459454899 (RuntimeObject * __this /* static, unused */, DoubleU5BU5D_t3413330114* ___point0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void RunUI::SetupButton(UnityEngine.GameObject,UnityEngine.Events.UnityAction)
extern "C"  void RunUI_SetupButton_m982209168 (RunUI_t3214653273 * __this, GameObject_t1113636619 * ___btnGO0, UnityAction_t3245792599 * ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
#define Component_GetComponent_TisText_t1901882714_m4196288697(__this, method) ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean RunUI::Running()
extern "C"  bool RunUI_Running_m3755454242 (RunUI_t3214653273 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void RunUI::Play()
extern "C"  void RunUI_Play_m892847452 (RunUI_t3214653273 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void RunUI::Pause()
extern "C"  void RunUI_Pause_m212226886 (RunUI_t3214653273 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MachineUI::Hide()
extern "C"  void MachineUI_Hide_m391306339 (MachineUI_t252077060 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void RunUI::Show()
extern "C"  void RunUI_Show_m4111171986 (RunUI_t3214653273 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StairMaster::Run()
extern "C"  void StairMaster_Run_m4065504612 (StairMaster_t3581666356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StairMaster::Pause()
extern "C"  void StairMaster_Pause_m996512045 (StairMaster_t3581666356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean StairMaster::IsSlow()
extern "C"  bool StairMaster_IsSlow_m1088814165 (StairMaster_t3581666356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StairMaster::FastForward()
extern "C"  void StairMaster_FastForward_m37415698 (StairMaster_t3581666356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StairMaster::SlowDown()
extern "C"  void StairMaster_SlowDown_m3099542786 (StairMaster_t3581666356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GridOf`1<Crate>::RemoveAll()
#define GridOf_1_RemoveAll_m1714554047(__this /* static, unused */, method) ((  void (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))GridOf_1_RemoveAll_m157992776_gshared)(__this /* static, unused */, method)
// System.Void RunUI::Hide()
extern "C"  void RunUI_Hide_m2334347019 (RunUI_t3214653273 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MachineUI::Show()
extern "C"  void MachineUI_Show_m1108114314 (MachineUI_t252077060 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void RunUI::Reset()
extern "C"  void RunUI_Reset_m223038848 (RunUI_t3214653273 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void RunUI::PlayPause()
extern "C"  void RunUI_PlayPause_m98323879 (RunUI_t3214653273 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void RunUI::Clear()
extern "C"  void RunUI_Clear_m512761987 (RunUI_t3214653273 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void RunUI::FastForward()
extern "C"  void RunUI_FastForward_m3774791371 (RunUI_t3214653273 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SelectUI::SetupButton(UnityEngine.GameObject,UnityEngine.Events.UnityAction)
extern "C"  void SelectUI_SetupButton_m3578307291 (SelectUI_t1349636119 * __this, GameObject_t1113636619 * ___btnGO0, UnityAction_t3245792599 * ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Camera_WorldToScreenPoint_m3726311023 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SelectUI::Show()
extern "C"  void SelectUI_Show_m1676478064 (SelectUI_t1349636119 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SelectUI::Hide()
extern "C"  void SelectUI_Hide_m1862894654 (SelectUI_t1349636119 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<Machine>()
#define GameObject_GetComponent_TisMachine_t4122409742_m396407119(__this, method) ((  Machine_t4122409742 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void Machine::Delete()
extern "C"  void Machine_Delete_m3808337440 (Machine_t4122409742 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SelectUI::Turn(System.Boolean)
extern "C"  void SelectUI_Turn_m2502060509 (SelectUI_t1349636119 * __this, bool ___clockwise0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SelectUI::Delete()
extern "C"  void SelectUI_Delete_m4055503885 (SelectUI_t1349636119 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wire::.ctor()
extern "C"  void Wire__ctor_m3025492090 (Wire_t1115128131 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wire::Start()
extern "C"  void Wire_Start_m2850373620 (Wire_t1115128131 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean GridOf`1<Crate>::ElementAt(UnityEngine.Vector2)
#define GridOf_1_ElementAt_m3269700101(__this /* static, unused */, p0, method) ((  bool (*) (RuntimeObject * /* static, unused */, Vector2_t2156229523 , const RuntimeMethod*))GridOf_1_ElementAt_m2648224107_gshared)(__this /* static, unused */, p0, method)
// System.Void System.Collections.Generic.List`1<Generator>::.ctor()
#define List_1__ctor_m3942288599(__this, method) ((  void (*) (List_1_t3720455162 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Collections.Generic.List`1<Generator> StairMaster::GetGenerators()
extern "C"  List_1_t3720455162 * StairMaster_GetGenerators_m4205969117 (StairMaster_t3581666356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean StairMaster::IsNewStep()
extern "C"  bool StairMaster_IsNewStep_m3564754376 (StairMaster_t3581666356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StairMaster::OnStepStart()
extern "C"  void StairMaster_OnStepStart_m3732032887 (StairMaster_t3581666356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StairMaster::ApplyForces()
extern "C"  void StairMaster_ApplyForces_m923564638 (StairMaster_t3581666356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<CrateGroup>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m305965143(__this, p0, p1, method) ((  void (*) (Action_1_t1288424627 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method)
// System.Void Crates::ForEachGroup(System.Action`1<CrateGroup>)
extern "C"  void Crates_ForEachGroup_m2669004922 (RuntimeObject * __this /* static, unused */, Action_1_t1288424627 * ___action0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Generator>::GetEnumerator()
#define List_1_GetEnumerator_m828876251(__this, method) ((  Enumerator_t1314731743  (*) (List_1_t3720455162 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Generator>::get_Current()
#define Enumerator_get_Current_m2888408249(__this, method) ((  Generator_t2248380420 * (*) (Enumerator_t1314731743 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Generator>::MoveNext()
#define Enumerator_MoveNext_m2974675826(__this, method) ((  bool (*) (Enumerator_t1314731743 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Generator>::Dispose()
#define Enumerator_Dispose_m3668585393(__this, method) ((  void (*) (Enumerator_t1314731743 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void StairMaster/<GetGenerators>c__AnonStorey0::.ctor()
extern "C"  void U3CGetGeneratorsU3Ec__AnonStorey0__ctor_m2360027640 (U3CGetGeneratorsU3Ec__AnonStorey0_t1713985753 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Crate::OnStepStart()
extern "C"  void Crate_OnStepStart_m3222136400 (Crate_t3334083239 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CrateGroup::OnStepStart()
extern "C"  void CrateGroup_OnStepStart_m2709797750 (CrateGroup_t1115957032 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CrateGroup::ApplyForces()
extern "C"  void CrateGroup_ApplyForces_m3042020236 (CrateGroup_t1115957032 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Generator>::Add(!0)
#define List_1_Add_m3805783809(__this, p0, method) ((  void (*) (List_1_t3720455162 *, Generator_t2248380420 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// !!0 UnityEngine.GameObject::GetComponent<CameraMover>()
#define GameObject_GetComponent_TisCameraMover_t2845631541_m3015587433(__this, method) ((  CameraMover_t2845631541 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m2081676745 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C"  bool Input_GetMouseButton_m513753021 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Tap::HandleDrag()
extern "C"  void Tap_HandleDrag_m2374621907 (Tap_t1232705552 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Tap::CanPlaceMachine()
extern "C"  bool Tap_CanPlaceMachine_m1846831374 (Tap_t1232705552 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Tap::PlaceMachine()
extern "C"  void Tap_PlaceMachine_m1732139582 (Tap_t1232705552 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Tap::CanSelectMachine()
extern "C"  bool Tap_CanSelectMachine_m1727297178 (Tap_t1232705552 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Tap::SelectMachine()
extern "C"  void Tap_SelectMachine_m1748397180 (Tap_t1232705552 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SelectUI UI::get_Select()
extern "C"  SelectUI_t1349636119 * UI_get_Select_m3339981865 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SelectUI::Deselect()
extern "C"  void SelectUI_Deselect_m2896710055 (SelectUI_t1349636119 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Tap::IsPointerOverTag(System.String)
extern "C"  bool Tap_IsPointerOverTag_m56860595 (RuntimeObject * __this /* static, unused */, String_t* ___tag0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMover::RecordDragStart()
extern "C"  void CameraMover_RecordDragStart_m4021900204 (CameraMover_t2845631541 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Tap::CanDragCamera()
extern "C"  bool Tap_CanDragCamera_m2104012931 (Tap_t1232705552 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMover::Move()
extern "C"  void CameraMover_Move_m1495737743 (CameraMover_t2845631541 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Tap::IsPointerOverUI()
extern "C"  bool Tap_IsPointerOverUI_m4063516749 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Tap::MouseWorldPosition()
extern "C"  Vector2_t2156229523  Tap_MouseWorldPosition_m3981404498 (Tap_t1232705552 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Tap::RoundVector(UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Tap_RoundVector_m2973389852 (Tap_t1232705552 * __this, Vector2_t2156229523  ___v0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean GridOf`1<Machine>::ElementAt(UnityEngine.Vector2)
#define GridOf_1_ElementAt_m1892461303(__this /* static, unused */, p0, method) ((  bool (*) (RuntimeObject * /* static, unused */, Vector2_t2156229523 , const RuntimeMethod*))GridOf_1_ElementAt_m2648224107_gshared)(__this /* static, unused */, p0, method)
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SelectUI::Select(Machine)
extern "C"  void SelectUI_Select_m973328249 (SelectUI_t1349636119 * __this, Machine_t4122409742 * ___machine0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
extern "C"  EventSystem_t1003666588 * EventSystem_get_current_m1416377559 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
extern "C"  GameObject_t1113636619 * EventSystem_get_currentSelectedGameObject_m2939274948 (EventSystem_t1003666588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C"  Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
extern "C"  bool GameObject_CompareTag_m3144439756 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<RunUI>()
#define Component_GetComponent_TisRunUI_t3214653273_m237926909(__this, method) ((  RunUI_t3214653273 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<MachineUI>()
#define Component_GetComponent_TisMachineUI_t252077060_m4251883980(__this, method) ((  MachineUI_t252077060 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<SelectUI>()
#define Component_GetComponent_TisSelectUI_t1349636119_m1154063999(__this, method) ((  SelectUI_t1349636119 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Collections.Generic.List`1<CrateGroup> Welder::GetWeldGroups()
extern "C"  List_1_t2588031774 * Welder_GetWeldGroups_m335897980 (Welder_t3775122660 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Welder::Weld(System.Collections.Generic.List`1<CrateGroup>)
extern "C"  void Welder_Weld_m33740497 (Welder_t3775122660 * __this, List_1_t2588031774 * ___weldGroups0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<CrateGroup>::get_Count()
#define List_1_get_Count_m4199684629(__this, method) ((  int32_t (*) (List_1_t2588031774 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<CrateGroup>::get_Item(System.Int32)
#define List_1_get_Item_m482029729(__this, p0, method) ((  CrateGroup_t1115957032 * (*) (List_1_t2588031774 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<CrateGroup>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m470654483(__this, p0, method) ((  void (*) (List_1_t2588031774 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method)
// System.Void CrateGroup::Merge(CrateGroup)
extern "C"  void CrateGroup_Merge_m1723941264 (CrateGroup_t1115957032 * __this, CrateGroup_t1115957032 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> Welder::GetWeldSquares()
extern "C"  List_1_t3628304265 * Welder_GetWeldSquares_m1391546050 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::Contains(!0)
#define List_1_Contains_m1070748127(__this, p0, method) ((  bool (*) (List_1_t3628304265 *, Vector2_t2156229523 , const RuntimeMethod*))List_1_Contains_m1070748127_gshared)(__this, p0, method)
// System.Void WireGroup::.ctor()
extern "C"  void WireGroup__ctor_m2268275209 (WireGroup_t228895900 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Wire>::Add(!0)
#define List_1_Add_m860147963(__this, p0, method) ((  void (*) (List_1_t2587202873 *, Wire_t1115128131 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void Wire::Connect()
extern "C"  void Wire_Connect_m1657954004 (Wire_t1115128131 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WireGroup::Merge(WireGroup)
extern "C"  void WireGroup_Merge_m3655234051 (WireGroup_t228895900 * __this, WireGroup_t228895900 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Wire>::.ctor()
#define List_1__ctor_m1638165137(__this, method) ((  void (*) (List_1_t2587202873 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Wire>::GetEnumerator()
#define List_1_GetEnumerator_m860095735(__this, method) ((  Enumerator_t181479454  (*) (List_1_t2587202873 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Wire>::get_Current()
#define Enumerator_get_Current_m1765168993(__this, method) ((  Wire_t1115128131 * (*) (Enumerator_t181479454 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Sensor>::Add(!0)
#define List_1_Add_m815867368(__this, p0, method) ((  void (*) (List_1_t3217410706 *, Sensor_t1745335964 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Wire>::MoveNext()
#define Enumerator_MoveNext_m2871313586(__this, method) ((  bool (*) (Enumerator_t181479454 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Wire>::Dispose()
#define Enumerator_Dispose_m2152453677(__this, method) ((  void (*) (Enumerator_t181479454 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Wire>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m1519339901(__this, p0, method) ((  void (*) (List_1_t2587202873 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3709462088_gshared)(__this, p0, method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void CameraMover::.ctor()
extern "C"  void CameraMover__ctor_m1903090366 (CameraMover_t2845631541 * __this, const RuntimeMethod* method)
{
	{
		__this->set_dragSpeed_2((8.0f));
		__this->set_scrollHor_5((bool)1);
		__this->set_dragTimeThreshold_8((0.15f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraMover::Start()
extern "C"  void CameraMover_Start_m2355516190 (CameraMover_t2845631541 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMover_Start_m2355516190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_t4157153871 * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Camera_t4157153871 * L_0 = Component_GetComponent_TisCamera_t4157153871_m1557787507(__this, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var);
		V_0 = L_0;
		Camera_t4157153871 * L_1 = V_0;
		NullCheck(L_1);
		float L_2 = Camera_get_orthographicSize_m3903216845(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		Camera_t4157153871 * L_3 = V_0;
		NullCheck(L_3);
		float L_4 = Camera_get_orthographicSize_m3903216845(L_3, /*hidden argument*/NULL);
		Camera_t4157153871 * L_5 = V_0;
		NullCheck(L_5);
		float L_6 = Camera_get_aspect_m862507514(L_5, /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_multiply((float)L_4, (float)L_6));
		V_3 = (0.5f);
		float L_7 = V_2;
		float L_8 = __this->get_mapBuffer_3();
		float L_9 = V_3;
		__this->set_leftBound_9(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8)), (float)L_9)));
		int32_t L_10 = GridOf_1_Width_m179343242(NULL /*static, unused*/, /*hidden argument*/GridOf_1_Width_m179343242_RuntimeMethod_var);
		float L_11 = __this->get_mapBuffer_3();
		float L_12 = V_3;
		float L_13 = V_2;
		__this->set_rightBound_10(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)(((float)((float)L_10))), (float)L_11)), (float)L_12)), (float)L_13)));
		float L_14 = V_1;
		float L_15 = __this->get_mapBuffer_3();
		float L_16 = V_3;
		__this->set_lowerBound_12(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_14, (float)L_15)), (float)L_16)));
		int32_t L_17 = GridOf_1_Height_m3407359771(NULL /*static, unused*/, /*hidden argument*/GridOf_1_Height_m3407359771_RuntimeMethod_var);
		float L_18 = __this->get_mapBuffer_3();
		float L_19 = V_3;
		float L_20 = V_1;
		__this->set_upperBound_11(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)(((float)((float)L_17))), (float)L_18)), (float)L_19)), (float)L_20)));
		return;
	}
}
// System.Void CameraMover::RecordDragStart()
extern "C"  void CameraMover_RecordDragStart_m4021900204 (CameraMover_t2845631541 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMover_RecordDragStart_m4021900204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_dragOrigin_6(L_0);
		float L_1 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_dragStartTime_7(L_1);
		return;
	}
}
// System.Void CameraMover::Move()
extern "C"  void CameraMover_Move_m1495737743 (CameraMover_t2845631541 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMover_Move_m1495737743_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = __this->get_dragOrigin_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_4 = Camera_ScreenToViewportPoint_m3569032523(L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = (&V_0)->get_x_1();
		float L_6 = __this->get_dragSpeed_2();
		float L_7 = (&V_0)->get_y_2();
		float L_8 = __this->get_dragSpeed_2();
		Vector3__ctor_m3353183577((&V_1), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), (float)(-1.0f))), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), (float)(-1.0f))), (0.0f), /*hidden argument*/NULL);
		bool L_9 = __this->get_scrollVert_4();
		if (L_9)
		{
			goto IL_0066;
		}
	}
	{
		(&V_1)->set_y_2((0.0f));
	}

IL_0066:
	{
		bool L_10 = __this->get_scrollHor_5();
		if (L_10)
		{
			goto IL_007d;
		}
	}
	{
		(&V_1)->set_x_1((0.0f));
	}

IL_007d:
	{
		ObjectU5BU5D_t2843939325* L_11 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = L_13;
		RuntimeObject * L_15 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral4135548174, L_11, /*hidden argument*/NULL);
		Transform_t3600365921 * L_16 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_17 = L_16;
		NullCheck(L_17);
		Vector3_t3722313464  L_18 = Transform_get_position_m36019626(L_17, /*hidden argument*/NULL);
		Vector3_t3722313464  L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_20 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_m3387557959(L_17, L_20, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_21 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		Transform_t3600365921 * L_22 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t3722313464  L_23 = Transform_get_position_m36019626(L_22, /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = L_23;
		RuntimeObject * L_25 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_25);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_25);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral2956504559, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_26 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_dragOrigin_6(L_26);
		CameraMover_SnapToBoundaries_m3844210631(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraMover::SnapToBoundaries()
extern "C"  void CameraMover_SnapToBoundaries_m3844210631 (CameraMover_t2845631541 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMover_SnapToBoundaries_m3844210631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_x_1();
		float L_3 = __this->get_leftBound_9();
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0062;
		}
	}
	{
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = L_4;
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		float L_7 = __this->get_leftBound_9();
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = (&V_1)->get_x_1();
		Vector3_t3722313464  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m3353183577((&L_11), ((float)il2cpp_codegen_subtract((float)L_7, (float)L_10)), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_12 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_6, L_11, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_m3387557959(L_5, L_12, /*hidden argument*/NULL);
		goto IL_00bf;
	}

IL_0062:
	{
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t3722313464  L_14 = Transform_get_position_m36019626(L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		float L_15 = (&V_2)->get_x_1();
		float L_16 = __this->get_rightBound_10();
		if ((!(((float)L_15) > ((float)L_16))))
		{
			goto IL_00bf;
		}
	}
	{
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_18 = L_17;
		NullCheck(L_18);
		Vector3_t3722313464  L_19 = Transform_get_position_m36019626(L_18, /*hidden argument*/NULL);
		float L_20 = __this->get_rightBound_10();
		Transform_t3600365921 * L_21 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t3722313464  L_22 = Transform_get_position_m36019626(L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		float L_23 = (&V_3)->get_x_1();
		Vector3_t3722313464  L_24;
		memset(&L_24, 0, sizeof(L_24));
		Vector3__ctor_m3353183577((&L_24), ((float)il2cpp_codegen_subtract((float)L_20, (float)L_23)), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_25 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_19, L_24, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_position_m3387557959(L_18, L_25, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		Transform_t3600365921 * L_26 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t3722313464  L_27 = Transform_get_position_m36019626(L_26, /*hidden argument*/NULL);
		V_4 = L_27;
		float L_28 = (&V_4)->get_y_2();
		float L_29 = __this->get_lowerBound_12();
		if ((!(((float)L_28) < ((float)L_29))))
		{
			goto IL_0123;
		}
	}
	{
		Transform_t3600365921 * L_30 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_31 = L_30;
		NullCheck(L_31);
		Vector3_t3722313464  L_32 = Transform_get_position_m36019626(L_31, /*hidden argument*/NULL);
		float L_33 = __this->get_lowerBound_12();
		Transform_t3600365921 * L_34 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t3722313464  L_35 = Transform_get_position_m36019626(L_34, /*hidden argument*/NULL);
		V_5 = L_35;
		float L_36 = (&V_5)->get_y_2();
		Vector3_t3722313464  L_37;
		memset(&L_37, 0, sizeof(L_37));
		Vector3__ctor_m3353183577((&L_37), (0.0f), ((float)il2cpp_codegen_subtract((float)L_33, (float)L_36)), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_38 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_32, L_37, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_position_m3387557959(L_31, L_38, /*hidden argument*/NULL);
		goto IL_0182;
	}

IL_0123:
	{
		Transform_t3600365921 * L_39 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_t3722313464  L_40 = Transform_get_position_m36019626(L_39, /*hidden argument*/NULL);
		V_6 = L_40;
		float L_41 = (&V_6)->get_y_2();
		float L_42 = __this->get_upperBound_11();
		if ((!(((float)L_41) > ((float)L_42))))
		{
			goto IL_0182;
		}
	}
	{
		Transform_t3600365921 * L_43 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_44 = L_43;
		NullCheck(L_44);
		Vector3_t3722313464  L_45 = Transform_get_position_m36019626(L_44, /*hidden argument*/NULL);
		float L_46 = __this->get_upperBound_11();
		Transform_t3600365921 * L_47 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_47);
		Vector3_t3722313464  L_48 = Transform_get_position_m36019626(L_47, /*hidden argument*/NULL);
		V_7 = L_48;
		float L_49 = (&V_7)->get_y_2();
		Vector3_t3722313464  L_50;
		memset(&L_50, 0, sizeof(L_50));
		Vector3__ctor_m3353183577((&L_50), (0.0f), ((float)il2cpp_codegen_subtract((float)L_46, (float)L_49)), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_51 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_45, L_50, /*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_set_position_m3387557959(L_44, L_51, /*hidden argument*/NULL);
	}

IL_0182:
	{
		return;
	}
}
// UnityEngine.RaycastHit2D[] CameraMover::GameObjectsUnderTap()
extern "C"  RaycastHit2DU5BU5D_t4286651560* CameraMover_GameObjectsUnderTap_m159032426 (CameraMover_t2845631541 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMover_GameObjectsUnderTap_m159032426_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t2156229523  L_0 = CameraMover_MouseWorldPosition_m1675890510(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1528932956_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t4286651560* L_2 = Physics2D_RaycastAll_m3534418674(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 CameraMover::MouseGridPosition()
extern "C"  Vector2_t2156229523  CameraMover_MouseGridPosition_m3944670853 (CameraMover_t2845631541 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = CameraMover_MouseWorldPosition_m1675890510(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_1 = CameraMover_RoundVector_m1886078930(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 CameraMover::MouseWorldPosition()
extern "C"  Vector2_t2156229523  CameraMover_MouseWorldPosition_m1675890510 (CameraMover_t2845631541 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMover_MouseWorldPosition_m1675890510_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_2 = Camera_ScreenToWorldPoint_m3978588570(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_x_1();
		float L_4 = (&V_0)->get_y_2();
		Vector2_t2156229523  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector2__ctor_m3970636864((&L_5), L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 CameraMover::RoundVector(UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  CameraMover_RoundVector_m1886078930 (CameraMover_t2845631541 * __this, Vector2_t2156229523  ___v0, const RuntimeMethod* method)
{
	{
		float L_0 = (&___v0)->get_x_0();
		double L_1 = bankers_round((((double)((double)L_0))));
		float L_2 = (&___v0)->get_y_1();
		double L_3 = bankers_round((((double)((double)L_2))));
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), (((float)((float)L_1))), (((float)((float)L_3))), /*hidden argument*/NULL);
		return L_4;
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
// System.Void Conveyor::.ctor()
extern "C"  void Conveyor__ctor_m2593455692 (Conveyor_t2171737337 * __this, const RuntimeMethod* method)
{
	{
		Machine__ctor_m2672044869(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Conveyor::Start()
extern "C"  void Conveyor_Start_m1341034172 (Conveyor_t2171737337 * __this, const RuntimeMethod* method)
{
	{
		Machine_Start_m764592851(__this, /*hidden argument*/NULL);
		((Machine_t4122409742 *)__this)->set_isObstacle_3((bool)0);
		return;
	}
}
// System.Void Conveyor::Rotate(System.Boolean)
extern "C"  void Conveyor_Rotate_m3384034335 (Conveyor_t2171737337 * __this, bool ___clockwise0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464 * G_B2_0 = NULL;
	Vector3_t3722313464 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Vector3_t3722313464 * G_B3_1 = NULL;
	{
		Vector2_t2156229523  L_0 = __this->get_direction_5();
		bool L_1 = ___clockwise0;
		Vector2_t2156229523  L_2 = Machine_RotateVector_m1548302461(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->set_direction_5(L_2);
		Vector3__ctor_m3353183577((&V_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		bool L_3 = ___clockwise0;
		G_B1_0 = (&V_0);
		if (!L_3)
		{
			G_B2_0 = (&V_0);
			goto IL_0038;
		}
	}
	{
		G_B3_0 = ((int32_t)-90);
		G_B3_1 = G_B1_0;
		goto IL_003a;
	}

IL_0038:
	{
		G_B3_0 = ((int32_t)90);
		G_B3_1 = G_B2_0;
	}

IL_003a:
	{
		G_B3_1->set_z_3((((float)((float)G_B3_0))));
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = V_0;
		NullCheck(L_4);
		Transform_Rotate_m1886816857(L_4, L_5, 0, /*hidden argument*/NULL);
		MachineUI_t252077060 * L_6 = UI_get_Machines_m4279099061(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = L_6->get_conveyorPrefab_9();
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = V_0;
		NullCheck(L_8);
		Transform_Rotate_m1886816857(L_8, L_9, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Conveyor::OnStepStart()
extern "C"  void Conveyor_OnStepStart_m3824368036 (Conveyor_t2171737337 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Conveyor_OnStepStart_m3824368036_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Crate_t3334083239 * V_0 = NULL;
	{
		Vector2_t2156229523  L_0 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		Crate_t3334083239 * L_1 = GridOf_1_At_m3659202116(NULL /*static, unused*/, L_0, /*hidden argument*/GridOf_1_At_m3659202116_RuntimeMethod_var);
		V_0 = L_1;
		Crate_t3334083239 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		Crate_t3334083239 * L_4 = V_0;
		NullCheck(L_4);
		CrateGroup_t1115957032 * L_5 = L_4->get_group_4();
		CrateGroup_t1115957032 * L_6 = L_5;
		NullCheck(L_6);
		Vector2_t2156229523  L_7 = L_6->get_netForce_3();
		Vector2_t2156229523  L_8 = __this->get_direction_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_9 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_netForce_3(L_9);
	}

IL_0033:
	{
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
// System.Void Crate::.ctor()
extern "C"  void Crate__ctor_m2112968563 (Crate_t3334083239 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Crate__ctor_m2112968563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_painted_6(((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)4)));
		GridThing__ctor_m370494398(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Crate::Start()
extern "C"  void Crate_Start_m4230066815 (Crate_t3334083239 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean[] Crate::WorldPainted()
extern "C"  BooleanU5BU5D_t2897418192* Crate_WorldPainted_m579725209 (Crate_t3334083239 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Crate_WorldPainted_m579725209_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BooleanU5BU5D_t2897418192* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = ((BooleanU5BU5D_t2897418192*)SZArrayNew(BooleanU5BU5D_t2897418192_il2cpp_TypeInfo_var, (uint32_t)4));
		V_1 = 0;
		goto IL_001c;
	}

IL_000e:
	{
		BooleanU5BU5D_t2897418192* L_0 = V_0;
		int32_t L_1 = V_1;
		int32_t L_2 = V_1;
		bool L_3 = Crate_IsPaintedWorldSide_m3833883755(__this, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (bool)L_3);
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001c:
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) < ((int32_t)4)))
		{
			goto IL_000e;
		}
	}
	{
		BooleanU5BU5D_t2897418192* L_6 = V_0;
		return L_6;
	}
}
// System.Void Crate::Paint(UnityEngine.Vector2)
extern "C"  void Crate_Paint_m4231015055 (Crate_t3334083239 * __this, Vector2_t2156229523  ___side0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_eulerAngles_m2743581774(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_z_3();
		double L_3 = bankers_round((((double)((double)L_2))));
		V_0 = (((int32_t)((int32_t)L_3)));
		int32_t L_4 = V_0;
		V_2 = ((int32_t)((int32_t)L_4/(int32_t)((int32_t)90)));
		Vector2_t2156229523  L_5 = ___side0;
		int32_t L_6 = Crate_GetSideIntFromVector_m175488776(__this, L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_2;
		int32_t L_8 = Crate_nfmod_m3334865158(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)), 4, /*hidden argument*/NULL);
		V_3 = L_8;
		int32_t L_9 = V_3;
		Crate_PaintCrateOnCrateSide_m3420533723(__this, L_9, /*hidden argument*/NULL);
		Crate_WorldPainted_m579725209(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Crate::nfmod(System.Int32,System.Int32)
extern "C"  int32_t Crate_nfmod_m3334865158 (Crate_t3334083239 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		int32_t L_0 = ___x0;
		V_0 = (((float)((float)L_0)));
		int32_t L_1 = ___y1;
		V_1 = (((float)((float)L_1)));
		float L_2 = V_0;
		float L_3 = V_1;
		float L_4 = V_0;
		float L_5 = V_1;
		double L_6 = floor((((double)((double)((float)((float)L_4/(float)L_5))))));
		return (((int32_t)((int32_t)((double)il2cpp_codegen_subtract((double)(((double)((double)L_2))), (double)((double)il2cpp_codegen_multiply((double)(((double)((double)L_3))), (double)L_6)))))));
	}
}
// System.Int32 Crate::GetSideIntFromVector(UnityEngine.Vector2)
extern "C"  int32_t Crate_GetSideIntFromVector_m175488776 (Crate_t3334083239 * __this, Vector2_t2156229523  ___sideVect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Crate_GetSideIntFromVector_m175488776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		Vector2_t2156229523  L_0 = ___sideVect0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_get_right_m1027081661(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_2 = Vector2_op_Equality_m2303255133(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_0 = 0;
		goto IL_0059;
	}

IL_0019:
	{
		Vector2_t2156229523  L_3 = ___sideVect0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_4 = Vector2_get_up_m2647420593(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_5 = Vector2_op_Equality_m2303255133(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		V_0 = 1;
		goto IL_0059;
	}

IL_0030:
	{
		Vector2_t2156229523  L_6 = ___sideVect0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_7 = Vector2_get_left_m1559018038(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_8 = Vector2_op_Equality_m2303255133(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		V_0 = 2;
		goto IL_0059;
	}

IL_0047:
	{
		Vector2_t2156229523  L_9 = ___sideVect0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_10 = Vector2_get_down_m2886001705(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_11 = Vector2_op_Equality_m2303255133(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		V_0 = 3;
	}

IL_0059:
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Void Crate::PaintCrateOnCrateSide(System.Int32)
extern "C"  void Crate_PaintCrateOnCrateSide_m3420533723 (Crate_t3334083239 * __this, int32_t ___side0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Crate_PaintCrateOnCrateSide_m3420533723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		GameObject_t1113636619 * L_0 = __this->get_paintPrefab_3();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_2 = Object_Instantiate_TisGameObject_t1113636619_m4130575780(NULL /*static, unused*/, L_0, L_1, (bool)0, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4130575780_RuntimeMethod_var);
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_parent_m786917804(L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_6;
		V_2 = 0;
		int32_t L_7 = ___side0;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0043;
			}
			case 1:
			{
				goto IL_0054;
			}
			case 2:
			{
				goto IL_0068;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0043:
	{
		(&V_1)->set_x_1((1.0f));
		goto IL_0096;
	}

IL_0054:
	{
		(&V_1)->set_y_2((1.0f));
		V_2 = ((int32_t)90);
		goto IL_0096;
	}

IL_0068:
	{
		(&V_1)->set_x_1((-1.0f));
		V_2 = ((int32_t)180);
		goto IL_0096;
	}

IL_007f:
	{
		(&V_1)->set_y_2((-1.0f));
		V_2 = ((int32_t)270);
		goto IL_0096;
	}

IL_0096:
	{
		Int32U5BU5D_t385246372* L_8 = __this->get_painted_6();
		int32_t L_9 = ___side0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int32_t)1);
		GameObject_t1113636619 * L_10 = V_0;
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		Vector3_t3722313464  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m3353183577((&L_13), (0.0f), (0.0f), (((float)((float)L_12))), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_Rotate_m720511863(L_11, L_13, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_14 = V_0;
		NullCheck(L_14);
		Transform_t3600365921 * L_15 = GameObject_get_transform_m1369836730(L_14, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_17 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_16, (0.25f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localPosition_m4128471975(L_15, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Crate::IsPaintedWorldSide(System.Int32)
extern "C"  bool Crate_IsPaintedWorldSide_m3833883755 (Crate_t3334083239 * __this, int32_t ___side0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_eulerAngles_m2743581774(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_z_3();
		double L_3 = bankers_round((((double)((double)L_2))));
		V_0 = (((int32_t)((int32_t)L_3)));
		int32_t L_4 = V_0;
		V_2 = ((int32_t)((int32_t)L_4/(int32_t)((int32_t)90)));
		int32_t L_5 = ___side0;
		int32_t L_6 = V_2;
		int32_t L_7 = Crate_nfmod_m3334865158(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)), 4, /*hidden argument*/NULL);
		V_3 = L_7;
		Int32U5BU5D_t385246372* L_8 = __this->get_painted_6();
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		return (bool)((((int32_t)L_11) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Crate::CanMove(UnityEngine.Vector2)
extern "C"  bool Crate_CanMove_m3784799477 (Crate_t3334083239 * __this, Vector2_t2156229523  ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Crate_CanMove_m3784799477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	Machine_t4122409742 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Crate_t3334083239 * V_5 = NULL;
	int32_t G_B7_0 = 0;
	{
		bool L_0 = __this->get_hasMoved_5();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		Vector2_t2156229523  L_1 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_2 = ___direction0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector2_t2156229523  L_4 = V_0;
		bool L_5 = GridOf_1_InBounds_m3234954020(NULL /*static, unused*/, L_4, /*hidden argument*/GridOf_1_InBounds_m3234954020_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		return (bool)1;
	}

IL_002c:
	{
		Vector2_t2156229523  L_7 = V_0;
		Machine_t4122409742 * L_8 = GridOf_1_At_m3872141981(NULL /*static, unused*/, L_7, /*hidden argument*/GridOf_1_At_m3872141981_RuntimeMethod_var);
		V_2 = L_8;
		Machine_t4122409742 * L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		Machine_t4122409742 * L_11 = V_2;
		NullCheck(L_11);
		bool L_12 = L_11->get_isObstacle_3();
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0047;
	}

IL_0046:
	{
		G_B7_0 = 0;
	}

IL_0047:
	{
		V_3 = (bool)G_B7_0;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0050:
	{
		Vector2_t2156229523  L_14 = V_0;
		bool L_15 = Crate_CheckPusherArms_m2800673058(__this, L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_0062;
		}
	}
	{
		return (bool)0;
	}

IL_0062:
	{
		Vector2_t2156229523  L_17 = V_0;
		Crate_t3334083239 * L_18 = GridOf_1_At_m3659202116(NULL /*static, unused*/, L_17, /*hidden argument*/GridOf_1_At_m3659202116_RuntimeMethod_var);
		V_5 = L_18;
		Crate_t3334083239 * L_19 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0078;
		}
	}
	{
		return (bool)1;
	}

IL_0078:
	{
		CrateGroup_t1115957032 * L_21 = __this->get_group_4();
		NullCheck(L_21);
		List_1_t511190685 * L_22 = L_21->get_crates_0();
		Crate_t3334083239 * L_23 = V_5;
		NullCheck(L_22);
		bool L_24 = List_1_Contains_m2773044595(L_22, L_23, /*hidden argument*/List_1_Contains_m2773044595_RuntimeMethod_var);
		if (!L_24)
		{
			goto IL_0091;
		}
	}
	{
		return (bool)1;
	}

IL_0091:
	{
		Crate_t3334083239 * L_25 = V_5;
		NullCheck(L_25);
		CrateGroup_t1115957032 * L_26 = L_25->get_group_4();
		Vector2_t2156229523  L_27 = ___direction0;
		NullCheck(L_26);
		bool L_28 = CrateGroup_CanMove_m1914781014(L_26, L_27, /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Boolean Crate::CanRotate(UnityEngine.Vector3)
extern "C"  bool Crate_CanRotate_m4019342585 (Crate_t3334083239 * __this, Vector3_t3722313464  ___spin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Crate_CanRotate_m4019342585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3628304265 * V_0 = NULL;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t1222580846  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Machine_t4122409742 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Crate_t3334083239 * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B5_0 = 0;
	{
		Vector2_t2156229523  L_0 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = ___spin0;
		IL2CPP_RUNTIME_CLASS_INIT(Rotator_t2029754672_il2cpp_TypeInfo_var);
		List_1_t3628304265 * L_2 = Rotator_GetSquaresToCheck_m3524065233(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		List_1_t3628304265 * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t1222580846  L_4 = List_1_GetEnumerator_m809843680(L_3, /*hidden argument*/List_1_GetEnumerator_m809843680_RuntimeMethod_var);
		V_2 = L_4;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a4;
		}

IL_0019:
		{
			Vector2_t2156229523  L_5 = Enumerator_get_Current_m2598000980((&V_2), /*hidden argument*/Enumerator_get_Current_m2598000980_RuntimeMethod_var);
			V_1 = L_5;
			Vector2_t2156229523  L_6 = V_1;
			Machine_t4122409742 * L_7 = GridOf_1_At_m3872141981(NULL /*static, unused*/, L_6, /*hidden argument*/GridOf_1_At_m3872141981_RuntimeMethod_var);
			V_3 = L_7;
			Machine_t4122409742 * L_8 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_9 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_003b;
			}
		}

IL_0033:
		{
			Machine_t4122409742 * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = L_10->get_isObstacle_3();
			G_B5_0 = ((int32_t)(L_11));
			goto IL_003c;
		}

IL_003b:
		{
			G_B5_0 = 0;
		}

IL_003c:
		{
			V_4 = (bool)G_B5_0;
			bool L_12 = V_4;
			if (!L_12)
			{
				goto IL_004d;
			}
		}

IL_0045:
		{
			V_5 = (bool)0;
			IL2CPP_LEAVE(0xC5, FINALLY_00b5);
		}

IL_004d:
		{
			Vector2_t2156229523  L_13 = V_1;
			bool L_14 = Crate_CheckPusherArms_m2800673058(__this, L_13, /*hidden argument*/NULL);
			V_6 = L_14;
			bool L_15 = V_6;
			if (!L_15)
			{
				goto IL_0065;
			}
		}

IL_005d:
		{
			V_5 = (bool)0;
			IL2CPP_LEAVE(0xC5, FINALLY_00b5);
		}

IL_0065:
		{
			Vector2_t2156229523  L_16 = V_1;
			Crate_t3334083239 * L_17 = GridOf_1_At_m3659202116(NULL /*static, unused*/, L_16, /*hidden argument*/GridOf_1_At_m3659202116_RuntimeMethod_var);
			V_7 = L_17;
			Crate_t3334083239 * L_18 = V_7;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_19 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_00a4;
			}
		}

IL_0079:
		{
			Crate_t3334083239 * L_20 = V_7;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_21 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_00a4;
			}
		}

IL_0085:
		{
			CrateGroup_t1115957032 * L_22 = __this->get_group_4();
			NullCheck(L_22);
			List_1_t511190685 * L_23 = L_22->get_crates_0();
			Crate_t3334083239 * L_24 = V_7;
			NullCheck(L_23);
			bool L_25 = List_1_Contains_m2773044595(L_23, L_24, /*hidden argument*/List_1_Contains_m2773044595_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_00a4;
			}
		}

IL_009c:
		{
			V_5 = (bool)0;
			IL2CPP_LEAVE(0xC5, FINALLY_00b5);
		}

IL_00a4:
		{
			bool L_26 = Enumerator_MoveNext_m4079852040((&V_2), /*hidden argument*/Enumerator_MoveNext_m4079852040_RuntimeMethod_var);
			if (L_26)
			{
				goto IL_0019;
			}
		}

IL_00b0:
		{
			IL2CPP_LEAVE(0xC3, FINALLY_00b5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b5;
	}

FINALLY_00b5:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2367629053((&V_2), /*hidden argument*/Enumerator_Dispose_m2367629053_RuntimeMethod_var);
		IL2CPP_END_FINALLY(181)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(181)
	{
		IL2CPP_JUMP_TBL(0xC5, IL_00c5)
		IL2CPP_JUMP_TBL(0xC3, IL_00c3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00c3:
	{
		return (bool)1;
	}

IL_00c5:
	{
		bool L_27 = V_5;
		return L_27;
	}
}
// System.Void Crate::Rotate(UnityEngine.Vector3)
extern "C"  void Crate_Rotate_m1528817573 (Crate_t3334083239 * __this, Vector3_t3722313464  ___spin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Crate_Rotate_m1528817573_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		bool L_0 = __this->get_hasMoved_5();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->set_hasMoved_5((bool)1);
		Vector2_t2156229523  L_1 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = ___spin0;
		IL2CPP_RUNTIME_CLASS_INIT(Rotator_t2029754672_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Rotator_RotateVector_m3711280816(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector2_t2156229523  L_4 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		GridOf_1_Remove_m3068458711(NULL /*static, unused*/, L_4, /*hidden argument*/GridOf_1_Remove_m3068458711_RuntimeMethod_var);
		Vector2_t2156229523  L_5 = V_0;
		Vector2_t2156229523  L_6 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_7 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Vector2_t2156229523  L_8 = V_0;
		GridThing_set_xy_m3795576369(__this, L_8, /*hidden argument*/NULL);
		GridOf_1_Add_m1381055868(NULL /*static, unused*/, __this, /*hidden argument*/GridOf_1_Add_m1381055868_RuntimeMethod_var);
		Vector2_t2156229523  L_9 = V_0;
		Vector3_t3722313464  L_10 = ___spin0;
		RuntimeObject* L_11 = Crate_AnimateRotation_m345258124(__this, L_9, L_10, (bool)0, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Crate::CheckPusherArms(UnityEngine.Vector2)
extern "C"  bool Crate_CheckPusherArms_m2800673058 (Crate_t3334083239 * __this, Vector2_t2156229523  ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Crate_CheckPusherArms_m2800673058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CCheckPusherArmsU3Ec__AnonStorey2_t340666492 * V_0 = NULL;
	Action_1_t4294877337 * V_1 = NULL;
	{
		U3CCheckPusherArmsU3Ec__AnonStorey2_t340666492 * L_0 = (U3CCheckPusherArmsU3Ec__AnonStorey2_t340666492 *)il2cpp_codegen_object_new(U3CCheckPusherArmsU3Ec__AnonStorey2_t340666492_il2cpp_TypeInfo_var);
		U3CCheckPusherArmsU3Ec__AnonStorey2__ctor_m2601164063(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCheckPusherArmsU3Ec__AnonStorey2_t340666492 * L_1 = V_0;
		Vector2_t2156229523  L_2 = ___target0;
		NullCheck(L_1);
		L_1->set_target_0(L_2);
		U3CCheckPusherArmsU3Ec__AnonStorey2_t340666492 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_blockedByPusherArm_1((bool)0);
		U3CCheckPusherArmsU3Ec__AnonStorey2_t340666492 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)U3CCheckPusherArmsU3Ec__AnonStorey2_U3CU3Em__0_m3803264653_RuntimeMethod_var;
		Action_1_t4294877337 * L_6 = (Action_1_t4294877337 *)il2cpp_codegen_object_new(Action_1_t4294877337_il2cpp_TypeInfo_var);
		Action_1__ctor_m3536267445(L_6, L_4, L_5, /*hidden argument*/Action_1__ctor_m3536267445_RuntimeMethod_var);
		V_1 = L_6;
		Action_1_t4294877337 * L_7 = V_1;
		GridOf_1_ForEach_m659143872(NULL /*static, unused*/, L_7, /*hidden argument*/GridOf_1_ForEach_m659143872_RuntimeMethod_var);
		U3CCheckPusherArmsU3Ec__AnonStorey2_t340666492 * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = L_8->get_blockedByPusherArm_1();
		return L_9;
	}
}
// System.Void Crate::Move(UnityEngine.Vector2)
extern "C"  void Crate_Move_m4290318053 (Crate_t3334083239 * __this, Vector2_t2156229523  ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Crate_Move_m4290318053_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	Crate_t3334083239 * V_2 = NULL;
	{
		bool L_0 = __this->get_hasMoved_5();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		Vector2_t2156229523  L_1 = ___direction0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_3 = Vector2_op_Equality_m2303255133(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}

IL_001b:
	{
		return;
	}

IL_001c:
	{
		__this->set_hasMoved_5((bool)1);
		Vector2_t2156229523  L_4 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_5 = ___direction0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_6 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Vector2_t2156229523  L_7 = V_0;
		bool L_8 = GridOf_1_InBounds_m3234954020(NULL /*static, unused*/, L_7, /*hidden argument*/GridOf_1_InBounds_m3234954020_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		Vector2_t2156229523  L_10 = V_0;
		Vector2_t2156229523  L_11 = ___direction0;
		Crate_FallOffGrid_m1872323598(__this, L_10, L_11, /*hidden argument*/NULL);
		return;
	}

IL_0049:
	{
		Vector2_t2156229523  L_12 = V_0;
		Crate_t3334083239 * L_13 = GridOf_1_At_m3659202116(NULL /*static, unused*/, L_12, /*hidden argument*/GridOf_1_At_m3659202116_RuntimeMethod_var);
		V_2 = L_13;
		Crate_t3334083239 * L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		Crate_t3334083239 * L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_16, __this, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0073;
		}
	}
	{
		Crate_t3334083239 * L_18 = V_2;
		NullCheck(L_18);
		CrateGroup_t1115957032 * L_19 = L_18->get_group_4();
		Vector2_t2156229523  L_20 = ___direction0;
		NullCheck(L_19);
		CrateGroup_Move_m3386982613(L_19, L_20, /*hidden argument*/NULL);
	}

IL_0073:
	{
		Vector2_t2156229523  L_21 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		GridOf_1_Remove_m3068458711(NULL /*static, unused*/, L_21, /*hidden argument*/GridOf_1_Remove_m3068458711_RuntimeMethod_var);
		Vector2_t2156229523  L_22 = V_0;
		GridThing_set_xy_m3795576369(__this, L_22, /*hidden argument*/NULL);
		GridOf_1_Add_m1381055868(NULL /*static, unused*/, __this, /*hidden argument*/GridOf_1_Add_m1381055868_RuntimeMethod_var);
		Vector2_t2156229523  L_23 = V_0;
		Vector2_t2156229523  L_24 = ___direction0;
		RuntimeObject* L_25 = Crate_AnimateMove_m3374185797(__this, L_23, L_24, (bool)0, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Crate::FallOffGrid(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void Crate_FallOffGrid_m1872323598 (Crate_t3334083239 * __this, Vector2_t2156229523  ___destination0, Vector2_t2156229523  ___direction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Crate_FallOffGrid_m1872323598_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Vector2_t2156229523  L_0 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		GridOf_1_Remove_m3068458711(NULL /*static, unused*/, L_0, /*hidden argument*/GridOf_1_Remove_m3068458711_RuntimeMethod_var);
		__this->set_hasMoved_5((bool)1);
		V_0 = (bool)1;
		Vector2_t2156229523  L_1 = ___destination0;
		Vector2_t2156229523  L_2 = ___direction1;
		bool L_3 = V_0;
		RuntimeObject* L_4 = Crate_AnimateMove_m3374185797(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Crate::AnimateMove(UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C"  RuntimeObject* Crate_AnimateMove_m3374185797 (Crate_t3334083239 * __this, Vector2_t2156229523  ___destination0, Vector2_t2156229523  ___direction1, bool ___destroyAfter2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Crate_AnimateMove_m3374185797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CAnimateMoveU3Ec__Iterator0_t1583435394 * V_0 = NULL;
	{
		U3CAnimateMoveU3Ec__Iterator0_t1583435394 * L_0 = (U3CAnimateMoveU3Ec__Iterator0_t1583435394 *)il2cpp_codegen_object_new(U3CAnimateMoveU3Ec__Iterator0_t1583435394_il2cpp_TypeInfo_var);
		U3CAnimateMoveU3Ec__Iterator0__ctor_m430563843(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAnimateMoveU3Ec__Iterator0_t1583435394 * L_1 = V_0;
		Vector2_t2156229523  L_2 = ___direction1;
		NullCheck(L_1);
		L_1->set_direction_3(L_2);
		U3CAnimateMoveU3Ec__Iterator0_t1583435394 * L_3 = V_0;
		Vector2_t2156229523  L_4 = ___destination0;
		NullCheck(L_3);
		L_3->set_destination_4(L_4);
		U3CAnimateMoveU3Ec__Iterator0_t1583435394 * L_5 = V_0;
		bool L_6 = ___destroyAfter2;
		NullCheck(L_5);
		L_5->set_destroyAfter_5(L_6);
		U3CAnimateMoveU3Ec__Iterator0_t1583435394 * L_7 = V_0;
		NullCheck(L_7);
		L_7->set_U24this_6(__this);
		U3CAnimateMoveU3Ec__Iterator0_t1583435394 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Crate::AnimateRotation(UnityEngine.Vector2,UnityEngine.Vector3,System.Boolean)
extern "C"  RuntimeObject* Crate_AnimateRotation_m345258124 (Crate_t3334083239 * __this, Vector2_t2156229523  ___destination0, Vector3_t3722313464  ___spin1, bool ___destroyAfter2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Crate_AnimateRotation_m345258124_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CAnimateRotationU3Ec__Iterator1_t2176702074 * V_0 = NULL;
	{
		U3CAnimateRotationU3Ec__Iterator1_t2176702074 * L_0 = (U3CAnimateRotationU3Ec__Iterator1_t2176702074 *)il2cpp_codegen_object_new(U3CAnimateRotationU3Ec__Iterator1_t2176702074_il2cpp_TypeInfo_var);
		U3CAnimateRotationU3Ec__Iterator1__ctor_m621359371(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAnimateRotationU3Ec__Iterator1_t2176702074 * L_1 = V_0;
		Vector3_t3722313464  L_2 = ___spin1;
		NullCheck(L_1);
		L_1->set_spin_2(L_2);
		U3CAnimateRotationU3Ec__Iterator1_t2176702074 * L_3 = V_0;
		Vector2_t2156229523  L_4 = ___destination0;
		NullCheck(L_3);
		L_3->set_destination_6(L_4);
		U3CAnimateRotationU3Ec__Iterator1_t2176702074 * L_5 = V_0;
		bool L_6 = ___destroyAfter2;
		NullCheck(L_5);
		L_5->set_destroyAfter_7(L_6);
		U3CAnimateRotationU3Ec__Iterator1_t2176702074 * L_7 = V_0;
		NullCheck(L_7);
		L_7->set_U24this_8(__this);
		U3CAnimateRotationU3Ec__Iterator1_t2176702074 * L_8 = V_0;
		return L_8;
	}
}
// System.Void Crate::OnStepStart()
extern "C"  void Crate_OnStepStart_m3222136400 (Crate_t3334083239 * __this, const RuntimeMethod* method)
{
	{
		__this->set_hasMoved_5((bool)0);
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
// System.Void Crate/<AnimateMove>c__Iterator0::.ctor()
extern "C"  void U3CAnimateMoveU3Ec__Iterator0__ctor_m430563843 (U3CAnimateMoveU3Ec__Iterator0_t1583435394 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Crate/<AnimateMove>c__Iterator0::MoveNext()
extern "C"  bool U3CAnimateMoveU3Ec__Iterator0_MoveNext_m794432184 (U3CAnimateMoveU3Ec__Iterator0_t1583435394 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimateMoveU3Ec__Iterator0_MoveNext_m794432184_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_9();
		V_0 = L_0;
		__this->set_U24PC_9((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00aa;
			}
		}
	}
	{
		goto IL_0106;
	}

IL_0021:
	{
		__this->set_U3CframesU3E__0_0(((int32_t)10));
		StairMaster_t3581666356 * L_2 = GameManager_get_StairMaster_m618266316(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		float L_3 = L_2->get_stepSize_2();
		__this->set_U3CanimationTimeU3E__0_1(((float)il2cpp_codegen_subtract((float)L_3, (float)(0.02f))));
		__this->set_U3CiU3E__1_2(0);
		goto IL_00b8;
	}

IL_004b:
	{
		Crate_t3334083239 * L_4 = __this->get_U24this_6();
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(L_4, /*hidden argument*/NULL);
		Transform_t3600365921 * L_6 = L_5;
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		Vector2_t2156229523  L_8 = __this->get_direction_3();
		int32_t L_9 = __this->get_U3CframesU3E__0_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_10 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_8, (((float)((float)L_9))), /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_12 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_7, L_11, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_m3387557959(L_6, L_12, /*hidden argument*/NULL);
		float L_13 = __this->get_U3CanimationTimeU3E__0_1();
		int32_t L_14 = __this->get_U3CframesU3E__0_0();
		WaitForSeconds_t1699091251 * L_15 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_15, ((float)((float)L_13/(float)(((float)((float)L_14))))), /*hidden argument*/NULL);
		__this->set_U24current_7(L_15);
		bool L_16 = __this->get_U24disposing_8();
		if (L_16)
		{
			goto IL_00a5;
		}
	}
	{
		__this->set_U24PC_9(1);
	}

IL_00a5:
	{
		goto IL_0108;
	}

IL_00aa:
	{
		int32_t L_17 = __this->get_U3CiU3E__1_2();
		__this->set_U3CiU3E__1_2(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
	}

IL_00b8:
	{
		int32_t L_18 = __this->get_U3CiU3E__1_2();
		int32_t L_19 = __this->get_U3CframesU3E__0_0();
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_004b;
		}
	}
	{
		Crate_t3334083239 * L_20 = __this->get_U24this_6();
		NullCheck(L_20);
		Transform_t3600365921 * L_21 = Component_get_transform_m3162698980(L_20, /*hidden argument*/NULL);
		Vector2_t2156229523  L_22 = __this->get_destination_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_23 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_position_m3387557959(L_21, L_23, /*hidden argument*/NULL);
		bool L_24 = __this->get_destroyAfter_5();
		if (!L_24)
		{
			goto IL_00ff;
		}
	}
	{
		Crate_t3334083239 * L_25 = __this->get_U24this_6();
		NullCheck(L_25);
		GameObject_t1113636619 * L_26 = Component_get_gameObject_m442555142(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
	}

IL_00ff:
	{
		__this->set_U24PC_9((-1));
	}

IL_0106:
	{
		return (bool)0;
	}

IL_0108:
	{
		return (bool)1;
	}
}
// System.Object Crate/<AnimateMove>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CAnimateMoveU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m808547944 (U3CAnimateMoveU3Ec__Iterator0_t1583435394 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_7();
		return L_0;
	}
}
// System.Object Crate/<AnimateMove>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CAnimateMoveU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1295704864 (U3CAnimateMoveU3Ec__Iterator0_t1583435394 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_7();
		return L_0;
	}
}
// System.Void Crate/<AnimateMove>c__Iterator0::Dispose()
extern "C"  void U3CAnimateMoveU3Ec__Iterator0_Dispose_m2434278531 (U3CAnimateMoveU3Ec__Iterator0_t1583435394 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_8((bool)1);
		__this->set_U24PC_9((-1));
		return;
	}
}
// System.Void Crate/<AnimateMove>c__Iterator0::Reset()
extern "C"  void U3CAnimateMoveU3Ec__Iterator0_Reset_m3162567155 (U3CAnimateMoveU3Ec__Iterator0_t1583435394 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimateMoveU3Ec__Iterator0_Reset_m3162567155_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void Crate/<AnimateRotation>c__Iterator1::.ctor()
extern "C"  void U3CAnimateRotationU3Ec__Iterator1__ctor_m621359371 (U3CAnimateRotationU3Ec__Iterator1_t2176702074 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Crate/<AnimateRotation>c__Iterator1::MoveNext()
extern "C"  bool U3CAnimateRotationU3Ec__Iterator1_MoveNext_m1246994048 (U3CAnimateRotationU3Ec__Iterator1_t2176702074 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimateRotationU3Ec__Iterator1_MoveNext_m1246994048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	U3CAnimateRotationU3Ec__Iterator1_t2176702074 * G_B4_0 = NULL;
	U3CAnimateRotationU3Ec__Iterator1_t2176702074 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	U3CAnimateRotationU3Ec__Iterator1_t2176702074 * G_B5_1 = NULL;
	{
		int32_t L_0 = __this->get_U24PC_11();
		V_0 = L_0;
		__this->set_U24PC_11((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00ef;
			}
		}
	}
	{
		goto IL_014b;
	}

IL_0021:
	{
		__this->set_U3CframesU3E__0_0(((int32_t)10));
		StairMaster_t3581666356 * L_2 = GameManager_get_StairMaster_m618266316(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		float L_3 = L_2->get_stepSize_2();
		__this->set_U3CanimationTimeU3E__0_1(((float)il2cpp_codegen_subtract((float)L_3, (float)(0.02f))));
		Vector3_t3722313464 * L_4 = __this->get_address_of_spin_2();
		float L_5 = Vector3_get_Item_m668685504(L_4, 2, /*hidden argument*/NULL);
		G_B3_0 = __this;
		if ((!(((float)L_5) == ((float)(1.0f)))))
		{
			G_B4_0 = __this;
			goto IL_005d;
		}
	}
	{
		G_B5_0 = ((int32_t)90);
		G_B5_1 = G_B3_0;
		goto IL_005f;
	}

IL_005d:
	{
		G_B5_0 = ((int32_t)-90);
		G_B5_1 = G_B4_0;
	}

IL_005f:
	{
		int32_t L_6 = __this->get_U3CframesU3E__0_0();
		NullCheck(G_B5_1);
		G_B5_1->set_U3CangleU3E__0_3(((float)((float)(((float)((float)G_B5_0)))/(float)(((float)((float)L_6))))));
		__this->set_U3CiU3E__1_4(0);
		goto IL_00fd;
	}

IL_0079:
	{
		Vector3_t3722313464 * L_7 = __this->get_address_of_spin_2();
		float L_8 = Vector3_get_Item_m668685504(L_7, 0, /*hidden argument*/NULL);
		Vector3_t3722313464 * L_9 = __this->get_address_of_spin_2();
		float L_10 = Vector3_get_Item_m668685504(L_9, 1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m3353183577((&L_11), L_8, L_10, (0.0f), /*hidden argument*/NULL);
		__this->set_U3CppU3E__2_5(L_11);
		Crate_t3334083239 * L_12 = __this->get_U24this_8();
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = __this->get_U3CppU3E__2_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_15 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_16 = __this->get_U3CangleU3E__0_3();
		NullCheck(L_13);
		Transform_RotateAround_m2651195670(L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		float L_17 = __this->get_U3CanimationTimeU3E__0_1();
		int32_t L_18 = __this->get_U3CframesU3E__0_0();
		WaitForSeconds_t1699091251 * L_19 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_19, ((float)((float)L_17/(float)(((float)((float)L_18))))), /*hidden argument*/NULL);
		__this->set_U24current_9(L_19);
		bool L_20 = __this->get_U24disposing_10();
		if (L_20)
		{
			goto IL_00ea;
		}
	}
	{
		__this->set_U24PC_11(1);
	}

IL_00ea:
	{
		goto IL_014d;
	}

IL_00ef:
	{
		int32_t L_21 = __this->get_U3CiU3E__1_4();
		__this->set_U3CiU3E__1_4(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
	}

IL_00fd:
	{
		int32_t L_22 = __this->get_U3CiU3E__1_4();
		int32_t L_23 = __this->get_U3CframesU3E__0_0();
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0079;
		}
	}
	{
		Crate_t3334083239 * L_24 = __this->get_U24this_8();
		NullCheck(L_24);
		Transform_t3600365921 * L_25 = Component_get_transform_m3162698980(L_24, /*hidden argument*/NULL);
		Vector2_t2156229523  L_26 = __this->get_destination_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_27 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_position_m3387557959(L_25, L_27, /*hidden argument*/NULL);
		bool L_28 = __this->get_destroyAfter_7();
		if (!L_28)
		{
			goto IL_0144;
		}
	}
	{
		Crate_t3334083239 * L_29 = __this->get_U24this_8();
		NullCheck(L_29);
		GameObject_t1113636619 * L_30 = Component_get_gameObject_m442555142(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
	}

IL_0144:
	{
		__this->set_U24PC_11((-1));
	}

IL_014b:
	{
		return (bool)0;
	}

IL_014d:
	{
		return (bool)1;
	}
}
// System.Object Crate/<AnimateRotation>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CAnimateRotationU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m652372260 (U3CAnimateRotationU3Ec__Iterator1_t2176702074 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_9();
		return L_0;
	}
}
// System.Object Crate/<AnimateRotation>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CAnimateRotationU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m2018207291 (U3CAnimateRotationU3Ec__Iterator1_t2176702074 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_9();
		return L_0;
	}
}
// System.Void Crate/<AnimateRotation>c__Iterator1::Dispose()
extern "C"  void U3CAnimateRotationU3Ec__Iterator1_Dispose_m3140170555 (U3CAnimateRotationU3Ec__Iterator1_t2176702074 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_10((bool)1);
		__this->set_U24PC_11((-1));
		return;
	}
}
// System.Void Crate/<AnimateRotation>c__Iterator1::Reset()
extern "C"  void U3CAnimateRotationU3Ec__Iterator1_Reset_m442515703 (U3CAnimateRotationU3Ec__Iterator1_t2176702074 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimateRotationU3Ec__Iterator1_Reset_m442515703_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void Crate/<CheckPusherArms>c__AnonStorey2::.ctor()
extern "C"  void U3CCheckPusherArmsU3Ec__AnonStorey2__ctor_m2601164063 (U3CCheckPusherArmsU3Ec__AnonStorey2_t340666492 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Crate/<CheckPusherArms>c__AnonStorey2::<>m__0(Machine)
extern "C"  void U3CCheckPusherArmsU3Ec__AnonStorey2_U3CU3Em__0_m3803264653 (U3CCheckPusherArmsU3Ec__AnonStorey2_t340666492 * __this, Machine_t4122409742 * ___machine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCheckPusherArmsU3Ec__AnonStorey2_U3CU3Em__0_m3803264653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Pusher_t3016537238 * V_0 = NULL;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Machine_t4122409742 * L_0 = ___machine0;
		if (!((Pusher_t3016537238 *)IsInstClass((RuntimeObject*)L_0, Pusher_t3016537238_il2cpp_TypeInfo_var)))
		{
			goto IL_0047;
		}
	}
	{
		Machine_t4122409742 * L_1 = ___machine0;
		V_0 = ((Pusher_t3016537238 *)CastclassClass((RuntimeObject*)L_1, Pusher_t3016537238_il2cpp_TypeInfo_var));
		Pusher_t3016537238 * L_2 = V_0;
		NullCheck(L_2);
		Vector2_t2156229523  L_3 = GridThing_get_xy_m738839343(L_2, /*hidden argument*/NULL);
		Pusher_t3016537238 * L_4 = V_0;
		NullCheck(L_4);
		Vector2_t2156229523  L_5 = L_4->get_direction_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_6 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Pusher_t3016537238 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = L_7->get_extended_6();
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		Vector2_t2156229523  L_9 = V_1;
		Vector2_t2156229523  L_10 = __this->get_target_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		bool L_11 = Vector2_op_Equality_m2303255133(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		__this->set_blockedByPusherArm_1((bool)1);
	}

IL_0047:
	{
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
// System.Void CrateGroup::.ctor()
extern "C"  void CrateGroup__ctor_m374315206 (CrateGroup_t1115957032 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrateGroup__ctor_m374315206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t899420910 * L_0 = (List_1_t899420910 *)il2cpp_codegen_object_new(List_1_t899420910_il2cpp_TypeInfo_var);
		List_1__ctor_m1536473967(L_0, /*hidden argument*/List_1__ctor_m1536473967_RuntimeMethod_var);
		__this->set_spins_1(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_pusherForce_2(L_1);
		Vector2_t2156229523  L_2 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_netForce_3(L_2);
		Vector2_t2156229523  L_3 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastDirection_4(L_3);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		List_1_t511190685 * L_4 = (List_1_t511190685 *)il2cpp_codegen_object_new(List_1_t511190685_il2cpp_TypeInfo_var);
		List_1__ctor_m2191809278(L_4, /*hidden argument*/List_1__ctor_m2191809278_RuntimeMethod_var);
		__this->set_crates_0(L_4);
		return;
	}
}
// System.Void CrateGroup::ApplyForces()
extern "C"  void CrateGroup_ApplyForces_m3042020236 (CrateGroup_t1115957032 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrateGroup_ApplyForces_m3042020236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t899420910 * L_0 = __this->get_spins_1();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m576380744(L_0, /*hidden argument*/List_1_get_Count_m576380744_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		List_1_t899420910 * L_2 = __this->get_spins_1();
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = List_1_get_Item_m200663048(L_2, 0, /*hidden argument*/List_1_get_Item_m200663048_RuntimeMethod_var);
		CrateGroup_TryRotation_m2372677632(__this, L_3, /*hidden argument*/NULL);
		goto IL_007e;
	}

IL_0027:
	{
		Vector2_t2156229523  L_4 = __this->get_pusherForce_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_5 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_6 = Vector2_op_Inequality_m3858779880(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Vector2_t2156229523  L_7 = __this->get_pusherForce_2();
		CrateGroup_TryMoveFromForce_m499060411(__this, L_7, /*hidden argument*/NULL);
		goto IL_007e;
	}

IL_004d:
	{
		Vector2_t2156229523  L_8 = __this->get_netForce_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_9 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_10 = Vector2_op_Inequality_m3858779880(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0073;
		}
	}
	{
		Vector2_t2156229523  L_11 = __this->get_netForce_3();
		CrateGroup_TryMoveFromForce_m499060411(__this, L_11, /*hidden argument*/NULL);
		goto IL_007e;
	}

IL_0073:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_12 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastDirection_4(L_12);
	}

IL_007e:
	{
		return;
	}
}
// System.Void CrateGroup::TryRotation(UnityEngine.Vector3)
extern "C"  void CrateGroup_TryRotation_m2372677632 (CrateGroup_t1115957032 * __this, Vector3_t3722313464  ___spin0, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = ___spin0;
		bool L_1 = CrateGroup_CanRotate_m2768719090(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Vector3_t3722313464  L_2 = ___spin0;
		CrateGroup_Rotate_m3334215566(__this, L_2, /*hidden argument*/NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Boolean CrateGroup::CanRotate(UnityEngine.Vector3)
extern "C"  bool CrateGroup_CanRotate_m2768719090 (CrateGroup_t1115957032 * __this, Vector3_t3722313464  ___spin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrateGroup_CanRotate_m2768719090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Crate_t3334083239 * V_0 = NULL;
	Enumerator_t2400434562  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t511190685 * L_0 = __this->get_crates_0();
		NullCheck(L_0);
		Enumerator_t2400434562  L_1 = List_1_GetEnumerator_m2890427122(L_0, /*hidden argument*/List_1_GetEnumerator_m2890427122_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_0011:
		{
			Crate_t3334083239 * L_2 = Enumerator_get_Current_m636774770((&V_1), /*hidden argument*/Enumerator_get_Current_m636774770_RuntimeMethod_var);
			V_0 = L_2;
			Crate_t3334083239 * L_3 = V_0;
			Vector3_t3722313464  L_4 = ___spin0;
			NullCheck(L_3);
			bool L_5 = Crate_CanRotate_m4019342585(L_3, L_4, /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_002c;
			}
		}

IL_0025:
		{
			V_2 = (bool)0;
			IL2CPP_LEAVE(0x4D, FINALLY_003d);
		}

IL_002c:
		{
			bool L_6 = Enumerator_MoveNext_m1672660585((&V_1), /*hidden argument*/Enumerator_MoveNext_m1672660585_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0011;
			}
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x4B, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1904545155((&V_1), /*hidden argument*/Enumerator_Dispose_m1904545155_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004b:
	{
		return (bool)1;
	}

IL_004d:
	{
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Void CrateGroup::Rotate(UnityEngine.Vector3)
extern "C"  void CrateGroup_Rotate_m3334215566 (CrateGroup_t1115957032 * __this, Vector3_t3722313464  ___spin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrateGroup_Rotate_m3334215566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Crate_t3334083239 * V_0 = NULL;
	Enumerator_t2400434562  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t511190685 * L_0 = __this->get_crates_0();
		NullCheck(L_0);
		Enumerator_t2400434562  L_1 = List_1_GetEnumerator_m2890427122(L_0, /*hidden argument*/List_1_GetEnumerator_m2890427122_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_0011:
		{
			Crate_t3334083239 * L_2 = Enumerator_get_Current_m636774770((&V_1), /*hidden argument*/Enumerator_get_Current_m636774770_RuntimeMethod_var);
			V_0 = L_2;
			Crate_t3334083239 * L_3 = V_0;
			Vector3_t3722313464  L_4 = ___spin0;
			NullCheck(L_3);
			Crate_Rotate_m1528817573(L_3, L_4, /*hidden argument*/NULL);
		}

IL_0020:
		{
			bool L_5 = Enumerator_MoveNext_m1672660585((&V_1), /*hidden argument*/Enumerator_MoveNext_m1672660585_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1904545155((&V_1), /*hidden argument*/Enumerator_Dispose_m1904545155_RuntimeMethod_var);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003f:
	{
		return;
	}
}
// System.Void CrateGroup::TryMoveFromForce(UnityEngine.Vector2)
extern "C"  void CrateGroup_TryMoveFromForce_m499060411 (CrateGroup_t1115957032 * __this, Vector2_t2156229523  ___force0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrateGroup_TryMoveFromForce_m499060411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2U5BU5D_t1457185986* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector2_t2156229523  L_0 = ___force0;
		Vector2U5BU5D_t1457185986* L_1 = CrateGroup_DirectionsFromVectorForce_m3105363727(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector2U5BU5D_t1457185986* L_2 = V_0;
		NullCheck(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = Vector2_op_Inequality_m3858779880(NULL /*static, unused*/, (*(Vector2_t2156229523 *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = CrateGroup_CanMove_m1914781014(__this, (*(Vector2_t2156229523 *)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))), /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0038;
	}

IL_0037:
	{
		G_B3_0 = 0;
	}

IL_0038:
	{
		V_1 = (bool)G_B3_0;
		Vector2U5BU5D_t1457185986* L_7 = V_0;
		NullCheck(L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_8 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_9 = Vector2_op_Inequality_m3858779880(NULL /*static, unused*/, (*(Vector2_t2156229523 *)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))), L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0068;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = CrateGroup_CanMove_m1914781014(__this, (*(Vector2_t2156229523 *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))), /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_11));
		goto IL_0069;
	}

IL_0068:
	{
		G_B6_0 = 0;
	}

IL_0069:
	{
		V_2 = (bool)G_B6_0;
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0087;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_13 = V_0;
		NullCheck(L_13);
		CrateGroup_Move_m3386982613(__this, (*(Vector2_t2156229523 *)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))), /*hidden argument*/NULL);
		goto IL_00af;
	}

IL_0087:
	{
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_00a4;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_15 = V_0;
		NullCheck(L_15);
		CrateGroup_Move_m3386982613(__this, (*(Vector2_t2156229523 *)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))), /*hidden argument*/NULL);
		goto IL_00af;
	}

IL_00a4:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_16 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastDirection_4(L_16);
	}

IL_00af:
	{
		return;
	}
}
// System.Boolean CrateGroup::CanMove(UnityEngine.Vector2)
extern "C"  bool CrateGroup_CanMove_m1914781014 (CrateGroup_t1115957032 * __this, Vector2_t2156229523  ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrateGroup_CanMove_m1914781014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Crate_t3334083239 * V_0 = NULL;
	Enumerator_t2400434562  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t511190685 * L_0 = __this->get_crates_0();
		NullCheck(L_0);
		Enumerator_t2400434562  L_1 = List_1_GetEnumerator_m2890427122(L_0, /*hidden argument*/List_1_GetEnumerator_m2890427122_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_0011:
		{
			Crate_t3334083239 * L_2 = Enumerator_get_Current_m636774770((&V_1), /*hidden argument*/Enumerator_get_Current_m636774770_RuntimeMethod_var);
			V_0 = L_2;
			Crate_t3334083239 * L_3 = V_0;
			Vector2_t2156229523  L_4 = ___direction0;
			NullCheck(L_3);
			bool L_5 = Crate_CanMove_m3784799477(L_3, L_4, /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_002c;
			}
		}

IL_0025:
		{
			V_2 = (bool)0;
			IL2CPP_LEAVE(0x4D, FINALLY_003d);
		}

IL_002c:
		{
			bool L_6 = Enumerator_MoveNext_m1672660585((&V_1), /*hidden argument*/Enumerator_MoveNext_m1672660585_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0011;
			}
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x4B, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1904545155((&V_1), /*hidden argument*/Enumerator_Dispose_m1904545155_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004b:
	{
		return (bool)1;
	}

IL_004d:
	{
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Void CrateGroup::Move(UnityEngine.Vector2)
extern "C"  void CrateGroup_Move_m3386982613 (CrateGroup_t1115957032 * __this, Vector2_t2156229523  ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrateGroup_Move_m3386982613_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Crate_t3334083239 * V_0 = NULL;
	Enumerator_t2400434562  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t511190685 * L_0 = __this->get_crates_0();
		NullCheck(L_0);
		Enumerator_t2400434562  L_1 = List_1_GetEnumerator_m2890427122(L_0, /*hidden argument*/List_1_GetEnumerator_m2890427122_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_0011:
		{
			Crate_t3334083239 * L_2 = Enumerator_get_Current_m636774770((&V_1), /*hidden argument*/Enumerator_get_Current_m636774770_RuntimeMethod_var);
			V_0 = L_2;
			Crate_t3334083239 * L_3 = V_0;
			Vector2_t2156229523  L_4 = ___direction0;
			NullCheck(L_3);
			Crate_Move_m4290318053(L_3, L_4, /*hidden argument*/NULL);
		}

IL_0020:
		{
			bool L_5 = Enumerator_MoveNext_m1672660585((&V_1), /*hidden argument*/Enumerator_MoveNext_m1672660585_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1904545155((&V_1), /*hidden argument*/Enumerator_Dispose_m1904545155_RuntimeMethod_var);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003f:
	{
		Vector2_t2156229523  L_6 = ___direction0;
		__this->set_lastDirection_4(L_6);
		return;
	}
}
// UnityEngine.Vector2[] CrateGroup::DirectionsFromVectorForce(UnityEngine.Vector2)
extern "C"  Vector2U5BU5D_t1457185986* CrateGroup_DirectionsFromVectorForce_m3105363727 (CrateGroup_t1115957032 * __this, Vector2_t2156229523  ___force0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrateGroup_DirectionsFromVectorForce_m3105363727_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2U5BU5D_t1457185986* V_0 = NULL;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		Vector2U5BU5D_t1457185986* L_0 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)2));
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_1;
		Vector2U5BU5D_t1457185986* L_2 = L_0;
		NullCheck(L_2);
		Vector2_t2156229523  L_3 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_3;
		V_0 = L_2;
		Vector2_t2156229523  L_4 = ___force0;
		Vector2_t2156229523  L_5 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_6 = Vector2_op_Equality_m2303255133(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_7 = V_0;
		return L_7;
	}

IL_003b:
	{
		float L_8 = (&___force0)->get_x_0();
		Vector2__ctor_m3970636864((&V_1), L_8, (0.0f), /*hidden argument*/NULL);
		float L_9 = (&___force0)->get_y_1();
		Vector2__ctor_m3970636864((&V_2), (0.0f), L_9, /*hidden argument*/NULL);
		float L_10 = (&___force0)->get_x_0();
		float L_11 = fabsf(L_10);
		float L_12 = (&___force0)->get_y_1();
		float L_13 = fabsf(L_12);
		if ((!(((float)L_11) == ((float)L_13))))
		{
			goto IL_008c;
		}
	}
	{
		Vector2_t2156229523  L_14 = ___force0;
		Vector2_t2156229523  L_15 = __this->get_lastDirection_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_16 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		___force0 = L_16;
	}

IL_008c:
	{
		float L_17 = (&___force0)->get_x_0();
		float L_18 = fabsf(L_17);
		float L_19 = (&___force0)->get_y_1();
		float L_20 = fabsf(L_19);
		if ((!(((float)L_18) > ((float)L_20))))
		{
			goto IL_00e0;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_21 = V_0;
		NullCheck(L_21);
		Vector2_t2156229523  L_22 = V_1;
		float L_23 = Vector2_get_magnitude_m2752892833((&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_24 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_24;
		Vector2U5BU5D_t1457185986* L_25 = V_0;
		NullCheck(L_25);
		Vector2_t2156229523  L_26 = V_2;
		float L_27 = Vector2_get_magnitude_m2752892833((&V_2), /*hidden argument*/NULL);
		Vector2_t2156229523  L_28 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_28;
		goto IL_0112;
	}

IL_00e0:
	{
		Vector2U5BU5D_t1457185986* L_29 = V_0;
		NullCheck(L_29);
		Vector2_t2156229523  L_30 = V_2;
		float L_31 = Vector2_get_magnitude_m2752892833((&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_32 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_32;
		Vector2U5BU5D_t1457185986* L_33 = V_0;
		NullCheck(L_33);
		Vector2_t2156229523  L_34 = V_1;
		float L_35 = Vector2_get_magnitude_m2752892833((&V_1), /*hidden argument*/NULL);
		Vector2_t2156229523  L_36 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_36;
	}

IL_0112:
	{
		Vector2U5BU5D_t1457185986* L_37 = V_0;
		return L_37;
	}
}
// System.Void CrateGroup::OnStepStart()
extern "C"  void CrateGroup_OnStepStart_m2709797750 (CrateGroup_t1115957032 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrateGroup_OnStepStart_m2709797750_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t899420910 * L_0 = __this->get_spins_1();
		NullCheck(L_0);
		List_1_Clear_m3097985365(L_0, /*hidden argument*/List_1_Clear_m3097985365_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_pusherForce_2(L_1);
		Vector2_t2156229523  L_2 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_netForce_3(L_2);
		return;
	}
}
// System.Void CrateGroup::Merge(CrateGroup)
extern "C"  void CrateGroup_Merge_m1723941264 (CrateGroup_t1115957032 * __this, CrateGroup_t1115957032 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrateGroup_Merge_m1723941264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Crate_t3334083239 * V_0 = NULL;
	Enumerator_t2400434562  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t511190685 * L_0 = __this->get_crates_0();
		CrateGroup_t1115957032 * L_1 = ___other0;
		NullCheck(L_1);
		List_1_t511190685 * L_2 = L_1->get_crates_0();
		NullCheck(L_0);
		List_1_AddRange_m3878005525(L_0, L_2, /*hidden argument*/List_1_AddRange_m3878005525_RuntimeMethod_var);
		List_1_t511190685 * L_3 = __this->get_crates_0();
		NullCheck(L_3);
		Enumerator_t2400434562  L_4 = List_1_GetEnumerator_m2890427122(L_3, /*hidden argument*/List_1_GetEnumerator_m2890427122_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0031;
		}

IL_0022:
		{
			Crate_t3334083239 * L_5 = Enumerator_get_Current_m636774770((&V_1), /*hidden argument*/Enumerator_get_Current_m636774770_RuntimeMethod_var);
			V_0 = L_5;
			Crate_t3334083239 * L_6 = V_0;
			NullCheck(L_6);
			L_6->set_group_4(__this);
		}

IL_0031:
		{
			bool L_7 = Enumerator_MoveNext_m1672660585((&V_1), /*hidden argument*/Enumerator_MoveNext_m1672660585_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0022;
			}
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1904545155((&V_1), /*hidden argument*/Enumerator_Dispose_m1904545155_RuntimeMethod_var);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0050:
	{
		Vector2_t2156229523  L_8 = __this->get_pusherForce_2();
		CrateGroup_t1115957032 * L_9 = ___other0;
		NullCheck(L_9);
		Vector2_t2156229523  L_10 = L_9->get_pusherForce_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_11 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		__this->set_pusherForce_2(L_11);
		Vector2_t2156229523  L_12 = __this->get_netForce_3();
		CrateGroup_t1115957032 * L_13 = ___other0;
		NullCheck(L_13);
		Vector2_t2156229523  L_14 = L_13->get_netForce_3();
		Vector2_t2156229523  L_15 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		__this->set_netForce_3(L_15);
		return;
	}
}
// System.Void CrateGroup::LogForces()
extern "C"  void CrateGroup_LogForces_m2699463212 (CrateGroup_t1115957032 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrateGroup_LogForces_m2699463212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2811477127, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		Vector2_t2156229523  L_1 = __this->get_pusherForce_2();
		Vector2_t2156229523  L_2 = L_1;
		RuntimeObject * L_3 = Box(Vector2_t2156229523_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral3849618341, L_0, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_4 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		Vector2_t2156229523  L_5 = __this->get_netForce_3();
		Vector2_t2156229523  L_6 = L_5;
		RuntimeObject * L_7 = Box(Vector2_t2156229523_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral2499083471, L_4, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_8 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		Vector2_t2156229523  L_9 = __this->get_lastDirection_4();
		Vector2_t2156229523  L_10 = L_9;
		RuntimeObject * L_11 = Box(Vector2_t2156229523_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral176628444, L_8, /*hidden argument*/NULL);
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
// System.Void Crates::.ctor(System.Int32,System.Int32)
extern "C"  void Crates__ctor_m4164780719 (Crates_t3341619879 * __this, int32_t ___h0, int32_t ___w1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Crates__ctor_m4164780719_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___h0;
		int32_t L_1 = ___w1;
		GridOf_1__ctor_m1795928600(__this, L_0, L_1, /*hidden argument*/GridOf_1__ctor_m1795928600_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.List`1<CrateGroup> Crates::Groups()
extern "C"  List_1_t2588031774 * Crates_Groups_m1691412986 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Crates_Groups_m1691412986_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGroupsU3Ec__AnonStorey0_t4083570762 * V_0 = NULL;
	Action_1_t3506550834 * V_1 = NULL;
	{
		U3CGroupsU3Ec__AnonStorey0_t4083570762 * L_0 = (U3CGroupsU3Ec__AnonStorey0_t4083570762 *)il2cpp_codegen_object_new(U3CGroupsU3Ec__AnonStorey0_t4083570762_il2cpp_TypeInfo_var);
		U3CGroupsU3Ec__AnonStorey0__ctor_m2715118668(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGroupsU3Ec__AnonStorey0_t4083570762 * L_1 = V_0;
		List_1_t2588031774 * L_2 = (List_1_t2588031774 *)il2cpp_codegen_object_new(List_1_t2588031774_il2cpp_TypeInfo_var);
		List_1__ctor_m976941798(L_2, /*hidden argument*/List_1__ctor_m976941798_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->set_groups_0(L_2);
		U3CGroupsU3Ec__AnonStorey0_t4083570762 * L_3 = V_0;
		intptr_t L_4 = (intptr_t)U3CGroupsU3Ec__AnonStorey0_U3CU3Em__0_m511532314_RuntimeMethod_var;
		Action_1_t3506550834 * L_5 = (Action_1_t3506550834 *)il2cpp_codegen_object_new(Action_1_t3506550834_il2cpp_TypeInfo_var);
		Action_1__ctor_m3887988901(L_5, L_3, L_4, /*hidden argument*/Action_1__ctor_m3887988901_RuntimeMethod_var);
		V_1 = L_5;
		Action_1_t3506550834 * L_6 = V_1;
		GridOf_1_ForEach_m2734291113(NULL /*static, unused*/, L_6, /*hidden argument*/GridOf_1_ForEach_m2734291113_RuntimeMethod_var);
		U3CGroupsU3Ec__AnonStorey0_t4083570762 * L_7 = V_0;
		NullCheck(L_7);
		List_1_t2588031774 * L_8 = L_7->get_groups_0();
		return L_8;
	}
}
// System.Void Crates::ForEachGroup(System.Action`1<CrateGroup>)
extern "C"  void Crates_ForEachGroup_m2669004922 (RuntimeObject * __this /* static, unused */, Action_1_t1288424627 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Crates_ForEachGroup_m2669004922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CrateGroup_t1115957032 * V_0 = NULL;
	Enumerator_t182308355  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2588031774 * L_0 = Crates_Groups_m1691412986(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t182308355  L_1 = List_1_GetEnumerator_m141122379(L_0, /*hidden argument*/List_1_GetEnumerator_m141122379_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_0010:
		{
			CrateGroup_t1115957032 * L_2 = Enumerator_get_Current_m3351093824((&V_1), /*hidden argument*/Enumerator_get_Current_m3351093824_RuntimeMethod_var);
			V_0 = L_2;
			Action_1_t1288424627 * L_3 = ___action0;
			CrateGroup_t1115957032 * L_4 = V_0;
			NullCheck(L_3);
			Action_1_Invoke_m4049214814(L_3, L_4, /*hidden argument*/Action_1_Invoke_m4049214814_RuntimeMethod_var);
		}

IL_001f:
		{
			bool L_5 = Enumerator_MoveNext_m1755727745((&V_1), /*hidden argument*/Enumerator_MoveNext_m1755727745_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0010;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m705539179((&V_1), /*hidden argument*/Enumerator_Dispose_m705539179_RuntimeMethod_var);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003e:
	{
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
// System.Void Crates/<Groups>c__AnonStorey0::.ctor()
extern "C"  void U3CGroupsU3Ec__AnonStorey0__ctor_m2715118668 (U3CGroupsU3Ec__AnonStorey0_t4083570762 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Crates/<Groups>c__AnonStorey0::<>m__0(Crate)
extern "C"  void U3CGroupsU3Ec__AnonStorey0_U3CU3Em__0_m511532314 (U3CGroupsU3Ec__AnonStorey0_t4083570762 * __this, Crate_t3334083239 * ___crate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGroupsU3Ec__AnonStorey0_U3CU3Em__0_m511532314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_t2588031774 * L_0 = __this->get_groups_0();
		Crate_t3334083239 * L_1 = ___crate0;
		NullCheck(L_1);
		CrateGroup_t1115957032 * L_2 = L_1->get_group_4();
		NullCheck(L_0);
		bool L_3 = List_1_Contains_m1771383488(L_0, L_2, /*hidden argument*/List_1_Contains_m1771383488_RuntimeMethod_var);
		V_0 = L_3;
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		List_1_t2588031774 * L_5 = __this->get_groups_0();
		Crate_t3334083239 * L_6 = ___crate0;
		NullCheck(L_6);
		CrateGroup_t1115957032 * L_7 = L_6->get_group_4();
		NullCheck(L_5);
		List_1_Add_m205543450(L_5, L_7, /*hidden argument*/List_1_Add_m205543450_RuntimeMethod_var);
	}

IL_0029:
	{
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
// System.Void DropZone::.ctor()
extern "C"  void DropZone__ctor_m962380907 (DropZone_t3709174205 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropZone__ctor_m962380907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_paintEncoding_6(((BooleanU5BU5D_t2897418192*)SZArrayNew(BooleanU5BU5D_t2897418192_il2cpp_TypeInfo_var, (uint32_t)4)));
		Machine__ctor_m2672044869(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DropZone::Start()
extern "C"  void DropZone_Start_m2646663775 (DropZone_t3709174205 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropZone_Start_m2646663775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Machine_Start_m764592851(__this, /*hidden argument*/NULL);
		((Machine_t4122409742 *)__this)->set_isObstacle_3((bool)0);
		DropZoneGroup_t2340995414 * L_0 = (DropZoneGroup_t2340995414 *)il2cpp_codegen_object_new(DropZoneGroup_t2340995414_il2cpp_TypeInfo_var);
		DropZoneGroup__ctor_m3659004622(L_0, /*hidden argument*/NULL);
		__this->set_group_7(L_0);
		DropZoneGroup_t2340995414 * L_1 = __this->get_group_7();
		NullCheck(L_1);
		List_1_t886281651 * L_2 = L_1->get_zones_0();
		NullCheck(L_2);
		List_1_Add_m2906265207(L_2, __this, /*hidden argument*/List_1_Add_m2906265207_RuntimeMethod_var);
		V_0 = 0;
		goto IL_0048;
	}

IL_0030:
	{
		BooleanU5BU5D_t2897418192* L_3 = __this->get_paintEncoding_6();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_7 = V_0;
		DropZone_PaintZone_m1983948669(__this, L_7, /*hidden argument*/NULL);
	}

IL_0044:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0048:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)4)))
		{
			goto IL_0030;
		}
	}
	{
		DropZone_Connect_m2826822892(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DropZone::PaintZone(System.Int32)
extern "C"  void DropZone_PaintZone_m1983948669 (DropZone_t3709174205 * __this, int32_t ___side0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropZone_PaintZone_m1983948669_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		GameObject_t1113636619 * L_0 = __this->get_paintPrefab_5();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_2 = Object_Instantiate_TisGameObject_t1113636619_m4130575780(NULL /*static, unused*/, L_0, L_1, (bool)0, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4130575780_RuntimeMethod_var);
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_parent_m786917804(L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_6;
		V_2 = 0;
		int32_t L_7 = ___side0;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0043;
			}
			case 1:
			{
				goto IL_0054;
			}
			case 2:
			{
				goto IL_0068;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0043:
	{
		(&V_1)->set_x_1((1.0f));
		goto IL_0096;
	}

IL_0054:
	{
		(&V_1)->set_y_2((1.0f));
		V_2 = ((int32_t)90);
		goto IL_0096;
	}

IL_0068:
	{
		(&V_1)->set_x_1((-1.0f));
		V_2 = ((int32_t)180);
		goto IL_0096;
	}

IL_007f:
	{
		(&V_1)->set_y_2((-1.0f));
		V_2 = ((int32_t)270);
		goto IL_0096;
	}

IL_0096:
	{
		GameObject_t1113636619 * L_8 = V_0;
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_2;
		Vector3_t3722313464  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m3353183577((&L_11), (0.0f), (0.0f), (((float)((float)L_10))), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_Rotate_m720511863(L_9, L_11, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = V_0;
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_15 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_14, (0.25f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localPosition_m4128471975(L_13, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DropZone::OnStepStart()
extern "C"  void DropZone_OnStepStart_m2103779258 (DropZone_t3709174205 * __this, const RuntimeMethod* method)
{
	{
		DropZoneGroup_t2340995414 * L_0 = __this->get_group_7();
		NullCheck(L_0);
		DropZoneGroup_Buzz_m3268081106(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DropZone::CheckPaint(Crate)
extern "C"  bool DropZone_CheckPaint_m4268379242 (DropZone_t3709174205 * __this, Crate_t3334083239 * ___crate0, const RuntimeMethod* method)
{
	BooleanU5BU5D_t2897418192* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Crate_t3334083239 * L_0 = ___crate0;
		NullCheck(L_0);
		BooleanU5BU5D_t2897418192* L_1 = Crate_WorldPainted_m579725209(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0024;
	}

IL_000e:
	{
		BooleanU5BU5D_t2897418192* L_2 = __this->get_paintEncoding_6();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		BooleanU5BU5D_t2897418192* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if ((((int32_t)L_5) == ((int32_t)L_9)))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)0;
	}

IL_0020:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)4)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void DropZone::Connect()
extern "C"  void DropZone_Connect_m2826822892 (DropZone_t3709174205 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropZone_Connect_m2826822892_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2U5BU5D_t1457185986* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	Machine_t4122409742 * V_4 = NULL;
	DropZone_t3709174205 * V_5 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(DropZone_t3709174205_il2cpp_TypeInfo_var);
		Vector2U5BU5D_t1457185986* L_0 = ((DropZone_t3709174205_StaticFields*)il2cpp_codegen_static_fields_for(DropZone_t3709174205_il2cpp_TypeInfo_var))->get_cardinalDirections_8();
		V_1 = L_0;
		V_2 = 0;
		goto IL_0078;
	}

IL_000d:
	{
		Vector2U5BU5D_t1457185986* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		V_0 = (*(Vector2_t2156229523 *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))));
		Vector2_t2156229523  L_3 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_5 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		bool L_6 = GridOf_1_InBounds_m3069315835(NULL /*static, unused*/, L_5, /*hidden argument*/GridOf_1_InBounds_m3069315835_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		goto IL_0074;
	}

IL_003a:
	{
		Vector2_t2156229523  L_8 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_10 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Machine_t4122409742 * L_11 = GridOf_1_At_m3872141981(NULL /*static, unused*/, L_10, /*hidden argument*/GridOf_1_At_m3872141981_RuntimeMethod_var);
		V_4 = L_11;
		Machine_t4122409742 * L_12 = V_4;
		if (!((DropZone_t3709174205 *)IsInstClass((RuntimeObject*)L_12, DropZone_t3709174205_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		Machine_t4122409742 * L_13 = V_4;
		V_5 = ((DropZone_t3709174205 *)CastclassClass((RuntimeObject*)L_13, DropZone_t3709174205_il2cpp_TypeInfo_var));
		DropZoneGroup_t2340995414 * L_14 = __this->get_group_7();
		DropZone_t3709174205 * L_15 = V_5;
		NullCheck(L_15);
		DropZoneGroup_t2340995414 * L_16 = L_15->get_group_7();
		NullCheck(L_14);
		DropZoneGroup_Merge_m3985976498(L_14, L_16, /*hidden argument*/NULL);
	}

IL_0074:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0078:
	{
		int32_t L_18 = V_2;
		Vector2U5BU5D_t1457185986* L_19 = V_1;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// System.Void DropZone::.cctor()
extern "C"  void DropZone__cctor_m1798572158 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropZone__cctor_m1798572158_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2U5BU5D_t1457185986* L_0 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_get_up_m2647420593(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_1;
		Vector2U5BU5D_t1457185986* L_2 = L_0;
		NullCheck(L_2);
		Vector2_t2156229523  L_3 = Vector2_get_down_m2886001705(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_3;
		Vector2U5BU5D_t1457185986* L_4 = L_2;
		NullCheck(L_4);
		Vector2_t2156229523  L_5 = Vector2_get_left_m1559018038(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))) = L_5;
		Vector2U5BU5D_t1457185986* L_6 = L_4;
		NullCheck(L_6);
		Vector2_t2156229523  L_7 = Vector2_get_right_m1027081661(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))) = L_7;
		((DropZone_t3709174205_StaticFields*)il2cpp_codegen_static_fields_for(DropZone_t3709174205_il2cpp_TypeInfo_var))->set_cardinalDirections_8(L_6);
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
// System.Void DropZoneGroup::.ctor()
extern "C"  void DropZoneGroup__ctor_m3659004622 (DropZoneGroup_t2340995414 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropZoneGroup__ctor_m3659004622_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		List_1_t886281651 * L_0 = (List_1_t886281651 *)il2cpp_codegen_object_new(List_1_t886281651_il2cpp_TypeInfo_var);
		List_1__ctor_m3032259779(L_0, /*hidden argument*/List_1__ctor_m3032259779_RuntimeMethod_var);
		__this->set_zones_0(L_0);
		return;
	}
}
// System.Void DropZoneGroup::Merge(DropZoneGroup)
extern "C"  void DropZoneGroup_Merge_m3985976498 (DropZoneGroup_t2340995414 * __this, DropZoneGroup_t2340995414 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropZoneGroup_Merge_m3985976498_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DropZone_t3709174205 * V_0 = NULL;
	Enumerator_t2775525528  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t886281651 * L_0 = __this->get_zones_0();
		DropZoneGroup_t2340995414 * L_1 = ___other0;
		NullCheck(L_1);
		List_1_t886281651 * L_2 = L_1->get_zones_0();
		NullCheck(L_0);
		List_1_AddRange_m1842284837(L_0, L_2, /*hidden argument*/List_1_AddRange_m1842284837_RuntimeMethod_var);
		List_1_t886281651 * L_3 = __this->get_zones_0();
		NullCheck(L_3);
		Enumerator_t2775525528  L_4 = List_1_GetEnumerator_m3829137046(L_3, /*hidden argument*/List_1_GetEnumerator_m3829137046_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0031;
		}

IL_0022:
		{
			DropZone_t3709174205 * L_5 = Enumerator_get_Current_m1621422558((&V_1), /*hidden argument*/Enumerator_get_Current_m1621422558_RuntimeMethod_var);
			V_0 = L_5;
			DropZone_t3709174205 * L_6 = V_0;
			NullCheck(L_6);
			L_6->set_group_7(__this);
		}

IL_0031:
		{
			bool L_7 = Enumerator_MoveNext_m2372141819((&V_1), /*hidden argument*/Enumerator_MoveNext_m2372141819_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0022;
			}
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3659853165((&V_1), /*hidden argument*/Enumerator_Dispose_m3659853165_RuntimeMethod_var);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0050:
	{
		return;
	}
}
// System.Void DropZoneGroup::Buzz()
extern "C"  void DropZoneGroup_Buzz_m3268081106 (DropZoneGroup_t2340995414 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropZoneGroup_Buzz_m3268081106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CrateGroup_t1115957032 * V_0 = NULL;
	DropZone_t3709174205 * V_1 = NULL;
	Enumerator_t2775525528  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Crate_t3334083239 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (CrateGroup_t1115957032 *)NULL;
		List_1_t886281651 * L_0 = __this->get_zones_0();
		NullCheck(L_0);
		Enumerator_t2775525528  L_1 = List_1_GetEnumerator_m3829137046(L_0, /*hidden argument*/List_1_GetEnumerator_m3829137046_RuntimeMethod_var);
		V_2 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006c;
		}

IL_0013:
		{
			DropZone_t3709174205 * L_2 = Enumerator_get_Current_m1621422558((&V_2), /*hidden argument*/Enumerator_get_Current_m1621422558_RuntimeMethod_var);
			V_1 = L_2;
			DropZone_t3709174205 * L_3 = V_1;
			NullCheck(L_3);
			Vector2_t2156229523  L_4 = GridThing_get_xy_m738839343(L_3, /*hidden argument*/NULL);
			Crate_t3334083239 * L_5 = GridOf_1_At_m3659202116(NULL /*static, unused*/, L_4, /*hidden argument*/GridOf_1_At_m3659202116_RuntimeMethod_var);
			V_3 = L_5;
			Crate_t3334083239 * L_6 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_7 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0038;
			}
		}

IL_0033:
		{
			IL2CPP_LEAVE(0x95, FINALLY_007d);
		}

IL_0038:
		{
			DropZone_t3709174205 * L_8 = V_1;
			Crate_t3334083239 * L_9 = V_3;
			NullCheck(L_8);
			bool L_10 = DropZone_CheckPaint_m4268379242(L_8, L_9, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0049;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x95, FINALLY_007d);
		}

IL_0049:
		{
			CrateGroup_t1115957032 * L_11 = V_0;
			if (L_11)
			{
				goto IL_005b;
			}
		}

IL_004f:
		{
			Crate_t3334083239 * L_12 = V_3;
			NullCheck(L_12);
			CrateGroup_t1115957032 * L_13 = L_12->get_group_4();
			V_0 = L_13;
			goto IL_006c;
		}

IL_005b:
		{
			Crate_t3334083239 * L_14 = V_3;
			NullCheck(L_14);
			CrateGroup_t1115957032 * L_15 = L_14->get_group_4();
			CrateGroup_t1115957032 * L_16 = V_0;
			if ((((RuntimeObject*)(CrateGroup_t1115957032 *)L_15) == ((RuntimeObject*)(CrateGroup_t1115957032 *)L_16)))
			{
				goto IL_006c;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x95, FINALLY_007d);
		}

IL_006c:
		{
			bool L_17 = Enumerator_MoveNext_m2372141819((&V_2), /*hidden argument*/Enumerator_MoveNext_m2372141819_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_0013;
			}
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3659853165((&V_2), /*hidden argument*/Enumerator_Dispose_m3659853165_RuntimeMethod_var);
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x95, IL_0095)
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral42345049, /*hidden argument*/NULL);
	}

IL_0095:
	{
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
// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m180891015 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// StairMaster GameManager::get_StairMaster()
extern "C"  StairMaster_t3581666356 * GameManager_get_StairMaster_m618266316 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_get_StairMaster_m618266316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameManager_t1536523654 * L_0 = ((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->get_instance_2();
		NullCheck(L_0);
		StairMaster_t3581666356 * L_1 = L_0->get_stairMaster_3();
		return L_1;
	}
}
// Tap GameManager::get_Tap()
extern "C"  Tap_t1232705552 * GameManager_get_Tap_m2968961825 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_get_Tap_m2968961825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameManager_t1536523654 * L_0 = ((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->get_instance_2();
		NullCheck(L_0);
		Tap_t1232705552 * L_1 = L_0->get_tap_4();
		return L_1;
	}
}
// System.Void GameManager::Awake()
extern "C"  void GameManager_Awake_m2466247815 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Awake_m2466247815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_instance_2(__this);
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		StairMaster_t3581666356 * L_1 = GameObject_GetComponent_TisStairMaster_t3581666356_m286112584(L_0, /*hidden argument*/GameObject_GetComponent_TisStairMaster_t3581666356_m286112584_RuntimeMethod_var);
		__this->set_stairMaster_3(L_1);
		int32_t L_2 = __this->get_height_5();
		int32_t L_3 = __this->get_width_6();
		GridOf_1_Init_m343331089(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/GridOf_1_Init_m343331089_RuntimeMethod_var);
		int32_t L_4 = __this->get_height_5();
		int32_t L_5 = __this->get_width_6();
		GridOf_1_Init_m752518202(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/GridOf_1_Init_m752518202_RuntimeMethod_var);
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
// System.Void Generator::.ctor()
extern "C"  void Generator__ctor_m3782390014 (Generator_t2248380420 * __this, const RuntimeMethod* method)
{
	{
		__this->set_stepsPerCrate_7(2);
		Machine__ctor_m2672044869(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Generator::Start()
extern "C"  void Generator_Start_m2104205200 (Generator_t2248380420 * __this, const RuntimeMethod* method)
{
	{
		Machine_Start_m764592851(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get_stepsPerCrate_7();
		__this->set_stepsSinceCrate_8(L_0);
		return;
	}
}
// System.Void Generator::OnStepStart()
extern "C"  void Generator_OnStepStart_m429475690 (Generator_t2248380420 * __this, const RuntimeMethod* method)
{
	{
		Generator_DestroyUnmovedCrate_m3629071203(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get_stepsSinceCrate_8();
		int32_t L_1 = __this->get_stepsPerCrate_7();
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		Generator_MakeCrate_m191444529(__this, /*hidden argument*/NULL);
		__this->set_stepsSinceCrate_8(0);
		goto IL_0038;
	}

IL_002a:
	{
		int32_t L_2 = __this->get_stepsSinceCrate_8();
		__this->set_stepsSinceCrate_8(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
	}

IL_0038:
	{
		return;
	}
}
// Crate Generator::MakeCrate()
extern "C"  Crate_t3334083239 * Generator_MakeCrate_m191444529 (Generator_t2248380420 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Generator_MakeCrate_m191444529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Crate_t3334083239 * V_1 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_cratePrefab_5();
		Vector2_t2156229523  L_1 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_3 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_4 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_0, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = V_0;
		NullCheck(L_5);
		Crate_t3334083239 * L_6 = GameObject_GetComponent_TisCrate_t3334083239_m2831429645(L_5, /*hidden argument*/GameObject_GetComponent_TisCrate_t3334083239_m2831429645_RuntimeMethod_var);
		V_1 = L_6;
		Crate_t3334083239 * L_7 = V_1;
		Crate_t3334083239 * L_8 = V_1;
		NullCheck(L_8);
		Vector2_t2156229523  L_9 = GridThing_get_RoundedPosition_m1427808004(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		GridThing_set_xy_m3795576369(L_7, L_9, /*hidden argument*/NULL);
		Crate_t3334083239 * L_10 = V_1;
		CrateGroup_t1115957032 * L_11 = (CrateGroup_t1115957032 *)il2cpp_codegen_object_new(CrateGroup_t1115957032_il2cpp_TypeInfo_var);
		CrateGroup__ctor_m374315206(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_group_4(L_11);
		Crate_t3334083239 * L_12 = V_1;
		NullCheck(L_12);
		CrateGroup_t1115957032 * L_13 = L_12->get_group_4();
		List_1_t511190685 * L_14 = (List_1_t511190685 *)il2cpp_codegen_object_new(List_1_t511190685_il2cpp_TypeInfo_var);
		List_1__ctor_m2191809278(L_14, /*hidden argument*/List_1__ctor_m2191809278_RuntimeMethod_var);
		NullCheck(L_13);
		L_13->set_crates_0(L_14);
		Crate_t3334083239 * L_15 = V_1;
		NullCheck(L_15);
		CrateGroup_t1115957032 * L_16 = L_15->get_group_4();
		NullCheck(L_16);
		List_1_t511190685 * L_17 = L_16->get_crates_0();
		Crate_t3334083239 * L_18 = V_1;
		NullCheck(L_17);
		List_1_Add_m108745738(L_17, L_18, /*hidden argument*/List_1_Add_m108745738_RuntimeMethod_var);
		Crate_t3334083239 * L_19 = V_1;
		NullCheck(L_19);
		CrateGroup_t1115957032 * L_20 = L_19->get_group_4();
		CrateGroup_t1115957032 * L_21 = L_20;
		NullCheck(L_21);
		Vector2_t2156229523  L_22 = L_21->get_netForce_3();
		Vector2_t2156229523  L_23 = __this->get_direction_6();
		Vector2_t2156229523  L_24 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->set_netForce_3(L_24);
		Crate_t3334083239 * L_25 = V_1;
		GridOf_1_Add_m1381055868(NULL /*static, unused*/, L_25, /*hidden argument*/GridOf_1_Add_m1381055868_RuntimeMethod_var);
		Crate_t3334083239 * L_26 = V_1;
		return L_26;
	}
}
// System.Void Generator::DestroyUnmovedCrate()
extern "C"  void Generator_DestroyUnmovedCrate_m3629071203 (Generator_t2248380420 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Generator_DestroyUnmovedCrate_m3629071203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Crate_t3334083239 * V_0 = NULL;
	bool V_1 = false;
	{
		Vector2_t2156229523  L_0 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		Crate_t3334083239 * L_1 = GridOf_1_At_m3659202116(NULL /*static, unused*/, L_0, /*hidden argument*/GridOf_1_At_m3659202116_RuntimeMethod_var);
		V_0 = L_1;
		Crate_t3334083239 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		Vector2_t2156229523  L_5 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		GridOf_1_Remove_m3068458711(NULL /*static, unused*/, L_5, /*hidden argument*/GridOf_1_Remove_m3068458711_RuntimeMethod_var);
		Crate_t3334083239 * L_6 = V_0;
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0031:
	{
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
// System.Void GridThing::.ctor()
extern "C"  void GridThing__ctor_m370494398 (GridThing_t3152339074 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 GridThing::get_xy()
extern "C"  Vector2_t2156229523  GridThing_get_xy_m738839343 (GridThing_t3152339074 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = __this->get__xy_2();
		return L_0;
	}
}
// System.Void GridThing::set_xy(UnityEngine.Vector2)
extern "C"  void GridThing_set_xy_m3795576369 (GridThing_t3152339074 * __this, Vector2_t2156229523  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = ___value0;
		__this->set__xy_2(L_0);
		return;
	}
}
// System.Int32 GridThing::get_x()
extern "C"  int32_t GridThing_get_x_m1761905480 (GridThing_t3152339074 * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector2_t2156229523  L_0 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = (&V_0)->get_x_0();
		return (((int32_t)((int32_t)L_1)));
	}
}
// System.Int32 GridThing::get_y()
extern "C"  int32_t GridThing_get_y_m1761905479 (GridThing_t3152339074 * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector2_t2156229523  L_0 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = (&V_0)->get_y_1();
		return (((int32_t)((int32_t)L_1)));
	}
}
// UnityEngine.Vector2 GridThing::get_RoundedPosition()
extern "C"  Vector2_t2156229523  GridThing_get_RoundedPosition_m1427808004 (GridThing_t3152339074 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector2_t2156229523  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_x_1();
		double L_3 = bankers_round((((double)((double)L_2))));
		V_0 = (((float)((float)L_3)));
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		float L_6 = (&V_3)->get_y_2();
		double L_7 = bankers_round((((double)((double)L_6))));
		V_2 = (((float)((float)L_7)));
		float L_8 = V_0;
		float L_9 = V_2;
		Vector2__ctor_m3970636864((&V_4), L_8, L_9, /*hidden argument*/NULL);
		Vector2_t2156229523  L_10 = V_4;
		return L_10;
	}
}
// System.Void GridThing::Start()
extern "C"  void GridThing_Start_m2452750932 (GridThing_t3152339074 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = GridThing_get_RoundedPosition_m1427808004(__this, /*hidden argument*/NULL);
		GridThing_set_xy_m3795576369(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Machine::.ctor()
extern "C"  void Machine__ctor_m2672044869 (Machine_t4122409742 * __this, const RuntimeMethod* method)
{
	{
		__this->set_isObstacle_3((bool)1);
		GridThing__ctor_m370494398(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Machine::Start()
extern "C"  void Machine_Start_m764592851 (Machine_t4122409742 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Machine_Start_m764592851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GridThing_Start_m2452750932(__this, /*hidden argument*/NULL);
		GridOf_1_Add_m641575355(NULL /*static, unused*/, __this, /*hidden argument*/GridOf_1_Add_m641575355_RuntimeMethod_var);
		return;
	}
}
// System.Void Machine::Delete()
extern "C"  void Machine_Delete_m3808337440 (Machine_t4122409742 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Machine_Delete_m3808337440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t2156229523  L_0 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		GridOf_1_Remove_m3477036051(NULL /*static, unused*/, L_0, /*hidden argument*/GridOf_1_Remove_m3477036051_RuntimeMethod_var);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 Machine::RotateVector(UnityEngine.Vector2,System.Boolean)
extern "C"  Vector2_t2156229523  Machine_RotateVector_m1548302461 (Machine_t4122409742 * __this, Vector2_t2156229523  ___v0, bool ___clockwise1, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___v0)->get_y_1();
		float L_1 = (&___v0)->get_x_0();
		Vector2__ctor_m3970636864((&V_0), ((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_0)), L_1, /*hidden argument*/NULL);
		bool L_2 = ___clockwise1;
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		Vector2_t2156229523 * L_3 = (&V_0);
		float L_4 = L_3->get_x_0();
		L_3->set_x_0(((float)il2cpp_codegen_multiply((float)L_4, (float)(-1.0f))));
		Vector2_t2156229523 * L_5 = (&V_0);
		float L_6 = L_5->get_y_1();
		L_5->set_y_1(((float)il2cpp_codegen_multiply((float)L_6, (float)(-1.0f))));
	}

IL_0047:
	{
		Vector2_t2156229523  L_7 = V_0;
		return L_7;
	}
}
// System.Void Machine::OffsetRotation()
extern "C"  void Machine_OffsetRotation_m1798016485 (Machine_t4122409742 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Machine::Rotate(System.Boolean)
extern "C"  void Machine_Rotate_m496447551 (Machine_t4122409742 * __this, bool ___clockwise0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Machine::OnStepStart()
extern "C"  void Machine_OnStepStart_m1404310973 (Machine_t4122409742 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void Machines::.ctor(System.Int32,System.Int32)
extern "C"  void Machines__ctor_m92552663 (Machines_t3020028686 * __this, int32_t ___h0, int32_t ___w1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Machines__ctor_m92552663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___h0;
		int32_t L_1 = ___w1;
		GridOf_1__ctor_m2376768582(__this, L_0, L_1, /*hidden argument*/GridOf_1__ctor_m2376768582_RuntimeMethod_var);
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
// System.Void MachineUI::.ctor()
extern "C"  void MachineUI__ctor_m824600924 (MachineUI_t252077060 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MachineUI::Start()
extern "C"  void MachineUI_Start_m2600148524 (MachineUI_t252077060 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MachineUI_Start_m2600148524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObjectU5BU5D_t3328599146* L_0 = ((GameObjectU5BU5D_t3328599146*)SZArrayNew(GameObjectU5BU5D_t3328599146_il2cpp_TypeInfo_var, (uint32_t)6));
		GameObject_t1113636619 * L_1 = __this->get_conveyorBtn_3();
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_t1113636619 *)L_1);
		GameObjectU5BU5D_t3328599146* L_2 = L_0;
		GameObject_t1113636619 * L_3 = __this->get_spinnerBtn_4();
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (GameObject_t1113636619 *)L_3);
		GameObjectU5BU5D_t3328599146* L_4 = L_2;
		GameObject_t1113636619 * L_5 = __this->get_welderBtn_5();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (GameObject_t1113636619 *)L_5);
		GameObjectU5BU5D_t3328599146* L_6 = L_4;
		GameObject_t1113636619 * L_7 = __this->get_pusherBtn_6();
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (GameObject_t1113636619 *)L_7);
		GameObjectU5BU5D_t3328599146* L_8 = L_6;
		GameObject_t1113636619 * L_9 = __this->get_sensorBtn_7();
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (GameObject_t1113636619 *)L_9);
		GameObjectU5BU5D_t3328599146* L_10 = L_8;
		GameObject_t1113636619 * L_11 = __this->get_wireBtn_8();
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (GameObject_t1113636619 *)L_11);
		__this->set_buttons_2(L_10);
		GameObject_t1113636619 * L_12 = __this->get_conveyorBtn_3();
		GameObject_t1113636619 * L_13 = __this->get_conveyorPrefab_9();
		MachineUI_SetupButton_m3209500000(__this, L_12, L_13, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_14 = __this->get_welderBtn_5();
		GameObject_t1113636619 * L_15 = __this->get_welderPrefab_11();
		MachineUI_SetupButton_m3209500000(__this, L_14, L_15, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_16 = __this->get_pusherBtn_6();
		GameObject_t1113636619 * L_17 = __this->get_pusherPrefab_12();
		MachineUI_SetupButton_m3209500000(__this, L_16, L_17, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_18 = __this->get_sensorBtn_7();
		GameObject_t1113636619 * L_19 = __this->get_sensorPrefab_13();
		MachineUI_SetupButton_m3209500000(__this, L_18, L_19, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_20 = __this->get_wireBtn_8();
		GameObject_t1113636619 * L_21 = __this->get_wirePrefab_14();
		MachineUI_SetupButton_m3209500000(__this, L_20, L_21, /*hidden argument*/NULL);
		MachineUI_SetInitialRotations_m1518092707(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MachineUI::SetupButton(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  void MachineUI_SetupButton_m3209500000 (MachineUI_t252077060 * __this, GameObject_t1113636619 * ___btnGob0, GameObject_t1113636619 * ___machineGob1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MachineUI_SetupButton_m3209500000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSetupButtonU3Ec__AnonStorey0_t1115115811 * V_0 = NULL;
	Button_t4055032469 * V_1 = NULL;
	{
		U3CSetupButtonU3Ec__AnonStorey0_t1115115811 * L_0 = (U3CSetupButtonU3Ec__AnonStorey0_t1115115811 *)il2cpp_codegen_object_new(U3CSetupButtonU3Ec__AnonStorey0_t1115115811_il2cpp_TypeInfo_var);
		U3CSetupButtonU3Ec__AnonStorey0__ctor_m117983695(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSetupButtonU3Ec__AnonStorey0_t1115115811 * L_1 = V_0;
		GameObject_t1113636619 * L_2 = ___machineGob1;
		NullCheck(L_1);
		L_1->set_machineGob_0(L_2);
		U3CSetupButtonU3Ec__AnonStorey0_t1115115811 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		GameObject_t1113636619 * L_4 = ___btnGob0;
		NullCheck(L_4);
		Button_t4055032469 * L_5 = GameObject_GetComponent_TisButton_t4055032469_m1515138076(L_4, /*hidden argument*/GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var);
		V_1 = L_5;
		Button_t4055032469 * L_6 = V_1;
		NullCheck(L_6);
		ButtonClickedEvent_t48803504 * L_7 = Button_get_onClick_m2332132945(L_6, /*hidden argument*/NULL);
		U3CSetupButtonU3Ec__AnonStorey0_t1115115811 * L_8 = V_0;
		intptr_t L_9 = (intptr_t)U3CSetupButtonU3Ec__AnonStorey0_U3CU3Em__0_m2368594731_RuntimeMethod_var;
		UnityAction_t3245792599 * L_10 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_10, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m2276267359(L_7, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MachineUI::SetInitialRotations()
extern "C"  void MachineUI_SetInitialRotations_m1518092707 (MachineUI_t252077060 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_conveyorPrefab_9();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m3353183577((&L_2), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_eulerAngles_m135219616(L_1, L_2, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_welderPrefab_11();
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m3353183577((&L_5), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_eulerAngles_m135219616(L_4, L_5, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = __this->get_pusherPrefab_12();
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m3353183577((&L_8), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_eulerAngles_m135219616(L_7, L_8, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_9 = __this->get_sensorPrefab_13();
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = GameObject_get_transform_m1369836730(L_9, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m3353183577((&L_11), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_eulerAngles_m135219616(L_10, L_11, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = __this->get_wirePrefab_14();
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector3__ctor_m3353183577((&L_14), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_eulerAngles_m135219616(L_13, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MachineUI::Show()
extern "C"  void MachineUI_Show_m1108114314 (MachineUI_t252077060 * __this, const RuntimeMethod* method)
{
	GameObject_t1113636619 * V_0 = NULL;
	GameObjectU5BU5D_t3328599146* V_1 = NULL;
	int32_t V_2 = 0;
	{
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_buttons_2();
		V_1 = L_0;
		V_2 = 0;
		goto IL_001d;
	}

IL_000e:
	{
		GameObjectU5BU5D_t3328599146* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t1113636619 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = V_0;
		NullCheck(L_5);
		GameObject_SetActive_m796801857(L_5, (bool)1, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001d:
	{
		int32_t L_7 = V_2;
		GameObjectU5BU5D_t3328599146* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void MachineUI::Hide()
extern "C"  void MachineUI_Hide_m391306339 (MachineUI_t252077060 * __this, const RuntimeMethod* method)
{
	GameObject_t1113636619 * V_0 = NULL;
	GameObjectU5BU5D_t3328599146* V_1 = NULL;
	int32_t V_2 = 0;
	{
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_buttons_2();
		V_1 = L_0;
		V_2 = 0;
		goto IL_001d;
	}

IL_000e:
	{
		GameObjectU5BU5D_t3328599146* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t1113636619 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = V_0;
		NullCheck(L_5);
		GameObject_SetActive_m796801857(L_5, (bool)0, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001d:
	{
		int32_t L_7 = V_2;
		GameObjectU5BU5D_t3328599146* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
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
// System.Void MachineUI/<SetupButton>c__AnonStorey0::.ctor()
extern "C"  void U3CSetupButtonU3Ec__AnonStorey0__ctor_m117983695 (U3CSetupButtonU3Ec__AnonStorey0_t1115115811 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MachineUI/<SetupButton>c__AnonStorey0::<>m__0()
extern "C"  void U3CSetupButtonU3Ec__AnonStorey0_U3CU3Em__0_m2368594731 (U3CSetupButtonU3Ec__AnonStorey0_t1115115811 * __this, const RuntimeMethod* method)
{
	{
		MachineUI_t252077060 * L_0 = __this->get_U24this_1();
		GameObject_t1113636619 * L_1 = __this->get_machineGob_0();
		NullCheck(L_0);
		L_0->set_toPlace_15(L_1);
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
// System.Void Paint::.ctor()
extern "C"  void Paint__ctor_m630596957 (Paint_t1033728073 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 Paint::get_xy()
extern "C"  Vector2_t2156229523  Paint_get_xy_m1292612040 (Paint_t1033728073 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = __this->get__xy_2();
		return L_0;
	}
}
// System.Void Paint::set_xy(UnityEngine.Vector2)
extern "C"  void Paint_set_xy_m3483014140 (Paint_t1033728073 * __this, Vector2_t2156229523  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = ___value0;
		__this->set__xy_2(L_0);
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
// System.Void Painter::.ctor()
extern "C"  void Painter__ctor_m2888580210 (Painter_t2372114961 * __this, const RuntimeMethod* method)
{
	{
		Machine__ctor_m2672044869(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Painter::Start()
extern "C"  void Painter_Start_m394828532 (Painter_t2372114961 * __this, const RuntimeMethod* method)
{
	{
		Machine_Start_m764592851(__this, /*hidden argument*/NULL);
		((Machine_t4122409742 *)__this)->set_isObstacle_3((bool)1);
		return;
	}
}
// System.Void Painter::OnStepStart()
extern "C"  void Painter_OnStepStart_m2232589109 (Painter_t2372114961 * __this, const RuntimeMethod* method)
{
	{
		Painter_Paint_m1577536615(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Painter::Paint()
extern "C"  void Painter_Paint_m1577536615 (Painter_t2372114961 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Painter_Paint_m1577536615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Crate_t3334083239 * V_1 = NULL;
	{
		Vector2_t2156229523  L_0 = __this->get_direction_5();
		Vector2_t2156229523  L_1 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2_t2156229523  L_3 = V_0;
		Crate_t3334083239 * L_4 = GridOf_1_At_m3659202116(NULL /*static, unused*/, L_3, /*hidden argument*/GridOf_1_At_m3659202116_RuntimeMethod_var);
		V_1 = L_4;
		Crate_t3334083239 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		Crate_t3334083239 * L_7 = V_1;
		Vector2_t2156229523  L_8 = __this->get_direction_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_9 = Vector2_op_UnaryNegation_m2172448356(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Crate_Paint_m4231015055(L_7, L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void Painter::.cctor()
extern "C"  void Painter__cctor_m662125785 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Painter__cctor_m662125785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2U5BU5D_t1457185986* L_0 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_get_up_m2647420593(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_1;
		Vector2U5BU5D_t1457185986* L_2 = L_0;
		NullCheck(L_2);
		Vector2_t2156229523  L_3 = Vector2_get_down_m2886001705(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_3;
		Vector2U5BU5D_t1457185986* L_4 = L_2;
		NullCheck(L_4);
		Vector2_t2156229523  L_5 = Vector2_get_left_m1559018038(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))) = L_5;
		Vector2U5BU5D_t1457185986* L_6 = L_4;
		NullCheck(L_6);
		Vector2_t2156229523  L_7 = Vector2_get_right_m1027081661(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))) = L_7;
		((Painter_t2372114961_StaticFields*)il2cpp_codegen_static_fields_for(Painter_t2372114961_il2cpp_TypeInfo_var))->set_cardinalDirections_6(L_6);
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
// System.Void Pusher::.ctor()
extern "C"  void Pusher__ctor_m465679955 (Pusher_t3016537238 * __this, const RuntimeMethod* method)
{
	{
		Machine__ctor_m2672044869(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pusher::Start()
extern "C"  void Pusher_Start_m1979371091 (Pusher_t3016537238 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Pusher_Start_m1979371091_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Machine_Start_m764592851(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SpriteRenderer_t3235626157 * L_1 = GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593(L_0, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593_RuntimeMethod_var);
		__this->set_renderer_10(L_1);
		return;
	}
}
// System.Void Pusher::OnStepStart()
extern "C"  void Pusher_OnStepStart_m2943932459 (Pusher_t3016537238 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Pusher_OnStepStart_m2943932459_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Crate_t3334083239 * V_0 = NULL;
	{
		bool L_0 = Pusher_AnySensorActivated_m2062834046(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0054;
		}
	}
	{
		Vector2_t2156229523  L_1 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_2 = __this->get_direction_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		Crate_t3334083239 * L_4 = GridOf_1_At_m3659202116(NULL /*static, unused*/, L_3, /*hidden argument*/GridOf_1_At_m3659202116_RuntimeMethod_var);
		V_0 = L_4;
		Crate_t3334083239 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		Crate_t3334083239 * L_7 = V_0;
		NullCheck(L_7);
		CrateGroup_t1115957032 * L_8 = L_7->get_group_4();
		CrateGroup_t1115957032 * L_9 = L_8;
		NullCheck(L_9);
		Vector2_t2156229523  L_10 = L_9->get_pusherForce_2();
		Vector2_t2156229523  L_11 = __this->get_direction_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_12 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set_pusherForce_2(L_12);
	}

IL_0049:
	{
		Pusher_Extend_m3250081751(__this, /*hidden argument*/NULL);
		goto IL_005a;
	}

IL_0054:
	{
		Pusher_Retract_m2155967485(__this, /*hidden argument*/NULL);
	}

IL_005a:
	{
		return;
	}
}
// System.Void Pusher::Rotate(System.Boolean)
extern "C"  void Pusher_Rotate_m332016343 (Pusher_t3016537238 * __this, bool ___clockwise0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464 * G_B2_0 = NULL;
	Vector3_t3722313464 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Vector3_t3722313464 * G_B3_1 = NULL;
	{
		Vector2_t2156229523  L_0 = __this->get_direction_5();
		bool L_1 = ___clockwise0;
		Vector2_t2156229523  L_2 = Machine_RotateVector_m1548302461(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->set_direction_5(L_2);
		Vector3__ctor_m3353183577((&V_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		bool L_3 = ___clockwise0;
		G_B1_0 = (&V_0);
		if (!L_3)
		{
			G_B2_0 = (&V_0);
			goto IL_0038;
		}
	}
	{
		G_B3_0 = ((int32_t)-90);
		G_B3_1 = G_B1_0;
		goto IL_003a;
	}

IL_0038:
	{
		G_B3_0 = ((int32_t)90);
		G_B3_1 = G_B2_0;
	}

IL_003a:
	{
		G_B3_1->set_z_3((((float)((float)G_B3_0))));
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = V_0;
		NullCheck(L_4);
		Transform_Rotate_m1886816857(L_4, L_5, 0, /*hidden argument*/NULL);
		MachineUI_t252077060 * L_6 = UI_get_Machines_m4279099061(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = L_6->get_pusherPrefab_12();
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = V_0;
		NullCheck(L_8);
		Transform_Rotate_m1886816857(L_8, L_9, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pusher::Extend()
extern "C"  void Pusher_Extend_m3250081751 (Pusher_t3016537238 * __this, const RuntimeMethod* method)
{
	{
		__this->set_extended_6((bool)1);
		SpriteRenderer_t3235626157 * L_0 = __this->get_renderer_10();
		Sprite_t280657092 * L_1 = __this->get_spriteExtended_8();
		NullCheck(L_0);
		SpriteRenderer_set_sprite_m1286893786(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pusher::Retract()
extern "C"  void Pusher_Retract_m2155967485 (Pusher_t3016537238 * __this, const RuntimeMethod* method)
{
	{
		__this->set_extended_6((bool)0);
		SpriteRenderer_t3235626157 * L_0 = __this->get_renderer_10();
		Sprite_t280657092 * L_1 = __this->get_spriteRetracted_9();
		NullCheck(L_0);
		SpriteRenderer_set_sprite_m1286893786(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Pusher::AnySensorActivated()
extern "C"  bool Pusher_AnySensorActivated_m2062834046 (Pusher_t3016537238 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Pusher_AnySensorActivated_m2062834046_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3217410706 * V_0 = NULL;
	Sensor_t1745335964 * V_1 = NULL;
	Enumerator_t811687287  V_2;
	memset(&V_2, 0, sizeof(V_2));
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3217410706 * L_0 = Pusher_GetSensors_m2451983428(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		List_1_t3217410706 * L_1 = V_0;
		NullCheck(L_1);
		Enumerator_t811687287  L_2 = List_1_GetEnumerator_m217734469(L_1, /*hidden argument*/List_1_GetEnumerator_m217734469_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002d;
		}

IL_0013:
		{
			Sensor_t1745335964 * L_3 = Enumerator_get_Current_m3155876505((&V_2), /*hidden argument*/Enumerator_get_Current_m3155876505_RuntimeMethod_var);
			V_1 = L_3;
			Sensor_t1745335964 * L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = Sensor_Activated_m2355377676(L_4, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_002d;
			}
		}

IL_0026:
		{
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x4E, FINALLY_003e);
		}

IL_002d:
		{
			bool L_6 = Enumerator_MoveNext_m3205074374((&V_2), /*hidden argument*/Enumerator_MoveNext_m3205074374_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0013;
			}
		}

IL_0039:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m785474812((&V_2), /*hidden argument*/Enumerator_Dispose_m785474812_RuntimeMethod_var);
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		return (bool)0;
	}

IL_004e:
	{
		bool L_7 = V_3;
		return L_7;
	}
}
// System.Collections.Generic.List`1<Sensor> Pusher::GetSensors()
extern "C"  List_1_t3217410706 * Pusher_GetSensors_m2451983428 (Pusher_t3016537238 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Pusher_GetSensors_m2451983428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3217410706 * V_0 = NULL;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2U5BU5D_t1457185986* V_2 = NULL;
	int32_t V_3 = 0;
	Machine_t4122409742 * V_4 = NULL;
	Wire_t1115128131 * V_5 = NULL;
	{
		List_1_t3217410706 * L_0 = (List_1_t3217410706 *)il2cpp_codegen_object_new(List_1_t3217410706_il2cpp_TypeInfo_var);
		List_1__ctor_m63149084(L_0, /*hidden argument*/List_1__ctor_m63149084_RuntimeMethod_var);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Pusher_t3016537238_il2cpp_TypeInfo_var);
		Vector2U5BU5D_t1457185986* L_1 = ((Pusher_t3016537238_StaticFields*)il2cpp_codegen_static_fields_for(Pusher_t3016537238_il2cpp_TypeInfo_var))->get_cardinalDirections_11();
		V_2 = L_1;
		V_3 = 0;
		goto IL_0080;
	}

IL_0013:
	{
		Vector2U5BU5D_t1457185986* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		V_1 = (*(Vector2_t2156229523 *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))));
		Vector2_t2156229523  L_4 = V_1;
		Vector2_t2156229523  L_5 = __this->get_direction_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		bool L_6 = Vector2_op_Equality_m2303255133(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		goto IL_007c;
	}

IL_0036:
	{
		Vector2_t2156229523  L_7 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_9 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		Machine_t4122409742 * L_10 = GridOf_1_At_m3872141981(NULL /*static, unused*/, L_9, /*hidden argument*/GridOf_1_At_m3872141981_RuntimeMethod_var);
		V_4 = L_10;
		Machine_t4122409742 * L_11 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_007c;
		}
	}
	{
		Machine_t4122409742 * L_13 = V_4;
		if (!((Wire_t1115128131 *)IsInstClass((RuntimeObject*)L_13, Wire_t1115128131_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		Machine_t4122409742 * L_14 = V_4;
		V_5 = ((Wire_t1115128131 *)CastclassClass((RuntimeObject*)L_14, Wire_t1115128131_il2cpp_TypeInfo_var));
		List_1_t3217410706 * L_15 = V_0;
		Wire_t1115128131 * L_16 = V_5;
		NullCheck(L_16);
		WireGroup_t228895900 * L_17 = L_16->get_group_5();
		NullCheck(L_17);
		List_1_t3217410706 * L_18 = WireGroup_Sensors_m2731798325(L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_AddRange_m2510231272(L_15, L_18, /*hidden argument*/List_1_AddRange_m2510231272_RuntimeMethod_var);
	}

IL_007c:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0080:
	{
		int32_t L_20 = V_3;
		Vector2U5BU5D_t1457185986* L_21 = V_2;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		List_1_t3217410706 * L_22 = V_0;
		return L_22;
	}
}
// System.Void Pusher::.cctor()
extern "C"  void Pusher__cctor_m1998471936 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Pusher__cctor_m1998471936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2U5BU5D_t1457185986* L_0 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_get_up_m2647420593(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_1;
		Vector2U5BU5D_t1457185986* L_2 = L_0;
		NullCheck(L_2);
		Vector2_t2156229523  L_3 = Vector2_get_down_m2886001705(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_3;
		Vector2U5BU5D_t1457185986* L_4 = L_2;
		NullCheck(L_4);
		Vector2_t2156229523  L_5 = Vector2_get_left_m1559018038(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))) = L_5;
		Vector2U5BU5D_t1457185986* L_6 = L_4;
		NullCheck(L_6);
		Vector2_t2156229523  L_7 = Vector2_get_right_m1027081661(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))) = L_7;
		((Pusher_t3016537238_StaticFields*)il2cpp_codegen_static_fields_for(Pusher_t3016537238_il2cpp_TypeInfo_var))->set_cardinalDirections_11(L_6);
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
// System.Void Rotator::.ctor()
extern "C"  void Rotator__ctor_m1942799180 (Rotator_t2029754672 * __this, const RuntimeMethod* method)
{
	{
		Machine__ctor_m2672044869(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rotator::Start()
extern "C"  void Rotator_Start_m3222717564 (Rotator_t2029754672 * __this, const RuntimeMethod* method)
{
	{
		Machine_Start_m764592851(__this, /*hidden argument*/NULL);
		((Machine_t4122409742 *)__this)->set_isObstacle_3((bool)0);
		return;
	}
}
// System.Void Rotator::setLastGroup(CrateGroup)
extern "C"  void Rotator_setLastGroup_m2620044530 (Rotator_t2029754672 * __this, CrateGroup_t1115957032 * ___g0, const RuntimeMethod* method)
{
	{
		CrateGroup_t1115957032 * L_0 = ___g0;
		__this->set_lastGroup_8(L_0);
		return;
	}
}
// CrateGroup Rotator::getLastGroup()
extern "C"  CrateGroup_t1115957032 * Rotator_getLastGroup_m1119025567 (Rotator_t2029754672 * __this, const RuntimeMethod* method)
{
	{
		CrateGroup_t1115957032 * L_0 = __this->get_lastGroup_8();
		return L_0;
	}
}
// System.Void Rotator::OnStepStart()
extern "C"  void Rotator_OnStepStart_m618984106 (Rotator_t2029754672 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rotator_OnStepStart_m618984106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Crate_t3334083239 * V_0 = NULL;
	int32_t V_1 = 0;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		Vector2_t2156229523  L_0 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		Crate_t3334083239 * L_1 = GridOf_1_At_m3659202116(NULL /*static, unused*/, L_0, /*hidden argument*/GridOf_1_At_m3659202116_RuntimeMethod_var);
		V_0 = L_1;
		bool L_2 = __this->get_isCCW_5();
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_1 = G_B3_0;
		int32_t L_3 = GridThing_get_x_m1761905480(__this, /*hidden argument*/NULL);
		int32_t L_4 = GridThing_get_y_m1761905479(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		Vector3__ctor_m3353183577((&V_2), (((float)((float)L_3))), (((float)((float)L_4))), (((float)((float)L_5))), /*hidden argument*/NULL);
		Crate_t3334083239 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006f;
		}
	}
	{
		Crate_t3334083239 * L_8 = V_0;
		NullCheck(L_8);
		CrateGroup_t1115957032 * L_9 = L_8->get_group_4();
		CrateGroup_t1115957032 * L_10 = __this->get_lastGroup_8();
		if ((((RuntimeObject*)(CrateGroup_t1115957032 *)L_9) == ((RuntimeObject*)(CrateGroup_t1115957032 *)L_10)))
		{
			goto IL_006f;
		}
	}
	{
		Crate_t3334083239 * L_11 = V_0;
		NullCheck(L_11);
		CrateGroup_t1115957032 * L_12 = L_11->get_group_4();
		NullCheck(L_12);
		List_1_t899420910 * L_13 = L_12->get_spins_1();
		Vector3_t3722313464  L_14 = V_2;
		NullCheck(L_13);
		List_1_Add_m1524640104(L_13, L_14, /*hidden argument*/List_1_Add_m1524640104_RuntimeMethod_var);
		Crate_t3334083239 * L_15 = V_0;
		NullCheck(L_15);
		CrateGroup_t1115957032 * L_16 = L_15->get_group_4();
		__this->set_lastGroup_8(L_16);
	}

IL_006f:
	{
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector2> Rotator::GetSquaresToCheck(UnityEngine.Vector2,UnityEngine.Vector3)
extern "C"  List_1_t3628304265 * Rotator_GetSquaresToCheck_m3524065233 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___xy0, Vector3_t3722313464  ___spin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rotator_GetSquaresToCheck_m3524065233_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	List_1_t3628304265 * V_4 = NULL;
	Vector2_t2156229523  V_5;
	memset(&V_5, 0, sizeof(V_5));
	bool V_6 = false;
	List_1_t3628304265 * V_7 = NULL;
	int32_t G_B3_0 = 0;
	{
		float L_0 = Vector3_get_Item_m668685504((&___spin1), 0, /*hidden argument*/NULL);
		float L_1 = Vector2_get_Item_m3559215723((&___xy0), 0, /*hidden argument*/NULL);
		V_0 = ((double)il2cpp_codegen_subtract((double)(((double)((double)L_0))), (double)(((double)((double)L_1)))));
		float L_2 = Vector3_get_Item_m668685504((&___spin1), 1, /*hidden argument*/NULL);
		float L_3 = Vector2_get_Item_m3559215723((&___xy0), 1, /*hidden argument*/NULL);
		V_1 = ((double)il2cpp_codegen_subtract((double)(((double)((double)L_2))), (double)(((double)((double)L_3)))));
		double L_4 = V_0;
		double L_5 = V_0;
		double L_6 = V_1;
		double L_7 = V_1;
		double L_8 = sqrt(((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_4, (double)L_5)), (double)((double)il2cpp_codegen_multiply((double)L_6, (double)L_7)))));
		V_2 = L_8;
		float L_9 = Vector3_get_Item_m668685504((&___spin1), 0, /*hidden argument*/NULL);
		float L_10 = Vector3_get_Item_m668685504((&___spin1), 1, /*hidden argument*/NULL);
		Vector2__ctor_m3970636864((&V_3), L_9, L_10, /*hidden argument*/NULL);
		Vector2_t2156229523  L_11 = V_3;
		double L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Rotator_t2029754672_il2cpp_TypeInfo_var);
		List_1_t3628304265 * L_13 = Rotator_MakeCircle_m2396613248(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		Vector2_t2156229523  L_14 = ___xy0;
		Vector3_t3722313464  L_15 = ___spin1;
		Vector2_t2156229523  L_16 = Rotator_RotateVector_m3711280816(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		float L_17 = Vector3_get_Item_m668685504((&___spin1), 2, /*hidden argument*/NULL);
		if ((!(((float)L_17) == ((float)(1.0f)))))
		{
			goto IL_0076;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0077;
	}

IL_0076:
	{
		G_B3_0 = 0;
	}

IL_0077:
	{
		V_6 = (bool)G_B3_0;
		List_1_t3628304265 * L_18 = V_4;
		Vector2_t2156229523  L_19 = ___xy0;
		Vector2_t2156229523  L_20 = V_5;
		bool L_21 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Rotator_t2029754672_il2cpp_TypeInfo_var);
		List_1_t3628304265 * L_22 = Rotator_InclusiveSlice_m336522371(NULL /*static, unused*/, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		V_7 = L_22;
		List_1_t3628304265 * L_23 = V_7;
		return L_23;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector2> Rotator::InclusiveSlice(System.Collections.Generic.List`1<UnityEngine.Vector2>,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C"  List_1_t3628304265 * Rotator_InclusiveSlice_m336522371 (RuntimeObject * __this /* static, unused */, List_1_t3628304265 * ___l0, Vector2_t2156229523  ___start1, Vector2_t2156229523  ___end2, bool ___ccw3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rotator_InclusiveSlice_m336522371_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	List_1_t3628304265 * V_2 = NULL;
	List_1_t3628304265 * V_3 = NULL;
	List_1_t3628304265 * V_4 = NULL;
	Vector2_t2156229523  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Enumerator_t1222580846  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3628304265 * L_0 = ___l0;
		Vector2_t2156229523  L_1 = ___start1;
		NullCheck(L_0);
		int32_t L_2 = List_1_IndexOf_m698163972(L_0, L_1, /*hidden argument*/List_1_IndexOf_m698163972_RuntimeMethod_var);
		V_0 = L_2;
		List_1_t3628304265 * L_3 = ___l0;
		Vector2_t2156229523  L_4 = ___end2;
		NullCheck(L_3);
		int32_t L_5 = List_1_IndexOf_m698163972(L_3, L_4, /*hidden argument*/List_1_IndexOf_m698163972_RuntimeMethod_var);
		V_1 = L_5;
		List_1_t3628304265 * L_6 = (List_1_t3628304265 *)il2cpp_codegen_object_new(List_1_t3628304265_il2cpp_TypeInfo_var);
		List_1__ctor_m1536470898(L_6, /*hidden argument*/List_1__ctor_m1536470898_RuntimeMethod_var);
		V_2 = L_6;
		bool L_7 = ___ccw3;
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0035;
		}
	}
	{
		List_1_t3628304265 * L_10 = ___l0;
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		NullCheck(L_10);
		List_1_t3628304265 * L_14 = List_1_GetRange_m390786444(L_10, L_11, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13)), (int32_t)1)), /*hidden argument*/List_1_GetRange_m390786444_RuntimeMethod_var);
		V_2 = L_14;
		goto IL_0057;
	}

IL_0035:
	{
		List_1_t3628304265 * L_15 = ___l0;
		int32_t L_16 = V_0;
		List_1_t3628304265 * L_17 = ___l0;
		NullCheck(L_17);
		int32_t L_18 = List_1_get_Count_m1202123918(L_17, /*hidden argument*/List_1_get_Count_m1202123918_RuntimeMethod_var);
		int32_t L_19 = V_0;
		NullCheck(L_15);
		List_1_t3628304265 * L_20 = List_1_GetRange_m390786444(L_15, L_16, ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19)), /*hidden argument*/List_1_GetRange_m390786444_RuntimeMethod_var);
		V_2 = L_20;
		List_1_t3628304265 * L_21 = ___l0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		List_1_t3628304265 * L_23 = List_1_GetRange_m390786444(L_21, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)), /*hidden argument*/List_1_GetRange_m390786444_RuntimeMethod_var);
		V_3 = L_23;
		List_1_t3628304265 * L_24 = V_2;
		List_1_t3628304265 * L_25 = V_3;
		NullCheck(L_24);
		List_1_AddRange_m705206751(L_24, L_25, /*hidden argument*/List_1_AddRange_m705206751_RuntimeMethod_var);
	}

IL_0057:
	{
		goto IL_0099;
	}

IL_005c:
	{
		int32_t L_26 = V_0;
		int32_t L_27 = V_1;
		if ((((int32_t)L_26) <= ((int32_t)L_27)))
		{
			goto IL_0075;
		}
	}
	{
		List_1_t3628304265 * L_28 = ___l0;
		int32_t L_29 = V_1;
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		NullCheck(L_28);
		List_1_t3628304265 * L_32 = List_1_GetRange_m390786444(L_28, L_29, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_31)), (int32_t)1)), /*hidden argument*/List_1_GetRange_m390786444_RuntimeMethod_var);
		V_2 = L_32;
		goto IL_0099;
	}

IL_0075:
	{
		List_1_t3628304265 * L_33 = ___l0;
		int32_t L_34 = V_1;
		List_1_t3628304265 * L_35 = ___l0;
		NullCheck(L_35);
		int32_t L_36 = List_1_get_Count_m1202123918(L_35, /*hidden argument*/List_1_get_Count_m1202123918_RuntimeMethod_var);
		int32_t L_37 = V_1;
		NullCheck(L_33);
		List_1_t3628304265 * L_38 = List_1_GetRange_m390786444(L_33, L_34, ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37)), /*hidden argument*/List_1_GetRange_m390786444_RuntimeMethod_var);
		V_2 = L_38;
		List_1_t3628304265 * L_39 = ___l0;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		List_1_t3628304265 * L_41 = List_1_GetRange_m390786444(L_39, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1)), /*hidden argument*/List_1_GetRange_m390786444_RuntimeMethod_var);
		V_4 = L_41;
		List_1_t3628304265 * L_42 = V_2;
		List_1_t3628304265 * L_43 = V_4;
		NullCheck(L_42);
		List_1_AddRange_m705206751(L_42, L_43, /*hidden argument*/List_1_AddRange_m705206751_RuntimeMethod_var);
	}

IL_0099:
	{
		List_1_t3628304265 * L_44 = V_2;
		NullCheck(L_44);
		Enumerator_t1222580846  L_45 = List_1_GetEnumerator_m809843680(L_44, /*hidden argument*/List_1_GetEnumerator_m809843680_RuntimeMethod_var);
		V_6 = L_45;
	}

IL_00a1:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00af;
		}

IL_00a6:
		{
			Vector2_t2156229523  L_46 = Enumerator_get_Current_m2598000980((&V_6), /*hidden argument*/Enumerator_get_Current_m2598000980_RuntimeMethod_var);
			V_5 = L_46;
		}

IL_00af:
		{
			bool L_47 = Enumerator_MoveNext_m4079852040((&V_6), /*hidden argument*/Enumerator_MoveNext_m4079852040_RuntimeMethod_var);
			if (L_47)
			{
				goto IL_00a6;
			}
		}

IL_00bb:
		{
			IL2CPP_LEAVE(0xCE, FINALLY_00c0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c0;
	}

FINALLY_00c0:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2367629053((&V_6), /*hidden argument*/Enumerator_Dispose_m2367629053_RuntimeMethod_var);
		IL2CPP_END_FINALLY(192)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(192)
	{
		IL2CPP_JUMP_TBL(0xCE, IL_00ce)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ce:
	{
		List_1_t3628304265 * L_48 = V_2;
		return L_48;
	}
}
// UnityEngine.Vector2 Rotator::RotateNinety(UnityEngine.Vector2,System.Boolean)
extern "C"  Vector2_t2156229523  Rotator_RotateNinety_m83057391 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___xy0, bool ___ccw1, const RuntimeMethod* method)
{
	{
		bool L_0 = ___ccw1;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		float L_1 = (&___xy0)->get_y_1();
		float L_2 = (&___xy0)->get_x_0();
		Vector2_t2156229523  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector2__ctor_m3970636864((&L_3), ((-L_1)), L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001b:
	{
		float L_4 = (&___xy0)->get_y_1();
		float L_5 = (&___xy0)->get_x_0();
		Vector2_t2156229523  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector2__ctor_m3970636864((&L_6), L_4, ((-L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 Rotator::RotateVector(UnityEngine.Vector2,UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Rotator_RotateVector_m3711280816 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___xy0, Vector3_t3722313464  ___spin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rotator_RotateVector_m3711280816_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		float L_0 = Vector3_get_Item_m668685504((&___spin1), 0, /*hidden argument*/NULL);
		float L_1 = Vector3_get_Item_m668685504((&___spin1), 1, /*hidden argument*/NULL);
		Vector2__ctor_m3970636864((&V_0), L_0, L_1, /*hidden argument*/NULL);
		Vector2_t2156229523  L_2 = ___xy0;
		Vector2_t2156229523  L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_4 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = Vector3_get_Item_m668685504((&___spin1), 2, /*hidden argument*/NULL);
		if ((!(((float)L_5) == ((float)(1.0f)))))
		{
			goto IL_0037;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0038;
	}

IL_0037:
	{
		G_B3_0 = 0;
	}

IL_0038:
	{
		V_2 = (bool)G_B3_0;
		Vector2_t2156229523  L_6 = V_1;
		bool L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Rotator_t2029754672_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_8 = Rotator_RotateNinety_m83057391(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector2_t2156229523  L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_10 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		Vector2_t2156229523  L_11 = V_3;
		return L_11;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector2> Rotator::MidpointCenterAlgorithm(UnityEngine.Vector2,UnityEngine.Vector3)
extern "C"  List_1_t3628304265 * Rotator_MidpointCenterAlgorithm_m4218409032 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___pt0, Vector3_t3722313464  ___spin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rotator_MidpointCenterAlgorithm_m4218409032_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t805411711 * V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t3628304265 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Vector2_t2156229523  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Vector2_t2156229523  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Vector2_t2156229523  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Vector2_t2156229523  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Vector2_t2156229523  V_15;
	memset(&V_15, 0, sizeof(V_15));
	Vector2_t2156229523  V_16;
	memset(&V_16, 0, sizeof(V_16));
	Vector2_t2156229523  V_17;
	memset(&V_17, 0, sizeof(V_17));
	Vector2_t2156229523  V_18;
	memset(&V_18, 0, sizeof(V_18));
	List_1_t3628304265 * V_19 = NULL;
	int32_t V_20 = 0;
	List_1_t3628304265 * V_21 = NULL;
	{
		List_1_t805411711 * L_0 = (List_1_t805411711 *)il2cpp_codegen_object_new(List_1_t805411711_il2cpp_TypeInfo_var);
		List_1__ctor_m3876179742(L_0, /*hidden argument*/List_1__ctor_m3876179742_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_001e;
	}

IL_000d:
	{
		List_1_t3628304265 * L_1 = (List_1_t3628304265 *)il2cpp_codegen_object_new(List_1_t3628304265_il2cpp_TypeInfo_var);
		List_1__ctor_m1536470898(L_1, /*hidden argument*/List_1__ctor_m1536470898_RuntimeMethod_var);
		V_2 = L_1;
		List_1_t805411711 * L_2 = V_0;
		List_1_t3628304265 * L_3 = V_2;
		NullCheck(L_2);
		List_1_Add_m2934800696(L_2, L_3, /*hidden argument*/List_1_Add_m2934800696_RuntimeMethod_var);
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001e:
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) < ((int32_t)8)))
		{
			goto IL_000d;
		}
	}
	{
		float L_6 = Vector3_get_Item_m668685504((&___spin1), 0, /*hidden argument*/NULL);
		float L_7 = Vector2_get_Item_m3559215723((&___pt0), 0, /*hidden argument*/NULL);
		V_3 = (((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)L_6, (float)L_7)))));
		float L_8 = Vector3_get_Item_m668685504((&___spin1), 1, /*hidden argument*/NULL);
		float L_9 = Vector2_get_Item_m3559215723((&___pt0), 1, /*hidden argument*/NULL);
		V_4 = (((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)L_8, (float)L_9)))));
		int32_t L_10 = V_3;
		int32_t L_11 = V_3;
		int32_t L_12 = V_4;
		int32_t L_13 = V_4;
		double L_14 = sqrt((((double)((double)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_11)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)L_13))))))));
		V_5 = (((int32_t)((int32_t)L_14)));
		float L_15 = Vector3_get_Item_m668685504((&___spin1), 0, /*hidden argument*/NULL);
		V_6 = (((int32_t)((int32_t)L_15)));
		float L_16 = Vector3_get_Item_m668685504((&___spin1), 1, /*hidden argument*/NULL);
		V_7 = (((int32_t)((int32_t)L_16)));
		int32_t L_17 = V_5;
		V_8 = L_17;
		V_9 = 0;
		V_10 = 0;
		goto IL_01bd;
	}

IL_0083:
	{
		int32_t L_18 = V_6;
		int32_t L_19 = V_8;
		int32_t L_20 = V_7;
		int32_t L_21 = V_9;
		Vector2__ctor_m3970636864((&V_11), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19))))), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21))))), /*hidden argument*/NULL);
		int32_t L_22 = V_6;
		int32_t L_23 = V_9;
		int32_t L_24 = V_7;
		int32_t L_25 = V_8;
		Vector2__ctor_m3970636864((&V_12), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23))))), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25))))), /*hidden argument*/NULL);
		int32_t L_26 = V_6;
		int32_t L_27 = V_9;
		int32_t L_28 = V_7;
		int32_t L_29 = V_8;
		Vector2__ctor_m3970636864((&V_13), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)L_27))))), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29))))), /*hidden argument*/NULL);
		int32_t L_30 = V_6;
		int32_t L_31 = V_8;
		int32_t L_32 = V_7;
		int32_t L_33 = V_9;
		Vector2__ctor_m3970636864((&V_14), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_31))))), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33))))), /*hidden argument*/NULL);
		int32_t L_34 = V_6;
		int32_t L_35 = V_8;
		int32_t L_36 = V_7;
		int32_t L_37 = V_9;
		Vector2__ctor_m3970636864((&V_15), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)L_35))))), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37))))), /*hidden argument*/NULL);
		int32_t L_38 = V_6;
		int32_t L_39 = V_9;
		int32_t L_40 = V_7;
		int32_t L_41 = V_8;
		Vector2__ctor_m3970636864((&V_16), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)L_39))))), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)L_41))))), /*hidden argument*/NULL);
		int32_t L_42 = V_6;
		int32_t L_43 = V_9;
		int32_t L_44 = V_7;
		int32_t L_45 = V_8;
		Vector2__ctor_m3970636864((&V_17), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)L_43))))), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)L_45))))), /*hidden argument*/NULL);
		int32_t L_46 = V_6;
		int32_t L_47 = V_8;
		int32_t L_48 = V_7;
		int32_t L_49 = V_9;
		Vector2__ctor_m3970636864((&V_18), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)L_47))))), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)L_49))))), /*hidden argument*/NULL);
		List_1_t805411711 * L_50 = V_0;
		NullCheck(L_50);
		List_1_t3628304265 * L_51 = List_1_get_Item_m3902301990(L_50, 0, /*hidden argument*/List_1_get_Item_m3902301990_RuntimeMethod_var);
		Vector2_t2156229523  L_52 = V_11;
		NullCheck(L_51);
		List_1_Add_m2298161512(L_51, L_52, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		List_1_t805411711 * L_53 = V_0;
		NullCheck(L_53);
		List_1_t3628304265 * L_54 = List_1_get_Item_m3902301990(L_53, 1, /*hidden argument*/List_1_get_Item_m3902301990_RuntimeMethod_var);
		Vector2_t2156229523  L_55 = V_12;
		NullCheck(L_54);
		List_1_Add_m2298161512(L_54, L_55, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		List_1_t805411711 * L_56 = V_0;
		NullCheck(L_56);
		List_1_t3628304265 * L_57 = List_1_get_Item_m3902301990(L_56, 2, /*hidden argument*/List_1_get_Item_m3902301990_RuntimeMethod_var);
		Vector2_t2156229523  L_58 = V_13;
		NullCheck(L_57);
		List_1_Add_m2298161512(L_57, L_58, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		List_1_t805411711 * L_59 = V_0;
		NullCheck(L_59);
		List_1_t3628304265 * L_60 = List_1_get_Item_m3902301990(L_59, 3, /*hidden argument*/List_1_get_Item_m3902301990_RuntimeMethod_var);
		Vector2_t2156229523  L_61 = V_14;
		NullCheck(L_60);
		List_1_Add_m2298161512(L_60, L_61, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		List_1_t805411711 * L_62 = V_0;
		NullCheck(L_62);
		List_1_t3628304265 * L_63 = List_1_get_Item_m3902301990(L_62, 4, /*hidden argument*/List_1_get_Item_m3902301990_RuntimeMethod_var);
		Vector2_t2156229523  L_64 = V_15;
		NullCheck(L_63);
		List_1_Add_m2298161512(L_63, L_64, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		List_1_t805411711 * L_65 = V_0;
		NullCheck(L_65);
		List_1_t3628304265 * L_66 = List_1_get_Item_m3902301990(L_65, 5, /*hidden argument*/List_1_get_Item_m3902301990_RuntimeMethod_var);
		Vector2_t2156229523  L_67 = V_16;
		NullCheck(L_66);
		List_1_Add_m2298161512(L_66, L_67, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		List_1_t805411711 * L_68 = V_0;
		NullCheck(L_68);
		List_1_t3628304265 * L_69 = List_1_get_Item_m3902301990(L_68, 6, /*hidden argument*/List_1_get_Item_m3902301990_RuntimeMethod_var);
		Vector2_t2156229523  L_70 = V_17;
		NullCheck(L_69);
		List_1_Add_m2298161512(L_69, L_70, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		List_1_t805411711 * L_71 = V_0;
		NullCheck(L_71);
		List_1_t3628304265 * L_72 = List_1_get_Item_m3902301990(L_71, 7, /*hidden argument*/List_1_get_Item_m3902301990_RuntimeMethod_var);
		Vector2_t2156229523  L_73 = V_18;
		NullCheck(L_72);
		List_1_Add_m2298161512(L_72, L_73, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		int32_t L_74 = V_10;
		if ((((int32_t)L_74) > ((int32_t)0)))
		{
			goto IL_01a4;
		}
	}
	{
		int32_t L_75 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
		int32_t L_76 = V_10;
		int32_t L_77 = V_9;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_77)), (int32_t)1))));
	}

IL_01a4:
	{
		int32_t L_78 = V_10;
		if ((((int32_t)L_78) <= ((int32_t)0)))
		{
			goto IL_01bd;
		}
	}
	{
		int32_t L_79 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_79, (int32_t)1));
		int32_t L_80 = V_10;
		int32_t L_81 = V_8;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_81)), (int32_t)1))));
	}

IL_01bd:
	{
		int32_t L_82 = V_8;
		int32_t L_83 = V_9;
		if ((((int32_t)L_82) >= ((int32_t)L_83)))
		{
			goto IL_0083;
		}
	}
	{
		List_1_t3628304265 * L_84 = (List_1_t3628304265 *)il2cpp_codegen_object_new(List_1_t3628304265_il2cpp_TypeInfo_var);
		List_1__ctor_m1536470898(L_84, /*hidden argument*/List_1__ctor_m1536470898_RuntimeMethod_var);
		V_19 = L_84;
		V_20 = 0;
		goto IL_020b;
	}

IL_01d5:
	{
		List_1_t805411711 * L_85 = V_0;
		int32_t L_86 = V_20;
		NullCheck(L_85);
		List_1_t3628304265 * L_87 = List_1_get_Item_m3902301990(L_85, L_86, /*hidden argument*/List_1_get_Item_m3902301990_RuntimeMethod_var);
		V_21 = L_87;
		int32_t L_88 = V_20;
		if ((!(((uint32_t)((int32_t)((int32_t)L_88%(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_01f6;
		}
	}
	{
		List_1_t805411711 * L_89 = V_0;
		int32_t L_90 = V_20;
		NullCheck(L_89);
		List_1_t3628304265 * L_91 = List_1_get_Item_m3902301990(L_89, L_90, /*hidden argument*/List_1_get_Item_m3902301990_RuntimeMethod_var);
		NullCheck(L_91);
		List_1_Reverse_m3814808058(L_91, /*hidden argument*/List_1_Reverse_m3814808058_RuntimeMethod_var);
	}

IL_01f6:
	{
		List_1_t3628304265 * L_92 = V_19;
		List_1_t805411711 * L_93 = V_0;
		int32_t L_94 = V_20;
		NullCheck(L_93);
		List_1_t3628304265 * L_95 = List_1_get_Item_m3902301990(L_93, L_94, /*hidden argument*/List_1_get_Item_m3902301990_RuntimeMethod_var);
		NullCheck(L_92);
		List_1_AddRange_m705206751(L_92, L_95, /*hidden argument*/List_1_AddRange_m705206751_RuntimeMethod_var);
		int32_t L_96 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1));
	}

IL_020b:
	{
		int32_t L_97 = V_20;
		if ((((int32_t)L_97) < ((int32_t)8)))
		{
			goto IL_01d5;
		}
	}
	{
		List_1_t3628304265 * L_98 = V_19;
		return L_98;
	}
}
// System.Int32 Rotator::Quadrent(System.Double[])
extern "C"  int32_t Rotator_Quadrent_m2459454899 (RuntimeObject * __this /* static, unused */, DoubleU5BU5D_t3413330114* ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rotator_Quadrent_m2459454899_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU5D_t3413330114* V_0 = NULL;
	Int32U5B0___U2C0___U5D_t385246373* V_1 = NULL;
	double V_2 = 0.0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		DoubleU5BU5D_t3413330114* L_0 = ((DoubleU5BU5D_t3413330114*)SZArrayNew(DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var, (uint32_t)2));
		DoubleU5BU5D_t3413330114* L_1 = ___point0;
		NullCheck(L_1);
		int32_t L_2 = 0;
		double L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		double L_4 = bankers_round(L_3);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)L_4);
		DoubleU5BU5D_t3413330114* L_5 = L_0;
		DoubleU5BU5D_t3413330114* L_6 = ___point0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		double L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		double L_9 = bankers_round(L_8);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)L_9);
		V_0 = L_5;
		il2cpp_array_size_t L_11[] = { (il2cpp_array_size_t)3, (il2cpp_array_size_t)3 };
		Int32U5B0___U2C0___U5D_t385246373* L_10 = (Int32U5B0___U2C0___U5D_t385246373*)GenArrayNew(Int32U5B0___U2C0___U5D_t385246373_il2cpp_TypeInfo_var, L_11);
		Int32U5B0___U2C0___U5D_t385246373* L_12 = L_10;
		RuntimeFieldHandle_t1871169219  L_13 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255366____U24fieldU2D789A03B883709A48092EAA34B7D094B9AC0EC2DF_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_12;
		DoubleU5BU5D_t3413330114* L_14 = ___point0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		double L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		DoubleU5BU5D_t3413330114* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = 0;
		double L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_2 = ((double)il2cpp_codegen_multiply((double)(2.0), (double)((double)il2cpp_codegen_subtract((double)L_16, (double)L_19))));
		DoubleU5BU5D_t3413330114* L_20 = ___point0;
		NullCheck(L_20);
		int32_t L_21 = 1;
		double L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		DoubleU5BU5D_t3413330114* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24 = 1;
		double L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_3 = ((double)il2cpp_codegen_multiply((double)(2.0), (double)((double)il2cpp_codegen_subtract((double)L_22, (double)L_25))));
		double L_26 = V_2;
		double L_27 = Math_Round_m3279303474(NULL /*static, unused*/, L_26, 0, /*hidden argument*/NULL);
		V_4 = (((int32_t)((int32_t)L_27)));
		double L_28 = V_3;
		double L_29 = Math_Round_m3279303474(NULL /*static, unused*/, L_28, 0, /*hidden argument*/NULL);
		V_5 = (((int32_t)((int32_t)L_29)));
		int32_t L_30 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		int32_t L_31 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		Int32U5B0___U2C0___U5D_t385246373* L_32 = V_1;
		int32_t L_33 = V_6;
		int32_t L_34 = V_7;
		NullCheck(L_32);
		int32_t L_35 = (L_32)->GetAt(L_33, L_34);
		return L_35;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector2> Rotator::MakeCircle(UnityEngine.Vector2,System.Double)
extern "C"  List_1_t3628304265 * Rotator_MakeCircle_m2396613248 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___center0, double ___radius1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rotator_MakeCircle_m2396613248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3628304265 * V_0 = NULL;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		List_1_t3628304265 * L_0 = (List_1_t3628304265 *)il2cpp_codegen_object_new(List_1_t3628304265_il2cpp_TypeInfo_var);
		List_1__ctor_m1536470898(L_0, /*hidden argument*/List_1__ctor_m1536470898_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0226;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Rotator_t2029754672_il2cpp_TypeInfo_var);
		double L_1 = ((Rotator_t2029754672_StaticFields*)il2cpp_codegen_static_fields_for(Rotator_t2029754672_il2cpp_TypeInfo_var))->get_ANG_STEP_7();
		int32_t L_2 = V_1;
		V_2 = ((double)il2cpp_codegen_multiply((double)L_1, (double)(((double)((double)L_2)))));
		float L_3 = Vector2_get_Item_m3559215723((&___center0), 0, /*hidden argument*/NULL);
		V_3 = (((double)((double)L_3)));
		float L_4 = Vector2_get_Item_m3559215723((&___center0), 1, /*hidden argument*/NULL);
		V_4 = (((double)((double)L_4)));
		double L_5 = ___radius1;
		double L_6 = V_2;
		double L_7 = cos(L_6);
		V_5 = ((double)il2cpp_codegen_multiply((double)L_5, (double)L_7));
		double L_8 = ___radius1;
		double L_9 = V_2;
		double L_10 = sin(L_9);
		V_6 = ((double)il2cpp_codegen_multiply((double)L_8, (double)L_10));
		double L_11 = V_3;
		double L_12 = V_5;
		V_7 = ((double)il2cpp_codegen_add((double)L_11, (double)L_12));
		double L_13 = V_4;
		double L_14 = V_6;
		V_8 = ((double)il2cpp_codegen_add((double)L_13, (double)L_14));
		double L_15 = V_7;
		double L_16 = bankers_round(L_15);
		V_9 = (((int32_t)((int32_t)L_16)));
		double L_17 = V_8;
		double L_18 = bankers_round(L_17);
		V_10 = (((int32_t)((int32_t)L_18)));
		DoubleU5BU5D_t3413330114* L_19 = ((DoubleU5BU5D_t3413330114*)SZArrayNew(DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var, (uint32_t)2));
		double L_20 = V_7;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)L_20);
		DoubleU5BU5D_t3413330114* L_21 = L_19;
		double L_22 = V_8;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)L_22);
		int32_t L_23 = Rotator_Quadrent_m2459454899(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		V_11 = L_23;
		int32_t L_24 = V_11;
		if (L_24)
		{
			goto IL_00be;
		}
	}
	{
		List_1_t3628304265 * L_25 = V_0;
		int32_t L_26 = V_9;
		int32_t L_27 = V_10;
		Vector2_t2156229523  L_28;
		memset(&L_28, 0, sizeof(L_28));
		Vector2__ctor_m3970636864((&L_28), (((float)((float)L_26))), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1))))), /*hidden argument*/NULL);
		NullCheck(L_25);
		List_1_Add_m2298161512(L_25, L_28, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		List_1_t3628304265 * L_29 = V_0;
		int32_t L_30 = V_9;
		int32_t L_31 = V_10;
		Vector2_t2156229523  L_32;
		memset(&L_32, 0, sizeof(L_32));
		Vector2__ctor_m3970636864((&L_32), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1))))), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1))))), /*hidden argument*/NULL);
		NullCheck(L_29);
		List_1_Add_m2298161512(L_29, L_32, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		List_1_t3628304265 * L_33 = V_0;
		int32_t L_34 = V_9;
		int32_t L_35 = V_10;
		Vector2_t2156229523  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Vector2__ctor_m3970636864((&L_36), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1))))), (((float)((float)L_35))), /*hidden argument*/NULL);
		NullCheck(L_33);
		List_1_Add_m2298161512(L_33, L_36, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		goto IL_0211;
	}

IL_00be:
	{
		int32_t L_37 = V_11;
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_00de;
		}
	}
	{
		List_1_t3628304265 * L_38 = V_0;
		int32_t L_39 = V_9;
		int32_t L_40 = V_10;
		Vector2_t2156229523  L_41;
		memset(&L_41, 0, sizeof(L_41));
		Vector2__ctor_m3970636864((&L_41), (((float)((float)L_39))), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1))))), /*hidden argument*/NULL);
		NullCheck(L_38);
		List_1_Add_m2298161512(L_38, L_41, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		goto IL_0211;
	}

IL_00de:
	{
		int32_t L_42 = V_11;
		if ((!(((uint32_t)L_42) == ((uint32_t)2))))
		{
			goto IL_0126;
		}
	}
	{
		List_1_t3628304265 * L_43 = V_0;
		int32_t L_44 = V_9;
		int32_t L_45 = V_10;
		Vector2_t2156229523  L_46;
		memset(&L_46, 0, sizeof(L_46));
		Vector2__ctor_m3970636864((&L_46), (((float)((float)L_44))), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1))))), /*hidden argument*/NULL);
		NullCheck(L_43);
		List_1_Add_m2298161512(L_43, L_46, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		List_1_t3628304265 * L_47 = V_0;
		int32_t L_48 = V_9;
		int32_t L_49 = V_10;
		Vector2_t2156229523  L_50;
		memset(&L_50, 0, sizeof(L_50));
		Vector2__ctor_m3970636864((&L_50), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1))))), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1))))), /*hidden argument*/NULL);
		NullCheck(L_47);
		List_1_Add_m2298161512(L_47, L_50, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		List_1_t3628304265 * L_51 = V_0;
		int32_t L_52 = V_9;
		int32_t L_53 = V_10;
		Vector2_t2156229523  L_54;
		memset(&L_54, 0, sizeof(L_54));
		Vector2__ctor_m3970636864((&L_54), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1))))), (((float)((float)L_53))), /*hidden argument*/NULL);
		NullCheck(L_51);
		List_1_Add_m2298161512(L_51, L_54, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		goto IL_0211;
	}

IL_0126:
	{
		int32_t L_55 = V_11;
		if ((!(((uint32_t)L_55) == ((uint32_t)3))))
		{
			goto IL_0146;
		}
	}
	{
		List_1_t3628304265 * L_56 = V_0;
		int32_t L_57 = V_9;
		int32_t L_58 = V_10;
		Vector2_t2156229523  L_59;
		memset(&L_59, 0, sizeof(L_59));
		Vector2__ctor_m3970636864((&L_59), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)1))))), (((float)((float)L_58))), /*hidden argument*/NULL);
		NullCheck(L_56);
		List_1_Add_m2298161512(L_56, L_59, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		goto IL_0211;
	}

IL_0146:
	{
		int32_t L_60 = V_11;
		if ((!(((uint32_t)L_60) == ((uint32_t)5))))
		{
			goto IL_0166;
		}
	}
	{
		List_1_t3628304265 * L_61 = V_0;
		int32_t L_62 = V_9;
		int32_t L_63 = V_10;
		Vector2_t2156229523  L_64;
		memset(&L_64, 0, sizeof(L_64));
		Vector2__ctor_m3970636864((&L_64), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1))))), (((float)((float)L_63))), /*hidden argument*/NULL);
		NullCheck(L_61);
		List_1_Add_m2298161512(L_61, L_64, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		goto IL_0211;
	}

IL_0166:
	{
		int32_t L_65 = V_11;
		if ((!(((uint32_t)L_65) == ((uint32_t)6))))
		{
			goto IL_01ae;
		}
	}
	{
		List_1_t3628304265 * L_66 = V_0;
		int32_t L_67 = V_9;
		int32_t L_68 = V_10;
		Vector2_t2156229523  L_69;
		memset(&L_69, 0, sizeof(L_69));
		Vector2__ctor_m3970636864((&L_69), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)1))))), (((float)((float)L_68))), /*hidden argument*/NULL);
		NullCheck(L_66);
		List_1_Add_m2298161512(L_66, L_69, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		List_1_t3628304265 * L_70 = V_0;
		int32_t L_71 = V_9;
		int32_t L_72 = V_10;
		Vector2_t2156229523  L_73;
		memset(&L_73, 0, sizeof(L_73));
		Vector2__ctor_m3970636864((&L_73), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_71, (int32_t)1))))), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_72, (int32_t)1))))), /*hidden argument*/NULL);
		NullCheck(L_70);
		List_1_Add_m2298161512(L_70, L_73, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		List_1_t3628304265 * L_74 = V_0;
		int32_t L_75 = V_9;
		int32_t L_76 = V_10;
		Vector2_t2156229523  L_77;
		memset(&L_77, 0, sizeof(L_77));
		Vector2__ctor_m3970636864((&L_77), (((float)((float)L_75))), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_76, (int32_t)1))))), /*hidden argument*/NULL);
		NullCheck(L_74);
		List_1_Add_m2298161512(L_74, L_77, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		goto IL_0211;
	}

IL_01ae:
	{
		int32_t L_78 = V_11;
		if ((!(((uint32_t)L_78) == ((uint32_t)7))))
		{
			goto IL_01ce;
		}
	}
	{
		List_1_t3628304265 * L_79 = V_0;
		int32_t L_80 = V_9;
		int32_t L_81 = V_10;
		Vector2_t2156229523  L_82;
		memset(&L_82, 0, sizeof(L_82));
		Vector2__ctor_m3970636864((&L_82), (((float)((float)L_80))), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)1))))), /*hidden argument*/NULL);
		NullCheck(L_79);
		List_1_Add_m2298161512(L_79, L_82, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		goto IL_0211;
	}

IL_01ce:
	{
		int32_t L_83 = V_11;
		if ((!(((uint32_t)L_83) == ((uint32_t)8))))
		{
			goto IL_0211;
		}
	}
	{
		List_1_t3628304265 * L_84 = V_0;
		int32_t L_85 = V_9;
		int32_t L_86 = V_10;
		Vector2_t2156229523  L_87;
		memset(&L_87, 0, sizeof(L_87));
		Vector2__ctor_m3970636864((&L_87), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1))))), (((float)((float)L_86))), /*hidden argument*/NULL);
		NullCheck(L_84);
		List_1_Add_m2298161512(L_84, L_87, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		List_1_t3628304265 * L_88 = V_0;
		int32_t L_89 = V_9;
		int32_t L_90 = V_10;
		Vector2_t2156229523  L_91;
		memset(&L_91, 0, sizeof(L_91));
		Vector2__ctor_m3970636864((&L_91), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1))))), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_90, (int32_t)1))))), /*hidden argument*/NULL);
		NullCheck(L_88);
		List_1_Add_m2298161512(L_88, L_91, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		List_1_t3628304265 * L_92 = V_0;
		int32_t L_93 = V_9;
		int32_t L_94 = V_10;
		Vector2_t2156229523  L_95;
		memset(&L_95, 0, sizeof(L_95));
		Vector2__ctor_m3970636864((&L_95), (((float)((float)L_93))), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_94, (int32_t)1))))), /*hidden argument*/NULL);
		NullCheck(L_92);
		List_1_Add_m2298161512(L_92, L_95, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
	}

IL_0211:
	{
		List_1_t3628304265 * L_96 = V_0;
		int32_t L_97 = V_9;
		int32_t L_98 = V_10;
		Vector2_t2156229523  L_99;
		memset(&L_99, 0, sizeof(L_99));
		Vector2__ctor_m3970636864((&L_99), (((float)((float)L_97))), (((float)((float)L_98))), /*hidden argument*/NULL);
		NullCheck(L_96);
		List_1_Add_m2298161512(L_96, L_99, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
		int32_t L_100 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1));
	}

IL_0226:
	{
		int32_t L_101 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Rotator_t2029754672_il2cpp_TypeInfo_var);
		int32_t L_102 = ((Rotator_t2029754672_StaticFields*)il2cpp_codegen_static_fields_for(Rotator_t2029754672_il2cpp_TypeInfo_var))->get_STEPS_6();
		if ((((int32_t)L_101) <= ((int32_t)L_102)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t3628304265 * L_103 = V_0;
		return L_103;
	}
}
// System.Void Rotator::.cctor()
extern "C"  void Rotator__cctor_m2055196742 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rotator__cctor_m2055196742_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Rotator_t2029754672_StaticFields*)il2cpp_codegen_static_fields_for(Rotator_t2029754672_il2cpp_TypeInfo_var))->set_STEPS_6(((int32_t)50));
		int32_t L_0 = ((Rotator_t2029754672_StaticFields*)il2cpp_codegen_static_fields_for(Rotator_t2029754672_il2cpp_TypeInfo_var))->get_STEPS_6();
		((Rotator_t2029754672_StaticFields*)il2cpp_codegen_static_fields_for(Rotator_t2029754672_il2cpp_TypeInfo_var))->set_ANG_STEP_7(((double)((double)(6.2831853071795862)/(double)(((double)((double)L_0))))));
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
// System.Void RunUI::.ctor()
extern "C"  void RunUI__ctor_m3966603924 (RunUI_t3214653273 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RunUI::Start()
extern "C"  void RunUI_Start_m2306852156 (RunUI_t3214653273 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RunUI_Start_m2306852156_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_playPauseBtn_2();
		intptr_t L_1 = (intptr_t)RunUI_U3CStartU3Em__0_m3037021528_RuntimeMethod_var;
		UnityAction_t3245792599 * L_2 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_2, __this, L_1, /*hidden argument*/NULL);
		RunUI_SetupButton_m982209168(__this, L_0, L_2, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_resetBtn_4();
		intptr_t L_4 = (intptr_t)RunUI_U3CStartU3Em__1_m3037087064_RuntimeMethod_var;
		UnityAction_t3245792599 * L_5 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_5, __this, L_4, /*hidden argument*/NULL);
		RunUI_SetupButton_m982209168(__this, L_3, L_5, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = __this->get_clearBtn_5();
		intptr_t L_7 = (intptr_t)RunUI_U3CStartU3Em__2_m3037152600_RuntimeMethod_var;
		UnityAction_t3245792599 * L_8 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_8, __this, L_7, /*hidden argument*/NULL);
		RunUI_SetupButton_m982209168(__this, L_6, L_8, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_9 = __this->get_fastForwardBtn_3();
		intptr_t L_10 = (intptr_t)RunUI_U3CStartU3Em__3_m3037218136_RuntimeMethod_var;
		UnityAction_t3245792599 * L_11 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_11, __this, L_10, /*hidden argument*/NULL);
		RunUI_SetupButton_m982209168(__this, L_9, L_11, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = __this->get_playPauseBtn_2();
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_t3600365921 * L_14 = Transform_GetChild_m1092972975(L_13, 0, /*hidden argument*/NULL);
		NullCheck(L_14);
		Text_t1901882714 * L_15 = Component_GetComponent_TisText_t1901882714_m4196288697(L_14, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		__this->set_playPause_6(L_15);
		return;
	}
}
// System.Void RunUI::SetupButton(UnityEngine.GameObject,UnityEngine.Events.UnityAction)
extern "C"  void RunUI_SetupButton_m982209168 (RunUI_t3214653273 * __this, GameObject_t1113636619 * ___btnGO0, UnityAction_t3245792599 * ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RunUI_SetupButton_m982209168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Button_t4055032469 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___btnGO0;
		NullCheck(L_0);
		Button_t4055032469 * L_1 = GameObject_GetComponent_TisButton_t4055032469_m1515138076(L_0, /*hidden argument*/GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var);
		V_0 = L_1;
		Button_t4055032469 * L_2 = V_0;
		NullCheck(L_2);
		ButtonClickedEvent_t48803504 * L_3 = Button_get_onClick_m2332132945(L_2, /*hidden argument*/NULL);
		UnityAction_t3245792599 * L_4 = ___method1;
		NullCheck(L_3);
		UnityEvent_AddListener_m2276267359(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RunUI::PlayPause()
extern "C"  void RunUI_PlayPause_m98323879 (RunUI_t3214653273 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = RunUI_Running_m3755454242(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		RunUI_Play_m892847452(__this, /*hidden argument*/NULL);
		goto IL_001c;
	}

IL_0016:
	{
		RunUI_Pause_m212226886(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void RunUI::Play()
extern "C"  void RunUI_Play_m892847452 (RunUI_t3214653273 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RunUI_Play_m892847452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MachineUI_t252077060 * L_0 = UI_get_Machines_m4279099061(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		MachineUI_Hide_m391306339(L_0, /*hidden argument*/NULL);
		RunUI_Show_m4111171986(__this, /*hidden argument*/NULL);
		Text_t1901882714 * L_1 = __this->get_playPause_6();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral1953642114);
		StairMaster_t3581666356 * L_2 = GameManager_get_StairMaster_m618266316(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		StairMaster_Run_m4065504612(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RunUI::Pause()
extern "C"  void RunUI_Pause_m212226886 (RunUI_t3214653273 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RunUI_Pause_m212226886_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_playPause_6();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3446402837);
		StairMaster_t3581666356 * L_1 = GameManager_get_StairMaster_m618266316(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		StairMaster_Pause_m996512045(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RunUI::FastForward()
extern "C"  void RunUI_FastForward_m3774791371 (RunUI_t3214653273 * __this, const RuntimeMethod* method)
{
	{
		StairMaster_t3581666356 * L_0 = GameManager_get_StairMaster_m618266316(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = StairMaster_IsSlow_m1088814165(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		StairMaster_t3581666356 * L_2 = GameManager_get_StairMaster_m618266316(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		StairMaster_FastForward_m37415698(L_2, /*hidden argument*/NULL);
		goto IL_0028;
	}

IL_001e:
	{
		StairMaster_t3581666356 * L_3 = GameManager_get_StairMaster_m618266316(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		StairMaster_SlowDown_m3099542786(L_3, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void RunUI::Reset()
extern "C"  void RunUI_Reset_m223038848 (RunUI_t3214653273 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RunUI_Reset_m223038848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RunUI_Pause_m212226886(__this, /*hidden argument*/NULL);
		Action_1_t3506550834 * L_0 = ((RunUI_t3214653273_StaticFields*)il2cpp_codegen_static_fields_for(RunUI_t3214653273_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_7();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		intptr_t L_1 = (intptr_t)RunUI_U3CResetU3Em__4_m2806862794_RuntimeMethod_var;
		Action_1_t3506550834 * L_2 = (Action_1_t3506550834 *)il2cpp_codegen_object_new(Action_1_t3506550834_il2cpp_TypeInfo_var);
		Action_1__ctor_m3887988901(L_2, NULL, L_1, /*hidden argument*/Action_1__ctor_m3887988901_RuntimeMethod_var);
		((RunUI_t3214653273_StaticFields*)il2cpp_codegen_static_fields_for(RunUI_t3214653273_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_7(L_2);
	}

IL_001e:
	{
		Action_1_t3506550834 * L_3 = ((RunUI_t3214653273_StaticFields*)il2cpp_codegen_static_fields_for(RunUI_t3214653273_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_7();
		GridOf_1_ForEach_m2734291113(NULL /*static, unused*/, L_3, /*hidden argument*/GridOf_1_ForEach_m2734291113_RuntimeMethod_var);
		GridOf_1_RemoveAll_m1714554047(NULL /*static, unused*/, /*hidden argument*/GridOf_1_RemoveAll_m1714554047_RuntimeMethod_var);
		RunUI_Hide_m2334347019(__this, /*hidden argument*/NULL);
		MachineUI_t252077060 * L_4 = UI_get_Machines_m4279099061(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		MachineUI_Show_m1108114314(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RunUI::Clear()
extern "C"  void RunUI_Clear_m512761987 (RunUI_t3214653273 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RunUI_Clear_m512761987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RunUI_Reset_m223038848(__this, /*hidden argument*/NULL);
		Action_1_t4294877337 * L_0 = ((RunUI_t3214653273_StaticFields*)il2cpp_codegen_static_fields_for(RunUI_t3214653273_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_8();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		intptr_t L_1 = (intptr_t)RunUI_U3CClearU3Em__5_m477827032_RuntimeMethod_var;
		Action_1_t4294877337 * L_2 = (Action_1_t4294877337 *)il2cpp_codegen_object_new(Action_1_t4294877337_il2cpp_TypeInfo_var);
		Action_1__ctor_m3536267445(L_2, NULL, L_1, /*hidden argument*/Action_1__ctor_m3536267445_RuntimeMethod_var);
		((RunUI_t3214653273_StaticFields*)il2cpp_codegen_static_fields_for(RunUI_t3214653273_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_8(L_2);
	}

IL_001e:
	{
		Action_1_t4294877337 * L_3 = ((RunUI_t3214653273_StaticFields*)il2cpp_codegen_static_fields_for(RunUI_t3214653273_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_8();
		GridOf_1_ForEach_m659143872(NULL /*static, unused*/, L_3, /*hidden argument*/GridOf_1_ForEach_m659143872_RuntimeMethod_var);
		return;
	}
}
// System.Void RunUI::Show()
extern "C"  void RunUI_Show_m4111171986 (RunUI_t3214653273 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_fastForwardBtn_3();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_resetBtn_4();
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_clearBtn_5();
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RunUI::Hide()
extern "C"  void RunUI_Hide_m2334347019 (RunUI_t3214653273 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_fastForwardBtn_3();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_resetBtn_4();
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_clearBtn_5();
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean RunUI::Running()
extern "C"  bool RunUI_Running_m3755454242 (RunUI_t3214653273 * __this, const RuntimeMethod* method)
{
	{
		StairMaster_t3581666356 * L_0 = GameManager_get_StairMaster_m618266316(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = L_0->get_running_6();
		return L_1;
	}
}
// System.Void RunUI::<Start>m__0()
extern "C"  void RunUI_U3CStartU3Em__0_m3037021528 (RunUI_t3214653273 * __this, const RuntimeMethod* method)
{
	{
		RunUI_PlayPause_m98323879(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RunUI::<Start>m__1()
extern "C"  void RunUI_U3CStartU3Em__1_m3037087064 (RunUI_t3214653273 * __this, const RuntimeMethod* method)
{
	{
		RunUI_Reset_m223038848(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RunUI::<Start>m__2()
extern "C"  void RunUI_U3CStartU3Em__2_m3037152600 (RunUI_t3214653273 * __this, const RuntimeMethod* method)
{
	{
		RunUI_Clear_m512761987(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RunUI::<Start>m__3()
extern "C"  void RunUI_U3CStartU3Em__3_m3037218136 (RunUI_t3214653273 * __this, const RuntimeMethod* method)
{
	{
		RunUI_FastForward_m3774791371(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RunUI::<Reset>m__4(Crate)
extern "C"  void RunUI_U3CResetU3Em__4_m2806862794 (RuntimeObject * __this /* static, unused */, Crate_t3334083239 * ___crate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RunUI_U3CResetU3Em__4_m2806862794_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Crate_t3334083239 * L_0 = ___crate0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RunUI::<Clear>m__5(Machine)
extern "C"  void RunUI_U3CClearU3Em__5_m477827032 (RuntimeObject * __this /* static, unused */, Machine_t4122409742 * ___machine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RunUI_U3CClearU3Em__5_m477827032_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Machine_t4122409742 * L_0 = ___machine0;
		NullCheck(L_0);
		bool L_1 = L_0->get_wasPlaced_4();
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Machine_t4122409742 * L_2 = ___machine0;
		NullCheck(L_2);
		Vector2_t2156229523  L_3 = GridThing_get_xy_m738839343(L_2, /*hidden argument*/NULL);
		GridOf_1_Remove_m3477036051(NULL /*static, unused*/, L_3, /*hidden argument*/GridOf_1_Remove_m3477036051_RuntimeMethod_var);
		Machine_t4122409742 * L_4 = ___machine0;
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0022:
	{
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
// System.Void SelectUI::.ctor()
extern "C"  void SelectUI__ctor_m2819710662 (SelectUI_t1349636119 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SelectUI::Start()
extern "C"  void SelectUI_Start_m3194522008 (SelectUI_t1349636119 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SelectUI_Start_m3194522008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObjectU5BU5D_t3328599146* L_0 = ((GameObjectU5BU5D_t3328599146*)SZArrayNew(GameObjectU5BU5D_t3328599146_il2cpp_TypeInfo_var, (uint32_t)3));
		GameObject_t1113636619 * L_1 = __this->get_turnLeftBtn_3();
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_t1113636619 *)L_1);
		GameObjectU5BU5D_t3328599146* L_2 = L_0;
		GameObject_t1113636619 * L_3 = __this->get_turnRightBtn_4();
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (GameObject_t1113636619 *)L_3);
		GameObjectU5BU5D_t3328599146* L_4 = L_2;
		GameObject_t1113636619 * L_5 = __this->get_deleteBtn_5();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (GameObject_t1113636619 *)L_5);
		__this->set_buttons_2(L_4);
		GameObject_t1113636619 * L_6 = __this->get_turnLeftBtn_3();
		intptr_t L_7 = (intptr_t)SelectUI_U3CStartU3Em__0_m4073274552_RuntimeMethod_var;
		UnityAction_t3245792599 * L_8 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_8, __this, L_7, /*hidden argument*/NULL);
		SelectUI_SetupButton_m3578307291(__this, L_6, L_8, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_9 = __this->get_turnRightBtn_4();
		intptr_t L_10 = (intptr_t)SelectUI_U3CStartU3Em__1_m4073274553_RuntimeMethod_var;
		UnityAction_t3245792599 * L_11 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_11, __this, L_10, /*hidden argument*/NULL);
		SelectUI_SetupButton_m3578307291(__this, L_9, L_11, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = __this->get_deleteBtn_5();
		intptr_t L_13 = (intptr_t)SelectUI_U3CStartU3Em__2_m4073274550_RuntimeMethod_var;
		UnityAction_t3245792599 * L_14 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_14, __this, L_13, /*hidden argument*/NULL);
		SelectUI_SetupButton_m3578307291(__this, L_12, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SelectUI::SetupButton(UnityEngine.GameObject,UnityEngine.Events.UnityAction)
extern "C"  void SelectUI_SetupButton_m3578307291 (SelectUI_t1349636119 * __this, GameObject_t1113636619 * ___btnGO0, UnityAction_t3245792599 * ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SelectUI_SetupButton_m3578307291_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Button_t4055032469 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___btnGO0;
		NullCheck(L_0);
		Button_t4055032469 * L_1 = GameObject_GetComponent_TisButton_t4055032469_m1515138076(L_0, /*hidden argument*/GameObject_GetComponent_TisButton_t4055032469_m1515138076_RuntimeMethod_var);
		V_0 = L_1;
		Button_t4055032469 * L_2 = V_0;
		NullCheck(L_2);
		ButtonClickedEvent_t48803504 * L_3 = Button_get_onClick_m2332132945(L_2, /*hidden argument*/NULL);
		UnityAction_t3245792599 * L_4 = ___method1;
		NullCheck(L_3);
		UnityEvent_AddListener_m2276267359(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SelectUI::Select(Machine)
extern "C"  void SelectUI_Select_m973328249 (SelectUI_t1349636119 * __this, Machine_t4122409742 * ___machine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SelectUI_Select_m973328249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Machine_t4122409742 * L_0 = ___machine0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		__this->set_selectedMachineGob_6(L_1);
		Camera_t4157153871 * L_2 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Machine_t4122409742 * L_3 = ___machine0;
		NullCheck(L_3);
		Vector2_t2156229523  L_4 = GridThing_get_xy_m738839343(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_6 = Camera_WorldToScreenPoint_m3726311023(L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = V_0;
		NullCheck(L_7);
		Transform_set_position_m3387557959(L_7, L_8, /*hidden argument*/NULL);
		SelectUI_Show_m1676478064(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SelectUI::Deselect()
extern "C"  void SelectUI_Deselect_m2896710055 (SelectUI_t1349636119 * __this, const RuntimeMethod* method)
{
	{
		__this->set_selectedMachineGob_6((GameObject_t1113636619 *)NULL);
		SelectUI_Hide_m1862894654(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SelectUI::Turn(System.Boolean)
extern "C"  void SelectUI_Turn_m2502060509 (SelectUI_t1349636119 * __this, bool ___clockwise0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SelectUI_Turn_m2502060509_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Machine_t4122409742 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_selectedMachineGob_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_selectedMachineGob_6();
		NullCheck(L_2);
		Machine_t4122409742 * L_3 = GameObject_GetComponent_TisMachine_t4122409742_m396407119(L_2, /*hidden argument*/GameObject_GetComponent_TisMachine_t4122409742_m396407119_RuntimeMethod_var);
		V_0 = L_3;
		Machine_t4122409742 * L_4 = V_0;
		bool L_5 = ___clockwise0;
		NullCheck(L_4);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void Machine::Rotate(System.Boolean) */, L_4, L_5);
	}

IL_0023:
	{
		return;
	}
}
// System.Void SelectUI::Delete()
extern "C"  void SelectUI_Delete_m4055503885 (SelectUI_t1349636119 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SelectUI_Delete_m4055503885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Machine_t4122409742 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_selectedMachineGob_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_selectedMachineGob_6();
		NullCheck(L_2);
		Machine_t4122409742 * L_3 = GameObject_GetComponent_TisMachine_t4122409742_m396407119(L_2, /*hidden argument*/GameObject_GetComponent_TisMachine_t4122409742_m396407119_RuntimeMethod_var);
		V_0 = L_3;
		Machine_t4122409742 * L_4 = V_0;
		NullCheck(L_4);
		Machine_Delete_m3808337440(L_4, /*hidden argument*/NULL);
		SelectUI_Hide_m1862894654(__this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void SelectUI::Show()
extern "C"  void SelectUI_Show_m1676478064 (SelectUI_t1349636119 * __this, const RuntimeMethod* method)
{
	GameObject_t1113636619 * V_0 = NULL;
	GameObjectU5BU5D_t3328599146* V_1 = NULL;
	int32_t V_2 = 0;
	{
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_buttons_2();
		V_1 = L_0;
		V_2 = 0;
		goto IL_001d;
	}

IL_000e:
	{
		GameObjectU5BU5D_t3328599146* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t1113636619 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = V_0;
		NullCheck(L_5);
		GameObject_SetActive_m796801857(L_5, (bool)1, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001d:
	{
		int32_t L_7 = V_2;
		GameObjectU5BU5D_t3328599146* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void SelectUI::Hide()
extern "C"  void SelectUI_Hide_m1862894654 (SelectUI_t1349636119 * __this, const RuntimeMethod* method)
{
	GameObject_t1113636619 * V_0 = NULL;
	GameObjectU5BU5D_t3328599146* V_1 = NULL;
	int32_t V_2 = 0;
	{
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_buttons_2();
		V_1 = L_0;
		V_2 = 0;
		goto IL_001d;
	}

IL_000e:
	{
		GameObjectU5BU5D_t3328599146* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t1113636619 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = V_0;
		NullCheck(L_5);
		GameObject_SetActive_m796801857(L_5, (bool)0, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001d:
	{
		int32_t L_7 = V_2;
		GameObjectU5BU5D_t3328599146* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void SelectUI::<Start>m__0()
extern "C"  void SelectUI_U3CStartU3Em__0_m4073274552 (SelectUI_t1349636119 * __this, const RuntimeMethod* method)
{
	{
		SelectUI_Turn_m2502060509(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SelectUI::<Start>m__1()
extern "C"  void SelectUI_U3CStartU3Em__1_m4073274553 (SelectUI_t1349636119 * __this, const RuntimeMethod* method)
{
	{
		SelectUI_Turn_m2502060509(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SelectUI::<Start>m__2()
extern "C"  void SelectUI_U3CStartU3Em__2_m4073274550 (SelectUI_t1349636119 * __this, const RuntimeMethod* method)
{
	{
		SelectUI_Delete_m4055503885(__this, /*hidden argument*/NULL);
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
// System.Void Sensor::.ctor()
extern "C"  void Sensor__ctor_m1042152069 (Sensor_t1745335964 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Sensor__ctor_m1042152069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Wire_t1115128131_il2cpp_TypeInfo_var);
		Wire__ctor_m3025492090(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sensor::Start()
extern "C"  void Sensor_Start_m4276925611 (Sensor_t1745335964 * __this, const RuntimeMethod* method)
{
	{
		Wire_Start_m2850373620(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sensor::Rotate(System.Boolean)
extern "C"  void Sensor_Rotate_m3928904621 (Sensor_t1745335964 * __this, bool ___clockwise0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464 * G_B2_0 = NULL;
	Vector3_t3722313464 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Vector3_t3722313464 * G_B3_1 = NULL;
	{
		Vector2_t2156229523  L_0 = __this->get_direction_7();
		bool L_1 = ___clockwise0;
		Vector2_t2156229523  L_2 = Machine_RotateVector_m1548302461(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->set_direction_7(L_2);
		Vector3__ctor_m3353183577((&V_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		bool L_3 = ___clockwise0;
		G_B1_0 = (&V_0);
		if (!L_3)
		{
			G_B2_0 = (&V_0);
			goto IL_0038;
		}
	}
	{
		G_B3_0 = ((int32_t)-90);
		G_B3_1 = G_B1_0;
		goto IL_003a;
	}

IL_0038:
	{
		G_B3_0 = ((int32_t)90);
		G_B3_1 = G_B2_0;
	}

IL_003a:
	{
		G_B3_1->set_z_3((((float)((float)G_B3_0))));
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = V_0;
		NullCheck(L_4);
		Transform_Rotate_m1886816857(L_4, L_5, 0, /*hidden argument*/NULL);
		MachineUI_t252077060 * L_6 = UI_get_Machines_m4279099061(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = L_6->get_sensorPrefab_13();
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = V_0;
		NullCheck(L_8);
		Transform_Rotate_m1886816857(L_8, L_9, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Sensor::Activated()
extern "C"  bool Sensor_Activated_m2355377676 (Sensor_t1745335964 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Sensor_Activated_m2355377676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t2156229523  L_0 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_1 = __this->get_direction_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		bool L_3 = GridOf_1_ElementAt_m3269700101(NULL /*static, unused*/, L_2, /*hidden argument*/GridOf_1_ElementAt_m3269700101_RuntimeMethod_var);
		return L_3;
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
// System.Void StairMaster::.ctor()
extern "C"  void StairMaster__ctor_m1362067779 (StairMaster_t3581666356 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StairMaster__ctor_m1362067779_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_stepSize_2((0.5f));
		List_1_t3720455162 * L_0 = (List_1_t3720455162 *)il2cpp_codegen_object_new(List_1_t3720455162_il2cpp_TypeInfo_var);
		List_1__ctor_m3942288599(L_0, /*hidden argument*/List_1__ctor_m3942288599_RuntimeMethod_var);
		__this->set_generators_7(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StairMaster::Run()
extern "C"  void StairMaster_Run_m4065504612 (StairMaster_t3581666356 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3720455162 * L_0 = StairMaster_GetGenerators_m4205969117(__this, /*hidden argument*/NULL);
		__this->set_generators_7(L_0);
		__this->set_running_6((bool)1);
		return;
	}
}
// System.Void StairMaster::Pause()
extern "C"  void StairMaster_Pause_m996512045 (StairMaster_t3581666356 * __this, const RuntimeMethod* method)
{
	{
		__this->set_running_6((bool)0);
		return;
	}
}
// System.Boolean StairMaster::IsSlow()
extern "C"  bool StairMaster_IsSlow_m1088814165 (StairMaster_t3581666356 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_stepSize_2();
		return (bool)((((float)L_0) == ((float)(0.5f)))? 1 : 0);
	}
}
// System.Void StairMaster::FastForward()
extern "C"  void StairMaster_FastForward_m37415698 (StairMaster_t3581666356 * __this, const RuntimeMethod* method)
{
	{
		__this->set_stepSize_2((0.3f));
		return;
	}
}
// System.Void StairMaster::SlowDown()
extern "C"  void StairMaster_SlowDown_m3099542786 (StairMaster_t3581666356 * __this, const RuntimeMethod* method)
{
	{
		__this->set_stepSize_2((0.5f));
		return;
	}
}
// System.Void StairMaster::Update()
extern "C"  void StairMaster_Update_m3220007331 (StairMaster_t3581666356 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_running_6();
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = StairMaster_IsNewStep_m3564754376(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		StairMaster_OnStepStart_m3732032887(__this, /*hidden argument*/NULL);
		StairMaster_ApplyForces_m923564638(__this, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Boolean StairMaster::IsNewStep()
extern "C"  bool StairMaster_IsNewStep_m3564754376 (StairMaster_t3581666356 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_stepTime_5();
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_stepTime_5(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		float L_2 = __this->get_stepTime_5();
		float L_3 = __this->get_stepSize_2();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		__this->set_stepTime_5((0.0f));
		return (bool)1;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// System.Void StairMaster::OnStepStart()
extern "C"  void StairMaster_OnStepStart_m3732032887 (StairMaster_t3581666356 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StairMaster_OnStepStart_m3732032887_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t3506550834 * L_0 = ((StairMaster_t3581666356_StaticFields*)il2cpp_codegen_static_fields_for(StairMaster_t3581666356_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_8();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		intptr_t L_1 = (intptr_t)StairMaster_U3COnStepStartU3Em__0_m698338935_RuntimeMethod_var;
		Action_1_t3506550834 * L_2 = (Action_1_t3506550834 *)il2cpp_codegen_object_new(Action_1_t3506550834_il2cpp_TypeInfo_var);
		Action_1__ctor_m3887988901(L_2, NULL, L_1, /*hidden argument*/Action_1__ctor_m3887988901_RuntimeMethod_var);
		((StairMaster_t3581666356_StaticFields*)il2cpp_codegen_static_fields_for(StairMaster_t3581666356_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_8(L_2);
	}

IL_0018:
	{
		Action_1_t3506550834 * L_3 = ((StairMaster_t3581666356_StaticFields*)il2cpp_codegen_static_fields_for(StairMaster_t3581666356_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_8();
		GridOf_1_ForEach_m2734291113(NULL /*static, unused*/, L_3, /*hidden argument*/GridOf_1_ForEach_m2734291113_RuntimeMethod_var);
		Action_1_t1288424627 * L_4 = ((StairMaster_t3581666356_StaticFields*)il2cpp_codegen_static_fields_for(StairMaster_t3581666356_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_9();
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		intptr_t L_5 = (intptr_t)StairMaster_U3COnStepStartU3Em__1_m252000574_RuntimeMethod_var;
		Action_1_t1288424627 * L_6 = (Action_1_t1288424627 *)il2cpp_codegen_object_new(Action_1_t1288424627_il2cpp_TypeInfo_var);
		Action_1__ctor_m305965143(L_6, NULL, L_5, /*hidden argument*/Action_1__ctor_m305965143_RuntimeMethod_var);
		((StairMaster_t3581666356_StaticFields*)il2cpp_codegen_static_fields_for(StairMaster_t3581666356_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_9(L_6);
	}

IL_003a:
	{
		Action_1_t1288424627 * L_7 = ((StairMaster_t3581666356_StaticFields*)il2cpp_codegen_static_fields_for(StairMaster_t3581666356_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_9();
		Crates_ForEachGroup_m2669004922(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Action_1_t4294877337 * L_8 = ((StairMaster_t3581666356_StaticFields*)il2cpp_codegen_static_fields_for(StairMaster_t3581666356_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache2_10();
		if (L_8)
		{
			goto IL_005c;
		}
	}
	{
		intptr_t L_9 = (intptr_t)StairMaster_U3COnStepStartU3Em__2_m1955564271_RuntimeMethod_var;
		Action_1_t4294877337 * L_10 = (Action_1_t4294877337 *)il2cpp_codegen_object_new(Action_1_t4294877337_il2cpp_TypeInfo_var);
		Action_1__ctor_m3536267445(L_10, NULL, L_9, /*hidden argument*/Action_1__ctor_m3536267445_RuntimeMethod_var);
		((StairMaster_t3581666356_StaticFields*)il2cpp_codegen_static_fields_for(StairMaster_t3581666356_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache2_10(L_10);
	}

IL_005c:
	{
		Action_1_t4294877337 * L_11 = ((StairMaster_t3581666356_StaticFields*)il2cpp_codegen_static_fields_for(StairMaster_t3581666356_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache2_10();
		GridOf_1_ForEach_m659143872(NULL /*static, unused*/, L_11, /*hidden argument*/GridOf_1_ForEach_m659143872_RuntimeMethod_var);
		return;
	}
}
// System.Void StairMaster::ApplyForces()
extern "C"  void StairMaster_ApplyForces_m923564638 (StairMaster_t3581666356 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StairMaster_ApplyForces_m923564638_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t1288424627 * V_0 = NULL;
	{
		Action_1_t1288424627 * L_0 = ((StairMaster_t3581666356_StaticFields*)il2cpp_codegen_static_fields_for(StairMaster_t3581666356_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache3_11();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		intptr_t L_1 = (intptr_t)StairMaster_U3CApplyForcesU3Em__3_m2682308455_RuntimeMethod_var;
		Action_1_t1288424627 * L_2 = (Action_1_t1288424627 *)il2cpp_codegen_object_new(Action_1_t1288424627_il2cpp_TypeInfo_var);
		Action_1__ctor_m305965143(L_2, NULL, L_1, /*hidden argument*/Action_1__ctor_m305965143_RuntimeMethod_var);
		((StairMaster_t3581666356_StaticFields*)il2cpp_codegen_static_fields_for(StairMaster_t3581666356_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache3_11(L_2);
	}

IL_0018:
	{
		Action_1_t1288424627 * L_3 = ((StairMaster_t3581666356_StaticFields*)il2cpp_codegen_static_fields_for(StairMaster_t3581666356_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache3_11();
		V_0 = L_3;
		Action_1_t1288424627 * L_4 = V_0;
		Crates_ForEachGroup_m2669004922(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StairMaster::StepGenerators()
extern "C"  void StairMaster_StepGenerators_m2782568791 (StairMaster_t3581666356 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StairMaster_StepGenerators_m2782568791_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Generator_t2248380420 * V_0 = NULL;
	Enumerator_t1314731743  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3720455162 * L_0 = __this->get_generators_7();
		NullCheck(L_0);
		Enumerator_t1314731743  L_1 = List_1_GetEnumerator_m828876251(L_0, /*hidden argument*/List_1_GetEnumerator_m828876251_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_0011:
		{
			Generator_t2248380420 * L_2 = Enumerator_get_Current_m2888408249((&V_1), /*hidden argument*/Enumerator_get_Current_m2888408249_RuntimeMethod_var);
			V_0 = L_2;
			Generator_t2248380420 * L_3 = V_0;
			NullCheck(L_3);
			Generator_MakeCrate_m191444529(L_3, /*hidden argument*/NULL);
		}

IL_0020:
		{
			bool L_4 = Enumerator_MoveNext_m2974675826((&V_1), /*hidden argument*/Enumerator_MoveNext_m2974675826_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0011;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3668585393((&V_1), /*hidden argument*/Enumerator_Dispose_m3668585393_RuntimeMethod_var);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003f:
	{
		return;
	}
}
// System.Collections.Generic.List`1<Generator> StairMaster::GetGenerators()
extern "C"  List_1_t3720455162 * StairMaster_GetGenerators_m4205969117 (StairMaster_t3581666356 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StairMaster_GetGenerators_m4205969117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetGeneratorsU3Ec__AnonStorey0_t1713985753 * V_0 = NULL;
	{
		U3CGetGeneratorsU3Ec__AnonStorey0_t1713985753 * L_0 = (U3CGetGeneratorsU3Ec__AnonStorey0_t1713985753 *)il2cpp_codegen_object_new(U3CGetGeneratorsU3Ec__AnonStorey0_t1713985753_il2cpp_TypeInfo_var);
		U3CGetGeneratorsU3Ec__AnonStorey0__ctor_m2360027640(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetGeneratorsU3Ec__AnonStorey0_t1713985753 * L_1 = V_0;
		List_1_t3720455162 * L_2 = (List_1_t3720455162 *)il2cpp_codegen_object_new(List_1_t3720455162_il2cpp_TypeInfo_var);
		List_1__ctor_m3942288599(L_2, /*hidden argument*/List_1__ctor_m3942288599_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->set_list_0(L_2);
		U3CGetGeneratorsU3Ec__AnonStorey0_t1713985753 * L_3 = V_0;
		intptr_t L_4 = (intptr_t)U3CGetGeneratorsU3Ec__AnonStorey0_U3CU3Em__0_m2910384112_RuntimeMethod_var;
		Action_1_t4294877337 * L_5 = (Action_1_t4294877337 *)il2cpp_codegen_object_new(Action_1_t4294877337_il2cpp_TypeInfo_var);
		Action_1__ctor_m3536267445(L_5, L_3, L_4, /*hidden argument*/Action_1__ctor_m3536267445_RuntimeMethod_var);
		GridOf_1_ForEach_m659143872(NULL /*static, unused*/, L_5, /*hidden argument*/GridOf_1_ForEach_m659143872_RuntimeMethod_var);
		U3CGetGeneratorsU3Ec__AnonStorey0_t1713985753 * L_6 = V_0;
		NullCheck(L_6);
		List_1_t3720455162 * L_7 = L_6->get_list_0();
		return L_7;
	}
}
// System.Void StairMaster::<OnStepStart>m__0(Crate)
extern "C"  void StairMaster_U3COnStepStartU3Em__0_m698338935 (RuntimeObject * __this /* static, unused */, Crate_t3334083239 * ___crate0, const RuntimeMethod* method)
{
	{
		Crate_t3334083239 * L_0 = ___crate0;
		NullCheck(L_0);
		Crate_OnStepStart_m3222136400(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StairMaster::<OnStepStart>m__1(CrateGroup)
extern "C"  void StairMaster_U3COnStepStartU3Em__1_m252000574 (RuntimeObject * __this /* static, unused */, CrateGroup_t1115957032 * ___group0, const RuntimeMethod* method)
{
	{
		CrateGroup_t1115957032 * L_0 = ___group0;
		NullCheck(L_0);
		CrateGroup_OnStepStart_m2709797750(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StairMaster::<OnStepStart>m__2(Machine)
extern "C"  void StairMaster_U3COnStepStartU3Em__2_m1955564271 (RuntimeObject * __this /* static, unused */, Machine_t4122409742 * ___machine0, const RuntimeMethod* method)
{
	{
		Machine_t4122409742 * L_0 = ___machine0;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(7 /* System.Void Machine::OnStepStart() */, L_0);
		return;
	}
}
// System.Void StairMaster::<ApplyForces>m__3(CrateGroup)
extern "C"  void StairMaster_U3CApplyForcesU3Em__3_m2682308455 (RuntimeObject * __this /* static, unused */, CrateGroup_t1115957032 * ___group0, const RuntimeMethod* method)
{
	{
		CrateGroup_t1115957032 * L_0 = ___group0;
		NullCheck(L_0);
		CrateGroup_ApplyForces_m3042020236(L_0, /*hidden argument*/NULL);
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
// System.Void StairMaster/<GetGenerators>c__AnonStorey0::.ctor()
extern "C"  void U3CGetGeneratorsU3Ec__AnonStorey0__ctor_m2360027640 (U3CGetGeneratorsU3Ec__AnonStorey0_t1713985753 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StairMaster/<GetGenerators>c__AnonStorey0::<>m__0(Machine)
extern "C"  void U3CGetGeneratorsU3Ec__AnonStorey0_U3CU3Em__0_m2910384112 (U3CGetGeneratorsU3Ec__AnonStorey0_t1713985753 * __this, Machine_t4122409742 * ___machine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetGeneratorsU3Ec__AnonStorey0_U3CU3Em__0_m2910384112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Machine_t4122409742 * L_0 = ___machine0;
		if (!((Generator_t2248380420 *)IsInstClass((RuntimeObject*)L_0, Generator_t2248380420_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t3720455162 * L_1 = __this->get_list_0();
		Machine_t4122409742 * L_2 = ___machine0;
		NullCheck(L_1);
		List_1_Add_m3805783809(L_1, ((Generator_t2248380420 *)CastclassClass((RuntimeObject*)L_2, Generator_t2248380420_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Add_m3805783809_RuntimeMethod_var);
	}

IL_001c:
	{
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
// System.Void Tap::.ctor()
extern "C"  void Tap__ctor_m968157369 (Tap_t1232705552 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tap::Start()
extern "C"  void Tap_Start_m2868098987 (Tap_t1232705552 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tap_Start_m2868098987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_cameraGob_4();
		NullCheck(L_0);
		CameraMover_t2845631541 * L_1 = GameObject_GetComponent_TisCameraMover_t2845631541_m3015587433(L_0, /*hidden argument*/GameObject_GetComponent_TisCameraMover_t2845631541_m3015587433_RuntimeMethod_var);
		__this->set_cameraMover_5(L_1);
		return;
	}
}
// System.Void Tap::Update()
extern "C"  void Tap_Update_m2433900001 (Tap_t1232705552 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tap_Update_m2433900001_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		__this->set_isStarted_2(L_0);
		bool L_1 = Input_GetMouseButton_m513753021(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		__this->set_isHeld_3(L_1);
		Tap_HandleDrag_m2374621907(__this, /*hidden argument*/NULL);
		StairMaster_t3581666356 * L_2 = GameManager_get_StairMaster_m618266316(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = L_2->get_running_6();
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = __this->get_isStarted_2();
		if (!L_4)
		{
			goto IL_006e;
		}
	}
	{
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_006e;
		}
	}
	{
		bool L_6 = Tap_CanPlaceMachine_m1846831374(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		Tap_PlaceMachine_m1732139582(__this, /*hidden argument*/NULL);
	}

IL_004e:
	{
		bool L_7 = Tap_CanSelectMachine_m1727297178(__this, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		Tap_SelectMachine_m1748397180(__this, /*hidden argument*/NULL);
		goto IL_006e;
	}

IL_0064:
	{
		SelectUI_t1349636119 * L_8 = UI_get_Select_m3339981865(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		SelectUI_Deselect_m2896710055(L_8, /*hidden argument*/NULL);
	}

IL_006e:
	{
		bool L_9 = __this->get_isStarted_2();
		if (!L_9)
		{
			goto IL_00a3;
		}
	}
	{
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_00a3;
		}
	}
	{
		bool L_11 = Tap_IsPointerOverTag_m56860595(NULL /*static, unused*/, _stringLiteral344811725, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_00a3;
		}
	}
	{
		bool L_12 = Tap_CanSelectMachine_m1727297178(__this, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_00a3;
		}
	}
	{
		SelectUI_t1349636119 * L_13 = UI_get_Select_m3339981865(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		SelectUI_Deselect_m2896710055(L_13, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		return;
	}
}
// System.Void Tap::HandleDrag()
extern "C"  void Tap_HandleDrag_m2374621907 (Tap_t1232705552 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isStarted_2();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		CameraMover_t2845631541 * L_1 = __this->get_cameraMover_5();
		NullCheck(L_1);
		CameraMover_RecordDragStart_m4021900204(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		bool L_2 = Tap_CanDragCamera_m2104012931(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		CameraMover_t2845631541 * L_3 = __this->get_cameraMover_5();
		NullCheck(L_3);
		CameraMover_Move_m1495737743(L_3, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Boolean Tap::CanDragCamera()
extern "C"  bool Tap_CanDragCamera_m2104012931 (Tap_t1232705552 * __this, const RuntimeMethod* method)
{
	int32_t G_B4_0 = 0;
	{
		bool L_0 = __this->get_isHeld_3();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		bool L_1 = Tap_CanPlaceMachine_m1846831374(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		bool L_2 = Tap_CanSelectMachine_m1727297178(__this, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B4_0 = 0;
	}

IL_0022:
	{
		return (bool)G_B4_0;
	}
}
// System.Boolean Tap::CanPlaceMachine()
extern "C"  bool Tap_CanPlaceMachine_m1846831374 (Tap_t1232705552 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tap_CanPlaceMachine_m1846831374_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = Tap_IsPointerOverUI_m4063516749(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		MachineUI_t252077060 * L_1 = UI_get_Machines_m4279099061(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = L_1->get_toPlace_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		SelectUI_t1349636119 * L_4 = UI_get_Select_m3339981865(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = L_4->get_selectedMachineGob_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0039:
	{
		Vector2_t2156229523  L_7 = Tap_MouseWorldPosition_m3981404498(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_8 = Tap_RoundVector_m2973389852(__this, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Vector2_t2156229523  L_9 = V_0;
		bool L_10 = GridOf_1_ElementAt_m1892461303(NULL /*static, unused*/, L_9, /*hidden argument*/GridOf_1_ElementAt_m1892461303_RuntimeMethod_var);
		return (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Tap::PlaceMachine()
extern "C"  void Tap_PlaceMachine_m1732139582 (Tap_t1232705552 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tap_PlaceMachine_m1732139582_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	GameObject_t1113636619 * V_1 = NULL;
	Machine_t4122409742 * V_2 = NULL;
	{
		Vector2_t2156229523  L_0 = Tap_MouseWorldPosition_m3981404498(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_1 = Tap_RoundVector_m2973389852(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MachineUI_t252077060 * L_2 = UI_get_Machines_m4279099061(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_t1113636619 * L_3 = L_2->get_toPlace_15();
		Vector2_t2156229523  L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_6 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_7 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_3, L_5, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_1 = L_7;
		GameObject_t1113636619 * L_8 = V_1;
		NullCheck(L_8);
		Machine_t4122409742 * L_9 = GameObject_GetComponent_TisMachine_t4122409742_m396407119(L_8, /*hidden argument*/GameObject_GetComponent_TisMachine_t4122409742_m396407119_RuntimeMethod_var);
		V_2 = L_9;
		GameObject_t1113636619 * L_10 = V_1;
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		MachineUI_t252077060 * L_12 = UI_get_Machines_m4279099061(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_t1113636619 * L_13 = L_12->get_toPlace_15();
		NullCheck(L_13);
		Transform_t3600365921 * L_14 = GameObject_get_transform_m1369836730(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Quaternion_t2301928331  L_15 = Transform_get_rotation_m3502953881(L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_rotation_m3524318132(L_11, L_15, /*hidden argument*/NULL);
		Machine_t4122409742 * L_16 = V_2;
		NullCheck(L_16);
		L_16->set_wasPlaced_4((bool)1);
		return;
	}
}
// System.Boolean Tap::CanSelectMachine()
extern "C"  bool Tap_CanSelectMachine_m1727297178 (Tap_t1232705552 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tap_CanSelectMachine_m1727297178_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = Tap_IsPointerOverUI_m4063516749(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		Vector2_t2156229523  L_1 = Tap_MouseWorldPosition_m3981404498(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_2 = Tap_RoundVector_m2973389852(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2_t2156229523  L_3 = V_0;
		bool L_4 = GridOf_1_ElementAt_m1892461303(NULL /*static, unused*/, L_3, /*hidden argument*/GridOf_1_ElementAt_m1892461303_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void Tap::SelectMachine()
extern "C"  void Tap_SelectMachine_m1748397180 (Tap_t1232705552 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tap_SelectMachine_m1748397180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Machine_t4122409742 * V_1 = NULL;
	{
		Vector2_t2156229523  L_0 = Tap_MouseWorldPosition_m3981404498(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_1 = Tap_RoundVector_m2973389852(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector2_t2156229523  L_2 = V_0;
		Machine_t4122409742 * L_3 = GridOf_1_At_m3872141981(NULL /*static, unused*/, L_2, /*hidden argument*/GridOf_1_At_m3872141981_RuntimeMethod_var);
		V_1 = L_3;
		Machine_t4122409742 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get_wasPlaced_4();
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		SelectUI_t1349636119 * L_6 = UI_get_Select_m3339981865(NULL /*static, unused*/, /*hidden argument*/NULL);
		Machine_t4122409742 * L_7 = V_1;
		NullCheck(L_6);
		SelectUI_Select_m973328249(L_6, L_7, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Boolean Tap::IsPointerOverUI()
extern "C"  bool Tap_IsPointerOverUI_m4063516749 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tap_IsPointerOverUI_m4063516749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		bool L_0 = Tap_IsPointerOverTag_m56860595(NULL /*static, unused*/, _stringLiteral3457267691, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		bool L_1 = Tap_IsPointerOverTag_m56860595(NULL /*static, unused*/, _stringLiteral344811725, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Tap::IsPointerOverTag(System.String)
extern "C"  bool Tap_IsPointerOverTag_m56860595 (RuntimeObject * __this /* static, unused */, String_t* ___tag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tap_IsPointerOverTag_m56860595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t1003666588_il2cpp_TypeInfo_var);
		EventSystem_t1003666588 * L_0 = EventSystem_get_current_m1416377559(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = EventSystem_get_currentSelectedGameObject_m2939274948(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t1003666588_il2cpp_TypeInfo_var);
		EventSystem_t1003666588 * L_3 = EventSystem_get_current_m1416377559(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = EventSystem_get_currentSelectedGameObject_m2939274948(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = V_0;
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = Transform_get_parent_m835071599(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		GameObject_t1113636619 * L_9 = V_0;
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = GameObject_get_transform_m1369836730(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = Transform_get_parent_m835071599(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_t1113636619 * L_12 = Component_get_gameObject_m442555142(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		GameObject_t1113636619 * L_13 = V_1;
		String_t* L_14 = ___tag0;
		NullCheck(L_13);
		bool L_15 = GameObject_CompareTag_m3144439756(L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_004d:
	{
		return (bool)0;
	}
}
// UnityEngine.Vector2 Tap::MouseWorldPosition()
extern "C"  Vector2_t2156229523  Tap_MouseWorldPosition_m3981404498 (Tap_t1232705552 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tap_MouseWorldPosition_m3981404498_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_2 = Camera_ScreenToWorldPoint_m3978588570(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_x_1();
		float L_4 = (&V_0)->get_y_2();
		Vector2_t2156229523  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector2__ctor_m3970636864((&L_5), L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 Tap::RoundVector(UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Tap_RoundVector_m2973389852 (Tap_t1232705552 * __this, Vector2_t2156229523  ___v0, const RuntimeMethod* method)
{
	{
		float L_0 = (&___v0)->get_x_0();
		double L_1 = bankers_round((((double)((double)L_0))));
		float L_2 = (&___v0)->get_y_1();
		double L_3 = bankers_round((((double)((double)L_2))));
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), (((float)((float)L_1))), (((float)((float)L_3))), /*hidden argument*/NULL);
		return L_4;
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
// System.Void UI::.ctor()
extern "C"  void UI__ctor_m2959160859 (UI_t167124789 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// RunUI UI::get_RunControls()
extern "C"  RunUI_t3214653273 * UI_get_RunControls_m444179742 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_get_RunControls_m444179742_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UI_t167124789 * L_0 = ((UI_t167124789_StaticFields*)il2cpp_codegen_static_fields_for(UI_t167124789_il2cpp_TypeInfo_var))->get_instance_2();
		NullCheck(L_0);
		RunUI_t3214653273 * L_1 = L_0->get_runControls_3();
		return L_1;
	}
}
// MachineUI UI::get_Machines()
extern "C"  MachineUI_t252077060 * UI_get_Machines_m4279099061 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_get_Machines_m4279099061_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UI_t167124789 * L_0 = ((UI_t167124789_StaticFields*)il2cpp_codegen_static_fields_for(UI_t167124789_il2cpp_TypeInfo_var))->get_instance_2();
		NullCheck(L_0);
		MachineUI_t252077060 * L_1 = L_0->get_machines_4();
		return L_1;
	}
}
// SelectUI UI::get_Select()
extern "C"  SelectUI_t1349636119 * UI_get_Select_m3339981865 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_get_Select_m3339981865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UI_t167124789 * L_0 = ((UI_t167124789_StaticFields*)il2cpp_codegen_static_fields_for(UI_t167124789_il2cpp_TypeInfo_var))->get_instance_2();
		NullCheck(L_0);
		SelectUI_t1349636119 * L_1 = L_0->get_select_5();
		return L_1;
	}
}
// System.Void UI::Awake()
extern "C"  void UI_Awake_m3990333464 (UI_t167124789 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_Awake_m3990333464_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((UI_t167124789_StaticFields*)il2cpp_codegen_static_fields_for(UI_t167124789_il2cpp_TypeInfo_var))->set_instance_2(__this);
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = Transform_GetChild_m1092972975(L_1, 0, /*hidden argument*/NULL);
		NullCheck(L_2);
		RunUI_t3214653273 * L_3 = Component_GetComponent_TisRunUI_t3214653273_m237926909(L_2, /*hidden argument*/Component_GetComponent_TisRunUI_t3214653273_m237926909_RuntimeMethod_var);
		__this->set_runControls_3(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = Transform_GetChild_m1092972975(L_5, 1, /*hidden argument*/NULL);
		NullCheck(L_6);
		MachineUI_t252077060 * L_7 = Component_GetComponent_TisMachineUI_t252077060_m4251883980(L_6, /*hidden argument*/Component_GetComponent_TisMachineUI_t252077060_m4251883980_RuntimeMethod_var);
		__this->set_machines_4(L_7);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = Transform_GetChild_m1092972975(L_9, 2, /*hidden argument*/NULL);
		NullCheck(L_10);
		SelectUI_t1349636119 * L_11 = Component_GetComponent_TisSelectUI_t1349636119_m1154063999(L_10, /*hidden argument*/Component_GetComponent_TisSelectUI_t1349636119_m1154063999_RuntimeMethod_var);
		__this->set_select_5(L_11);
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
// System.Void Wall::.ctor()
extern "C"  void Wall__ctor_m559063296 (Wall_t2206666577 * __this, const RuntimeMethod* method)
{
	{
		Machine__ctor_m2672044869(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wall::Start()
extern "C"  void Wall_Start_m1066291526 (Wall_t2206666577 * __this, const RuntimeMethod* method)
{
	{
		Machine_Start_m764592851(__this, /*hidden argument*/NULL);
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
// System.Void Welder::.ctor()
extern "C"  void Welder__ctor_m2736972880 (Welder_t3775122660 * __this, const RuntimeMethod* method)
{
	{
		Machine__ctor_m2672044869(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Welder::Start()
extern "C"  void Welder_Start_m38610014 (Welder_t3775122660 * __this, const RuntimeMethod* method)
{
	{
		Machine_Start_m764592851(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Welder::OnStepStart()
extern "C"  void Welder_OnStepStart_m1160880184 (Welder_t3775122660 * __this, const RuntimeMethod* method)
{
	List_1_t2588031774 * V_0 = NULL;
	{
		List_1_t2588031774 * L_0 = Welder_GetWeldGroups_m335897980(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		List_1_t2588031774 * L_1 = V_0;
		Welder_Weld_m33740497(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Welder::Rotate(System.Boolean)
extern "C"  void Welder_Rotate_m1058752903 (Welder_t3775122660 * __this, bool ___clockwise0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464 * G_B2_0 = NULL;
	Vector3_t3722313464 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Vector3_t3722313464 * G_B3_1 = NULL;
	{
		Vector2_t2156229523  L_0 = __this->get_direction_5();
		bool L_1 = ___clockwise0;
		Vector2_t2156229523  L_2 = Machine_RotateVector_m1548302461(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->set_direction_5(L_2);
		Vector3__ctor_m3353183577((&V_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		bool L_3 = ___clockwise0;
		G_B1_0 = (&V_0);
		if (!L_3)
		{
			G_B2_0 = (&V_0);
			goto IL_0038;
		}
	}
	{
		G_B3_0 = ((int32_t)-90);
		G_B3_1 = G_B1_0;
		goto IL_003a;
	}

IL_0038:
	{
		G_B3_0 = ((int32_t)90);
		G_B3_1 = G_B2_0;
	}

IL_003a:
	{
		G_B3_1->set_z_3((((float)((float)G_B3_0))));
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = V_0;
		NullCheck(L_4);
		Transform_Rotate_m1886816857(L_4, L_5, 0, /*hidden argument*/NULL);
		MachineUI_t252077060 * L_6 = UI_get_Machines_m4279099061(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = L_6->get_welderPrefab_11();
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = V_0;
		NullCheck(L_8);
		Transform_Rotate_m1886816857(L_8, L_9, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Welder::Weld(System.Collections.Generic.List`1<CrateGroup>)
extern "C"  void Welder_Weld_m33740497 (Welder_t3775122660 * __this, List_1_t2588031774 * ___weldGroups0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Welder_Weld_m33740497_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CrateGroup_t1115957032 * V_0 = NULL;
	CrateGroup_t1115957032 * V_1 = NULL;
	Enumerator_t182308355  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2588031774 * L_0 = ___weldGroups0;
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m4199684629(L_0, /*hidden argument*/List_1_get_Count_m4199684629_RuntimeMethod_var);
		if ((((int32_t)L_1) > ((int32_t)1)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		List_1_t2588031774 * L_2 = ___weldGroups0;
		NullCheck(L_2);
		CrateGroup_t1115957032 * L_3 = List_1_get_Item_m482029729(L_2, 0, /*hidden argument*/List_1_get_Item_m482029729_RuntimeMethod_var);
		V_0 = L_3;
		List_1_t2588031774 * L_4 = ___weldGroups0;
		NullCheck(L_4);
		List_1_RemoveAt_m470654483(L_4, 0, /*hidden argument*/List_1_RemoveAt_m470654483_RuntimeMethod_var);
		List_1_t2588031774 * L_5 = ___weldGroups0;
		NullCheck(L_5);
		Enumerator_t182308355  L_6 = List_1_GetEnumerator_m141122379(L_5, /*hidden argument*/List_1_GetEnumerator_m141122379_RuntimeMethod_var);
		V_2 = L_6;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_0028:
		{
			CrateGroup_t1115957032 * L_7 = Enumerator_get_Current_m3351093824((&V_2), /*hidden argument*/Enumerator_get_Current_m3351093824_RuntimeMethod_var);
			V_1 = L_7;
			CrateGroup_t1115957032 * L_8 = V_0;
			CrateGroup_t1115957032 * L_9 = V_1;
			NullCheck(L_8);
			CrateGroup_Merge_m1723941264(L_8, L_9, /*hidden argument*/NULL);
		}

IL_0037:
		{
			bool L_10 = Enumerator_MoveNext_m1755727745((&V_2), /*hidden argument*/Enumerator_MoveNext_m1755727745_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0028;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x56, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m705539179((&V_2), /*hidden argument*/Enumerator_Dispose_m705539179_RuntimeMethod_var);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0056:
	{
		return;
	}
}
// System.Collections.Generic.List`1<CrateGroup> Welder::GetWeldGroups()
extern "C"  List_1_t2588031774 * Welder_GetWeldGroups_m335897980 (Welder_t3775122660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Welder_GetWeldGroups_m335897980_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2588031774 * V_0 = NULL;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2U5BU5D_t1457185986* V_2 = NULL;
	int32_t V_3 = 0;
	Vector2_t2156229523  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector2_t2156229523  V_5;
	memset(&V_5, 0, sizeof(V_5));
	bool V_6 = false;
	Crate_t3334083239 * V_7 = NULL;
	Crate_t3334083239 * V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	{
		List_1_t2588031774 * L_0 = (List_1_t2588031774 *)il2cpp_codegen_object_new(List_1_t2588031774_il2cpp_TypeInfo_var);
		List_1__ctor_m976941798(L_0, /*hidden argument*/List_1__ctor_m976941798_RuntimeMethod_var);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Welder_t3775122660_il2cpp_TypeInfo_var);
		Vector2U5BU5D_t1457185986* L_1 = ((Welder_t3775122660_StaticFields*)il2cpp_codegen_static_fields_for(Welder_t3775122660_il2cpp_TypeInfo_var))->get_cardinalDirections_8();
		V_2 = L_1;
		V_3 = 0;
		goto IL_00c6;
	}

IL_0013:
	{
		Vector2U5BU5D_t1457185986* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		V_1 = (*(Vector2_t2156229523 *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))));
		Vector2_t2156229523  L_4 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_5 = __this->get_direction_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_6 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_4 = L_6;
		Vector2_t2156229523  L_7 = V_4;
		Vector2_t2156229523  L_8 = V_1;
		Vector2_t2156229523  L_9 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_5 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(Welder_t3775122660_il2cpp_TypeInfo_var);
		List_1_t3628304265 * L_10 = Welder_GetWeldSquares_m1391546050(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2156229523  L_11 = V_5;
		NullCheck(L_10);
		bool L_12 = List_1_Contains_m1070748127(L_10, L_11, /*hidden argument*/List_1_Contains_m1070748127_RuntimeMethod_var);
		V_6 = L_12;
		Vector2_t2156229523  L_13 = V_4;
		Crate_t3334083239 * L_14 = GridOf_1_At_m3659202116(NULL /*static, unused*/, L_13, /*hidden argument*/GridOf_1_At_m3659202116_RuntimeMethod_var);
		V_7 = L_14;
		Vector2_t2156229523  L_15 = V_5;
		Crate_t3334083239 * L_16 = GridOf_1_At_m3659202116(NULL /*static, unused*/, L_15, /*hidden argument*/GridOf_1_At_m3659202116_RuntimeMethod_var);
		V_8 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_00c2;
		}
	}
	{
		Crate_t3334083239 * L_18 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00c2;
		}
	}
	{
		Crate_t3334083239 * L_20 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00c2;
		}
	}
	{
		List_1_t2588031774 * L_22 = V_0;
		Crate_t3334083239 * L_23 = V_7;
		NullCheck(L_23);
		CrateGroup_t1115957032 * L_24 = L_23->get_group_4();
		NullCheck(L_22);
		bool L_25 = List_1_Contains_m1771383488(L_22, L_24, /*hidden argument*/List_1_Contains_m1771383488_RuntimeMethod_var);
		V_9 = L_25;
		bool L_26 = V_9;
		if (L_26)
		{
			goto IL_009f;
		}
	}
	{
		List_1_t2588031774 * L_27 = V_0;
		Crate_t3334083239 * L_28 = V_7;
		NullCheck(L_28);
		CrateGroup_t1115957032 * L_29 = L_28->get_group_4();
		NullCheck(L_27);
		List_1_Add_m205543450(L_27, L_29, /*hidden argument*/List_1_Add_m205543450_RuntimeMethod_var);
	}

IL_009f:
	{
		List_1_t2588031774 * L_30 = V_0;
		Crate_t3334083239 * L_31 = V_8;
		NullCheck(L_31);
		CrateGroup_t1115957032 * L_32 = L_31->get_group_4();
		NullCheck(L_30);
		bool L_33 = List_1_Contains_m1771383488(L_30, L_32, /*hidden argument*/List_1_Contains_m1771383488_RuntimeMethod_var);
		V_10 = L_33;
		bool L_34 = V_10;
		if (L_34)
		{
			goto IL_00c2;
		}
	}
	{
		List_1_t2588031774 * L_35 = V_0;
		Crate_t3334083239 * L_36 = V_8;
		NullCheck(L_36);
		CrateGroup_t1115957032 * L_37 = L_36->get_group_4();
		NullCheck(L_35);
		List_1_Add_m205543450(L_35, L_37, /*hidden argument*/List_1_Add_m205543450_RuntimeMethod_var);
	}

IL_00c2:
	{
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00c6:
	{
		int32_t L_39 = V_3;
		Vector2U5BU5D_t1457185986* L_40 = V_2;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_40)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		List_1_t2588031774 * L_41 = V_0;
		return L_41;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector2> Welder::GetWeldSquares()
extern "C"  List_1_t3628304265 * Welder_GetWeldSquares_m1391546050 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Welder_GetWeldSquares_m1391546050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t4294877337 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Welder_t3775122660_il2cpp_TypeInfo_var);
		List_1_t3628304265 * L_0 = ((Welder_t3775122660_StaticFields*)il2cpp_codegen_static_fields_for(Welder_t3775122660_il2cpp_TypeInfo_var))->get_weldSquares_7();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Welder_t3775122660_il2cpp_TypeInfo_var);
		List_1_t3628304265 * L_1 = ((Welder_t3775122660_StaticFields*)il2cpp_codegen_static_fields_for(Welder_t3775122660_il2cpp_TypeInfo_var))->get_weldSquares_7();
		return L_1;
	}

IL_0010:
	{
		List_1_t3628304265 * L_2 = (List_1_t3628304265 *)il2cpp_codegen_object_new(List_1_t3628304265_il2cpp_TypeInfo_var);
		List_1__ctor_m1536470898(L_2, /*hidden argument*/List_1__ctor_m1536470898_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Welder_t3775122660_il2cpp_TypeInfo_var);
		((Welder_t3775122660_StaticFields*)il2cpp_codegen_static_fields_for(Welder_t3775122660_il2cpp_TypeInfo_var))->set_weldSquares_7(L_2);
		Action_1_t4294877337 * L_3 = ((Welder_t3775122660_StaticFields*)il2cpp_codegen_static_fields_for(Welder_t3775122660_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_9();
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		intptr_t L_4 = (intptr_t)Welder_U3CGetWeldSquaresU3Em__0_m319006993_RuntimeMethod_var;
		Action_1_t4294877337 * L_5 = (Action_1_t4294877337 *)il2cpp_codegen_object_new(Action_1_t4294877337_il2cpp_TypeInfo_var);
		Action_1__ctor_m3536267445(L_5, NULL, L_4, /*hidden argument*/Action_1__ctor_m3536267445_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Welder_t3775122660_il2cpp_TypeInfo_var);
		((Welder_t3775122660_StaticFields*)il2cpp_codegen_static_fields_for(Welder_t3775122660_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_9(L_5);
	}

IL_0032:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Welder_t3775122660_il2cpp_TypeInfo_var);
		Action_1_t4294877337 * L_6 = ((Welder_t3775122660_StaticFields*)il2cpp_codegen_static_fields_for(Welder_t3775122660_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_9();
		V_0 = L_6;
		Action_1_t4294877337 * L_7 = V_0;
		GridOf_1_ForEach_m659143872(NULL /*static, unused*/, L_7, /*hidden argument*/GridOf_1_ForEach_m659143872_RuntimeMethod_var);
		List_1_t3628304265 * L_8 = ((Welder_t3775122660_StaticFields*)il2cpp_codegen_static_fields_for(Welder_t3775122660_il2cpp_TypeInfo_var))->get_weldSquares_7();
		return L_8;
	}
}
// System.Void Welder::.cctor()
extern "C"  void Welder__cctor_m3643777369 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Welder__cctor_m3643777369_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2U5BU5D_t1457185986* L_0 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_get_up_m2647420593(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_1;
		Vector2U5BU5D_t1457185986* L_2 = L_0;
		NullCheck(L_2);
		Vector2_t2156229523  L_3 = Vector2_get_down_m2886001705(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_3;
		Vector2U5BU5D_t1457185986* L_4 = L_2;
		NullCheck(L_4);
		Vector2_t2156229523  L_5 = Vector2_get_left_m1559018038(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))) = L_5;
		Vector2U5BU5D_t1457185986* L_6 = L_4;
		NullCheck(L_6);
		Vector2_t2156229523  L_7 = Vector2_get_right_m1027081661(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))) = L_7;
		((Welder_t3775122660_StaticFields*)il2cpp_codegen_static_fields_for(Welder_t3775122660_il2cpp_TypeInfo_var))->set_cardinalDirections_8(L_6);
		return;
	}
}
// System.Void Welder::<GetWeldSquares>m__0(Machine)
extern "C"  void Welder_U3CGetWeldSquaresU3Em__0_m319006993 (RuntimeObject * __this /* static, unused */, Machine_t4122409742 * ___machine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Welder_U3CGetWeldSquaresU3Em__0_m319006993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Welder_t3775122660 * V_0 = NULL;
	{
		Machine_t4122409742 * L_0 = ___machine0;
		if (!((Welder_t3775122660 *)IsInstClass((RuntimeObject*)L_0, Welder_t3775122660_il2cpp_TypeInfo_var)))
		{
			goto IL_002d;
		}
	}
	{
		Machine_t4122409742 * L_1 = ___machine0;
		V_0 = ((Welder_t3775122660 *)CastclassClass((RuntimeObject*)L_1, Welder_t3775122660_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(Welder_t3775122660_il2cpp_TypeInfo_var);
		List_1_t3628304265 * L_2 = ((Welder_t3775122660_StaticFields*)il2cpp_codegen_static_fields_for(Welder_t3775122660_il2cpp_TypeInfo_var))->get_weldSquares_7();
		Welder_t3775122660 * L_3 = V_0;
		NullCheck(L_3);
		Vector2_t2156229523  L_4 = GridThing_get_xy_m738839343(L_3, /*hidden argument*/NULL);
		Welder_t3775122660 * L_5 = V_0;
		NullCheck(L_5);
		Vector2_t2156229523  L_6 = L_5->get_direction_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_7 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		List_1_Add_m2298161512(L_2, L_7, /*hidden argument*/List_1_Add_m2298161512_RuntimeMethod_var);
	}

IL_002d:
	{
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
// System.Void Wire::.ctor()
extern "C"  void Wire__ctor_m3025492090 (Wire_t1115128131 * __this, const RuntimeMethod* method)
{
	{
		Machine__ctor_m2672044869(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wire::Start()
extern "C"  void Wire_Start_m2850373620 (Wire_t1115128131 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Wire_Start_m2850373620_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Machine_Start_m764592851(__this, /*hidden argument*/NULL);
		WireGroup_t228895900 * L_0 = (WireGroup_t228895900 *)il2cpp_codegen_object_new(WireGroup_t228895900_il2cpp_TypeInfo_var);
		WireGroup__ctor_m2268275209(L_0, /*hidden argument*/NULL);
		__this->set_group_5(L_0);
		WireGroup_t228895900 * L_1 = __this->get_group_5();
		NullCheck(L_1);
		List_1_t2587202873 * L_2 = L_1->get_wires_0();
		NullCheck(L_2);
		List_1_Add_m860147963(L_2, __this, /*hidden argument*/List_1_Add_m860147963_RuntimeMethod_var);
		Wire_Connect_m1657954004(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wire::Connect()
extern "C"  void Wire_Connect_m1657954004 (Wire_t1115128131 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Wire_Connect_m1657954004_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2U5BU5D_t1457185986* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	Machine_t4122409742 * V_4 = NULL;
	Wire_t1115128131 * V_5 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Wire_t1115128131_il2cpp_TypeInfo_var);
		Vector2U5BU5D_t1457185986* L_0 = ((Wire_t1115128131_StaticFields*)il2cpp_codegen_static_fields_for(Wire_t1115128131_il2cpp_TypeInfo_var))->get_cardinalDirections_6();
		V_1 = L_0;
		V_2 = 0;
		goto IL_0078;
	}

IL_000d:
	{
		Vector2U5BU5D_t1457185986* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		V_0 = (*(Vector2_t2156229523 *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))));
		Vector2_t2156229523  L_3 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_5 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		bool L_6 = GridOf_1_InBounds_m3069315835(NULL /*static, unused*/, L_5, /*hidden argument*/GridOf_1_InBounds_m3069315835_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		goto IL_0074;
	}

IL_003a:
	{
		Vector2_t2156229523  L_8 = GridThing_get_xy_m738839343(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_10 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Machine_t4122409742 * L_11 = GridOf_1_At_m3872141981(NULL /*static, unused*/, L_10, /*hidden argument*/GridOf_1_At_m3872141981_RuntimeMethod_var);
		V_4 = L_11;
		Machine_t4122409742 * L_12 = V_4;
		if (!((Wire_t1115128131 *)IsInstClass((RuntimeObject*)L_12, Wire_t1115128131_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		Machine_t4122409742 * L_13 = V_4;
		V_5 = ((Wire_t1115128131 *)CastclassClass((RuntimeObject*)L_13, Wire_t1115128131_il2cpp_TypeInfo_var));
		WireGroup_t228895900 * L_14 = __this->get_group_5();
		Wire_t1115128131 * L_15 = V_5;
		NullCheck(L_15);
		WireGroup_t228895900 * L_16 = L_15->get_group_5();
		NullCheck(L_14);
		WireGroup_Merge_m3655234051(L_14, L_16, /*hidden argument*/NULL);
	}

IL_0074:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0078:
	{
		int32_t L_18 = V_2;
		Vector2U5BU5D_t1457185986* L_19 = V_1;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// System.Void Wire::.cctor()
extern "C"  void Wire__cctor_m1118857705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Wire__cctor_m1118857705_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2U5BU5D_t1457185986* L_0 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_get_up_m2647420593(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_1;
		Vector2U5BU5D_t1457185986* L_2 = L_0;
		NullCheck(L_2);
		Vector2_t2156229523  L_3 = Vector2_get_down_m2886001705(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_3;
		Vector2U5BU5D_t1457185986* L_4 = L_2;
		NullCheck(L_4);
		Vector2_t2156229523  L_5 = Vector2_get_left_m1559018038(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))) = L_5;
		Vector2U5BU5D_t1457185986* L_6 = L_4;
		NullCheck(L_6);
		Vector2_t2156229523  L_7 = Vector2_get_right_m1027081661(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))) = L_7;
		((Wire_t1115128131_StaticFields*)il2cpp_codegen_static_fields_for(Wire_t1115128131_il2cpp_TypeInfo_var))->set_cardinalDirections_6(L_6);
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
// System.Void WireGroup::.ctor()
extern "C"  void WireGroup__ctor_m2268275209 (WireGroup_t228895900 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireGroup__ctor_m2268275209_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		List_1_t2587202873 * L_0 = (List_1_t2587202873 *)il2cpp_codegen_object_new(List_1_t2587202873_il2cpp_TypeInfo_var);
		List_1__ctor_m1638165137(L_0, /*hidden argument*/List_1__ctor_m1638165137_RuntimeMethod_var);
		__this->set_wires_0(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Sensor> WireGroup::Sensors()
extern "C"  List_1_t3217410706 * WireGroup_Sensors_m2731798325 (WireGroup_t228895900 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireGroup_Sensors_m2731798325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3217410706 * V_0 = NULL;
	Wire_t1115128131 * V_1 = NULL;
	Enumerator_t181479454  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3217410706 * L_0 = (List_1_t3217410706 *)il2cpp_codegen_object_new(List_1_t3217410706_il2cpp_TypeInfo_var);
		List_1__ctor_m63149084(L_0, /*hidden argument*/List_1__ctor_m63149084_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t2587202873 * L_1 = __this->get_wires_0();
		NullCheck(L_1);
		Enumerator_t181479454  L_2 = List_1_GetEnumerator_m860095735(L_1, /*hidden argument*/List_1_GetEnumerator_m860095735_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_0017:
		{
			Wire_t1115128131 * L_3 = Enumerator_get_Current_m1765168993((&V_2), /*hidden argument*/Enumerator_get_Current_m1765168993_RuntimeMethod_var);
			V_1 = L_3;
			Wire_t1115128131 * L_4 = V_1;
			if (!((Sensor_t1745335964 *)IsInstClass((RuntimeObject*)L_4, Sensor_t1745335964_il2cpp_TypeInfo_var)))
			{
				goto IL_0036;
			}
		}

IL_002a:
		{
			List_1_t3217410706 * L_5 = V_0;
			Wire_t1115128131 * L_6 = V_1;
			NullCheck(L_5);
			List_1_Add_m815867368(L_5, ((Sensor_t1745335964 *)CastclassClass((RuntimeObject*)L_6, Sensor_t1745335964_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Add_m815867368_RuntimeMethod_var);
		}

IL_0036:
		{
			bool L_7 = Enumerator_MoveNext_m2871313586((&V_2), /*hidden argument*/Enumerator_MoveNext_m2871313586_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0017;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0047);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2152453677((&V_2), /*hidden argument*/Enumerator_Dispose_m2152453677_RuntimeMethod_var);
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_JUMP_TBL(0x55, IL_0055)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0055:
	{
		List_1_t3217410706 * L_8 = V_0;
		return L_8;
	}
}
// System.Void WireGroup::Merge(WireGroup)
extern "C"  void WireGroup_Merge_m3655234051 (WireGroup_t228895900 * __this, WireGroup_t228895900 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireGroup_Merge_m3655234051_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Wire_t1115128131 * V_0 = NULL;
	Enumerator_t181479454  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2587202873 * L_0 = __this->get_wires_0();
		WireGroup_t228895900 * L_1 = ___other0;
		NullCheck(L_1);
		List_1_t2587202873 * L_2 = L_1->get_wires_0();
		NullCheck(L_0);
		List_1_AddRange_m1519339901(L_0, L_2, /*hidden argument*/List_1_AddRange_m1519339901_RuntimeMethod_var);
		List_1_t2587202873 * L_3 = __this->get_wires_0();
		NullCheck(L_3);
		Enumerator_t181479454  L_4 = List_1_GetEnumerator_m860095735(L_3, /*hidden argument*/List_1_GetEnumerator_m860095735_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0031;
		}

IL_0022:
		{
			Wire_t1115128131 * L_5 = Enumerator_get_Current_m1765168993((&V_1), /*hidden argument*/Enumerator_get_Current_m1765168993_RuntimeMethod_var);
			V_0 = L_5;
			Wire_t1115128131 * L_6 = V_0;
			NullCheck(L_6);
			L_6->set_group_5(__this);
		}

IL_0031:
		{
			bool L_7 = Enumerator_MoveNext_m2871313586((&V_1), /*hidden argument*/Enumerator_MoveNext_m2871313586_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0022;
			}
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2152453677((&V_1), /*hidden argument*/Enumerator_Dispose_m2152453677_RuntimeMethod_var);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0050:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
