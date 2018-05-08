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


// Crate[,]
struct CrateU5BU2CU5D_t1007788767;
// System.Action`1<Crate>
struct Action_1_t3506550834;
// System.Collections.Generic.List`1<CrateGroup>
struct List_1_t2588031774;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// MachineUI
struct MachineUI_t252077060;
// System.Collections.Generic.List`1<DropZone>
struct List_1_t886281651;
// Machine[,]
struct MachineU5BU2CU5D_t2987630844;
// System.Action`1<Machine>
struct Action_1_t4294877337;
// System.Collections.Generic.List`1<Wire>
struct List_1_t2587202873;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Generator>
struct List_1_t3720455162;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// Crate
struct Crate_t3334083239;
// System.Collections.Generic.List`1<Crate>
struct List_1_t511190685;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t899420910;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.Analytics.TrackableField
struct TrackableField_t1772682203;
// UnityEngine.Analytics.ValueProperty
struct ValueProperty_t1868393739;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// CameraMover
struct CameraMover_t2845631541;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// StairMaster
struct StairMaster_t3581666356;
// Tap
struct Tap_t1232705552;
// System.Action`1<CrateGroup>
struct Action_1_t1288424627;
// RunUI
struct RunUI_t3214653273;
// SelectUI
struct SelectUI_t1349636119;
// CrateGroup
struct CrateGroup_t1115957032;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// DropZoneGroup
struct DropZoneGroup_t2340995414;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t3628304265;
// WireGroup
struct WireGroup_t228895900;
// System.Collections.Generic.List`1<Sensor>
struct List_1_t3217410706;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;




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
#ifndef TRACKABLETRIGGER_T621205209_H
#define TRACKABLETRIGGER_T621205209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableTrigger
struct  TrackableTrigger_t621205209  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityEngine.Analytics.TrackableTrigger::m_Target
	GameObject_t1113636619 * ___m_Target_0;
	// System.String UnityEngine.Analytics.TrackableTrigger::m_MethodPath
	String_t* ___m_MethodPath_1;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TrackableTrigger_t621205209, ___m_Target_0)); }
	inline GameObject_t1113636619 * get_m_Target_0() const { return ___m_Target_0; }
	inline GameObject_t1113636619 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(GameObject_t1113636619 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodPath_1() { return static_cast<int32_t>(offsetof(TrackableTrigger_t621205209, ___m_MethodPath_1)); }
	inline String_t* get_m_MethodPath_1() const { return ___m_MethodPath_1; }
	inline String_t** get_address_of_m_MethodPath_1() { return &___m_MethodPath_1; }
	inline void set_m_MethodPath_1(String_t* value)
	{
		___m_MethodPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodPath_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLETRIGGER_T621205209_H
#ifndef TRIGGERMETHOD_T582536534_H
#define TRIGGERMETHOD_T582536534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerMethod
struct  TriggerMethod_t582536534  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERMETHOD_T582536534_H
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
#ifndef TRIGGEROPERATOR_T3611898925_H
#define TRIGGEROPERATOR_T3611898925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerOperator
struct  TriggerOperator_t3611898925 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerOperator::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerOperator_t3611898925, ___value___1)); }
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
#endif // TRIGGEROPERATOR_T3611898925_H
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
#ifndef TRIGGERRULE_T1946298321_H
#define TRIGGERRULE_T1946298321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerRule
struct  TriggerRule_t1946298321  : public RuntimeObject
{
public:
	// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.TriggerRule::m_Target
	TrackableField_t1772682203 * ___m_Target_0;
	// UnityEngine.Analytics.TriggerOperator UnityEngine.Analytics.TriggerRule::m_Operator
	int32_t ___m_Operator_1;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.TriggerRule::m_Value
	ValueProperty_t1868393739 * ___m_Value_2;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.TriggerRule::m_Value2
	ValueProperty_t1868393739 * ___m_Value2_3;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Target_0)); }
	inline TrackableField_t1772682203 * get_m_Target_0() const { return ___m_Target_0; }
	inline TrackableField_t1772682203 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(TrackableField_t1772682203 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_Operator_1() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Operator_1)); }
	inline int32_t get_m_Operator_1() const { return ___m_Operator_1; }
	inline int32_t* get_address_of_m_Operator_1() { return &___m_Operator_1; }
	inline void set_m_Operator_1(int32_t value)
	{
		___m_Operator_1 = value;
	}

	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Value_2)); }
	inline ValueProperty_t1868393739 * get_m_Value_2() const { return ___m_Value_2; }
	inline ValueProperty_t1868393739 ** get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(ValueProperty_t1868393739 * value)
	{
		___m_Value_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value_2), value);
	}

	inline static int32_t get_offset_of_m_Value2_3() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Value2_3)); }
	inline ValueProperty_t1868393739 * get_m_Value2_3() const { return ___m_Value2_3; }
	inline ValueProperty_t1868393739 ** get_address_of_m_Value2_3() { return &___m_Value2_3; }
	inline void set_m_Value2_3(ValueProperty_t1868393739 * value)
	{
		___m_Value2_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value2_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERRULE_T1946298321_H
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
#ifndef ONTRIGGER_T4184125570_H
#define ONTRIGGER_T4184125570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.EventTrigger/OnTrigger
struct  OnTrigger_t4184125570  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONTRIGGER_T4184125570_H
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





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1800 = { sizeof (OnTrigger_t4184125570), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1801 = { sizeof (TrackableTrigger_t621205209), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1801[2] = 
{
	TrackableTrigger_t621205209::get_offset_of_m_Target_0(),
	TrackableTrigger_t621205209::get_offset_of_m_MethodPath_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1802 = { sizeof (TriggerMethod_t582536534), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1803 = { sizeof (TriggerRule_t1946298321), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1803[4] = 
{
	TriggerRule_t1946298321::get_offset_of_m_Target_0(),
	TriggerRule_t1946298321::get_offset_of_m_Operator_1(),
	TriggerRule_t1946298321::get_offset_of_m_Value_2(),
	TriggerRule_t1946298321::get_offset_of_m_Value2_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1804 = { sizeof (U3CModuleU3E_t692745546), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1805 = { sizeof (CameraMover_t2845631541), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1805[11] = 
{
	CameraMover_t2845631541::get_offset_of_dragSpeed_2(),
	CameraMover_t2845631541::get_offset_of_mapBuffer_3(),
	CameraMover_t2845631541::get_offset_of_scrollVert_4(),
	CameraMover_t2845631541::get_offset_of_scrollHor_5(),
	CameraMover_t2845631541::get_offset_of_dragOrigin_6(),
	CameraMover_t2845631541::get_offset_of_dragStartTime_7(),
	CameraMover_t2845631541::get_offset_of_dragTimeThreshold_8(),
	CameraMover_t2845631541::get_offset_of_leftBound_9(),
	CameraMover_t2845631541::get_offset_of_rightBound_10(),
	CameraMover_t2845631541::get_offset_of_upperBound_11(),
	CameraMover_t2845631541::get_offset_of_lowerBound_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1806 = { sizeof (Conveyor_t2171737337), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1806[1] = 
{
	Conveyor_t2171737337::get_offset_of_direction_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1807 = { sizeof (Crate_t3334083239), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1807[4] = 
{
	Crate_t3334083239::get_offset_of_paintPrefab_3(),
	Crate_t3334083239::get_offset_of_group_4(),
	Crate_t3334083239::get_offset_of_hasMoved_5(),
	Crate_t3334083239::get_offset_of_painted_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1808 = { sizeof (U3CCheckPusherArmsU3Ec__AnonStorey2_t340666492), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1808[2] = 
{
	U3CCheckPusherArmsU3Ec__AnonStorey2_t340666492::get_offset_of_target_0(),
	U3CCheckPusherArmsU3Ec__AnonStorey2_t340666492::get_offset_of_blockedByPusherArm_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1809 = { sizeof (U3CAnimateMoveU3Ec__Iterator0_t1583435394), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1809[10] = 
{
	U3CAnimateMoveU3Ec__Iterator0_t1583435394::get_offset_of_U3CframesU3E__0_0(),
	U3CAnimateMoveU3Ec__Iterator0_t1583435394::get_offset_of_U3CanimationTimeU3E__0_1(),
	U3CAnimateMoveU3Ec__Iterator0_t1583435394::get_offset_of_U3CiU3E__1_2(),
	U3CAnimateMoveU3Ec__Iterator0_t1583435394::get_offset_of_direction_3(),
	U3CAnimateMoveU3Ec__Iterator0_t1583435394::get_offset_of_destination_4(),
	U3CAnimateMoveU3Ec__Iterator0_t1583435394::get_offset_of_destroyAfter_5(),
	U3CAnimateMoveU3Ec__Iterator0_t1583435394::get_offset_of_U24this_6(),
	U3CAnimateMoveU3Ec__Iterator0_t1583435394::get_offset_of_U24current_7(),
	U3CAnimateMoveU3Ec__Iterator0_t1583435394::get_offset_of_U24disposing_8(),
	U3CAnimateMoveU3Ec__Iterator0_t1583435394::get_offset_of_U24PC_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1810 = { sizeof (U3CAnimateRotationU3Ec__Iterator1_t2176702074), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1810[12] = 
{
	U3CAnimateRotationU3Ec__Iterator1_t2176702074::get_offset_of_U3CframesU3E__0_0(),
	U3CAnimateRotationU3Ec__Iterator1_t2176702074::get_offset_of_U3CanimationTimeU3E__0_1(),
	U3CAnimateRotationU3Ec__Iterator1_t2176702074::get_offset_of_spin_2(),
	U3CAnimateRotationU3Ec__Iterator1_t2176702074::get_offset_of_U3CangleU3E__0_3(),
	U3CAnimateRotationU3Ec__Iterator1_t2176702074::get_offset_of_U3CiU3E__1_4(),
	U3CAnimateRotationU3Ec__Iterator1_t2176702074::get_offset_of_U3CppU3E__2_5(),
	U3CAnimateRotationU3Ec__Iterator1_t2176702074::get_offset_of_destination_6(),
	U3CAnimateRotationU3Ec__Iterator1_t2176702074::get_offset_of_destroyAfter_7(),
	U3CAnimateRotationU3Ec__Iterator1_t2176702074::get_offset_of_U24this_8(),
	U3CAnimateRotationU3Ec__Iterator1_t2176702074::get_offset_of_U24current_9(),
	U3CAnimateRotationU3Ec__Iterator1_t2176702074::get_offset_of_U24disposing_10(),
	U3CAnimateRotationU3Ec__Iterator1_t2176702074::get_offset_of_U24PC_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1811 = { sizeof (CrateGroup_t1115957032), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1811[5] = 
{
	CrateGroup_t1115957032::get_offset_of_crates_0(),
	CrateGroup_t1115957032::get_offset_of_spins_1(),
	CrateGroup_t1115957032::get_offset_of_pusherForce_2(),
	CrateGroup_t1115957032::get_offset_of_netForce_3(),
	CrateGroup_t1115957032::get_offset_of_lastDirection_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1812 = { sizeof (Crates_t3341619879), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1813 = { sizeof (U3CGroupsU3Ec__AnonStorey0_t4083570762), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1813[1] = 
{
	U3CGroupsU3Ec__AnonStorey0_t4083570762::get_offset_of_groups_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1814 = { sizeof (DropZone_t3709174205), -1, sizeof(DropZone_t3709174205_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1814[4] = 
{
	DropZone_t3709174205::get_offset_of_paintPrefab_5(),
	DropZone_t3709174205::get_offset_of_paintEncoding_6(),
	DropZone_t3709174205::get_offset_of_group_7(),
	DropZone_t3709174205_StaticFields::get_offset_of_cardinalDirections_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1815 = { sizeof (DropZoneGroup_t2340995414), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1815[1] = 
{
	DropZoneGroup_t2340995414::get_offset_of_zones_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1816 = { sizeof (GameManager_t1536523654), -1, sizeof(GameManager_t1536523654_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1816[5] = 
{
	GameManager_t1536523654_StaticFields::get_offset_of_instance_2(),
	GameManager_t1536523654::get_offset_of_stairMaster_3(),
	GameManager_t1536523654::get_offset_of_tap_4(),
	GameManager_t1536523654::get_offset_of_height_5(),
	GameManager_t1536523654::get_offset_of_width_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1817 = { sizeof (Generator_t2248380420), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1817[4] = 
{
	Generator_t2248380420::get_offset_of_cratePrefab_5(),
	Generator_t2248380420::get_offset_of_direction_6(),
	Generator_t2248380420::get_offset_of_stepsPerCrate_7(),
	Generator_t2248380420::get_offset_of_stepsSinceCrate_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1818 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1818[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1819 = { sizeof (GridThing_t3152339074), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1819[1] = 
{
	GridThing_t3152339074::get_offset_of__xy_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1820 = { sizeof (Machine_t4122409742), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1820[2] = 
{
	Machine_t4122409742::get_offset_of_isObstacle_3(),
	Machine_t4122409742::get_offset_of_wasPlaced_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1821 = { sizeof (Machines_t3020028686), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1822 = { sizeof (MachineUI_t252077060), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1822[14] = 
{
	MachineUI_t252077060::get_offset_of_buttons_2(),
	MachineUI_t252077060::get_offset_of_conveyorBtn_3(),
	MachineUI_t252077060::get_offset_of_spinnerBtn_4(),
	MachineUI_t252077060::get_offset_of_welderBtn_5(),
	MachineUI_t252077060::get_offset_of_pusherBtn_6(),
	MachineUI_t252077060::get_offset_of_sensorBtn_7(),
	MachineUI_t252077060::get_offset_of_wireBtn_8(),
	MachineUI_t252077060::get_offset_of_conveyorPrefab_9(),
	MachineUI_t252077060::get_offset_of_spinnerPrefab_10(),
	MachineUI_t252077060::get_offset_of_welderPrefab_11(),
	MachineUI_t252077060::get_offset_of_pusherPrefab_12(),
	MachineUI_t252077060::get_offset_of_sensorPrefab_13(),
	MachineUI_t252077060::get_offset_of_wirePrefab_14(),
	MachineUI_t252077060::get_offset_of_toPlace_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1823 = { sizeof (U3CSetupButtonU3Ec__AnonStorey0_t1115115811), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1823[2] = 
{
	U3CSetupButtonU3Ec__AnonStorey0_t1115115811::get_offset_of_machineGob_0(),
	U3CSetupButtonU3Ec__AnonStorey0_t1115115811::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1824 = { sizeof (Paint_t1033728073), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1824[1] = 
{
	Paint_t1033728073::get_offset_of__xy_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1825 = { sizeof (Painter_t2372114961), -1, sizeof(Painter_t2372114961_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1825[2] = 
{
	Painter_t2372114961::get_offset_of_direction_5(),
	Painter_t2372114961_StaticFields::get_offset_of_cardinalDirections_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1826 = { sizeof (Pusher_t3016537238), -1, sizeof(Pusher_t3016537238_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1826[7] = 
{
	Pusher_t3016537238::get_offset_of_direction_5(),
	Pusher_t3016537238::get_offset_of_extended_6(),
	Pusher_t3016537238::get_offset_of_sensors_7(),
	Pusher_t3016537238::get_offset_of_spriteExtended_8(),
	Pusher_t3016537238::get_offset_of_spriteRetracted_9(),
	Pusher_t3016537238::get_offset_of_renderer_10(),
	Pusher_t3016537238_StaticFields::get_offset_of_cardinalDirections_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1827 = { sizeof (Rotator_t2029754672), -1, sizeof(Rotator_t2029754672_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1827[4] = 
{
	Rotator_t2029754672::get_offset_of_isCCW_5(),
	Rotator_t2029754672_StaticFields::get_offset_of_STEPS_6(),
	Rotator_t2029754672_StaticFields::get_offset_of_ANG_STEP_7(),
	Rotator_t2029754672::get_offset_of_lastGroup_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1828 = { sizeof (RunUI_t3214653273), -1, sizeof(RunUI_t3214653273_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1828[7] = 
{
	RunUI_t3214653273::get_offset_of_playPauseBtn_2(),
	RunUI_t3214653273::get_offset_of_fastForwardBtn_3(),
	RunUI_t3214653273::get_offset_of_resetBtn_4(),
	RunUI_t3214653273::get_offset_of_clearBtn_5(),
	RunUI_t3214653273::get_offset_of_playPause_6(),
	RunUI_t3214653273_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_7(),
	RunUI_t3214653273_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1829 = { sizeof (SelectUI_t1349636119), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1829[5] = 
{
	SelectUI_t1349636119::get_offset_of_buttons_2(),
	SelectUI_t1349636119::get_offset_of_turnLeftBtn_3(),
	SelectUI_t1349636119::get_offset_of_turnRightBtn_4(),
	SelectUI_t1349636119::get_offset_of_deleteBtn_5(),
	SelectUI_t1349636119::get_offset_of_selectedMachineGob_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1830 = { sizeof (Sensor_t1745335964), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1830[1] = 
{
	Sensor_t1745335964::get_offset_of_direction_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1831 = { sizeof (StairMaster_t3581666356), -1, sizeof(StairMaster_t3581666356_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1831[10] = 
{
	StairMaster_t3581666356::get_offset_of_stepSize_2(),
	0,
	0,
	StairMaster_t3581666356::get_offset_of_stepTime_5(),
	StairMaster_t3581666356::get_offset_of_running_6(),
	StairMaster_t3581666356::get_offset_of_generators_7(),
	StairMaster_t3581666356_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_8(),
	StairMaster_t3581666356_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_9(),
	StairMaster_t3581666356_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_10(),
	StairMaster_t3581666356_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1832 = { sizeof (U3CGetGeneratorsU3Ec__AnonStorey0_t1713985753), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1832[1] = 
{
	U3CGetGeneratorsU3Ec__AnonStorey0_t1713985753::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1833 = { sizeof (Tap_t1232705552), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1833[4] = 
{
	Tap_t1232705552::get_offset_of_isStarted_2(),
	Tap_t1232705552::get_offset_of_isHeld_3(),
	Tap_t1232705552::get_offset_of_cameraGob_4(),
	Tap_t1232705552::get_offset_of_cameraMover_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1834 = { sizeof (UI_t167124789), -1, sizeof(UI_t167124789_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1834[4] = 
{
	UI_t167124789_StaticFields::get_offset_of_instance_2(),
	UI_t167124789::get_offset_of_runControls_3(),
	UI_t167124789::get_offset_of_machines_4(),
	UI_t167124789::get_offset_of_select_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1835 = { sizeof (Wall_t2206666577), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1836 = { sizeof (Welder_t3775122660), -1, sizeof(Welder_t3775122660_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1836[5] = 
{
	Welder_t3775122660::get_offset_of_direction_5(),
	Welder_t3775122660::get_offset_of_hasWelded_6(),
	Welder_t3775122660_StaticFields::get_offset_of_weldSquares_7(),
	Welder_t3775122660_StaticFields::get_offset_of_cardinalDirections_8(),
	Welder_t3775122660_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1837 = { sizeof (Wire_t1115128131), -1, sizeof(Wire_t1115128131_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1837[2] = 
{
	Wire_t1115128131::get_offset_of_group_5(),
	Wire_t1115128131_StaticFields::get_offset_of_cardinalDirections_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1838 = { sizeof (WireGroup_t228895900), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1838[1] = 
{
	WireGroup_t228895900::get_offset_of_wires_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1839 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255366), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1839[1] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24fieldU2D789A03B883709A48092EAA34B7D094B9AC0EC2DF_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1840 = { sizeof (U24ArrayTypeU3D36_t120960362)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D36_t120960362 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
