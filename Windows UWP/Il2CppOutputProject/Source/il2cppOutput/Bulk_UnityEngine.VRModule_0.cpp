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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.String>
struct Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0;
// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>
struct Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>
struct Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>
struct Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>
struct Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E;
// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs>
struct Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0;
// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs>
struct Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA;
// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs>
struct Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93;
// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs>
struct Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7;
// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs>
struct Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>
struct Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>
struct Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>
struct Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>
struct Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>
struct Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>
struct Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>
struct Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>
struct Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C;
// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>
struct Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7;
// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>
struct Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E;
// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>
struct Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.MeshCollider
struct MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE;
// UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate
struct GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate
struct HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate
struct HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate
struct HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate
struct ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate
struct ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate
struct ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate
struct ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate
struct NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate
struct NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate
struct NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate
struct NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A;
// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate
struct RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B;
// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate
struct RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214;
// UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate
struct TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F;
// UnityEngine.XR.WSA.Input.InteractionManager/SourceEventHandler
struct SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75;
// UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225;
// UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate
struct GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF;
// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
struct WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96;
// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/DeserializationCompleteDelegate
struct DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648;
// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationCompleteDelegate
struct SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB;
// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationDataAvailableDelegate
struct SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7;
// UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864;
// UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate
struct SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1;
// UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate
struct SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092;
// UnityEngine.XR.WSA.WebCam.PhotoCapture
struct PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307;
// UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCaptureResourceCreatedCallback
struct OnCaptureResourceCreatedCallback_t2C031B8432401E472889526CAF2CA987AC99D5D1;
// UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCapturedToDiskCallback
struct OnCapturedToDiskCallback_tAC3EFE8F816D568DFACBDCAAC2102ACC8F7927DA;
// UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCapturedToMemoryCallback
struct OnCapturedToMemoryCallback_t1117FB4051889E3472DC6F17C4E28B4C3471CBE6;
// UnityEngine.XR.WSA.WebCam.PhotoCapture/OnPhotoModeStartedCallback
struct OnPhotoModeStartedCallback_t3E74AEAE0C3BAF1711BF4C3F423A4B8272C6A456;
// UnityEngine.XR.WSA.WebCam.PhotoCapture/OnPhotoModeStoppedCallback
struct OnPhotoModeStoppedCallback_t80B25F7611051F3335A92707211B540F04E08592;
// UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame
struct PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858;
// UnityEngine.XR.WSA.WebCam.VideoCapture
struct VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA;
// UnityEngine.XR.WSA.WebCam.VideoCapture/OnStartedRecordingVideoCallback
struct OnStartedRecordingVideoCallback_tBA25BE29E6C6BFF428BFEF0131C9C28E6F96BE89;
// UnityEngine.XR.WSA.WebCam.VideoCapture/OnStoppedRecordingVideoCallback
struct OnStoppedRecordingVideoCallback_t1F24C0F8A39A6E3E4606D2EB3FBA06D42E176AAF;
// UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoCaptureResourceCreatedCallback
struct OnVideoCaptureResourceCreatedCallback_tF07FC786DED7B54F82740F0F65D21EA3FEC88804;
// UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoModeStartedCallback
struct OnVideoModeStartedCallback_t853A50811DA6BBFC7977E51BF13D1A9FF8E5100F;
// UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoModeStoppedCallback
struct OnVideoModeStoppedCallback_t69DE28B795E5B250601A1A9282127B1FD2AD31D8;
// UnityEngine.XR.WSA.WorldAnchor
struct WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE;
// UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate
struct OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253;
// UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate
struct OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B;

extern RuntimeClass* Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
extern RuntimeClass* Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
extern RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
extern RuntimeClass* GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084_il2cpp_TypeInfo_var;
extern RuntimeClass* HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2_il2cpp_TypeInfo_var;
extern RuntimeClass* HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A_il2cpp_TypeInfo_var;
extern RuntimeClass* HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var;
extern RuntimeClass* InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var;
extern RuntimeClass* InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250_il2cpp_TypeInfo_var;
extern RuntimeClass* InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6_il2cpp_TypeInfo_var;
extern RuntimeClass* ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917_il2cpp_TypeInfo_var;
extern RuntimeClass* ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4_il2cpp_TypeInfo_var;
extern RuntimeClass* ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0_il2cpp_TypeInfo_var;
extern RuntimeClass* ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406_il2cpp_TypeInfo_var;
extern RuntimeClass* NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954_il2cpp_TypeInfo_var;
extern RuntimeClass* NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3_il2cpp_TypeInfo_var;
extern RuntimeClass* NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF_il2cpp_TypeInfo_var;
extern RuntimeClass* NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A_il2cpp_TypeInfo_var;
extern RuntimeClass* Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858_il2cpp_TypeInfo_var;
extern RuntimeClass* PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC_il2cpp_TypeInfo_var;
extern RuntimeClass* PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_il2cpp_TypeInfo_var;
extern RuntimeClass* PositionalLocatorState_tE622489AA7DB67A92489D77CD1EF22EC2C5F0598_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
extern RuntimeClass* Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var;
extern RuntimeClass* RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B_il2cpp_TypeInfo_var;
extern RuntimeClass* RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214_il2cpp_TypeInfo_var;
extern RuntimeClass* SerializationCompletionReason_t36D4884AF265179731484C44E5A95235EB6F3987_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
extern RuntimeClass* SurfaceChange_t2E92CB8BA67A369A733BBEBD7087706B8E8FA747_il2cpp_TypeInfo_var;
extern RuntimeClass* SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_il2cpp_TypeInfo_var;
extern RuntimeClass* SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF_il2cpp_TypeInfo_var;
extern RuntimeClass* TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern RuntimeClass* VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55_il2cpp_TypeInfo_var;
extern RuntimeClass* VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_il2cpp_TypeInfo_var;
extern RuntimeClass* WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var;
extern RuntimeClass* WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_il2cpp_TypeInfo_var;
extern RuntimeClass* WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_il2cpp_TypeInfo_var;
extern RuntimeClass* XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var;
extern String_t* _stringLiteralE56BDFDA02CDB1AF069D764166DBFD5EF4DC1A56;
extern const RuntimeMethod* Action_1_Invoke_m0A7693DAB618A5AD064357DEE18C65EE17EC4F3C_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m125E522A0C41AC0FC6C0D40A229D597471B45567_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m1B04A9EFA672A32E86BFE93CCCBDF4C4504D9C1E_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m2A815481C588BDC936FCCF8DFCF0368061AED64B_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m34F24EFCBA6CB015D4A48C3CD5C7E61C227D5193_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m38339FC12F03EEF8FB28FBA0DFEF104F891A5A8B_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m40CAE8C6B97EA521838F7AC64D9FFFD267AF3FAF_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m4732464FB4773D55E9DBB35D18FB58DB8CE78B93_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m4F3930EF30194EC44F419B3E94774BE548E5BC66_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m5795ACB95FE9CCD6F5A924378FA9DE8E9CA3A6C4_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m5B7D08B1B0AC1D184B93F9CE5DAE32B5DC1EA694_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m648E0A8232CCAE8D9527EEAEF4363D611E41C6B7_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m7B37293237BA07CC6B50638B6DBD109BB4DC004D_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m971A7F94ACA669C07644DDEE7406533FA3502676_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_mA97E44F00BEFB34149435C4BE656AF816A0E9DF8_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_mAAA2C311608C583870A692A74FF519C2164D1EC3_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_mBB5D2CBD59DE968F3B42B022A9DABD9E5C69B1B4_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_mC6B23C0EDFD5C27A34D6DD6AE326D59CA7005CF1_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_mF57F2088FC61BB31C2D92DA0291CDC0EFE739C90_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_mF9EDDB9E3BC7AACDBA69EA5356BC2496FA296802_RuntimeMethod_var;
extern const RuntimeMethod* InteractionManager_OnSourceEvent_mC853244D8689197F06A503F65D1F4195C57ED8FB_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_mF3EA958D645F2DA73A25D6BA98D8CDF83ADD532D_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m2164B0E14FD6D71E914E108D3046E1F3D048890B_RuntimeMethod_var;
extern const uint32_t DeserializationCompleteDelegate_BeginInvoke_m9910723A46FB34B3B07F0DC4A36338761DBC789C_MetadataUsageId;
extern const uint32_t GestureErrorDelegate_BeginInvoke_m74CC1A18B8CACCA1FA512F2173BD31AC7AAAB441_MetadataUsageId;
extern const uint32_t GestureRecognizer_Dispose_mCDB9196736129DA85372020E13A8768175E9A97C_MetadataUsageId;
extern const uint32_t GestureRecognizer_Finalize_m276601D68E2EF58C2286101AD6BBD369EB33F1F3_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeErrorEvent_m59368BCBE12B89289E8BFF2309A58002268DE43A_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeHoldCanceled_mC34AE7488EB2F23E0484F55EC5B06A2195E28788_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeHoldCompleted_mD4B85266C373031A6560CD9F8E0ABD106BD275D4_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeHoldStarted_m6E5AF40A3DB2A8DDD12726E2A5220280835D7853_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeManipulationCanceled_m1BF8273F58D455F4F509EA1C819FC63109762922_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeManipulationCompleted_m6553513E4776E6D01BA438497E82387B219DDB7A_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeManipulationStarted_m24AB97B545BEBCC96200E52F8648903D27CB6EFF_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeManipulationUpdated_mFFFD261C7F13C3D7A890C6A7F2D9B8EEDDB2974B_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeNavigationCanceled_m39FE74B1B69937DFE5F775D4B15F11BDF5A23B8E_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeNavigationCompleted_m6A60E54BD33834390D15D7CF163B6C0DDDCFE776_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeNavigationStarted_m2079422473B03AE0A036518C2BE0D5C13D6A89CF_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeNavigationUpdated_m94F6C1A11FC117B2B5346840247780C79ACAEB5D_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeRecognitionEnded_mDFBDE51B56D682C1636521441816533C81CC753A_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeRecognitionStarted_m1E8873104D35064A51A0BAAC7774CDFFEED61924_MetadataUsageId;
extern const uint32_t GestureRecognizer_InvokeTapped_mD670AC122C9088630460544749701C246B1B2A49_MetadataUsageId;
extern const uint32_t GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t HoldCanceledEventDelegate_BeginInvoke_mB7C6B86BCBD192C46E0DB0CC76536B659DE914B7_MetadataUsageId;
extern const uint32_t HoldCompletedEventDelegate_BeginInvoke_m6990F58B8B07706460F6D685EAB6F8B6A27E3025_MetadataUsageId;
extern const uint32_t HoldStartedEventDelegate_BeginInvoke_mEB69CDD03CA2F7E2AC53F90C1F983A9681F102A5_MetadataUsageId;
extern const uint32_t InteractionManager_OnSourceEvent_mC853244D8689197F06A503F65D1F4195C57ED8FB_MetadataUsageId;
extern const uint32_t InteractionSource_Equals_m826241F239D49E68D24D6CADEC50FF3E60D6928C_MetadataUsageId;
extern const uint32_t ManipulationCanceledEventDelegate_BeginInvoke_m2F42D255FB64C543111584E2B183D66809A72FE0_MetadataUsageId;
extern const uint32_t ManipulationCompletedEventDelegate_BeginInvoke_m27EECB11BB8511FF754685CB629E072A6FED723B_MetadataUsageId;
extern const uint32_t ManipulationStartedEventDelegate_BeginInvoke_mE4118447769181F38B295DDCD5484F0974CE7CAB_MetadataUsageId;
extern const uint32_t ManipulationUpdatedEventDelegate_BeginInvoke_m109B92F35D22F6CB8BDDB76F65947BB3E36343AF_MetadataUsageId;
extern const uint32_t NavigationCanceledEventDelegate_BeginInvoke_mD9BCA54B098777B5EF4A96DBB14CD92AF3919306_MetadataUsageId;
extern const uint32_t NavigationCompletedEventDelegate_BeginInvoke_m3B0EF279ADD1EA29A764D156DA3C248E519408F2_MetadataUsageId;
extern const uint32_t NavigationStartedEventDelegate_BeginInvoke_m7F938167F8941BA728FC429CC9D7587E4DF5E5EB_MetadataUsageId;
extern const uint32_t NavigationUpdatedEventDelegate_BeginInvoke_m529EFAB702CC51B45F2B16FA2FC8144DECF32F20_MetadataUsageId;
extern const uint32_t OnCapturedToDiskCallback_BeginInvoke_mEE635D27A000BD7EFEBEBE28DD75DDFB03676C10_MetadataUsageId;
extern const uint32_t OnCapturedToMemoryCallback_BeginInvoke_m6359F2A6F1E8018628EDF651DEBCFC5159939499_MetadataUsageId;
extern const uint32_t OnPhotoModeStartedCallback_BeginInvoke_mEDA51A1E8705FCA9103C68A7F1299C517FF67DAC_MetadataUsageId;
extern const uint32_t OnPhotoModeStoppedCallback_BeginInvoke_m28168AB46B2CA7C46BD3A6F146C9014D14EA2FBB_MetadataUsageId;
extern const uint32_t OnPositionalLocatorStateChangedDelegate_BeginInvoke_m208B6244989F55ADDD858B706520C56982F3C95F_MetadataUsageId;
extern const uint32_t OnStartedRecordingVideoCallback_BeginInvoke_m878F31F0823F4DE88ABC870535AAD1D957C9165E_MetadataUsageId;
extern const uint32_t OnStoppedRecordingVideoCallback_BeginInvoke_m46747E24BA35A863CCEC5038AD21810A409B51A0_MetadataUsageId;
extern const uint32_t OnTrackingChangedDelegate_BeginInvoke_mF0EFF2F8F200DEEEF063BB19BA44ACFF920D5D8C_MetadataUsageId;
extern const uint32_t OnVideoModeStartedCallback_BeginInvoke_m2A7B61F154E7D5CE8642A7660D64A38D71A2F4C8_MetadataUsageId;
extern const uint32_t OnVideoModeStoppedCallback_BeginInvoke_mEF5B566774D7F29807FC69694ED99DF19358ED2F_MetadataUsageId;
extern const uint32_t PhotoCaptureFrame_Cleanup_m725D9C5D4FF978325BCE08FF4DF0612AF8F98721_MetadataUsageId;
extern const uint32_t PhotoCaptureFrame_Dispose_m1B8A252069B6130135A6429E60B32EC94DAAD01C_MetadataUsageId;
extern const uint32_t PhotoCaptureFrame__ctor_m7D08F4FA37B9B867BA2EFE2A1D099A221FC60731_MetadataUsageId;
extern const uint32_t PhotoCapture_Dispose_m7A77C521109C0A6355702E48C06F52E98751D439_MetadataUsageId;
extern const uint32_t PhotoCapture_Finalize_m4454CEB3A488D483EBD154BEDDE1432B52CFA056_MetadataUsageId;
extern const uint32_t PhotoCapture_InvokeOnCapturedPhotoToDiskDelegate_m86E362FE51AD70EE06F4EA1C7EFF2E5A26C4DFBF_MetadataUsageId;
extern const uint32_t PhotoCapture_InvokeOnCapturedPhotoToMemoryDelegate_m0CA7E5A5AA2D887EE09B818D14D4C2ACF50D7CAD_MetadataUsageId;
extern const uint32_t PhotoCapture_InvokeOnCreatedResourceDelegate_m6FBE2E778124A9EB2A8A427F1AA9C6E971494311_MetadataUsageId;
extern const uint32_t PhotoCapture_InvokeOnPhotoModeStartedDelegate_m3E00364E54C4613ED8715EC6B0912A88F1511745_MetadataUsageId;
extern const uint32_t PhotoCapture_InvokeOnPhotoModeStoppedDelegate_mCAB94A96A2DF3841227130505BC274CEA5274D2F_MetadataUsageId;
extern const uint32_t PhotoCapture_MakeCaptureResult_m040E0FBD9B6C69A45CF412BF6B902E8140EE2207_MetadataUsageId;
extern const uint32_t PhotoCapture__cctor_m1E5FBDB0B6F5FDB6EA81DC66B7CD06314DD60D64_MetadataUsageId;
extern const uint32_t RecognitionEndedEventDelegate_BeginInvoke_mF3478908780F05C95ABBED5BFA17151A74981F8D_MetadataUsageId;
extern const uint32_t RecognitionStartedEventDelegate_BeginInvoke_m51C50FCE97EB51769763374DD3DFB4FD38EA8F54_MetadataUsageId;
extern const uint32_t SerializationCompleteDelegate_BeginInvoke_m92A655FC6A647A2B89EBEB1113FB5AD2376B18A2_MetadataUsageId;
extern const uint32_t SourceEventHandler_BeginInvoke_m3A04E1F637F48F7B18E726173549DD5B9D60295E_MetadataUsageId;
extern const uint32_t SurfaceChangedDelegate_BeginInvoke_m8664937875D27851467C76EE2CF20695D0C15D6D_MetadataUsageId;
extern const uint32_t SurfaceDataReadyDelegate_BeginInvoke_m8F2C8D36EBF68F4AAA4991E184A14096488CE484_MetadataUsageId;
extern const uint32_t SurfaceObserver_Dispose_mA842C19181453E384E1BCE368468F8762CBB9B1E_MetadataUsageId;
extern const uint32_t SurfaceObserver_Finalize_m8BE3CB8B933C93F9C499BC0BF1ABBCE5202CA9C5_MetadataUsageId;
extern const uint32_t SurfaceObserver_InvokeSurfaceChangedEvent_m94D6A260AC13754E63918998AF05126858438174_MetadataUsageId;
extern const uint32_t TappedEventDelegate_BeginInvoke_m1523B624800012E92D400C62904EB0E3F45D8715_MetadataUsageId;
extern const uint32_t VideoCapture_Dispose_mB773BA68E9670D67107B5703809256731237C867_MetadataUsageId;
extern const uint32_t VideoCapture_Finalize_m3AF837AF542CA1C76C077644E6DAA145F30176D0_MetadataUsageId;
extern const uint32_t VideoCapture_InvokeOnCreatedVideoCaptureResourceDelegate_m3A4100036BABF6C078F3725F76EF0CE8E2ECC847_MetadataUsageId;
extern const uint32_t VideoCapture_InvokeOnStartedRecordingVideoToDiskDelegate_m604E2FD109871C711719FFA9A238A1A546A171D3_MetadataUsageId;
extern const uint32_t VideoCapture_InvokeOnStoppedRecordingVideoToDiskDelegate_m91974227B59FDE23BD64B966127AB81E001D5DE5_MetadataUsageId;
extern const uint32_t VideoCapture_InvokeOnVideoModeStartedDelegate_m076A832758BD13A4A5AEFDFB3AC462D1709C1C17_MetadataUsageId;
extern const uint32_t VideoCapture_InvokeOnVideoModeStoppedDelegate_mF1F21052FA711217FDD988AF1085A0B3D24808C2_MetadataUsageId;
extern const uint32_t VideoCapture_MakeCaptureResult_m877EBE3842EF752B6C2390D139C8644C77AFCA5F_MetadataUsageId;
extern const uint32_t VideoCapture__cctor_m90180530ED1FBD4ED43D26AB519524F6C55CD5AD_MetadataUsageId;
extern const uint32_t WorldAnchorStore_Dispose_m76B91FE5ABE8A03C0CED688FB45806705AFD5BCA_MetadataUsageId;
extern const uint32_t WorldAnchorStore_InvokeGetAsyncDelegate_mBD8BD1DD969BB11783B8C527BAAA1B74CF05F959_MetadataUsageId;
extern const uint32_t WorldAnchorStore__cctor_m7155DF59AE57F44A1A52432A5C2F84DF71DCB91B_MetadataUsageId;
extern const uint32_t WorldAnchorTransferBatch_Dispose_mC7A39E9FC64D891BA34488B82C47A520C6679CC8_MetadataUsageId;
extern const uint32_t WorldAnchorTransferBatch_Finalize_mC4CDDD4515215AD9722D0B3E0DCD61227543E026_MetadataUsageId;
extern const uint32_t WorldAnchorTransferBatch_InvokeWorldAnchorDeserializationCompleteDelegate_mD56BA5D47BF5FF904852057207DE97159CBC473A_MetadataUsageId;
extern const uint32_t WorldAnchorTransferBatch__ctor_m9745D72088F3E565D1A4855DE025FE7288871C35_MetadataUsageId;
extern const uint32_t WorldAnchor_Internal_TriggerEventOnTrackingLost_m30225CE01803079AAA7C81877ABE5A4150960B3A_MetadataUsageId;
extern const uint32_t WorldManager_Internal_TriggerPositionalLocatorStateChanged_mE66D0FFF1E4FD4406161D7EC482B45C33B0E0FC9_MetadataUsageId;
extern const uint32_t XRDevice_InvokeDeviceLoaded_mD5D5577A4E03D0474FAFBB2596B698B6A8B5FD11_MetadataUsageId;
extern const uint32_t XRDevice__cctor_m4FE111291FBDF43A481045CBABECF9AEC70B5EC9_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307;;
struct PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshaled_pinvoke;
struct PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshaled_pinvoke;;
struct VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA;;
struct VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshaled_pinvoke;
struct VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshaled_pinvoke;;
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225;;
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke;
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke;;
struct WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96;;
struct WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke;
struct WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke;;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;


#ifndef U3CMODULEU3E_TB054F17A779AC945E3659AF119A96DB806541AF9_H
#define U3CMODULEU3E_TB054F17A779AC945E3659AF119A96DB806541AF9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tB054F17A779AC945E3659AF119A96DB806541AF9 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_TB054F17A779AC945E3659AF119A96DB806541AF9_H
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
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
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
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef INTERACTIONMANAGER_TD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_H
#define INTERACTIONMANAGER_TD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionManager
struct  InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4  : public RuntimeObject
{
public:

public:
};

struct InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs> UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceDetected
	Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * ___InteractionSourceDetected_0;
	// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs> UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceLost
	Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * ___InteractionSourceLost_1;
	// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs> UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourcePressed
	Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * ___InteractionSourcePressed_2;
	// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs> UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceReleased
	Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * ___InteractionSourceReleased_3;
	// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs> UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceUpdated
	Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * ___InteractionSourceUpdated_4;
	// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceDetectedLegacy
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * ___InteractionSourceDetectedLegacy_5;
	// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceLostLegacy
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * ___InteractionSourceLostLegacy_6;
	// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourcePressedLegacy
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * ___InteractionSourcePressedLegacy_7;
	// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceReleasedLegacy
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * ___InteractionSourceReleasedLegacy_8;
	// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceUpdatedLegacy
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * ___InteractionSourceUpdatedLegacy_9;

public:
	inline static int32_t get_offset_of_InteractionSourceDetected_0() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceDetected_0)); }
	inline Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * get_InteractionSourceDetected_0() const { return ___InteractionSourceDetected_0; }
	inline Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 ** get_address_of_InteractionSourceDetected_0() { return &___InteractionSourceDetected_0; }
	inline void set_InteractionSourceDetected_0(Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * value)
	{
		___InteractionSourceDetected_0 = value;
		Il2CppCodeGenWriteBarrier((&___InteractionSourceDetected_0), value);
	}

	inline static int32_t get_offset_of_InteractionSourceLost_1() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceLost_1)); }
	inline Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * get_InteractionSourceLost_1() const { return ___InteractionSourceLost_1; }
	inline Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA ** get_address_of_InteractionSourceLost_1() { return &___InteractionSourceLost_1; }
	inline void set_InteractionSourceLost_1(Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * value)
	{
		___InteractionSourceLost_1 = value;
		Il2CppCodeGenWriteBarrier((&___InteractionSourceLost_1), value);
	}

	inline static int32_t get_offset_of_InteractionSourcePressed_2() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourcePressed_2)); }
	inline Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * get_InteractionSourcePressed_2() const { return ___InteractionSourcePressed_2; }
	inline Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 ** get_address_of_InteractionSourcePressed_2() { return &___InteractionSourcePressed_2; }
	inline void set_InteractionSourcePressed_2(Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * value)
	{
		___InteractionSourcePressed_2 = value;
		Il2CppCodeGenWriteBarrier((&___InteractionSourcePressed_2), value);
	}

	inline static int32_t get_offset_of_InteractionSourceReleased_3() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceReleased_3)); }
	inline Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * get_InteractionSourceReleased_3() const { return ___InteractionSourceReleased_3; }
	inline Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 ** get_address_of_InteractionSourceReleased_3() { return &___InteractionSourceReleased_3; }
	inline void set_InteractionSourceReleased_3(Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * value)
	{
		___InteractionSourceReleased_3 = value;
		Il2CppCodeGenWriteBarrier((&___InteractionSourceReleased_3), value);
	}

	inline static int32_t get_offset_of_InteractionSourceUpdated_4() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceUpdated_4)); }
	inline Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * get_InteractionSourceUpdated_4() const { return ___InteractionSourceUpdated_4; }
	inline Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 ** get_address_of_InteractionSourceUpdated_4() { return &___InteractionSourceUpdated_4; }
	inline void set_InteractionSourceUpdated_4(Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * value)
	{
		___InteractionSourceUpdated_4 = value;
		Il2CppCodeGenWriteBarrier((&___InteractionSourceUpdated_4), value);
	}

	inline static int32_t get_offset_of_InteractionSourceDetectedLegacy_5() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceDetectedLegacy_5)); }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * get_InteractionSourceDetectedLegacy_5() const { return ___InteractionSourceDetectedLegacy_5; }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 ** get_address_of_InteractionSourceDetectedLegacy_5() { return &___InteractionSourceDetectedLegacy_5; }
	inline void set_InteractionSourceDetectedLegacy_5(SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * value)
	{
		___InteractionSourceDetectedLegacy_5 = value;
		Il2CppCodeGenWriteBarrier((&___InteractionSourceDetectedLegacy_5), value);
	}

	inline static int32_t get_offset_of_InteractionSourceLostLegacy_6() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceLostLegacy_6)); }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * get_InteractionSourceLostLegacy_6() const { return ___InteractionSourceLostLegacy_6; }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 ** get_address_of_InteractionSourceLostLegacy_6() { return &___InteractionSourceLostLegacy_6; }
	inline void set_InteractionSourceLostLegacy_6(SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * value)
	{
		___InteractionSourceLostLegacy_6 = value;
		Il2CppCodeGenWriteBarrier((&___InteractionSourceLostLegacy_6), value);
	}

	inline static int32_t get_offset_of_InteractionSourcePressedLegacy_7() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourcePressedLegacy_7)); }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * get_InteractionSourcePressedLegacy_7() const { return ___InteractionSourcePressedLegacy_7; }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 ** get_address_of_InteractionSourcePressedLegacy_7() { return &___InteractionSourcePressedLegacy_7; }
	inline void set_InteractionSourcePressedLegacy_7(SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * value)
	{
		___InteractionSourcePressedLegacy_7 = value;
		Il2CppCodeGenWriteBarrier((&___InteractionSourcePressedLegacy_7), value);
	}

	inline static int32_t get_offset_of_InteractionSourceReleasedLegacy_8() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceReleasedLegacy_8)); }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * get_InteractionSourceReleasedLegacy_8() const { return ___InteractionSourceReleasedLegacy_8; }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 ** get_address_of_InteractionSourceReleasedLegacy_8() { return &___InteractionSourceReleasedLegacy_8; }
	inline void set_InteractionSourceReleasedLegacy_8(SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * value)
	{
		___InteractionSourceReleasedLegacy_8 = value;
		Il2CppCodeGenWriteBarrier((&___InteractionSourceReleasedLegacy_8), value);
	}

	inline static int32_t get_offset_of_InteractionSourceUpdatedLegacy_9() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceUpdatedLegacy_9)); }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * get_InteractionSourceUpdatedLegacy_9() const { return ___InteractionSourceUpdatedLegacy_9; }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 ** get_address_of_InteractionSourceUpdatedLegacy_9() { return &___InteractionSourceUpdatedLegacy_9; }
	inline void set_InteractionSourceUpdatedLegacy_9(SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * value)
	{
		___InteractionSourceUpdatedLegacy_9 = value;
		Il2CppCodeGenWriteBarrier((&___InteractionSourceUpdatedLegacy_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONMANAGER_TD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_H
#ifndef WORLDMANAGER_T92F845DF2530AD354D4805170141AFE73AFFA863_H
#define WORLDMANAGER_T92F845DF2530AD354D4805170141AFE73AFFA863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WorldManager
struct  WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863  : public RuntimeObject
{
public:

public:
};

struct WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_StaticFields
{
public:
	// UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate UnityEngine.XR.WSA.WorldManager::OnPositionalLocatorStateChanged
	OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * ___OnPositionalLocatorStateChanged_0;

public:
	inline static int32_t get_offset_of_OnPositionalLocatorStateChanged_0() { return static_cast<int32_t>(offsetof(WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_StaticFields, ___OnPositionalLocatorStateChanged_0)); }
	inline OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * get_OnPositionalLocatorStateChanged_0() const { return ___OnPositionalLocatorStateChanged_0; }
	inline OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B ** get_address_of_OnPositionalLocatorStateChanged_0() { return &___OnPositionalLocatorStateChanged_0; }
	inline void set_OnPositionalLocatorStateChanged_0(OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * value)
	{
		___OnPositionalLocatorStateChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnPositionalLocatorStateChanged_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDMANAGER_T92F845DF2530AD354D4805170141AFE73AFFA863_H
#ifndef XRDEVICE_T392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_H
#define XRDEVICE_T392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.XRDevice
struct  XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A  : public RuntimeObject
{
public:

public:
};

struct XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields
{
public:
	// System.Action`1<System.String> UnityEngine.XR.XRDevice::deviceLoaded
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___deviceLoaded_0;

public:
	inline static int32_t get_offset_of_deviceLoaded_0() { return static_cast<int32_t>(offsetof(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields, ___deviceLoaded_0)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_deviceLoaded_0() const { return ___deviceLoaded_0; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_deviceLoaded_0() { return &___deviceLoaded_0; }
	inline void set_deviceLoaded_0(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___deviceLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((&___deviceLoaded_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRDEVICE_T392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#define BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifndef DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#define DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#define INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
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
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#define UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
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
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef GESTUREERROREVENTARGS_TE93CF2521799DC9320F0B7A32C4CE279DC24E80C_H
#define GESTUREERROREVENTARGS_TE93CF2521799DC9320F0B7A32C4CE279DC24E80C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureErrorEventArgs
struct  GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C 
{
public:
	// System.String UnityEngine.XR.WSA.Input.GestureErrorEventArgs::<error>k__BackingField
	String_t* ___U3CerrorU3Ek__BackingField_0;
	// System.Int32 UnityEngine.XR.WSA.Input.GestureErrorEventArgs::<hresult>k__BackingField
	int32_t ___U3ChresultU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CerrorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C, ___U3CerrorU3Ek__BackingField_0)); }
	inline String_t* get_U3CerrorU3Ek__BackingField_0() const { return ___U3CerrorU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CerrorU3Ek__BackingField_0() { return &___U3CerrorU3Ek__BackingField_0; }
	inline void set_U3CerrorU3Ek__BackingField_0(String_t* value)
	{
		___U3CerrorU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CerrorU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3ChresultU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C, ___U3ChresultU3Ek__BackingField_1)); }
	inline int32_t get_U3ChresultU3Ek__BackingField_1() const { return ___U3ChresultU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3ChresultU3Ek__BackingField_1() { return &___U3ChresultU3Ek__BackingField_1; }
	inline void set_U3ChresultU3Ek__BackingField_1(int32_t value)
	{
		___U3ChresultU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Input.GestureErrorEventArgs
struct GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_pinvoke
{
	char* ___U3CerrorU3Ek__BackingField_0;
	int32_t ___U3ChresultU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Input.GestureErrorEventArgs
struct GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_com
{
	Il2CppChar* ___U3CerrorU3Ek__BackingField_0;
	int32_t ___U3ChresultU3Ek__BackingField_1;
};
#endif // GESTUREERROREVENTARGS_TE93CF2521799DC9320F0B7A32C4CE279DC24E80C_H
#ifndef SURFACEID_T5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF_H
#define SURFACEID_T5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SurfaceId
struct  SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceId::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURFACEID_T5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF_H
#ifndef ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#define ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#define BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef POSE_T2997DE3CB3863E4D78FCF42B46FC481818823F29_H
#define POSE_T2997DE3CB3863E4D78FCF42B46FC481818823F29_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSE_T2997DE3CB3863E4D78FCF42B46FC481818823F29_H
#ifndef RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#define RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#ifndef GESTURERECOGNIZER_TE4A3B36C495289B1DF1011E12394116A91E361DE_H
#define GESTURERECOGNIZER_TE4A3B36C495289B1DF1011E12394116A91E361DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer
struct  GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.Input.GestureRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCanceled
	Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * ___HoldCanceled_1;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCompleted
	Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * ___HoldCompleted_2;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldStarted
	Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * ___HoldStarted_3;
	// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::Tapped
	Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * ___Tapped_4;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCanceled
	Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * ___ManipulationCanceled_5;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCompleted
	Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * ___ManipulationCompleted_6;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationStarted
	Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * ___ManipulationStarted_7;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationUpdated
	Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * ___ManipulationUpdated_8;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCanceled
	Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * ___NavigationCanceled_9;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCompleted
	Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * ___NavigationCompleted_10;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationStarted
	Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * ___NavigationStarted_11;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationUpdated
	Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * ___NavigationUpdated_12;
	// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionEnded
	Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * ___RecognitionEnded_13;
	// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionStarted
	Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * ___RecognitionStarted_14;
	// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::GestureError
	Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * ___GestureError_15;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCanceledEvent
	HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * ___HoldCanceledEvent_16;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCompletedEvent
	HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * ___HoldCompletedEvent_17;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldStartedEvent
	HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * ___HoldStartedEvent_18;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::TappedEvent
	TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * ___TappedEvent_19;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCanceledEvent
	ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * ___ManipulationCanceledEvent_20;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCompletedEvent
	ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * ___ManipulationCompletedEvent_21;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationStartedEvent
	ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * ___ManipulationStartedEvent_22;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationUpdatedEvent
	ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * ___ManipulationUpdatedEvent_23;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCanceledEvent
	NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * ___NavigationCanceledEvent_24;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCompletedEvent
	NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * ___NavigationCompletedEvent_25;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationStartedEvent
	NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * ___NavigationStartedEvent_26;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationUpdatedEvent
	NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * ___NavigationUpdatedEvent_27;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionEndedEvent
	RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * ___RecognitionEndedEvent_28;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionStartedEvent
	RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * ___RecognitionStartedEvent_29;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::GestureErrorEvent
	GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * ___GestureErrorEvent_30;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_HoldCanceled_1() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCanceled_1)); }
	inline Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * get_HoldCanceled_1() const { return ___HoldCanceled_1; }
	inline Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B ** get_address_of_HoldCanceled_1() { return &___HoldCanceled_1; }
	inline void set_HoldCanceled_1(Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * value)
	{
		___HoldCanceled_1 = value;
		Il2CppCodeGenWriteBarrier((&___HoldCanceled_1), value);
	}

	inline static int32_t get_offset_of_HoldCompleted_2() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCompleted_2)); }
	inline Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * get_HoldCompleted_2() const { return ___HoldCompleted_2; }
	inline Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 ** get_address_of_HoldCompleted_2() { return &___HoldCompleted_2; }
	inline void set_HoldCompleted_2(Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * value)
	{
		___HoldCompleted_2 = value;
		Il2CppCodeGenWriteBarrier((&___HoldCompleted_2), value);
	}

	inline static int32_t get_offset_of_HoldStarted_3() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldStarted_3)); }
	inline Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * get_HoldStarted_3() const { return ___HoldStarted_3; }
	inline Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E ** get_address_of_HoldStarted_3() { return &___HoldStarted_3; }
	inline void set_HoldStarted_3(Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * value)
	{
		___HoldStarted_3 = value;
		Il2CppCodeGenWriteBarrier((&___HoldStarted_3), value);
	}

	inline static int32_t get_offset_of_Tapped_4() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___Tapped_4)); }
	inline Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * get_Tapped_4() const { return ___Tapped_4; }
	inline Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 ** get_address_of_Tapped_4() { return &___Tapped_4; }
	inline void set_Tapped_4(Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * value)
	{
		___Tapped_4 = value;
		Il2CppCodeGenWriteBarrier((&___Tapped_4), value);
	}

	inline static int32_t get_offset_of_ManipulationCanceled_5() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCanceled_5)); }
	inline Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * get_ManipulationCanceled_5() const { return ___ManipulationCanceled_5; }
	inline Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E ** get_address_of_ManipulationCanceled_5() { return &___ManipulationCanceled_5; }
	inline void set_ManipulationCanceled_5(Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * value)
	{
		___ManipulationCanceled_5 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationCanceled_5), value);
	}

	inline static int32_t get_offset_of_ManipulationCompleted_6() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCompleted_6)); }
	inline Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * get_ManipulationCompleted_6() const { return ___ManipulationCompleted_6; }
	inline Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F ** get_address_of_ManipulationCompleted_6() { return &___ManipulationCompleted_6; }
	inline void set_ManipulationCompleted_6(Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * value)
	{
		___ManipulationCompleted_6 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationCompleted_6), value);
	}

	inline static int32_t get_offset_of_ManipulationStarted_7() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationStarted_7)); }
	inline Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * get_ManipulationStarted_7() const { return ___ManipulationStarted_7; }
	inline Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E ** get_address_of_ManipulationStarted_7() { return &___ManipulationStarted_7; }
	inline void set_ManipulationStarted_7(Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * value)
	{
		___ManipulationStarted_7 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationStarted_7), value);
	}

	inline static int32_t get_offset_of_ManipulationUpdated_8() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationUpdated_8)); }
	inline Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * get_ManipulationUpdated_8() const { return ___ManipulationUpdated_8; }
	inline Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC ** get_address_of_ManipulationUpdated_8() { return &___ManipulationUpdated_8; }
	inline void set_ManipulationUpdated_8(Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * value)
	{
		___ManipulationUpdated_8 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationUpdated_8), value);
	}

	inline static int32_t get_offset_of_NavigationCanceled_9() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCanceled_9)); }
	inline Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * get_NavigationCanceled_9() const { return ___NavigationCanceled_9; }
	inline Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B ** get_address_of_NavigationCanceled_9() { return &___NavigationCanceled_9; }
	inline void set_NavigationCanceled_9(Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * value)
	{
		___NavigationCanceled_9 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationCanceled_9), value);
	}

	inline static int32_t get_offset_of_NavigationCompleted_10() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCompleted_10)); }
	inline Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * get_NavigationCompleted_10() const { return ___NavigationCompleted_10; }
	inline Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 ** get_address_of_NavigationCompleted_10() { return &___NavigationCompleted_10; }
	inline void set_NavigationCompleted_10(Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * value)
	{
		___NavigationCompleted_10 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationCompleted_10), value);
	}

	inline static int32_t get_offset_of_NavigationStarted_11() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationStarted_11)); }
	inline Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * get_NavigationStarted_11() const { return ___NavigationStarted_11; }
	inline Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E ** get_address_of_NavigationStarted_11() { return &___NavigationStarted_11; }
	inline void set_NavigationStarted_11(Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * value)
	{
		___NavigationStarted_11 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationStarted_11), value);
	}

	inline static int32_t get_offset_of_NavigationUpdated_12() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationUpdated_12)); }
	inline Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * get_NavigationUpdated_12() const { return ___NavigationUpdated_12; }
	inline Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C ** get_address_of_NavigationUpdated_12() { return &___NavigationUpdated_12; }
	inline void set_NavigationUpdated_12(Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * value)
	{
		___NavigationUpdated_12 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationUpdated_12), value);
	}

	inline static int32_t get_offset_of_RecognitionEnded_13() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionEnded_13)); }
	inline Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * get_RecognitionEnded_13() const { return ___RecognitionEnded_13; }
	inline Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 ** get_address_of_RecognitionEnded_13() { return &___RecognitionEnded_13; }
	inline void set_RecognitionEnded_13(Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * value)
	{
		___RecognitionEnded_13 = value;
		Il2CppCodeGenWriteBarrier((&___RecognitionEnded_13), value);
	}

	inline static int32_t get_offset_of_RecognitionStarted_14() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionStarted_14)); }
	inline Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * get_RecognitionStarted_14() const { return ___RecognitionStarted_14; }
	inline Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E ** get_address_of_RecognitionStarted_14() { return &___RecognitionStarted_14; }
	inline void set_RecognitionStarted_14(Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * value)
	{
		___RecognitionStarted_14 = value;
		Il2CppCodeGenWriteBarrier((&___RecognitionStarted_14), value);
	}

	inline static int32_t get_offset_of_GestureError_15() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___GestureError_15)); }
	inline Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * get_GestureError_15() const { return ___GestureError_15; }
	inline Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B ** get_address_of_GestureError_15() { return &___GestureError_15; }
	inline void set_GestureError_15(Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * value)
	{
		___GestureError_15 = value;
		Il2CppCodeGenWriteBarrier((&___GestureError_15), value);
	}

	inline static int32_t get_offset_of_HoldCanceledEvent_16() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCanceledEvent_16)); }
	inline HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * get_HoldCanceledEvent_16() const { return ___HoldCanceledEvent_16; }
	inline HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 ** get_address_of_HoldCanceledEvent_16() { return &___HoldCanceledEvent_16; }
	inline void set_HoldCanceledEvent_16(HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * value)
	{
		___HoldCanceledEvent_16 = value;
		Il2CppCodeGenWriteBarrier((&___HoldCanceledEvent_16), value);
	}

	inline static int32_t get_offset_of_HoldCompletedEvent_17() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCompletedEvent_17)); }
	inline HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * get_HoldCompletedEvent_17() const { return ___HoldCompletedEvent_17; }
	inline HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A ** get_address_of_HoldCompletedEvent_17() { return &___HoldCompletedEvent_17; }
	inline void set_HoldCompletedEvent_17(HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * value)
	{
		___HoldCompletedEvent_17 = value;
		Il2CppCodeGenWriteBarrier((&___HoldCompletedEvent_17), value);
	}

	inline static int32_t get_offset_of_HoldStartedEvent_18() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldStartedEvent_18)); }
	inline HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * get_HoldStartedEvent_18() const { return ___HoldStartedEvent_18; }
	inline HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 ** get_address_of_HoldStartedEvent_18() { return &___HoldStartedEvent_18; }
	inline void set_HoldStartedEvent_18(HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * value)
	{
		___HoldStartedEvent_18 = value;
		Il2CppCodeGenWriteBarrier((&___HoldStartedEvent_18), value);
	}

	inline static int32_t get_offset_of_TappedEvent_19() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___TappedEvent_19)); }
	inline TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * get_TappedEvent_19() const { return ___TappedEvent_19; }
	inline TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F ** get_address_of_TappedEvent_19() { return &___TappedEvent_19; }
	inline void set_TappedEvent_19(TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * value)
	{
		___TappedEvent_19 = value;
		Il2CppCodeGenWriteBarrier((&___TappedEvent_19), value);
	}

	inline static int32_t get_offset_of_ManipulationCanceledEvent_20() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCanceledEvent_20)); }
	inline ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * get_ManipulationCanceledEvent_20() const { return ___ManipulationCanceledEvent_20; }
	inline ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 ** get_address_of_ManipulationCanceledEvent_20() { return &___ManipulationCanceledEvent_20; }
	inline void set_ManipulationCanceledEvent_20(ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * value)
	{
		___ManipulationCanceledEvent_20 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationCanceledEvent_20), value);
	}

	inline static int32_t get_offset_of_ManipulationCompletedEvent_21() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCompletedEvent_21)); }
	inline ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * get_ManipulationCompletedEvent_21() const { return ___ManipulationCompletedEvent_21; }
	inline ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 ** get_address_of_ManipulationCompletedEvent_21() { return &___ManipulationCompletedEvent_21; }
	inline void set_ManipulationCompletedEvent_21(ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * value)
	{
		___ManipulationCompletedEvent_21 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationCompletedEvent_21), value);
	}

	inline static int32_t get_offset_of_ManipulationStartedEvent_22() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationStartedEvent_22)); }
	inline ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * get_ManipulationStartedEvent_22() const { return ___ManipulationStartedEvent_22; }
	inline ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 ** get_address_of_ManipulationStartedEvent_22() { return &___ManipulationStartedEvent_22; }
	inline void set_ManipulationStartedEvent_22(ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * value)
	{
		___ManipulationStartedEvent_22 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationStartedEvent_22), value);
	}

	inline static int32_t get_offset_of_ManipulationUpdatedEvent_23() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationUpdatedEvent_23)); }
	inline ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * get_ManipulationUpdatedEvent_23() const { return ___ManipulationUpdatedEvent_23; }
	inline ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 ** get_address_of_ManipulationUpdatedEvent_23() { return &___ManipulationUpdatedEvent_23; }
	inline void set_ManipulationUpdatedEvent_23(ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * value)
	{
		___ManipulationUpdatedEvent_23 = value;
		Il2CppCodeGenWriteBarrier((&___ManipulationUpdatedEvent_23), value);
	}

	inline static int32_t get_offset_of_NavigationCanceledEvent_24() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCanceledEvent_24)); }
	inline NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * get_NavigationCanceledEvent_24() const { return ___NavigationCanceledEvent_24; }
	inline NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 ** get_address_of_NavigationCanceledEvent_24() { return &___NavigationCanceledEvent_24; }
	inline void set_NavigationCanceledEvent_24(NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * value)
	{
		___NavigationCanceledEvent_24 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationCanceledEvent_24), value);
	}

	inline static int32_t get_offset_of_NavigationCompletedEvent_25() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCompletedEvent_25)); }
	inline NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * get_NavigationCompletedEvent_25() const { return ___NavigationCompletedEvent_25; }
	inline NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 ** get_address_of_NavigationCompletedEvent_25() { return &___NavigationCompletedEvent_25; }
	inline void set_NavigationCompletedEvent_25(NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * value)
	{
		___NavigationCompletedEvent_25 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationCompletedEvent_25), value);
	}

	inline static int32_t get_offset_of_NavigationStartedEvent_26() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationStartedEvent_26)); }
	inline NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * get_NavigationStartedEvent_26() const { return ___NavigationStartedEvent_26; }
	inline NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF ** get_address_of_NavigationStartedEvent_26() { return &___NavigationStartedEvent_26; }
	inline void set_NavigationStartedEvent_26(NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * value)
	{
		___NavigationStartedEvent_26 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationStartedEvent_26), value);
	}

	inline static int32_t get_offset_of_NavigationUpdatedEvent_27() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationUpdatedEvent_27)); }
	inline NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * get_NavigationUpdatedEvent_27() const { return ___NavigationUpdatedEvent_27; }
	inline NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A ** get_address_of_NavigationUpdatedEvent_27() { return &___NavigationUpdatedEvent_27; }
	inline void set_NavigationUpdatedEvent_27(NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * value)
	{
		___NavigationUpdatedEvent_27 = value;
		Il2CppCodeGenWriteBarrier((&___NavigationUpdatedEvent_27), value);
	}

	inline static int32_t get_offset_of_RecognitionEndedEvent_28() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionEndedEvent_28)); }
	inline RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * get_RecognitionEndedEvent_28() const { return ___RecognitionEndedEvent_28; }
	inline RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B ** get_address_of_RecognitionEndedEvent_28() { return &___RecognitionEndedEvent_28; }
	inline void set_RecognitionEndedEvent_28(RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * value)
	{
		___RecognitionEndedEvent_28 = value;
		Il2CppCodeGenWriteBarrier((&___RecognitionEndedEvent_28), value);
	}

	inline static int32_t get_offset_of_RecognitionStartedEvent_29() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionStartedEvent_29)); }
	inline RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * get_RecognitionStartedEvent_29() const { return ___RecognitionStartedEvent_29; }
	inline RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 ** get_address_of_RecognitionStartedEvent_29() { return &___RecognitionStartedEvent_29; }
	inline void set_RecognitionStartedEvent_29(RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * value)
	{
		___RecognitionStartedEvent_29 = value;
		Il2CppCodeGenWriteBarrier((&___RecognitionStartedEvent_29), value);
	}

	inline static int32_t get_offset_of_GestureErrorEvent_30() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___GestureErrorEvent_30)); }
	inline GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * get_GestureErrorEvent_30() const { return ___GestureErrorEvent_30; }
	inline GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 ** get_address_of_GestureErrorEvent_30() { return &___GestureErrorEvent_30; }
	inline void set_GestureErrorEvent_30(GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * value)
	{
		___GestureErrorEvent_30 = value;
		Il2CppCodeGenWriteBarrier((&___GestureErrorEvent_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_pinvoke
{
	intptr_t ___m_Recognizer_0;
	Il2CppMethodPointer ___HoldCanceled_1;
	Il2CppMethodPointer ___HoldCompleted_2;
	Il2CppMethodPointer ___HoldStarted_3;
	Il2CppMethodPointer ___Tapped_4;
	Il2CppMethodPointer ___ManipulationCanceled_5;
	Il2CppMethodPointer ___ManipulationCompleted_6;
	Il2CppMethodPointer ___ManipulationStarted_7;
	Il2CppMethodPointer ___ManipulationUpdated_8;
	Il2CppMethodPointer ___NavigationCanceled_9;
	Il2CppMethodPointer ___NavigationCompleted_10;
	Il2CppMethodPointer ___NavigationStarted_11;
	Il2CppMethodPointer ___NavigationUpdated_12;
	Il2CppMethodPointer ___RecognitionEnded_13;
	Il2CppMethodPointer ___RecognitionStarted_14;
	Il2CppMethodPointer ___GestureError_15;
	Il2CppMethodPointer ___HoldCanceledEvent_16;
	Il2CppMethodPointer ___HoldCompletedEvent_17;
	Il2CppMethodPointer ___HoldStartedEvent_18;
	Il2CppMethodPointer ___TappedEvent_19;
	Il2CppMethodPointer ___ManipulationCanceledEvent_20;
	Il2CppMethodPointer ___ManipulationCompletedEvent_21;
	Il2CppMethodPointer ___ManipulationStartedEvent_22;
	Il2CppMethodPointer ___ManipulationUpdatedEvent_23;
	Il2CppMethodPointer ___NavigationCanceledEvent_24;
	Il2CppMethodPointer ___NavigationCompletedEvent_25;
	Il2CppMethodPointer ___NavigationStartedEvent_26;
	Il2CppMethodPointer ___NavigationUpdatedEvent_27;
	Il2CppMethodPointer ___RecognitionEndedEvent_28;
	Il2CppMethodPointer ___RecognitionStartedEvent_29;
	Il2CppMethodPointer ___GestureErrorEvent_30;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_com
{
	intptr_t ___m_Recognizer_0;
	Il2CppMethodPointer ___HoldCanceled_1;
	Il2CppMethodPointer ___HoldCompleted_2;
	Il2CppMethodPointer ___HoldStarted_3;
	Il2CppMethodPointer ___Tapped_4;
	Il2CppMethodPointer ___ManipulationCanceled_5;
	Il2CppMethodPointer ___ManipulationCompleted_6;
	Il2CppMethodPointer ___ManipulationStarted_7;
	Il2CppMethodPointer ___ManipulationUpdated_8;
	Il2CppMethodPointer ___NavigationCanceled_9;
	Il2CppMethodPointer ___NavigationCompleted_10;
	Il2CppMethodPointer ___NavigationStarted_11;
	Il2CppMethodPointer ___NavigationUpdated_12;
	Il2CppMethodPointer ___RecognitionEnded_13;
	Il2CppMethodPointer ___RecognitionStarted_14;
	Il2CppMethodPointer ___GestureError_15;
	Il2CppMethodPointer ___HoldCanceledEvent_16;
	Il2CppMethodPointer ___HoldCompletedEvent_17;
	Il2CppMethodPointer ___HoldStartedEvent_18;
	Il2CppMethodPointer ___TappedEvent_19;
	Il2CppMethodPointer ___ManipulationCanceledEvent_20;
	Il2CppMethodPointer ___ManipulationCompletedEvent_21;
	Il2CppMethodPointer ___ManipulationStartedEvent_22;
	Il2CppMethodPointer ___ManipulationUpdatedEvent_23;
	Il2CppMethodPointer ___NavigationCanceledEvent_24;
	Il2CppMethodPointer ___NavigationCompletedEvent_25;
	Il2CppMethodPointer ___NavigationStartedEvent_26;
	Il2CppMethodPointer ___NavigationUpdatedEvent_27;
	Il2CppMethodPointer ___RecognitionEndedEvent_28;
	Il2CppMethodPointer ___RecognitionStartedEvent_29;
	Il2CppMethodPointer ___GestureErrorEvent_30;
};
#endif // GESTURERECOGNIZER_TE4A3B36C495289B1DF1011E12394116A91E361DE_H
#ifndef EVENTTYPE_T9BDE5A5CA4F2A5DF83013032DAA8CAFB401AD80C_H
#define EVENTTYPE_T9BDE5A5CA4F2A5DF83013032DAA8CAFB401AD80C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionManager_EventType
struct  EventType_t9BDE5A5CA4F2A5DF83013032DAA8CAFB401AD80C 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionManager_EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_t9BDE5A5CA4F2A5DF83013032DAA8CAFB401AD80C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTTYPE_T9BDE5A5CA4F2A5DF83013032DAA8CAFB401AD80C_H
#ifndef INTERACTIONSOURCEFLAGS_TFEED23CE62EF1B04EEBB6C7DD1CA6921D73E9BBE_H
#define INTERACTIONSOURCEFLAGS_TFEED23CE62EF1B04EEBB6C7DD1CA6921D73E9BBE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceFlags
struct  InteractionSourceFlags_tFEED23CE62EF1B04EEBB6C7DD1CA6921D73E9BBE 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceFlags_tFEED23CE62EF1B04EEBB6C7DD1CA6921D73E9BBE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEFLAGS_TFEED23CE62EF1B04EEBB6C7DD1CA6921D73E9BBE_H
#ifndef INTERACTIONSOURCEHANDEDNESS_T10FDFBFAABBC3E04468D3AE77CE3614E7DD9308E_H
#define INTERACTIONSOURCEHANDEDNESS_T10FDFBFAABBC3E04468D3AE77CE3614E7DD9308E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceHandedness
struct  InteractionSourceHandedness_t10FDFBFAABBC3E04468D3AE77CE3614E7DD9308E 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceHandedness_t10FDFBFAABBC3E04468D3AE77CE3614E7DD9308E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEHANDEDNESS_T10FDFBFAABBC3E04468D3AE77CE3614E7DD9308E_H
#ifndef INTERACTIONSOURCEKIND_T5405F2951F4D1FC7D041FBAC720950BDA3CD3819_H
#define INTERACTIONSOURCEKIND_T5405F2951F4D1FC7D041FBAC720950BDA3CD3819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceKind
struct  InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEKIND_T5405F2951F4D1FC7D041FBAC720950BDA3CD3819_H
#ifndef INTERACTIONSOURCEPOSEFLAGS_T46E1164F226BCDCDEAD84C338483E7A401794BA8_H
#define INTERACTIONSOURCEPOSEFLAGS_T46E1164F226BCDCDEAD84C338483E7A401794BA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags
struct  InteractionSourcePoseFlags_t46E1164F226BCDCDEAD84C338483E7A401794BA8 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePoseFlags_t46E1164F226BCDCDEAD84C338483E7A401794BA8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEPOSEFLAGS_T46E1164F226BCDCDEAD84C338483E7A401794BA8_H
#ifndef INTERACTIONSOURCEPOSITIONACCURACY_T53AC6BBABBE0182903C6CA4529BD2FA3479276AD_H
#define INTERACTIONSOURCEPOSITIONACCURACY_T53AC6BBABBE0182903C6CA4529BD2FA3479276AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy
struct  InteractionSourcePositionAccuracy_t53AC6BBABBE0182903C6CA4529BD2FA3479276AD 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePositionAccuracy_t53AC6BBABBE0182903C6CA4529BD2FA3479276AD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEPOSITIONACCURACY_T53AC6BBABBE0182903C6CA4529BD2FA3479276AD_H
#ifndef INTERACTIONSOURCEPRESSTYPE_TC4234E53B3E760D31EC9D35FF56FE667D33A182D_H
#define INTERACTIONSOURCEPRESSTYPE_TC4234E53B3E760D31EC9D35FF56FE667D33A182D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourcePressType
struct  InteractionSourcePressType_tC4234E53B3E760D31EC9D35FF56FE667D33A182D 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePressType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePressType_tC4234E53B3E760D31EC9D35FF56FE667D33A182D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEPRESSTYPE_TC4234E53B3E760D31EC9D35FF56FE667D33A182D_H
#ifndef INTERACTIONSOURCESTATEFLAGS_T44E9FA88305A647259525473BD922773CACB5905_H
#define INTERACTIONSOURCESTATEFLAGS_T44E9FA88305A647259525473BD922773CACB5905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceStateFlags
struct  InteractionSourceStateFlags_t44E9FA88305A647259525473BD922773CACB5905 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceStateFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceStateFlags_t44E9FA88305A647259525473BD922773CACB5905, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCESTATEFLAGS_T44E9FA88305A647259525473BD922773CACB5905_H
#ifndef WORLDANCHORSTORE_TD361F689FE6F087AD3F38BA8724398992434E225_H
#define WORLDANCHORSTORE_TD361F689FE6F087AD3F38BA8724398992434E225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct  WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.Persistence.WorldAnchorStore::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_StaticFields
{
public:
	// UnityEngine.XR.WSA.Persistence.WorldAnchorStore UnityEngine.XR.WSA.Persistence.WorldAnchorStore::s_Instance
	WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * ___s_Instance_1;

public:
	inline static int32_t get_offset_of_s_Instance_1() { return static_cast<int32_t>(offsetof(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_StaticFields, ___s_Instance_1)); }
	inline WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * get_s_Instance_1() const { return ___s_Instance_1; }
	inline WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 ** get_address_of_s_Instance_1() { return &___s_Instance_1; }
	inline void set_s_Instance_1(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * value)
	{
		___s_Instance_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};
#endif // WORLDANCHORSTORE_TD361F689FE6F087AD3F38BA8724398992434E225_H
#ifndef POSITIONALLOCATORSTATE_TE622489AA7DB67A92489D77CD1EF22EC2C5F0598_H
#define POSITIONALLOCATORSTATE_TE622489AA7DB67A92489D77CD1EF22EC2C5F0598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.PositionalLocatorState
struct  PositionalLocatorState_tE622489AA7DB67A92489D77CD1EF22EC2C5F0598 
{
public:
	// System.Int32 UnityEngine.XR.WSA.PositionalLocatorState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PositionalLocatorState_tE622489AA7DB67A92489D77CD1EF22EC2C5F0598, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONALLOCATORSTATE_TE622489AA7DB67A92489D77CD1EF22EC2C5F0598_H
#ifndef SERIALIZATIONCOMPLETIONREASON_T36D4884AF265179731484C44E5A95235EB6F3987_H
#define SERIALIZATIONCOMPLETIONREASON_T36D4884AF265179731484C44E5A95235EB6F3987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Sharing.SerializationCompletionReason
struct  SerializationCompletionReason_t36D4884AF265179731484C44E5A95235EB6F3987 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Sharing.SerializationCompletionReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationCompletionReason_t36D4884AF265179731484C44E5A95235EB6F3987, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONCOMPLETIONREASON_T36D4884AF265179731484C44E5A95235EB6F3987_H
#ifndef WORLDANCHORTRANSFERBATCH_T7BF25F7D67684AD6C02C3162A81797BC9045BF96_H
#define WORLDANCHORTRANSFERBATCH_T7BF25F7D67684AD6C02C3162A81797BC9045BF96_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
struct  WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
struct WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
struct WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};
#endif // WORLDANCHORTRANSFERBATCH_T7BF25F7D67684AD6C02C3162A81797BC9045BF96_H
#ifndef SURFACECHANGE_T2E92CB8BA67A369A733BBEBD7087706B8E8FA747_H
#define SURFACECHANGE_T2E92CB8BA67A369A733BBEBD7087706B8E8FA747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SurfaceChange
struct  SurfaceChange_t2E92CB8BA67A369A733BBEBD7087706B8E8FA747 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceChange::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SurfaceChange_t2E92CB8BA67A369A733BBEBD7087706B8E8FA747, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURFACECHANGE_T2E92CB8BA67A369A733BBEBD7087706B8E8FA747_H
#ifndef SURFACEDATA_T4C48F847E8643D6640786CC364CDB510C7C60C66_H
#define SURFACEDATA_T4C48F847E8643D6640786CC364CDB510C7C60C66_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SurfaceData
struct  SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 
{
public:
	// UnityEngine.XR.WSA.SurfaceId UnityEngine.XR.WSA.SurfaceData::id
	SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___id_0;
	// UnityEngine.MeshFilter UnityEngine.XR.WSA.SurfaceData::outputMesh
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___outputMesh_1;
	// UnityEngine.XR.WSA.WorldAnchor UnityEngine.XR.WSA.SurfaceData::outputAnchor
	WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___outputAnchor_2;
	// UnityEngine.MeshCollider UnityEngine.XR.WSA.SurfaceData::outputCollider
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___outputCollider_3;
	// System.Single UnityEngine.XR.WSA.SurfaceData::trianglesPerCubicMeter
	float ___trianglesPerCubicMeter_4;
	// System.Boolean UnityEngine.XR.WSA.SurfaceData::bakeCollider
	bool ___bakeCollider_5;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___id_0)); }
	inline SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  get_id_0() const { return ___id_0; }
	inline SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF * get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_outputMesh_1() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___outputMesh_1)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_outputMesh_1() const { return ___outputMesh_1; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_outputMesh_1() { return &___outputMesh_1; }
	inline void set_outputMesh_1(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___outputMesh_1 = value;
		Il2CppCodeGenWriteBarrier((&___outputMesh_1), value);
	}

	inline static int32_t get_offset_of_outputAnchor_2() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___outputAnchor_2)); }
	inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * get_outputAnchor_2() const { return ___outputAnchor_2; }
	inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE ** get_address_of_outputAnchor_2() { return &___outputAnchor_2; }
	inline void set_outputAnchor_2(WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * value)
	{
		___outputAnchor_2 = value;
		Il2CppCodeGenWriteBarrier((&___outputAnchor_2), value);
	}

	inline static int32_t get_offset_of_outputCollider_3() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___outputCollider_3)); }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * get_outputCollider_3() const { return ___outputCollider_3; }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE ** get_address_of_outputCollider_3() { return &___outputCollider_3; }
	inline void set_outputCollider_3(MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * value)
	{
		___outputCollider_3 = value;
		Il2CppCodeGenWriteBarrier((&___outputCollider_3), value);
	}

	inline static int32_t get_offset_of_trianglesPerCubicMeter_4() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___trianglesPerCubicMeter_4)); }
	inline float get_trianglesPerCubicMeter_4() const { return ___trianglesPerCubicMeter_4; }
	inline float* get_address_of_trianglesPerCubicMeter_4() { return &___trianglesPerCubicMeter_4; }
	inline void set_trianglesPerCubicMeter_4(float value)
	{
		___trianglesPerCubicMeter_4 = value;
	}

	inline static int32_t get_offset_of_bakeCollider_5() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___bakeCollider_5)); }
	inline bool get_bakeCollider_5() const { return ___bakeCollider_5; }
	inline bool* get_address_of_bakeCollider_5() { return &___bakeCollider_5; }
	inline void set_bakeCollider_5(bool value)
	{
		___bakeCollider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SurfaceData
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke
{
	SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___id_0;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___outputMesh_1;
	WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___outputAnchor_2;
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___outputCollider_3;
	float ___trianglesPerCubicMeter_4;
	int32_t ___bakeCollider_5;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SurfaceData
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com
{
	SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___id_0;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___outputMesh_1;
	WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___outputAnchor_2;
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___outputCollider_3;
	float ___trianglesPerCubicMeter_4;
	int32_t ___bakeCollider_5;
};
#endif // SURFACEDATA_T4C48F847E8643D6640786CC364CDB510C7C60C66_H
#ifndef SURFACEOBSERVER_TE97E43137858D5F6A417980ECDABAC2BB4CF1864_H
#define SURFACEOBSERVER_TE97E43137858D5F6A417980ECDABAC2BB4CF1864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SurfaceObserver
struct  SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.SurfaceObserver::m_Observer
	intptr_t ___m_Observer_0;

public:
	inline static int32_t get_offset_of_m_Observer_0() { return static_cast<int32_t>(offsetof(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864, ___m_Observer_0)); }
	inline intptr_t get_m_Observer_0() const { return ___m_Observer_0; }
	inline intptr_t* get_address_of_m_Observer_0() { return &___m_Observer_0; }
	inline void set_m_Observer_0(intptr_t value)
	{
		___m_Observer_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke
{
	intptr_t ___m_Observer_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com
{
	intptr_t ___m_Observer_0;
};
#endif // SURFACEOBSERVER_TE97E43137858D5F6A417980ECDABAC2BB4CF1864_H
#ifndef CAPTUREPIXELFORMAT_T64565A1AEB518EC08EEA6831A4840B3193FA97DD_H
#define CAPTUREPIXELFORMAT_T64565A1AEB518EC08EEA6831A4840B3193FA97DD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.CapturePixelFormat
struct  CapturePixelFormat_t64565A1AEB518EC08EEA6831A4840B3193FA97DD 
{
public:
	// System.Int32 UnityEngine.XR.WSA.WebCam.CapturePixelFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CapturePixelFormat_t64565A1AEB518EC08EEA6831A4840B3193FA97DD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTUREPIXELFORMAT_T64565A1AEB518EC08EEA6831A4840B3193FA97DD_H
#ifndef PHOTOCAPTURE_TC694C9CC6FC59F3D9B74984A47CB594502FAB307_H
#define PHOTOCAPTURE_TC694C9CC6FC59F3D9B74984A47CB594502FAB307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.PhotoCapture
struct  PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.WebCam.PhotoCapture::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_StaticFields
{
public:
	// System.Int64 UnityEngine.XR.WSA.WebCam.PhotoCapture::HR_SUCCESS
	int64_t ___HR_SUCCESS_1;

public:
	inline static int32_t get_offset_of_HR_SUCCESS_1() { return static_cast<int32_t>(offsetof(PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_StaticFields, ___HR_SUCCESS_1)); }
	inline int64_t get_HR_SUCCESS_1() const { return ___HR_SUCCESS_1; }
	inline int64_t* get_address_of_HR_SUCCESS_1() { return &___HR_SUCCESS_1; }
	inline void set_HR_SUCCESS_1(int64_t value)
	{
		___HR_SUCCESS_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.WebCam.PhotoCapture
struct PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.WebCam.PhotoCapture
struct PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};
#endif // PHOTOCAPTURE_TC694C9CC6FC59F3D9B74984A47CB594502FAB307_H
#ifndef CAPTURERESULTTYPE_T6558EC085D1F5804260CE9BAE4754D4F1D55C657_H
#define CAPTURERESULTTYPE_T6558EC085D1F5804260CE9BAE4754D4F1D55C657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.PhotoCapture_CaptureResultType
struct  CaptureResultType_t6558EC085D1F5804260CE9BAE4754D4F1D55C657 
{
public:
	// System.Int32 UnityEngine.XR.WSA.WebCam.PhotoCapture_CaptureResultType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CaptureResultType_t6558EC085D1F5804260CE9BAE4754D4F1D55C657, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURERESULTTYPE_T6558EC085D1F5804260CE9BAE4754D4F1D55C657_H
#ifndef VIDEOCAPTURE_T5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_H
#define VIDEOCAPTURE_T5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.VideoCapture
struct  VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.WebCam.VideoCapture::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_StaticFields
{
public:
	// System.Int64 UnityEngine.XR.WSA.WebCam.VideoCapture::HR_SUCCESS
	int64_t ___HR_SUCCESS_1;

public:
	inline static int32_t get_offset_of_HR_SUCCESS_1() { return static_cast<int32_t>(offsetof(VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_StaticFields, ___HR_SUCCESS_1)); }
	inline int64_t get_HR_SUCCESS_1() const { return ___HR_SUCCESS_1; }
	inline int64_t* get_address_of_HR_SUCCESS_1() { return &___HR_SUCCESS_1; }
	inline void set_HR_SUCCESS_1(int64_t value)
	{
		___HR_SUCCESS_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.WebCam.VideoCapture
struct VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.WebCam.VideoCapture
struct VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};
#endif // VIDEOCAPTURE_T5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_H
#ifndef CAPTURERESULTTYPE_TE8A9D5707D57A1045C26B4B6E33D60E8D43AFFBE_H
#define CAPTURERESULTTYPE_TE8A9D5707D57A1045C26B4B6E33D60E8D43AFFBE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.VideoCapture_CaptureResultType
struct  CaptureResultType_tE8A9D5707D57A1045C26B4B6E33D60E8D43AFFBE 
{
public:
	// System.Int32 UnityEngine.XR.WSA.WebCam.VideoCapture_CaptureResultType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CaptureResultType_tE8A9D5707D57A1045C26B4B6E33D60E8D43AFFBE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURERESULTTYPE_TE8A9D5707D57A1045C26B4B6E33D60E8D43AFFBE_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef INTERACTIONSOURCE_T21335CC7BE7B9164D14283EEA3EC775AB2720DF6_H
#define INTERACTIONSOURCE_T21335CC7BE7B9164D14283EEA3EC775AB2720DF6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSource
struct  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 
{
public:
	// System.UInt32 UnityEngine.XR.WSA.Input.InteractionSource::m_Id
	uint32_t ___m_Id_0;
	// UnityEngine.XR.WSA.Input.InteractionSourceKind UnityEngine.XR.WSA.Input.InteractionSource::m_SourceKind
	int32_t ___m_SourceKind_1;
	// UnityEngine.XR.WSA.Input.InteractionSourceHandedness UnityEngine.XR.WSA.Input.InteractionSource::m_Handedness
	int32_t ___m_Handedness_2;
	// UnityEngine.XR.WSA.Input.InteractionSourceFlags UnityEngine.XR.WSA.Input.InteractionSource::m_Flags
	int32_t ___m_Flags_3;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_VendorId
	uint16_t ___m_VendorId_4;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductId
	uint16_t ___m_ProductId_5;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductVersion
	uint16_t ___m_ProductVersion_6;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_Id_0)); }
	inline uint32_t get_m_Id_0() const { return ___m_Id_0; }
	inline uint32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(uint32_t value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceKind_1() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_SourceKind_1)); }
	inline int32_t get_m_SourceKind_1() const { return ___m_SourceKind_1; }
	inline int32_t* get_address_of_m_SourceKind_1() { return &___m_SourceKind_1; }
	inline void set_m_SourceKind_1(int32_t value)
	{
		___m_SourceKind_1 = value;
	}

	inline static int32_t get_offset_of_m_Handedness_2() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_Handedness_2)); }
	inline int32_t get_m_Handedness_2() const { return ___m_Handedness_2; }
	inline int32_t* get_address_of_m_Handedness_2() { return &___m_Handedness_2; }
	inline void set_m_Handedness_2(int32_t value)
	{
		___m_Handedness_2 = value;
	}

	inline static int32_t get_offset_of_m_Flags_3() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_Flags_3)); }
	inline int32_t get_m_Flags_3() const { return ___m_Flags_3; }
	inline int32_t* get_address_of_m_Flags_3() { return &___m_Flags_3; }
	inline void set_m_Flags_3(int32_t value)
	{
		___m_Flags_3 = value;
	}

	inline static int32_t get_offset_of_m_VendorId_4() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_VendorId_4)); }
	inline uint16_t get_m_VendorId_4() const { return ___m_VendorId_4; }
	inline uint16_t* get_address_of_m_VendorId_4() { return &___m_VendorId_4; }
	inline void set_m_VendorId_4(uint16_t value)
	{
		___m_VendorId_4 = value;
	}

	inline static int32_t get_offset_of_m_ProductId_5() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_ProductId_5)); }
	inline uint16_t get_m_ProductId_5() const { return ___m_ProductId_5; }
	inline uint16_t* get_address_of_m_ProductId_5() { return &___m_ProductId_5; }
	inline void set_m_ProductId_5(uint16_t value)
	{
		___m_ProductId_5 = value;
	}

	inline static int32_t get_offset_of_m_ProductVersion_6() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_ProductVersion_6)); }
	inline uint16_t get_m_ProductVersion_6() const { return ___m_ProductVersion_6; }
	inline uint16_t* get_address_of_m_ProductVersion_6() { return &___m_ProductVersion_6; }
	inline void set_m_ProductVersion_6(uint16_t value)
	{
		___m_ProductVersion_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCE_T21335CC7BE7B9164D14283EEA3EC775AB2720DF6_H
#ifndef INTERACTIONSOURCEPOSE_T249CD43F634426269571F0E4689428ACC8C54F73_H
#define INTERACTIONSOURCEPOSE_T249CD43F634426269571F0E4689428ACC8C54F73_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourcePose
struct  InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 
{
public:
	// UnityEngine.Quaternion UnityEngine.XR.WSA.Input.InteractionSourcePose::m_GripRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_GripRotation_0;
	// UnityEngine.Quaternion UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PointerRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_PointerRotation_1;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_GripPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_GripPosition_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PointerPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_PointerPosition_3;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_Velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_AngularVelocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_AngularVelocity_5;
	// UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PositionAccuracy
	int32_t ___m_PositionAccuracy_6;
	// UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags UnityEngine.XR.WSA.Input.InteractionSourcePose::m_Flags
	int32_t ___m_Flags_7;

public:
	inline static int32_t get_offset_of_m_GripRotation_0() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_GripRotation_0)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_GripRotation_0() const { return ___m_GripRotation_0; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_GripRotation_0() { return &___m_GripRotation_0; }
	inline void set_m_GripRotation_0(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_GripRotation_0 = value;
	}

	inline static int32_t get_offset_of_m_PointerRotation_1() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_PointerRotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_PointerRotation_1() const { return ___m_PointerRotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_PointerRotation_1() { return &___m_PointerRotation_1; }
	inline void set_m_PointerRotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_PointerRotation_1 = value;
	}

	inline static int32_t get_offset_of_m_GripPosition_2() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_GripPosition_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_GripPosition_2() const { return ___m_GripPosition_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_GripPosition_2() { return &___m_GripPosition_2; }
	inline void set_m_GripPosition_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_GripPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PointerPosition_3() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_PointerPosition_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_PointerPosition_3() const { return ___m_PointerPosition_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_PointerPosition_3() { return &___m_PointerPosition_3; }
	inline void set_m_PointerPosition_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_PointerPosition_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_Velocity_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_AngularVelocity_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_PositionAccuracy_6() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_PositionAccuracy_6)); }
	inline int32_t get_m_PositionAccuracy_6() const { return ___m_PositionAccuracy_6; }
	inline int32_t* get_address_of_m_PositionAccuracy_6() { return &___m_PositionAccuracy_6; }
	inline void set_m_PositionAccuracy_6(int32_t value)
	{
		___m_PositionAccuracy_6 = value;
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEPOSE_T249CD43F634426269571F0E4689428ACC8C54F73_H
#ifndef PHOTOCAPTURERESULT_TB8F50F3F223E84B961166C1536336C2BC2C921AC_H
#define PHOTOCAPTURERESULT_TB8F50F3F223E84B961166C1536336C2BC2C921AC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.PhotoCapture_PhotoCaptureResult
struct  PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC 
{
public:
	// UnityEngine.XR.WSA.WebCam.PhotoCapture_CaptureResultType UnityEngine.XR.WSA.WebCam.PhotoCapture_PhotoCaptureResult::resultType
	int32_t ___resultType_0;
	// System.Int64 UnityEngine.XR.WSA.WebCam.PhotoCapture_PhotoCaptureResult::hResult
	int64_t ___hResult_1;

public:
	inline static int32_t get_offset_of_resultType_0() { return static_cast<int32_t>(offsetof(PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC, ___resultType_0)); }
	inline int32_t get_resultType_0() const { return ___resultType_0; }
	inline int32_t* get_address_of_resultType_0() { return &___resultType_0; }
	inline void set_resultType_0(int32_t value)
	{
		___resultType_0 = value;
	}

	inline static int32_t get_offset_of_hResult_1() { return static_cast<int32_t>(offsetof(PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC, ___hResult_1)); }
	inline int64_t get_hResult_1() const { return ___hResult_1; }
	inline int64_t* get_address_of_hResult_1() { return &___hResult_1; }
	inline void set_hResult_1(int64_t value)
	{
		___hResult_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTOCAPTURERESULT_TB8F50F3F223E84B961166C1536336C2BC2C921AC_H
#ifndef PHOTOCAPTUREFRAME_T6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858_H
#define PHOTOCAPTUREFRAME_T6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame
struct  PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::m_NativePtr
	intptr_t ___m_NativePtr_0;
	// System.Int32 UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::<dataLength>k__BackingField
	int32_t ___U3CdataLengthU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::<hasLocationData>k__BackingField
	bool ___U3ChasLocationDataU3Ek__BackingField_2;
	// UnityEngine.XR.WSA.WebCam.CapturePixelFormat UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::<pixelFormat>k__BackingField
	int32_t ___U3CpixelFormatU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}

	inline static int32_t get_offset_of_U3CdataLengthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858, ___U3CdataLengthU3Ek__BackingField_1)); }
	inline int32_t get_U3CdataLengthU3Ek__BackingField_1() const { return ___U3CdataLengthU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CdataLengthU3Ek__BackingField_1() { return &___U3CdataLengthU3Ek__BackingField_1; }
	inline void set_U3CdataLengthU3Ek__BackingField_1(int32_t value)
	{
		___U3CdataLengthU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3ChasLocationDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858, ___U3ChasLocationDataU3Ek__BackingField_2)); }
	inline bool get_U3ChasLocationDataU3Ek__BackingField_2() const { return ___U3ChasLocationDataU3Ek__BackingField_2; }
	inline bool* get_address_of_U3ChasLocationDataU3Ek__BackingField_2() { return &___U3ChasLocationDataU3Ek__BackingField_2; }
	inline void set_U3ChasLocationDataU3Ek__BackingField_2(bool value)
	{
		___U3ChasLocationDataU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CpixelFormatU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858, ___U3CpixelFormatU3Ek__BackingField_3)); }
	inline int32_t get_U3CpixelFormatU3Ek__BackingField_3() const { return ___U3CpixelFormatU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CpixelFormatU3Ek__BackingField_3() { return &___U3CpixelFormatU3Ek__BackingField_3; }
	inline void set_U3CpixelFormatU3Ek__BackingField_3(int32_t value)
	{
		___U3CpixelFormatU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTOCAPTUREFRAME_T6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858_H
#ifndef VIDEOCAPTURERESULT_T3D9C36316B2EF9E90EED5A151CAEB0BB40162D55_H
#define VIDEOCAPTURERESULT_T3D9C36316B2EF9E90EED5A151CAEB0BB40162D55_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.VideoCapture_VideoCaptureResult
struct  VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 
{
public:
	// UnityEngine.XR.WSA.WebCam.VideoCapture_CaptureResultType UnityEngine.XR.WSA.WebCam.VideoCapture_VideoCaptureResult::resultType
	int32_t ___resultType_0;
	// System.Int64 UnityEngine.XR.WSA.WebCam.VideoCapture_VideoCaptureResult::hResult
	int64_t ___hResult_1;

public:
	inline static int32_t get_offset_of_resultType_0() { return static_cast<int32_t>(offsetof(VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55, ___resultType_0)); }
	inline int32_t get_resultType_0() const { return ___resultType_0; }
	inline int32_t* get_address_of_resultType_0() { return &___resultType_0; }
	inline void set_resultType_0(int32_t value)
	{
		___resultType_0 = value;
	}

	inline static int32_t get_offset_of_hResult_1() { return static_cast<int32_t>(offsetof(VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55, ___hResult_1)); }
	inline int64_t get_hResult_1() const { return ___hResult_1; }
	inline int64_t* get_address_of_hResult_1() { return &___hResult_1; }
	inline void set_hResult_1(int64_t value)
	{
		___hResult_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOCAPTURERESULT_T3D9C36316B2EF9E90EED5A151CAEB0BB40162D55_H
#ifndef ACTION_1_T32A9EECF5D4397CC1B9A7C7079870875411B06D0_H
#define ACTION_1_T32A9EECF5D4397CC1B9A7C7079870875411B06D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.String>
struct  Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T32A9EECF5D4397CC1B9A7C7079870875411B06D0_H
#ifndef ACTION_1_T86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B_H
#define ACTION_1_T86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>
struct  Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef NULLABLE_1_T2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE_H
#define NULLABLE_1_T2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>
struct  Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE 
{
public:
	// T System.Nullable`1::value
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE, ___value_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_value_0() const { return ___value_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE_H
#ifndef COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#define COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#ifndef MESHFILTER_T8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_H
#define MESHFILTER_T8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_H
#ifndef GESTUREERRORDELEGATE_TFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084_H
#define GESTUREERRORDELEGATE_TFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate
struct  GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GESTUREERRORDELEGATE_TFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084_H
#ifndef HOLDCANCELEDEVENTDELEGATE_T5073A875A657B659A55D9111BF52AFA5E8FA22C2_H
#define HOLDCANCELEDEVENTDELEGATE_T5073A875A657B659A55D9111BF52AFA5E8FA22C2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate
struct  HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLDCANCELEDEVENTDELEGATE_T5073A875A657B659A55D9111BF52AFA5E8FA22C2_H
#ifndef HOLDCOMPLETEDEVENTDELEGATE_TE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A_H
#define HOLDCOMPLETEDEVENTDELEGATE_TE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate
struct  HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLDCOMPLETEDEVENTDELEGATE_TE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A_H
#ifndef HOLDSTARTEDEVENTDELEGATE_T79DBAFBD8DB4A33E282665E171EF7F7903DA57B2_H
#define HOLDSTARTEDEVENTDELEGATE_T79DBAFBD8DB4A33E282665E171EF7F7903DA57B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate
struct  HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLDSTARTEDEVENTDELEGATE_T79DBAFBD8DB4A33E282665E171EF7F7903DA57B2_H
#ifndef MANIPULATIONCANCELEDEVENTDELEGATE_T5D62D76C35A55841145479B9708F35A667B42917_H
#define MANIPULATIONCANCELEDEVENTDELEGATE_T5D62D76C35A55841145479B9708F35A667B42917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate
struct  ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIPULATIONCANCELEDEVENTDELEGATE_T5D62D76C35A55841145479B9708F35A667B42917_H
#ifndef MANIPULATIONCOMPLETEDEVENTDELEGATE_TFBC536B9D0EED5699871DB3855AA02653F35B6A4_H
#define MANIPULATIONCOMPLETEDEVENTDELEGATE_TFBC536B9D0EED5699871DB3855AA02653F35B6A4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate
struct  ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIPULATIONCOMPLETEDEVENTDELEGATE_TFBC536B9D0EED5699871DB3855AA02653F35B6A4_H
#ifndef MANIPULATIONSTARTEDEVENTDELEGATE_TECC88952F89E480F898CF5710A0A47D1BA85C9F0_H
#define MANIPULATIONSTARTEDEVENTDELEGATE_TECC88952F89E480F898CF5710A0A47D1BA85C9F0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate
struct  ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIPULATIONSTARTEDEVENTDELEGATE_TECC88952F89E480F898CF5710A0A47D1BA85C9F0_H
#ifndef MANIPULATIONUPDATEDEVENTDELEGATE_T521F96EEF0CE5D99D54AA2AB2D075CBD66D46406_H
#define MANIPULATIONUPDATEDEVENTDELEGATE_T521F96EEF0CE5D99D54AA2AB2D075CBD66D46406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate
struct  ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIPULATIONUPDATEDEVENTDELEGATE_T521F96EEF0CE5D99D54AA2AB2D075CBD66D46406_H
#ifndef NAVIGATIONCANCELEDEVENTDELEGATE_TA82EB6DFFB53212C7FADC09362EA424CEEF2A954_H
#define NAVIGATIONCANCELEDEVENTDELEGATE_TA82EB6DFFB53212C7FADC09362EA424CEEF2A954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate
struct  NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONCANCELEDEVENTDELEGATE_TA82EB6DFFB53212C7FADC09362EA424CEEF2A954_H
#ifndef NAVIGATIONCOMPLETEDEVENTDELEGATE_TF2B1D25EF7819624117F3C6E25E70F80B238F5D3_H
#define NAVIGATIONCOMPLETEDEVENTDELEGATE_TF2B1D25EF7819624117F3C6E25E70F80B238F5D3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate
struct  NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONCOMPLETEDEVENTDELEGATE_TF2B1D25EF7819624117F3C6E25E70F80B238F5D3_H
#ifndef NAVIGATIONSTARTEDEVENTDELEGATE_TC56D514B35B7270BBE8D21E15C435EDBA84F1AEF_H
#define NAVIGATIONSTARTEDEVENTDELEGATE_TC56D514B35B7270BBE8D21E15C435EDBA84F1AEF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate
struct  NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONSTARTEDEVENTDELEGATE_TC56D514B35B7270BBE8D21E15C435EDBA84F1AEF_H
#ifndef NAVIGATIONUPDATEDEVENTDELEGATE_T5802B4B5608A4D915714D70A5A51C82C6E34C69A_H
#define NAVIGATIONUPDATEDEVENTDELEGATE_T5802B4B5608A4D915714D70A5A51C82C6E34C69A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate
struct  NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONUPDATEDEVENTDELEGATE_T5802B4B5608A4D915714D70A5A51C82C6E34C69A_H
#ifndef RECOGNITIONENDEDEVENTDELEGATE_T00AB7FD9F0C0070CA19697B832E58151348F700B_H
#define RECOGNITIONENDEDEVENTDELEGATE_T00AB7FD9F0C0070CA19697B832E58151348F700B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate
struct  RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOGNITIONENDEDEVENTDELEGATE_T00AB7FD9F0C0070CA19697B832E58151348F700B_H
#ifndef RECOGNITIONSTARTEDEVENTDELEGATE_T8C076BC7E24C0326F46F8EBB3B3CB7495027B214_H
#define RECOGNITIONSTARTEDEVENTDELEGATE_T8C076BC7E24C0326F46F8EBB3B3CB7495027B214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate
struct  RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOGNITIONSTARTEDEVENTDELEGATE_T8C076BC7E24C0326F46F8EBB3B3CB7495027B214_H
#ifndef TAPPEDEVENTDELEGATE_TC33CDAA9CA071369B711FA5FDE947E122072D34F_H
#define TAPPEDEVENTDELEGATE_TC33CDAA9CA071369B711FA5FDE947E122072D34F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate
struct  TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAPPEDEVENTDELEGATE_TC33CDAA9CA071369B711FA5FDE947E122072D34F_H
#ifndef HOLDCANCELEDEVENTARGS_T1149229A845756F9A586E3DD91C3EFEEA1029244_H
#define HOLDCANCELEDEVENTARGS_T1149229A845756F9A586E3DD91C3EFEEA1029244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.HoldCanceledEventArgs
struct  HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldCanceledEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.HoldCanceledEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.HoldCanceledEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLDCANCELEDEVENTARGS_T1149229A845756F9A586E3DD91C3EFEEA1029244_H
#ifndef HOLDCOMPLETEDEVENTARGS_T13AD11A9EDEE4F627639E98E09910A72E82242B3_H
#define HOLDCOMPLETEDEVENTARGS_T13AD11A9EDEE4F627639E98E09910A72E82242B3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.HoldCompletedEventArgs
struct  HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldCompletedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.HoldCompletedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.HoldCompletedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLDCOMPLETEDEVENTARGS_T13AD11A9EDEE4F627639E98E09910A72E82242B3_H
#ifndef HOLDSTARTEDEVENTARGS_TF309FAD5ADD192662D046995D7A71B5F92CFA874_H
#define HOLDSTARTEDEVENTARGS_TF309FAD5ADD192662D046995D7A71B5F92CFA874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.HoldStartedEventArgs
struct  HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldStartedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.HoldStartedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.HoldStartedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLDSTARTEDEVENTARGS_TF309FAD5ADD192662D046995D7A71B5F92CFA874_H
#ifndef INTERACTIONSOURCEPROPERTIES_T4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A_H
#define INTERACTIONSOURCEPROPERTIES_T4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceProperties
struct  InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A 
{
public:
	// System.Double UnityEngine.XR.WSA.Input.InteractionSourceProperties::m_SourceLossRisk
	double ___m_SourceLossRisk_0;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourceProperties::m_SourceLossMitigationDirection
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_SourceLossMitigationDirection_1;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.InteractionSourceProperties::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_2;

public:
	inline static int32_t get_offset_of_m_SourceLossRisk_0() { return static_cast<int32_t>(offsetof(InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A, ___m_SourceLossRisk_0)); }
	inline double get_m_SourceLossRisk_0() const { return ___m_SourceLossRisk_0; }
	inline double* get_address_of_m_SourceLossRisk_0() { return &___m_SourceLossRisk_0; }
	inline void set_m_SourceLossRisk_0(double value)
	{
		___m_SourceLossRisk_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceLossMitigationDirection_1() { return static_cast<int32_t>(offsetof(InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A, ___m_SourceLossMitigationDirection_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_SourceLossMitigationDirection_1() const { return ___m_SourceLossMitigationDirection_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_SourceLossMitigationDirection_1() { return &___m_SourceLossMitigationDirection_1; }
	inline void set_m_SourceLossMitigationDirection_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_SourceLossMitigationDirection_1 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_2() { return static_cast<int32_t>(offsetof(InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A, ___m_SourcePose_2)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_2() const { return ___m_SourcePose_2; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_2() { return &___m_SourcePose_2; }
	inline void set_m_SourcePose_2(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEPROPERTIES_T4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A_H
#ifndef MANIPULATIONCANCELEDEVENTARGS_T6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417_H
#define MANIPULATIONCANCELEDEVENTARGS_T6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs
struct  ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIPULATIONCANCELEDEVENTARGS_T6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417_H
#ifndef MANIPULATIONCOMPLETEDEVENTARGS_T68FA66838267BEDC02E178D76EFC5E03D1958BA0_H
#define MANIPULATIONCOMPLETEDEVENTARGS_T68FA66838267BEDC02E178D76EFC5E03D1958BA0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs
struct  ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::m_CumulativeDelta
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_CumulativeDelta_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_CumulativeDelta_3() { return static_cast<int32_t>(offsetof(ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0, ___m_CumulativeDelta_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_CumulativeDelta_3() const { return ___m_CumulativeDelta_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_CumulativeDelta_3() { return &___m_CumulativeDelta_3; }
	inline void set_m_CumulativeDelta_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_CumulativeDelta_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIPULATIONCOMPLETEDEVENTARGS_T68FA66838267BEDC02E178D76EFC5E03D1958BA0_H
#ifndef MANIPULATIONSTARTEDEVENTARGS_T15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2_H
#define MANIPULATIONSTARTEDEVENTARGS_T15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs
struct  ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIPULATIONSTARTEDEVENTARGS_T15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2_H
#ifndef MANIPULATIONUPDATEDEVENTARGS_T6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E_H
#define MANIPULATIONUPDATEDEVENTARGS_T6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs
struct  ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::m_CumulativeDelta
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_CumulativeDelta_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_CumulativeDelta_3() { return static_cast<int32_t>(offsetof(ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E, ___m_CumulativeDelta_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_CumulativeDelta_3() const { return ___m_CumulativeDelta_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_CumulativeDelta_3() { return &___m_CumulativeDelta_3; }
	inline void set_m_CumulativeDelta_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_CumulativeDelta_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIPULATIONUPDATEDEVENTARGS_T6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E_H
#ifndef NAVIGATIONCANCELEDEVENTARGS_TC2B533AD31373B31AF9FDC354D3A07C749FC9760_H
#define NAVIGATIONCANCELEDEVENTARGS_TC2B533AD31373B31AF9FDC354D3A07C749FC9760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs
struct  NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONCANCELEDEVENTARGS_TC2B533AD31373B31AF9FDC354D3A07C749FC9760_H
#ifndef NAVIGATIONCOMPLETEDEVENTARGS_TA0A6DD23233401CBAE4848F6B6D0BA03DE647E39_H
#define NAVIGATIONCOMPLETEDEVENTARGS_TA0A6DD23233401CBAE4848F6B6D0BA03DE647E39_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs
struct  NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_NormalizedOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_NormalizedOffset_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedOffset_3() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39, ___m_NormalizedOffset_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_NormalizedOffset_3() const { return ___m_NormalizedOffset_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_NormalizedOffset_3() { return &___m_NormalizedOffset_3; }
	inline void set_m_NormalizedOffset_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_NormalizedOffset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONCOMPLETEDEVENTARGS_TA0A6DD23233401CBAE4848F6B6D0BA03DE647E39_H
#ifndef NAVIGATIONSTARTEDEVENTARGS_T834E02E24343414BB48A9099C7CF0C331C859339_H
#define NAVIGATIONSTARTEDEVENTARGS_T834E02E24343414BB48A9099C7CF0C331C859339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.NavigationStartedEventArgs
struct  NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONSTARTEDEVENTARGS_T834E02E24343414BB48A9099C7CF0C331C859339_H
#ifndef NAVIGATIONUPDATEDEVENTARGS_TC41595BC70171E7D2E16538C62923395B285F3BA_H
#define NAVIGATIONUPDATEDEVENTARGS_TC41595BC70171E7D2E16538C62923395B285F3BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs
struct  NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_NormalizedOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_NormalizedOffset_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedOffset_3() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA, ___m_NormalizedOffset_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_NormalizedOffset_3() const { return ___m_NormalizedOffset_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_NormalizedOffset_3() { return &___m_NormalizedOffset_3; }
	inline void set_m_NormalizedOffset_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_NormalizedOffset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONUPDATEDEVENTARGS_TC41595BC70171E7D2E16538C62923395B285F3BA_H
#ifndef RECOGNITIONENDEDEVENTARGS_T41420CD5725610A560C4316BD5DBE7F96504B8BB_H
#define RECOGNITIONENDEDEVENTARGS_T41420CD5725610A560C4316BD5DBE7F96504B8BB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs
struct  RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOGNITIONENDEDEVENTARGS_T41420CD5725610A560C4316BD5DBE7F96504B8BB_H
#ifndef RECOGNITIONSTARTEDEVENTARGS_T10FC01D91F3A18B7B03065C6C857473DCFD17E65_H
#define RECOGNITIONSTARTEDEVENTARGS_T10FC01D91F3A18B7B03065C6C857473DCFD17E65_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs
struct  RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOGNITIONSTARTEDEVENTARGS_T10FC01D91F3A18B7B03065C6C857473DCFD17E65_H
#ifndef TAPPEDEVENTARGS_T1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6_H
#define TAPPEDEVENTARGS_T1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.TappedEventArgs
struct  TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.TappedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.TappedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.TappedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// System.Int32 UnityEngine.XR.WSA.Input.TappedEventArgs::m_TapCount
	int32_t ___m_TapCount_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_3() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_TapCount_3)); }
	inline int32_t get_m_TapCount_3() const { return ___m_TapCount_3; }
	inline int32_t* get_address_of_m_TapCount_3() { return &___m_TapCount_3; }
	inline void set_m_TapCount_3(int32_t value)
	{
		___m_TapCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAPPEDEVENTARGS_T1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6_H
#ifndef GETASYNCDELEGATE_T243E451DDFA40F30023A031E71AA0BDC9D9865EF_H
#define GETASYNCDELEGATE_T243E451DDFA40F30023A031E71AA0BDC9D9865EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate
struct  GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETASYNCDELEGATE_T243E451DDFA40F30023A031E71AA0BDC9D9865EF_H
#ifndef DESERIALIZATIONCOMPLETEDELEGATE_TEE42E6197884BFC9946F07F02F2E3B437B4C2648_H
#define DESERIALIZATIONCOMPLETEDELEGATE_TEE42E6197884BFC9946F07F02F2E3B437B4C2648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate
struct  DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESERIALIZATIONCOMPLETEDELEGATE_TEE42E6197884BFC9946F07F02F2E3B437B4C2648_H
#ifndef SERIALIZATIONCOMPLETEDELEGATE_TD53067D4C22E4C7372CFB92B4287EFE9188DA7EB_H
#define SERIALIZATIONCOMPLETEDELEGATE_TD53067D4C22E4C7372CFB92B4287EFE9188DA7EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate
struct  SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONCOMPLETEDELEGATE_TD53067D4C22E4C7372CFB92B4287EFE9188DA7EB_H
#ifndef SERIALIZATIONDATAAVAILABLEDELEGATE_TEE1027E18A229BC1CF155CE15AFB47FD044654C7_H
#define SERIALIZATIONDATAAVAILABLEDELEGATE_TEE1027E18A229BC1CF155CE15AFB47FD044654C7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate
struct  SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONDATAAVAILABLEDELEGATE_TEE1027E18A229BC1CF155CE15AFB47FD044654C7_H
#ifndef SURFACECHANGEDDELEGATE_T44685763A08766AF68D59B3C9FE8B5370386B3A1_H
#define SURFACECHANGEDDELEGATE_T44685763A08766AF68D59B3C9FE8B5370386B3A1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate
struct  SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURFACECHANGEDDELEGATE_T44685763A08766AF68D59B3C9FE8B5370386B3A1_H
#ifndef SURFACEDATAREADYDELEGATE_T612948BD68C321AF19136CC76F4F94B778B20092_H
#define SURFACEDATAREADYDELEGATE_T612948BD68C321AF19136CC76F4F94B778B20092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate
struct  SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURFACEDATAREADYDELEGATE_T612948BD68C321AF19136CC76F4F94B778B20092_H
#ifndef ONCAPTURERESOURCECREATEDCALLBACK_T2C031B8432401E472889526CAF2CA987AC99D5D1_H
#define ONCAPTURERESOURCECREATEDCALLBACK_T2C031B8432401E472889526CAF2CA987AC99D5D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.PhotoCapture_OnCaptureResourceCreatedCallback
struct  OnCaptureResourceCreatedCallback_t2C031B8432401E472889526CAF2CA987AC99D5D1  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONCAPTURERESOURCECREATEDCALLBACK_T2C031B8432401E472889526CAF2CA987AC99D5D1_H
#ifndef ONCAPTUREDTODISKCALLBACK_TAC3EFE8F816D568DFACBDCAAC2102ACC8F7927DA_H
#define ONCAPTUREDTODISKCALLBACK_TAC3EFE8F816D568DFACBDCAAC2102ACC8F7927DA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.PhotoCapture_OnCapturedToDiskCallback
struct  OnCapturedToDiskCallback_tAC3EFE8F816D568DFACBDCAAC2102ACC8F7927DA  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONCAPTUREDTODISKCALLBACK_TAC3EFE8F816D568DFACBDCAAC2102ACC8F7927DA_H
#ifndef ONCAPTUREDTOMEMORYCALLBACK_T1117FB4051889E3472DC6F17C4E28B4C3471CBE6_H
#define ONCAPTUREDTOMEMORYCALLBACK_T1117FB4051889E3472DC6F17C4E28B4C3471CBE6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.PhotoCapture_OnCapturedToMemoryCallback
struct  OnCapturedToMemoryCallback_t1117FB4051889E3472DC6F17C4E28B4C3471CBE6  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONCAPTUREDTOMEMORYCALLBACK_T1117FB4051889E3472DC6F17C4E28B4C3471CBE6_H
#ifndef ONPHOTOMODESTARTEDCALLBACK_T3E74AEAE0C3BAF1711BF4C3F423A4B8272C6A456_H
#define ONPHOTOMODESTARTEDCALLBACK_T3E74AEAE0C3BAF1711BF4C3F423A4B8272C6A456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.PhotoCapture_OnPhotoModeStartedCallback
struct  OnPhotoModeStartedCallback_t3E74AEAE0C3BAF1711BF4C3F423A4B8272C6A456  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONPHOTOMODESTARTEDCALLBACK_T3E74AEAE0C3BAF1711BF4C3F423A4B8272C6A456_H
#ifndef ONPHOTOMODESTOPPEDCALLBACK_T80B25F7611051F3335A92707211B540F04E08592_H
#define ONPHOTOMODESTOPPEDCALLBACK_T80B25F7611051F3335A92707211B540F04E08592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.PhotoCapture_OnPhotoModeStoppedCallback
struct  OnPhotoModeStoppedCallback_t80B25F7611051F3335A92707211B540F04E08592  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONPHOTOMODESTOPPEDCALLBACK_T80B25F7611051F3335A92707211B540F04E08592_H
#ifndef ONSTARTEDRECORDINGVIDEOCALLBACK_TBA25BE29E6C6BFF428BFEF0131C9C28E6F96BE89_H
#define ONSTARTEDRECORDINGVIDEOCALLBACK_TBA25BE29E6C6BFF428BFEF0131C9C28E6F96BE89_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.VideoCapture_OnStartedRecordingVideoCallback
struct  OnStartedRecordingVideoCallback_tBA25BE29E6C6BFF428BFEF0131C9C28E6F96BE89  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSTARTEDRECORDINGVIDEOCALLBACK_TBA25BE29E6C6BFF428BFEF0131C9C28E6F96BE89_H
#ifndef ONSTOPPEDRECORDINGVIDEOCALLBACK_T1F24C0F8A39A6E3E4606D2EB3FBA06D42E176AAF_H
#define ONSTOPPEDRECORDINGVIDEOCALLBACK_T1F24C0F8A39A6E3E4606D2EB3FBA06D42E176AAF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.VideoCapture_OnStoppedRecordingVideoCallback
struct  OnStoppedRecordingVideoCallback_t1F24C0F8A39A6E3E4606D2EB3FBA06D42E176AAF  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSTOPPEDRECORDINGVIDEOCALLBACK_T1F24C0F8A39A6E3E4606D2EB3FBA06D42E176AAF_H
#ifndef ONVIDEOCAPTURERESOURCECREATEDCALLBACK_TF07FC786DED7B54F82740F0F65D21EA3FEC88804_H
#define ONVIDEOCAPTURERESOURCECREATEDCALLBACK_TF07FC786DED7B54F82740F0F65D21EA3FEC88804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.VideoCapture_OnVideoCaptureResourceCreatedCallback
struct  OnVideoCaptureResourceCreatedCallback_tF07FC786DED7B54F82740F0F65D21EA3FEC88804  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONVIDEOCAPTURERESOURCECREATEDCALLBACK_TF07FC786DED7B54F82740F0F65D21EA3FEC88804_H
#ifndef ONVIDEOMODESTARTEDCALLBACK_T853A50811DA6BBFC7977E51BF13D1A9FF8E5100F_H
#define ONVIDEOMODESTARTEDCALLBACK_T853A50811DA6BBFC7977E51BF13D1A9FF8E5100F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.VideoCapture_OnVideoModeStartedCallback
struct  OnVideoModeStartedCallback_t853A50811DA6BBFC7977E51BF13D1A9FF8E5100F  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONVIDEOMODESTARTEDCALLBACK_T853A50811DA6BBFC7977E51BF13D1A9FF8E5100F_H
#ifndef ONVIDEOMODESTOPPEDCALLBACK_T69DE28B795E5B250601A1A9282127B1FD2AD31D8_H
#define ONVIDEOMODESTOPPEDCALLBACK_T69DE28B795E5B250601A1A9282127B1FD2AD31D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WebCam.VideoCapture_OnVideoModeStoppedCallback
struct  OnVideoModeStoppedCallback_t69DE28B795E5B250601A1A9282127B1FD2AD31D8  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONVIDEOMODESTOPPEDCALLBACK_T69DE28B795E5B250601A1A9282127B1FD2AD31D8_H
#ifndef WORLDANCHOR_TD6275232D14415769601A3BD6AE1E7D5622F96EE_H
#define WORLDANCHOR_TD6275232D14415769601A3BD6AE1E7D5622F96EE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WorldAnchor
struct  WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:
	// UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate UnityEngine.XR.WSA.WorldAnchor::OnTrackingChanged
	OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * ___OnTrackingChanged_4;

public:
	inline static int32_t get_offset_of_OnTrackingChanged_4() { return static_cast<int32_t>(offsetof(WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE, ___OnTrackingChanged_4)); }
	inline OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * get_OnTrackingChanged_4() const { return ___OnTrackingChanged_4; }
	inline OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 ** get_address_of_OnTrackingChanged_4() { return &___OnTrackingChanged_4; }
	inline void set_OnTrackingChanged_4(OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * value)
	{
		___OnTrackingChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnTrackingChanged_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDANCHOR_TD6275232D14415769601A3BD6AE1E7D5622F96EE_H
#ifndef ONTRACKINGCHANGEDDELEGATE_T213BE1DC543541B52A31539ACEA406782B1DB253_H
#define ONTRACKINGCHANGEDDELEGATE_T213BE1DC543541B52A31539ACEA406782B1DB253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate
struct  OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONTRACKINGCHANGEDDELEGATE_T213BE1DC543541B52A31539ACEA406782B1DB253_H
#ifndef ONPOSITIONALLOCATORSTATECHANGEDDELEGATE_TF20079800BA8015A2DC1FDAE907DF48391A53E0B_H
#define ONPOSITIONALLOCATORSTATECHANGEDDELEGATE_TF20079800BA8015A2DC1FDAE907DF48391A53E0B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate
struct  OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONPOSITIONALLOCATORSTATECHANGEDDELEGATE_TF20079800BA8015A2DC1FDAE907DF48391A53E0B_H
#ifndef ACTION_1_T5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B_H
#define ACTION_1_T5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>
struct  Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B_H
#ifndef ACTION_1_T37D466E712A7A553C87729F5DD58DC77C8A89FF0_H
#define ACTION_1_T37D466E712A7A553C87729F5DD58DC77C8A89FF0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>
struct  Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T37D466E712A7A553C87729F5DD58DC77C8A89FF0_H
#ifndef ACTION_1_T9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E_H
#define ACTION_1_T9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>
struct  Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E_H
#ifndef ACTION_1_TB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E_H
#define ACTION_1_TB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>
struct  Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_TB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E_H
#ifndef ACTION_1_T3D75FAEDED813354B2965399C726ABFD1A5EBC3F_H
#define ACTION_1_T3D75FAEDED813354B2965399C726ABFD1A5EBC3F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>
struct  Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3D75FAEDED813354B2965399C726ABFD1A5EBC3F_H
#ifndef ACTION_1_T6DC7BD1E28CAAD24387D527C634AB60FA116325E_H
#define ACTION_1_T6DC7BD1E28CAAD24387D527C634AB60FA116325E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>
struct  Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T6DC7BD1E28CAAD24387D527C634AB60FA116325E_H
#ifndef ACTION_1_T6F72821471F95D09FC84BC9F98573CD2139C23DC_H
#define ACTION_1_T6F72821471F95D09FC84BC9F98573CD2139C23DC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>
struct  Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T6F72821471F95D09FC84BC9F98573CD2139C23DC_H
#ifndef ACTION_1_T725D93DE550342B16861C2DF8B459B4657B0B40B_H
#define ACTION_1_T725D93DE550342B16861C2DF8B459B4657B0B40B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>
struct  Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T725D93DE550342B16861C2DF8B459B4657B0B40B_H
#ifndef ACTION_1_TE20909ED14E1CC129893FCAD2C19BA898C77D7B1_H
#define ACTION_1_TE20909ED14E1CC129893FCAD2C19BA898C77D7B1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>
struct  Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_TE20909ED14E1CC129893FCAD2C19BA898C77D7B1_H
#ifndef ACTION_1_T12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E_H
#define ACTION_1_T12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>
struct  Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E_H
#ifndef ACTION_1_TEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C_H
#define ACTION_1_TEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>
struct  Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_TEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C_H
#ifndef ACTION_1_TE903BE1931BE14124CF0EFF594B91436F631E6E7_H
#define ACTION_1_TE903BE1931BE14124CF0EFF594B91436F631E6E7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>
struct  Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_TE903BE1931BE14124CF0EFF594B91436F631E6E7_H
#ifndef ACTION_1_TCDC01C5032C70E5DD6217277758BBB3991DC7A8E_H
#define ACTION_1_TCDC01C5032C70E5DD6217277758BBB3991DC7A8E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>
struct  Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_TCDC01C5032C70E5DD6217277758BBB3991DC7A8E_H
#ifndef ACTION_1_TF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12_H
#define ACTION_1_TF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>
struct  Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_TF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12_H
#ifndef MESHCOLLIDER_T60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_H
#define MESHCOLLIDER_T60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshCollider
struct  MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHCOLLIDER_T60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_H
#ifndef INTERACTIONSOURCESTATE_T41A6FEEA413909D5D94BF48BC907FE5DBD162250_H
#define INTERACTIONSOURCESTATE_T41A6FEEA413909D5D94BF48BC907FE5DBD162250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceState
struct  InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceProperties UnityEngine.XR.WSA.Input.InteractionSourceState::m_Properties
	InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A  ___m_Properties_0;
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.InteractionSourceState::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.InteractionSourceState::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// UnityEngine.Vector2 UnityEngine.XR.WSA.Input.InteractionSourceState::m_ThumbstickPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_ThumbstickPosition_3;
	// UnityEngine.Vector2 UnityEngine.XR.WSA.Input.InteractionSourceState::m_TouchpadPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_TouchpadPosition_4;
	// System.Single UnityEngine.XR.WSA.Input.InteractionSourceState::m_SelectPressedAmount
	float ___m_SelectPressedAmount_5;
	// UnityEngine.XR.WSA.Input.InteractionSourceStateFlags UnityEngine.XR.WSA.Input.InteractionSourceState::m_Flags
	int32_t ___m_Flags_6;

public:
	inline static int32_t get_offset_of_m_Properties_0() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_Properties_0)); }
	inline InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A  get_m_Properties_0() const { return ___m_Properties_0; }
	inline InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A * get_address_of_m_Properties_0() { return &___m_Properties_0; }
	inline void set_m_Properties_0(InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A  value)
	{
		___m_Properties_0 = value;
	}

	inline static int32_t get_offset_of_m_Source_1() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_Source_1)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_1() const { return ___m_Source_1; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_1() { return &___m_Source_1; }
	inline void set_m_Source_1(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_ThumbstickPosition_3() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_ThumbstickPosition_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_ThumbstickPosition_3() const { return ___m_ThumbstickPosition_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_ThumbstickPosition_3() { return &___m_ThumbstickPosition_3; }
	inline void set_m_ThumbstickPosition_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_ThumbstickPosition_3 = value;
	}

	inline static int32_t get_offset_of_m_TouchpadPosition_4() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_TouchpadPosition_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_TouchpadPosition_4() const { return ___m_TouchpadPosition_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_TouchpadPosition_4() { return &___m_TouchpadPosition_4; }
	inline void set_m_TouchpadPosition_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_TouchpadPosition_4 = value;
	}

	inline static int32_t get_offset_of_m_SelectPressedAmount_5() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_SelectPressedAmount_5)); }
	inline float get_m_SelectPressedAmount_5() const { return ___m_SelectPressedAmount_5; }
	inline float* get_address_of_m_SelectPressedAmount_5() { return &___m_SelectPressedAmount_5; }
	inline void set_m_SelectPressedAmount_5(float value)
	{
		___m_SelectPressedAmount_5 = value;
	}

	inline static int32_t get_offset_of_m_Flags_6() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_Flags_6)); }
	inline int32_t get_m_Flags_6() const { return ___m_Flags_6; }
	inline int32_t* get_address_of_m_Flags_6() { return &___m_Flags_6; }
	inline void set_m_Flags_6(int32_t value)
	{
		___m_Flags_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCESTATE_T41A6FEEA413909D5D94BF48BC907FE5DBD162250_H
#ifndef SOURCEEVENTHANDLER_TD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75_H
#define SOURCEEVENTHANDLER_TD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler
struct  SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCEEVENTHANDLER_TD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75_H
#ifndef INTERACTIONSOURCEDETECTEDEVENTARGS_TC1F077616F3D6B484D0B12321013A21E072B9755_H
#define INTERACTIONSOURCEDETECTEDEVENTARGS_TC1F077616F3D6B484D0B12321013A21E072B9755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs
struct  InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::<state>k__BackingField
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___U3CstateU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755, ___U3CstateU3Ek__BackingField_0)); }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEDETECTEDEVENTARGS_TC1F077616F3D6B484D0B12321013A21E072B9755_H
#ifndef INTERACTIONSOURCELOSTEVENTARGS_T1922B08265BAB2D8980B734D0A89C8705CCC40AC_H
#define INTERACTIONSOURCELOSTEVENTARGS_T1922B08265BAB2D8980B734D0A89C8705CCC40AC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs
struct  InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::<state>k__BackingField
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___U3CstateU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC, ___U3CstateU3Ek__BackingField_0)); }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCELOSTEVENTARGS_T1922B08265BAB2D8980B734D0A89C8705CCC40AC_H
#ifndef INTERACTIONSOURCEPRESSEDEVENTARGS_TA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B_H
#define INTERACTIONSOURCEPRESSEDEVENTARGS_TA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs
struct  InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::<state>k__BackingField
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___U3CstateU3Ek__BackingField_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePressType UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::<pressType>k__BackingField
	int32_t ___U3CpressTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B, ___U3CstateU3Ek__BackingField_0)); }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpressTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B, ___U3CpressTypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CpressTypeU3Ek__BackingField_1() const { return ___U3CpressTypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CpressTypeU3Ek__BackingField_1() { return &___U3CpressTypeU3Ek__BackingField_1; }
	inline void set_U3CpressTypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CpressTypeU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEPRESSEDEVENTARGS_TA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B_H
#ifndef INTERACTIONSOURCERELEASEDEVENTARGS_TD5E7A07FF6CC463893178DC4F3FD3543F20FB943_H
#define INTERACTIONSOURCERELEASEDEVENTARGS_TD5E7A07FF6CC463893178DC4F3FD3543F20FB943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs
struct  InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::<state>k__BackingField
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___U3CstateU3Ek__BackingField_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePressType UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::<pressType>k__BackingField
	int32_t ___U3CpressTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943, ___U3CstateU3Ek__BackingField_0)); }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpressTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943, ___U3CpressTypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CpressTypeU3Ek__BackingField_1() const { return ___U3CpressTypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CpressTypeU3Ek__BackingField_1() { return &___U3CpressTypeU3Ek__BackingField_1; }
	inline void set_U3CpressTypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CpressTypeU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCERELEASEDEVENTARGS_TD5E7A07FF6CC463893178DC4F3FD3543F20FB943_H
#ifndef INTERACTIONSOURCEUPDATEDEVENTARGS_T8386FB5578FE7C069A136CC36C9B6A56FF99CBC5_H
#define INTERACTIONSOURCEUPDATEDEVENTARGS_T8386FB5578FE7C069A136CC36C9B6A56FF99CBC5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs
struct  InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::<state>k__BackingField
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___U3CstateU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5, ___U3CstateU3Ek__BackingField_0)); }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEUPDATEDEVENTARGS_T8386FB5578FE7C069A136CC36C9B6A56FF99CBC5_H
#ifndef ACTION_1_T5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0_H
#define ACTION_1_T5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs>
struct  Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0_H
#ifndef ACTION_1_T0880AB893CE69E2212857481DAEDA70E8C3AA7DA_H
#define ACTION_1_T0880AB893CE69E2212857481DAEDA70E8C3AA7DA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs>
struct  Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T0880AB893CE69E2212857481DAEDA70E8C3AA7DA_H
#ifndef ACTION_1_T5925C354A9C769D7F04E130EF166F2EDD1B8EE93_H
#define ACTION_1_T5925C354A9C769D7F04E130EF166F2EDD1B8EE93_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs>
struct  Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T5925C354A9C769D7F04E130EF166F2EDD1B8EE93_H
#ifndef ACTION_1_TB303DD7A7900C391F27676319D72609C5B9BDFF7_H
#define ACTION_1_TB303DD7A7900C391F27676319D72609C5B9BDFF7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs>
struct  Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_TB303DD7A7900C391F27676319D72609C5B9BDFF7_H
#ifndef ACTION_1_TDF471E8C2FE20585DF9E74E046AA2D3A84629C91_H
#define ACTION_1_TDF471E8C2FE20585DF9E74E046AA2D3A84629C91_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs>
struct  Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_TDF471E8C2FE20585DF9E74E046AA2D3A84629C91_H
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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

extern "C" void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke(const WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225& unmarshaled, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke& marshaled);
extern "C" void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke_back(const WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke& marshaled, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225& unmarshaled);
extern "C" void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke_cleanup(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke& marshaled);
extern "C" void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke(const WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96& unmarshaled, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke& marshaled);
extern "C" void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke_back(const WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke& marshaled, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96& unmarshaled);
extern "C" void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke_cleanup(WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke& marshaled);
extern "C" void PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshal_pinvoke(const PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307& unmarshaled, PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshaled_pinvoke& marshaled);
extern "C" void PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshal_pinvoke_back(const PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshaled_pinvoke& marshaled, PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307& unmarshaled);
extern "C" void PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshal_pinvoke_cleanup(PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshaled_pinvoke& marshaled);
extern "C" void VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshal_pinvoke(const VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA& unmarshaled, VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshaled_pinvoke& marshaled);
extern "C" void VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshal_pinvoke_back(const VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshaled_pinvoke& marshaled, VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA& unmarshaled);
extern "C" void VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshal_pinvoke_cleanup(VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshaled_pinvoke& marshaled);

// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m5795ACB95FE9CCD6F5A924378FA9DE8E9CA3A6C4_gshared (Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * __this, HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_mA97E44F00BEFB34149435C4BE656AF816A0E9DF8_gshared (Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * __this, HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_mBB5D2CBD59DE968F3B42B022A9DABD9E5C69B1B4_gshared (Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * __this, HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m7B37293237BA07CC6B50638B6DBD109BB4DC004D_gshared (Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * __this, TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_mF9EDDB9E3BC7AACDBA69EA5356BC2496FA296802_gshared (Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * __this, ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_mAAA2C311608C583870A692A74FF519C2164D1EC3_gshared (Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * __this, ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m0A7693DAB618A5AD064357DEE18C65EE17EC4F3C_gshared (Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * __this, ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m5B7D08B1B0AC1D184B93F9CE5DAE32B5DC1EA694_gshared (Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * __this, ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m1B04A9EFA672A32E86BFE93CCCBDF4C4504D9C1E_gshared (Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * __this, NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m34F24EFCBA6CB015D4A48C3CD5C7E61C227D5193_gshared (Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * __this, NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m648E0A8232CCAE8D9527EEAEF4363D611E41C6B7_gshared (Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * __this, NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m2A815481C588BDC936FCCF8DFCF0368061AED64B_gshared (Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * __this, NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m125E522A0C41AC0FC6C0D40A229D597471B45567_gshared (Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * __this, RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_mF57F2088FC61BB31C2D92DA0291CDC0EFE739C90_gshared (Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * __this, RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m971A7F94ACA669C07644DDEE7406533FA3502676_gshared (Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * __this, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m4F3930EF30194EC44F419B3E94774BE548E5BC66_gshared (Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * __this, InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m40CAE8C6B97EA521838F7AC64D9FFFD267AF3FAF_gshared (Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * __this, InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_mC6B23C0EDFD5C27A34D6DD6AE326D59CA7005CF1_gshared (Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * __this, InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m38339FC12F03EEF8FB28FBA0DFEF104F891A5A8B_gshared (Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * __this, InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m4732464FB4773D55E9DBB35D18FB58DB8CE78B93_gshared (Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * __this, InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943  p0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mF3EA958D645F2DA73A25D6BA98D8CDF83ADD532D_gshared (Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>::get_Value()
extern "C" IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  Nullable_1_get_Value_m2164B0E14FD6D71E914E108D3046E1F3D048890B_gshared (Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::set_error(System.String)
extern "C" IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_error_m9BC2D2DBF1B4DB34393E38AD35CEB56773CE8E32 (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::set_hresult(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_hresult_m8CF0A45B2196E307D16D13BB9D8E0AE0B520DDDF (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::.ctor(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GestureErrorEventArgs__ctor_mBC7728EEE85A73791A6D91B06935BA38D285EDA9 (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::DestroyThreaded()
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_DestroyThreaded_m1C5095AA124113EB403DB4CC55EF8231F48F47DB (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::Destroy()
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_Destroy_mB698484AD27F6B324450134F777B4CF411941C81 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void HoldCanceledEventDelegate_Invoke_m1544130A1A2D9112BAE59903EFD5605AD96D5002 (HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m5795ACB95FE9CCD6F5A924378FA9DE8E9CA3A6C4 (Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * __this, HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B *, HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244 , const RuntimeMethod*))Action_1_Invoke_m5795ACB95FE9CCD6F5A924378FA9DE8E9CA3A6C4_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void HoldCompletedEventDelegate_Invoke_m6FA6CDA845F589846063D014356C1E0445320798 (HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mA97E44F00BEFB34149435C4BE656AF816A0E9DF8 (Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * __this, HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 *, HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3 , const RuntimeMethod*))Action_1_Invoke_mA97E44F00BEFB34149435C4BE656AF816A0E9DF8_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void HoldStartedEventDelegate_Invoke_m504D569012750F2C63512FDB35614DF5ECDAF7FA (HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mBB5D2CBD59DE968F3B42B022A9DABD9E5C69B1B4 (Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * __this, HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E *, HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874 , const RuntimeMethod*))Action_1_Invoke_mBB5D2CBD59DE968F3B42B022A9DABD9E5C69B1B4_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,System.Int32,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void TappedEventDelegate_Invoke_m02055A4BCAD7BCFD64AAB05FDFDCC6BD8E6F189B (TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * __this, int32_t ___source0, int32_t ___tapCount1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m7B37293237BA07CC6B50638B6DBD109BB4DC004D (Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * __this, TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 *, TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6 , const RuntimeMethod*))Action_1_Invoke_m7B37293237BA07CC6B50638B6DBD109BB4DC004D_gshared)(__this, p0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void ManipulationCanceledEventDelegate_Invoke_m97FD70C68AE74FE5EB03D3B461F969F6E3E2C231 (ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mF9EDDB9E3BC7AACDBA69EA5356BC2496FA296802 (Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * __this, ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E *, ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417 , const RuntimeMethod*))Action_1_Invoke_mF9EDDB9E3BC7AACDBA69EA5356BC2496FA296802_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void ManipulationCompletedEventDelegate_Invoke_m93DD17C1359B1F4B931D2C4467D85716AD92A0F2 (ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mAAA2C311608C583870A692A74FF519C2164D1EC3 (Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * __this, ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F *, ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0 , const RuntimeMethod*))Action_1_Invoke_mAAA2C311608C583870A692A74FF519C2164D1EC3_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void ManipulationStartedEventDelegate_Invoke_mDA7BE6F4F51E1B0933EAD00C5555CDE8F4931450 (ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m0A7693DAB618A5AD064357DEE18C65EE17EC4F3C (Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * __this, ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E *, ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2 , const RuntimeMethod*))Action_1_Invoke_m0A7693DAB618A5AD064357DEE18C65EE17EC4F3C_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void ManipulationUpdatedEventDelegate_Invoke_m39222E61BA5CE3B8EA1E3C892C4E399C641CED20 (ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m5B7D08B1B0AC1D184B93F9CE5DAE32B5DC1EA694 (Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * __this, ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC *, ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E , const RuntimeMethod*))Action_1_Invoke_m5B7D08B1B0AC1D184B93F9CE5DAE32B5DC1EA694_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void NavigationCanceledEventDelegate_Invoke_mE1BC888BB04B0915D6CFF1A94144D993CEF0FDB5 (NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m1B04A9EFA672A32E86BFE93CCCBDF4C4504D9C1E (Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * __this, NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B *, NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760 , const RuntimeMethod*))Action_1_Invoke_m1B04A9EFA672A32E86BFE93CCCBDF4C4504D9C1E_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void NavigationCompletedEventDelegate_Invoke_mE2C0283BE82345A791C543C8696BA5C2B462E1FD (NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m34F24EFCBA6CB015D4A48C3CD5C7E61C227D5193 (Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * __this, NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 *, NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39 , const RuntimeMethod*))Action_1_Invoke_m34F24EFCBA6CB015D4A48C3CD5C7E61C227D5193_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void NavigationStartedEventDelegate_Invoke_mFD08DF0FF1C8B9E87D59C9BC0F03EBB998360EB9 (NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m648E0A8232CCAE8D9527EEAEF4363D611E41C6B7 (Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * __this, NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E *, NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339 , const RuntimeMethod*))Action_1_Invoke_m648E0A8232CCAE8D9527EEAEF4363D611E41C6B7_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void NavigationUpdatedEventDelegate_Invoke_mE6FB25850173B4E42B65D60F587A101CAA62C1C2 (NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m2A815481C588BDC936FCCF8DFCF0368061AED64B (Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * __this, NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C *, NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA , const RuntimeMethod*))Action_1_Invoke_m2A815481C588BDC936FCCF8DFCF0368061AED64B_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void RecognitionEndedEventDelegate_Invoke_mCE7877BDB4BA9DDB85C2C2908FF33DFA38426063 (RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m125E522A0C41AC0FC6C0D40A229D597471B45567 (Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * __this, RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 *, RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB , const RuntimeMethod*))Action_1_Invoke_m125E522A0C41AC0FC6C0D40A229D597471B45567_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void RecognitionStartedEventDelegate_Invoke_mAB4BFDD255D2CA76718D285598A6832631AA9BB4 (RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mF57F2088FC61BB31C2D92DA0291CDC0EFE739C90 (Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * __this, RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E *, RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65 , const RuntimeMethod*))Action_1_Invoke_mF57F2088FC61BB31C2D92DA0291CDC0EFE739C90_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate::Invoke(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GestureErrorDelegate_Invoke_m7474F967FEDDFC0FFEE7089771F3A4BC589FC0FF (GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m971A7F94ACA669C07644DDEE7406533FA3502676 (Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * __this, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B *, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C , const RuntimeMethod*))Action_1_Invoke_m971A7F94ACA669C07644DDEE7406533FA3502676_gshared)(__this, p0, method);
}
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionManager/SourceEventHandler::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceState)
extern "C" IL2CPP_METHOD_ATTR void SourceEventHandler_Invoke_mC13C60B714BB48292BC11625A124A685F07B9E30 (SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourceDetectedEventArgs__ctor_m2FBA271484B0D35C53DB7BE9C4251236737E4580 (InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m4F3930EF30194EC44F419B3E94774BE548E5BC66 (Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * __this, InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 *, InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 , const RuntimeMethod*))Action_1_Invoke_m4F3930EF30194EC44F419B3E94774BE548E5BC66_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourceLostEventArgs__ctor_mE13D688DF29978E37FC86E1EEC3469D46532D7BF (InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m40CAE8C6B97EA521838F7AC64D9FFFD267AF3FAF (Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * __this, InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA *, InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC , const RuntimeMethod*))Action_1_Invoke_m40CAE8C6B97EA521838F7AC64D9FFFD267AF3FAF_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourceUpdatedEventArgs__ctor_m78938DD82C92670ECEF9C43CA844F6448F22FA76 (InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mC6B23C0EDFD5C27A34D6DD6AE326D59CA7005CF1 (Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * __this, InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 *, InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 , const RuntimeMethod*))Action_1_Invoke_mC6B23C0EDFD5C27A34D6DD6AE326D59CA7005CF1_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState,UnityEngine.XR.WSA.Input.InteractionSourcePressType)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs__ctor_m82FD8AD6FF6F74715630EA2A6B620A0B6B953B5E (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, int32_t ___pressType1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m38339FC12F03EEF8FB28FBA0DFEF104F891A5A8B (Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * __this, InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 *, InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B , const RuntimeMethod*))Action_1_Invoke_m38339FC12F03EEF8FB28FBA0DFEF104F891A5A8B_gshared)(__this, p0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState,UnityEngine.XR.WSA.Input.InteractionSourcePressType)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs__ctor_m3874456214E10087996D31930D5FDE577E2D4939 (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, int32_t ___pressType1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m4732464FB4773D55E9DBB35D18FB58DB8CE78B93 (Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * __this, InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 *, InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 , const RuntimeMethod*))Action_1_Invoke_m4732464FB4773D55E9DBB35D18FB58DB8CE78B93_gshared)(__this, p0, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>::get_HasValue()
inline bool Nullable_1_get_HasValue_mF3EA958D645F2DA73A25D6BA98D8CDF83ADD532D (Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE *, const RuntimeMethod*))Nullable_1_get_HasValue_mF3EA958D645F2DA73A25D6BA98D8CDF83ADD532D_gshared)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>::get_Value()
inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  Nullable_1_get_Value_m2164B0E14FD6D71E914E108D3046E1F3D048890B (Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE * __this, const RuntimeMethod* method)
{
	return ((  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  (*) (Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE *, const RuntimeMethod*))Nullable_1_get_Value_m2164B0E14FD6D71E914E108D3046E1F3D048890B_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::Equals(UnityEngine.XR.WSA.Input.InteractionSource)
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_Equals_mEAC22BC627922A90171992CC8DA4BA43953AC645 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_Equals_m826241F239D49E68D24D6CADEC50FF3E60D6928C (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WSA.Input.InteractionSource::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t InteractionSource_GetHashCode_m86EC32248092C3E1CE990C74D52E35E0E3CFF515 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.XR.WSA.Input.InteractionSource::get_id()
extern "C" IL2CPP_METHOD_ATTR uint32_t InteractionSource_get_id_m2F247B3024CB643ECF1307F4FA7F4908FB640011 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSourceKind UnityEngine.XR.WSA.Input.InteractionSource::get_kind()
extern "C" IL2CPP_METHOD_ATTR int32_t InteractionSource_get_kind_m5BBAF17ED0C432BABF1623E8DE389DEF5A901CC7 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSourceHandedness UnityEngine.XR.WSA.Input.InteractionSource::get_handedness()
extern "C" IL2CPP_METHOD_ATTR int32_t InteractionSource_get_handedness_mDD38ECFC1064B9688796ADEB52B167918204829C (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsGrasp()
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsGrasp_mDF5F9C5752C5E094B5D470EBD0DAE0F243759411 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsMenu()
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsMenu_m6853E6A0D3F0F1AE71A6C42D1AF8A8AB78DF928C (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsPointing()
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsPointing_mD9DE6FE230FE2633107C50A062DE4ED65975FB84 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsThumbstick()
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsThumbstick_m0693492A4DB64ACEBD6C4688D2BF7D0843743A11 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsTouchpad()
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsTouchpad_m623CEA9CFA650B4047AE44D741EB01FBB295A1F9 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method);
// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::get_vendorId()
extern "C" IL2CPP_METHOD_ATTR uint16_t InteractionSource_get_vendorId_m938724EC780851E382186A4DB36D29E837B0A982 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method);
// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::get_productId()
extern "C" IL2CPP_METHOD_ATTR uint16_t InteractionSource_get_productId_mF2D6F5553488A16ECD70E6BD3439F6E433DBBB07 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method);
// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::get_productVersion()
extern "C" IL2CPP_METHOD_ATTR uint16_t InteractionSource_get_productVersion_m67FBF8FFBC3B7EE605061D4C498F8936CEE05DC5 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourceDetectedEventArgs_set_state_mB81F4E131E023DE37120C37CD281FEDCB2107240 (InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourceLostEventArgs_set_state_m962283240DCDBB2FB97987B371073238BCF5BC23 (InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_state_mE9F1061B3EB95D4C9C435A9B29B657B0D4F73E08 (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::set_pressType(UnityEngine.XR.WSA.Input.InteractionSourcePressType)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_pressType_m4A6D5E8933BA021E93C7586349CD2653B6BFA855 (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_state_mF578C2E57593D54ABEB8C130A49E6B44AE2C080F (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::set_pressType(UnityEngine.XR.WSA.Input.InteractionSourcePressType)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_pressType_m3F75A57B06238ACD617D4C151B977B92AD6460CF (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourceUpdatedEventArgs_set_state_mF28D9130B81128B020B1C8D3003A6A9A84D1E8B6 (InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorStore__ctor_m1EE05390756C0AE0F0100507693CE33C8A940E99 (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate::Invoke(UnityEngine.XR.WSA.Persistence.WorldAnchorStore)
extern "C" IL2CPP_METHOD_ATTR void GetAsyncDelegate_Invoke_m4DF685AABA65DC8D46F48F81BFEAEB50B2652EB8 (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * __this, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * ___store0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Internal_Destroy()
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorStore_Internal_Destroy_m696A46F879CAB6B70C0E0F35642784D695E8D6C2 (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::DisposeThreaded_Internal()
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_DisposeThreaded_Internal_m574176C40D00FE375207F69FC1FA41A076BA9F4E (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Dispose_Internal()
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_Dispose_Internal_m323AD2F9861BF64FC6F3B56191A61BFC8DC196B7 (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationDataAvailableDelegate::Invoke(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void SerializationDataAvailableDelegate_Invoke_m0250571900E492139B5293224D54EF8998AE72E8 (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationCompleteDelegate::Invoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason)
extern "C" IL2CPP_METHOD_ATTR void SerializationCompleteDelegate_Invoke_m9E8772EC4D698829FB563E7F98627921203146C3 (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * __this, int32_t ___completionReason0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch__ctor_m9745D72088F3E565D1A4855DE025FE7288871C35 (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/DeserializationCompleteDelegate::Invoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch)
extern "C" IL2CPP_METHOD_ATTR void DeserializationCompleteDelegate_Invoke_m4F01EB16C52D539B2A87C14D802F01325FC580A2 (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * __this, int32_t ___completionReason0, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * ___deserializedTransferBatch1, const RuntimeMethod* method);
// System.DateTime System.DateTime::FromFileTime(System.Int64)
extern "C" IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_FromFileTime_m48DCF83C7472940505DE71F244BC072E98FA5676 (int64_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate::Invoke(UnityEngine.XR.WSA.SurfaceId,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void SurfaceChangedDelegate_Invoke_mB275AE4804E6939E7B55AF0F3932913ED3A5D4B6 (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, int32_t ___changeType1, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___bounds2, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___updateTime3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate::Invoke(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate_Invoke_m4DFF327EC78483BEA7B886E4F923A375D28A4CC4 (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::DestroyThreaded()
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver_DestroyThreaded_m42429D92096ACFF4689B675FC69DC27142F14676 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Destroy()
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver_Destroy_m66E010E36EF342C74BA5278C4990D66AA6F34DAF (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCaptureResourceCreatedCallback::Invoke(UnityEngine.XR.WSA.WebCam.PhotoCapture)
extern "C" IL2CPP_METHOD_ATTR void OnCaptureResourceCreatedCallback_Invoke_mD4531195F8FE3931F7E809A26CD4EB53FD9D4E2E (OnCaptureResourceCreatedCallback_t2C031B8432401E472889526CAF2CA987AC99D5D1 * __this, PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * ___captureObject0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture__ctor_mE11D76F28D9CFB54A2619A8459A91781C843E590 (PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * __this, intptr_t ___nativeCaptureObject0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult UnityEngine.XR.WSA.WebCam.PhotoCapture::MakeCaptureResult(System.Int64)
extern "C" IL2CPP_METHOD_ATTR PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  PhotoCapture_MakeCaptureResult_m040E0FBD9B6C69A45CF412BF6B902E8140EE2207 (int64_t ___hResult0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnPhotoModeStartedCallback::Invoke(UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnPhotoModeStartedCallback_Invoke_m243EF1BEA4A7ED007D21E1FF0DD7CFD584814C15 (OnPhotoModeStartedCallback_t3E74AEAE0C3BAF1711BF4C3F423A4B8272C6A456 * __this, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnPhotoModeStoppedCallback::Invoke(UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnPhotoModeStoppedCallback_Invoke_m86BD8A1BC55CCEE1B13CBD9CF9A01021149AD92E (OnPhotoModeStoppedCallback_t80B25F7611051F3335A92707211B540F04E08592 * __this, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCapturedToDiskCallback::Invoke(UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnCapturedToDiskCallback_Invoke_m3817A930596E68ACFB7E1CCAD9255294DBE62F69 (OnCapturedToDiskCallback_tAC3EFE8F816D568DFACBDCAAC2102ACC8F7927DA * __this, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame__ctor_m7D08F4FA37B9B867BA2EFE2A1D099A221FC60731 (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture/OnCapturedToMemoryCallback::Invoke(UnityEngine.XR.WSA.WebCam.PhotoCapture/PhotoCaptureResult,UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame)
extern "C" IL2CPP_METHOD_ATTR void OnCapturedToMemoryCallback_Invoke_m27564001AFC0D2411EDA3B4796F5ECAE5CDCF7B1 (OnCapturedToMemoryCallback_t1117FB4051889E3472DC6F17C4E28B4C3471CBE6 * __this, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  ___result0, PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * ___photoCaptureFrame1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::Dispose_Internal()
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_Dispose_Internal_mAA2C61CD8C2213EDE2EBADE3173465335FEF66A9 (PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::DisposeThreaded_Internal()
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_DisposeThreaded_Internal_m28BF0EB965B1D419B511D2DD15187B9C28C8F563 (PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::GetDataLength()
extern "C" IL2CPP_METHOD_ATTR int32_t PhotoCaptureFrame_GetDataLength_m2269CB960C50D53AAD3CD5243CBA915F188956E3 (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::set_dataLength(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_dataLength_mBEDEBBB3083CDE757E1FEC075F3DEDD1BC7DE798 (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::GetHasLocationData()
extern "C" IL2CPP_METHOD_ATTR bool PhotoCaptureFrame_GetHasLocationData_m49607D476B345A339BCE8F4F1412AF695AE5EC84 (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::set_hasLocationData(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_hasLocationData_mE75005491CE31BA479FA16423102B14954CF9AE0 (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.WebCam.CapturePixelFormat UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::GetCapturePixelFormat()
extern "C" IL2CPP_METHOD_ATTR int32_t PhotoCaptureFrame_GetCapturePixelFormat_mBF2EBB4AE652D353145ED579B862EE1A7D78CEEF (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::set_pixelFormat(UnityEngine.XR.WSA.WebCam.CapturePixelFormat)
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_pixelFormat_m401BAAC04045F9035AE1A20137FE3E57D2A2A870 (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::get_dataLength()
extern "C" IL2CPP_METHOD_ATTR int32_t PhotoCaptureFrame_get_dataLength_m168BA24D2D584F6CE6B4F45AE2146BD2D015A56E (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, const RuntimeMethod* method);
// System.Void System.GC::AddMemoryPressure(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void GC_AddMemoryPressure_mF48FE7CA2DC4D23FDD5B7B0A7D0B6C1C598771CE (int64_t p0, const RuntimeMethod* method);
// System.Void System.GC::RemoveMemoryPressure(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void GC_RemoveMemoryPressure_mBA7395DAA88C4F1656648172EE98A14F2E726704 (int64_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::Dispose_Internal()
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_Dispose_Internal_mFB61C7E4BDB82DFE9AC129F31164DC56B190D17E (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::Cleanup()
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_Cleanup_m725D9C5D4FF978325BCE08FF4DF0612AF8F98721 (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoCaptureResourceCreatedCallback::Invoke(UnityEngine.XR.WSA.WebCam.VideoCapture)
extern "C" IL2CPP_METHOD_ATTR void OnVideoCaptureResourceCreatedCallback_Invoke_m9584F5E514C41BEAD01A81049A0577D32303C7F0 (OnVideoCaptureResourceCreatedCallback_tF07FC786DED7B54F82740F0F65D21EA3FEC88804 * __this, VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * ___captureObject0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoCapture__ctor_mE70546FA77D0A30D7A1F5306C35752290805634F (VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * __this, intptr_t ___nativeCaptureObject0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult UnityEngine.XR.WSA.WebCam.VideoCapture::MakeCaptureResult(System.Int64)
extern "C" IL2CPP_METHOD_ATTR VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  VideoCapture_MakeCaptureResult_m877EBE3842EF752B6C2390D139C8644C77AFCA5F (int64_t ___hResult0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoModeStartedCallback::Invoke(UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnVideoModeStartedCallback_Invoke_m0129413B6110AC9959D0457B2EF6F7A532D41932 (OnVideoModeStartedCallback_t853A50811DA6BBFC7977E51BF13D1A9FF8E5100F * __this, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnVideoModeStoppedCallback::Invoke(UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnVideoModeStoppedCallback_Invoke_mDE7AA2EE59EECFC517162ED6861168227E659FC6 (OnVideoModeStoppedCallback_t69DE28B795E5B250601A1A9282127B1FD2AD31D8 * __this, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnStartedRecordingVideoCallback::Invoke(UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnStartedRecordingVideoCallback_Invoke_m3CFE1AA2BF2BC0937FD173E42630CACD1F79D90E (OnStartedRecordingVideoCallback_tBA25BE29E6C6BFF428BFEF0131C9C28E6F96BE89 * __this, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture/OnStoppedRecordingVideoCallback::Invoke(UnityEngine.XR.WSA.WebCam.VideoCapture/VideoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnStoppedRecordingVideoCallback_Invoke_m5298584F2DD5EC917D129AD5BED7411CF5E0EA60 (OnStoppedRecordingVideoCallback_t1F24C0F8A39A6E3E4606D2EB3FBA06D42E176AAF * __this, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::Dispose_Internal()
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_Dispose_Internal_mE6072B7C223F04E69FBA2FFAB5CCCBA774BEF838 (VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::DisposeThreaded_Internal()
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_DisposeThreaded_Internal_m3C52F3227C669939EBE7A4F9AB6512B4FAE0313E (VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate::Invoke(UnityEngine.XR.WSA.WorldAnchor,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate_Invoke_mC3AAC3FBDB589E9DEE9D83664191AED37F03A23C (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___worldAnchor0, bool ___located1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate::Invoke(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState)
extern "C" IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate_Invoke_mCA5DBD7DB392BB9F22AF98FB50EB570B6A26AA1F (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, String_t*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, p0, method);
}
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
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Input.GestureErrorEventArgs
extern "C" void GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshal_pinvoke(const GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C& unmarshaled, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CerrorU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CerrorU3Ek__BackingField_0());
	marshaled.___U3ChresultU3Ek__BackingField_1 = unmarshaled.get_U3ChresultU3Ek__BackingField_1();
}
extern "C" void GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshal_pinvoke_back(const GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_pinvoke& marshaled, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C& unmarshaled)
{
	unmarshaled.set_U3CerrorU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CerrorU3Ek__BackingField_0));
	int32_t unmarshaled_U3ChresultU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3ChresultU3Ek__BackingField_temp_1 = marshaled.___U3ChresultU3Ek__BackingField_1;
	unmarshaled.set_U3ChresultU3Ek__BackingField_1(unmarshaled_U3ChresultU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Input.GestureErrorEventArgs
extern "C" void GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshal_pinvoke_cleanup(GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CerrorU3Ek__BackingField_0);
	marshaled.___U3CerrorU3Ek__BackingField_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Input.GestureErrorEventArgs
extern "C" void GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshal_com(const GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C& unmarshaled, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_com& marshaled)
{
	marshaled.___U3CerrorU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CerrorU3Ek__BackingField_0());
	marshaled.___U3ChresultU3Ek__BackingField_1 = unmarshaled.get_U3ChresultU3Ek__BackingField_1();
}
extern "C" void GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshal_com_back(const GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_com& marshaled, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C& unmarshaled)
{
	unmarshaled.set_U3CerrorU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CerrorU3Ek__BackingField_0));
	int32_t unmarshaled_U3ChresultU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3ChresultU3Ek__BackingField_temp_1 = marshaled.___U3ChresultU3Ek__BackingField_1;
	unmarshaled.set_U3ChresultU3Ek__BackingField_1(unmarshaled_U3ChresultU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Input.GestureErrorEventArgs
extern "C" void GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshal_com_cleanup(GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CerrorU3Ek__BackingField_0);
	marshaled.___U3CerrorU3Ek__BackingField_0 = NULL;
}
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::.ctor(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GestureErrorEventArgs__ctor_mBC7728EEE85A73791A6D91B06935BA38D285EDA9 (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C ));
		String_t* L_0 = ___error0;
		GestureErrorEventArgs_set_error_m9BC2D2DBF1B4DB34393E38AD35CEB56773CE8E32((GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C *)__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___hresult1;
		GestureErrorEventArgs_set_hresult_m8CF0A45B2196E307D16D13BB9D8E0AE0B520DDDF((GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C *)__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void GestureErrorEventArgs__ctor_mBC7728EEE85A73791A6D91B06935BA38D285EDA9_AdjustorThunk (RuntimeObject * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * _thisAdjusted = reinterpret_cast<GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C *>(__this + 1);
	GestureErrorEventArgs__ctor_mBC7728EEE85A73791A6D91B06935BA38D285EDA9(_thisAdjusted, ___error0, ___hresult1, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::set_error(System.String)
extern "C" IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_error_m9BC2D2DBF1B4DB34393E38AD35CEB56773CE8E32 (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CerrorU3Ek__BackingField_0(L_0);
		return;
	}
}
extern "C"  void GestureErrorEventArgs_set_error_m9BC2D2DBF1B4DB34393E38AD35CEB56773CE8E32_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * _thisAdjusted = reinterpret_cast<GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C *>(__this + 1);
	GestureErrorEventArgs_set_error_m9BC2D2DBF1B4DB34393E38AD35CEB56773CE8E32(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::set_hresult(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_hresult_m8CF0A45B2196E307D16D13BB9D8E0AE0B520DDDF (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3ChresultU3Ek__BackingField_1(L_0);
		return;
	}
}
extern "C"  void GestureErrorEventArgs_set_hresult_m8CF0A45B2196E307D16D13BB9D8E0AE0B520DDDF_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * _thisAdjusted = reinterpret_cast<GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C *>(__this + 1);
	GestureErrorEventArgs_set_hresult_m8CF0A45B2196E307D16D13BB9D8E0AE0B520DDDF(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Input.GestureRecognizer
extern "C" void GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshal_pinvoke(const GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE& unmarshaled, GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Recognizer_0 = unmarshaled.get_m_Recognizer_0();
	marshaled.___HoldCanceled_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCanceled_1()));
	marshaled.___HoldCompleted_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCompleted_2()));
	marshaled.___HoldStarted_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldStarted_3()));
	marshaled.___Tapped_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Tapped_4()));
	marshaled.___ManipulationCanceled_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCanceled_5()));
	marshaled.___ManipulationCompleted_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCompleted_6()));
	marshaled.___ManipulationStarted_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationStarted_7()));
	marshaled.___ManipulationUpdated_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationUpdated_8()));
	marshaled.___NavigationCanceled_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCanceled_9()));
	marshaled.___NavigationCompleted_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCompleted_10()));
	marshaled.___NavigationStarted_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationStarted_11()));
	marshaled.___NavigationUpdated_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationUpdated_12()));
	marshaled.___RecognitionEnded_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionEnded_13()));
	marshaled.___RecognitionStarted_14 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionStarted_14()));
	marshaled.___GestureError_15 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GestureError_15()));
	marshaled.___HoldCanceledEvent_16 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCanceledEvent_16()));
	marshaled.___HoldCompletedEvent_17 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCompletedEvent_17()));
	marshaled.___HoldStartedEvent_18 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldStartedEvent_18()));
	marshaled.___TappedEvent_19 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TappedEvent_19()));
	marshaled.___ManipulationCanceledEvent_20 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCanceledEvent_20()));
	marshaled.___ManipulationCompletedEvent_21 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCompletedEvent_21()));
	marshaled.___ManipulationStartedEvent_22 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationStartedEvent_22()));
	marshaled.___ManipulationUpdatedEvent_23 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationUpdatedEvent_23()));
	marshaled.___NavigationCanceledEvent_24 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCanceledEvent_24()));
	marshaled.___NavigationCompletedEvent_25 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCompletedEvent_25()));
	marshaled.___NavigationStartedEvent_26 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationStartedEvent_26()));
	marshaled.___NavigationUpdatedEvent_27 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationUpdatedEvent_27()));
	marshaled.___RecognitionEndedEvent_28 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionEndedEvent_28()));
	marshaled.___RecognitionStartedEvent_29 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionStartedEvent_29()));
	marshaled.___GestureErrorEvent_30 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GestureErrorEvent_30()));
}
extern "C" void GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshal_pinvoke_back(const GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_pinvoke& marshaled, GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Recognizer_temp_0;
	memset(&unmarshaled_m_Recognizer_temp_0, 0, sizeof(unmarshaled_m_Recognizer_temp_0));
	unmarshaled_m_Recognizer_temp_0 = marshaled.___m_Recognizer_0;
	unmarshaled.set_m_Recognizer_0(unmarshaled_m_Recognizer_temp_0);
	unmarshaled.set_HoldCanceled_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B>(marshaled.___HoldCanceled_1, Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCompleted_2(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0>(marshaled.___HoldCompleted_2, Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldStarted_3(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E>(marshaled.___HoldStarted_3, Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E_il2cpp_TypeInfo_var));
	unmarshaled.set_Tapped_4(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12>(marshaled.___Tapped_4, Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCanceled_5(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E>(marshaled.___ManipulationCanceled_5, Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCompleted_6(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F>(marshaled.___ManipulationCompleted_6, Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationStarted_7(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E>(marshaled.___ManipulationStarted_7, Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationUpdated_8(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC>(marshaled.___ManipulationUpdated_8, Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCanceled_9(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B>(marshaled.___NavigationCanceled_9, Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCompleted_10(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1>(marshaled.___NavigationCompleted_10, Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationStarted_11(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E>(marshaled.___NavigationStarted_11, Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationUpdated_12(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C>(marshaled.___NavigationUpdated_12, Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionEnded_13(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7>(marshaled.___RecognitionEnded_13, Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionStarted_14(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E>(marshaled.___RecognitionStarted_14, Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E_il2cpp_TypeInfo_var));
	unmarshaled.set_GestureError_15(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B>(marshaled.___GestureError_15, Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCanceledEvent_16(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2>(marshaled.___HoldCanceledEvent_16, HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCompletedEvent_17(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A>(marshaled.___HoldCompletedEvent_17, HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldStartedEvent_18(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2>(marshaled.___HoldStartedEvent_18, HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2_il2cpp_TypeInfo_var));
	unmarshaled.set_TappedEvent_19(il2cpp_codegen_marshal_function_ptr_to_delegate<TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F>(marshaled.___TappedEvent_19, TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCanceledEvent_20(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917>(marshaled.___ManipulationCanceledEvent_20, ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCompletedEvent_21(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4>(marshaled.___ManipulationCompletedEvent_21, ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationStartedEvent_22(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0>(marshaled.___ManipulationStartedEvent_22, ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationUpdatedEvent_23(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406>(marshaled.___ManipulationUpdatedEvent_23, ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCanceledEvent_24(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954>(marshaled.___NavigationCanceledEvent_24, NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCompletedEvent_25(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3>(marshaled.___NavigationCompletedEvent_25, NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationStartedEvent_26(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF>(marshaled.___NavigationStartedEvent_26, NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationUpdatedEvent_27(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A>(marshaled.___NavigationUpdatedEvent_27, NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionEndedEvent_28(il2cpp_codegen_marshal_function_ptr_to_delegate<RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B>(marshaled.___RecognitionEndedEvent_28, RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionStartedEvent_29(il2cpp_codegen_marshal_function_ptr_to_delegate<RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214>(marshaled.___RecognitionStartedEvent_29, RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214_il2cpp_TypeInfo_var));
	unmarshaled.set_GestureErrorEvent_30(il2cpp_codegen_marshal_function_ptr_to_delegate<GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084>(marshaled.___GestureErrorEvent_30, GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Input.GestureRecognizer
extern "C" void GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshal_pinvoke_cleanup(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Input.GestureRecognizer
extern "C" void GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshal_com(const GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE& unmarshaled, GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_com& marshaled)
{
	marshaled.___m_Recognizer_0 = unmarshaled.get_m_Recognizer_0();
	marshaled.___HoldCanceled_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCanceled_1()));
	marshaled.___HoldCompleted_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCompleted_2()));
	marshaled.___HoldStarted_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldStarted_3()));
	marshaled.___Tapped_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Tapped_4()));
	marshaled.___ManipulationCanceled_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCanceled_5()));
	marshaled.___ManipulationCompleted_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCompleted_6()));
	marshaled.___ManipulationStarted_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationStarted_7()));
	marshaled.___ManipulationUpdated_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationUpdated_8()));
	marshaled.___NavigationCanceled_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCanceled_9()));
	marshaled.___NavigationCompleted_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCompleted_10()));
	marshaled.___NavigationStarted_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationStarted_11()));
	marshaled.___NavigationUpdated_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationUpdated_12()));
	marshaled.___RecognitionEnded_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionEnded_13()));
	marshaled.___RecognitionStarted_14 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionStarted_14()));
	marshaled.___GestureError_15 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GestureError_15()));
	marshaled.___HoldCanceledEvent_16 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCanceledEvent_16()));
	marshaled.___HoldCompletedEvent_17 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCompletedEvent_17()));
	marshaled.___HoldStartedEvent_18 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldStartedEvent_18()));
	marshaled.___TappedEvent_19 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TappedEvent_19()));
	marshaled.___ManipulationCanceledEvent_20 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCanceledEvent_20()));
	marshaled.___ManipulationCompletedEvent_21 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCompletedEvent_21()));
	marshaled.___ManipulationStartedEvent_22 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationStartedEvent_22()));
	marshaled.___ManipulationUpdatedEvent_23 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationUpdatedEvent_23()));
	marshaled.___NavigationCanceledEvent_24 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCanceledEvent_24()));
	marshaled.___NavigationCompletedEvent_25 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCompletedEvent_25()));
	marshaled.___NavigationStartedEvent_26 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationStartedEvent_26()));
	marshaled.___NavigationUpdatedEvent_27 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationUpdatedEvent_27()));
	marshaled.___RecognitionEndedEvent_28 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionEndedEvent_28()));
	marshaled.___RecognitionStartedEvent_29 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionStartedEvent_29()));
	marshaled.___GestureErrorEvent_30 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GestureErrorEvent_30()));
}
extern "C" void GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshal_com_back(const GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_com& marshaled, GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Recognizer_temp_0;
	memset(&unmarshaled_m_Recognizer_temp_0, 0, sizeof(unmarshaled_m_Recognizer_temp_0));
	unmarshaled_m_Recognizer_temp_0 = marshaled.___m_Recognizer_0;
	unmarshaled.set_m_Recognizer_0(unmarshaled_m_Recognizer_temp_0);
	unmarshaled.set_HoldCanceled_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B>(marshaled.___HoldCanceled_1, Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCompleted_2(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0>(marshaled.___HoldCompleted_2, Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldStarted_3(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E>(marshaled.___HoldStarted_3, Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E_il2cpp_TypeInfo_var));
	unmarshaled.set_Tapped_4(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12>(marshaled.___Tapped_4, Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCanceled_5(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E>(marshaled.___ManipulationCanceled_5, Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCompleted_6(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F>(marshaled.___ManipulationCompleted_6, Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationStarted_7(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E>(marshaled.___ManipulationStarted_7, Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationUpdated_8(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC>(marshaled.___ManipulationUpdated_8, Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCanceled_9(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B>(marshaled.___NavigationCanceled_9, Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCompleted_10(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1>(marshaled.___NavigationCompleted_10, Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationStarted_11(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E>(marshaled.___NavigationStarted_11, Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationUpdated_12(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C>(marshaled.___NavigationUpdated_12, Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionEnded_13(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7>(marshaled.___RecognitionEnded_13, Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionStarted_14(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E>(marshaled.___RecognitionStarted_14, Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E_il2cpp_TypeInfo_var));
	unmarshaled.set_GestureError_15(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B>(marshaled.___GestureError_15, Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCanceledEvent_16(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2>(marshaled.___HoldCanceledEvent_16, HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCompletedEvent_17(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A>(marshaled.___HoldCompletedEvent_17, HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldStartedEvent_18(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2>(marshaled.___HoldStartedEvent_18, HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2_il2cpp_TypeInfo_var));
	unmarshaled.set_TappedEvent_19(il2cpp_codegen_marshal_function_ptr_to_delegate<TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F>(marshaled.___TappedEvent_19, TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCanceledEvent_20(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917>(marshaled.___ManipulationCanceledEvent_20, ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCompletedEvent_21(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4>(marshaled.___ManipulationCompletedEvent_21, ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationStartedEvent_22(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0>(marshaled.___ManipulationStartedEvent_22, ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationUpdatedEvent_23(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406>(marshaled.___ManipulationUpdatedEvent_23, ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCanceledEvent_24(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954>(marshaled.___NavigationCanceledEvent_24, NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCompletedEvent_25(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3>(marshaled.___NavigationCompletedEvent_25, NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationStartedEvent_26(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF>(marshaled.___NavigationStartedEvent_26, NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationUpdatedEvent_27(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A>(marshaled.___NavigationUpdatedEvent_27, NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionEndedEvent_28(il2cpp_codegen_marshal_function_ptr_to_delegate<RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B>(marshaled.___RecognitionEndedEvent_28, RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionStartedEvent_29(il2cpp_codegen_marshal_function_ptr_to_delegate<RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214>(marshaled.___RecognitionStartedEvent_29, RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214_il2cpp_TypeInfo_var));
	unmarshaled.set_GestureErrorEvent_30(il2cpp_codegen_marshal_function_ptr_to_delegate<GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084>(marshaled.___GestureErrorEvent_30, GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Input.GestureRecognizer
extern "C" void GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshal_com_cleanup(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::Finalize()
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_Finalize_m276601D68E2EF58C2286101AD6BBD369EB33F1F3 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_Finalize_m276601D68E2EF58C2286101AD6BBD369EB33F1F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_Recognizer_0();
			bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_002f;
			}
		}

IL_0016:
		{
			GestureRecognizer_DestroyThreaded_m1C5095AA124113EB403DB4CC55EF8231F48F47DB(__this, /*hidden argument*/NULL);
			__this->set_m_Recognizer_0((intptr_t)(0));
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::DestroyThreaded()
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_DestroyThreaded_m1C5095AA124113EB403DB4CC55EF8231F48F47DB (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method)
{
	typedef void (*GestureRecognizer_DestroyThreaded_m1C5095AA124113EB403DB4CC55EF8231F48F47DB_ftn) (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE *);
	static GestureRecognizer_DestroyThreaded_m1C5095AA124113EB403DB4CC55EF8231F48F47DB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GestureRecognizer_DestroyThreaded_m1C5095AA124113EB403DB4CC55EF8231F48F47DB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Input.GestureRecognizer::DestroyThreaded()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::Dispose()
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_Dispose_mCDB9196736129DA85372020E13A8768175E9A97C (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_Dispose_mCDB9196736129DA85372020E13A8768175E9A97C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Recognizer_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		GestureRecognizer_Destroy_mB698484AD27F6B324450134F777B4CF411941C81(__this, /*hidden argument*/NULL);
		__this->set_m_Recognizer_0((intptr_t)(0));
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::Destroy()
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_Destroy_mB698484AD27F6B324450134F777B4CF411941C81 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method)
{
	typedef void (*GestureRecognizer_Destroy_mB698484AD27F6B324450134F777B4CF411941C81_ftn) (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE *);
	static GestureRecognizer_Destroy_mB698484AD27F6B324450134F777B4CF411941C81_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GestureRecognizer_Destroy_mB698484AD27F6B324450134F777B4CF411941C81_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Input.GestureRecognizer::Destroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeHoldCanceled(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeHoldCanceled_mC34AE7488EB2F23E0484F55EC5B06A2195E28788 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeHoldCanceled_mC34AE7488EB2F23E0484F55EC5B06A2195E28788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * V_0 = NULL;
	Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * V_1 = NULL;
	HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * L_0 = __this->get_HoldCanceledEvent_16();
		V_0 = L_0;
		HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_5, L_6, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_8), L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		HoldCanceledEventDelegate_Invoke_m1544130A1A2D9112BAE59903EFD5605AD96D5002(L_2, L_3, L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_9 = __this->get_HoldCanceled_1();
		V_1 = L_9;
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_11 = ___source0;
		(&V_2)->set_m_Source_0(L_11);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_12 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_12);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_13 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_13);
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_14 = V_1;
		HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244  L_15 = V_2;
		NullCheck(L_14);
		Action_1_Invoke_m5795ACB95FE9CCD6F5A924378FA9DE8E9CA3A6C4(L_14, L_15, /*hidden argument*/Action_1_Invoke_m5795ACB95FE9CCD6F5A924378FA9DE8E9CA3A6C4_RuntimeMethod_var);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeHoldCompleted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeHoldCompleted_mD4B85266C373031A6560CD9F8E0ABD106BD275D4 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeHoldCompleted_mD4B85266C373031A6560CD9F8E0ABD106BD275D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * V_0 = NULL;
	Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * V_1 = NULL;
	HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * L_0 = __this->get_HoldCompletedEvent_17();
		V_0 = L_0;
		HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_5, L_6, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_8), L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		HoldCompletedEventDelegate_Invoke_m6FA6CDA845F589846063D014356C1E0445320798(L_2, L_3, L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_9 = __this->get_HoldCompleted_2();
		V_1 = L_9;
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_11 = ___source0;
		(&V_2)->set_m_Source_0(L_11);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_12 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_12);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_13 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_13);
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_14 = V_1;
		HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3  L_15 = V_2;
		NullCheck(L_14);
		Action_1_Invoke_mA97E44F00BEFB34149435C4BE656AF816A0E9DF8(L_14, L_15, /*hidden argument*/Action_1_Invoke_mA97E44F00BEFB34149435C4BE656AF816A0E9DF8_RuntimeMethod_var);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeHoldStarted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeHoldStarted_m6E5AF40A3DB2A8DDD12726E2A5220280835D7853 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeHoldStarted_m6E5AF40A3DB2A8DDD12726E2A5220280835D7853_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * V_0 = NULL;
	Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * V_1 = NULL;
	HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * L_0 = __this->get_HoldStartedEvent_18();
		V_0 = L_0;
		HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_5, L_6, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_8), L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		HoldStartedEventDelegate_Invoke_m504D569012750F2C63512FDB35614DF5ECDAF7FA(L_2, L_3, L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_9 = __this->get_HoldStarted_3();
		V_1 = L_9;
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_11 = ___source0;
		(&V_2)->set_m_Source_0(L_11);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_12 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_12);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_13 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_13);
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_14 = V_1;
		HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874  L_15 = V_2;
		NullCheck(L_14);
		Action_1_Invoke_mBB5D2CBD59DE968F3B42B022A9DABD9E5C69B1B4(L_14, L_15, /*hidden argument*/Action_1_Invoke_mBB5D2CBD59DE968F3B42B022A9DABD9E5C69B1B4_RuntimeMethod_var);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeTapped(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeTapped_mD670AC122C9088630460544749701C246B1B2A49 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, int32_t ___tapCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeTapped_mD670AC122C9088630460544749701C246B1B2A49_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * V_0 = NULL;
	Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * V_1 = NULL;
	TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * L_0 = __this->get_TappedEvent_19();
		V_0 = L_0;
		TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		int32_t L_4 = ___tapCount3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_6, L_7, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		TappedEventDelegate_Invoke_m02055A4BCAD7BCFD64AAB05FDFDCC6BD8E6F189B(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * L_10 = __this->get_Tapped_4();
		V_1 = L_10;
		Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * L_11 = V_1;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		int32_t L_15 = ___tapCount3;
		(&V_2)->set_m_TapCount_3(L_15);
		Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * L_16 = V_1;
		TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6  L_17 = V_2;
		NullCheck(L_16);
		Action_1_Invoke_m7B37293237BA07CC6B50638B6DBD109BB4DC004D(L_16, L_17, /*hidden argument*/Action_1_Invoke_m7B37293237BA07CC6B50638B6DBD109BB4DC004D_RuntimeMethod_var);
	}

IL_0071:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeManipulationCanceled(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeManipulationCanceled_m1BF8273F58D455F4F509EA1C819FC63109762922 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeManipulationCanceled_m1BF8273F58D455F4F509EA1C819FC63109762922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * V_0 = NULL;
	Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * V_1 = NULL;
	ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * L_0 = __this->get_ManipulationCanceledEvent_20();
		V_0 = L_0;
		ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (&___headPose2)->get_rotation_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_6, L_7, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		ManipulationCanceledEventDelegate_Invoke_m97FD70C68AE74FE5EB03D3B461F969F6E3E2C231(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_10 = __this->get_ManipulationCanceled_5();
		V_1 = L_10;
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_11 = V_1;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_15 = V_1;
		ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417  L_16 = V_2;
		NullCheck(L_15);
		Action_1_Invoke_mF9EDDB9E3BC7AACDBA69EA5356BC2496FA296802(L_15, L_16, /*hidden argument*/Action_1_Invoke_mF9EDDB9E3BC7AACDBA69EA5356BC2496FA296802_RuntimeMethod_var);
	}

IL_006b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeManipulationCompleted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeManipulationCompleted_m6553513E4776E6D01BA438497E82387B219DDB7A (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeManipulationCompleted_m6553513E4776E6D01BA438497E82387B219DDB7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * V_0 = NULL;
	Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * V_1 = NULL;
	ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * L_0 = __this->get_ManipulationCompletedEvent_21();
		V_0 = L_0;
		ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___cumulativeDelta3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_6, L_7, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		ManipulationCompletedEventDelegate_Invoke_m93DD17C1359B1F4B931D2C4467D85716AD92A0F2(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_10 = __this->get_ManipulationCompleted_6();
		V_1 = L_10;
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_11 = V_1;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = ___cumulativeDelta3;
		(&V_2)->set_m_CumulativeDelta_3(L_15);
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_16 = V_1;
		ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0  L_17 = V_2;
		NullCheck(L_16);
		Action_1_Invoke_mAAA2C311608C583870A692A74FF519C2164D1EC3(L_16, L_17, /*hidden argument*/Action_1_Invoke_mAAA2C311608C583870A692A74FF519C2164D1EC3_RuntimeMethod_var);
	}

IL_0071:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeManipulationStarted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeManipulationStarted_m24AB97B545BEBCC96200E52F8648903D27CB6EFF (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeManipulationStarted_m24AB97B545BEBCC96200E52F8648903D27CB6EFF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * V_0 = NULL;
	Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * V_1 = NULL;
	ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * L_0 = __this->get_ManipulationStartedEvent_22();
		V_0 = L_0;
		ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (&___headPose2)->get_rotation_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_6, L_7, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		ManipulationStartedEventDelegate_Invoke_mDA7BE6F4F51E1B0933EAD00C5555CDE8F4931450(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_10 = __this->get_ManipulationStarted_7();
		V_1 = L_10;
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_11 = V_1;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_15 = V_1;
		ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2  L_16 = V_2;
		NullCheck(L_15);
		Action_1_Invoke_m0A7693DAB618A5AD064357DEE18C65EE17EC4F3C(L_15, L_16, /*hidden argument*/Action_1_Invoke_m0A7693DAB618A5AD064357DEE18C65EE17EC4F3C_RuntimeMethod_var);
	}

IL_006b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeManipulationUpdated(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeManipulationUpdated_mFFFD261C7F13C3D7A890C6A7F2D9B8EEDDB2974B (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeManipulationUpdated_mFFFD261C7F13C3D7A890C6A7F2D9B8EEDDB2974B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * V_0 = NULL;
	Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * V_1 = NULL;
	ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * L_0 = __this->get_ManipulationUpdatedEvent_23();
		V_0 = L_0;
		ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___cumulativeDelta3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_6, L_7, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		ManipulationUpdatedEventDelegate_Invoke_m39222E61BA5CE3B8EA1E3C892C4E399C641CED20(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_10 = __this->get_ManipulationUpdated_8();
		V_1 = L_10;
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_11 = V_1;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = ___cumulativeDelta3;
		(&V_2)->set_m_CumulativeDelta_3(L_15);
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_16 = V_1;
		ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E  L_17 = V_2;
		NullCheck(L_16);
		Action_1_Invoke_m5B7D08B1B0AC1D184B93F9CE5DAE32B5DC1EA694(L_16, L_17, /*hidden argument*/Action_1_Invoke_m5B7D08B1B0AC1D184B93F9CE5DAE32B5DC1EA694_RuntimeMethod_var);
	}

IL_0071:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeNavigationCanceled(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeNavigationCanceled_m39FE74B1B69937DFE5F775D4B15F11BDF5A23B8E (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeNavigationCanceled_m39FE74B1B69937DFE5F775D4B15F11BDF5A23B8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * V_0 = NULL;
	Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * V_1 = NULL;
	NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * L_0 = __this->get_NavigationCanceledEvent_24();
		V_0 = L_0;
		NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (&___headPose2)->get_rotation_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_6, L_7, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		NavigationCanceledEventDelegate_Invoke_mE1BC888BB04B0915D6CFF1A94144D993CEF0FDB5(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_10 = __this->get_NavigationCanceled_9();
		V_1 = L_10;
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_11 = V_1;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_15 = V_1;
		NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760  L_16 = V_2;
		NullCheck(L_15);
		Action_1_Invoke_m1B04A9EFA672A32E86BFE93CCCBDF4C4504D9C1E(L_15, L_16, /*hidden argument*/Action_1_Invoke_m1B04A9EFA672A32E86BFE93CCCBDF4C4504D9C1E_RuntimeMethod_var);
	}

IL_006b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeNavigationCompleted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeNavigationCompleted_m6A60E54BD33834390D15D7CF163B6C0DDDCFE776 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeNavigationCompleted_m6A60E54BD33834390D15D7CF163B6C0DDDCFE776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * V_0 = NULL;
	Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * V_1 = NULL;
	NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * L_0 = __this->get_NavigationCompletedEvent_25();
		V_0 = L_0;
		NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___normalizedOffset3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_6, L_7, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		NavigationCompletedEventDelegate_Invoke_mE2C0283BE82345A791C543C8696BA5C2B462E1FD(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_10 = __this->get_NavigationCompleted_10();
		V_1 = L_10;
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_11 = V_1;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = ___normalizedOffset3;
		(&V_2)->set_m_NormalizedOffset_3(L_15);
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_16 = V_1;
		NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39  L_17 = V_2;
		NullCheck(L_16);
		Action_1_Invoke_m34F24EFCBA6CB015D4A48C3CD5C7E61C227D5193(L_16, L_17, /*hidden argument*/Action_1_Invoke_m34F24EFCBA6CB015D4A48C3CD5C7E61C227D5193_RuntimeMethod_var);
	}

IL_0071:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeNavigationStarted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeNavigationStarted_m2079422473B03AE0A036518C2BE0D5C13D6A89CF (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeNavigationStarted_m2079422473B03AE0A036518C2BE0D5C13D6A89CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * V_0 = NULL;
	Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * V_1 = NULL;
	NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * L_0 = __this->get_NavigationStartedEvent_26();
		V_0 = L_0;
		NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (&___headPose2)->get_rotation_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_6, L_7, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		NavigationStartedEventDelegate_Invoke_mFD08DF0FF1C8B9E87D59C9BC0F03EBB998360EB9(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_10 = __this->get_NavigationStarted_11();
		V_1 = L_10;
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_11 = V_1;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_15 = V_1;
		NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339  L_16 = V_2;
		NullCheck(L_15);
		Action_1_Invoke_m648E0A8232CCAE8D9527EEAEF4363D611E41C6B7(L_15, L_16, /*hidden argument*/Action_1_Invoke_m648E0A8232CCAE8D9527EEAEF4363D611E41C6B7_RuntimeMethod_var);
	}

IL_006b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeNavigationUpdated(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeNavigationUpdated_m94F6C1A11FC117B2B5346840247780C79ACAEB5D (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeNavigationUpdated_m94F6C1A11FC117B2B5346840247780C79ACAEB5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * V_0 = NULL;
	Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * V_1 = NULL;
	NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * L_0 = __this->get_NavigationUpdatedEvent_27();
		V_0 = L_0;
		NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___normalizedOffset3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_6, L_7, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		NavigationUpdatedEventDelegate_Invoke_mE6FB25850173B4E42B65D60F587A101CAA62C1C2(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_10 = __this->get_NavigationUpdated_12();
		V_1 = L_10;
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_11 = V_1;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = ___normalizedOffset3;
		(&V_2)->set_m_NormalizedOffset_3(L_15);
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_16 = V_1;
		NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA  L_17 = V_2;
		NullCheck(L_16);
		Action_1_Invoke_m2A815481C588BDC936FCCF8DFCF0368061AED64B(L_16, L_17, /*hidden argument*/Action_1_Invoke_m2A815481C588BDC936FCCF8DFCF0368061AED64B_RuntimeMethod_var);
	}

IL_0071:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeRecognitionEnded(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeRecognitionEnded_mDFBDE51B56D682C1636521441816533C81CC753A (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeRecognitionEnded_mDFBDE51B56D682C1636521441816533C81CC753A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * V_0 = NULL;
	Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * V_1 = NULL;
	RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * L_0 = __this->get_RecognitionEndedEvent_28();
		V_0 = L_0;
		RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_5, L_6, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_8), L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		RecognitionEndedEventDelegate_Invoke_mCE7877BDB4BA9DDB85C2C2908FF33DFA38426063(L_2, L_3, L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * L_9 = __this->get_RecognitionEnded_13();
		V_1 = L_9;
		Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_11 = ___source0;
		(&V_2)->set_m_Source_0(L_11);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_12 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_12);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_13 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_13);
		Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * L_14 = V_1;
		RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB  L_15 = V_2;
		NullCheck(L_14);
		Action_1_Invoke_m125E522A0C41AC0FC6C0D40A229D597471B45567(L_14, L_15, /*hidden argument*/Action_1_Invoke_m125E522A0C41AC0FC6C0D40A229D597471B45567_RuntimeMethod_var);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeRecognitionStarted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeRecognitionStarted_m1E8873104D35064A51A0BAAC7774CDFFEED61924 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeRecognitionStarted_m1E8873104D35064A51A0BAAC7774CDFFEED61924_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * V_0 = NULL;
	Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * V_1 = NULL;
	RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * L_0 = __this->get_RecognitionStartedEvent_29();
		V_0 = L_0;
		RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_5, L_6, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_8), L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		RecognitionStartedEventDelegate_Invoke_mAB4BFDD255D2CA76718D285598A6832631AA9BB4(L_2, L_3, L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * L_9 = __this->get_RecognitionStarted_14();
		V_1 = L_9;
		Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_11 = ___source0;
		(&V_2)->set_m_Source_0(L_11);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_12 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_12);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_13 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_13);
		Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * L_14 = V_1;
		RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65  L_15 = V_2;
		NullCheck(L_14);
		Action_1_Invoke_mF57F2088FC61BB31C2D92DA0291CDC0EFE739C90(L_14, L_15, /*hidden argument*/Action_1_Invoke_mF57F2088FC61BB31C2D92DA0291CDC0EFE739C90_RuntimeMethod_var);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeErrorEvent(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeErrorEvent_m59368BCBE12B89289E8BFF2309A58002268DE43A (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeErrorEvent_m59368BCBE12B89289E8BFF2309A58002268DE43A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * V_0 = NULL;
	Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * V_1 = NULL;
	{
		GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * L_0 = __this->get_GestureErrorEvent_30();
		V_0 = L_0;
		GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * L_2 = V_0;
		String_t* L_3 = ___error0;
		int32_t L_4 = ___hresult1;
		NullCheck(L_2);
		GestureErrorDelegate_Invoke_m7474F967FEDDFC0FFEE7089771F3A4BC589FC0FF(L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0016:
	{
		Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * L_5 = __this->get_GestureError_15();
		V_1 = L_5;
		Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * L_7 = V_1;
		String_t* L_8 = ___error0;
		int32_t L_9 = ___hresult1;
		GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C  L_10;
		memset(&L_10, 0, sizeof(L_10));
		GestureErrorEventArgs__ctor_mBC7728EEE85A73791A6D91B06935BA38D285EDA9((&L_10), L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Action_1_Invoke_m971A7F94ACA669C07644DDEE7406533FA3502676(L_7, L_10, /*hidden argument*/Action_1_Invoke_m971A7F94ACA669C07644DDEE7406533FA3502676_RuntimeMethod_var);
	}

IL_0030:
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
extern "C"  void DelegatePInvokeWrapper_GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 (GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter U27___error0U27 to native representation
	char* ____error0_marshaled = NULL;
	____error0_marshaled = il2cpp_codegen_marshal_string(___error0);

	// Native function invocation
	il2cppPInvokeFunc(____error0_marshaled, ___hresult1);

	// Marshaling cleanup of parameter U27___error0U27 native representation
	il2cpp_codegen_marshal_free(____error0_marshaled);
	____error0_marshaled = NULL;

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GestureErrorDelegate__ctor_mD4C38B3820145B0F317EAD4A0B19EB139F27820B (GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate::Invoke(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GestureErrorDelegate_Invoke_m7474F967FEDDFC0FFEE7089771F3A4BC589FC0FF (GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___hresult1, targetMethod);
				}
			}
			else if (___parameterCount != 2)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___error0, ___hresult1);
							else
								GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___error0, ___hresult1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___error0, ___hresult1);
							else
								VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___error0, ___hresult1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___error0, ___hresult1);
							else
								GenericVirtActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___error0, ___hresult1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___error0, ___hresult1);
							else
								VirtActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___error0, ___hresult1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___hresult1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___hresult1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___error0, ___hresult1);
						else
							GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___error0, ___hresult1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___error0, ___hresult1);
						else
							VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___error0, ___hresult1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___error0, ___hresult1);
						else
							GenericVirtActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___error0, ___hresult1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___error0, ___hresult1);
						else
							VirtActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___error0, ___hresult1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___hresult1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate::BeginInvoke(System.String,System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GestureErrorDelegate_BeginInvoke_m74CC1A18B8CACCA1FA512F2173BD31AC7AAAB441 (GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * __this, String_t* ___error0, int32_t ___hresult1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureErrorDelegate_BeginInvoke_m74CC1A18B8CACCA1FA512F2173BD31AC7AAAB441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___error0;
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___hresult1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GestureErrorDelegate_EndInvoke_m68CAF56B044377516E3AE39C8D9BF5D937B62005 (GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 (HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void HoldCanceledEventDelegate__ctor_m415846F1351B43B163D8ED9BB9978DFA5555767C (HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void HoldCanceledEventDelegate_Invoke_m1544130A1A2D9112BAE59903EFD5605AD96D5002 (HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
							else
								GenericVirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
							else
								VirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
						else
							GenericVirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
						else
							VirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* HoldCanceledEventDelegate_BeginInvoke_mB7C6B86BCBD192C46E0DB0CC76536B659DE914B7 (HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoldCanceledEventDelegate_BeginInvoke_mB7C6B86BCBD192C46E0DB0CC76536B659DE914B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void HoldCanceledEventDelegate_EndInvoke_mF3F211617D95995D5E91C9634FBDEAA562428723 (HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A (HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void HoldCompletedEventDelegate__ctor_m8FCF57072F5D1D8D4BEC8663B49D960BDDF2DD1F (HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void HoldCompletedEventDelegate_Invoke_m6FA6CDA845F589846063D014356C1E0445320798 (HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
							else
								GenericVirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
							else
								VirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
						else
							GenericVirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
						else
							VirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* HoldCompletedEventDelegate_BeginInvoke_m6990F58B8B07706460F6D685EAB6F8B6A27E3025 (HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoldCompletedEventDelegate_BeginInvoke_m6990F58B8B07706460F6D685EAB6F8B6A27E3025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void HoldCompletedEventDelegate_EndInvoke_mF79F6340B3988CED18D33E83C5809C52463676E2 (HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 (HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void HoldStartedEventDelegate__ctor_m5C557DA90E407F179E6EBB911BEB6B4EA808A4B2 (HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void HoldStartedEventDelegate_Invoke_m504D569012750F2C63512FDB35614DF5ECDAF7FA (HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
							else
								GenericVirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
							else
								VirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
						else
							GenericVirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
						else
							VirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* HoldStartedEventDelegate_BeginInvoke_mEB69CDD03CA2F7E2AC53F90C1F983A9681F102A5 (HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoldStartedEventDelegate_BeginInvoke_mEB69CDD03CA2F7E2AC53F90C1F983A9681F102A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void HoldStartedEventDelegate_EndInvoke_m9F7E4EF554B40FF1A978BD36CAA76FAC5F70E9C6 (HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 (ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___cumulativeDelta1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ManipulationCanceledEventDelegate__ctor_m79AFE305BCE0BC58EEDEA921B4DBE5F6558AA065 (ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void ManipulationCanceledEventDelegate_Invoke_m97FD70C68AE74FE5EB03D3B461F969F6E3E2C231 (ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
							else
								GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
							else
								VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						else
							GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						else
							VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ManipulationCanceledEventDelegate_BeginInvoke_m2F42D255FB64C543111584E2B183D66809A72FE0 (ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManipulationCanceledEventDelegate_BeginInvoke_m2F42D255FB64C543111584E2B183D66809A72FE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___cumulativeDelta1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ManipulationCanceledEventDelegate_EndInvoke_m5B012B4C44F179D710A2B0E68505A393A413771C (ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 (ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___cumulativeDelta1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ManipulationCompletedEventDelegate__ctor_m1F78398A94D42CB17CF57D19994E0535091B4F1A (ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void ManipulationCompletedEventDelegate_Invoke_m93DD17C1359B1F4B931D2C4467D85716AD92A0F2 (ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
							else
								GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
							else
								VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						else
							GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						else
							VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ManipulationCompletedEventDelegate_BeginInvoke_m27EECB11BB8511FF754685CB629E072A6FED723B (ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManipulationCompletedEventDelegate_BeginInvoke_m27EECB11BB8511FF754685CB629E072A6FED723B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___cumulativeDelta1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ManipulationCompletedEventDelegate_EndInvoke_mBDA5687CCFE095F96371447677BECE5159E44506 (ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 (ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___cumulativeDelta1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ManipulationStartedEventDelegate__ctor_m30296A34DCF31477F0704637E8CBA79BB79F50A7 (ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void ManipulationStartedEventDelegate_Invoke_mDA7BE6F4F51E1B0933EAD00C5555CDE8F4931450 (ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
							else
								GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
							else
								VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						else
							GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						else
							VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ManipulationStartedEventDelegate_BeginInvoke_mE4118447769181F38B295DDCD5484F0974CE7CAB (ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManipulationStartedEventDelegate_BeginInvoke_mE4118447769181F38B295DDCD5484F0974CE7CAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___cumulativeDelta1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ManipulationStartedEventDelegate_EndInvoke_m81CE2B949D06C3276755D1F17BE5572AF311EDB7 (ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 (ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___cumulativeDelta1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ManipulationUpdatedEventDelegate__ctor_m33281C9A682C131115621B74915C5BCC6323C47E (ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void ManipulationUpdatedEventDelegate_Invoke_m39222E61BA5CE3B8EA1E3C892C4E399C641CED20 (ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
							else
								GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
							else
								VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						else
							GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
						else
							VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ManipulationUpdatedEventDelegate_BeginInvoke_m109B92F35D22F6CB8BDDB76F65947BB3E36343AF (ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManipulationUpdatedEventDelegate_BeginInvoke_m109B92F35D22F6CB8BDDB76F65947BB3E36343AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___cumulativeDelta1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ManipulationUpdatedEventDelegate_EndInvoke_mA85AE986C163140321876052A72C2A1BDDFF9D90 (ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 (NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___normalizedOffset1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NavigationCanceledEventDelegate__ctor_mB3FDA9309D2B4FFEAF12612CC32CA17ABB5DED2B (NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void NavigationCanceledEventDelegate_Invoke_mE1BC888BB04B0915D6CFF1A94144D993CEF0FDB5 (NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
							else
								GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
							else
								VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						else
							GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						else
							VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NavigationCanceledEventDelegate_BeginInvoke_mD9BCA54B098777B5EF4A96DBB14CD92AF3919306 (NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationCanceledEventDelegate_BeginInvoke_mD9BCA54B098777B5EF4A96DBB14CD92AF3919306_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___normalizedOffset1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void NavigationCanceledEventDelegate_EndInvoke_m223D7722D0C4534DE5AC1D7E390DC3CC12602285 (NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 (NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___normalizedOffset1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NavigationCompletedEventDelegate__ctor_m33D586D83B9C75F8F6BBE0B3630BF4C99615B737 (NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void NavigationCompletedEventDelegate_Invoke_mE2C0283BE82345A791C543C8696BA5C2B462E1FD (NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
							else
								GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
							else
								VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						else
							GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						else
							VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NavigationCompletedEventDelegate_BeginInvoke_m3B0EF279ADD1EA29A764D156DA3C248E519408F2 (NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationCompletedEventDelegate_BeginInvoke_m3B0EF279ADD1EA29A764D156DA3C248E519408F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___normalizedOffset1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void NavigationCompletedEventDelegate_EndInvoke_m849C460A2902310E230EE05658D9473F3CF350E0 (NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF (NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___normalizedOffset1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NavigationStartedEventDelegate__ctor_mE86F12962AC8D07F0334FA5A588F4B00FBC170E6 (NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void NavigationStartedEventDelegate_Invoke_mFD08DF0FF1C8B9E87D59C9BC0F03EBB998360EB9 (NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
							else
								GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
							else
								VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						else
							GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						else
							VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NavigationStartedEventDelegate_BeginInvoke_m7F938167F8941BA728FC429CC9D7587E4DF5E5EB (NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationStartedEventDelegate_BeginInvoke_m7F938167F8941BA728FC429CC9D7587E4DF5E5EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___normalizedOffset1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void NavigationStartedEventDelegate_EndInvoke_m9B84A1E024D2E32DB1002F78C0C396E7AA499539 (NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A (NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___normalizedOffset1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NavigationUpdatedEventDelegate__ctor_m2A31CA914B39EA13ED572FC8594C30B9AF1805CF (NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void NavigationUpdatedEventDelegate_Invoke_mE6FB25850173B4E42B65D60F587A101CAA62C1C2 (NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
							else
								GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
							else
								VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						else
							GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
						else
							VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NavigationUpdatedEventDelegate_BeginInvoke_m529EFAB702CC51B45F2B16FA2FC8144DECF32F20 (NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationUpdatedEventDelegate_BeginInvoke_m529EFAB702CC51B45F2B16FA2FC8144DECF32F20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___normalizedOffset1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void NavigationUpdatedEventDelegate_EndInvoke_mAEA1AB925D417E6C3267C0046B0EFCEF29A75D59 (NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B (RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RecognitionEndedEventDelegate__ctor_mFEEB685DBC9813C403AB761F95D6D63909E362CE (RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void RecognitionEndedEventDelegate_Invoke_mCE7877BDB4BA9DDB85C2C2908FF33DFA38426063 (RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
							else
								GenericVirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
							else
								VirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
						else
							GenericVirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
						else
							VirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RecognitionEndedEventDelegate_BeginInvoke_mF3478908780F05C95ABBED5BFA17151A74981F8D (RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecognitionEndedEventDelegate_BeginInvoke_mF3478908780F05C95ABBED5BFA17151A74981F8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void RecognitionEndedEventDelegate_EndInvoke_mDDEEE066AA475CD967BF04BCE09FC3122DDE6BC2 (RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 (RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RecognitionStartedEventDelegate__ctor_m98B9C00469A86B9D0AC39CDCA69189D6CEB9E6AC (RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void RecognitionStartedEventDelegate_Invoke_mAB4BFDD255D2CA76718D285598A6832631AA9BB4 (RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
							else
								GenericVirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
							else
								VirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
						else
							GenericVirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
						else
							VirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RecognitionStartedEventDelegate_BeginInvoke_m51C50FCE97EB51769763374DD3DFB4FD38EA8F54 (RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecognitionStartedEventDelegate_BeginInvoke_m51C50FCE97EB51769763374DD3DFB4FD38EA8F54_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void RecognitionStartedEventDelegate_EndInvoke_mA6F74502C69A300D09B01E38FF79BF7FFAEA5770 (RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F (TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * __this, int32_t ___source0, int32_t ___tapCount1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___tapCount1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TappedEventDelegate__ctor_mBA7F688B363C5440A47B2EF02A690C7B7832BBEC (TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,System.Int32,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void TappedEventDelegate_Invoke_m02055A4BCAD7BCFD64AAB05FDFDCC6BD8E6F189B (TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * __this, int32_t ___source0, int32_t ___tapCount1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___tapCount1, ___headRay2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___tapCount1, ___headRay2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___source0, ___tapCount1, ___headRay2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___tapCount1, ___headRay2);
							else
								GenericVirtActionInvoker3< int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___tapCount1, ___headRay2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___tapCount1, ___headRay2);
							else
								VirtActionInvoker3< int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___tapCount1, ___headRay2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___tapCount1, ___headRay2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___tapCount1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___tapCount1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___source0, ___tapCount1, ___headRay2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___tapCount1, ___headRay2);
						else
							GenericVirtActionInvoker3< int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___tapCount1, ___headRay2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___tapCount1, ___headRay2);
						else
							VirtActionInvoker3< int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___tapCount1, ___headRay2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___tapCount1, ___headRay2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,System.Int32,UnityEngine.Ray,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TappedEventDelegate_BeginInvoke_m1523B624800012E92D400C62904EB0E3F45D8715 (TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * __this, int32_t ___source0, int32_t ___tapCount1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TappedEventDelegate_BeginInvoke_m1523B624800012E92D400C62904EB0E3F45D8715_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___tapCount1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void TappedEventDelegate_EndInvoke_mA14E66DC254C3EB3DA3E1B7D1ABC4A56DA9587D3 (TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.Input.InteractionManager::.cctor()
extern "C" IL2CPP_METHOD_ATTR void InteractionManager__cctor_m0DE800BAFE143A6D365E33EB68ECB1375F7446C5 (const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager::OnSourceEvent(UnityEngine.XR.WSA.Input.InteractionManager_EventType,System.IntPtr,UnityEngine.XR.WSA.Input.InteractionSourcePressType)
extern "C" IL2CPP_METHOD_ATTR void InteractionManager_OnSourceEvent_mC853244D8689197F06A503F65D1F4195C57ED8FB (int32_t ___eventType0, intptr_t ___statePtr1, int32_t ___pressType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionManager_OnSourceEvent_mC853244D8689197F06A503F65D1F4195C57ED8FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  V_0;
	memset(&V_0, 0, sizeof(V_0));
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * V_1 = NULL;
	Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * V_2 = NULL;
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * V_3 = NULL;
	Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * V_4 = NULL;
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * V_5 = NULL;
	Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * V_6 = NULL;
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * V_7 = NULL;
	Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * V_8 = NULL;
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * V_9 = NULL;
	Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * V_10 = NULL;
	{
		intptr_t L_0 = ___statePtr1;
		void* L_1 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (*(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 *)L_1);
		int32_t L_2 = ___eventType0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_005e;
			}
			case 2:
			{
				goto IL_0093;
			}
			case 3:
			{
				goto IL_00cb;
			}
			case 4:
			{
				goto IL_0104;
			}
		}
	}
	{
		goto IL_013d;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_3 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceDetectedLegacy_5();
		V_1 = L_3;
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_5 = V_1;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_6 = V_0;
		NullCheck(L_5);
		SourceEventHandler_Invoke_mC13C60B714BB48292BC11625A124A685F07B9E30(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_7 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceDetected_0();
		V_2 = L_7;
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_8 = V_2;
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_9 = V_2;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_10 = V_0;
		InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755  L_11;
		memset(&L_11, 0, sizeof(L_11));
		InteractionSourceDetectedEventArgs__ctor_m2FBA271484B0D35C53DB7BE9C4251236737E4580((&L_11), L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Action_1_Invoke_m4F3930EF30194EC44F419B3E94774BE548E5BC66(L_9, L_11, /*hidden argument*/Action_1_Invoke_m4F3930EF30194EC44F419B3E94774BE548E5BC66_RuntimeMethod_var);
	}

IL_0058:
	{
		goto IL_0148;
	}

IL_005e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_12 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceLostLegacy_6();
		V_3 = L_12;
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_13 = V_3;
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_14 = V_3;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_15 = V_0;
		NullCheck(L_14);
		SourceEventHandler_Invoke_mC13C60B714BB48292BC11625A124A685F07B9E30(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_16 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceLost_1();
		V_4 = L_16;
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_17 = V_4;
		if (!L_17)
		{
			goto IL_008d;
		}
	}
	{
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_18 = V_4;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_19 = V_0;
		InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC  L_20;
		memset(&L_20, 0, sizeof(L_20));
		InteractionSourceLostEventArgs__ctor_mE13D688DF29978E37FC86E1EEC3469D46532D7BF((&L_20), L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		Action_1_Invoke_m40CAE8C6B97EA521838F7AC64D9FFFD267AF3FAF(L_18, L_20, /*hidden argument*/Action_1_Invoke_m40CAE8C6B97EA521838F7AC64D9FFFD267AF3FAF_RuntimeMethod_var);
	}

IL_008d:
	{
		goto IL_0148;
	}

IL_0093:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_21 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceUpdatedLegacy_9();
		V_5 = L_21;
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_22 = V_5;
		if (!L_22)
		{
			goto IL_00aa;
		}
	}
	{
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_23 = V_5;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_24 = V_0;
		NullCheck(L_23);
		SourceEventHandler_Invoke_mC13C60B714BB48292BC11625A124A685F07B9E30(L_23, L_24, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_25 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceUpdated_4();
		V_6 = L_25;
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_26 = V_6;
		if (!L_26)
		{
			goto IL_00c5;
		}
	}
	{
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_27 = V_6;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_28 = V_0;
		InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5  L_29;
		memset(&L_29, 0, sizeof(L_29));
		InteractionSourceUpdatedEventArgs__ctor_m78938DD82C92670ECEF9C43CA844F6448F22FA76((&L_29), L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		Action_1_Invoke_mC6B23C0EDFD5C27A34D6DD6AE326D59CA7005CF1(L_27, L_29, /*hidden argument*/Action_1_Invoke_mC6B23C0EDFD5C27A34D6DD6AE326D59CA7005CF1_RuntimeMethod_var);
	}

IL_00c5:
	{
		goto IL_0148;
	}

IL_00cb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_30 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourcePressedLegacy_7();
		V_7 = L_30;
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_31 = V_7;
		if (!L_31)
		{
			goto IL_00e2;
		}
	}
	{
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_32 = V_7;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_33 = V_0;
		NullCheck(L_32);
		SourceEventHandler_Invoke_mC13C60B714BB48292BC11625A124A685F07B9E30(L_32, L_33, /*hidden argument*/NULL);
	}

IL_00e2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_34 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourcePressed_2();
		V_8 = L_34;
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_35 = V_8;
		if (!L_35)
		{
			goto IL_00fe;
		}
	}
	{
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_36 = V_8;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_37 = V_0;
		int32_t L_38 = ___pressType2;
		InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B  L_39;
		memset(&L_39, 0, sizeof(L_39));
		InteractionSourcePressedEventArgs__ctor_m82FD8AD6FF6F74715630EA2A6B620A0B6B953B5E((&L_39), L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		Action_1_Invoke_m38339FC12F03EEF8FB28FBA0DFEF104F891A5A8B(L_36, L_39, /*hidden argument*/Action_1_Invoke_m38339FC12F03EEF8FB28FBA0DFEF104F891A5A8B_RuntimeMethod_var);
	}

IL_00fe:
	{
		goto IL_0148;
	}

IL_0104:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_40 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceReleasedLegacy_8();
		V_9 = L_40;
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_41 = V_9;
		if (!L_41)
		{
			goto IL_011b;
		}
	}
	{
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_42 = V_9;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_43 = V_0;
		NullCheck(L_42);
		SourceEventHandler_Invoke_mC13C60B714BB48292BC11625A124A685F07B9E30(L_42, L_43, /*hidden argument*/NULL);
	}

IL_011b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_44 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceReleased_3();
		V_10 = L_44;
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_45 = V_10;
		if (!L_45)
		{
			goto IL_0137;
		}
	}
	{
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_46 = V_10;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_47 = V_0;
		int32_t L_48 = ___pressType2;
		InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943  L_49;
		memset(&L_49, 0, sizeof(L_49));
		InteractionSourceReleasedEventArgs__ctor_m3874456214E10087996D31930D5FDE577E2D4939((&L_49), L_47, L_48, /*hidden argument*/NULL);
		NullCheck(L_46);
		Action_1_Invoke_m4732464FB4773D55E9DBB35D18FB58DB8CE78B93(L_46, L_49, /*hidden argument*/Action_1_Invoke_m4732464FB4773D55E9DBB35D18FB58DB8CE78B93_RuntimeMethod_var);
	}

IL_0137:
	{
		goto IL_0148;
	}

IL_013d:
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_50 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_50, _stringLiteralE56BDFDA02CDB1AF069D764166DBFD5EF4DC1A56, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_50, NULL, InteractionManager_OnSourceEvent_mC853244D8689197F06A503F65D1F4195C57ED8FB_RuntimeMethod_var);
	}

IL_0148:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 (SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___state0);

}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SourceEventHandler__ctor_m1EAC8086B0A86E60C97EF19963CB3D978609A40A (SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceState)
extern "C" IL2CPP_METHOD_ATTR void SourceEventHandler_Invoke_mC13C60B714BB48292BC11625A124A685F07B9E30 (SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___state0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___state0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  >::Invoke(targetMethod, targetThis, ___state0);
							else
								GenericVirtActionInvoker1< InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  >::Invoke(targetMethod, targetThis, ___state0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0);
							else
								VirtActionInvoker1< InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___state0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  >::Invoke(targetMethod, targetThis, ___state0);
						else
							GenericVirtActionInvoker1< InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  >::Invoke(targetMethod, targetThis, ___state0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0);
						else
							VirtActionInvoker1< InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceState,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SourceEventHandler_BeginInvoke_m3A04E1F637F48F7B18E726173549DD5B9D60295E (SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SourceEventHandler_BeginInvoke_m3A04E1F637F48F7B18E726173549DD5B9D60295E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250_il2cpp_TypeInfo_var, &___state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void SourceEventHandler_EndInvoke_mE6623F946EBAAE16F855336DB4E92352BCABD83F (SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_Equals_m826241F239D49E68D24D6CADEC50FF3E60D6928C (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionSource_Equals_m826241F239D49E68D24D6CADEC50FF3E60D6928C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		void* L_1 = alloca(sizeof(Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE ));
		UnBoxNullable(((RuntimeObject *)IsInst((RuntimeObject*)L_0, Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE_il2cpp_TypeInfo_var)), InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6_il2cpp_TypeInfo_var, L_1);
		V_0 = ((*(Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE *)((Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE *)L_1)));
		bool L_2 = Nullable_1_get_HasValue_mF3EA958D645F2DA73A25D6BA98D8CDF83ADD532D((Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mF3EA958D645F2DA73A25D6BA98D8CDF83ADD532D_RuntimeMethod_var);
		if (!((((int32_t)L_2) == ((int32_t)0))? 1 : 0))
		{
			goto IL_0023;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0036;
	}

IL_0023:
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_3 = Nullable_1_get_Value_m2164B0E14FD6D71E914E108D3046E1F3D048890B((Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m2164B0E14FD6D71E914E108D3046E1F3D048890B_RuntimeMethod_var);
		bool L_4 = InteractionSource_Equals_mEAC22BC627922A90171992CC8DA4BA43953AC645((InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *)__this, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0036;
	}

IL_0036:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
extern "C"  bool InteractionSource_Equals_m826241F239D49E68D24D6CADEC50FF3E60D6928C_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_Equals_m826241F239D49E68D24D6CADEC50FF3E60D6928C(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::Equals(UnityEngine.XR.WSA.Input.InteractionSource)
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_Equals_mEAC22BC627922A90171992CC8DA4BA43953AC645 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint32_t L_0 = (&___other0)->get_m_Id_0();
		uint32_t L_1 = __this->get_m_Id_0();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
extern "C"  bool InteractionSource_Equals_mEAC22BC627922A90171992CC8DA4BA43953AC645_AdjustorThunk (RuntimeObject * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___other0, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_Equals_mEAC22BC627922A90171992CC8DA4BA43953AC645(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.WSA.Input.InteractionSource::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t InteractionSource_GetHashCode_m86EC32248092C3E1CE990C74D52E35E0E3CFF515 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_Id_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t InteractionSource_GetHashCode_m86EC32248092C3E1CE990C74D52E35E0E3CFF515_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_GetHashCode_m86EC32248092C3E1CE990C74D52E35E0E3CFF515(_thisAdjusted, method);
}
// System.UInt32 UnityEngine.XR.WSA.Input.InteractionSource::get_id()
extern "C" IL2CPP_METHOD_ATTR uint32_t InteractionSource_get_id_m2F247B3024CB643ECF1307F4FA7F4908FB640011 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_Id_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  uint32_t InteractionSource_get_id_m2F247B3024CB643ECF1307F4FA7F4908FB640011_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_get_id_m2F247B3024CB643ECF1307F4FA7F4908FB640011(_thisAdjusted, method);
}
// UnityEngine.XR.WSA.Input.InteractionSourceKind UnityEngine.XR.WSA.Input.InteractionSource::get_kind()
extern "C" IL2CPP_METHOD_ATTR int32_t InteractionSource_get_kind_m5BBAF17ED0C432BABF1623E8DE389DEF5A901CC7 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_SourceKind_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t InteractionSource_get_kind_m5BBAF17ED0C432BABF1623E8DE389DEF5A901CC7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_get_kind_m5BBAF17ED0C432BABF1623E8DE389DEF5A901CC7(_thisAdjusted, method);
}
// UnityEngine.XR.WSA.Input.InteractionSourceHandedness UnityEngine.XR.WSA.Input.InteractionSource::get_handedness()
extern "C" IL2CPP_METHOD_ATTR int32_t InteractionSource_get_handedness_mDD38ECFC1064B9688796ADEB52B167918204829C (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Handedness_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t InteractionSource_get_handedness_mDD38ECFC1064B9688796ADEB52B167918204829C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_get_handedness_mDD38ECFC1064B9688796ADEB52B167918204829C(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsGrasp()
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsGrasp_mDF5F9C5752C5E094B5D470EBD0DAE0F243759411 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Flags_3();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool InteractionSource_get_supportsGrasp_mDF5F9C5752C5E094B5D470EBD0DAE0F243759411_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_get_supportsGrasp_mDF5F9C5752C5E094B5D470EBD0DAE0F243759411(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsMenu()
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsMenu_m6853E6A0D3F0F1AE71A6C42D1AF8A8AB78DF928C (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Flags_3();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool InteractionSource_get_supportsMenu_m6853E6A0D3F0F1AE71A6C42D1AF8A8AB78DF928C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_get_supportsMenu_m6853E6A0D3F0F1AE71A6C42D1AF8A8AB78DF928C(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsPointing()
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsPointing_mD9DE6FE230FE2633107C50A062DE4ED65975FB84 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Flags_3();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool InteractionSource_get_supportsPointing_mD9DE6FE230FE2633107C50A062DE4ED65975FB84_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_get_supportsPointing_mD9DE6FE230FE2633107C50A062DE4ED65975FB84(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsThumbstick()
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsThumbstick_m0693492A4DB64ACEBD6C4688D2BF7D0843743A11 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Flags_3();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool InteractionSource_get_supportsThumbstick_m0693492A4DB64ACEBD6C4688D2BF7D0843743A11_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_get_supportsThumbstick_m0693492A4DB64ACEBD6C4688D2BF7D0843743A11(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsTouchpad()
extern "C" IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsTouchpad_m623CEA9CFA650B4047AE44D741EB01FBB295A1F9 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Flags_3();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool InteractionSource_get_supportsTouchpad_m623CEA9CFA650B4047AE44D741EB01FBB295A1F9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_get_supportsTouchpad_m623CEA9CFA650B4047AE44D741EB01FBB295A1F9(_thisAdjusted, method);
}
// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::get_vendorId()
extern "C" IL2CPP_METHOD_ATTR uint16_t InteractionSource_get_vendorId_m938724EC780851E382186A4DB36D29E837B0A982 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_VendorId_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  uint16_t InteractionSource_get_vendorId_m938724EC780851E382186A4DB36D29E837B0A982_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_get_vendorId_m938724EC780851E382186A4DB36D29E837B0A982(_thisAdjusted, method);
}
// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::get_productId()
extern "C" IL2CPP_METHOD_ATTR uint16_t InteractionSource_get_productId_mF2D6F5553488A16ECD70E6BD3439F6E433DBBB07 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_ProductId_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  uint16_t InteractionSource_get_productId_mF2D6F5553488A16ECD70E6BD3439F6E433DBBB07_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_get_productId_mF2D6F5553488A16ECD70E6BD3439F6E433DBBB07(_thisAdjusted, method);
}
// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::get_productVersion()
extern "C" IL2CPP_METHOD_ATTR uint16_t InteractionSource_get_productVersion_m67FBF8FFBC3B7EE605061D4C498F8936CEE05DC5 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_ProductVersion_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  uint16_t InteractionSource_get_productVersion_m67FBF8FFBC3B7EE605061D4C498F8936CEE05DC5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_get_productVersion_m67FBF8FFBC3B7EE605061D4C498F8936CEE05DC5(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourceDetectedEventArgs__ctor_m2FBA271484B0D35C53DB7BE9C4251236737E4580 (InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 ));
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___state0;
		InteractionSourceDetectedEventArgs_set_state_mB81F4E131E023DE37120C37CD281FEDCB2107240((InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void InteractionSourceDetectedEventArgs__ctor_m2FBA271484B0D35C53DB7BE9C4251236737E4580_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * _thisAdjusted = reinterpret_cast<InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 *>(__this + 1);
	InteractionSourceDetectedEventArgs__ctor_m2FBA271484B0D35C53DB7BE9C4251236737E4580(_thisAdjusted, ___state0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourceDetectedEventArgs_set_state_mB81F4E131E023DE37120C37CD281FEDCB2107240 (InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
extern "C"  void InteractionSourceDetectedEventArgs_set_state_mB81F4E131E023DE37120C37CD281FEDCB2107240_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * _thisAdjusted = reinterpret_cast<InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 *>(__this + 1);
	InteractionSourceDetectedEventArgs_set_state_mB81F4E131E023DE37120C37CD281FEDCB2107240(_thisAdjusted, ___value0, method);
}
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourceLostEventArgs__ctor_mE13D688DF29978E37FC86E1EEC3469D46532D7BF (InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC ));
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___state0;
		InteractionSourceLostEventArgs_set_state_m962283240DCDBB2FB97987B371073238BCF5BC23((InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void InteractionSourceLostEventArgs__ctor_mE13D688DF29978E37FC86E1EEC3469D46532D7BF_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * _thisAdjusted = reinterpret_cast<InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC *>(__this + 1);
	InteractionSourceLostEventArgs__ctor_mE13D688DF29978E37FC86E1EEC3469D46532D7BF(_thisAdjusted, ___state0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourceLostEventArgs_set_state_m962283240DCDBB2FB97987B371073238BCF5BC23 (InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
extern "C"  void InteractionSourceLostEventArgs_set_state_m962283240DCDBB2FB97987B371073238BCF5BC23_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * _thisAdjusted = reinterpret_cast<InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC *>(__this + 1);
	InteractionSourceLostEventArgs_set_state_m962283240DCDBB2FB97987B371073238BCF5BC23(_thisAdjusted, ___value0, method);
}
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
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState,UnityEngine.XR.WSA.Input.InteractionSourcePressType)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs__ctor_m82FD8AD6FF6F74715630EA2A6B620A0B6B953B5E (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, int32_t ___pressType1, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B ));
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___state0;
		InteractionSourcePressedEventArgs_set_state_mE9F1061B3EB95D4C9C435A9B29B657B0D4F73E08((InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B *)__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___pressType1;
		InteractionSourcePressedEventArgs_set_pressType_m4A6D5E8933BA021E93C7586349CD2653B6BFA855((InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B *)__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void InteractionSourcePressedEventArgs__ctor_m82FD8AD6FF6F74715630EA2A6B620A0B6B953B5E_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, int32_t ___pressType1, const RuntimeMethod* method)
{
	InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * _thisAdjusted = reinterpret_cast<InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B *>(__this + 1);
	InteractionSourcePressedEventArgs__ctor_m82FD8AD6FF6F74715630EA2A6B620A0B6B953B5E(_thisAdjusted, ___state0, ___pressType1, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_state_mE9F1061B3EB95D4C9C435A9B29B657B0D4F73E08 (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
extern "C"  void InteractionSourcePressedEventArgs_set_state_mE9F1061B3EB95D4C9C435A9B29B657B0D4F73E08_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * _thisAdjusted = reinterpret_cast<InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B *>(__this + 1);
	InteractionSourcePressedEventArgs_set_state_mE9F1061B3EB95D4C9C435A9B29B657B0D4F73E08(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::set_pressType(UnityEngine.XR.WSA.Input.InteractionSourcePressType)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_pressType_m4A6D5E8933BA021E93C7586349CD2653B6BFA855 (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpressTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
extern "C"  void InteractionSourcePressedEventArgs_set_pressType_m4A6D5E8933BA021E93C7586349CD2653B6BFA855_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * _thisAdjusted = reinterpret_cast<InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B *>(__this + 1);
	InteractionSourcePressedEventArgs_set_pressType_m4A6D5E8933BA021E93C7586349CD2653B6BFA855(_thisAdjusted, ___value0, method);
}
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
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState,UnityEngine.XR.WSA.Input.InteractionSourcePressType)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs__ctor_m3874456214E10087996D31930D5FDE577E2D4939 (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, int32_t ___pressType1, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 ));
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___state0;
		InteractionSourceReleasedEventArgs_set_state_mF578C2E57593D54ABEB8C130A49E6B44AE2C080F((InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 *)__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___pressType1;
		InteractionSourceReleasedEventArgs_set_pressType_m3F75A57B06238ACD617D4C151B977B92AD6460CF((InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 *)__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void InteractionSourceReleasedEventArgs__ctor_m3874456214E10087996D31930D5FDE577E2D4939_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, int32_t ___pressType1, const RuntimeMethod* method)
{
	InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * _thisAdjusted = reinterpret_cast<InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 *>(__this + 1);
	InteractionSourceReleasedEventArgs__ctor_m3874456214E10087996D31930D5FDE577E2D4939(_thisAdjusted, ___state0, ___pressType1, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_state_mF578C2E57593D54ABEB8C130A49E6B44AE2C080F (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
extern "C"  void InteractionSourceReleasedEventArgs_set_state_mF578C2E57593D54ABEB8C130A49E6B44AE2C080F_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * _thisAdjusted = reinterpret_cast<InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 *>(__this + 1);
	InteractionSourceReleasedEventArgs_set_state_mF578C2E57593D54ABEB8C130A49E6B44AE2C080F(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::set_pressType(UnityEngine.XR.WSA.Input.InteractionSourcePressType)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_pressType_m3F75A57B06238ACD617D4C151B977B92AD6460CF (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpressTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
extern "C"  void InteractionSourceReleasedEventArgs_set_pressType_m3F75A57B06238ACD617D4C151B977B92AD6460CF_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * _thisAdjusted = reinterpret_cast<InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 *>(__this + 1);
	InteractionSourceReleasedEventArgs_set_pressType_m3F75A57B06238ACD617D4C151B977B92AD6460CF(_thisAdjusted, ___value0, method);
}
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
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourceUpdatedEventArgs__ctor_m78938DD82C92670ECEF9C43CA844F6448F22FA76 (InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 ));
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___state0;
		InteractionSourceUpdatedEventArgs_set_state_mF28D9130B81128B020B1C8D3003A6A9A84D1E8B6((InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void InteractionSourceUpdatedEventArgs__ctor_m78938DD82C92670ECEF9C43CA844F6448F22FA76_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * _thisAdjusted = reinterpret_cast<InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 *>(__this + 1);
	InteractionSourceUpdatedEventArgs__ctor_m78938DD82C92670ECEF9C43CA844F6448F22FA76(_thisAdjusted, ___state0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
extern "C" IL2CPP_METHOD_ATTR void InteractionSourceUpdatedEventArgs_set_state_mF28D9130B81128B020B1C8D3003A6A9A84D1E8B6 (InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
extern "C"  void InteractionSourceUpdatedEventArgs_set_state_mF28D9130B81128B020B1C8D3003A6A9A84D1E8B6_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * _thisAdjusted = reinterpret_cast<InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 *>(__this + 1);
	InteractionSourceUpdatedEventArgs_set_state_mF28D9130B81128B020B1C8D3003A6A9A84D1E8B6(_thisAdjusted, ___value0, method);
}
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
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Persistence.WorldAnchorStore
extern "C" void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke(const WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225& unmarshaled, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
extern "C" void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke_back(const WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke& marshaled, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset(&unmarshaled_m_NativePtr_temp_0, 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Persistence.WorldAnchorStore
extern "C" void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke_cleanup(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Persistence.WorldAnchorStore
extern "C" void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_com(const WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225& unmarshaled, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_com& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
extern "C" void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_com_back(const WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_com& marshaled, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset(&unmarshaled_m_NativePtr_temp_0, 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Persistence.WorldAnchorStore
extern "C" void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_com_cleanup(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorStore__ctor_m1EE05390756C0AE0F0100507693CE33C8A940E99 (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativePtr0;
		__this->set_m_NativePtr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::InvokeGetAsyncDelegate(UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorStore_InvokeGetAsyncDelegate_mBD8BD1DD969BB11783B8C527BAAA1B74CF05F959 (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * ___handler0, intptr_t ___nativePtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorStore_InvokeGetAsyncDelegate_mBD8BD1DD969BB11783B8C527BAAA1B74CF05F959_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___nativePtr1;
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * L_1 = (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *)il2cpp_codegen_object_new(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var);
		WorldAnchorStore__ctor_m1EE05390756C0AE0F0100507693CE33C8A940E99(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var);
		((WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_StaticFields*)il2cpp_codegen_static_fields_for(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var))->set_s_Instance_1(L_1);
		GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * L_2 = ___handler0;
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * L_3 = ((WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_StaticFields*)il2cpp_codegen_static_fields_for(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var))->get_s_Instance_1();
		NullCheck(L_2);
		GetAsyncDelegate_Invoke_m4DF685AABA65DC8D46F48F81BFEAEB50B2652EB8(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Dispose()
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorStore_Dispose_m76B91FE5ABE8A03C0CED688FB45806705AFD5BCA (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorStore_Dispose_m76B91FE5ABE8A03C0CED688FB45806705AFD5BCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_NativePtr_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		WorldAnchorStore_Internal_Destroy_m696A46F879CAB6B70C0E0F35642784D695E8D6C2(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		__this->set_m_NativePtr_0((intptr_t)(0));
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Internal_Destroy()
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorStore_Internal_Destroy_m696A46F879CAB6B70C0E0F35642784D695E8D6C2 (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, const RuntimeMethod* method)
{
	typedef void (*WorldAnchorStore_Internal_Destroy_m696A46F879CAB6B70C0E0F35642784D695E8D6C2_ftn) (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *);
	static WorldAnchorStore_Internal_Destroy_m696A46F879CAB6B70C0E0F35642784D695E8D6C2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchorStore_Internal_Destroy_m696A46F879CAB6B70C0E0F35642784D695E8D6C2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Internal_Destroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::.cctor()
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorStore__cctor_m7155DF59AE57F44A1A52432A5C2F84DF71DCB91B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorStore__cctor_m7155DF59AE57F44A1A52432A5C2F84DF71DCB91B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_StaticFields*)il2cpp_codegen_static_fields_for(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var))->set_s_Instance_1((WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *)NULL);
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
extern "C"  void DelegatePInvokeWrapper_GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * __this, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * ___store0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter U27___store0U27 to native representation
	WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke ____store0_marshaled = {};
	if (___store0 != NULL)
	{
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke(*___store0, ____store0_marshaled);
	}

	// Native function invocation
	il2cppPInvokeFunc(___store0 != NULL ? (&____store0_marshaled) : NULL);

	// Marshaling cleanup of parameter U27___store0U27 native representation
	if ((&____store0_marshaled) != NULL)
	{
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke_cleanup(____store0_marshaled);
	}

}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetAsyncDelegate__ctor_m718A627539796C39CA29D6854A1A39A50965358F (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate::Invoke(UnityEngine.XR.WSA.Persistence.WorldAnchorStore)
extern "C" IL2CPP_METHOD_ATTR void GetAsyncDelegate_Invoke_m4DF685AABA65DC8D46F48F81BFEAEB50B2652EB8 (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * __this, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * ___store0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___store0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___store0, targetMethod);
				}
			}
			else if (___parameterCount != 1)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___store0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___store0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___store0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___store0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___store0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___store0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * >::Invoke(targetMethod, targetThis, ___store0);
							else
								GenericVirtActionInvoker1< WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * >::Invoke(targetMethod, targetThis, ___store0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___store0);
							else
								VirtActionInvoker1< WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___store0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___store0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___store0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___store0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___store0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___store0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___store0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___store0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___store0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___store0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * >::Invoke(targetMethod, targetThis, ___store0);
						else
							GenericVirtActionInvoker1< WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * >::Invoke(targetMethod, targetThis, ___store0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___store0);
						else
							VirtActionInvoker1< WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___store0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___store0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate::BeginInvoke(UnityEngine.XR.WSA.Persistence.WorldAnchorStore,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetAsyncDelegate_BeginInvoke_mA94E50F5B80EDB296DB09C9A70D47E12B56F1640 (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * __this, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * ___store0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___store0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GetAsyncDelegate_EndInvoke_mD5E52C44C9A850192B3B3825F3C5DD658134F8BC (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
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
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
extern "C" void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke(const WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96& unmarshaled, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
extern "C" void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke_back(const WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke& marshaled, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset(&unmarshaled_m_NativePtr_temp_0, 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
extern "C" void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke_cleanup(WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
extern "C" void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_com(const WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96& unmarshaled, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_com& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
extern "C" void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_com_back(const WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_com& marshaled, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset(&unmarshaled_m_NativePtr_temp_0, 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
extern "C" void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_com_cleanup(WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch__ctor_m9745D72088F3E565D1A4855DE025FE7288871C35 (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorTransferBatch__ctor_m9745D72088F3E565D1A4855DE025FE7288871C35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_NativePtr_0((intptr_t)(0));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativePtr0;
		__this->set_m_NativePtr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Finalize()
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_Finalize_mC4CDDD4515215AD9722D0B3E0DCD61227543E026 (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorTransferBatch_Finalize_mC4CDDD4515215AD9722D0B3E0DCD61227543E026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_NativePtr_0();
			bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_0029;
			}
		}

IL_0016:
		{
			WorldAnchorTransferBatch_DisposeThreaded_Internal_m574176C40D00FE375207F69FC1FA41A076BA9F4E(__this, /*hidden argument*/NULL);
			__this->set_m_NativePtr_0((intptr_t)(0));
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0035:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::DisposeThreaded_Internal()
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_DisposeThreaded_Internal_m574176C40D00FE375207F69FC1FA41A076BA9F4E (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, const RuntimeMethod* method)
{
	typedef void (*WorldAnchorTransferBatch_DisposeThreaded_Internal_m574176C40D00FE375207F69FC1FA41A076BA9F4E_ftn) (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *);
	static WorldAnchorTransferBatch_DisposeThreaded_Internal_m574176C40D00FE375207F69FC1FA41A076BA9F4E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchorTransferBatch_DisposeThreaded_Internal_m574176C40D00FE375207F69FC1FA41A076BA9F4E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::DisposeThreaded_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Dispose()
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_Dispose_mC7A39E9FC64D891BA34488B82C47A520C6679CC8 (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorTransferBatch_Dispose_mC7A39E9FC64D891BA34488B82C47A520C6679CC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_NativePtr_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		WorldAnchorTransferBatch_Dispose_Internal_m323AD2F9861BF64FC6F3B56191A61BFC8DC196B7(__this, /*hidden argument*/NULL);
		__this->set_m_NativePtr_0((intptr_t)(0));
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Dispose_Internal()
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_Dispose_Internal_m323AD2F9861BF64FC6F3B56191A61BFC8DC196B7 (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, const RuntimeMethod* method)
{
	typedef void (*WorldAnchorTransferBatch_Dispose_Internal_m323AD2F9861BF64FC6F3B56191A61BFC8DC196B7_ftn) (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *);
	static WorldAnchorTransferBatch_Dispose_Internal_m323AD2F9861BF64FC6F3B56191A61BFC8DC196B7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchorTransferBatch_Dispose_Internal_m323AD2F9861BF64FC6F3B56191A61BFC8DC196B7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Dispose_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::InvokeWorldAnchorSerializationDataAvailableDelegate(UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_InvokeWorldAnchorSerializationDataAvailableDelegate_mA1FECB163E9496AE0666436CE0B2929C086F2AF9 (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * ___onSerializationDataAvailable0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, const RuntimeMethod* method)
{
	{
		SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * L_0 = ___onSerializationDataAvailable0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___data1;
		NullCheck(L_0);
		SerializationDataAvailableDelegate_Invoke_m0250571900E492139B5293224D54EF8998AE72E8(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::InvokeWorldAnchorSerializationCompleteDelegate(UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate,UnityEngine.XR.WSA.Sharing.SerializationCompletionReason)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_InvokeWorldAnchorSerializationCompleteDelegate_mA54A2895A55377CFF34B8B80D30B96D88111267A (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * ___onSerializationComplete0, int32_t ___completionReason1, const RuntimeMethod* method)
{
	{
		SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * L_0 = ___onSerializationComplete0;
		int32_t L_1 = ___completionReason1;
		NullCheck(L_0);
		SerializationCompleteDelegate_Invoke_m9E8772EC4D698829FB563E7F98627921203146C3(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::InvokeWorldAnchorDeserializationCompleteDelegate(UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate,UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_InvokeWorldAnchorDeserializationCompleteDelegate_mD56BA5D47BF5FF904852057207DE97159CBC473A (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * ___onDeserializationComplete0, int32_t ___completionReason1, intptr_t ___nativePtr2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorTransferBatch_InvokeWorldAnchorDeserializationCompleteDelegate_mD56BA5D47BF5FF904852057207DE97159CBC473A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * V_0 = NULL;
	{
		intptr_t L_0 = ___nativePtr2;
		WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * L_1 = (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *)il2cpp_codegen_object_new(WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_il2cpp_TypeInfo_var);
		WorldAnchorTransferBatch__ctor_m9745D72088F3E565D1A4855DE025FE7288871C35(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * L_2 = ___onDeserializationComplete0;
		int32_t L_3 = ___completionReason1;
		WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * L_4 = V_0;
		NullCheck(L_2);
		DeserializationCompleteDelegate_Invoke_m4F01EB16C52D539B2A87C14D802F01325FC580A2(L_2, L_3, L_4, /*hidden argument*/NULL);
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
extern "C"  void DelegatePInvokeWrapper_DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * __this, int32_t ___completionReason0, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * ___deserializedTransferBatch1, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter U27___deserializedTransferBatch1U27 to native representation
	WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke ____deserializedTransferBatch1_marshaled = {};
	if (___deserializedTransferBatch1 != NULL)
	{
		WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke(*___deserializedTransferBatch1, ____deserializedTransferBatch1_marshaled);
	}

	// Native function invocation
	il2cppPInvokeFunc(___completionReason0, ___deserializedTransferBatch1 != NULL ? (&____deserializedTransferBatch1_marshaled) : NULL);

	// Marshaling cleanup of parameter U27___deserializedTransferBatch1U27 native representation
	if ((&____deserializedTransferBatch1_marshaled) != NULL)
	{
		WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke_cleanup(____deserializedTransferBatch1_marshaled);
	}

}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DeserializationCompleteDelegate__ctor_m97585ED7C8399CDB2C0D3F7982C1F648BCEFA1A1 (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate::Invoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch)
extern "C" IL2CPP_METHOD_ATTR void DeserializationCompleteDelegate_Invoke_m4F01EB16C52D539B2A87C14D802F01325FC580A2 (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * __this, int32_t ___completionReason0, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * ___deserializedTransferBatch1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___completionReason0, ___deserializedTransferBatch1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, ___deserializedTransferBatch1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___completionReason0, ___deserializedTransferBatch1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * >::Invoke(targetMethod, targetThis, ___completionReason0, ___deserializedTransferBatch1);
							else
								GenericVirtActionInvoker2< int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * >::Invoke(targetMethod, targetThis, ___completionReason0, ___deserializedTransferBatch1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___completionReason0, ___deserializedTransferBatch1);
							else
								VirtActionInvoker2< int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___completionReason0, ___deserializedTransferBatch1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, ___deserializedTransferBatch1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___completionReason0, ___deserializedTransferBatch1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, ___deserializedTransferBatch1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___completionReason0, ___deserializedTransferBatch1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * >::Invoke(targetMethod, targetThis, ___completionReason0, ___deserializedTransferBatch1);
						else
							GenericVirtActionInvoker2< int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * >::Invoke(targetMethod, targetThis, ___completionReason0, ___deserializedTransferBatch1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___completionReason0, ___deserializedTransferBatch1);
						else
							VirtActionInvoker2< int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___completionReason0, ___deserializedTransferBatch1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, ___deserializedTransferBatch1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate::BeginInvoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DeserializationCompleteDelegate_BeginInvoke_m9910723A46FB34B3B07F0DC4A36338761DBC789C (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * __this, int32_t ___completionReason0, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * ___deserializedTransferBatch1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeserializationCompleteDelegate_BeginInvoke_m9910723A46FB34B3B07F0DC4A36338761DBC789C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(SerializationCompletionReason_t36D4884AF265179731484C44E5A95235EB6F3987_il2cpp_TypeInfo_var, &___completionReason0);
	__d_args[1] = ___deserializedTransferBatch1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void DeserializationCompleteDelegate_EndInvoke_m08BF14AF510F5BB7712944A73FFA9389C085EF9E (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * __this, int32_t ___completionReason0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___completionReason0);

}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SerializationCompleteDelegate__ctor_mF7B88DF5A4519B47F8048FF7DFFD1E024C28A9C8 (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate::Invoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason)
extern "C" IL2CPP_METHOD_ATTR void SerializationCompleteDelegate_Invoke_m9E8772EC4D698829FB563E7F98627921203146C3 (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * __this, int32_t ___completionReason0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___completionReason0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___completionReason0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___completionReason0);
							else
								GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___completionReason0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___completionReason0);
							else
								VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___completionReason0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___completionReason0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___completionReason0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___completionReason0);
						else
							GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___completionReason0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___completionReason0);
						else
							VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___completionReason0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate::BeginInvoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SerializationCompleteDelegate_BeginInvoke_m92A655FC6A647A2B89EBEB1113FB5AD2376B18A2 (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * __this, int32_t ___completionReason0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializationCompleteDelegate_BeginInvoke_m92A655FC6A647A2B89EBEB1113FB5AD2376B18A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(SerializationCompletionReason_t36D4884AF265179731484C44E5A95235EB6F3987_il2cpp_TypeInfo_var, &___completionReason0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void SerializationCompleteDelegate_EndInvoke_mA9978B90E876FF6CFD6D759749C0A350D23F4337 (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter U27___data0U27 to native representation
	uint8_t* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<uint8_t*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SerializationDataAvailableDelegate__ctor_m5BD2F4BDE57C5602AA6F8AB2A0ADC96DDDB6FA4F (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate::Invoke(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void SerializationDataAvailableDelegate_Invoke_m0250571900E492139B5293224D54EF8998AE72E8 (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
				}
			}
			else if (___parameterCount != 1)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(targetMethod, targetThis, ___data0);
							else
								GenericVirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(targetMethod, targetThis, ___data0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
							else
								VirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(targetMethod, targetThis, ___data0);
						else
							GenericVirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(targetMethod, targetThis, ___data0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
						else
							VirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SerializationDataAvailableDelegate_BeginInvoke_m4A57348992D824F472F2ADE8007092796CB7156E (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void SerializationDataAvailableDelegate_EndInvoke_mE7BBFA22198584DD9711CDDBD32AB2D647E8B17F (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
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
// Conversion methods for marshalling of: UnityEngine.XR.WSA.SurfaceData
extern "C" void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_pinvoke(const SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66& unmarshaled, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke& marshaled)
{
	Exception_t* ___outputMesh_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'outputMesh' of type 'SurfaceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___outputMesh_1Exception, NULL, NULL);
}
extern "C" void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_pinvoke_back(const SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke& marshaled, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66& unmarshaled)
{
	Exception_t* ___outputMesh_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'outputMesh' of type 'SurfaceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___outputMesh_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SurfaceData
extern "C" void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_pinvoke_cleanup(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.SurfaceData
extern "C" void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_com(const SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66& unmarshaled, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com& marshaled)
{
	Exception_t* ___outputMesh_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'outputMesh' of type 'SurfaceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___outputMesh_1Exception, NULL, NULL);
}
extern "C" void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_com_back(const SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com& marshaled, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66& unmarshaled)
{
	Exception_t* ___outputMesh_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'outputMesh' of type 'SurfaceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___outputMesh_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SurfaceData
extern "C" void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_com_cleanup(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com& marshaled)
{
}
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
// Conversion methods for marshalling of: UnityEngine.XR.WSA.SurfaceObserver
extern "C" void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_pinvoke(const SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864& unmarshaled, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Observer_0 = unmarshaled.get_m_Observer_0();
}
extern "C" void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_pinvoke_back(const SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke& marshaled, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864& unmarshaled)
{
	intptr_t unmarshaled_m_Observer_temp_0;
	memset(&unmarshaled_m_Observer_temp_0, 0, sizeof(unmarshaled_m_Observer_temp_0));
	unmarshaled_m_Observer_temp_0 = marshaled.___m_Observer_0;
	unmarshaled.set_m_Observer_0(unmarshaled_m_Observer_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SurfaceObserver
extern "C" void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_pinvoke_cleanup(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.SurfaceObserver
extern "C" void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_com(const SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864& unmarshaled, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com& marshaled)
{
	marshaled.___m_Observer_0 = unmarshaled.get_m_Observer_0();
}
extern "C" void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_com_back(const SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com& marshaled, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864& unmarshaled)
{
	intptr_t unmarshaled_m_Observer_temp_0;
	memset(&unmarshaled_m_Observer_temp_0, 0, sizeof(unmarshaled_m_Observer_temp_0));
	unmarshaled_m_Observer_temp_0 = marshaled.___m_Observer_0;
	unmarshaled.set_m_Observer_0(unmarshaled_m_Observer_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SurfaceObserver
extern "C" void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_com_cleanup(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::InvokeSurfaceChangedEvent(UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate,System.Int32,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver_InvokeSurfaceChangedEvent_m94D6A260AC13754E63918998AF05126858438174 (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * ___onSurfaceChanged0, int32_t ___surfaceId1, int32_t ___changeType2, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___bounds3, int64_t ___updateTime4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceObserver_InvokeSurfaceChangedEvent_m94D6A260AC13754E63918998AF05126858438174_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * L_0 = ___onSurfaceChanged0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = ___surfaceId1;
		(&V_0)->set_handle_0(L_1);
		SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * L_2 = ___onSurfaceChanged0;
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_3 = V_0;
		int32_t L_4 = ___changeType2;
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_5 = ___bounds3;
		int64_t L_6 = ___updateTime4;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_7 = DateTime_FromFileTime_m48DCF83C7472940505DE71F244BC072E98FA5676(L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		SurfaceChangedDelegate_Invoke_mB275AE4804E6939E7B55AF0F3932913ED3A5D4B6(L_2, L_3, L_4, L_5, L_7, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::InvokeSurfaceDataReadyEvent(UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate,System.Int32,UnityEngine.MeshFilter,UnityEngine.XR.WSA.WorldAnchor,UnityEngine.MeshCollider,System.Single,System.Boolean,System.Boolean,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver_InvokeSurfaceDataReadyEvent_m3355AFDED498D73B71188F53221E5DEAB42C1A21 (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * ___onDataReady0, int32_t ___surfaceId1, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___outputMesh2, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___outputAnchor3, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___outputCollider4, float ___trisPerCubicMeter5, bool ___bakeCollider6, bool ___outputWritten7, float ___elapsedBakeTimeSeconds8, const RuntimeMethod* method)
{
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * L_0 = ___onDataReady0;
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF * L_1 = (&V_0)->get_address_of_id_0();
		int32_t L_2 = ___surfaceId1;
		L_1->set_handle_0(L_2);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_3 = ___outputMesh2;
		(&V_0)->set_outputMesh_1(L_3);
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_4 = ___outputAnchor3;
		(&V_0)->set_outputAnchor_2(L_4);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_5 = ___outputCollider4;
		(&V_0)->set_outputCollider_3(L_5);
		float L_6 = ___trisPerCubicMeter5;
		(&V_0)->set_trianglesPerCubicMeter_4(L_6);
		bool L_7 = ___bakeCollider6;
		(&V_0)->set_bakeCollider_5(L_7);
		SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * L_8 = ___onDataReady0;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_9 = V_0;
		bool L_10 = ___outputWritten7;
		float L_11 = ___elapsedBakeTimeSeconds8;
		NullCheck(L_8);
		SurfaceDataReadyDelegate_Invoke_m4DFF327EC78483BEA7B886E4F923A375D28A4CC4(L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Finalize()
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver_Finalize_m8BE3CB8B933C93F9C499BC0BF1ABBCE5202CA9C5 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceObserver_Finalize_m8BE3CB8B933C93F9C499BC0BF1ABBCE5202CA9C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_Observer_0();
			bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_002f;
			}
		}

IL_0016:
		{
			SurfaceObserver_DestroyThreaded_m42429D92096ACFF4689B675FC69DC27142F14676(__this, /*hidden argument*/NULL);
			__this->set_m_Observer_0((intptr_t)(0));
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::DestroyThreaded()
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver_DestroyThreaded_m42429D92096ACFF4689B675FC69DC27142F14676 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, const RuntimeMethod* method)
{
	typedef void (*SurfaceObserver_DestroyThreaded_m42429D92096ACFF4689B675FC69DC27142F14676_ftn) (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 *);
	static SurfaceObserver_DestroyThreaded_m42429D92096ACFF4689B675FC69DC27142F14676_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SurfaceObserver_DestroyThreaded_m42429D92096ACFF4689B675FC69DC27142F14676_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.SurfaceObserver::DestroyThreaded()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Dispose()
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver_Dispose_mA842C19181453E384E1BCE368468F8762CBB9B1E (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceObserver_Dispose_mA842C19181453E384E1BCE368468F8762CBB9B1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Observer_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		SurfaceObserver_Destroy_m66E010E36EF342C74BA5278C4990D66AA6F34DAF(__this, /*hidden argument*/NULL);
		__this->set_m_Observer_0((intptr_t)(0));
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Destroy()
extern "C" IL2CPP_METHOD_ATTR void SurfaceObserver_Destroy_m66E010E36EF342C74BA5278C4990D66AA6F34DAF (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, const RuntimeMethod* method)
{
	typedef void (*SurfaceObserver_Destroy_m66E010E36EF342C74BA5278C4990D66AA6F34DAF_ftn) (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 *);
	static SurfaceObserver_Destroy_m66E010E36EF342C74BA5278C4990D66AA6F34DAF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SurfaceObserver_Destroy_m66E010E36EF342C74BA5278C4990D66AA6F34DAF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.SurfaceObserver::Destroy()");
	_il2cpp_icall_func(__this);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SurfaceChangedDelegate__ctor_mC4E2CDAB64B92D5032E1AA39880F73F045D9B714 (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate::Invoke(UnityEngine.XR.WSA.SurfaceId,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.DateTime)
extern "C" IL2CPP_METHOD_ATTR void SurfaceChangedDelegate_Invoke_mB275AE4804E6939E7B55AF0F3932913ED3A5D4B6 (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, int32_t ___changeType1, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___bounds2, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___updateTime3, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 4)
				{
					// open
					typedef void (*FunctionPointerType) (SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker4< SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  >::Invoke(targetMethod, targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
							else
								GenericVirtActionInvoker4< SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  >::Invoke(targetMethod, targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker4< SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
							else
								VirtActionInvoker4< SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker4< SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  >::Invoke(targetMethod, targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
						else
							GenericVirtActionInvoker4< SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  >::Invoke(targetMethod, targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker4< SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
						else
							VirtActionInvoker4< SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate::BeginInvoke(UnityEngine.XR.WSA.SurfaceId,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.DateTime,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SurfaceChangedDelegate_BeginInvoke_m8664937875D27851467C76EE2CF20695D0C15D6D (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, int32_t ___changeType1, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___bounds2, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___updateTime3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceChangedDelegate_BeginInvoke_m8664937875D27851467C76EE2CF20695D0C15D6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF_il2cpp_TypeInfo_var, &___surfaceId0);
	__d_args[1] = Box(SurfaceChange_t2E92CB8BA67A369A733BBEBD7087706B8E8FA747_il2cpp_TypeInfo_var, &___changeType1);
	__d_args[2] = Box(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890_il2cpp_TypeInfo_var, &___bounds2);
	__d_args[3] = Box(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var, &___updateTime3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void SurfaceChangedDelegate_EndInvoke_mF0FDC14056D30DBBA477500602541E915537D378 (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate__ctor_mB653644D30A5B829714DDEE56B57C2C01AE263E2 (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate::Invoke(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate_Invoke_m4DFF327EC78483BEA7B886E4F923A375D28A4CC4 (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(targetMethod, targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
							else
								GenericVirtActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(targetMethod, targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
							else
								VirtActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(targetMethod, targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
						else
							GenericVirtActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(targetMethod, targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
						else
							VirtActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate::BeginInvoke(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SurfaceDataReadyDelegate_BeginInvoke_m8F2C8D36EBF68F4AAA4991E184A14096488CE484 (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceDataReadyDelegate_BeginInvoke_m8F2C8D36EBF68F4AAA4991E184A14096488CE484_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_il2cpp_TypeInfo_var, &___bakedData0);
	__d_args[1] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___outputWritten1);
	__d_args[2] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___elapsedBakeTimeSeconds2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate_EndInvoke_m84CAA2A8F1E19D1612D509236831490E1A86E4E0 (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
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
// Conversion methods for marshalling of: UnityEngine.XR.WSA.WebCam.PhotoCapture
extern "C" void PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshal_pinvoke(const PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307& unmarshaled, PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshaled_pinvoke& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
extern "C" void PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshal_pinvoke_back(const PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshaled_pinvoke& marshaled, PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset(&unmarshaled_m_NativePtr_temp_0, 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.WebCam.PhotoCapture
extern "C" void PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshal_pinvoke_cleanup(PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.WebCam.PhotoCapture
extern "C" void PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshal_com(const PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307& unmarshaled, PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshaled_com& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
extern "C" void PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshal_com_back(const PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshaled_com& marshaled, PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset(&unmarshaled_m_NativePtr_temp_0, 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.WebCam.PhotoCapture
extern "C" void PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshal_com_cleanup(PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture__ctor_mE11D76F28D9CFB54A2619A8459A91781C843E590 (PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * __this, intptr_t ___nativeCaptureObject0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativeCaptureObject0;
		__this->set_m_NativePtr_0((intptr_t)L_0);
		return;
	}
}
// UnityEngine.XR.WSA.WebCam.PhotoCapture_PhotoCaptureResult UnityEngine.XR.WSA.WebCam.PhotoCapture::MakeCaptureResult(System.Int64)
extern "C" IL2CPP_METHOD_ATTR PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  PhotoCapture_MakeCaptureResult_m040E0FBD9B6C69A45CF412BF6B902E8140EE2207 (int64_t ___hResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_MakeCaptureResult_m040E0FBD9B6C69A45CF412BF6B902E8140EE2207_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC ));
		int64_t L_0 = ___hResult0;
		IL2CPP_RUNTIME_CLASS_INIT(PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_il2cpp_TypeInfo_var);
		int64_t L_1 = ((PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_StaticFields*)il2cpp_codegen_static_fields_for(PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_il2cpp_TypeInfo_var))->get_HR_SUCCESS_1();
		if ((!(((uint64_t)L_0) == ((uint64_t)L_1))))
		{
			goto IL_001d;
		}
	}
	{
		V_1 = 0;
		goto IL_0021;
	}

IL_001d:
	{
		V_1 = 1;
	}

IL_0021:
	{
		int32_t L_2 = V_1;
		(&V_0)->set_resultType_0(L_2);
		int64_t L_3 = ___hResult0;
		(&V_0)->set_hResult_1(L_3);
		PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  L_4 = V_0;
		V_2 = L_4;
		goto IL_0038;
	}

IL_0038:
	{
		PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  L_5 = V_2;
		return L_5;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::InvokeOnCreatedResourceDelegate(UnityEngine.XR.WSA.WebCam.PhotoCapture_OnCaptureResourceCreatedCallback,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_InvokeOnCreatedResourceDelegate_m6FBE2E778124A9EB2A8A427F1AA9C6E971494311 (OnCaptureResourceCreatedCallback_t2C031B8432401E472889526CAF2CA987AC99D5D1 * ___callback0, intptr_t ___nativePtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_InvokeOnCreatedResourceDelegate_m6FBE2E778124A9EB2A8A427F1AA9C6E971494311_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___nativePtr1;
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		OnCaptureResourceCreatedCallback_t2C031B8432401E472889526CAF2CA987AC99D5D1 * L_2 = ___callback0;
		NullCheck(L_2);
		OnCaptureResourceCreatedCallback_Invoke_mD4531195F8FE3931F7E809A26CD4EB53FD9D4E2E(L_2, (PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 *)NULL, /*hidden argument*/NULL);
		goto IL_002d;
	}

IL_001f:
	{
		OnCaptureResourceCreatedCallback_t2C031B8432401E472889526CAF2CA987AC99D5D1 * L_3 = ___callback0;
		intptr_t L_4 = ___nativePtr1;
		PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * L_5 = (PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 *)il2cpp_codegen_object_new(PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_il2cpp_TypeInfo_var);
		PhotoCapture__ctor_mE11D76F28D9CFB54A2619A8459A91781C843E590(L_5, (intptr_t)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		OnCaptureResourceCreatedCallback_Invoke_mD4531195F8FE3931F7E809A26CD4EB53FD9D4E2E(L_3, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::InvokeOnPhotoModeStartedDelegate(UnityEngine.XR.WSA.WebCam.PhotoCapture_OnPhotoModeStartedCallback,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_InvokeOnPhotoModeStartedDelegate_m3E00364E54C4613ED8715EC6B0912A88F1511745 (OnPhotoModeStartedCallback_t3E74AEAE0C3BAF1711BF4C3F423A4B8272C6A456 * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_InvokeOnPhotoModeStartedDelegate_m3E00364E54C4613ED8715EC6B0912A88F1511745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnPhotoModeStartedCallback_t3E74AEAE0C3BAF1711BF4C3F423A4B8272C6A456 * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_il2cpp_TypeInfo_var);
		PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  L_2 = PhotoCapture_MakeCaptureResult_m040E0FBD9B6C69A45CF412BF6B902E8140EE2207(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnPhotoModeStartedCallback_Invoke_m243EF1BEA4A7ED007D21E1FF0DD7CFD584814C15(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::InvokeOnPhotoModeStoppedDelegate(UnityEngine.XR.WSA.WebCam.PhotoCapture_OnPhotoModeStoppedCallback,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_InvokeOnPhotoModeStoppedDelegate_mCAB94A96A2DF3841227130505BC274CEA5274D2F (OnPhotoModeStoppedCallback_t80B25F7611051F3335A92707211B540F04E08592 * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_InvokeOnPhotoModeStoppedDelegate_mCAB94A96A2DF3841227130505BC274CEA5274D2F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnPhotoModeStoppedCallback_t80B25F7611051F3335A92707211B540F04E08592 * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_il2cpp_TypeInfo_var);
		PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  L_2 = PhotoCapture_MakeCaptureResult_m040E0FBD9B6C69A45CF412BF6B902E8140EE2207(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnPhotoModeStoppedCallback_Invoke_m86BD8A1BC55CCEE1B13CBD9CF9A01021149AD92E(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::InvokeOnCapturedPhotoToDiskDelegate(UnityEngine.XR.WSA.WebCam.PhotoCapture_OnCapturedToDiskCallback,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_InvokeOnCapturedPhotoToDiskDelegate_m86E362FE51AD70EE06F4EA1C7EFF2E5A26C4DFBF (OnCapturedToDiskCallback_tAC3EFE8F816D568DFACBDCAAC2102ACC8F7927DA * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_InvokeOnCapturedPhotoToDiskDelegate_m86E362FE51AD70EE06F4EA1C7EFF2E5A26C4DFBF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnCapturedToDiskCallback_tAC3EFE8F816D568DFACBDCAAC2102ACC8F7927DA * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_il2cpp_TypeInfo_var);
		PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  L_2 = PhotoCapture_MakeCaptureResult_m040E0FBD9B6C69A45CF412BF6B902E8140EE2207(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnCapturedToDiskCallback_Invoke_m3817A930596E68ACFB7E1CCAD9255294DBE62F69(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::InvokeOnCapturedPhotoToMemoryDelegate(UnityEngine.XR.WSA.WebCam.PhotoCapture_OnCapturedToMemoryCallback,System.Int64,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_InvokeOnCapturedPhotoToMemoryDelegate_m0CA7E5A5AA2D887EE09B818D14D4C2ACF50D7CAD (OnCapturedToMemoryCallback_t1117FB4051889E3472DC6F17C4E28B4C3471CBE6 * ___callback0, int64_t ___hResult1, intptr_t ___photoCaptureFramePtr2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_InvokeOnCapturedPhotoToMemoryDelegate_m0CA7E5A5AA2D887EE09B818D14D4C2ACF50D7CAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * V_0 = NULL;
	{
		V_0 = (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 *)NULL;
		intptr_t L_0 = ___photoCaptureFramePtr2;
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		intptr_t L_2 = ___photoCaptureFramePtr2;
		PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * L_3 = (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 *)il2cpp_codegen_object_new(PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858_il2cpp_TypeInfo_var);
		PhotoCaptureFrame__ctor_m7D08F4FA37B9B867BA2EFE2A1D099A221FC60731(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001c:
	{
		OnCapturedToMemoryCallback_t1117FB4051889E3472DC6F17C4E28B4C3471CBE6 * L_4 = ___callback0;
		int64_t L_5 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_il2cpp_TypeInfo_var);
		PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  L_6 = PhotoCapture_MakeCaptureResult_m040E0FBD9B6C69A45CF412BF6B902E8140EE2207(L_5, /*hidden argument*/NULL);
		PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * L_7 = V_0;
		NullCheck(L_4);
		OnCapturedToMemoryCallback_Invoke_m27564001AFC0D2411EDA3B4796F5ECAE5CDCF7B1(L_4, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::Dispose()
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_Dispose_m7A77C521109C0A6355702E48C06F52E98751D439 (PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_Dispose_m7A77C521109C0A6355702E48C06F52E98751D439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_NativePtr_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		PhotoCapture_Dispose_Internal_mAA2C61CD8C2213EDE2EBADE3173465335FEF66A9(__this, /*hidden argument*/NULL);
		__this->set_m_NativePtr_0((intptr_t)(0));
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::Dispose_Internal()
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_Dispose_Internal_mAA2C61CD8C2213EDE2EBADE3173465335FEF66A9 (PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * __this, const RuntimeMethod* method)
{
	typedef void (*PhotoCapture_Dispose_Internal_mAA2C61CD8C2213EDE2EBADE3173465335FEF66A9_ftn) (PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 *);
	static PhotoCapture_Dispose_Internal_mAA2C61CD8C2213EDE2EBADE3173465335FEF66A9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhotoCapture_Dispose_Internal_mAA2C61CD8C2213EDE2EBADE3173465335FEF66A9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.WebCam.PhotoCapture::Dispose_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::Finalize()
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_Finalize_m4454CEB3A488D483EBD154BEDDE1432B52CFA056 (PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture_Finalize_m4454CEB3A488D483EBD154BEDDE1432B52CFA056_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_NativePtr_0();
			bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_0029;
			}
		}

IL_0016:
		{
			PhotoCapture_DisposeThreaded_Internal_m28BF0EB965B1D419B511D2DD15187B9C28C8F563(__this, /*hidden argument*/NULL);
			__this->set_m_NativePtr_0((intptr_t)(0));
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0035:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::DisposeThreaded_Internal()
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture_DisposeThreaded_Internal_m28BF0EB965B1D419B511D2DD15187B9C28C8F563 (PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * __this, const RuntimeMethod* method)
{
	typedef void (*PhotoCapture_DisposeThreaded_Internal_m28BF0EB965B1D419B511D2DD15187B9C28C8F563_ftn) (PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 *);
	static PhotoCapture_DisposeThreaded_Internal_m28BF0EB965B1D419B511D2DD15187B9C28C8F563_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhotoCapture_DisposeThreaded_Internal_m28BF0EB965B1D419B511D2DD15187B9C28C8F563_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.WebCam.PhotoCapture::DisposeThreaded_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture::.cctor()
extern "C" IL2CPP_METHOD_ATTR void PhotoCapture__cctor_m1E5FBDB0B6F5FDB6EA81DC66B7CD06314DD60D64 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCapture__cctor_m1E5FBDB0B6F5FDB6EA81DC66B7CD06314DD60D64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_StaticFields*)il2cpp_codegen_static_fields_for(PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_il2cpp_TypeInfo_var))->set_HR_SUCCESS_1((((int64_t)((int64_t)0))));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnCaptureResourceCreatedCallback_t2C031B8432401E472889526CAF2CA987AC99D5D1 (OnCaptureResourceCreatedCallback_t2C031B8432401E472889526CAF2CA987AC99D5D1 * __this, PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * ___captureObject0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter U27___captureObject0U27 to native representation
	PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshaled_pinvoke ____captureObject0_marshaled = {};
	if (___captureObject0 != NULL)
	{
		PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshal_pinvoke(*___captureObject0, ____captureObject0_marshaled);
	}

	// Native function invocation
	il2cppPInvokeFunc(___captureObject0 != NULL ? (&____captureObject0_marshaled) : NULL);

	// Marshaling cleanup of parameter U27___captureObject0U27 native representation
	if ((&____captureObject0_marshaled) != NULL)
	{
		PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307_marshal_pinvoke_cleanup(____captureObject0_marshaled);
	}

}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture_OnCaptureResourceCreatedCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnCaptureResourceCreatedCallback__ctor_m0D05721629F685BCC1DDAA5028A1D1E3330E187B (OnCaptureResourceCreatedCallback_t2C031B8432401E472889526CAF2CA987AC99D5D1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture_OnCaptureResourceCreatedCallback::Invoke(UnityEngine.XR.WSA.WebCam.PhotoCapture)
extern "C" IL2CPP_METHOD_ATTR void OnCaptureResourceCreatedCallback_Invoke_mD4531195F8FE3931F7E809A26CD4EB53FD9D4E2E (OnCaptureResourceCreatedCallback_t2C031B8432401E472889526CAF2CA987AC99D5D1 * __this, PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * ___captureObject0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___captureObject0, targetMethod);
				}
			}
			else if (___parameterCount != 1)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___captureObject0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___captureObject0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___captureObject0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___captureObject0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * >::Invoke(targetMethod, targetThis, ___captureObject0);
							else
								GenericVirtActionInvoker1< PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * >::Invoke(targetMethod, targetThis, ___captureObject0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___captureObject0);
							else
								VirtActionInvoker1< PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___captureObject0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___captureObject0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___captureObject0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___captureObject0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___captureObject0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___captureObject0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___captureObject0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * >::Invoke(targetMethod, targetThis, ___captureObject0);
						else
							GenericVirtActionInvoker1< PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * >::Invoke(targetMethod, targetThis, ___captureObject0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___captureObject0);
						else
							VirtActionInvoker1< PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___captureObject0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___captureObject0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WebCam.PhotoCapture_OnCaptureResourceCreatedCallback::BeginInvoke(UnityEngine.XR.WSA.WebCam.PhotoCapture,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnCaptureResourceCreatedCallback_BeginInvoke_m02988444184E98451712E9269F1F96E528579785 (OnCaptureResourceCreatedCallback_t2C031B8432401E472889526CAF2CA987AC99D5D1 * __this, PhotoCapture_tC694C9CC6FC59F3D9B74984A47CB594502FAB307 * ___captureObject0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___captureObject0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture_OnCaptureResourceCreatedCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnCaptureResourceCreatedCallback_EndInvoke_m79D1221922C173A43774B3A1848DB6E074E54D42 (OnCaptureResourceCreatedCallback_t2C031B8432401E472889526CAF2CA987AC99D5D1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnCapturedToDiskCallback_tAC3EFE8F816D568DFACBDCAAC2102ACC8F7927DA (OnCapturedToDiskCallback_tAC3EFE8F816D568DFACBDCAAC2102ACC8F7927DA * __this, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture_OnCapturedToDiskCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnCapturedToDiskCallback__ctor_mA023B292B4FE67EE530AE8F37107300815CFEDA9 (OnCapturedToDiskCallback_tAC3EFE8F816D568DFACBDCAAC2102ACC8F7927DA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture_OnCapturedToDiskCallback::Invoke(UnityEngine.XR.WSA.WebCam.PhotoCapture_PhotoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnCapturedToDiskCallback_Invoke_m3817A930596E68ACFB7E1CCAD9255294DBE62F69 (OnCapturedToDiskCallback_tAC3EFE8F816D568DFACBDCAAC2102ACC8F7927DA * __this, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  ___result0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(targetMethod, targetThis, ___result0);
							else
								GenericVirtActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(targetMethod, targetThis, ___result0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
							else
								VirtActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(targetMethod, targetThis, ___result0);
						else
							GenericVirtActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(targetMethod, targetThis, ___result0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
						else
							VirtActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WebCam.PhotoCapture_OnCapturedToDiskCallback::BeginInvoke(UnityEngine.XR.WSA.WebCam.PhotoCapture_PhotoCaptureResult,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnCapturedToDiskCallback_BeginInvoke_mEE635D27A000BD7EFEBEBE28DD75DDFB03676C10 (OnCapturedToDiskCallback_tAC3EFE8F816D568DFACBDCAAC2102ACC8F7927DA * __this, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  ___result0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnCapturedToDiskCallback_BeginInvoke_mEE635D27A000BD7EFEBEBE28DD75DDFB03676C10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture_OnCapturedToDiskCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnCapturedToDiskCallback_EndInvoke_mE51717432CC0899FDEF36895D37CA4BD77FBD751 (OnCapturedToDiskCallback_tAC3EFE8F816D568DFACBDCAAC2102ACC8F7927DA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture_OnCapturedToMemoryCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnCapturedToMemoryCallback__ctor_m86BDA7CEEA56B1F97C340AE48F6E97A91B28E747 (OnCapturedToMemoryCallback_t1117FB4051889E3472DC6F17C4E28B4C3471CBE6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture_OnCapturedToMemoryCallback::Invoke(UnityEngine.XR.WSA.WebCam.PhotoCapture_PhotoCaptureResult,UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame)
extern "C" IL2CPP_METHOD_ATTR void OnCapturedToMemoryCallback_Invoke_m27564001AFC0D2411EDA3B4796F5ECAE5CDCF7B1 (OnCapturedToMemoryCallback_t1117FB4051889E3472DC6F17C4E28B4C3471CBE6 * __this, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  ___result0, PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * ___photoCaptureFrame1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___result0, ___photoCaptureFrame1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, ___photoCaptureFrame1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___result0, ___photoCaptureFrame1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * >::Invoke(targetMethod, targetThis, ___result0, ___photoCaptureFrame1);
							else
								GenericVirtActionInvoker2< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * >::Invoke(targetMethod, targetThis, ___result0, ___photoCaptureFrame1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0, ___photoCaptureFrame1);
							else
								VirtActionInvoker2< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0, ___photoCaptureFrame1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, ___photoCaptureFrame1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, ___photoCaptureFrame1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, ___photoCaptureFrame1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___result0, ___photoCaptureFrame1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * >::Invoke(targetMethod, targetThis, ___result0, ___photoCaptureFrame1);
						else
							GenericVirtActionInvoker2< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * >::Invoke(targetMethod, targetThis, ___result0, ___photoCaptureFrame1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0, ___photoCaptureFrame1);
						else
							VirtActionInvoker2< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0, ___photoCaptureFrame1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, ___photoCaptureFrame1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WebCam.PhotoCapture_OnCapturedToMemoryCallback::BeginInvoke(UnityEngine.XR.WSA.WebCam.PhotoCapture_PhotoCaptureResult,UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnCapturedToMemoryCallback_BeginInvoke_m6359F2A6F1E8018628EDF651DEBCFC5159939499 (OnCapturedToMemoryCallback_t1117FB4051889E3472DC6F17C4E28B4C3471CBE6 * __this, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  ___result0, PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * ___photoCaptureFrame1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnCapturedToMemoryCallback_BeginInvoke_m6359F2A6F1E8018628EDF651DEBCFC5159939499_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC_il2cpp_TypeInfo_var, &___result0);
	__d_args[1] = ___photoCaptureFrame1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture_OnCapturedToMemoryCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnCapturedToMemoryCallback_EndInvoke_m9D5A988BE751D7748231FC0EE0A2F19E4BDD03AB (OnCapturedToMemoryCallback_t1117FB4051889E3472DC6F17C4E28B4C3471CBE6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnPhotoModeStartedCallback_t3E74AEAE0C3BAF1711BF4C3F423A4B8272C6A456 (OnPhotoModeStartedCallback_t3E74AEAE0C3BAF1711BF4C3F423A4B8272C6A456 * __this, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture_OnPhotoModeStartedCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnPhotoModeStartedCallback__ctor_m1A186281FA58B337040D8AD0462146A04A4ACE58 (OnPhotoModeStartedCallback_t3E74AEAE0C3BAF1711BF4C3F423A4B8272C6A456 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture_OnPhotoModeStartedCallback::Invoke(UnityEngine.XR.WSA.WebCam.PhotoCapture_PhotoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnPhotoModeStartedCallback_Invoke_m243EF1BEA4A7ED007D21E1FF0DD7CFD584814C15 (OnPhotoModeStartedCallback_t3E74AEAE0C3BAF1711BF4C3F423A4B8272C6A456 * __this, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  ___result0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(targetMethod, targetThis, ___result0);
							else
								GenericVirtActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(targetMethod, targetThis, ___result0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
							else
								VirtActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(targetMethod, targetThis, ___result0);
						else
							GenericVirtActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(targetMethod, targetThis, ___result0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
						else
							VirtActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WebCam.PhotoCapture_OnPhotoModeStartedCallback::BeginInvoke(UnityEngine.XR.WSA.WebCam.PhotoCapture_PhotoCaptureResult,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnPhotoModeStartedCallback_BeginInvoke_mEDA51A1E8705FCA9103C68A7F1299C517FF67DAC (OnPhotoModeStartedCallback_t3E74AEAE0C3BAF1711BF4C3F423A4B8272C6A456 * __this, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  ___result0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPhotoModeStartedCallback_BeginInvoke_mEDA51A1E8705FCA9103C68A7F1299C517FF67DAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture_OnPhotoModeStartedCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnPhotoModeStartedCallback_EndInvoke_m691ACD8B9E82A58D586805DD2811C100E03C9247 (OnPhotoModeStartedCallback_t3E74AEAE0C3BAF1711BF4C3F423A4B8272C6A456 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnPhotoModeStoppedCallback_t80B25F7611051F3335A92707211B540F04E08592 (OnPhotoModeStoppedCallback_t80B25F7611051F3335A92707211B540F04E08592 * __this, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture_OnPhotoModeStoppedCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnPhotoModeStoppedCallback__ctor_m2C5228CBB001D6D7B30DB8623E7043872307553E (OnPhotoModeStoppedCallback_t80B25F7611051F3335A92707211B540F04E08592 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture_OnPhotoModeStoppedCallback::Invoke(UnityEngine.XR.WSA.WebCam.PhotoCapture_PhotoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnPhotoModeStoppedCallback_Invoke_m86BD8A1BC55CCEE1B13CBD9CF9A01021149AD92E (OnPhotoModeStoppedCallback_t80B25F7611051F3335A92707211B540F04E08592 * __this, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  ___result0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(targetMethod, targetThis, ___result0);
							else
								GenericVirtActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(targetMethod, targetThis, ___result0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
							else
								VirtActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(targetMethod, targetThis, ___result0);
						else
							GenericVirtActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(targetMethod, targetThis, ___result0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
						else
							VirtActionInvoker1< PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WebCam.PhotoCapture_OnPhotoModeStoppedCallback::BeginInvoke(UnityEngine.XR.WSA.WebCam.PhotoCapture_PhotoCaptureResult,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnPhotoModeStoppedCallback_BeginInvoke_m28168AB46B2CA7C46BD3A6F146C9014D14EA2FBB (OnPhotoModeStoppedCallback_t80B25F7611051F3335A92707211B540F04E08592 * __this, PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC  ___result0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPhotoModeStoppedCallback_BeginInvoke_m28168AB46B2CA7C46BD3A6F146C9014D14EA2FBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(PhotoCaptureResult_tB8F50F3F223E84B961166C1536336C2BC2C921AC_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCapture_OnPhotoModeStoppedCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnPhotoModeStoppedCallback_EndInvoke_mB715B0F53A0318130AD109A9094CDE7CF5B82A72 (OnPhotoModeStoppedCallback_t80B25F7611051F3335A92707211B540F04E08592 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
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
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame__ctor_m7D08F4FA37B9B867BA2EFE2A1D099A221FC60731 (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCaptureFrame__ctor_m7D08F4FA37B9B867BA2EFE2A1D099A221FC60731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativePtr0;
		__this->set_m_NativePtr_0((intptr_t)L_0);
		int32_t L_1 = PhotoCaptureFrame_GetDataLength_m2269CB960C50D53AAD3CD5243CBA915F188956E3(__this, /*hidden argument*/NULL);
		PhotoCaptureFrame_set_dataLength_mBEDEBBB3083CDE757E1FEC075F3DEDD1BC7DE798(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = PhotoCaptureFrame_GetHasLocationData_m49607D476B345A339BCE8F4F1412AF695AE5EC84(__this, /*hidden argument*/NULL);
		PhotoCaptureFrame_set_hasLocationData_mE75005491CE31BA479FA16423102B14954CF9AE0(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = PhotoCaptureFrame_GetCapturePixelFormat_mBF2EBB4AE652D353145ED579B862EE1A7D78CEEF(__this, /*hidden argument*/NULL);
		PhotoCaptureFrame_set_pixelFormat_m401BAAC04045F9035AE1A20137FE3E57D2A2A870(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = PhotoCaptureFrame_get_dataLength_m168BA24D2D584F6CE6B4F45AE2146BD2D015A56E(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_AddMemoryPressure_mF48FE7CA2DC4D23FDD5B7B0A7D0B6C1C598771CE((((int64_t)((int64_t)L_4))), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::get_dataLength()
extern "C" IL2CPP_METHOD_ATTR int32_t PhotoCaptureFrame_get_dataLength_m168BA24D2D584F6CE6B4F45AE2146BD2D015A56E (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CdataLengthU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::set_dataLength(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_dataLength_mBEDEBBB3083CDE757E1FEC075F3DEDD1BC7DE798 (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CdataLengthU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::set_hasLocationData(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_hasLocationData_mE75005491CE31BA479FA16423102B14954CF9AE0 (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3ChasLocationDataU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::set_pixelFormat(UnityEngine.XR.WSA.WebCam.CapturePixelFormat)
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_set_pixelFormat_m401BAAC04045F9035AE1A20137FE3E57D2A2A870 (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpixelFormatU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::GetDataLength()
extern "C" IL2CPP_METHOD_ATTR int32_t PhotoCaptureFrame_GetDataLength_m2269CB960C50D53AAD3CD5243CBA915F188956E3 (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*PhotoCaptureFrame_GetDataLength_m2269CB960C50D53AAD3CD5243CBA915F188956E3_ftn) (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 *);
	static PhotoCaptureFrame_GetDataLength_m2269CB960C50D53AAD3CD5243CBA915F188956E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhotoCaptureFrame_GetDataLength_m2269CB960C50D53AAD3CD5243CBA915F188956E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::GetDataLength()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::GetHasLocationData()
extern "C" IL2CPP_METHOD_ATTR bool PhotoCaptureFrame_GetHasLocationData_m49607D476B345A339BCE8F4F1412AF695AE5EC84 (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, const RuntimeMethod* method)
{
	typedef bool (*PhotoCaptureFrame_GetHasLocationData_m49607D476B345A339BCE8F4F1412AF695AE5EC84_ftn) (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 *);
	static PhotoCaptureFrame_GetHasLocationData_m49607D476B345A339BCE8F4F1412AF695AE5EC84_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhotoCaptureFrame_GetHasLocationData_m49607D476B345A339BCE8F4F1412AF695AE5EC84_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::GetHasLocationData()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.XR.WSA.WebCam.CapturePixelFormat UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::GetCapturePixelFormat()
extern "C" IL2CPP_METHOD_ATTR int32_t PhotoCaptureFrame_GetCapturePixelFormat_mBF2EBB4AE652D353145ED579B862EE1A7D78CEEF (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*PhotoCaptureFrame_GetCapturePixelFormat_mBF2EBB4AE652D353145ED579B862EE1A7D78CEEF_ftn) (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 *);
	static PhotoCaptureFrame_GetCapturePixelFormat_mBF2EBB4AE652D353145ED579B862EE1A7D78CEEF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhotoCaptureFrame_GetCapturePixelFormat_mBF2EBB4AE652D353145ED579B862EE1A7D78CEEF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::GetCapturePixelFormat()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::Cleanup()
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_Cleanup_m725D9C5D4FF978325BCE08FF4DF0612AF8F98721 (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCaptureFrame_Cleanup_m725D9C5D4FF978325BCE08FF4DF0612AF8F98721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_NativePtr_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = PhotoCaptureFrame_get_dataLength_m168BA24D2D584F6CE6B4F45AE2146BD2D015A56E(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_RemoveMemoryPressure_mBA7395DAA88C4F1656648172EE98A14F2E726704((((int64_t)((int64_t)L_2))), /*hidden argument*/NULL);
		PhotoCaptureFrame_Dispose_Internal_mFB61C7E4BDB82DFE9AC129F31164DC56B190D17E(__this, /*hidden argument*/NULL);
		__this->set_m_NativePtr_0((intptr_t)(0));
	}

IL_0035:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::Dispose_Internal()
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_Dispose_Internal_mFB61C7E4BDB82DFE9AC129F31164DC56B190D17E (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, const RuntimeMethod* method)
{
	typedef void (*PhotoCaptureFrame_Dispose_Internal_mFB61C7E4BDB82DFE9AC129F31164DC56B190D17E_ftn) (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 *);
	static PhotoCaptureFrame_Dispose_Internal_mFB61C7E4BDB82DFE9AC129F31164DC56B190D17E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhotoCaptureFrame_Dispose_Internal_mFB61C7E4BDB82DFE9AC129F31164DC56B190D17E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::Dispose_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::Dispose()
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_Dispose_m1B8A252069B6130135A6429E60B32EC94DAAD01C (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotoCaptureFrame_Dispose_m1B8A252069B6130135A6429E60B32EC94DAAD01C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PhotoCaptureFrame_Cleanup_m725D9C5D4FF978325BCE08FF4DF0612AF8F98721(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.PhotoCaptureFrame::Finalize()
extern "C" IL2CPP_METHOD_ATTR void PhotoCaptureFrame_Finalize_m013F843CD2BF0F944CCE63B390CBF73F39673258 (PhotoCaptureFrame_t6DDF938CC10AEDEC6E1FAD80BE5DD2849E479858 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		PhotoCaptureFrame_Cleanup_m725D9C5D4FF978325BCE08FF4DF0612AF8F98721(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
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
// Conversion methods for marshalling of: UnityEngine.XR.WSA.WebCam.VideoCapture
extern "C" void VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshal_pinvoke(const VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA& unmarshaled, VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshaled_pinvoke& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
extern "C" void VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshal_pinvoke_back(const VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshaled_pinvoke& marshaled, VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset(&unmarshaled_m_NativePtr_temp_0, 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.WebCam.VideoCapture
extern "C" void VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshal_pinvoke_cleanup(VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.WebCam.VideoCapture
extern "C" void VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshal_com(const VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA& unmarshaled, VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshaled_com& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
extern "C" void VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshal_com_back(const VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshaled_com& marshaled, VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset(&unmarshaled_m_NativePtr_temp_0, 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.WebCam.VideoCapture
extern "C" void VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshal_com_cleanup(VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoCapture__ctor_mE70546FA77D0A30D7A1F5306C35752290805634F (VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * __this, intptr_t ___nativeCaptureObject0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativeCaptureObject0;
		__this->set_m_NativePtr_0((intptr_t)L_0);
		return;
	}
}
// UnityEngine.XR.WSA.WebCam.VideoCapture_VideoCaptureResult UnityEngine.XR.WSA.WebCam.VideoCapture::MakeCaptureResult(System.Int64)
extern "C" IL2CPP_METHOD_ATTR VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  VideoCapture_MakeCaptureResult_m877EBE3842EF752B6C2390D139C8644C77AFCA5F (int64_t ___hResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_MakeCaptureResult_m877EBE3842EF752B6C2390D139C8644C77AFCA5F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 ));
		int64_t L_0 = ___hResult0;
		IL2CPP_RUNTIME_CLASS_INIT(VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_il2cpp_TypeInfo_var);
		int64_t L_1 = ((VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_StaticFields*)il2cpp_codegen_static_fields_for(VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_il2cpp_TypeInfo_var))->get_HR_SUCCESS_1();
		if ((!(((uint64_t)L_0) == ((uint64_t)L_1))))
		{
			goto IL_001d;
		}
	}
	{
		V_1 = 0;
		goto IL_0021;
	}

IL_001d:
	{
		V_1 = 1;
	}

IL_0021:
	{
		int32_t L_2 = V_1;
		(&V_0)->set_resultType_0(L_2);
		int64_t L_3 = ___hResult0;
		(&V_0)->set_hResult_1(L_3);
		VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  L_4 = V_0;
		V_2 = L_4;
		goto IL_0038;
	}

IL_0038:
	{
		VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  L_5 = V_2;
		return L_5;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::InvokeOnCreatedVideoCaptureResourceDelegate(UnityEngine.XR.WSA.WebCam.VideoCapture_OnVideoCaptureResourceCreatedCallback,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_InvokeOnCreatedVideoCaptureResourceDelegate_m3A4100036BABF6C078F3725F76EF0CE8E2ECC847 (OnVideoCaptureResourceCreatedCallback_tF07FC786DED7B54F82740F0F65D21EA3FEC88804 * ___callback0, intptr_t ___nativePtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_InvokeOnCreatedVideoCaptureResourceDelegate_m3A4100036BABF6C078F3725F76EF0CE8E2ECC847_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___nativePtr1;
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		OnVideoCaptureResourceCreatedCallback_tF07FC786DED7B54F82740F0F65D21EA3FEC88804 * L_2 = ___callback0;
		NullCheck(L_2);
		OnVideoCaptureResourceCreatedCallback_Invoke_m9584F5E514C41BEAD01A81049A0577D32303C7F0(L_2, (VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA *)NULL, /*hidden argument*/NULL);
		goto IL_002d;
	}

IL_001f:
	{
		OnVideoCaptureResourceCreatedCallback_tF07FC786DED7B54F82740F0F65D21EA3FEC88804 * L_3 = ___callback0;
		intptr_t L_4 = ___nativePtr1;
		VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * L_5 = (VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA *)il2cpp_codegen_object_new(VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_il2cpp_TypeInfo_var);
		VideoCapture__ctor_mE70546FA77D0A30D7A1F5306C35752290805634F(L_5, (intptr_t)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		OnVideoCaptureResourceCreatedCallback_Invoke_m9584F5E514C41BEAD01A81049A0577D32303C7F0(L_3, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::InvokeOnVideoModeStartedDelegate(UnityEngine.XR.WSA.WebCam.VideoCapture_OnVideoModeStartedCallback,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_InvokeOnVideoModeStartedDelegate_m076A832758BD13A4A5AEFDFB3AC462D1709C1C17 (OnVideoModeStartedCallback_t853A50811DA6BBFC7977E51BF13D1A9FF8E5100F * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_InvokeOnVideoModeStartedDelegate_m076A832758BD13A4A5AEFDFB3AC462D1709C1C17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnVideoModeStartedCallback_t853A50811DA6BBFC7977E51BF13D1A9FF8E5100F * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_il2cpp_TypeInfo_var);
		VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  L_2 = VideoCapture_MakeCaptureResult_m877EBE3842EF752B6C2390D139C8644C77AFCA5F(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnVideoModeStartedCallback_Invoke_m0129413B6110AC9959D0457B2EF6F7A532D41932(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::InvokeOnVideoModeStoppedDelegate(UnityEngine.XR.WSA.WebCam.VideoCapture_OnVideoModeStoppedCallback,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_InvokeOnVideoModeStoppedDelegate_mF1F21052FA711217FDD988AF1085A0B3D24808C2 (OnVideoModeStoppedCallback_t69DE28B795E5B250601A1A9282127B1FD2AD31D8 * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_InvokeOnVideoModeStoppedDelegate_mF1F21052FA711217FDD988AF1085A0B3D24808C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnVideoModeStoppedCallback_t69DE28B795E5B250601A1A9282127B1FD2AD31D8 * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_il2cpp_TypeInfo_var);
		VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  L_2 = VideoCapture_MakeCaptureResult_m877EBE3842EF752B6C2390D139C8644C77AFCA5F(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnVideoModeStoppedCallback_Invoke_mDE7AA2EE59EECFC517162ED6861168227E659FC6(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::InvokeOnStartedRecordingVideoToDiskDelegate(UnityEngine.XR.WSA.WebCam.VideoCapture_OnStartedRecordingVideoCallback,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_InvokeOnStartedRecordingVideoToDiskDelegate_m604E2FD109871C711719FFA9A238A1A546A171D3 (OnStartedRecordingVideoCallback_tBA25BE29E6C6BFF428BFEF0131C9C28E6F96BE89 * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_InvokeOnStartedRecordingVideoToDiskDelegate_m604E2FD109871C711719FFA9A238A1A546A171D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnStartedRecordingVideoCallback_tBA25BE29E6C6BFF428BFEF0131C9C28E6F96BE89 * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_il2cpp_TypeInfo_var);
		VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  L_2 = VideoCapture_MakeCaptureResult_m877EBE3842EF752B6C2390D139C8644C77AFCA5F(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnStartedRecordingVideoCallback_Invoke_m3CFE1AA2BF2BC0937FD173E42630CACD1F79D90E(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::InvokeOnStoppedRecordingVideoToDiskDelegate(UnityEngine.XR.WSA.WebCam.VideoCapture_OnStoppedRecordingVideoCallback,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_InvokeOnStoppedRecordingVideoToDiskDelegate_m91974227B59FDE23BD64B966127AB81E001D5DE5 (OnStoppedRecordingVideoCallback_t1F24C0F8A39A6E3E4606D2EB3FBA06D42E176AAF * ___callback0, int64_t ___hResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_InvokeOnStoppedRecordingVideoToDiskDelegate_m91974227B59FDE23BD64B966127AB81E001D5DE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnStoppedRecordingVideoCallback_t1F24C0F8A39A6E3E4606D2EB3FBA06D42E176AAF * L_0 = ___callback0;
		int64_t L_1 = ___hResult1;
		IL2CPP_RUNTIME_CLASS_INIT(VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_il2cpp_TypeInfo_var);
		VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  L_2 = VideoCapture_MakeCaptureResult_m877EBE3842EF752B6C2390D139C8644C77AFCA5F(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		OnStoppedRecordingVideoCallback_Invoke_m5298584F2DD5EC917D129AD5BED7411CF5E0EA60(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::Dispose()
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_Dispose_mB773BA68E9670D67107B5703809256731237C867 (VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_Dispose_mB773BA68E9670D67107B5703809256731237C867_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_NativePtr_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		VideoCapture_Dispose_Internal_mE6072B7C223F04E69FBA2FFAB5CCCBA774BEF838(__this, /*hidden argument*/NULL);
		__this->set_m_NativePtr_0((intptr_t)(0));
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::Dispose_Internal()
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_Dispose_Internal_mE6072B7C223F04E69FBA2FFAB5CCCBA774BEF838 (VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * __this, const RuntimeMethod* method)
{
	typedef void (*VideoCapture_Dispose_Internal_mE6072B7C223F04E69FBA2FFAB5CCCBA774BEF838_ftn) (VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA *);
	static VideoCapture_Dispose_Internal_mE6072B7C223F04E69FBA2FFAB5CCCBA774BEF838_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoCapture_Dispose_Internal_mE6072B7C223F04E69FBA2FFAB5CCCBA774BEF838_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.WebCam.VideoCapture::Dispose_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::Finalize()
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_Finalize_m3AF837AF542CA1C76C077644E6DAA145F30176D0 (VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture_Finalize_m3AF837AF542CA1C76C077644E6DAA145F30176D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_NativePtr_0();
			bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_0029;
			}
		}

IL_0016:
		{
			VideoCapture_DisposeThreaded_Internal_m3C52F3227C669939EBE7A4F9AB6512B4FAE0313E(__this, /*hidden argument*/NULL);
			__this->set_m_NativePtr_0((intptr_t)(0));
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0035:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::DisposeThreaded_Internal()
extern "C" IL2CPP_METHOD_ATTR void VideoCapture_DisposeThreaded_Internal_m3C52F3227C669939EBE7A4F9AB6512B4FAE0313E (VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * __this, const RuntimeMethod* method)
{
	typedef void (*VideoCapture_DisposeThreaded_Internal_m3C52F3227C669939EBE7A4F9AB6512B4FAE0313E_ftn) (VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA *);
	static VideoCapture_DisposeThreaded_Internal_m3C52F3227C669939EBE7A4F9AB6512B4FAE0313E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoCapture_DisposeThreaded_Internal_m3C52F3227C669939EBE7A4F9AB6512B4FAE0313E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.WebCam.VideoCapture::DisposeThreaded_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture::.cctor()
extern "C" IL2CPP_METHOD_ATTR void VideoCapture__cctor_m90180530ED1FBD4ED43D26AB519524F6C55CD5AD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoCapture__cctor_m90180530ED1FBD4ED43D26AB519524F6C55CD5AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_StaticFields*)il2cpp_codegen_static_fields_for(VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_il2cpp_TypeInfo_var))->set_HR_SUCCESS_1((((int64_t)((int64_t)0))));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnStartedRecordingVideoCallback_tBA25BE29E6C6BFF428BFEF0131C9C28E6F96BE89 (OnStartedRecordingVideoCallback_tBA25BE29E6C6BFF428BFEF0131C9C28E6F96BE89 * __this, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture_OnStartedRecordingVideoCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnStartedRecordingVideoCallback__ctor_m83D18E76FB492C1F62D1AE4BF80505358FEF149F (OnStartedRecordingVideoCallback_tBA25BE29E6C6BFF428BFEF0131C9C28E6F96BE89 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture_OnStartedRecordingVideoCallback::Invoke(UnityEngine.XR.WSA.WebCam.VideoCapture_VideoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnStartedRecordingVideoCallback_Invoke_m3CFE1AA2BF2BC0937FD173E42630CACD1F79D90E (OnStartedRecordingVideoCallback_tBA25BE29E6C6BFF428BFEF0131C9C28E6F96BE89 * __this, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  ___result0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(targetMethod, targetThis, ___result0);
							else
								GenericVirtActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(targetMethod, targetThis, ___result0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
							else
								VirtActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(targetMethod, targetThis, ___result0);
						else
							GenericVirtActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(targetMethod, targetThis, ___result0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
						else
							VirtActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WebCam.VideoCapture_OnStartedRecordingVideoCallback::BeginInvoke(UnityEngine.XR.WSA.WebCam.VideoCapture_VideoCaptureResult,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnStartedRecordingVideoCallback_BeginInvoke_m878F31F0823F4DE88ABC870535AAD1D957C9165E (OnStartedRecordingVideoCallback_tBA25BE29E6C6BFF428BFEF0131C9C28E6F96BE89 * __this, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  ___result0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnStartedRecordingVideoCallback_BeginInvoke_m878F31F0823F4DE88ABC870535AAD1D957C9165E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture_OnStartedRecordingVideoCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnStartedRecordingVideoCallback_EndInvoke_m670F6A6F7AB4008ADBD94BD7183ABF04F5DB4430 (OnStartedRecordingVideoCallback_tBA25BE29E6C6BFF428BFEF0131C9C28E6F96BE89 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnStoppedRecordingVideoCallback_t1F24C0F8A39A6E3E4606D2EB3FBA06D42E176AAF (OnStoppedRecordingVideoCallback_t1F24C0F8A39A6E3E4606D2EB3FBA06D42E176AAF * __this, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture_OnStoppedRecordingVideoCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnStoppedRecordingVideoCallback__ctor_mACD0FE0E9BBEFC721B00730A36D7F5F64844DCB3 (OnStoppedRecordingVideoCallback_t1F24C0F8A39A6E3E4606D2EB3FBA06D42E176AAF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture_OnStoppedRecordingVideoCallback::Invoke(UnityEngine.XR.WSA.WebCam.VideoCapture_VideoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnStoppedRecordingVideoCallback_Invoke_m5298584F2DD5EC917D129AD5BED7411CF5E0EA60 (OnStoppedRecordingVideoCallback_t1F24C0F8A39A6E3E4606D2EB3FBA06D42E176AAF * __this, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  ___result0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(targetMethod, targetThis, ___result0);
							else
								GenericVirtActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(targetMethod, targetThis, ___result0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
							else
								VirtActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(targetMethod, targetThis, ___result0);
						else
							GenericVirtActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(targetMethod, targetThis, ___result0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
						else
							VirtActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WebCam.VideoCapture_OnStoppedRecordingVideoCallback::BeginInvoke(UnityEngine.XR.WSA.WebCam.VideoCapture_VideoCaptureResult,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnStoppedRecordingVideoCallback_BeginInvoke_m46747E24BA35A863CCEC5038AD21810A409B51A0 (OnStoppedRecordingVideoCallback_t1F24C0F8A39A6E3E4606D2EB3FBA06D42E176AAF * __this, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  ___result0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnStoppedRecordingVideoCallback_BeginInvoke_m46747E24BA35A863CCEC5038AD21810A409B51A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture_OnStoppedRecordingVideoCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnStoppedRecordingVideoCallback_EndInvoke_mB3404591E06E0DADA45763D29E3694778DA5A746 (OnStoppedRecordingVideoCallback_t1F24C0F8A39A6E3E4606D2EB3FBA06D42E176AAF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnVideoCaptureResourceCreatedCallback_tF07FC786DED7B54F82740F0F65D21EA3FEC88804 (OnVideoCaptureResourceCreatedCallback_tF07FC786DED7B54F82740F0F65D21EA3FEC88804 * __this, VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * ___captureObject0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter U27___captureObject0U27 to native representation
	VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshaled_pinvoke ____captureObject0_marshaled = {};
	if (___captureObject0 != NULL)
	{
		VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshal_pinvoke(*___captureObject0, ____captureObject0_marshaled);
	}

	// Native function invocation
	il2cppPInvokeFunc(___captureObject0 != NULL ? (&____captureObject0_marshaled) : NULL);

	// Marshaling cleanup of parameter U27___captureObject0U27 native representation
	if ((&____captureObject0_marshaled) != NULL)
	{
		VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA_marshal_pinvoke_cleanup(____captureObject0_marshaled);
	}

}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture_OnVideoCaptureResourceCreatedCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnVideoCaptureResourceCreatedCallback__ctor_m59ED6427F419CE40EA16512FC3DA3F2B62026308 (OnVideoCaptureResourceCreatedCallback_tF07FC786DED7B54F82740F0F65D21EA3FEC88804 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture_OnVideoCaptureResourceCreatedCallback::Invoke(UnityEngine.XR.WSA.WebCam.VideoCapture)
extern "C" IL2CPP_METHOD_ATTR void OnVideoCaptureResourceCreatedCallback_Invoke_m9584F5E514C41BEAD01A81049A0577D32303C7F0 (OnVideoCaptureResourceCreatedCallback_tF07FC786DED7B54F82740F0F65D21EA3FEC88804 * __this, VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * ___captureObject0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___captureObject0, targetMethod);
				}
			}
			else if (___parameterCount != 1)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___captureObject0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___captureObject0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___captureObject0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___captureObject0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * >::Invoke(targetMethod, targetThis, ___captureObject0);
							else
								GenericVirtActionInvoker1< VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * >::Invoke(targetMethod, targetThis, ___captureObject0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___captureObject0);
							else
								VirtActionInvoker1< VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___captureObject0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___captureObject0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___captureObject0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___captureObject0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___captureObject0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___captureObject0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___captureObject0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___captureObject0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * >::Invoke(targetMethod, targetThis, ___captureObject0);
						else
							GenericVirtActionInvoker1< VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * >::Invoke(targetMethod, targetThis, ___captureObject0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___captureObject0);
						else
							VirtActionInvoker1< VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___captureObject0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___captureObject0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WebCam.VideoCapture_OnVideoCaptureResourceCreatedCallback::BeginInvoke(UnityEngine.XR.WSA.WebCam.VideoCapture,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnVideoCaptureResourceCreatedCallback_BeginInvoke_mAA8AA41C9C6BE5DA0E2EABE8574811A01A261A43 (OnVideoCaptureResourceCreatedCallback_tF07FC786DED7B54F82740F0F65D21EA3FEC88804 * __this, VideoCapture_t5AE8BEBF2D63554F6A0E5A3FCF13578934120FFA * ___captureObject0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___captureObject0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture_OnVideoCaptureResourceCreatedCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnVideoCaptureResourceCreatedCallback_EndInvoke_m993CF5AB1F2B117BE56E7F0F1A9BFBA22473ABF8 (OnVideoCaptureResourceCreatedCallback_tF07FC786DED7B54F82740F0F65D21EA3FEC88804 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnVideoModeStartedCallback_t853A50811DA6BBFC7977E51BF13D1A9FF8E5100F (OnVideoModeStartedCallback_t853A50811DA6BBFC7977E51BF13D1A9FF8E5100F * __this, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture_OnVideoModeStartedCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnVideoModeStartedCallback__ctor_m4258E2916CF444BEDCE74BF68B89B89C51341E1C (OnVideoModeStartedCallback_t853A50811DA6BBFC7977E51BF13D1A9FF8E5100F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture_OnVideoModeStartedCallback::Invoke(UnityEngine.XR.WSA.WebCam.VideoCapture_VideoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnVideoModeStartedCallback_Invoke_m0129413B6110AC9959D0457B2EF6F7A532D41932 (OnVideoModeStartedCallback_t853A50811DA6BBFC7977E51BF13D1A9FF8E5100F * __this, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  ___result0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(targetMethod, targetThis, ___result0);
							else
								GenericVirtActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(targetMethod, targetThis, ___result0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
							else
								VirtActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(targetMethod, targetThis, ___result0);
						else
							GenericVirtActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(targetMethod, targetThis, ___result0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
						else
							VirtActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WebCam.VideoCapture_OnVideoModeStartedCallback::BeginInvoke(UnityEngine.XR.WSA.WebCam.VideoCapture_VideoCaptureResult,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnVideoModeStartedCallback_BeginInvoke_m2A7B61F154E7D5CE8642A7660D64A38D71A2F4C8 (OnVideoModeStartedCallback_t853A50811DA6BBFC7977E51BF13D1A9FF8E5100F * __this, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  ___result0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnVideoModeStartedCallback_BeginInvoke_m2A7B61F154E7D5CE8642A7660D64A38D71A2F4C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture_OnVideoModeStartedCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnVideoModeStartedCallback_EndInvoke_m502C3CA7BBC57B57D3B6EECB66596E6CBFF7FDE8 (OnVideoModeStartedCallback_t853A50811DA6BBFC7977E51BF13D1A9FF8E5100F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnVideoModeStoppedCallback_t69DE28B795E5B250601A1A9282127B1FD2AD31D8 (OnVideoModeStoppedCallback_t69DE28B795E5B250601A1A9282127B1FD2AD31D8 * __this, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture_OnVideoModeStoppedCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnVideoModeStoppedCallback__ctor_m514B50E48BA2B254D10FFE04478A928B520B9A6F (OnVideoModeStoppedCallback_t69DE28B795E5B250601A1A9282127B1FD2AD31D8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture_OnVideoModeStoppedCallback::Invoke(UnityEngine.XR.WSA.WebCam.VideoCapture_VideoCaptureResult)
extern "C" IL2CPP_METHOD_ATTR void OnVideoModeStoppedCallback_Invoke_mDE7AA2EE59EECFC517162ED6861168227E659FC6 (OnVideoModeStoppedCallback_t69DE28B795E5B250601A1A9282127B1FD2AD31D8 * __this, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  ___result0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(targetMethod, targetThis, ___result0);
							else
								GenericVirtActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(targetMethod, targetThis, ___result0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
							else
								VirtActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(targetMethod, targetThis, ___result0);
						else
							GenericVirtActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(targetMethod, targetThis, ___result0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
						else
							VirtActionInvoker1< VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WebCam.VideoCapture_OnVideoModeStoppedCallback::BeginInvoke(UnityEngine.XR.WSA.WebCam.VideoCapture_VideoCaptureResult,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnVideoModeStoppedCallback_BeginInvoke_mEF5B566774D7F29807FC69694ED99DF19358ED2F (OnVideoModeStoppedCallback_t69DE28B795E5B250601A1A9282127B1FD2AD31D8 * __this, VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55  ___result0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnVideoModeStoppedCallback_BeginInvoke_mEF5B566774D7F29807FC69694ED99DF19358ED2F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(VideoCaptureResult_t3D9C36316B2EF9E90EED5A151CAEB0BB40162D55_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.WebCam.VideoCapture_OnVideoModeStoppedCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnVideoModeStoppedCallback_EndInvoke_mAB55DF1D1390CF18FFD352027E1D1DF462A9A07C (OnVideoModeStoppedCallback_t69DE28B795E5B250601A1A9282127B1FD2AD31D8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
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
// System.Void UnityEngine.XR.WSA.WorldAnchor::Internal_TriggerEventOnTrackingLost(UnityEngine.XR.WSA.WorldAnchor,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchor_Internal_TriggerEventOnTrackingLost_m30225CE01803079AAA7C81877ABE5A4150960B3A (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___worldAnchor0, bool ___located1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchor_Internal_TriggerEventOnTrackingLost_m30225CE01803079AAA7C81877ABE5A4150960B3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_0 = ___worldAnchor0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_2 = ___worldAnchor0;
		NullCheck(L_2);
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_3 = L_2->get_OnTrackingChanged_4();
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_4 = ___worldAnchor0;
		NullCheck(L_4);
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_5 = L_4->get_OnTrackingChanged_4();
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_6 = ___worldAnchor0;
		bool L_7 = ___located1;
		NullCheck(L_5);
		OnTrackingChangedDelegate_Invoke_mC3AAC3FBDB589E9DEE9D83664191AED37F03A23C(L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0027:
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
// System.Void UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate__ctor_m9CAD493361EE71D73CB61E7BFD889E88B5649497 (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate::Invoke(UnityEngine.XR.WSA.WorldAnchor,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate_Invoke_mC3AAC3FBDB589E9DEE9D83664191AED37F03A23C (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___worldAnchor0, bool ___located1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___worldAnchor0, ___located1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___worldAnchor0, ___located1, targetMethod);
				}
			}
			else if (___parameterCount != 2)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, ___worldAnchor0, ___located1);
							else
								GenericVirtActionInvoker1< bool >::Invoke(targetMethod, ___worldAnchor0, ___located1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___worldAnchor0, ___located1);
							else
								VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___worldAnchor0, ___located1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___worldAnchor0, ___located1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___worldAnchor0, ___located1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool >::Invoke(targetMethod, targetThis, ___worldAnchor0, ___located1);
							else
								GenericVirtActionInvoker2< WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool >::Invoke(targetMethod, targetThis, ___worldAnchor0, ___located1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___worldAnchor0, ___located1);
							else
								VirtActionInvoker2< WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___worldAnchor0, ___located1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___worldAnchor0, ___located1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___worldAnchor0, ___located1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___worldAnchor0, ___located1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, ___worldAnchor0, ___located1);
						else
							GenericVirtActionInvoker1< bool >::Invoke(targetMethod, ___worldAnchor0, ___located1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___worldAnchor0, ___located1);
						else
							VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___worldAnchor0, ___located1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___worldAnchor0, ___located1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___worldAnchor0, ___located1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool >::Invoke(targetMethod, targetThis, ___worldAnchor0, ___located1);
						else
							GenericVirtActionInvoker2< WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool >::Invoke(targetMethod, targetThis, ___worldAnchor0, ___located1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___worldAnchor0, ___located1);
						else
							VirtActionInvoker2< WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___worldAnchor0, ___located1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___worldAnchor0, ___located1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate::BeginInvoke(UnityEngine.XR.WSA.WorldAnchor,System.Boolean,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnTrackingChangedDelegate_BeginInvoke_mF0EFF2F8F200DEEEF063BB19BA44ACFF920D5D8C (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___worldAnchor0, bool ___located1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnTrackingChangedDelegate_BeginInvoke_mF0EFF2F8F200DEEEF063BB19BA44ACFF920D5D8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___worldAnchor0;
	__d_args[1] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___located1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate_EndInvoke_m00461C6664BBAAF38549748E6F2BEEBBA5F3EDD7 (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.WorldManager::Internal_TriggerPositionalLocatorStateChanged(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState)
extern "C" IL2CPP_METHOD_ATTR void WorldManager_Internal_TriggerPositionalLocatorStateChanged_mE66D0FFF1E4FD4406161D7EC482B45C33B0E0FC9 (int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldManager_Internal_TriggerPositionalLocatorStateChanged_mE66D0FFF1E4FD4406161D7EC482B45C33B0E0FC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * L_0 = ((WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_StaticFields*)il2cpp_codegen_static_fields_for(WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_il2cpp_TypeInfo_var))->get_OnPositionalLocatorStateChanged_0();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * L_1 = ((WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_StaticFields*)il2cpp_codegen_static_fields_for(WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_il2cpp_TypeInfo_var))->get_OnPositionalLocatorStateChanged_0();
		int32_t L_2 = ___oldState0;
		int32_t L_3 = ___newState1;
		NullCheck(L_1);
		OnPositionalLocatorStateChangedDelegate_Invoke_mCA5DBD7DB392BB9F22AF98FB50EB570B6A26AA1F(L_1, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0017:
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
extern "C"  void DelegatePInvokeWrapper_OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___oldState0, ___newState1);

}
// System.Void UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate__ctor_mD1849CEC79E785F210827F85B69D618A1E3822D2 (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate::Invoke(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState)
extern "C" IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate_Invoke_mCA5DBD7DB392BB9F22AF98FB50EB570B6A26AA1F (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___oldState0, ___newState1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___oldState0, ___newState1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___oldState0, ___newState1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___oldState0, ___newState1);
							else
								GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___oldState0, ___newState1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___oldState0, ___newState1);
							else
								VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___oldState0, ___newState1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___oldState0, ___newState1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___oldState0, ___newState1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___oldState0, ___newState1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___oldState0, ___newState1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___oldState0, ___newState1);
						else
							GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___oldState0, ___newState1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___oldState0, ___newState1);
						else
							VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___oldState0, ___newState1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___oldState0, ___newState1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate::BeginInvoke(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnPositionalLocatorStateChangedDelegate_BeginInvoke_m208B6244989F55ADDD858B706520C56982F3C95F (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * __this, int32_t ___oldState0, int32_t ___newState1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPositionalLocatorStateChangedDelegate_BeginInvoke_m208B6244989F55ADDD858B706520C56982F3C95F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(PositionalLocatorState_tE622489AA7DB67A92489D77CD1EF22EC2C5F0598_il2cpp_TypeInfo_var, &___oldState0);
	__d_args[1] = Box(PositionalLocatorState_tE622489AA7DB67A92489D77CD1EF22EC2C5F0598_il2cpp_TypeInfo_var, &___newState1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate_EndInvoke_mF5F268C78AC17A6EE43BF87C3905F59F0D029A7B (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.XRDevice::InvokeDeviceLoaded(System.String)
extern "C" IL2CPP_METHOD_ATTR void XRDevice_InvokeDeviceLoaded_mD5D5577A4E03D0474FAFBB2596B698B6A8B5FD11 (String_t* ___loadedDeviceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRDevice_InvokeDeviceLoaded_mD5D5577A4E03D0474FAFBB2596B698B6A8B5FD11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_0 = ((XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var))->get_deviceLoaded_0();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_1 = ((XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var))->get_deviceLoaded_0();
		String_t* L_2 = ___loadedDeviceName0;
		NullCheck(L_1);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_1, L_2, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.XR.XRDevice::.cctor()
extern "C" IL2CPP_METHOD_ATTR void XRDevice__cctor_m4FE111291FBDF43A481045CBABECF9AEC70B5EC9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRDevice__cctor_m4FE111291FBDF43A481045CBABECF9AEC70B5EC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var))->set_deviceLoaded_0((Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
