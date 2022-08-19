#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<GLTFast.Loading.IDownload>
struct TaskFactory_1_tCBF9FCA96C70B10A8C30C2231438B343A4862392;
// System.Threading.Tasks.TaskFactory`1<GLTFast.Loading.ITextureDownload>
struct TaskFactory_1_t2B0FBFC52D859E15CD61E5DD49B61030CD1FB7A7;
// System.Threading.Tasks.Task`1<GLTFast.Loading.IDownload>
struct Task_1_t2A1F1AD9044254516567D5A7EC5A34F85C85723E;
// System.Threading.Tasks.Task`1<GLTFast.Loading.ITextureDownload>
struct Task_1_tC0EF5DF8FF8AF1519325CB56B740D441F5DF4615;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// GLTFast.Loading.HttpHeader[]
struct HttpHeaderU5BU5D_t191CDBB06B539B9705C5E32B416D8CCB9902DAAB;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// GLTFast.Loading.AwaitableDownload
struct AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4;
// GLTFast.Loading.AwaitableTextureDownload
struct AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// GLTFast.Loading.CustomHeaderDownload
struct CustomHeaderDownload_tEEC2E24F7E2C774D978D74D3E96E7BB153642C9F;
// GLTFast.Loading.CustomHeaderDownloadProvider
struct CustomHeaderDownloadProvider_tF3FDCEC840894B712F33C3EB05CAFA5C8D4D72E6;
// GLTFast.Loading.CustomHeaderTextureDownload
struct CustomHeaderTextureDownload_t5DD6716F8E7829C74DF25E9CC1B7AEFFF79F1946;
// GLTFast.Loading.DefaultDownloadProvider
struct DefaultDownloadProvider_t05AC351D28EED67EC44475D8029AEAE38A8BFEF9;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C;
// GLTFast.Loading.EditUnityWebRequest
struct EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// GLTFast.Loading.IDownload
struct IDownload_tEF33D8714FAE45A868AB8B87F4000B2CDE1EB74D;
// GLTFast.Loading.ITextureDownload
struct ITextureDownload_t8F40482C3A885981FCD878FF9B0F17810D94604F;
// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// GLTFast.Loading.TextureDownloadBase
struct TextureDownloadBase_tF96FCC579EC31E145C895B919EED83C285BEC613;
// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// Unity.Mathematics.float2
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA;
// Unity.Mathematics.float3
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E;
// Unity.Mathematics.float4
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E;
// Unity.Mathematics.float4x4
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2;
// Unity.Mathematics.uint4
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9;
// GLTFast.Jobs.CachedFunction/GetFloat3Delegate
struct GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A;
// GLTFast.Jobs.CachedFunction/GetIndexDelegate
struct GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomHeaderDownload_tEEC2E24F7E2C774D978D74D3E96E7BB153642C9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomHeaderTextureDownload_t5DD6716F8E7829C74DF25E9CC1B7AEFFF79F1946_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3Float_00000178U24BurstDirectCall_t50092319CDD14765BF7431F4E51D320A54165FF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3Int16Normalized_00000180U24BurstDirectCall_tFA5B39745C3A51220BE073CB3B739E9C66A111EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3Int16_0000017BU24BurstDirectCall_t1F4D7BCF618E651E30BCD563F34C0BEDE4A6E727_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3Int8Normalized_0000017EU24BurstDirectCall_t047A5040498D48C007E3FE39693AB4DF5BD57F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3Int8_00000179U24BurstDirectCall_tBE6C0CCDAD6AE68EB667E7766930F100167CA777_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3UInt16Normalized_00000181U24BurstDirectCall_t354823D9597B56E7601C710E7FF0EC76699443CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3UInt16_0000017CU24BurstDirectCall_tD5B833469F7824865609A8C53DE0E9F5C1A1F772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3UInt32Normalized_00000182U24BurstDirectCall_tF22B27D8DFF3662DC541169C0D4A6924A31E3ED4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3UInt32_0000017DU24BurstDirectCall_t3CB8BD4C4BF47BED324EE497D4B10F5541D01771_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3UInt8Normalized_0000017FU24BurstDirectCall_t7BE29966A06AE6171EF070D0B22757DE06E64E68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3UInt8_0000017AU24BurstDirectCall_tB1F33EC6352C8E41B1A395AA3208EC38A641C39A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetIndexValueInt16_00000176U24BurstDirectCall_t82D5E7F8AE93FEB195DDD65B27C1688EF2855BAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetIndexValueInt8_00000174U24BurstDirectCall_t315C15A1921092F1F75E9400917397DD359F4EE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetIndexValueUInt16_00000175U24BurstDirectCall_t33AF078086B9C949D1F8C25BA488C5A44ED0A5FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetIndexValueUInt32_00000177U24BurstDirectCall_tDEFEE2ADE9A384E330AF1274E8954DEA1C9887E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetIndexValueUInt8_00000173U24BurstDirectCall_tA4751A7194C0ABA191550E6630C27D193282E760_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral14D53393EE7AD0543909EBF86FA28332A16C4968;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteralDC5EA26A51DC7D0B50CD6BEBDE0E9895009F502C;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A_m9F3ECDC3CDE18F5D35B4EAECC2EAAF894A4D9EDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC_mB852E5965D7EE7CCEBBAFF2DD330865CE44FD7D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA_mC0224070A97E856130B364D88BFE9AE61BD3E85C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022_mE52B95CB4F6668912AA0B7B618F375390EE5A22F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m9EE54BB46AF6EB7C3A753311850DEC6E10D88ACB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mEE5B90857BB259A57DF4F763EB0A3E6DD05152EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m97283CA7AEB7683F8BBC9DF7C7593CD4A8A46BD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mC89DEB4422114E639FC4A078E6274694C097F35F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m723F74B7B525BC7C11769CC058231E682AD26BF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m8FBA39CC881B9B2D3519F59041D3593874FD4B77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m56F62CB0DDA11F3A3C15B67FC5C841B2C45B75C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m908CBDE0964FBF5A3A8103048199E66B7C187C27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A_m052ED8BAE23144694F745F5422E0A222BE1520CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC_m7F25537AEA8C7A552E62F315978CC57002A9A036_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA_m0514C278A9208F839EC5E3314B7EE0A541793931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022_m111B3857F72DABEC17260B2007E781DAD48229E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m74A50503BF9E64BE622A0B007F22010D947F30B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mB320CD7A1C69D9300AAA1C59ADD16F81F53B671C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomHeaderDownloadProvider_RegisterHttpHeaders_m699F3B55FBACCC430AA8BE42AD451AA41DD22FEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionPointer_1_get_Invoke_m7242057110D2808F903EE4CB4C3F8B472D7DD109_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionPointer_1_get_Invoke_mEB1383E79DC392B036D20DCC59857211B815775B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct HttpHeaderU5BU5D_t191CDBB06B539B9705C5E32B416D8CCB9902DAAB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// $BurstDirectCallInitializer
struct U24BurstDirectCallInitializer_t63FC04F7CA5BA6B9B6098E994105F62B0A9321F0  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// GLTFast.Loading.AwaitableDownload
struct AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4  : public RuntimeObject
{
	// UnityEngine.Networking.UnityWebRequest GLTFast.Loading.AwaitableDownload::request
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request_2;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation GLTFast.Loading.AwaitableDownload::asynOperation
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___asynOperation_3;
};

// GLTFast.Loading.CustomHeaderDownloadProvider
struct CustomHeaderDownloadProvider_tF3FDCEC840894B712F33C3EB05CAFA5C8D4D72E6  : public RuntimeObject
{
	// GLTFast.Loading.HttpHeader[] GLTFast.Loading.CustomHeaderDownloadProvider::_headers
	HttpHeaderU5BU5D_t191CDBB06B539B9705C5E32B416D8CCB9902DAAB* ____headers_0;
};

// GLTFast.Loading.DefaultDownloadProvider
struct DefaultDownloadProvider_t05AC351D28EED67EC44475D8029AEAE38A8BFEF9  : public RuntimeObject
{
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// GLTFast.Loading.TextureDownloadBase
struct TextureDownloadBase_tF96FCC579EC31E145C895B919EED83C285BEC613  : public RuntimeObject
{
	// GLTFast.Loading.IDownload GLTFast.Loading.TextureDownloadBase::<download>k__BackingField
	RuntimeObject* ___U3CdownloadU3Ek__BackingField_0;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
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

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<GLTFast.Vertex.VBones>
struct NativeArray_1_t15E6E9438E5B73A5BFCFCADFEBF1D3D8949C6858 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Threading.Tasks.Task`1<GLTFast.Loading.IDownload>
struct Task_1_t2A1F1AD9044254516567D5A7EC5A34F85C85723E  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_38;
};

struct Task_1_t2A1F1AD9044254516567D5A7EC5A34F85C85723E_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tCBF9FCA96C70B10A8C30C2231438B343A4862392* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<GLTFast.Loading.ITextureDownload>
struct Task_1_tC0EF5DF8FF8AF1519325CB56B740D441F5DF4615  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_38;
};

struct Task_1_tC0EF5DF8FF8AF1519325CB56B740D441F5DF4615_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t2B0FBFC52D859E15CD61E5DD49B61030CD1FB7A7* ___s_defaultFactory_39;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// GLTFast.Loading.AwaitableTextureDownload
struct AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E  : public AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4
{
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

// GLTFast.Jobs.ConvertBoneJointsUInt16ToUInt32Job
struct ConvertBoneJointsUInt16ToUInt32Job_t9D7020314181601BBE96188BBD9D3F868E1DC848 
{
	// System.Byte* GLTFast.Jobs.ConvertBoneJointsUInt16ToUInt32Job::input
	uint8_t* ___input_0;
	// System.Int32 GLTFast.Jobs.ConvertBoneJointsUInt16ToUInt32Job::inputByteStride
	int32_t ___inputByteStride_1;
	// Unity.Mathematics.uint4* GLTFast.Jobs.ConvertBoneJointsUInt16ToUInt32Job::result
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* ___result_2;
	// System.Int32 GLTFast.Jobs.ConvertBoneJointsUInt16ToUInt32Job::outputByteStride
	int32_t ___outputByteStride_3;
};

// GLTFast.Jobs.ConvertBoneJointsUInt8ToUInt32Job
struct ConvertBoneJointsUInt8ToUInt32Job_t99A6AA53F9A9F7619069FF6475F473061A9E7E09 
{
	// System.Byte* GLTFast.Jobs.ConvertBoneJointsUInt8ToUInt32Job::input
	uint8_t* ___input_0;
	// System.Int32 GLTFast.Jobs.ConvertBoneJointsUInt8ToUInt32Job::inputByteStride
	int32_t ___inputByteStride_1;
	// Unity.Mathematics.uint4* GLTFast.Jobs.ConvertBoneJointsUInt8ToUInt32Job::result
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* ___result_2;
	// System.Int32 GLTFast.Jobs.ConvertBoneJointsUInt8ToUInt32Job::outputByteStride
	int32_t ___outputByteStride_3;
};

// GLTFast.Jobs.ConvertBoneWeightsFloatToFloatInterleavedJob
struct ConvertBoneWeightsFloatToFloatInterleavedJob_tAEF79FAB5B1D4784E7F75526D58D20D9DD171C7E 
{
	// System.Int32 GLTFast.Jobs.ConvertBoneWeightsFloatToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertBoneWeightsFloatToFloatInterleavedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertBoneWeightsFloatToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float4* GLTFast.Jobs.ConvertBoneWeightsFloatToFloatInterleavedJob::result
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___result_3;
};

// GLTFast.Jobs.ConvertBoneWeightsUInt16ToFloatInterleavedJob
struct ConvertBoneWeightsUInt16ToFloatInterleavedJob_tD2122991F5511EFF9705CCC01CEC7439CFBEA68C 
{
	// System.Int32 GLTFast.Jobs.ConvertBoneWeightsUInt16ToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertBoneWeightsUInt16ToFloatInterleavedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertBoneWeightsUInt16ToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float4* GLTFast.Jobs.ConvertBoneWeightsUInt16ToFloatInterleavedJob::result
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___result_3;
};

// GLTFast.Jobs.ConvertBoneWeightsUInt8ToFloatInterleavedJob
struct ConvertBoneWeightsUInt8ToFloatInterleavedJob_tBDE0CDC3869EB15579E7A2C57E8ED49ED91E06D0 
{
	// System.Int32 GLTFast.Jobs.ConvertBoneWeightsUInt8ToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertBoneWeightsUInt8ToFloatInterleavedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertBoneWeightsUInt8ToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float4* GLTFast.Jobs.ConvertBoneWeightsUInt8ToFloatInterleavedJob::result
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___result_3;
};

// GLTFast.Jobs.ConvertMatricesJob
struct ConvertMatricesJob_tDBC421DA195426DB5E3578E45C5CE296E032A936 
{
	// Unity.Mathematics.float4x4* GLTFast.Jobs.ConvertMatricesJob::input
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* ___input_0;
	// Unity.Mathematics.float4x4* GLTFast.Jobs.ConvertMatricesJob::result
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* ___result_1;
};

// GLTFast.Jobs.ConvertNormalsInt16ToFloatInterleavedNormalizedJob
struct ConvertNormalsInt16ToFloatInterleavedNormalizedJob_tA0A8A4918C402B60639A577A2AD18D5FC31800FE 
{
	// System.Int32 GLTFast.Jobs.ConvertNormalsInt16ToFloatInterleavedNormalizedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertNormalsInt16ToFloatInterleavedNormalizedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertNormalsInt16ToFloatInterleavedNormalizedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertNormalsInt16ToFloatInterleavedNormalizedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_3;
};

// GLTFast.Jobs.ConvertNormalsInt8ToFloatInterleavedNormalizedJob
struct ConvertNormalsInt8ToFloatInterleavedNormalizedJob_t23F523CF6296D3372533309219939D400FA2503B 
{
	// System.Int32 GLTFast.Jobs.ConvertNormalsInt8ToFloatInterleavedNormalizedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.SByte* GLTFast.Jobs.ConvertNormalsInt8ToFloatInterleavedNormalizedJob::input
	int8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertNormalsInt8ToFloatInterleavedNormalizedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertNormalsInt8ToFloatInterleavedNormalizedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_3;
};

// GLTFast.Jobs.ConvertPositionsInt16ToFloatInterleavedJob
struct ConvertPositionsInt16ToFloatInterleavedJob_t765ABB2C95FA8F4D0567D8A8EB3E4F397B319DFC 
{
	// System.Int32 GLTFast.Jobs.ConvertPositionsInt16ToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertPositionsInt16ToFloatInterleavedJob::input
	uint8_t* ___input_1;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertPositionsInt16ToFloatInterleavedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_2;
	// System.Int32 GLTFast.Jobs.ConvertPositionsInt16ToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_3;
};

// GLTFast.Jobs.ConvertPositionsInt8ToFloatInterleavedJob
struct ConvertPositionsInt8ToFloatInterleavedJob_t73C1CC4C3AD4D741693D686C3493D3F740BC67F8 
{
	// System.Int32 GLTFast.Jobs.ConvertPositionsInt8ToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.SByte* GLTFast.Jobs.ConvertPositionsInt8ToFloatInterleavedJob::input
	int8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertPositionsInt8ToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertPositionsInt8ToFloatInterleavedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_3;
};

// GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedJob
struct ConvertPositionsUInt16ToFloatInterleavedJob_t627B5337A0B08363B31908F9F5D818AD9BC480E9 
{
	// System.Int32 GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_3;
};

// GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedNormalizedJob
struct ConvertPositionsUInt16ToFloatInterleavedNormalizedJob_t006E9B95AB2A428D752CCBA39393B93D329399FC 
{
	// System.Int32 GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedNormalizedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedNormalizedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedNormalizedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedNormalizedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_3;
};

// GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedJob
struct ConvertPositionsUInt8ToFloatInterleavedJob_tFB5F9BA3975E8C7528FBA718E07ECA3A8869357E 
{
	// System.Int32 GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_3;
};

// GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedNormalizedJob
struct ConvertPositionsUInt8ToFloatInterleavedNormalizedJob_t3ACA0077C05CD3DF5DDDAD54D03618EE34667CDF 
{
	// System.Int32 GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedNormalizedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedNormalizedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedNormalizedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedNormalizedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_3;
};

// GLTFast.Jobs.ConvertRotationsInt16ToFloatJob
struct ConvertRotationsInt16ToFloatJob_t4824ADD453F84C9FA7BAD180E9AC962B16A83E23 
{
	// System.Int16* GLTFast.Jobs.ConvertRotationsInt16ToFloatJob::input
	int16_t* ___input_0;
	// System.Single* GLTFast.Jobs.ConvertRotationsInt16ToFloatJob::result
	float* ___result_1;
};

// GLTFast.Jobs.ConvertRotationsInt8ToFloatJob
struct ConvertRotationsInt8ToFloatJob_t64C61C5F175D373DD433661AC39516D1ACB8DB85 
{
	// System.SByte* GLTFast.Jobs.ConvertRotationsInt8ToFloatJob::input
	int8_t* ___input_0;
	// System.Single* GLTFast.Jobs.ConvertRotationsInt8ToFloatJob::result
	float* ___result_1;
};

// GLTFast.Jobs.ConvertTangentsFloatToFloatInterleavedJob
struct ConvertTangentsFloatToFloatInterleavedJob_t39DAC4951151008FC074F017DB41DEBCD435E04E 
{
	// System.Int32 GLTFast.Jobs.ConvertTangentsFloatToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertTangentsFloatToFloatInterleavedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertTangentsFloatToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float4* GLTFast.Jobs.ConvertTangentsFloatToFloatInterleavedJob::result
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___result_3;
};

// GLTFast.Jobs.ConvertTangentsInt16ToFloatInterleavedNormalizedJob
struct ConvertTangentsInt16ToFloatInterleavedNormalizedJob_t7A6A8814A9A2F7B0C0D9E30BF43BCF9E4699D7C1 
{
	// System.Int32 GLTFast.Jobs.ConvertTangentsInt16ToFloatInterleavedNormalizedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Int16* GLTFast.Jobs.ConvertTangentsInt16ToFloatInterleavedNormalizedJob::input
	int16_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertTangentsInt16ToFloatInterleavedNormalizedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float4* GLTFast.Jobs.ConvertTangentsInt16ToFloatInterleavedNormalizedJob::result
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___result_3;
};

// GLTFast.Jobs.ConvertTangentsInt8ToFloatInterleavedNormalizedJob
struct ConvertTangentsInt8ToFloatInterleavedNormalizedJob_tD3C6743F08143A90D0655D15F81810889837560E 
{
	// System.Int32 GLTFast.Jobs.ConvertTangentsInt8ToFloatInterleavedNormalizedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.SByte* GLTFast.Jobs.ConvertTangentsInt8ToFloatInterleavedNormalizedJob::input
	int8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertTangentsInt8ToFloatInterleavedNormalizedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float4* GLTFast.Jobs.ConvertTangentsInt8ToFloatInterleavedNormalizedJob::result
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___result_3;
};

// GLTFast.Jobs.ConvertUVsFloatToFloatInterleavedJob
struct ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89 
{
	// System.Int32 GLTFast.Jobs.ConvertUVsFloatToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertUVsFloatToFloatInterleavedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertUVsFloatToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float2* GLTFast.Jobs.ConvertUVsFloatToFloatInterleavedJob::result
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___result_3;
};

// GLTFast.Jobs.ConvertVector3FloatToFloatInterleavedJob
struct ConvertVector3FloatToFloatInterleavedJob_tA4088489C9D941D8B72B7F77B5C72374F50EF96E 
{
	// System.Int32 GLTFast.Jobs.ConvertVector3FloatToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertVector3FloatToFloatInterleavedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertVector3FloatToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertVector3FloatToFloatInterleavedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_3;
};

// GLTFast.Jobs.ConvertVector3Int16ToFloatInterleavedNormalizedJob
struct ConvertVector3Int16ToFloatInterleavedNormalizedJob_t19604E764DCB5ED1687B3FBA5EBD843E1EA211A4 
{
	// System.Int32 GLTFast.Jobs.ConvertVector3Int16ToFloatInterleavedNormalizedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertVector3Int16ToFloatInterleavedNormalizedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertVector3Int16ToFloatInterleavedNormalizedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertVector3Int16ToFloatInterleavedNormalizedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_3;
};

// GLTFast.Jobs.ConvertVector3Int8ToFloatInterleavedNormalizedJob
struct ConvertVector3Int8ToFloatInterleavedNormalizedJob_t101DA4EFF72D446E90CC7C4FC57A6ABFD4D9CE73 
{
	// System.Int32 GLTFast.Jobs.ConvertVector3Int8ToFloatInterleavedNormalizedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.SByte* GLTFast.Jobs.ConvertVector3Int8ToFloatInterleavedNormalizedJob::input
	int8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertVector3Int8ToFloatInterleavedNormalizedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertVector3Int8ToFloatInterleavedNormalizedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_3;
};

// GLTFast.Loading.CustomHeaderDownload
struct CustomHeaderDownload_tEEC2E24F7E2C774D978D74D3E96E7BB153642C9F  : public AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4
{
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// GLTFast.Loading.HttpHeader
struct HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975 
{
	// System.String GLTFast.Loading.HttpHeader::Key
	String_t* ___Key_0;
	// System.String GLTFast.Loading.HttpHeader::Value
	String_t* ___Value_1;
};
// Native definition for P/Invoke marshalling of GLTFast.Loading.HttpHeader
struct HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975_marshaled_pinvoke
{
	char* ___Key_0;
	char* ___Value_1;
};
// Native definition for COM marshalling of GLTFast.Loading.HttpHeader
struct HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975_marshaled_com
{
	Il2CppChar* ___Key_0;
	Il2CppChar* ___Value_1;
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

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// System.Runtime.CompilerServices.YieldAwaitable
struct YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB 
{
	union
	{
		struct
		{
		};
		uint8_t YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB__padding[1];
	};
};

// Unity.Mathematics.float2
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA 
{
	// System.Single Unity.Mathematics.float2::x
	float ___x_0;
	// System.Single Unity.Mathematics.float2::y
	float ___y_1;
};

struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_StaticFields
{
	// Unity.Mathematics.float2 Unity.Mathematics.float2::zero
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___zero_2;
};

// Unity.Mathematics.float3
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	// System.Single Unity.Mathematics.float3::x
	float ___x_0;
	// System.Single Unity.Mathematics.float3::y
	float ___y_1;
	// System.Single Unity.Mathematics.float3::z
	float ___z_2;
};

struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	// Unity.Mathematics.float3 Unity.Mathematics.float3::zero
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero_3;
};

// Unity.Mathematics.float4
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	// System.Single Unity.Mathematics.float4::x
	float ___x_0;
	// System.Single Unity.Mathematics.float4::y
	float ___y_1;
	// System.Single Unity.Mathematics.float4::z
	float ___z_2;
	// System.Single Unity.Mathematics.float4::w
	float ___w_3;
};

struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	// Unity.Mathematics.float4 Unity.Mathematics.float4::zero
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero_4;
};

// Unity.Mathematics.uint4
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 
{
	// System.UInt32 Unity.Mathematics.uint4::x
	uint32_t ___x_0;
	// System.UInt32 Unity.Mathematics.uint4::y
	uint32_t ___y_1;
	// System.UInt32 Unity.Mathematics.uint4::z
	uint32_t ___z_2;
	// System.UInt32 Unity.Mathematics.uint4::w
	uint32_t ___w_3;
};

struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9_StaticFields
{
	// Unity.Mathematics.uint4 Unity.Mathematics.uint4::zero
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___zero_4;
};

// GLTFast.Vertex.VBones/<joints>e__FixedBuffer
struct U3CjointsU3Ee__FixedBuffer_t247A255BAD6230E79187CCF28093D98E575CAF88 
{
	union
	{
		struct
		{
			// System.UInt32 GLTFast.Vertex.VBones/<joints>e__FixedBuffer::FixedElementField
			uint32_t ___FixedElementField_0;
		};
		uint8_t U3CjointsU3Ee__FixedBuffer_t247A255BAD6230E79187CCF28093D98E575CAF88__padding[16];
	};
};

// GLTFast.Vertex.VBones/<weights>e__FixedBuffer
struct U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC 
{
	union
	{
		struct
		{
			// System.Single GLTFast.Vertex.VBones/<weights>e__FixedBuffer::FixedElementField
			float ___FixedElementField_0;
		};
		uint8_t U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC__padding[16];
	};
};

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A 
{
	union
	{
		struct
		{
		};
		uint8_t YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A__padding[1];
	};
};

struct YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_StaticFields
{
	// System.Threading.WaitCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_waitCallbackRunAction
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___s_waitCallbackRunAction_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_sendOrPostCallbackRunAction
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___s_sendOrPostCallbackRunAction_1;
};

// Unity.Mathematics.math/IntFloatUnion
struct IntFloatUnion_t549256A9DD754252DD18383D9CE7EA55EBBD6D96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Mathematics.math/IntFloatUnion::intValue
			int32_t ___intValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___intValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Mathematics.math/IntFloatUnion::floatValue
			float ___floatValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatValue_1_forAlignmentOnly;
		};
	};
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.IDownload>
struct AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t2A1F1AD9044254516567D5A7EC5A34F85C85723E* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t2A1F1AD9044254516567D5A7EC5A34F85C85723E* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.ITextureDownload>
struct AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC0EF5DF8FF8AF1519325CB56B740D441F5DF4615* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC0EF5DF8FF8AF1519325CB56B740D441F5DF4615* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// Unity.Burst.FunctionPointer`1<System.Object>
struct FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetFloat3Delegate>
struct FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetIndexDelegate>
struct FunctionPointer_1_tFCAECC239124D68D3166BA882864F08C22D91C12 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
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

// GLTFast.Jobs.ConvertScalarInt16ToFloatNormalizedJob
struct ConvertScalarInt16ToFloatNormalizedJob_t6603C875EDBE5AE07207490A8A57E502A16DB55E 
{
	// System.Int16* GLTFast.Jobs.ConvertScalarInt16ToFloatNormalizedJob::input
	int16_t* ___input_0;
	// Unity.Collections.NativeArray`1<System.Single> GLTFast.Jobs.ConvertScalarInt16ToFloatNormalizedJob::result
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___result_1;
};

// GLTFast.Jobs.ConvertScalarInt8ToFloatNormalizedJob
struct ConvertScalarInt8ToFloatNormalizedJob_t6B556D50B4172D442B1DE65DAA91C80AA7AE4CA7 
{
	// System.SByte* GLTFast.Jobs.ConvertScalarInt8ToFloatNormalizedJob::input
	int8_t* ___input_0;
	// Unity.Collections.NativeArray`1<System.Single> GLTFast.Jobs.ConvertScalarInt8ToFloatNormalizedJob::result
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___result_1;
};

// GLTFast.Jobs.ConvertScalarUInt16ToFloatNormalizedJob
struct ConvertScalarUInt16ToFloatNormalizedJob_t6B5DF4E3ED469A126C33D0F26D332F148A709986 
{
	// System.UInt16* GLTFast.Jobs.ConvertScalarUInt16ToFloatNormalizedJob::input
	uint16_t* ___input_0;
	// Unity.Collections.NativeArray`1<System.Single> GLTFast.Jobs.ConvertScalarUInt16ToFloatNormalizedJob::result
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___result_1;
};

// GLTFast.Jobs.ConvertScalarUInt8ToFloatNormalizedJob
struct ConvertScalarUInt8ToFloatNormalizedJob_t06FA09713B8F1B1206754069D463957FF26027A4 
{
	// System.Byte* GLTFast.Jobs.ConvertScalarUInt8ToFloatNormalizedJob::input
	uint8_t* ___input_0;
	// Unity.Collections.NativeArray`1<System.Single> GLTFast.Jobs.ConvertScalarUInt8ToFloatNormalizedJob::result
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___result_1;
};

// GLTFast.Loading.CustomHeaderTextureDownload
struct CustomHeaderTextureDownload_t5DD6716F8E7829C74DF25E9CC1B7AEFFF79F1946  : public AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E
{
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

// GLTFast.Jobs.SortAndRenormalizeBoneWeightsJob
struct SortAndRenormalizeBoneWeightsJob_tB959456EC991805E422D7414C7E11CC70FFAE42C 
{
	// Unity.Collections.NativeArray`1<GLTFast.Vertex.VBones> GLTFast.Jobs.SortAndRenormalizeBoneWeightsJob::bones
	NativeArray_1_t15E6E9438E5B73A5BFCFCADFEBF1D3D8949C6858 ___bones_0;
	// System.Int32 GLTFast.Jobs.SortAndRenormalizeBoneWeightsJob::skinWeights
	int32_t ___skinWeights_1;
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

// GLTFast.Vertex.VBones
struct VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF 
{
	// GLTFast.Vertex.VBones/<weights>e__FixedBuffer GLTFast.Vertex.VBones::weights
	U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC ___weights_0;
	// GLTFast.Vertex.VBones/<joints>e__FixedBuffer GLTFast.Vertex.VBones::joints
	U3CjointsU3Ee__FixedBuffer_t247A255BAD6230E79187CCF28093D98E575CAF88 ___joints_1;
};

// Unity.Mathematics.float4x4
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 
{
	// Unity.Mathematics.float4 Unity.Mathematics.float4x4::c0
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c0_0;
	// Unity.Mathematics.float4 Unity.Mathematics.float4x4::c1
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c1_1;
	// Unity.Mathematics.float4 Unity.Mathematics.float4x4::c2
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c2_2;
	// Unity.Mathematics.float4 Unity.Mathematics.float4x4::c3
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c3_3;
};

struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_StaticFields
{
	// Unity.Mathematics.float4x4 Unity.Mathematics.float4x4::identity
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___identity_4;
	// Unity.Mathematics.float4x4 Unity.Mathematics.float4x4::zero
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___zero_5;
};

// GLTFast.Jobs.ConvertVector3SparseJob
struct ConvertVector3SparseJob_tB8FD7FDC4BEA76F242DD2904653AD524462B6B07 
{
	// System.Void* GLTFast.Jobs.ConvertVector3SparseJob::indexBuffer
	void* ___indexBuffer_0;
	// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetIndexDelegate> GLTFast.Jobs.ConvertVector3SparseJob::indexConverter
	FunctionPointer_1_tFCAECC239124D68D3166BA882864F08C22D91C12 ___indexConverter_1;
	// System.Int32 GLTFast.Jobs.ConvertVector3SparseJob::inputByteStride
	int32_t ___inputByteStride_2;
	// System.Void* GLTFast.Jobs.ConvertVector3SparseJob::input
	void* ___input_3;
	// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetFloat3Delegate> GLTFast.Jobs.ConvertVector3SparseJob::valueConverter
	FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A ___valueConverter_4;
	// System.Int32 GLTFast.Jobs.ConvertVector3SparseJob::outputByteStride
	int32_t ___outputByteStride_5;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertVector3SparseJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_6;
};

// UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerTexture::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
	// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::mTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___mTexture_2;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mHasTexture
	bool ___mHasTexture_3;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mNonReadable
	bool ___mNonReadable_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___mTexture_2;
	int32_t ___mHasTexture_3;
	int32_t ___mNonReadable_4;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___mTexture_2;
	int32_t ___mHasTexture_3;
	int32_t ___mNonReadable_4;
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
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

// GLTFast.Loading.CustomHeaderDownloadProvider/<Request>d__2
struct U3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022 
{
	// System.Int32 GLTFast.Loading.CustomHeaderDownloadProvider/<Request>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.IDownload> GLTFast.Loading.CustomHeaderDownloadProvider/<Request>d__2::<>t__builder
	AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652 ___U3CU3Et__builder_1;
	// System.Uri GLTFast.Loading.CustomHeaderDownloadProvider/<Request>d__2::url
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url_2;
	// GLTFast.Loading.CustomHeaderDownloadProvider GLTFast.Loading.CustomHeaderDownloadProvider/<Request>d__2::<>4__this
	CustomHeaderDownloadProvider_tF3FDCEC840894B712F33C3EB05CAFA5C8D4D72E6* ___U3CU3E4__this_3;
	// GLTFast.Loading.CustomHeaderDownload GLTFast.Loading.CustomHeaderDownloadProvider/<Request>d__2::<req>5__2
	CustomHeaderDownload_tEEC2E24F7E2C774D978D74D3E96E7BB153642C9F* ___U3CreqU3E5__2_4;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter GLTFast.Loading.CustomHeaderDownloadProvider/<Request>d__2::<>u__1
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1_5;
};

// GLTFast.Loading.CustomHeaderDownloadProvider/<RequestTexture>d__3
struct U3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC 
{
	// System.Int32 GLTFast.Loading.CustomHeaderDownloadProvider/<RequestTexture>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.ITextureDownload> GLTFast.Loading.CustomHeaderDownloadProvider/<RequestTexture>d__3::<>t__builder
	AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D ___U3CU3Et__builder_1;
	// System.Uri GLTFast.Loading.CustomHeaderDownloadProvider/<RequestTexture>d__3::url
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url_2;
	// System.Boolean GLTFast.Loading.CustomHeaderDownloadProvider/<RequestTexture>d__3::nonReadable
	bool ___nonReadable_3;
	// GLTFast.Loading.CustomHeaderDownloadProvider GLTFast.Loading.CustomHeaderDownloadProvider/<RequestTexture>d__3::<>4__this
	CustomHeaderDownloadProvider_tF3FDCEC840894B712F33C3EB05CAFA5C8D4D72E6* ___U3CU3E4__this_4;
	// GLTFast.Loading.CustomHeaderTextureDownload GLTFast.Loading.CustomHeaderDownloadProvider/<RequestTexture>d__3::<req>5__2
	CustomHeaderTextureDownload_t5DD6716F8E7829C74DF25E9CC1B7AEFFF79F1946* ___U3CreqU3E5__2_5;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter GLTFast.Loading.CustomHeaderDownloadProvider/<RequestTexture>d__3::<>u__1
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1_6;
};

// GLTFast.Loading.DefaultDownloadProvider/<Request>d__0
struct U3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA 
{
	// System.Int32 GLTFast.Loading.DefaultDownloadProvider/<Request>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.IDownload> GLTFast.Loading.DefaultDownloadProvider/<Request>d__0::<>t__builder
	AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652 ___U3CU3Et__builder_1;
	// System.Uri GLTFast.Loading.DefaultDownloadProvider/<Request>d__0::url
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url_2;
	// GLTFast.Loading.AwaitableDownload GLTFast.Loading.DefaultDownloadProvider/<Request>d__0::<req>5__2
	AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4* ___U3CreqU3E5__2_3;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter GLTFast.Loading.DefaultDownloadProvider/<Request>d__0::<>u__1
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1_4;
};

// GLTFast.Loading.DefaultDownloadProvider/<RequestTexture>d__1
struct U3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A 
{
	// System.Int32 GLTFast.Loading.DefaultDownloadProvider/<RequestTexture>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.ITextureDownload> GLTFast.Loading.DefaultDownloadProvider/<RequestTexture>d__1::<>t__builder
	AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D ___U3CU3Et__builder_1;
	// System.Uri GLTFast.Loading.DefaultDownloadProvider/<RequestTexture>d__1::url
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url_2;
	// System.Boolean GLTFast.Loading.DefaultDownloadProvider/<RequestTexture>d__1::nonReadable
	bool ___nonReadable_3;
	// GLTFast.Loading.AwaitableTextureDownload GLTFast.Loading.DefaultDownloadProvider/<RequestTexture>d__1::<req>5__2
	AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E* ___U3CreqU3E5__2_4;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter GLTFast.Loading.DefaultDownloadProvider/<RequestTexture>d__1::<>u__1
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1_5;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// GLTFast.Loading.EditUnityWebRequest
struct EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957  : public MulticastDelegate_t
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// GLTFast.Jobs.CachedFunction/GetFloat3Delegate
struct GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A  : public MulticastDelegate_t
{
};

// GLTFast.Jobs.CachedFunction/GetIndexDelegate
struct GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GLTFast.Loading.HttpHeader[]
struct HttpHeaderU5BU5D_t191CDBB06B539B9705C5E32B416D8CCB9902DAAB  : public RuntimeArray
{
	ALIGN_FIELD (8) HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975 m_Items[1];

	inline HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_1), (void*)NULL);
		#endif
	}
	inline HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_1), (void*)NULL);
		#endif
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


// T Unity.Burst.FunctionPointer`1<System.Object>::get_Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionPointer_1_get_Invoke_m3E7098A72E4D4E432490A6F99AF8749B862ACF93_gshared (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<GLTFast.Loading.CustomHeaderDownloadProvider/<Request>d__2>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022_m4E24EF217E422F3B3DDBDCCC30DE6B6D2ECA2532_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<GLTFast.Loading.CustomHeaderDownloadProvider/<RequestTexture>d__3>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC_m7908EF3A288DDE97197EF7325F3C7BAB7DF8CCDB_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,GLTFast.Loading.CustomHeaderDownloadProvider/<Request>d__2>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022_m61602B3FABF04EB212EAA46722733E70F452CF5A_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,GLTFast.Loading.CustomHeaderDownloadProvider/<RequestTexture>d__3>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC_m7B70771CFC708AFE64483A6C6CFE48A88FDDE33C_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<GLTFast.Loading.DefaultDownloadProvider/<Request>d__0>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA_mB3D13599994AA5BCC1D443E10A6D6767527E557E_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<GLTFast.Loading.DefaultDownloadProvider/<RequestTexture>d__1>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A_m7B64C8D46ED32BDCA9ABF0AD2B564BF0566BA287_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,GLTFast.Loading.DefaultDownloadProvider/<Request>d__0>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA_m053455964923175A385E9C78F452FA38E1E45FC9_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,GLTFast.Loading.DefaultDownloadProvider/<RequestTexture>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A_mEB592151C11DEA9C8C8D20998A96C115AAC1F1C0_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method) ;

// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertRotationsInt16ToFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertRotationsInt16ToFloatJob_Execute_m41CECB7413CCF307C61EA796CF4B3361051C97B0 (ConvertRotationsInt16ToFloatJob_t4824ADD453F84C9FA7BAD180E9AC962B16A83E23* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertRotationsInt8ToFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertRotationsInt8ToFloatJob_Execute_mA6EB85F5E5E8F4F91A853A5B1C8135E9859E6CCA (ConvertRotationsInt8ToFloatJob_t64C61C5F175D373DD433661AC39516D1ACB8DB85* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertUVsFloatToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertUVsFloatToFloatInterleavedJob_Execute_mD9E929AFB121B89B19C25A144D0AD667A3D06675 (ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertVector3FloatToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertVector3FloatToFloatInterleavedJob_Execute_m5E95F032521D399D507FED617C7384D08356D7FB (ConvertVector3FloatToFloatInterleavedJob_tA4088489C9D941D8B72B7F77B5C72374F50EF96E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// T Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetIndexDelegate>::get_Invoke()
inline GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* FunctionPointer_1_get_Invoke_m7242057110D2808F903EE4CB4C3F8B472D7DD109 (FunctionPointer_1_tFCAECC239124D68D3166BA882864F08C22D91C12* __this, const RuntimeMethod* method)
{
	return ((  GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* (*) (FunctionPointer_1_tFCAECC239124D68D3166BA882864F08C22D91C12*, const RuntimeMethod*))FunctionPointer_1_get_Invoke_m3E7098A72E4D4E432490A6F99AF8749B862ACF93_gshared)(__this, method);
}
// System.Int32 GLTFast.Jobs.CachedFunction/GetIndexDelegate::Invoke(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GetIndexDelegate_Invoke_m6C9994C288C8CCA276A0A99084C6C51101B93114_inline (GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* __this, void* ___baseAddress0, int32_t ___index1, const RuntimeMethod* method) ;
// T Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetFloat3Delegate>::get_Invoke()
inline GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* FunctionPointer_1_get_Invoke_mEB1383E79DC392B036D20DCC59857211B815775B (FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A* __this, const RuntimeMethod* method)
{
	return ((  GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* (*) (FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A*, const RuntimeMethod*))FunctionPointer_1_get_Invoke_m3E7098A72E4D4E432490A6F99AF8749B862ACF93_gshared)(__this, method);
}
// System.Void GLTFast.Jobs.CachedFunction/GetFloat3Delegate::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GetFloat3Delegate_Invoke_mDE2C9669A16C8D0572A2A964BE5F34F60DC3D2A1_inline (GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___destination0, void* ___src1, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertVector3SparseJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertVector3SparseJob_Execute_m99EB0773DA3913BFB10E8A58E9FF6DDDA9A1420E (ConvertVector3SparseJob_tB8FD7FDC4BEA76F242DD2904653AD524462B6B07* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertTangentsFloatToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertTangentsFloatToFloatInterleavedJob_Execute_mE9D4509FFA3E6283ADBAE4CDA5A271C1D7A5302B (ConvertTangentsFloatToFloatInterleavedJob_t39DAC4951151008FC074F017DB41DEBCD435E04E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertBoneWeightsFloatToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertBoneWeightsFloatToFloatInterleavedJob_Execute_m6F95B570783F3D338C028923AB300A5FD3231A7A (ConvertBoneWeightsFloatToFloatInterleavedJob_tAEF79FAB5B1D4784E7F75526D58D20D9DD171C7E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertBoneWeightsUInt8ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertBoneWeightsUInt8ToFloatInterleavedJob_Execute_mAFBE0A23E04E36534E1192B18D7D51F8E19A1367 (ConvertBoneWeightsUInt8ToFloatInterleavedJob_tBDE0CDC3869EB15579E7A2C57E8ED49ED91E06D0* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertBoneWeightsUInt16ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertBoneWeightsUInt16ToFloatInterleavedJob_Execute_mDBCDDC92F5D5969E975BD869C7740572433948F0 (ConvertBoneWeightsUInt16ToFloatInterleavedJob_tD2122991F5511EFF9705CCC01CEC7439CFBEA68C* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.float4::op_Division(Unity.Mathematics.float4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Division_mB4DAA5C12513CF75D56DC807B886074A85FD5C9F_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___lhs0, float ___rhs1, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.float4::op_Implicit(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Implicit_m5427E8A9BC084ACA5896A5DDED2DA6471F0619CC_inline (float ___v0, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.math::max(Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E math_max_m72846DFE0AC2EF4D93BB4840595C649384976BE7_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___x0, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___y1, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.math::normalize(Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E math_normalize_m65D494E32BA26637F4F781F54BCFB5754422FC3B_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___x0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertTangentsInt16ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertTangentsInt16ToFloatInterleavedNormalizedJob_Execute_m286EAA8F4B42D09408584BF1422716BB995B0C40 (ConvertTangentsInt16ToFloatInterleavedNormalizedJob_t7A6A8814A9A2F7B0C0D9E30BF43BCF9E4699D7C1* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertTangentsInt8ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertTangentsInt8ToFloatInterleavedNormalizedJob_Execute_mADE88D7ED4669471A1C2CBEE5E9D5588E844220F (ConvertTangentsInt8ToFloatInterleavedNormalizedJob_tD3C6743F08143A90D0655D15F81810889837560E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsUInt16ToFloatInterleavedJob_Execute_mCBA84FD3B7E48404F4C03D36F293AD0677C140C9 (ConvertPositionsUInt16ToFloatInterleavedJob_t627B5337A0B08363B31908F9F5D818AD9BC480E9* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsUInt16ToFloatInterleavedNormalizedJob_Execute_mBD36CC86BB3FDAB89F8BA8362133973AA8867057 (ConvertPositionsUInt16ToFloatInterleavedNormalizedJob_t006E9B95AB2A428D752CCBA39393B93D329399FC* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertPositionsInt16ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsInt16ToFloatInterleavedJob_Execute_m900E50141A270D195A073110C1C80C9C823E9EB7 (ConvertPositionsInt16ToFloatInterleavedJob_t765ABB2C95FA8F4D0567D8A8EB3E4F397B319DFC* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Division(Unity.Mathematics.float3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Division_m337596E152F22C0A19CD1189C6E38BC5EAB9514F_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___lhs0, float ___rhs1, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Implicit(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Implicit_m47B2AAB9681E482AB9C4CB9B1691619EB72C536B_inline (float ___v0, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.math::max(Unity.Mathematics.float3,Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_max_mEAED152166B3B2D1D6EF379FFAD18A85D52E6007_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___x0, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___y1, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertVector3Int16ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertVector3Int16ToFloatInterleavedNormalizedJob_Execute_mCFF0EA0EECC157DE60297987B407BD896369BDBC (ConvertVector3Int16ToFloatInterleavedNormalizedJob_t19604E764DCB5ED1687B3FBA5EBD843E1EA211A4* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.math::normalize(Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_normalize_m826725DC58F0CE455E3DEB3BD4808C13CBC81E25_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___x0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertNormalsInt16ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertNormalsInt16ToFloatInterleavedNormalizedJob_Execute_m4FC63CF27A20B6DE4E5FA032DBCF013A6C600EA5 (ConvertNormalsInt16ToFloatInterleavedNormalizedJob_tA0A8A4918C402B60639A577A2AD18D5FC31800FE* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertPositionsInt8ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsInt8ToFloatInterleavedJob_Execute_m4B57340BE61A8BE13CE72D076B18475579C77DD1 (ConvertPositionsInt8ToFloatInterleavedJob_t73C1CC4C3AD4D741693D686C3493D3F740BC67F8* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Implicit(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Implicit_m2D3D66A7EE86A311E60BF3C56EE34AAC6457D01D_inline (int32_t ___v0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertVector3Int8ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertVector3Int8ToFloatInterleavedNormalizedJob_Execute_mA585588C20C2C429148EA9D9895D2905EFB21E68 (ConvertVector3Int8ToFloatInterleavedNormalizedJob_t101DA4EFF72D446E90CC7C4FC57A6ABFD4D9CE73* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertNormalsInt8ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertNormalsInt8ToFloatInterleavedNormalizedJob_Execute_m32E2EF4D1456BD1152EC6E3A37E37A2717D0D691 (ConvertNormalsInt8ToFloatInterleavedNormalizedJob_t23F523CF6296D3372533309219939D400FA2503B* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsUInt8ToFloatInterleavedJob_Execute_m90B2FAABB8AC2740EF38157A138579B9C62CDE55 (ConvertPositionsUInt8ToFloatInterleavedJob_tFB5F9BA3975E8C7528FBA718E07ECA3A8869357E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsUInt8ToFloatInterleavedNormalizedJob_Execute_m3D5D499F96619525C7F7C896B326D6F94EAE5D9B (ConvertPositionsUInt8ToFloatInterleavedNormalizedJob_t3ACA0077C05CD3DF5DDDAD54D03618EE34667CDF* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.uint4::.ctor(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void uint4__ctor_m59B6A219A0285C60FCF2977679BF89C72B502008_inline (uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, uint32_t ___w3, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertBoneJointsUInt8ToUInt32Job::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertBoneJointsUInt8ToUInt32Job_Execute_mDDBFA83C15941584B08947EF93EB6D86C08C18DB (ConvertBoneJointsUInt8ToUInt32Job_t99A6AA53F9A9F7619069FF6475F473061A9E7E09* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertBoneJointsUInt16ToUInt32Job::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertBoneJointsUInt16ToUInt32Job_Execute_mE329AD446314E3BF1FD84871E85130CFD7EC4CAA (ConvertBoneJointsUInt16ToUInt32Job_t9D7020314181601BBE96188BBD9D3F868E1DC848* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.SortAndRenormalizeBoneWeightsJob::Swap(GLTFast.Vertex.VBones&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SortAndRenormalizeBoneWeightsJob_Swap_mD6DBC5F261C057AAA774BAF6DFF8ACF7B9DA5D36 (VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF* ___v0, int32_t ___a1, int32_t ___b2, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::abs(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_abs_mD6633C641692C4A0AEEFB52575D81599ACF1F7F5_inline (float ___x0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.SortAndRenormalizeBoneWeightsJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SortAndRenormalizeBoneWeightsJob_Execute_m2925332CE698666362A0658FEDC39E6CE0573B38 (SortAndRenormalizeBoneWeightsJob_tB959456EC991805E422D7414C7E11CC70FFAE42C* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertMatricesJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertMatricesJob_Execute_mD4C85FD640C63CB191E277601C20EDEE2103E9F0 (ConvertMatricesJob_tDBC421DA195426DB5E3578E45C5CE296E032A936* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_max_mF7035168A46D333C6A703B673220B115411B67C1_inline (float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertScalarInt8ToFloatNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertScalarInt8ToFloatNormalizedJob_Execute_mB9FE0B8F8EE76D480ED02D0AF9388A84A709F6CC (ConvertScalarInt8ToFloatNormalizedJob_t6B556D50B4172D442B1DE65DAA91C80AA7AE4CA7* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertScalarUInt8ToFloatNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertScalarUInt8ToFloatNormalizedJob_Execute_m2D3F7DF326D3E369F2390038FFAECBBCC6A31DBA (ConvertScalarUInt8ToFloatNormalizedJob_t06FA09713B8F1B1206754069D463957FF26027A4* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertScalarInt16ToFloatNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertScalarInt16ToFloatNormalizedJob_Execute_m13168529617730C19B7F5EEEB643F3D9FC08319B (ConvertScalarInt16ToFloatNormalizedJob_t6603C875EDBE5AE07207490A8A57E502A16DB55E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertScalarUInt16ToFloatNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertScalarUInt16ToFloatNormalizedJob_Execute_m0F027DC315CCD105C0C2D25011329546B3EE0987 (ConvertScalarUInt16ToFloatNormalizedJob_t6B5DF4E3ED469A126C33D0F26D332F148A709986* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.IDownload>::Create()
inline AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652 AsyncTaskMethodBuilder_1_Create_m9EE54BB46AF6EB7C3A753311850DEC6E10D88ACB (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.IDownload>::Start<GLTFast.Loading.CustomHeaderDownloadProvider/<Request>d__2>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022_m111B3857F72DABEC17260B2007E781DAD48229E7 (AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652* __this, U3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652*, U3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022_m4E24EF217E422F3B3DDBDCCC30DE6B6D2ECA2532_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.IDownload>::get_Task()
inline Task_1_t2A1F1AD9044254516567D5A7EC5A34F85C85723E* AsyncTaskMethodBuilder_1_get_Task_mB320CD7A1C69D9300AAA1C59ADD16F81F53B671C (AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t2A1F1AD9044254516567D5A7EC5A34F85C85723E* (*) (AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.ITextureDownload>::Create()
inline AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D AsyncTaskMethodBuilder_1_Create_mEE5B90857BB259A57DF4F763EB0A3E6DD05152EC (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.ITextureDownload>::Start<GLTFast.Loading.CustomHeaderDownloadProvider/<RequestTexture>d__3>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC_m7F25537AEA8C7A552E62F315978CC57002A9A036 (AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D* __this, U3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D*, U3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC_m7908EF3A288DDE97197EF7325F3C7BAB7DF8CCDB_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.ITextureDownload>::get_Task()
inline Task_1_tC0EF5DF8FF8AF1519325CB56B740D441F5DF4615* AsyncTaskMethodBuilder_1_get_Task_m74A50503BF9E64BE622A0B007F22010D947F30B0 (AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tC0EF5DF8FF8AF1519325CB56B740D441F5DF4615* (*) (AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void GLTFast.Loading.EditUnityWebRequest::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditUnityWebRequest__ctor_mB6619E50B3F13C642A6B600D9A3DC03BFE226004 (EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void GLTFast.Loading.CustomHeaderDownload::.ctor(System.Uri,GLTFast.Loading.EditUnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomHeaderDownload__ctor_mB6A9F1D6D63ACCEDE750B78FB85BCEF1BF893521 (CustomHeaderDownload_tEEC2E24F7E2C774D978D74D3E96E7BB153642C9F* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* ___editor1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.YieldAwaitable System.Threading.Tasks.Task::Yield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB Task_Yield_m243FF1482B112E594401BAC859F9084753C4E653 (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter System.Runtime.CompilerServices.YieldAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E (YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286 (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.IDownload>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,GLTFast.Loading.CustomHeaderDownloadProvider/<Request>d__2>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022_mE52B95CB4F6668912AA0B7B618F375390EE5A22F (AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022_m61602B3FABF04EB212EAA46722733E70F452CF5A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07 (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* __this, const RuntimeMethod* method) ;
// System.Boolean GLTFast.Loading.AwaitableDownload::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AwaitableDownload_MoveNext_mAC97429E70997F5D54D11DA37E0D4F43E2C84878 (AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.IDownload>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mC89DEB4422114E639FC4A078E6274694C097F35F (AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.IDownload>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m8FBA39CC881B9B2D3519F59041D3593874FD4B77 (AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652* __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void GLTFast.Loading.CustomHeaderDownloadProvider/<Request>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestU3Ed__2_MoveNext_mDDF9018B9DF61C2CE77447074A637D11B20E8263 (U3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.IDownload>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m908CBDE0964FBF5A3A8103048199E66B7C187C27 (AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void GLTFast.Loading.CustomHeaderDownloadProvider/<Request>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestU3Ed__2_SetStateMachine_mAE9E8AA3240A42A0BCBD6AB4847DCB306489FD24 (U3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void GLTFast.Loading.CustomHeaderTextureDownload::.ctor(System.Uri,System.Boolean,GLTFast.Loading.EditUnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomHeaderTextureDownload__ctor_mF6436A53196B01C502909532A10D4B088733B41D (CustomHeaderTextureDownload_t5DD6716F8E7829C74DF25E9CC1B7AEFFF79F1946* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, bool ___nonReadable1, EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* ___editor2, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.ITextureDownload>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,GLTFast.Loading.CustomHeaderDownloadProvider/<RequestTexture>d__3>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC_mB852E5965D7EE7CCEBBAFF2DD330865CE44FD7D3 (AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC_m7B70771CFC708AFE64483A6C6CFE48A88FDDE33C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.ITextureDownload>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m97283CA7AEB7683F8BBC9DF7C7593CD4A8A46BD1 (AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.ITextureDownload>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m723F74B7B525BC7C11769CC058231E682AD26BF5 (AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D* __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void GLTFast.Loading.CustomHeaderDownloadProvider/<RequestTexture>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestTextureU3Ed__3_MoveNext_m4381CE0EFEDB674C1570EFEF8D2D014B8518FA26 (U3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.ITextureDownload>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m56F62CB0DDA11F3A3C15B67FC5C841B2C45B75C5 (AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void GLTFast.Loading.CustomHeaderDownloadProvider/<RequestTexture>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestTextureU3Ed__3_SetStateMachine_m1561695906A7821EDC106B033D336DBB1A029C1D (U3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void GLTFast.Loading.AwaitableDownload::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaitableDownload__ctor_mCAD68FD1F80ED7AD61B8EB8C9EDD51BC855827BF (AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_mDC47D7545DA4A2EC763C81C0A149E39CD059BF38 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri0, const RuntimeMethod* method) ;
// System.Void GLTFast.Loading.EditUnityWebRequest::Invoke(UnityEngine.Networking.UnityWebRequest)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_inline (EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void GLTFast.Loading.AwaitableTextureDownload::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaitableTextureDownload__ctor_m02724A9DA0D8C4ED89C0727B990B98509FC20AEB (AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest GLTFast.Loading.AwaitableTextureDownload::CreateRequest(System.Uri,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* AwaitableTextureDownload_CreateRequest_m84D6E7A8D05A91C940D9FF391D65B0A80DD80E83 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, bool ___nonReadable1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.IDownload>::Start<GLTFast.Loading.DefaultDownloadProvider/<Request>d__0>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA_m0514C278A9208F839EC5E3314B7EE0A541793931 (AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652* __this, U3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652*, U3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA_mB3D13599994AA5BCC1D443E10A6D6767527E557E_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.ITextureDownload>::Start<GLTFast.Loading.DefaultDownloadProvider/<RequestTexture>d__1>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A_m052ED8BAE23144694F745F5422E0A222BE1520CC (AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D* __this, U3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D*, U3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A_m7B64C8D46ED32BDCA9ABF0AD2B564BF0566BA287_gshared)(__this, ___stateMachine0, method);
}
// System.Void GLTFast.Loading.AwaitableDownload::.ctor(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaitableDownload__ctor_m5A621A527DC5DC3F0CD6491DA6E7681515EF800D (AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.IDownload>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,GLTFast.Loading.DefaultDownloadProvider/<Request>d__0>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA_mC0224070A97E856130B364D88BFE9AE61BD3E85C (AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA_m053455964923175A385E9C78F452FA38E1E45FC9_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void GLTFast.Loading.DefaultDownloadProvider/<Request>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestU3Ed__0_MoveNext_mB6CCFED92467137BCBE1A1E6F2C776FFA2ADFD9B (U3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA* __this, const RuntimeMethod* method) ;
// System.Void GLTFast.Loading.DefaultDownloadProvider/<Request>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestU3Ed__0_SetStateMachine_m38530867B1400F6C1D4C589540115DBA56325F31 (U3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void GLTFast.Loading.AwaitableTextureDownload::.ctor(System.Uri,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaitableTextureDownload__ctor_m8B28B44F3044C9ED414A4101263708E23DE77805 (AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, bool ___nonReadable1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GLTFast.Loading.ITextureDownload>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,GLTFast.Loading.DefaultDownloadProvider/<RequestTexture>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A_m9F3ECDC3CDE18F5D35B4EAECC2EAAF894A4D9EDB (AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A_mEB592151C11DEA9C8C8D20998A96C115AAC1F1C0_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void GLTFast.Loading.DefaultDownloadProvider/<RequestTexture>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestTextureU3Ed__1_MoveNext_m467120773996656AF90C31E921F0633FBFB390DD (U3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A* __this, const RuntimeMethod* method) ;
// System.Void GLTFast.Loading.DefaultDownloadProvider/<RequestTexture>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestTextureU3Ed__1_SetStateMachine_m072425C6814ACF21A4C2B7335E04CCE7A2DFA15F (U3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void GLTFast.Loading.AwaitableDownload::Init(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaitableDownload_Init_m83603A60BE2DFB9A77E3B760DFA36B7C804A3F01 (AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Boolean GLTFast.Loading.AwaitableDownload::get_success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AwaitableDownload_get_success_m2BF38A29FBEA99C8856789BAFCD885B01277991B (AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::GetResponseHeader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetResponseHeader_m9AC0E1BB43CE0469BC7FE865B3D9B2C4198DDF03 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, bool, const RuntimeMethod*))Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared)(__this, ___value0, method);
}
// System.Void GLTFast.Loading.AwaitableTextureDownload::Init(System.Uri,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaitableTextureDownload_Init_mD0E1517D2A6B9C671CF5161BD28A14BFDAE3D683 (AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, bool ___nonReadable1, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.Uri,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestTexture_GetTexture_m3B98DCD75466F014E65BE779EE52EF8E7350323A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri0, bool ___nonReadable1, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DownloadHandlerTexture_get_texture_m170B5539995EB5984E98E426F52983589F7BEB7C (DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C* __this, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_00000173$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt8_00000173U24BurstDirectCall_Initialize_m4D5E7B95DF5433AA2AA24C9D1D4D16A5FB392A22 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_00000174$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueInt8_00000174U24BurstDirectCall_Initialize_m96550465C26E3C9CC031CC0C7DD0AE4BF10BCBD8 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_00000175$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt16_00000175U24BurstDirectCall_Initialize_m27BE93177367DE61A06903898F4B7501E145BBC6 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_00000176$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueInt16_00000176U24BurstDirectCall_Initialize_mD3C95057C6CBCD6EC5DA4FC18C9205FDA30EFD4C (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_00000177$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt32_00000177U24BurstDirectCall_Initialize_mDD4AA2505292A801B779F5F22627E50867B92688 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_00000178$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Float_00000178U24BurstDirectCall_Initialize_mECF49E0FBF399D47E9D09F5051F726BFC4F6417A (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_00000179$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8_00000179U24BurstDirectCall_Initialize_m3896B8F9C7E69A6DF09CEFACE8F1E95B9D7760F7 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_0000017A$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8_0000017AU24BurstDirectCall_Initialize_mA271DDD0B5370027B9FC52D9DA1694B22440FA73 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_0000017B$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16_0000017BU24BurstDirectCall_Initialize_mB52740F634ED58519694FAA2E5E6D1D473E0E888 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_0000017C$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16_0000017CU24BurstDirectCall_Initialize_mA6AF583AC118ACF7D4A47DC6D656D669916AB843 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_0000017D$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32_0000017DU24BurstDirectCall_Initialize_m38D7C9BE850D90495ABBFA3B7474E6368B11BBD9 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_0000017E$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8Normalized_0000017EU24BurstDirectCall_Initialize_mF1FDE540B10F3F04962068AF02E76149126201F4 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_0000017F$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8Normalized_0000017FU24BurstDirectCall_Initialize_mF42A963CC1F09EDB2E165CCA46E19408203EB926 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_00000180$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16Normalized_00000180U24BurstDirectCall_Initialize_mD7572951198D26549152E000CA073AF40902E61B (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_00000181$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16Normalized_00000181U24BurstDirectCall_Initialize_m52C126AB788E2FA5A52F577597D9FC036D4690E8 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_00000182$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32Normalized_00000182U24BurstDirectCall_Initialize_mBF0698BE3AB01863D3DBD08AA1D450CA46C6921A (const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float4::.ctor(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_m103F8D391212FB2B0F01D09F7E9CCE4BDF0C7839_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___v0, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::dot(Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_mAE7770D5D8ABCDC54704D1A1CE0D484136C5586C_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___x0, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___y1, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::rsqrt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_rsqrt_mB695A0575E7C8F937B0E12804508B0F489F55997_inline (float ___x0, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.float4::op_Multiply(System.Single,Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Multiply_m4322D91DC960C16DFB4B645FF997F6A57821E41D_inline (float ___lhs0, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___rhs1, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float3::.ctor(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_m777F109CF7EBEEC78FAE5DBE52E4498CFA65E8C4_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___v0, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::dot(Unity.Mathematics.float3,Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_mFC6E6AC5C12A0802A91EB7F9A897802DFF03C44D_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___x0, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___y1, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Multiply(System.Single,Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_mB08DA9B217A0DA39BABCE64FFE69BEA67D37D04F_inline (float ___lhs0, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___rhs1, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float3::.ctor(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_m131368AA87C134F64DD0B5B8684C1345BEC6EE59_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, int32_t ___v0, const RuntimeMethod* method) ;
// System.UInt32 Unity.Mathematics.math::asuint(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_asuint_mE2534002331AC55DC7BC15E103D3CB7A4465F076_inline (float ___x0, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::asfloat(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_asfloat_m6001AEADA0D3BB53A5BE113CE7052AB6D96FAABA_inline (uint32_t ___x0, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline (float ___f0, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::sqrt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_sqrt_mD0D6FA27E6D4959A0D4A823FFD3A9DA396542875_inline (float ___x0, const RuntimeMethod* method) ;
// System.Int32 Unity.Mathematics.math::asint(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_asint_mC1D3880A25BCA51C3FF63FAC83C544CEF5389891_inline (float ___x0, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::asfloat(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_asfloat_m3924686271257D993098B811C554E07F35A5519B_inline (int32_t ___x0, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::SingleToInt32Bits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_inline (float ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertRotationsInt16ToFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertRotationsInt16ToFloatJob_Execute_m41CECB7413CCF307C61EA796CF4B3361051C97B0 (ConvertRotationsInt16ToFloatJob_t4824ADD453F84C9FA7BAD180E9AC962B16A83E23* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		// result[i*4] = Mathf.Max( input[i*4] / (float) short.MaxValue, -1f );
		float* L_0 = __this->___result_1;
		int32_t L_1 = ___i0;
		int16_t* L_2 = __this->___input_0;
		int32_t L_3 = ___i0;
		int32_t L_4 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_3, 4))), 2)))));
		float L_5;
		L_5 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)(((float)L_4)/(32767.0f))), (-1.0f), NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_1, 4))), 4))))) = (float)L_5;
		// result[i*4+1] = -Mathf.Max( input[i*4+1] / (float) short.MaxValue, -1f );
		float* L_6 = __this->___result_1;
		int32_t L_7 = ___i0;
		int16_t* L_8 = __this->___input_0;
		int32_t L_9 = ___i0;
		int32_t L_10 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_9, 4)), 1))), 2)))));
		float L_11;
		L_11 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)(((float)L_10)/(32767.0f))), (-1.0f), NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, 4)), 1))), 4))))) = (float)((-L_11));
		// result[i*4+2] = -Mathf.Max( input[i*4+2] / (float) short.MaxValue, -1f );
		float* L_12 = __this->___result_1;
		int32_t L_13 = ___i0;
		int16_t* L_14 = __this->___input_0;
		int32_t L_15 = ___i0;
		int32_t L_16 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_15, 4)), 2))), 2)))));
		float L_17;
		L_17 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)(((float)L_16)/(32767.0f))), (-1.0f), NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_13, 4)), 2))), 4))))) = (float)((-L_17));
		// result[i*4+3] = Mathf.Max( input[i*4+3] / (float) short.MaxValue, -1f );
		float* L_18 = __this->___result_1;
		int32_t L_19 = ___i0;
		int16_t* L_20 = __this->___input_0;
		int32_t L_21 = ___i0;
		int32_t L_22 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_21, 4)), 3))), 2)))));
		float L_23;
		L_23 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)(((float)L_22)/(32767.0f))), (-1.0f), NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_19, 4)), 3))), 4))))) = (float)L_23;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertRotationsInt16ToFloatJob_Execute_m41CECB7413CCF307C61EA796CF4B3361051C97B0_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertRotationsInt16ToFloatJob_t4824ADD453F84C9FA7BAD180E9AC962B16A83E23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertRotationsInt16ToFloatJob_t4824ADD453F84C9FA7BAD180E9AC962B16A83E23*>(__this + _offset);
	ConvertRotationsInt16ToFloatJob_Execute_m41CECB7413CCF307C61EA796CF4B3361051C97B0(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertRotationsInt8ToFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertRotationsInt8ToFloatJob_Execute_mA6EB85F5E5E8F4F91A853A5B1C8135E9859E6CCA (ConvertRotationsInt8ToFloatJob_t64C61C5F175D373DD433661AC39516D1ACB8DB85* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		// result[i*4] = Mathf.Max( input[i*4] / 127f, -1f );
		float* L_0 = __this->___result_1;
		int32_t L_1 = ___i0;
		int8_t* L_2 = __this->___input_0;
		int32_t L_3 = ___i0;
		int32_t L_4 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_2, ((int32_t)il2cpp_codegen_multiply(L_3, 4)))));
		float L_5;
		L_5 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)(((float)L_4)/(127.0f))), (-1.0f), NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_1, 4))), 4))))) = (float)L_5;
		// result[i*4+1] = -Mathf.Max( input[i*4+1] / 127f, -1f );
		float* L_6 = __this->___result_1;
		int32_t L_7 = ___i0;
		int8_t* L_8 = __this->___input_0;
		int32_t L_9 = ___i0;
		int32_t L_10 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_8, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_9, 4)), 1)))));
		float L_11;
		L_11 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)(((float)L_10)/(127.0f))), (-1.0f), NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, 4)), 1))), 4))))) = (float)((-L_11));
		// result[i*4+2] = -Mathf.Max( input[i*4+2] / 127f, -1f );
		float* L_12 = __this->___result_1;
		int32_t L_13 = ___i0;
		int8_t* L_14 = __this->___input_0;
		int32_t L_15 = ___i0;
		int32_t L_16 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_14, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_15, 4)), 2)))));
		float L_17;
		L_17 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)(((float)L_16)/(127.0f))), (-1.0f), NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_13, 4)), 2))), 4))))) = (float)((-L_17));
		// result[i*4+3] = Mathf.Max( input[i*4+3] / 127f, -1f );
		float* L_18 = __this->___result_1;
		int32_t L_19 = ___i0;
		int8_t* L_20 = __this->___input_0;
		int32_t L_21 = ___i0;
		int32_t L_22 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_20, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_21, 4)), 3)))));
		float L_23;
		L_23 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)(((float)L_22)/(127.0f))), (-1.0f), NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_19, 4)), 3))), 4))))) = (float)L_23;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertRotationsInt8ToFloatJob_Execute_mA6EB85F5E5E8F4F91A853A5B1C8135E9859E6CCA_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertRotationsInt8ToFloatJob_t64C61C5F175D373DD433661AC39516D1ACB8DB85* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertRotationsInt8ToFloatJob_t64C61C5F175D373DD433661AC39516D1ACB8DB85*>(__this + _offset);
	ConvertRotationsInt8ToFloatJob_Execute_mA6EB85F5E5E8F4F91A853A5B1C8135E9859E6CCA(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertUVsFloatToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertUVsFloatToFloatInterleavedJob_Execute_mD9E929AFB121B89B19C25A144D0AD667A3D06675 (ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* V_0 = NULL;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* V_1 = NULL;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var resultV = (float2*) (((byte*)result) + (i*outputByteStride));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_0 = __this->___result_3;
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = (float2*) (input + (i*inputByteStride));
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___i0;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// var tmp = *off;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_6 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_7 = (*(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)L_6);
		V_2 = L_7;
		// tmp.y = 1 - tmp.y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_8 = V_2;
		float L_9 = L_8.___y_1;
		(&V_2)->___y_1 = ((float)il2cpp_codegen_subtract((1.0f), L_9));
		// *resultV = tmp;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_10 = V_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_11 = V_2;
		*(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)L_10 = L_11;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertUVsFloatToFloatInterleavedJob_Execute_mD9E929AFB121B89B19C25A144D0AD667A3D06675_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89*>(__this + _offset);
	ConvertUVsFloatToFloatInterleavedJob_Execute_mD9E929AFB121B89B19C25A144D0AD667A3D06675(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertVector3FloatToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertVector3FloatToFloatInterleavedJob_Execute_m5E95F032521D399D507FED617C7384D08356D7FB (ConvertVector3FloatToFloatInterleavedJob_tA4088489C9D941D8B72B7F77B5C72374F50EF96E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_1 = NULL;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var resultV = (float3*) (((byte*)result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___result_3;
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = (float3*) (input + i*inputByteStride);
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___i0;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// var tmp = *off;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = V_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_6);
		V_2 = L_7;
		// tmp.x *= -1;
		float* L_8 = (&(&V_2)->___x_0);
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		*((float*)L_9) = (float)((float)il2cpp_codegen_multiply(L_10, (-1.0f)));
		// *resultV = tmp;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_11 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12 = V_2;
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_11 = L_12;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertVector3FloatToFloatInterleavedJob_Execute_m5E95F032521D399D507FED617C7384D08356D7FB_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertVector3FloatToFloatInterleavedJob_tA4088489C9D941D8B72B7F77B5C72374F50EF96E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertVector3FloatToFloatInterleavedJob_tA4088489C9D941D8B72B7F77B5C72374F50EF96E*>(__this + _offset);
	ConvertVector3FloatToFloatInterleavedJob_Execute_m5E95F032521D399D507FED617C7384D08356D7FB(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertVector3SparseJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertVector3SparseJob_Execute_m99EB0773DA3913BFB10E8A58E9FF6DDDA9A1420E (ConvertVector3SparseJob_tB8FD7FDC4BEA76F242DD2904653AD524462B6B07* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_m7242057110D2808F903EE4CB4C3F8B472D7DD109_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_mEB1383E79DC392B036D20DCC59857211B815775B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_1 = NULL;
	{
		// var index = indexConverter.Invoke(indexBuffer,i);
		FunctionPointer_1_tFCAECC239124D68D3166BA882864F08C22D91C12* L_0 = (&__this->___indexConverter_1);
		GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* L_1;
		L_1 = FunctionPointer_1_get_Invoke_m7242057110D2808F903EE4CB4C3F8B472D7DD109(L_0, FunctionPointer_1_get_Invoke_m7242057110D2808F903EE4CB4C3F8B472D7DD109_RuntimeMethod_var);
		void* L_2 = __this->___indexBuffer_0;
		int32_t L_3 = ___i0;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = GetIndexDelegate_Invoke_m6C9994C288C8CCA276A0A99084C6C51101B93114_inline(L_1, L_2, L_3, NULL);
		V_0 = L_4;
		// var resultV = (float3*) (((byte*)result) + (index*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_5 = __this->___result_6;
		int32_t L_6 = V_0;
		int32_t L_7 = __this->___outputByteStride_5;
		V_1 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_5, ((int32_t)il2cpp_codegen_multiply(L_6, L_7))));
		// valueConverter.Invoke(resultV, (byte*)input + i*inputByteStride);
		FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A* L_8 = (&__this->___valueConverter_4);
		GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* L_9;
		L_9 = FunctionPointer_1_get_Invoke_mEB1383E79DC392B036D20DCC59857211B815775B(L_8, FunctionPointer_1_get_Invoke_mEB1383E79DC392B036D20DCC59857211B815775B_RuntimeMethod_var);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_10 = V_1;
		void* L_11 = __this->___input_3;
		int32_t L_12 = ___i0;
		int32_t L_13 = __this->___inputByteStride_2;
		NullCheck(L_9);
		GetFloat3Delegate_Invoke_mDE2C9669A16C8D0572A2A964BE5F34F60DC3D2A1_inline(L_9, L_10, ((void*)il2cpp_codegen_add((intptr_t)L_11, ((int32_t)il2cpp_codegen_multiply(L_12, L_13)))), NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertVector3SparseJob_Execute_m99EB0773DA3913BFB10E8A58E9FF6DDDA9A1420E_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertVector3SparseJob_tB8FD7FDC4BEA76F242DD2904653AD524462B6B07* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertVector3SparseJob_tB8FD7FDC4BEA76F242DD2904653AD524462B6B07*>(__this + _offset);
	ConvertVector3SparseJob_Execute_m99EB0773DA3913BFB10E8A58E9FF6DDDA9A1420E(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertTangentsFloatToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertTangentsFloatToFloatInterleavedJob_Execute_mE9D4509FFA3E6283ADBAE4CDA5A271C1D7A5302B (ConvertTangentsFloatToFloatInterleavedJob_t39DAC4951151008FC074F017DB41DEBCD435E04E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* V_0 = NULL;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float4* resultV = (float4*) (((byte*)result) + (i*outputByteStride));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = __this->___result_3;
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// byte* off = input + (i*inputByteStride);
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___i0;
		int32_t L_5 = __this->___inputByteStride_0;
		// var tmp = *((float4*)off);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = (*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5)))));
		V_1 = L_6;
		// tmp.z *= -1;
		float* L_7 = (&(&V_1)->___z_2);
		float* L_8 = L_7;
		float L_9 = *((float*)L_8);
		*((float*)L_8) = (float)((float)il2cpp_codegen_multiply(L_9, (-1.0f)));
		// *resultV = tmp;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_10 = V_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_11 = V_1;
		*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)L_10 = L_11;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertTangentsFloatToFloatInterleavedJob_Execute_mE9D4509FFA3E6283ADBAE4CDA5A271C1D7A5302B_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertTangentsFloatToFloatInterleavedJob_t39DAC4951151008FC074F017DB41DEBCD435E04E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertTangentsFloatToFloatInterleavedJob_t39DAC4951151008FC074F017DB41DEBCD435E04E*>(__this + _offset);
	ConvertTangentsFloatToFloatInterleavedJob_Execute_mE9D4509FFA3E6283ADBAE4CDA5A271C1D7A5302B(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertBoneWeightsFloatToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertBoneWeightsFloatToFloatInterleavedJob_Execute_m6F95B570783F3D338C028923AB300A5FD3231A7A (ConvertBoneWeightsFloatToFloatInterleavedJob_tAEF79FAB5B1D4784E7F75526D58D20D9DD171C7E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		// var resultV = (float4*) (((byte*)result) + (i*outputByteStride));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = __this->___result_3;
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = input + (i*inputByteStride);
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___i0;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = *((float4*)off);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_6 = V_0;
		uint8_t* L_7 = V_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8 = (*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)L_7);
		*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)L_6 = L_8;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertBoneWeightsFloatToFloatInterleavedJob_Execute_m6F95B570783F3D338C028923AB300A5FD3231A7A_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertBoneWeightsFloatToFloatInterleavedJob_tAEF79FAB5B1D4784E7F75526D58D20D9DD171C7E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertBoneWeightsFloatToFloatInterleavedJob_tAEF79FAB5B1D4784E7F75526D58D20D9DD171C7E*>(__this + _offset);
	ConvertBoneWeightsFloatToFloatInterleavedJob_Execute_m6F95B570783F3D338C028923AB300A5FD3231A7A(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertBoneWeightsUInt8ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertBoneWeightsUInt8ToFloatInterleavedJob_Execute_mAFBE0A23E04E36534E1192B18D7D51F8E19A1367 (ConvertBoneWeightsUInt8ToFloatInterleavedJob_tBDE0CDC3869EB15579E7A2C57E8ED49ED91E06D0* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		// var resultV = (float4*) (((byte*)result) + (i*outputByteStride));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = __this->___result_3;
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = input + (i*inputByteStride);
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___i0;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new float4(
		//     off[0] / 255f,
		//     off[1] / 255f,
		//     off[2] / 255f,
		//     off[3] / 255f
		//     );
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_6 = V_0;
		uint8_t* L_7 = V_1;
		int32_t L_8 = *((uint8_t*)L_7);
		uint8_t* L_9 = V_1;
		int32_t L_10 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, 1)));
		uint8_t* L_11 = V_1;
		int32_t L_12 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, 2)));
		uint8_t* L_13 = V_1;
		int32_t L_14 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, 3)));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_15;
		memset((&L_15), 0, sizeof(L_15));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_15), ((float)(((float)L_8)/(255.0f))), ((float)(((float)L_10)/(255.0f))), ((float)(((float)L_12)/(255.0f))), ((float)(((float)L_14)/(255.0f))), /*hidden argument*/NULL);
		*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)L_6 = L_15;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertBoneWeightsUInt8ToFloatInterleavedJob_Execute_mAFBE0A23E04E36534E1192B18D7D51F8E19A1367_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertBoneWeightsUInt8ToFloatInterleavedJob_tBDE0CDC3869EB15579E7A2C57E8ED49ED91E06D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertBoneWeightsUInt8ToFloatInterleavedJob_tBDE0CDC3869EB15579E7A2C57E8ED49ED91E06D0*>(__this + _offset);
	ConvertBoneWeightsUInt8ToFloatInterleavedJob_Execute_mAFBE0A23E04E36534E1192B18D7D51F8E19A1367(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertBoneWeightsUInt16ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertBoneWeightsUInt16ToFloatInterleavedJob_Execute_mDBCDDC92F5D5969E975BD869C7740572433948F0 (ConvertBoneWeightsUInt16ToFloatInterleavedJob_tD2122991F5511EFF9705CCC01CEC7439CFBEA68C* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* V_0 = NULL;
	uint16_t* V_1 = NULL;
	{
		// var resultV = (float4*) (((byte*)result) + (i*outputByteStride));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = __this->___result_3;
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = (ushort*) input + i*inputByteStride;
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___i0;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = (uint16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, L_5))), 2))));
		// *resultV = new float4(
		//     off[0] / (float) ushort.MaxValue,
		//     off[1] / (float) ushort.MaxValue,
		//     off[2] / (float) ushort.MaxValue,
		//     off[3] / (float) ushort.MaxValue
		//     );
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_6 = V_0;
		uint16_t* L_7 = V_1;
		int32_t L_8 = *((uint16_t*)L_7);
		uint16_t* L_9 = V_1;
		int32_t L_10 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_9, 2)));
		uint16_t* L_11 = V_1;
		int32_t L_12 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		uint16_t* L_13 = V_1;
		int32_t L_14 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 2)))));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_15;
		memset((&L_15), 0, sizeof(L_15));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_15), ((float)(((float)L_8)/(65535.0f))), ((float)(((float)L_10)/(65535.0f))), ((float)(((float)L_12)/(65535.0f))), ((float)(((float)L_14)/(65535.0f))), /*hidden argument*/NULL);
		*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)L_6 = L_15;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertBoneWeightsUInt16ToFloatInterleavedJob_Execute_mDBCDDC92F5D5969E975BD869C7740572433948F0_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertBoneWeightsUInt16ToFloatInterleavedJob_tD2122991F5511EFF9705CCC01CEC7439CFBEA68C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertBoneWeightsUInt16ToFloatInterleavedJob_tD2122991F5511EFF9705CCC01CEC7439CFBEA68C*>(__this + _offset);
	ConvertBoneWeightsUInt16ToFloatInterleavedJob_Execute_mDBCDDC92F5D5969E975BD869C7740572433948F0(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertTangentsInt16ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertTangentsInt16ToFloatInterleavedNormalizedJob_Execute_m286EAA8F4B42D09408584BF1422716BB995B0C40 (ConvertTangentsInt16ToFloatInterleavedNormalizedJob_t7A6A8814A9A2F7B0C0D9E30BF43BCF9E4699D7C1* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* V_0 = NULL;
	int16_t* V_1 = NULL;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var resultV = (float4*) (((byte*)result) + (i*outputByteStride));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = __this->___result_3;
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = (short*) (((byte*)input) + (i*inputByteStride));
		int16_t* L_3 = __this->___input_1;
		int32_t L_4 = ___i0;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// var tmp = new float4(off[0],off[1],off[2],off[3]) / short.MaxValue;
		int16_t* L_6 = V_1;
		int32_t L_7 = *((int16_t*)L_6);
		int16_t* L_8 = V_1;
		int32_t L_9 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_8, 2)));
		int16_t* L_10 = V_1;
		int32_t L_11 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		int16_t* L_12 = V_1;
		int32_t L_13 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 2)))));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14;
		memset((&L_14), 0, sizeof(L_14));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_14), ((float)L_7), ((float)L_9), ((float)L_11), ((float)L_13), /*hidden argument*/NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_15;
		L_15 = float4_op_Division_mB4DAA5C12513CF75D56DC807B886074A85FD5C9F_inline(L_14, (32767.0f), NULL);
		// var tmp2 = max(tmp, -1f);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16;
		L_16 = float4_op_Implicit_m5427E8A9BC084ACA5896A5DDED2DA6471F0619CC_inline((-1.0f), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_17;
		L_17 = math_max_m72846DFE0AC2EF4D93BB4840595C649384976BE7_inline(L_15, L_16, NULL);
		V_2 = L_17;
		// tmp2.z *= -1;
		float* L_18 = (&(&V_2)->___z_2);
		float* L_19 = L_18;
		float L_20 = *((float*)L_19);
		*((float*)L_19) = (float)((float)il2cpp_codegen_multiply(L_20, (-1.0f)));
		// *resultV = normalize(tmp2);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_21 = V_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_22 = V_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_23;
		L_23 = math_normalize_m65D494E32BA26637F4F781F54BCFB5754422FC3B_inline(L_22, NULL);
		*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)L_21 = L_23;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertTangentsInt16ToFloatInterleavedNormalizedJob_Execute_m286EAA8F4B42D09408584BF1422716BB995B0C40_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertTangentsInt16ToFloatInterleavedNormalizedJob_t7A6A8814A9A2F7B0C0D9E30BF43BCF9E4699D7C1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertTangentsInt16ToFloatInterleavedNormalizedJob_t7A6A8814A9A2F7B0C0D9E30BF43BCF9E4699D7C1*>(__this + _offset);
	ConvertTangentsInt16ToFloatInterleavedNormalizedJob_Execute_m286EAA8F4B42D09408584BF1422716BB995B0C40(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertTangentsInt8ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertTangentsInt8ToFloatInterleavedNormalizedJob_Execute_mADE88D7ED4669471A1C2CBEE5E9D5588E844220F (ConvertTangentsInt8ToFloatInterleavedNormalizedJob_tD3C6743F08143A90D0655D15F81810889837560E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* V_0 = NULL;
	int8_t* V_1 = NULL;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var resultV = (float4*) (((byte*)result) + (i*outputByteStride));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = __this->___result_3;
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = input + (i*inputByteStride);
		int8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___i0;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// var tmp = new float4(off[0],off[1],off[2],off[3]) / 127f;
		int8_t* L_6 = V_1;
		int32_t L_7 = *((int8_t*)L_6);
		int8_t* L_8 = V_1;
		int32_t L_9 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_8, 1)));
		int8_t* L_10 = V_1;
		int32_t L_11 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_10, 2)));
		int8_t* L_12 = V_1;
		int32_t L_13 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_12, 3)));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14;
		memset((&L_14), 0, sizeof(L_14));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_14), ((float)L_7), ((float)L_9), ((float)L_11), ((float)L_13), /*hidden argument*/NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_15;
		L_15 = float4_op_Division_mB4DAA5C12513CF75D56DC807B886074A85FD5C9F_inline(L_14, (127.0f), NULL);
		// var tmp2 = max(tmp, -1f);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16;
		L_16 = float4_op_Implicit_m5427E8A9BC084ACA5896A5DDED2DA6471F0619CC_inline((-1.0f), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_17;
		L_17 = math_max_m72846DFE0AC2EF4D93BB4840595C649384976BE7_inline(L_15, L_16, NULL);
		V_2 = L_17;
		// tmp2.z *= -1;
		float* L_18 = (&(&V_2)->___z_2);
		float* L_19 = L_18;
		float L_20 = *((float*)L_19);
		*((float*)L_19) = (float)((float)il2cpp_codegen_multiply(L_20, (-1.0f)));
		// *resultV = normalize(tmp2);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_21 = V_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_22 = V_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_23;
		L_23 = math_normalize_m65D494E32BA26637F4F781F54BCFB5754422FC3B_inline(L_22, NULL);
		*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)L_21 = L_23;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertTangentsInt8ToFloatInterleavedNormalizedJob_Execute_mADE88D7ED4669471A1C2CBEE5E9D5588E844220F_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertTangentsInt8ToFloatInterleavedNormalizedJob_tD3C6743F08143A90D0655D15F81810889837560E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertTangentsInt8ToFloatInterleavedNormalizedJob_tD3C6743F08143A90D0655D15F81810889837560E*>(__this + _offset);
	ConvertTangentsInt8ToFloatInterleavedNormalizedJob_Execute_mADE88D7ED4669471A1C2CBEE5E9D5588E844220F(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsUInt16ToFloatInterleavedJob_Execute_mCBA84FD3B7E48404F4C03D36F293AD0677C140C9 (ConvertPositionsUInt16ToFloatInterleavedJob_t627B5337A0B08363B31908F9F5D818AD9BC480E9* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	uint16_t* V_1 = NULL;
	{
		// var resultV = (float3*) (((byte*)result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___result_3;
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = (ushort*) (input + (inputByteStride*i));
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = __this->___inputByteStride_0;
		int32_t L_5 = ___i0;
		V_1 = (uint16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new float3(-(float)off[0], off[1], off[2]);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = V_0;
		uint16_t* L_7 = V_1;
		int32_t L_8 = *((uint16_t*)L_7);
		uint16_t* L_9 = V_1;
		int32_t L_10 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_9, 2)));
		uint16_t* L_11 = V_1;
		int32_t L_12 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		memset((&L_13), 0, sizeof(L_13));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_13), ((-((float)L_8))), ((float)L_10), ((float)L_12), /*hidden argument*/NULL);
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_6 = L_13;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertPositionsUInt16ToFloatInterleavedJob_Execute_mCBA84FD3B7E48404F4C03D36F293AD0677C140C9_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertPositionsUInt16ToFloatInterleavedJob_t627B5337A0B08363B31908F9F5D818AD9BC480E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertPositionsUInt16ToFloatInterleavedJob_t627B5337A0B08363B31908F9F5D818AD9BC480E9*>(__this + _offset);
	ConvertPositionsUInt16ToFloatInterleavedJob_Execute_mCBA84FD3B7E48404F4C03D36F293AD0677C140C9(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsUInt16ToFloatInterleavedNormalizedJob_Execute_mBD36CC86BB3FDAB89F8BA8362133973AA8867057 (ConvertPositionsUInt16ToFloatInterleavedNormalizedJob_t006E9B95AB2A428D752CCBA39393B93D329399FC* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	uint16_t* V_1 = NULL;
	{
		// var resultV = (float3*) (((byte*)result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___result_3;
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = (ushort*) (input + (inputByteStride*i));
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = __this->___inputByteStride_0;
		int32_t L_5 = ___i0;
		V_1 = (uint16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new float3(
		//     -(off[0] / (float) ushort.MaxValue),
		//     off[1] / (float) ushort.MaxValue,
		//     off[2] / (float) ushort.MaxValue
		// );
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = V_0;
		uint16_t* L_7 = V_1;
		int32_t L_8 = *((uint16_t*)L_7);
		uint16_t* L_9 = V_1;
		int32_t L_10 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_9, 2)));
		uint16_t* L_11 = V_1;
		int32_t L_12 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		memset((&L_13), 0, sizeof(L_13));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_13), ((-((float)(((float)L_8)/(65535.0f))))), ((float)(((float)L_10)/(65535.0f))), ((float)(((float)L_12)/(65535.0f))), /*hidden argument*/NULL);
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_6 = L_13;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertPositionsUInt16ToFloatInterleavedNormalizedJob_Execute_mBD36CC86BB3FDAB89F8BA8362133973AA8867057_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertPositionsUInt16ToFloatInterleavedNormalizedJob_t006E9B95AB2A428D752CCBA39393B93D329399FC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertPositionsUInt16ToFloatInterleavedNormalizedJob_t006E9B95AB2A428D752CCBA39393B93D329399FC*>(__this + _offset);
	ConvertPositionsUInt16ToFloatInterleavedNormalizedJob_Execute_mBD36CC86BB3FDAB89F8BA8362133973AA8867057(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertPositionsInt16ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsInt16ToFloatInterleavedJob_Execute_m900E50141A270D195A073110C1C80C9C823E9EB7 (ConvertPositionsInt16ToFloatInterleavedJob_t765ABB2C95FA8F4D0567D8A8EB3E4F397B319DFC* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	int16_t* V_1 = NULL;
	{
		// var resultV = (float3*)  (((byte*)result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___result_2;
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->___outputByteStride_3;
		V_0 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = (short*) (input + (i*inputByteStride));
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___i0;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = (int16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new float3(-(float)off[0],off[1],off[2]);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = V_0;
		int16_t* L_7 = V_1;
		int32_t L_8 = *((int16_t*)L_7);
		int16_t* L_9 = V_1;
		int32_t L_10 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_9, 2)));
		int16_t* L_11 = V_1;
		int32_t L_12 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		memset((&L_13), 0, sizeof(L_13));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_13), ((-((float)L_8))), ((float)L_10), ((float)L_12), /*hidden argument*/NULL);
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_6 = L_13;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertPositionsInt16ToFloatInterleavedJob_Execute_m900E50141A270D195A073110C1C80C9C823E9EB7_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertPositionsInt16ToFloatInterleavedJob_t765ABB2C95FA8F4D0567D8A8EB3E4F397B319DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertPositionsInt16ToFloatInterleavedJob_t765ABB2C95FA8F4D0567D8A8EB3E4F397B319DFC*>(__this + _offset);
	ConvertPositionsInt16ToFloatInterleavedJob_Execute_m900E50141A270D195A073110C1C80C9C823E9EB7(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertVector3Int16ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertVector3Int16ToFloatInterleavedNormalizedJob_Execute_mCFF0EA0EECC157DE60297987B407BD896369BDBC (ConvertVector3Int16ToFloatInterleavedNormalizedJob_t19604E764DCB5ED1687B3FBA5EBD843E1EA211A4* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	int16_t* V_1 = NULL;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var resultV = (float3*) (((byte*)result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___result_3;
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = (short*) (input + (i*inputByteStride));
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___i0;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = (int16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// var tmp = new float3(off[0], off[1], off[2]) / short.MaxValue;
		int16_t* L_6 = V_1;
		int32_t L_7 = *((int16_t*)L_6);
		int16_t* L_8 = V_1;
		int32_t L_9 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_8, 2)));
		int16_t* L_10 = V_1;
		int32_t L_11 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_12), ((float)L_7), ((float)L_9), ((float)L_11), /*hidden argument*/NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		L_13 = float3_op_Division_m337596E152F22C0A19CD1189C6E38BC5EAB9514F_inline(L_12, (32767.0f), NULL);
		// var tmp2 = max(tmp, -1f);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_14;
		L_14 = float3_op_Implicit_m47B2AAB9681E482AB9C4CB9B1691619EB72C536B_inline((-1.0f), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_15;
		L_15 = math_max_mEAED152166B3B2D1D6EF379FFAD18A85D52E6007_inline(L_13, L_14, NULL);
		V_2 = L_15;
		// tmp2.x *= -1;
		float* L_16 = (&(&V_2)->___x_0);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		*((float*)L_17) = (float)((float)il2cpp_codegen_multiply(L_18, (-1.0f)));
		// *resultV = tmp2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = V_2;
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19 = L_20;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertVector3Int16ToFloatInterleavedNormalizedJob_Execute_mCFF0EA0EECC157DE60297987B407BD896369BDBC_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertVector3Int16ToFloatInterleavedNormalizedJob_t19604E764DCB5ED1687B3FBA5EBD843E1EA211A4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertVector3Int16ToFloatInterleavedNormalizedJob_t19604E764DCB5ED1687B3FBA5EBD843E1EA211A4*>(__this + _offset);
	ConvertVector3Int16ToFloatInterleavedNormalizedJob_Execute_mCFF0EA0EECC157DE60297987B407BD896369BDBC(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertNormalsInt16ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertNormalsInt16ToFloatInterleavedNormalizedJob_Execute_m4FC63CF27A20B6DE4E5FA032DBCF013A6C600EA5 (ConvertNormalsInt16ToFloatInterleavedNormalizedJob_tA0A8A4918C402B60639A577A2AD18D5FC31800FE* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	int16_t* V_1 = NULL;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var resultV = (float3*) (((byte*)result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___result_3;
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = (short*) (input + (i*inputByteStride));
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___i0;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = (int16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// var tmp = new float3(off[0], off[1], off[2]) / short.MaxValue;
		int16_t* L_6 = V_1;
		int32_t L_7 = *((int16_t*)L_6);
		int16_t* L_8 = V_1;
		int32_t L_9 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_8, 2)));
		int16_t* L_10 = V_1;
		int32_t L_11 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_12), ((float)L_7), ((float)L_9), ((float)L_11), /*hidden argument*/NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		L_13 = float3_op_Division_m337596E152F22C0A19CD1189C6E38BC5EAB9514F_inline(L_12, (32767.0f), NULL);
		// var tmp2 = max(tmp, -1f);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_14;
		L_14 = float3_op_Implicit_m47B2AAB9681E482AB9C4CB9B1691619EB72C536B_inline((-1.0f), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_15;
		L_15 = math_max_mEAED152166B3B2D1D6EF379FFAD18A85D52E6007_inline(L_13, L_14, NULL);
		V_2 = L_15;
		// tmp2.x *= -1;
		float* L_16 = (&(&V_2)->___x_0);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		*((float*)L_17) = (float)((float)il2cpp_codegen_multiply(L_18, (-1.0f)));
		// *resultV = normalize(tmp2);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = V_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_21;
		L_21 = math_normalize_m826725DC58F0CE455E3DEB3BD4808C13CBC81E25_inline(L_20, NULL);
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19 = L_21;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertNormalsInt16ToFloatInterleavedNormalizedJob_Execute_m4FC63CF27A20B6DE4E5FA032DBCF013A6C600EA5_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertNormalsInt16ToFloatInterleavedNormalizedJob_tA0A8A4918C402B60639A577A2AD18D5FC31800FE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertNormalsInt16ToFloatInterleavedNormalizedJob_tA0A8A4918C402B60639A577A2AD18D5FC31800FE*>(__this + _offset);
	ConvertNormalsInt16ToFloatInterleavedNormalizedJob_Execute_m4FC63CF27A20B6DE4E5FA032DBCF013A6C600EA5(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertPositionsInt8ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsInt8ToFloatInterleavedJob_Execute_m4B57340BE61A8BE13CE72D076B18475579C77DD1 (ConvertPositionsInt8ToFloatInterleavedJob_t73C1CC4C3AD4D741693D686C3493D3F740BC67F8* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	int8_t* V_1 = NULL;
	{
		// var resultV = (float3*) (((byte*)result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___result_3;
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = input + (inputByteStride*i);
		int8_t* L_3 = __this->___input_1;
		int32_t L_4 = __this->___inputByteStride_0;
		int32_t L_5 = ___i0;
		V_1 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new float3(-(float)off[0], off[1], off[2]);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = V_0;
		int8_t* L_7 = V_1;
		int32_t L_8 = *((int8_t*)L_7);
		int8_t* L_9 = V_1;
		int32_t L_10 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_9, 1)));
		int8_t* L_11 = V_1;
		int32_t L_12 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_11, 2)));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		memset((&L_13), 0, sizeof(L_13));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_13), ((-((float)L_8))), ((float)L_10), ((float)L_12), /*hidden argument*/NULL);
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_6 = L_13;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertPositionsInt8ToFloatInterleavedJob_Execute_m4B57340BE61A8BE13CE72D076B18475579C77DD1_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertPositionsInt8ToFloatInterleavedJob_t73C1CC4C3AD4D741693D686C3493D3F740BC67F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertPositionsInt8ToFloatInterleavedJob_t73C1CC4C3AD4D741693D686C3493D3F740BC67F8*>(__this + _offset);
	ConvertPositionsInt8ToFloatInterleavedJob_Execute_m4B57340BE61A8BE13CE72D076B18475579C77DD1(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertVector3Int8ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertVector3Int8ToFloatInterleavedNormalizedJob_Execute_mA585588C20C2C429148EA9D9895D2905EFB21E68 (ConvertVector3Int8ToFloatInterleavedNormalizedJob_t101DA4EFF72D446E90CC7C4FC57A6ABFD4D9CE73* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	int8_t* V_1 = NULL;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var resultV = (float3*) (((byte*)result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___result_3;
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = input + (inputByteStride*i);
		int8_t* L_3 = __this->___input_1;
		int32_t L_4 = __this->___inputByteStride_0;
		int32_t L_5 = ___i0;
		V_1 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// var tmp = new float3(off[0], off[1], off[2]) / 127f;
		int8_t* L_6 = V_1;
		int32_t L_7 = *((int8_t*)L_6);
		int8_t* L_8 = V_1;
		int32_t L_9 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_8, 1)));
		int8_t* L_10 = V_1;
		int32_t L_11 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_10, 2)));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_12), ((float)L_7), ((float)L_9), ((float)L_11), /*hidden argument*/NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		L_13 = float3_op_Division_m337596E152F22C0A19CD1189C6E38BC5EAB9514F_inline(L_12, (127.0f), NULL);
		// var tmp2 = max(tmp, -1);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_14;
		L_14 = float3_op_Implicit_m2D3D66A7EE86A311E60BF3C56EE34AAC6457D01D_inline((-1), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_15;
		L_15 = math_max_mEAED152166B3B2D1D6EF379FFAD18A85D52E6007_inline(L_13, L_14, NULL);
		V_2 = L_15;
		// tmp2.x *= -1;
		float* L_16 = (&(&V_2)->___x_0);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		*((float*)L_17) = (float)((float)il2cpp_codegen_multiply(L_18, (-1.0f)));
		// *resultV = tmp2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = V_2;
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19 = L_20;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertVector3Int8ToFloatInterleavedNormalizedJob_Execute_mA585588C20C2C429148EA9D9895D2905EFB21E68_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertVector3Int8ToFloatInterleavedNormalizedJob_t101DA4EFF72D446E90CC7C4FC57A6ABFD4D9CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertVector3Int8ToFloatInterleavedNormalizedJob_t101DA4EFF72D446E90CC7C4FC57A6ABFD4D9CE73*>(__this + _offset);
	ConvertVector3Int8ToFloatInterleavedNormalizedJob_Execute_mA585588C20C2C429148EA9D9895D2905EFB21E68(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertNormalsInt8ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertNormalsInt8ToFloatInterleavedNormalizedJob_Execute_m32E2EF4D1456BD1152EC6E3A37E37A2717D0D691 (ConvertNormalsInt8ToFloatInterleavedNormalizedJob_t23F523CF6296D3372533309219939D400FA2503B* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	int8_t* V_1 = NULL;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var resultV = (float3*) (((byte*)result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___result_3;
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = input + (inputByteStride*i);
		int8_t* L_3 = __this->___input_1;
		int32_t L_4 = __this->___inputByteStride_0;
		int32_t L_5 = ___i0;
		V_1 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// var tmp = new float3(off[0], off[1], off[2]) / 127f;
		int8_t* L_6 = V_1;
		int32_t L_7 = *((int8_t*)L_6);
		int8_t* L_8 = V_1;
		int32_t L_9 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_8, 1)));
		int8_t* L_10 = V_1;
		int32_t L_11 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_10, 2)));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_12), ((float)L_7), ((float)L_9), ((float)L_11), /*hidden argument*/NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		L_13 = float3_op_Division_m337596E152F22C0A19CD1189C6E38BC5EAB9514F_inline(L_12, (127.0f), NULL);
		// var tmp2 = max(tmp, -1);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_14;
		L_14 = float3_op_Implicit_m2D3D66A7EE86A311E60BF3C56EE34AAC6457D01D_inline((-1), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_15;
		L_15 = math_max_mEAED152166B3B2D1D6EF379FFAD18A85D52E6007_inline(L_13, L_14, NULL);
		V_2 = L_15;
		// tmp2.x *= -1;
		float* L_16 = (&(&V_2)->___x_0);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		*((float*)L_17) = (float)((float)il2cpp_codegen_multiply(L_18, (-1.0f)));
		// *resultV = normalize(tmp2);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = V_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_21;
		L_21 = math_normalize_m826725DC58F0CE455E3DEB3BD4808C13CBC81E25_inline(L_20, NULL);
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19 = L_21;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertNormalsInt8ToFloatInterleavedNormalizedJob_Execute_m32E2EF4D1456BD1152EC6E3A37E37A2717D0D691_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertNormalsInt8ToFloatInterleavedNormalizedJob_t23F523CF6296D3372533309219939D400FA2503B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertNormalsInt8ToFloatInterleavedNormalizedJob_t23F523CF6296D3372533309219939D400FA2503B*>(__this + _offset);
	ConvertNormalsInt8ToFloatInterleavedNormalizedJob_Execute_m32E2EF4D1456BD1152EC6E3A37E37A2717D0D691(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsUInt8ToFloatInterleavedJob_Execute_m90B2FAABB8AC2740EF38157A138579B9C62CDE55 (ConvertPositionsUInt8ToFloatInterleavedJob_tFB5F9BA3975E8C7528FBA718E07ECA3A8869357E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_1 = NULL;
	{
		// var off = input + (i*inputByteStride);
		uint8_t* L_0 = __this->___input_1;
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->___inputByteStride_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var resultV = (float3*) (((byte*) result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = __this->___result_3;
		int32_t L_4 = ___i0;
		int32_t L_5 = __this->___outputByteStride_2;
		V_1 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new float3(-(float)off[0],off[1],off[2]);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = V_1;
		uint8_t* L_7 = V_0;
		int32_t L_8 = *((uint8_t*)L_7);
		uint8_t* L_9 = V_0;
		int32_t L_10 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, 1)));
		uint8_t* L_11 = V_0;
		int32_t L_12 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, 2)));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		memset((&L_13), 0, sizeof(L_13));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_13), ((-((float)L_8))), ((float)L_10), ((float)L_12), /*hidden argument*/NULL);
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_6 = L_13;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertPositionsUInt8ToFloatInterleavedJob_Execute_m90B2FAABB8AC2740EF38157A138579B9C62CDE55_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertPositionsUInt8ToFloatInterleavedJob_tFB5F9BA3975E8C7528FBA718E07ECA3A8869357E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertPositionsUInt8ToFloatInterleavedJob_tFB5F9BA3975E8C7528FBA718E07ECA3A8869357E*>(__this + _offset);
	ConvertPositionsUInt8ToFloatInterleavedJob_Execute_m90B2FAABB8AC2740EF38157A138579B9C62CDE55(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsUInt8ToFloatInterleavedNormalizedJob_Execute_m3D5D499F96619525C7F7C896B326D6F94EAE5D9B (ConvertPositionsUInt8ToFloatInterleavedNormalizedJob_t3ACA0077C05CD3DF5DDDAD54D03618EE34667CDF* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		// var resultV = (float3*) (((byte*)result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___result_3;
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = input + (i*inputByteStride);
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___i0;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new float3(
		//     -(off[0] / 255f),
		//     off[1] / 255f,
		//     off[2] / 255f
		// );
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = V_0;
		uint8_t* L_7 = V_1;
		int32_t L_8 = *((uint8_t*)L_7);
		uint8_t* L_9 = V_1;
		int32_t L_10 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, 1)));
		uint8_t* L_11 = V_1;
		int32_t L_12 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, 2)));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		memset((&L_13), 0, sizeof(L_13));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_13), ((-((float)(((float)L_8)/(255.0f))))), ((float)(((float)L_10)/(255.0f))), ((float)(((float)L_12)/(255.0f))), /*hidden argument*/NULL);
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_6 = L_13;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertPositionsUInt8ToFloatInterleavedNormalizedJob_Execute_m3D5D499F96619525C7F7C896B326D6F94EAE5D9B_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertPositionsUInt8ToFloatInterleavedNormalizedJob_t3ACA0077C05CD3DF5DDDAD54D03618EE34667CDF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertPositionsUInt8ToFloatInterleavedNormalizedJob_t3ACA0077C05CD3DF5DDDAD54D03618EE34667CDF*>(__this + _offset);
	ConvertPositionsUInt8ToFloatInterleavedNormalizedJob_Execute_m3D5D499F96619525C7F7C896B326D6F94EAE5D9B(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertBoneJointsUInt8ToUInt32Job::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertBoneJointsUInt8ToUInt32Job_Execute_mDDBFA83C15941584B08947EF93EB6D86C08C18DB (ConvertBoneJointsUInt8ToUInt32Job_t99A6AA53F9A9F7619069FF6475F473061A9E7E09* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		// var resultV = (uint4*) (((byte*)result) + (i*outputByteStride));
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* L_0 = __this->___result_2;
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->___outputByteStride_3;
		V_0 = ((uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = input + (i*inputByteStride);
		uint8_t* L_3 = __this->___input_0;
		int32_t L_4 = ___i0;
		int32_t L_5 = __this->___inputByteStride_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new uint4(off[0],off[1],off[2],off[3]);
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* L_6 = V_0;
		uint8_t* L_7 = V_1;
		int32_t L_8 = *((uint8_t*)L_7);
		uint8_t* L_9 = V_1;
		int32_t L_10 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, 1)));
		uint8_t* L_11 = V_1;
		int32_t L_12 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, 2)));
		uint8_t* L_13 = V_1;
		int32_t L_14 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, 3)));
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 L_15;
		memset((&L_15), 0, sizeof(L_15));
		uint4__ctor_m59B6A219A0285C60FCF2977679BF89C72B502008_inline((&L_15), L_8, L_10, L_12, L_14, /*hidden argument*/NULL);
		*(uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9*)L_6 = L_15;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertBoneJointsUInt8ToUInt32Job_Execute_mDDBFA83C15941584B08947EF93EB6D86C08C18DB_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertBoneJointsUInt8ToUInt32Job_t99A6AA53F9A9F7619069FF6475F473061A9E7E09* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertBoneJointsUInt8ToUInt32Job_t99A6AA53F9A9F7619069FF6475F473061A9E7E09*>(__this + _offset);
	ConvertBoneJointsUInt8ToUInt32Job_Execute_mDDBFA83C15941584B08947EF93EB6D86C08C18DB(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertBoneJointsUInt16ToUInt32Job::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertBoneJointsUInt16ToUInt32Job_Execute_mE329AD446314E3BF1FD84871E85130CFD7EC4CAA (ConvertBoneJointsUInt16ToUInt32Job_t9D7020314181601BBE96188BBD9D3F868E1DC848* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* V_0 = NULL;
	uint16_t* V_1 = NULL;
	{
		// var resultV = (uint4*) (((byte*)result) + (i*outputByteStride));
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* L_0 = __this->___result_2;
		int32_t L_1 = ___i0;
		int32_t L_2 = __this->___outputByteStride_3;
		V_0 = ((uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = (ushort*) (input + (i*inputByteStride));
		uint8_t* L_3 = __this->___input_0;
		int32_t L_4 = ___i0;
		int32_t L_5 = __this->___inputByteStride_1;
		V_1 = (uint16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new uint4(off[0],off[1],off[2],off[3]);
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* L_6 = V_0;
		uint16_t* L_7 = V_1;
		int32_t L_8 = *((uint16_t*)L_7);
		uint16_t* L_9 = V_1;
		int32_t L_10 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_9, 2)));
		uint16_t* L_11 = V_1;
		int32_t L_12 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		uint16_t* L_13 = V_1;
		int32_t L_14 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 2)))));
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 L_15;
		memset((&L_15), 0, sizeof(L_15));
		uint4__ctor_m59B6A219A0285C60FCF2977679BF89C72B502008_inline((&L_15), L_8, L_10, L_12, L_14, /*hidden argument*/NULL);
		*(uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9*)L_6 = L_15;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertBoneJointsUInt16ToUInt32Job_Execute_mE329AD446314E3BF1FD84871E85130CFD7EC4CAA_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertBoneJointsUInt16ToUInt32Job_t9D7020314181601BBE96188BBD9D3F868E1DC848* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertBoneJointsUInt16ToUInt32Job_t9D7020314181601BBE96188BBD9D3F868E1DC848*>(__this + _offset);
	ConvertBoneJointsUInt16ToUInt32Job_Execute_mE329AD446314E3BF1FD84871E85130CFD7EC4CAA(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.SortAndRenormalizeBoneWeightsJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SortAndRenormalizeBoneWeightsJob_Execute_m2925332CE698666362A0658FEDC39E6CE0573B38 (SortAndRenormalizeBoneWeightsJob_tB959456EC991805E422D7414C7E11CC70FFAE42C* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, const RuntimeMethod* method) 
{
	VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		// var v = bones[index];
		NativeArray_1_t15E6E9438E5B73A5BFCFCADFEBF1D3D8949C6858* L_0 = (&__this->___bones_0);
		int32_t L_1 = ___index0;
		VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF, (L_0)->___m_Buffer_0, L_1);
		V_0 = L_2;
		// var sortedAndNormalized = true;
		V_1 = (bool)1;
		// for (var i = 0; i < 3; i++) {
		V_3 = 0;
		goto IL_0047;
	}

IL_0013:
	{
		// var a = v.weights[i];
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_3 = (&(&V_0)->___weights_0);
		float* L_4 = (&L_3->___FixedElementField_0);
		int32_t L_5 = V_3;
		float L_6 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), 4)))));
		// var b = v.weights[i + 1];
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_7 = (&(&V_0)->___weights_0);
		float* L_8 = (&L_7->___FixedElementField_0);
		int32_t L_9 = V_3;
		float L_10 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_9, 1))), 4)))));
		V_4 = L_10;
		// if (a < b) {
		float L_11 = V_4;
		if ((!(((float)L_6) < ((float)L_11))))
		{
			goto IL_0043;
		}
	}
	{
		// sortedAndNormalized = false;
		V_1 = (bool)0;
		// break;
		goto IL_004b;
	}

IL_0043:
	{
		// for (var i = 0; i < 3; i++) {
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0047:
	{
		// for (var i = 0; i < 3; i++) {
		int32_t L_13 = V_3;
		if ((((int32_t)L_13) < ((int32_t)3)))
		{
			goto IL_0013;
		}
	}

IL_004b:
	{
		// if (!sortedAndNormalized) {
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_00da;
		}
	}
	{
		// for (var i = 0; i < skinWeights; i++) {
		V_5 = 0;
		goto IL_00cd;
	}

IL_0056:
	{
		// var max = v.weights[i];
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_15 = (&(&V_0)->___weights_0);
		float* L_16 = (&L_15->___FixedElementField_0);
		int32_t L_17 = V_5;
		float L_18 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
		// var maxI = i;
		int32_t L_19 = V_5;
		V_7 = L_19;
		// for (var j = i+1; j < 4; j++) {
		int32_t L_20 = V_5;
		V_8 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		goto IL_00b1;
	}

IL_0077:
	{
		// var value = v.weights[j];
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_21 = (&(&V_0)->___weights_0);
		float* L_22 = (&L_21->___FixedElementField_0);
		int32_t L_23 = V_8;
		float L_24 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4)))));
		V_9 = L_24;
		// if (v.weights[j] > max) {
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_25 = (&(&V_0)->___weights_0);
		float* L_26 = (&L_25->___FixedElementField_0);
		int32_t L_27 = V_8;
		float L_28 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4)))));
		float L_29 = V_6;
		if ((!(((float)L_28) > ((float)L_29))))
		{
			goto IL_00ab;
		}
	}
	{
		// max = value;
		float L_30 = V_9;
		V_6 = L_30;
		// maxI = j;
		int32_t L_31 = V_8;
		V_7 = L_31;
	}

IL_00ab:
	{
		// for (var j = i+1; j < 4; j++) {
		int32_t L_32 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00b1:
	{
		// for (var j = i+1; j < 4; j++) {
		int32_t L_33 = V_8;
		if ((((int32_t)L_33) < ((int32_t)4)))
		{
			goto IL_0077;
		}
	}
	{
		// if (maxI > i) {
		int32_t L_34 = V_7;
		int32_t L_35 = V_5;
		if ((((int32_t)L_34) <= ((int32_t)L_35)))
		{
			goto IL_00c7;
		}
	}
	{
		// Swap(ref v, maxI, i);
		int32_t L_36 = V_7;
		int32_t L_37 = V_5;
		SortAndRenormalizeBoneWeightsJob_Swap_mD6DBC5F261C057AAA774BAF6DFF8ACF7B9DA5D36((&V_0), L_36, L_37, NULL);
	}

IL_00c7:
	{
		// for (var i = 0; i < skinWeights; i++) {
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cd:
	{
		// for (var i = 0; i < skinWeights; i++) {
		int32_t L_39 = V_5;
		int32_t L_40 = __this->___skinWeights_1;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0056;
		}
	}

IL_00da:
	{
		// var weightSum = 0f;
		V_2 = (0.0f);
		// for (var i = 0; i < skinWeights; i++) {
		V_10 = 0;
		goto IL_0101;
	}

IL_00e5:
	{
		// weightSum += v.weights[i];
		float L_41 = V_2;
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_42 = (&(&V_0)->___weights_0);
		float* L_43 = (&L_42->___FixedElementField_0);
		int32_t L_44 = V_10;
		float L_45 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4)))));
		V_2 = ((float)il2cpp_codegen_add(L_41, L_45));
		// for (var i = 0; i < skinWeights; i++) {
		int32_t L_46 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_0101:
	{
		// for (var i = 0; i < skinWeights; i++) {
		int32_t L_47 = V_10;
		int32_t L_48 = __this->___skinWeights_1;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00e5;
		}
	}
	{
		// if (abs(weightSum - 1.0f) > 2e-7f && weightSum > 0) {
		float L_49 = V_2;
		float L_50;
		L_50 = math_abs_mD6633C641692C4A0AEEFB52575D81599ACF1F7F5_inline(((float)il2cpp_codegen_subtract(L_49, (1.0f))), NULL);
		if ((!(((float)L_50) > ((float)(2.00000002E-07f)))))
		{
			goto IL_0154;
		}
	}
	{
		float L_51 = V_2;
		if ((!(((float)L_51) > ((float)(0.0f)))))
		{
			goto IL_0154;
		}
	}
	{
		// sortedAndNormalized = false;
		V_1 = (bool)0;
		// for (var i = 0; i < skinWeights; i++) {
		V_11 = 0;
		goto IL_014a;
	}

IL_012d:
	{
		// v.weights[i] /= weightSum;
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_52 = (&(&V_0)->___weights_0);
		float* L_53 = (&L_52->___FixedElementField_0);
		int32_t L_54 = V_11;
		float* L_55 = ((float*)il2cpp_codegen_add((intptr_t)L_53, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_54), 4))));
		float L_56 = *((float*)L_55);
		float L_57 = V_2;
		*((float*)L_55) = (float)((float)(L_56/L_57));
		// for (var i = 0; i < skinWeights; i++) {
		int32_t L_58 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_014a:
	{
		// for (var i = 0; i < skinWeights; i++) {
		int32_t L_59 = V_11;
		int32_t L_60 = __this->___skinWeights_1;
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_012d;
		}
	}

IL_0154:
	{
		// if (!sortedAndNormalized) {
		bool L_61 = V_1;
		if (L_61)
		{
			goto IL_0164;
		}
	}
	{
		// bones[index] = v;
		NativeArray_1_t15E6E9438E5B73A5BFCFCADFEBF1D3D8949C6858* L_62 = (&__this->___bones_0);
		int32_t L_63 = ___index0;
		VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF L_64 = V_0;
		IL2CPP_NATIVEARRAY_SET_ITEM(VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF, (L_62)->___m_Buffer_0, L_63, (L_64));
	}

IL_0164:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SortAndRenormalizeBoneWeightsJob_Execute_m2925332CE698666362A0658FEDC39E6CE0573B38_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, const RuntimeMethod* method)
{
	SortAndRenormalizeBoneWeightsJob_tB959456EC991805E422D7414C7E11CC70FFAE42C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SortAndRenormalizeBoneWeightsJob_tB959456EC991805E422D7414C7E11CC70FFAE42C*>(__this + _offset);
	SortAndRenormalizeBoneWeightsJob_Execute_m2925332CE698666362A0658FEDC39E6CE0573B38(_thisAdjusted, ___index0, method);
}
// System.Void GLTFast.Jobs.SortAndRenormalizeBoneWeightsJob::Swap(GLTFast.Vertex.VBones&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SortAndRenormalizeBoneWeightsJob_Swap_mD6DBC5F261C057AAA774BAF6DFF8ACF7B9DA5D36 (VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF* ___v0, int32_t ___a1, int32_t ___b2, const RuntimeMethod* method) 
{
	float* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	uint32_t* V_3 = NULL;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		// (v.weights[a], v.weights[b]) = (v.weights[b], v.weights[a]);
		VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF* L_0 = ___v0;
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_1 = (&L_0->___weights_0);
		float* L_2 = (&L_1->___FixedElementField_0);
		int32_t L_3 = ___a1;
		V_0 = ((float*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3), 4))));
		VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF* L_4 = ___v0;
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_5 = (&L_4->___weights_0);
		float* L_6 = (&L_5->___FixedElementField_0);
		int32_t L_7 = ___b2;
		VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF* L_8 = ___v0;
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_9 = (&L_8->___weights_0);
		float* L_10 = (&L_9->___FixedElementField_0);
		int32_t L_11 = ___b2;
		float L_12 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 4)))));
		V_1 = L_12;
		VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF* L_13 = ___v0;
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_14 = (&L_13->___weights_0);
		float* L_15 = (&L_14->___FixedElementField_0);
		int32_t L_16 = ___a1;
		float L_17 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), 4)))));
		V_2 = L_17;
		float* L_18 = V_0;
		float L_19 = V_1;
		*((float*)L_18) = (float)L_19;
		float L_20 = V_2;
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), 4))))) = (float)L_20;
		// (v.joints[a], v.joints[b]) = (v.joints[b], v.joints[a]);
		VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF* L_21 = ___v0;
		U3CjointsU3Ee__FixedBuffer_t247A255BAD6230E79187CCF28093D98E575CAF88* L_22 = (&L_21->___joints_1);
		uint32_t* L_23 = (&L_22->___FixedElementField_0);
		int32_t L_24 = ___a1;
		V_3 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))));
		VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF* L_25 = ___v0;
		U3CjointsU3Ee__FixedBuffer_t247A255BAD6230E79187CCF28093D98E575CAF88* L_26 = (&L_25->___joints_1);
		uint32_t* L_27 = (&L_26->___FixedElementField_0);
		int32_t L_28 = ___b2;
		VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF* L_29 = ___v0;
		U3CjointsU3Ee__FixedBuffer_t247A255BAD6230E79187CCF28093D98E575CAF88* L_30 = (&L_29->___joints_1);
		uint32_t* L_31 = (&L_30->___FixedElementField_0);
		int32_t L_32 = ___b2;
		int32_t L_33 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4)))));
		V_4 = L_33;
		VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF* L_34 = ___v0;
		U3CjointsU3Ee__FixedBuffer_t247A255BAD6230E79187CCF28093D98E575CAF88* L_35 = (&L_34->___joints_1);
		uint32_t* L_36 = (&L_35->___FixedElementField_0);
		int32_t L_37 = ___a1;
		int32_t L_38 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4)))));
		V_5 = L_38;
		uint32_t* L_39 = V_3;
		uint32_t L_40 = V_4;
		*((int32_t*)L_39) = (int32_t)L_40;
		uint32_t L_41 = V_5;
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))) = (int32_t)L_41;
		// }
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
// System.Void GLTFast.Jobs.ConvertMatricesJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertMatricesJob_Execute_mD4C85FD640C63CB191E277601C20EDEE2103E9F0 (ConvertMatricesJob_tDBC421DA195426DB5E3578E45C5CE296E032A936* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var tmp = input[i].c0;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_0 = __this->___input_0;
		int32_t L_1 = ___i0;
		uint32_t L_2 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		NullCheck(((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_3 = ((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2))))->___c0_0;
		V_0 = L_3;
		// tmp.y *= -1;
		float* L_4 = (&(&V_0)->___y_1);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		*((float*)L_5) = (float)((float)il2cpp_codegen_multiply(L_6, (-1.0f)));
		// tmp.z *= -1;
		float* L_7 = (&(&V_0)->___z_2);
		float* L_8 = L_7;
		float L_9 = *((float*)L_8);
		*((float*)L_8) = (float)((float)il2cpp_codegen_multiply(L_9, (-1.0f)));
		// result[i].c0 = tmp;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_10 = __this->___result_1;
		int32_t L_11 = ___i0;
		uint32_t L_12 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_13 = V_0;
		NullCheck(((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))));
		((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12))))->___c0_0 = L_13;
		// tmp = input[i].c1;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_14 = __this->___input_0;
		int32_t L_15 = ___i0;
		uint32_t L_16 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		NullCheck(((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_17 = ((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16))))->___c1_1;
		V_0 = L_17;
		// tmp.x *= -1;
		float* L_18 = (&(&V_0)->___x_0);
		float* L_19 = L_18;
		float L_20 = *((float*)L_19);
		*((float*)L_19) = (float)((float)il2cpp_codegen_multiply(L_20, (-1.0f)));
		// result[i].c1 = tmp;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_21 = __this->___result_1;
		int32_t L_22 = ___i0;
		uint32_t L_23 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_24 = V_0;
		NullCheck(((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), (int32_t)L_23)))));
		((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), (int32_t)L_23))))->___c1_1 = L_24;
		// tmp = input[i].c2;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_25 = __this->___input_0;
		int32_t L_26 = ___i0;
		uint32_t L_27 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		NullCheck(((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), (int32_t)L_27)))));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_28 = ((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), (int32_t)L_27))))->___c2_2;
		V_0 = L_28;
		// tmp.x *= -1;
		float* L_29 = (&(&V_0)->___x_0);
		float* L_30 = L_29;
		float L_31 = *((float*)L_30);
		*((float*)L_30) = (float)((float)il2cpp_codegen_multiply(L_31, (-1.0f)));
		// result[i].c2 = tmp;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_32 = __this->___result_1;
		int32_t L_33 = ___i0;
		uint32_t L_34 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_35 = V_0;
		NullCheck(((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), (int32_t)L_34)))));
		((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), (int32_t)L_34))))->___c2_2 = L_35;
		// tmp = input[i].c3;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_36 = __this->___input_0;
		int32_t L_37 = ___i0;
		uint32_t L_38 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		NullCheck(((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), (int32_t)L_38)))));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_39 = ((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), (int32_t)L_38))))->___c3_3;
		V_0 = L_39;
		// tmp.x *= -1;
		float* L_40 = (&(&V_0)->___x_0);
		float* L_41 = L_40;
		float L_42 = *((float*)L_41);
		*((float*)L_41) = (float)((float)il2cpp_codegen_multiply(L_42, (-1.0f)));
		// result[i].c3 = tmp;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_43 = __this->___result_1;
		int32_t L_44 = ___i0;
		uint32_t L_45 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_46 = V_0;
		NullCheck(((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), (int32_t)L_45)))));
		((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), (int32_t)L_45))))->___c3_3 = L_46;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertMatricesJob_Execute_mD4C85FD640C63CB191E277601C20EDEE2103E9F0_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertMatricesJob_tDBC421DA195426DB5E3578E45C5CE296E032A936* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertMatricesJob_tDBC421DA195426DB5E3578E45C5CE296E032A936*>(__this + _offset);
	ConvertMatricesJob_Execute_mD4C85FD640C63CB191E277601C20EDEE2103E9F0(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertScalarInt8ToFloatNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertScalarInt8ToFloatNormalizedJob_Execute_mB9FE0B8F8EE76D480ED02D0AF9388A84A709F6CC (ConvertScalarInt8ToFloatNormalizedJob_t6B556D50B4172D442B1DE65DAA91C80AA7AE4CA7* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		// result[i] = max( input[i] / 127f, -1.0f);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_0 = (&__this->___result_1);
		int32_t L_1 = ___i0;
		int8_t* L_2 = __this->___input_0;
		int32_t L_3 = ___i0;
		int32_t L_4 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3)));
		float L_5;
		L_5 = math_max_mF7035168A46D333C6A703B673220B115411B67C1_inline(((float)(((float)L_4)/(127.0f))), (-1.0f), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float, (L_0)->___m_Buffer_0, L_1, (L_5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertScalarInt8ToFloatNormalizedJob_Execute_mB9FE0B8F8EE76D480ED02D0AF9388A84A709F6CC_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertScalarInt8ToFloatNormalizedJob_t6B556D50B4172D442B1DE65DAA91C80AA7AE4CA7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertScalarInt8ToFloatNormalizedJob_t6B556D50B4172D442B1DE65DAA91C80AA7AE4CA7*>(__this + _offset);
	ConvertScalarInt8ToFloatNormalizedJob_Execute_mB9FE0B8F8EE76D480ED02D0AF9388A84A709F6CC(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertScalarUInt8ToFloatNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertScalarUInt8ToFloatNormalizedJob_Execute_m2D3F7DF326D3E369F2390038FFAECBBCC6A31DBA (ConvertScalarUInt8ToFloatNormalizedJob_t06FA09713B8F1B1206754069D463957FF26027A4* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		// result[i] = input[i]/255f;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_0 = (&__this->___result_1);
		int32_t L_1 = ___i0;
		uint8_t* L_2 = __this->___input_0;
		int32_t L_3 = ___i0;
		int32_t L_4 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3)));
		IL2CPP_NATIVEARRAY_SET_ITEM(float, (L_0)->___m_Buffer_0, L_1, (((float)(((float)L_4)/(255.0f)))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertScalarUInt8ToFloatNormalizedJob_Execute_m2D3F7DF326D3E369F2390038FFAECBBCC6A31DBA_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertScalarUInt8ToFloatNormalizedJob_t06FA09713B8F1B1206754069D463957FF26027A4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertScalarUInt8ToFloatNormalizedJob_t06FA09713B8F1B1206754069D463957FF26027A4*>(__this + _offset);
	ConvertScalarUInt8ToFloatNormalizedJob_Execute_m2D3F7DF326D3E369F2390038FFAECBBCC6A31DBA(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertScalarInt16ToFloatNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertScalarInt16ToFloatNormalizedJob_Execute_m13168529617730C19B7F5EEEB643F3D9FC08319B (ConvertScalarInt16ToFloatNormalizedJob_t6603C875EDBE5AE07207490A8A57E502A16DB55E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		// result[i] = max( input[i] / (float) short.MaxValue, -1.0f);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_0 = (&__this->___result_1);
		int32_t L_1 = ___i0;
		int16_t* L_2 = __this->___input_0;
		int32_t L_3 = ___i0;
		int32_t L_4 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3), 2)))));
		float L_5;
		L_5 = math_max_mF7035168A46D333C6A703B673220B115411B67C1_inline(((float)(((float)L_4)/(32767.0f))), (-1.0f), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float, (L_0)->___m_Buffer_0, L_1, (L_5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertScalarInt16ToFloatNormalizedJob_Execute_m13168529617730C19B7F5EEEB643F3D9FC08319B_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertScalarInt16ToFloatNormalizedJob_t6603C875EDBE5AE07207490A8A57E502A16DB55E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertScalarInt16ToFloatNormalizedJob_t6603C875EDBE5AE07207490A8A57E502A16DB55E*>(__this + _offset);
	ConvertScalarInt16ToFloatNormalizedJob_Execute_m13168529617730C19B7F5EEEB643F3D9FC08319B(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertScalarUInt16ToFloatNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertScalarUInt16ToFloatNormalizedJob_Execute_m0F027DC315CCD105C0C2D25011329546B3EE0987 (ConvertScalarUInt16ToFloatNormalizedJob_t6B5DF4E3ED469A126C33D0F26D332F148A709986* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		// result[i] = input[i] / (float) ushort.MaxValue;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_0 = (&__this->___result_1);
		int32_t L_1 = ___i0;
		uint16_t* L_2 = __this->___input_0;
		int32_t L_3 = ___i0;
		int32_t L_4 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3), 2)))));
		IL2CPP_NATIVEARRAY_SET_ITEM(float, (L_0)->___m_Buffer_0, L_1, (((float)(((float)L_4)/(65535.0f)))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertScalarUInt16ToFloatNormalizedJob_Execute_m0F027DC315CCD105C0C2D25011329546B3EE0987_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	ConvertScalarUInt16ToFloatNormalizedJob_t6B5DF4E3ED469A126C33D0F26D332F148A709986* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertScalarUInt16ToFloatNormalizedJob_t6B5DF4E3ED469A126C33D0F26D332F148A709986*>(__this + _offset);
	ConvertScalarUInt16ToFloatNormalizedJob_Execute_m0F027DC315CCD105C0C2D25011329546B3EE0987(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GLTFast.Loading.HttpHeader
IL2CPP_EXTERN_C void HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975_marshal_pinvoke(const HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975& unmarshaled, HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975_marshaled_pinvoke& marshaled)
{
	marshaled.___Key_0 = il2cpp_codegen_marshal_string(unmarshaled.___Key_0);
	marshaled.___Value_1 = il2cpp_codegen_marshal_string(unmarshaled.___Value_1);
}
IL2CPP_EXTERN_C void HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975_marshal_pinvoke_back(const HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975_marshaled_pinvoke& marshaled, HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975& unmarshaled)
{
	unmarshaled.___Key_0 = il2cpp_codegen_marshal_string_result(marshaled.___Key_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Key_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___Key_0));
	unmarshaled.___Value_1 = il2cpp_codegen_marshal_string_result(marshaled.___Value_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Value_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___Value_1));
}
// Conversion method for clean up from marshalling of: GLTFast.Loading.HttpHeader
IL2CPP_EXTERN_C void HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975_marshal_pinvoke_cleanup(HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Key_0);
	marshaled.___Key_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___Value_1);
	marshaled.___Value_1 = NULL;
}
// Conversion methods for marshalling of: GLTFast.Loading.HttpHeader
IL2CPP_EXTERN_C void HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975_marshal_com(const HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975& unmarshaled, HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975_marshaled_com& marshaled)
{
	marshaled.___Key_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___Key_0);
	marshaled.___Value_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___Value_1);
}
IL2CPP_EXTERN_C void HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975_marshal_com_back(const HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975_marshaled_com& marshaled, HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975& unmarshaled)
{
	unmarshaled.___Key_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___Key_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Key_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___Key_0));
	unmarshaled.___Value_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___Value_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Value_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___Value_1));
}
// Conversion method for clean up from marshalling of: GLTFast.Loading.HttpHeader
IL2CPP_EXTERN_C void HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975_marshal_com_cleanup(HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Key_0);
	marshaled.___Key_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___Value_1);
	marshaled.___Value_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_Multicast(EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* currentDelegate = reinterpret_cast<EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___request0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_Open(EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___request0, method);
}
void EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_OpenStaticInvoker(EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* >::Invoke(__this->___method_ptr_0, method, NULL, ___request0);
}
void EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_ClosedStaticInvoker(EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___request0);
}
void EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_OpenVirtual(EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___request0);
}
void EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_OpenInterface(EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___request0);
}
void EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_OpenGenericVirtual(EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___request0);
}
void EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_OpenGenericInterface(EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___request0);
}
// System.Void GLTFast.Loading.EditUnityWebRequest::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditUnityWebRequest__ctor_mB6619E50B3F13C642A6B600D9A3DC03BFE226004 (EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_Multicast;
}
// System.Void GLTFast.Loading.EditUnityWebRequest::Invoke(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA (EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___request0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GLTFast.Loading.EditUnityWebRequest::BeginInvoke(UnityEngine.Networking.UnityWebRequest,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EditUnityWebRequest_BeginInvoke_m2B635B4FCFB113F3F78586559AD7F5658D736B65 (EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___request0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GLTFast.Loading.EditUnityWebRequest::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditUnityWebRequest_EndInvoke_mF8B62F8BF0648AA9B94B729C8E52190F26A43FE0 (EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void GLTFast.Loading.CustomHeaderDownloadProvider::.ctor(GLTFast.Loading.HttpHeader[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomHeaderDownloadProvider__ctor_mF9C45A2E69DA89DCBBF2B69D968414A118D2A058 (CustomHeaderDownloadProvider_tF3FDCEC840894B712F33C3EB05CAFA5C8D4D72E6* __this, HttpHeaderU5BU5D_t191CDBB06B539B9705C5E32B416D8CCB9902DAAB* ___headers0, const RuntimeMethod* method) 
{
	{
		// public CustomHeaderDownloadProvider( HttpHeader[] headers ) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _headers = headers;
		HttpHeaderU5BU5D_t191CDBB06B539B9705C5E32B416D8CCB9902DAAB* L_0 = ___headers0;
		__this->____headers_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____headers_0), (void*)L_0);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<GLTFast.Loading.IDownload> GLTFast.Loading.CustomHeaderDownloadProvider::Request(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t2A1F1AD9044254516567D5A7EC5A34F85C85723E* CustomHeaderDownloadProvider_Request_m1FA9B1330D06D6CE63389B46B6FE0CC60C837078 (CustomHeaderDownloadProvider_tF3FDCEC840894B712F33C3EB05CAFA5C8D4D72E6* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m9EE54BB46AF6EB7C3A753311850DEC6E10D88ACB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022_m111B3857F72DABEC17260B2007E781DAD48229E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mB320CD7A1C69D9300AAA1C59ADD16F81F53B671C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m9EE54BB46AF6EB7C3A753311850DEC6E10D88ACB(AsyncTaskMethodBuilder_1_Create_m9EE54BB46AF6EB7C3A753311850DEC6E10D88ACB_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = ___url0;
		(&V_0)->___url_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___url_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022_m111B3857F72DABEC17260B2007E781DAD48229E7(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022_m111B3857F72DABEC17260B2007E781DAD48229E7_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t2A1F1AD9044254516567D5A7EC5A34F85C85723E* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_mB320CD7A1C69D9300AAA1C59ADD16F81F53B671C(L_3, AsyncTaskMethodBuilder_1_get_Task_mB320CD7A1C69D9300AAA1C59ADD16F81F53B671C_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<GLTFast.Loading.ITextureDownload> GLTFast.Loading.CustomHeaderDownloadProvider::RequestTexture(System.Uri,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC0EF5DF8FF8AF1519325CB56B740D441F5DF4615* CustomHeaderDownloadProvider_RequestTexture_mF77061FC26241CF1F66C61944DA5E858FAB4C826 (CustomHeaderDownloadProvider_tF3FDCEC840894B712F33C3EB05CAFA5C8D4D72E6* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, bool ___nonReadable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mEE5B90857BB259A57DF4F763EB0A3E6DD05152EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC_m7F25537AEA8C7A552E62F315978CC57002A9A036_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m74A50503BF9E64BE622A0B007F22010D947F30B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mEE5B90857BB259A57DF4F763EB0A3E6DD05152EC(AsyncTaskMethodBuilder_1_Create_mEE5B90857BB259A57DF4F763EB0A3E6DD05152EC_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_4), (void*)__this);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = ___url0;
		(&V_0)->___url_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___url_2), (void*)L_1);
		bool L_2 = ___nonReadable1;
		(&V_0)->___nonReadable_3 = L_2;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC_m7F25537AEA8C7A552E62F315978CC57002A9A036(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC_m7F25537AEA8C7A552E62F315978CC57002A9A036_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_tC0EF5DF8FF8AF1519325CB56B740D441F5DF4615* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_m74A50503BF9E64BE622A0B007F22010D947F30B0(L_4, AsyncTaskMethodBuilder_1_get_Task_m74A50503BF9E64BE622A0B007F22010D947F30B0_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void GLTFast.Loading.CustomHeaderDownloadProvider::RegisterHttpHeaders(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomHeaderDownloadProvider_RegisterHttpHeaders_m699F3B55FBACCC430AA8BE42AD451AA41DD22FEC (CustomHeaderDownloadProvider_tF3FDCEC840894B712F33C3EB05CAFA5C8D4D72E6* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) 
{
	HttpHeaderU5BU5D_t191CDBB06B539B9705C5E32B416D8CCB9902DAAB* V_0 = NULL;
	int32_t V_1 = 0;
	HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if(_headers!=null) {
		HttpHeaderU5BU5D_t191CDBB06B539B9705C5E32B416D8CCB9902DAAB* L_0 = __this->____headers_0;
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		// foreach(var header in _headers)
		HttpHeaderU5BU5D_t191CDBB06B539B9705C5E32B416D8CCB9902DAAB* L_1 = __this->____headers_0;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0031;
	}

IL_0013:
	{
		// foreach(var header in _headers)
		HttpHeaderU5BU5D_t191CDBB06B539B9705C5E32B416D8CCB9902DAAB* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// request.SetRequestHeader(header.Key, header.Value);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = ___request0;
		HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975 L_7 = V_2;
		String_t* L_8 = L_7.___Key_0;
		HttpHeader_t5D55FEC90C9A194F925098A1D18A8B7F99B35975 L_9 = V_2;
		String_t* L_10 = L_9.___Value_1;
		NullCheck(L_6);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_6, L_8, L_10, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0031:
	{
		// foreach(var header in _headers)
		int32_t L_12 = V_1;
		HttpHeaderU5BU5D_t191CDBB06B539B9705C5E32B416D8CCB9902DAAB* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0013;
		}
	}

IL_0037:
	{
		// }
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
// System.Void GLTFast.Loading.CustomHeaderDownloadProvider/<Request>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestU3Ed__2_MoveNext_mDDF9018B9DF61C2CE77447074A637D11B20E8263 (U3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022_mE52B95CB4F6668912AA0B7B618F375390EE5A22F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m8FBA39CC881B9B2D3519F59041D3593874FD4B77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomHeaderDownloadProvider_RegisterHttpHeaders_m699F3B55FBACCC430AA8BE42AD451AA41DD22FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomHeaderDownload_tEEC2E24F7E2C774D978D74D3E96E7BB153642C9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CustomHeaderDownloadProvider_tF3FDCEC840894B712F33C3EB05CAFA5C8D4D72E6* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_3;
	memset((&V_3), 0, sizeof(V_3));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CustomHeaderDownloadProvider_tF3FDCEC840894B712F33C3EB05CAFA5C8D4D72E6* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0068_1;
			}
		}
		{
			// var req = new CustomHeaderDownload(url,RegisterHttpHeaders);
			Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_3 = __this->___url_2;
			CustomHeaderDownloadProvider_tF3FDCEC840894B712F33C3EB05CAFA5C8D4D72E6* L_4 = V_1;
			EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* L_5 = (EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957*)il2cpp_codegen_object_new(EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			EditUnityWebRequest__ctor_mB6619E50B3F13C642A6B600D9A3DC03BFE226004(L_5, L_4, (intptr_t)((void*)CustomHeaderDownloadProvider_RegisterHttpHeaders_m699F3B55FBACCC430AA8BE42AD451AA41DD22FEC_RuntimeMethod_var), NULL);
			CustomHeaderDownload_tEEC2E24F7E2C774D978D74D3E96E7BB153642C9F* L_6 = (CustomHeaderDownload_tEEC2E24F7E2C774D978D74D3E96E7BB153642C9F*)il2cpp_codegen_object_new(CustomHeaderDownload_tEEC2E24F7E2C774D978D74D3E96E7BB153642C9F_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			CustomHeaderDownload__ctor_mB6A9F1D6D63ACCEDE750B78FB85BCEF1BF893521(L_6, L_3, L_5, NULL);
			__this->___U3CreqU3E5__2_4 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreqU3E5__2_4), (void*)L_6);
			goto IL_008b_1;
		}

IL_0030_1:
		{
			// await Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_7;
			L_7 = Task_Yield_m243FF1482B112E594401BAC859F9084753C4E653(NULL);
			V_4 = L_7;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_8;
			L_8 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_4), NULL);
			V_3 = L_8;
			bool L_9;
			L_9 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_3), NULL);
			if (L_9)
			{
				goto IL_0084_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_11 = V_3;
			__this->___U3CU3Eu__1_5 = L_11;
			AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652* L_12 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022_mE52B95CB4F6668912AA0B7B618F375390EE5A22F(L_12, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022_mE52B95CB4F6668912AA0B7B618F375390EE5A22F_RuntimeMethod_var);
			goto IL_00dc;
		}

IL_0068_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_13 = __this->___U3CU3Eu__1_5;
			V_3 = L_13;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_14 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_14, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_0084_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_3), NULL);
		}

IL_008b_1:
		{
			// while (req.MoveNext()) {
			CustomHeaderDownload_tEEC2E24F7E2C774D978D74D3E96E7BB153642C9F* L_16 = __this->___U3CreqU3E5__2_4;
			NullCheck(L_16);
			bool L_17;
			L_17 = AwaitableDownload_MoveNext_mAC97429E70997F5D54D11DA37E0D4F43E2C84878(L_16, NULL);
			if (L_17)
			{
				goto IL_0030_1;
			}
		}
		{
			// return req;
			CustomHeaderDownload_tEEC2E24F7E2C774D978D74D3E96E7BB153642C9F* L_18 = __this->___U3CreqU3E5__2_4;
			V_2 = L_18;
			goto IL_00c1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a1;
		}
		throw e;
	}

CATCH_00a1:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CreqU3E5__2_4 = (CustomHeaderDownload_tEEC2E24F7E2C774D978D74D3E96E7BB153642C9F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreqU3E5__2_4), (void*)(CustomHeaderDownload_tEEC2E24F7E2C774D978D74D3E96E7BB153642C9F*)NULL);
		AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652* L_19 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_20 = V_5;
		AsyncTaskMethodBuilder_1_SetException_mC89DEB4422114E639FC4A078E6274694C097F35F(L_19, L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mC89DEB4422114E639FC4A078E6274694C097F35F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00dc;
	}// end catch (depth: 1)

IL_00c1:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CreqU3E5__2_4 = (CustomHeaderDownload_tEEC2E24F7E2C774D978D74D3E96E7BB153642C9F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreqU3E5__2_4), (void*)(CustomHeaderDownload_tEEC2E24F7E2C774D978D74D3E96E7BB153642C9F*)NULL);
		AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652* L_21 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_22 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m8FBA39CC881B9B2D3519F59041D3593874FD4B77(L_21, L_22, AsyncTaskMethodBuilder_1_SetResult_m8FBA39CC881B9B2D3519F59041D3593874FD4B77_RuntimeMethod_var);
	}

IL_00dc:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRequestU3Ed__2_MoveNext_mDDF9018B9DF61C2CE77447074A637D11B20E8263_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022*>(__this + _offset);
	U3CRequestU3Ed__2_MoveNext_mDDF9018B9DF61C2CE77447074A637D11B20E8263(_thisAdjusted, method);
}
// System.Void GLTFast.Loading.CustomHeaderDownloadProvider/<Request>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestU3Ed__2_SetStateMachine_mAE9E8AA3240A42A0BCBD6AB4847DCB306489FD24 (U3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m908CBDE0964FBF5A3A8103048199E66B7C187C27_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m908CBDE0964FBF5A3A8103048199E66B7C187C27(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m908CBDE0964FBF5A3A8103048199E66B7C187C27_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRequestU3Ed__2_SetStateMachine_mAE9E8AA3240A42A0BCBD6AB4847DCB306489FD24_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRequestU3Ed__2_t1C684ADAA62DA015ECB7CB9B5434E14C192F0022*>(__this + _offset);
	U3CRequestU3Ed__2_SetStateMachine_mAE9E8AA3240A42A0BCBD6AB4847DCB306489FD24(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Loading.CustomHeaderDownloadProvider/<RequestTexture>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestTextureU3Ed__3_MoveNext_m4381CE0EFEDB674C1570EFEF8D2D014B8518FA26 (U3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC_mB852E5965D7EE7CCEBBAFF2DD330865CE44FD7D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m723F74B7B525BC7C11769CC058231E682AD26BF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomHeaderDownloadProvider_RegisterHttpHeaders_m699F3B55FBACCC430AA8BE42AD451AA41DD22FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomHeaderTextureDownload_t5DD6716F8E7829C74DF25E9CC1B7AEFFF79F1946_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CustomHeaderDownloadProvider_tF3FDCEC840894B712F33C3EB05CAFA5C8D4D72E6* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_3;
	memset((&V_3), 0, sizeof(V_3));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CustomHeaderDownloadProvider_tF3FDCEC840894B712F33C3EB05CAFA5C8D4D72E6* L_1 = __this->___U3CU3E4__this_4;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006e_1;
			}
		}
		{
			// var req = new CustomHeaderTextureDownload(url,nonReadable,RegisterHttpHeaders);
			Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_3 = __this->___url_2;
			bool L_4 = __this->___nonReadable_3;
			CustomHeaderDownloadProvider_tF3FDCEC840894B712F33C3EB05CAFA5C8D4D72E6* L_5 = V_1;
			EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* L_6 = (EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957*)il2cpp_codegen_object_new(EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			EditUnityWebRequest__ctor_mB6619E50B3F13C642A6B600D9A3DC03BFE226004(L_6, L_5, (intptr_t)((void*)CustomHeaderDownloadProvider_RegisterHttpHeaders_m699F3B55FBACCC430AA8BE42AD451AA41DD22FEC_RuntimeMethod_var), NULL);
			CustomHeaderTextureDownload_t5DD6716F8E7829C74DF25E9CC1B7AEFFF79F1946* L_7 = (CustomHeaderTextureDownload_t5DD6716F8E7829C74DF25E9CC1B7AEFFF79F1946*)il2cpp_codegen_object_new(CustomHeaderTextureDownload_t5DD6716F8E7829C74DF25E9CC1B7AEFFF79F1946_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			CustomHeaderTextureDownload__ctor_mF6436A53196B01C502909532A10D4B088733B41D(L_7, L_3, L_4, L_6, NULL);
			__this->___U3CreqU3E5__2_5 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreqU3E5__2_5), (void*)L_7);
			goto IL_0091_1;
		}

IL_0036_1:
		{
			// await Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_8;
			L_8 = Task_Yield_m243FF1482B112E594401BAC859F9084753C4E653(NULL);
			V_4 = L_8;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_9;
			L_9 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_4), NULL);
			V_3 = L_9;
			bool L_10;
			L_10 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_3), NULL);
			if (L_10)
			{
				goto IL_008a_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_12 = V_3;
			__this->___U3CU3Eu__1_6 = L_12;
			AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D* L_13 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC_mB852E5965D7EE7CCEBBAFF2DD330865CE44FD7D3(L_13, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC_mB852E5965D7EE7CCEBBAFF2DD330865CE44FD7D3_RuntimeMethod_var);
			goto IL_00e2;
		}

IL_006e_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_14 = __this->___U3CU3Eu__1_6;
			V_3 = L_14;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_15 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_15, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
		}

IL_008a_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_3), NULL);
		}

IL_0091_1:
		{
			// while (req.MoveNext()) {
			CustomHeaderTextureDownload_t5DD6716F8E7829C74DF25E9CC1B7AEFFF79F1946* L_17 = __this->___U3CreqU3E5__2_5;
			NullCheck(L_17);
			bool L_18;
			L_18 = AwaitableDownload_MoveNext_mAC97429E70997F5D54D11DA37E0D4F43E2C84878(L_17, NULL);
			if (L_18)
			{
				goto IL_0036_1;
			}
		}
		{
			// return req;
			CustomHeaderTextureDownload_t5DD6716F8E7829C74DF25E9CC1B7AEFFF79F1946* L_19 = __this->___U3CreqU3E5__2_5;
			V_2 = L_19;
			goto IL_00c7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a7;
		}
		throw e;
	}

CATCH_00a7:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CreqU3E5__2_5 = (CustomHeaderTextureDownload_t5DD6716F8E7829C74DF25E9CC1B7AEFFF79F1946*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreqU3E5__2_5), (void*)(CustomHeaderTextureDownload_t5DD6716F8E7829C74DF25E9CC1B7AEFFF79F1946*)NULL);
		AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D* L_20 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_21 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m97283CA7AEB7683F8BBC9DF7C7593CD4A8A46BD1(L_20, L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m97283CA7AEB7683F8BBC9DF7C7593CD4A8A46BD1_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e2;
	}// end catch (depth: 1)

IL_00c7:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CreqU3E5__2_5 = (CustomHeaderTextureDownload_t5DD6716F8E7829C74DF25E9CC1B7AEFFF79F1946*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreqU3E5__2_5), (void*)(CustomHeaderTextureDownload_t5DD6716F8E7829C74DF25E9CC1B7AEFFF79F1946*)NULL);
		AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D* L_22 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_23 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m723F74B7B525BC7C11769CC058231E682AD26BF5(L_22, L_23, AsyncTaskMethodBuilder_1_SetResult_m723F74B7B525BC7C11769CC058231E682AD26BF5_RuntimeMethod_var);
	}

IL_00e2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRequestTextureU3Ed__3_MoveNext_m4381CE0EFEDB674C1570EFEF8D2D014B8518FA26_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC*>(__this + _offset);
	U3CRequestTextureU3Ed__3_MoveNext_m4381CE0EFEDB674C1570EFEF8D2D014B8518FA26(_thisAdjusted, method);
}
// System.Void GLTFast.Loading.CustomHeaderDownloadProvider/<RequestTexture>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestTextureU3Ed__3_SetStateMachine_m1561695906A7821EDC106B033D336DBB1A029C1D (U3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m56F62CB0DDA11F3A3C15B67FC5C841B2C45B75C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m56F62CB0DDA11F3A3C15B67FC5C841B2C45B75C5(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m56F62CB0DDA11F3A3C15B67FC5C841B2C45B75C5_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRequestTextureU3Ed__3_SetStateMachine_m1561695906A7821EDC106B033D336DBB1A029C1D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRequestTextureU3Ed__3_t52CA698BD83C906A9A8EBB068CC66B0F959030AC*>(__this + _offset);
	U3CRequestTextureU3Ed__3_SetStateMachine_m1561695906A7821EDC106B033D336DBB1A029C1D(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Loading.CustomHeaderDownload::.ctor(System.Uri,GLTFast.Loading.EditUnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomHeaderDownload__ctor_mB6A9F1D6D63ACCEDE750B78FB85BCEF1BF893521 (CustomHeaderDownload_tEEC2E24F7E2C774D978D74D3E96E7BB153642C9F* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* ___editor1, const RuntimeMethod* method) 
{
	{
		// public CustomHeaderDownload(Uri url, EditUnityWebRequest editor) : base() {
		AwaitableDownload__ctor_mCAD68FD1F80ED7AD61B8EB8C9EDD51BC855827BF(__this, NULL);
		// request = UnityWebRequest.Get(url);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___url0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1;
		L_1 = UnityWebRequest_Get_mDC47D7545DA4A2EC763C81C0A149E39CD059BF38(L_0, NULL);
		((AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)__this)->___request_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)__this)->___request_2), (void*)L_1);
		// editor(request);
		EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* L_2 = ___editor1;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = ((AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)__this)->___request_2;
		NullCheck(L_2);
		EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_inline(L_2, L_3, NULL);
		// asynOperation = request.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = ((AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)__this)->___request_2;
		NullCheck(L_4);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_5;
		L_5 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_4, NULL);
		((AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)__this)->___asynOperation_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)__this)->___asynOperation_3), (void*)L_5);
		// }
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
// System.Void GLTFast.Loading.CustomHeaderTextureDownload::.ctor(System.Uri,System.Boolean,GLTFast.Loading.EditUnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomHeaderTextureDownload__ctor_mF6436A53196B01C502909532A10D4B088733B41D (CustomHeaderTextureDownload_t5DD6716F8E7829C74DF25E9CC1B7AEFFF79F1946* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, bool ___nonReadable1, EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* ___editor2, const RuntimeMethod* method) 
{
	{
		// public CustomHeaderTextureDownload(Uri url, bool nonReadable, EditUnityWebRequest editor) : base() {
		AwaitableTextureDownload__ctor_m02724A9DA0D8C4ED89C0727B990B98509FC20AEB(__this, NULL);
		// request = CreateRequest(url,nonReadable);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___url0;
		bool L_1 = ___nonReadable1;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2;
		L_2 = AwaitableTextureDownload_CreateRequest_m84D6E7A8D05A91C940D9FF391D65B0A80DD80E83(L_0, L_1, NULL);
		((AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)__this)->___request_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)__this)->___request_2), (void*)L_2);
		// editor(request);
		EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* L_3 = ___editor2;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = ((AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)__this)->___request_2;
		NullCheck(L_3);
		EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_inline(L_3, L_4, NULL);
		// asynOperation = request.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = ((AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)__this)->___request_2;
		NullCheck(L_5);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_6;
		L_6 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_5, NULL);
		((AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)__this)->___asynOperation_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)__this)->___asynOperation_3), (void*)L_6);
		// }
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
// System.Threading.Tasks.Task`1<GLTFast.Loading.IDownload> GLTFast.Loading.DefaultDownloadProvider::Request(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t2A1F1AD9044254516567D5A7EC5A34F85C85723E* DefaultDownloadProvider_Request_m389A82C7C36D7A3DAE7939029332E1A40EB02DFF (DefaultDownloadProvider_t05AC351D28EED67EC44475D8029AEAE38A8BFEF9* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m9EE54BB46AF6EB7C3A753311850DEC6E10D88ACB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA_m0514C278A9208F839EC5E3314B7EE0A541793931_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mB320CD7A1C69D9300AAA1C59ADD16F81F53B671C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m9EE54BB46AF6EB7C3A753311850DEC6E10D88ACB(AsyncTaskMethodBuilder_1_Create_m9EE54BB46AF6EB7C3A753311850DEC6E10D88ACB_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = ___url0;
		(&V_0)->___url_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___url_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA_m0514C278A9208F839EC5E3314B7EE0A541793931(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA_m0514C278A9208F839EC5E3314B7EE0A541793931_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t2A1F1AD9044254516567D5A7EC5A34F85C85723E* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_mB320CD7A1C69D9300AAA1C59ADD16F81F53B671C(L_3, AsyncTaskMethodBuilder_1_get_Task_mB320CD7A1C69D9300AAA1C59ADD16F81F53B671C_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<GLTFast.Loading.ITextureDownload> GLTFast.Loading.DefaultDownloadProvider::RequestTexture(System.Uri,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC0EF5DF8FF8AF1519325CB56B740D441F5DF4615* DefaultDownloadProvider_RequestTexture_mEB6A58A6688F2F80B5CFF2D99ABBBE7CDD7B57A8 (DefaultDownloadProvider_t05AC351D28EED67EC44475D8029AEAE38A8BFEF9* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, bool ___nonReadable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mEE5B90857BB259A57DF4F763EB0A3E6DD05152EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A_m052ED8BAE23144694F745F5422E0A222BE1520CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m74A50503BF9E64BE622A0B007F22010D947F30B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mEE5B90857BB259A57DF4F763EB0A3E6DD05152EC(AsyncTaskMethodBuilder_1_Create_mEE5B90857BB259A57DF4F763EB0A3E6DD05152EC_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = ___url0;
		(&V_0)->___url_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___url_2), (void*)L_1);
		bool L_2 = ___nonReadable1;
		(&V_0)->___nonReadable_3 = L_2;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A_m052ED8BAE23144694F745F5422E0A222BE1520CC(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A_m052ED8BAE23144694F745F5422E0A222BE1520CC_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_tC0EF5DF8FF8AF1519325CB56B740D441F5DF4615* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_m74A50503BF9E64BE622A0B007F22010D947F30B0(L_4, AsyncTaskMethodBuilder_1_get_Task_m74A50503BF9E64BE622A0B007F22010D947F30B0_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void GLTFast.Loading.DefaultDownloadProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultDownloadProvider__ctor_mFC79149215C46CAC707808DE6C4B025949A02D32 (DefaultDownloadProvider_t05AC351D28EED67EC44475D8029AEAE38A8BFEF9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void GLTFast.Loading.DefaultDownloadProvider/<Request>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestU3Ed__0_MoveNext_mB6CCFED92467137BCBE1A1E6F2C776FFA2ADFD9B (U3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA_mC0224070A97E856130B364D88BFE9AE61BD3E85C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m8FBA39CC881B9B2D3519F59041D3593874FD4B77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_2;
	memset((&V_2), 0, sizeof(V_2));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0054_1;
			}
		}
		{
			// var req = new AwaitableDownload(url);
			Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_2 = __this->___url_2;
			AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4* L_3 = (AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)il2cpp_codegen_object_new(AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			AwaitableDownload__ctor_m5A621A527DC5DC3F0CD6491DA6E7681515EF800D(L_3, L_2, NULL);
			__this->___U3CreqU3E5__2_3 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreqU3E5__2_3), (void*)L_3);
			goto IL_0077_1;
		}

IL_001d_1:
		{
			// await Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_4;
			L_4 = Task_Yield_m243FF1482B112E594401BAC859F9084753C4E653(NULL);
			V_3 = L_4;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_5;
			L_5 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_3), NULL);
			V_2 = L_5;
			bool L_6;
			L_6 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_2), NULL);
			if (L_6)
			{
				goto IL_0070_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_8 = V_2;
			__this->___U3CU3Eu__1_4 = L_8;
			AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA_mC0224070A97E856130B364D88BFE9AE61BD3E85C(L_9, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA_mC0224070A97E856130B364D88BFE9AE61BD3E85C_RuntimeMethod_var);
			goto IL_00c8;
		}

IL_0054_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_10 = __this->___U3CU3Eu__1_4;
			V_2 = L_10;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_11 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_11, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_0070_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_2), NULL);
		}

IL_0077_1:
		{
			// while (req.MoveNext()) {
			AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4* L_13 = __this->___U3CreqU3E5__2_3;
			NullCheck(L_13);
			bool L_14;
			L_14 = AwaitableDownload_MoveNext_mAC97429E70997F5D54D11DA37E0D4F43E2C84878(L_13, NULL);
			if (L_14)
			{
				goto IL_001d_1;
			}
		}
		{
			// return req;
			AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4* L_15 = __this->___U3CreqU3E5__2_3;
			V_1 = L_15;
			goto IL_00ad;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008d;
		}
		throw e;
	}

CATCH_008d:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CreqU3E5__2_3 = (AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreqU3E5__2_3), (void*)(AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)NULL);
		AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652* L_16 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_17 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mC89DEB4422114E639FC4A078E6274694C097F35F(L_16, L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mC89DEB4422114E639FC4A078E6274694C097F35F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c8;
	}// end catch (depth: 1)

IL_00ad:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CreqU3E5__2_3 = (AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreqU3E5__2_3), (void*)(AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)NULL);
		AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652* L_18 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_19 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m8FBA39CC881B9B2D3519F59041D3593874FD4B77(L_18, L_19, AsyncTaskMethodBuilder_1_SetResult_m8FBA39CC881B9B2D3519F59041D3593874FD4B77_RuntimeMethod_var);
	}

IL_00c8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRequestU3Ed__0_MoveNext_mB6CCFED92467137BCBE1A1E6F2C776FFA2ADFD9B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA*>(__this + _offset);
	U3CRequestU3Ed__0_MoveNext_mB6CCFED92467137BCBE1A1E6F2C776FFA2ADFD9B(_thisAdjusted, method);
}
// System.Void GLTFast.Loading.DefaultDownloadProvider/<Request>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestU3Ed__0_SetStateMachine_m38530867B1400F6C1D4C589540115DBA56325F31 (U3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m908CBDE0964FBF5A3A8103048199E66B7C187C27_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tCC1522EF63EABA8A5651A8B5318C1291FE3E7652* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m908CBDE0964FBF5A3A8103048199E66B7C187C27(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m908CBDE0964FBF5A3A8103048199E66B7C187C27_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRequestU3Ed__0_SetStateMachine_m38530867B1400F6C1D4C589540115DBA56325F31_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRequestU3Ed__0_tC7346BEA6A642AE00BF8C869703FD800F10C43EA*>(__this + _offset);
	U3CRequestU3Ed__0_SetStateMachine_m38530867B1400F6C1D4C589540115DBA56325F31(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Loading.DefaultDownloadProvider/<RequestTexture>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestTextureU3Ed__1_MoveNext_m467120773996656AF90C31E921F0633FBFB390DD (U3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A_m9F3ECDC3CDE18F5D35B4EAECC2EAAF894A4D9EDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m723F74B7B525BC7C11769CC058231E682AD26BF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_2;
	memset((&V_2), 0, sizeof(V_2));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_005a_1;
			}
		}
		{
			// var req = new AwaitableTextureDownload(url,nonReadable);
			Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_2 = __this->___url_2;
			bool L_3 = __this->___nonReadable_3;
			AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E* L_4 = (AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E*)il2cpp_codegen_object_new(AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			AwaitableTextureDownload__ctor_m8B28B44F3044C9ED414A4101263708E23DE77805(L_4, L_2, L_3, NULL);
			__this->___U3CreqU3E5__2_4 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreqU3E5__2_4), (void*)L_4);
			goto IL_007d_1;
		}

IL_0023_1:
		{
			// await Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_5;
			L_5 = Task_Yield_m243FF1482B112E594401BAC859F9084753C4E653(NULL);
			V_3 = L_5;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_6;
			L_6 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_3), NULL);
			V_2 = L_6;
			bool L_7;
			L_7 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_2), NULL);
			if (L_7)
			{
				goto IL_0076_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_9 = V_2;
			__this->___U3CU3Eu__1_5 = L_9;
			AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A_m9F3ECDC3CDE18F5D35B4EAECC2EAAF894A4D9EDB(L_10, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A_m9F3ECDC3CDE18F5D35B4EAECC2EAAF894A4D9EDB_RuntimeMethod_var);
			goto IL_00ce;
		}

IL_005a_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_11 = __this->___U3CU3Eu__1_5;
			V_2 = L_11;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_12 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_12, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_0076_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_2), NULL);
		}

IL_007d_1:
		{
			// while (req.MoveNext()) {
			AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E* L_14 = __this->___U3CreqU3E5__2_4;
			NullCheck(L_14);
			bool L_15;
			L_15 = AwaitableDownload_MoveNext_mAC97429E70997F5D54D11DA37E0D4F43E2C84878(L_14, NULL);
			if (L_15)
			{
				goto IL_0023_1;
			}
		}
		{
			// return req;
			AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E* L_16 = __this->___U3CreqU3E5__2_4;
			V_1 = L_16;
			goto IL_00b3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0093;
		}
		throw e;
	}

CATCH_0093:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CreqU3E5__2_4 = (AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreqU3E5__2_4), (void*)(AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E*)NULL);
		AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D* L_17 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_18 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m97283CA7AEB7683F8BBC9DF7C7593CD4A8A46BD1(L_17, L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m97283CA7AEB7683F8BBC9DF7C7593CD4A8A46BD1_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ce;
	}// end catch (depth: 1)

IL_00b3:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CreqU3E5__2_4 = (AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreqU3E5__2_4), (void*)(AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E*)NULL);
		AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D* L_19 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_20 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m723F74B7B525BC7C11769CC058231E682AD26BF5(L_19, L_20, AsyncTaskMethodBuilder_1_SetResult_m723F74B7B525BC7C11769CC058231E682AD26BF5_RuntimeMethod_var);
	}

IL_00ce:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRequestTextureU3Ed__1_MoveNext_m467120773996656AF90C31E921F0633FBFB390DD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A*>(__this + _offset);
	U3CRequestTextureU3Ed__1_MoveNext_m467120773996656AF90C31E921F0633FBFB390DD(_thisAdjusted, method);
}
// System.Void GLTFast.Loading.DefaultDownloadProvider/<RequestTexture>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestTextureU3Ed__1_SetStateMachine_m072425C6814ACF21A4C2B7335E04CCE7A2DFA15F (U3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m56F62CB0DDA11F3A3C15B67FC5C841B2C45B75C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tA0B678502BABC2D606E026107032E769E6C48C7D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m56F62CB0DDA11F3A3C15B67FC5C841B2C45B75C5(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m56F62CB0DDA11F3A3C15B67FC5C841B2C45B75C5_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRequestTextureU3Ed__1_SetStateMachine_m072425C6814ACF21A4C2B7335E04CCE7A2DFA15F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRequestTextureU3Ed__1_tE1AA4E9BA3380148716FABC485AE169D199B936A*>(__this + _offset);
	U3CRequestTextureU3Ed__1_SetStateMachine_m072425C6814ACF21A4C2B7335E04CCE7A2DFA15F(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Loading.AwaitableDownload::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaitableDownload__ctor_mCAD68FD1F80ED7AD61B8EB8C9EDD51BC855827BF (AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4* __this, const RuntimeMethod* method) 
{
	{
		// public AwaitableDownload() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public AwaitableDownload() {}
		return;
	}
}
// System.Void GLTFast.Loading.AwaitableDownload::.ctor(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaitableDownload__ctor_m5A621A527DC5DC3F0CD6491DA6E7681515EF800D (AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, const RuntimeMethod* method) 
{
	{
		// public AwaitableDownload(Uri url) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Init(url);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___url0;
		AwaitableDownload_Init_m83603A60BE2DFB9A77E3B760DFA36B7C804A3F01(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Loading.AwaitableDownload::Init(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaitableDownload_Init_m83603A60BE2DFB9A77E3B760DFA36B7C804A3F01 (AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, const RuntimeMethod* method) 
{
	{
		// request = UnityWebRequest.Get(url);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___url0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1;
		L_1 = UnityWebRequest_Get_mDC47D7545DA4A2EC763C81C0A149E39CD059BF38(L_0, NULL);
		__this->___request_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___request_2), (void*)L_1);
		// asynOperation = request.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = __this->___request_2;
		NullCheck(L_2);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_3;
		L_3 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_2, NULL);
		__this->___asynOperation_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___asynOperation_3), (void*)L_3);
		// }
		return;
	}
}
// System.Object GLTFast.Loading.AwaitableDownload::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AwaitableDownload_get_Current_mA14F6BB188EAED62CD19DE5B6547514DC4FD29E5 (AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4* __this, const RuntimeMethod* method) 
{
	{
		// public object Current { get { return asynOperation; } }
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_0 = __this->___asynOperation_3;
		return L_0;
	}
}
// System.Boolean GLTFast.Loading.AwaitableDownload::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AwaitableDownload_MoveNext_mAC97429E70997F5D54D11DA37E0D4F43E2C84878 (AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4* __this, const RuntimeMethod* method) 
{
	{
		// public bool MoveNext() { return !asynOperation.isDone; }
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_0 = __this->___asynOperation_3;
		NullCheck(L_0);
		bool L_1;
		L_1 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void GLTFast.Loading.AwaitableDownload::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaitableDownload_Reset_m84EA85E6D573F601018B732B4A3793647F1BADB7 (AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4* __this, const RuntimeMethod* method) 
{
	{
		// public void Reset() {}
		return;
	}
}
// System.Boolean GLTFast.Loading.AwaitableDownload::get_success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AwaitableDownload_get_success_m2BF38A29FBEA99C8856789BAFCD885B01277991B (AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4* __this, const RuntimeMethod* method) 
{
	{
		// public bool success => request.isDone && request.result == UnityWebRequest.Result.Success;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___request_2;
		NullCheck(L_0);
		bool L_1;
		L_1 = UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = __this->___request_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_2, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.String GLTFast.Loading.AwaitableDownload::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AwaitableDownload_get_error_m4DDCCAA703488539E9061A2C5B4E959F0AF48B2B (AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4* __this, const RuntimeMethod* method) 
{
	{
		// public string error { get { return request.error; } }
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___request_2;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_0, NULL);
		return L_1;
	}
}
// System.Byte[] GLTFast.Loading.AwaitableDownload::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AwaitableDownload_get_data_mEA91AF15FD75A38BBB75442C8C6B94A91FABC236 (AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4* __this, const RuntimeMethod* method) 
{
	{
		// public byte[] data { get { return request.downloadHandler.data; } }
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___request_2;
		NullCheck(L_0);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_1;
		L_1 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_0, NULL);
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3(L_1, NULL);
		return L_2;
	}
}
// System.String GLTFast.Loading.AwaitableDownload::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AwaitableDownload_get_text_m30C5279C98DCF84261B9BEDFDF98F1FF5BE90B92 (AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4* __this, const RuntimeMethod* method) 
{
	{
		// public string text { get { return request.downloadHandler.text; } }
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___request_2;
		NullCheck(L_0);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_1;
		L_1 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_1, NULL);
		return L_2;
	}
}
// System.Nullable`1<System.Boolean> GLTFast.Loading.AwaitableDownload::get_isBinary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 AwaitableDownload_get_isBinary_mE208F27C8818157E1186153F7FFD1715343372A7 (AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14D53393EE7AD0543909EBF86FA28332A16C4968);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC5EA26A51DC7D0B50CD6BEBDE0E9895009F502C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (success)
		bool L_0;
		L_0 = AwaitableDownload_get_success_m2BF38A29FBEA99C8856789BAFCD885B01277991B(__this, NULL);
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		// string contentType = request.GetResponseHeader("Content-Type");
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___request_2;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = UnityWebRequest_GetResponseHeader_m9AC0E1BB43CE0469BC7FE865B3D9B2C4198DDF03(L_1, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, NULL);
		V_0 = L_2;
		// if (contentType == GLB_MIME)
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDC5EA26A51DC7D0B50CD6BEBDE0E9895009F502C, NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// return true;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_5), (bool)1, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		return L_5;
	}

IL_002d:
	{
		// if (contentType == GLTF_MIME)
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteral14D53393EE7AD0543909EBF86FA28332A16C4968, NULL);
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		// return false;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_8), (bool)0, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		return L_8;
	}

IL_0041:
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_9 = V_1;
		return L_9;
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
// System.Void GLTFast.Loading.AwaitableTextureDownload::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaitableTextureDownload__ctor_m02724A9DA0D8C4ED89C0727B990B98509FC20AEB (AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E* __this, const RuntimeMethod* method) 
{
	{
		// public AwaitableTextureDownload():base() {}
		AwaitableDownload__ctor_mCAD68FD1F80ED7AD61B8EB8C9EDD51BC855827BF(__this, NULL);
		// public AwaitableTextureDownload():base() {}
		return;
	}
}
// System.Void GLTFast.Loading.AwaitableTextureDownload::.ctor(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaitableTextureDownload__ctor_m49102735301468881742DD2E56C7A33A5AA25ADE (AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, const RuntimeMethod* method) 
{
	{
		// public AwaitableTextureDownload(Uri url):base(url) {}
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___url0;
		AwaitableDownload__ctor_m5A621A527DC5DC3F0CD6491DA6E7681515EF800D(__this, L_0, NULL);
		// public AwaitableTextureDownload(Uri url):base(url) {}
		return;
	}
}
// System.Void GLTFast.Loading.AwaitableTextureDownload::.ctor(System.Uri,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaitableTextureDownload__ctor_m8B28B44F3044C9ED414A4101263708E23DE77805 (AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, bool ___nonReadable1, const RuntimeMethod* method) 
{
	{
		// public AwaitableTextureDownload(Uri url, bool nonReadable) {
		AwaitableDownload__ctor_mCAD68FD1F80ED7AD61B8EB8C9EDD51BC855827BF(__this, NULL);
		// Init(url,nonReadable);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___url0;
		bool L_1 = ___nonReadable1;
		AwaitableTextureDownload_Init_mD0E1517D2A6B9C671CF5161BD28A14BFDAE3D683(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest GLTFast.Loading.AwaitableTextureDownload::CreateRequest(System.Uri,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* AwaitableTextureDownload_CreateRequest_m84D6E7A8D05A91C940D9FF391D65B0A80DD80E83 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, bool ___nonReadable1, const RuntimeMethod* method) 
{
	{
		// return UnityWebRequestTexture.GetTexture(url,nonReadable);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___url0;
		bool L_1 = ___nonReadable1;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2;
		L_2 = UnityWebRequestTexture_GetTexture_m3B98DCD75466F014E65BE779EE52EF8E7350323A(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void GLTFast.Loading.AwaitableTextureDownload::Init(System.Uri,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaitableTextureDownload_Init_mD0E1517D2A6B9C671CF5161BD28A14BFDAE3D683 (AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, bool ___nonReadable1, const RuntimeMethod* method) 
{
	{
		// request = CreateRequest(url,nonReadable);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___url0;
		bool L_1 = ___nonReadable1;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2;
		L_2 = AwaitableTextureDownload_CreateRequest_m84D6E7A8D05A91C940D9FF391D65B0A80DD80E83(L_0, L_1, NULL);
		((AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)__this)->___request_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)__this)->___request_2), (void*)L_2);
		// asynOperation = request.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = ((AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)__this)->___request_2;
		NullCheck(L_3);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_4;
		L_4 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_3, NULL);
		((AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)__this)->___asynOperation_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)__this)->___asynOperation_3), (void*)L_4);
		// }
		return;
	}
}
// UnityEngine.Texture2D GLTFast.Loading.AwaitableTextureDownload::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* AwaitableTextureDownload_get_texture_m7DD702F8CF8A98ED3FB11331E7628471A740902A (AwaitableTextureDownload_t1FF46D0C4C3D68A6E1B2229F4CAB2616C8A1855E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (request.downloadHandler as  DownloadHandlerTexture ).texture;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ((AwaitableDownload_t0CA59D7E8CAF10AA7C33C894E2B73B0F45C085D4*)__this)->___request_2;
		NullCheck(L_0);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_1;
		L_1 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_0, NULL);
		NullCheck(((DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C*)IsInstSealed((RuntimeObject*)L_1, DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_il2cpp_TypeInfo_var)));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2;
		L_2 = DownloadHandlerTexture_get_texture_m170B5539995EB5984E98E426F52983589F7BEB7C(((DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C*)IsInstSealed((RuntimeObject*)L_1, DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_il2cpp_TypeInfo_var)), NULL);
		return L_2;
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
// GLTFast.Loading.IDownload GLTFast.Loading.TextureDownloadBase::get_download()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextureDownloadBase_get_download_mBACEE2A4D876E39D9F4966B37D5A69655C84BC3A (TextureDownloadBase_tF96FCC579EC31E145C895B919EED83C285BEC613* __this, const RuntimeMethod* method) 
{
	{
		// public IDownload download { get; protected set; }
		RuntimeObject* L_0 = __this->___U3CdownloadU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void GLTFast.Loading.TextureDownloadBase::set_download(GLTFast.Loading.IDownload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureDownloadBase_set_download_mA99131BC438E4CD8820976E6BD9BC21426FA735A (TextureDownloadBase_tF96FCC579EC31E145C895B919EED83C285BEC613* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IDownload download { get; protected set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CdownloadU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdownloadU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void GLTFast.Loading.TextureDownloadBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureDownloadBase__ctor_mEC18C449B35514F2262790E295CD9BBFA8EE880B (TextureDownloadBase_tF96FCC579EC31E145C895B919EED83C285BEC613* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void $BurstDirectCallInitializer::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24BurstDirectCallInitializer_Initialize_m9CD45C310CAD3986162DAAB4525F9252EF264B69 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Float_00000178U24BurstDirectCall_t50092319CDD14765BF7431F4E51D320A54165FF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int16Normalized_00000180U24BurstDirectCall_tFA5B39745C3A51220BE073CB3B739E9C66A111EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int16_0000017BU24BurstDirectCall_t1F4D7BCF618E651E30BCD563F34C0BEDE4A6E727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int8Normalized_0000017EU24BurstDirectCall_t047A5040498D48C007E3FE39693AB4DF5BD57F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int8_00000179U24BurstDirectCall_tBE6C0CCDAD6AE68EB667E7766930F100167CA777_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt16Normalized_00000181U24BurstDirectCall_t354823D9597B56E7601C710E7FF0EC76699443CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt16_0000017CU24BurstDirectCall_tD5B833469F7824865609A8C53DE0E9F5C1A1F772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt32Normalized_00000182U24BurstDirectCall_tF22B27D8DFF3662DC541169C0D4A6924A31E3ED4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt32_0000017DU24BurstDirectCall_t3CB8BD4C4BF47BED324EE497D4B10F5541D01771_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt8Normalized_0000017FU24BurstDirectCall_t7BE29966A06AE6171EF070D0B22757DE06E64E68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt8_0000017AU24BurstDirectCall_tB1F33EC6352C8E41B1A395AA3208EC38A641C39A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueInt16_00000176U24BurstDirectCall_t82D5E7F8AE93FEB195DDD65B27C1688EF2855BAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueInt8_00000174U24BurstDirectCall_t315C15A1921092F1F75E9400917397DD359F4EE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt16_00000175U24BurstDirectCall_t33AF078086B9C949D1F8C25BA488C5A44ED0A5FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt32_00000177U24BurstDirectCall_tDEFEE2ADE9A384E330AF1274E8954DEA1C9887E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt8_00000173U24BurstDirectCall_tA4751A7194C0ABA191550E6630C27D193282E760_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt8_00000173U24BurstDirectCall_tA4751A7194C0ABA191550E6630C27D193282E760_il2cpp_TypeInfo_var);
		GetIndexValueUInt8_00000173U24BurstDirectCall_Initialize_m4D5E7B95DF5433AA2AA24C9D1D4D16A5FB392A22(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueInt8_00000174U24BurstDirectCall_t315C15A1921092F1F75E9400917397DD359F4EE0_il2cpp_TypeInfo_var);
		GetIndexValueInt8_00000174U24BurstDirectCall_Initialize_m96550465C26E3C9CC031CC0C7DD0AE4BF10BCBD8(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt16_00000175U24BurstDirectCall_t33AF078086B9C949D1F8C25BA488C5A44ED0A5FA_il2cpp_TypeInfo_var);
		GetIndexValueUInt16_00000175U24BurstDirectCall_Initialize_m27BE93177367DE61A06903898F4B7501E145BBC6(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueInt16_00000176U24BurstDirectCall_t82D5E7F8AE93FEB195DDD65B27C1688EF2855BAC_il2cpp_TypeInfo_var);
		GetIndexValueInt16_00000176U24BurstDirectCall_Initialize_mD3C95057C6CBCD6EC5DA4FC18C9205FDA30EFD4C(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt32_00000177U24BurstDirectCall_tDEFEE2ADE9A384E330AF1274E8954DEA1C9887E1_il2cpp_TypeInfo_var);
		GetIndexValueUInt32_00000177U24BurstDirectCall_Initialize_mDD4AA2505292A801B779F5F22627E50867B92688(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Float_00000178U24BurstDirectCall_t50092319CDD14765BF7431F4E51D320A54165FF1_il2cpp_TypeInfo_var);
		GetFloat3Float_00000178U24BurstDirectCall_Initialize_mECF49E0FBF399D47E9D09F5051F726BFC4F6417A(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int8_00000179U24BurstDirectCall_tBE6C0CCDAD6AE68EB667E7766930F100167CA777_il2cpp_TypeInfo_var);
		GetFloat3Int8_00000179U24BurstDirectCall_Initialize_m3896B8F9C7E69A6DF09CEFACE8F1E95B9D7760F7(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt8_0000017AU24BurstDirectCall_tB1F33EC6352C8E41B1A395AA3208EC38A641C39A_il2cpp_TypeInfo_var);
		GetFloat3UInt8_0000017AU24BurstDirectCall_Initialize_mA271DDD0B5370027B9FC52D9DA1694B22440FA73(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int16_0000017BU24BurstDirectCall_t1F4D7BCF618E651E30BCD563F34C0BEDE4A6E727_il2cpp_TypeInfo_var);
		GetFloat3Int16_0000017BU24BurstDirectCall_Initialize_mB52740F634ED58519694FAA2E5E6D1D473E0E888(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt16_0000017CU24BurstDirectCall_tD5B833469F7824865609A8C53DE0E9F5C1A1F772_il2cpp_TypeInfo_var);
		GetFloat3UInt16_0000017CU24BurstDirectCall_Initialize_mA6AF583AC118ACF7D4A47DC6D656D669916AB843(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt32_0000017DU24BurstDirectCall_t3CB8BD4C4BF47BED324EE497D4B10F5541D01771_il2cpp_TypeInfo_var);
		GetFloat3UInt32_0000017DU24BurstDirectCall_Initialize_m38D7C9BE850D90495ABBFA3B7474E6368B11BBD9(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int8Normalized_0000017EU24BurstDirectCall_t047A5040498D48C007E3FE39693AB4DF5BD57F5F_il2cpp_TypeInfo_var);
		GetFloat3Int8Normalized_0000017EU24BurstDirectCall_Initialize_mF1FDE540B10F3F04962068AF02E76149126201F4(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt8Normalized_0000017FU24BurstDirectCall_t7BE29966A06AE6171EF070D0B22757DE06E64E68_il2cpp_TypeInfo_var);
		GetFloat3UInt8Normalized_0000017FU24BurstDirectCall_Initialize_mF42A963CC1F09EDB2E165CCA46E19408203EB926(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int16Normalized_00000180U24BurstDirectCall_tFA5B39745C3A51220BE073CB3B739E9C66A111EA_il2cpp_TypeInfo_var);
		GetFloat3Int16Normalized_00000180U24BurstDirectCall_Initialize_mD7572951198D26549152E000CA073AF40902E61B(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt16Normalized_00000181U24BurstDirectCall_t354823D9597B56E7601C710E7FF0EC76699443CD_il2cpp_TypeInfo_var);
		GetFloat3UInt16Normalized_00000181U24BurstDirectCall_Initialize_m52C126AB788E2FA5A52F577597D9FC036D4690E8(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt32Normalized_00000182U24BurstDirectCall_tF22B27D8DFF3662DC541169C0D4A6924A31E3ED4_il2cpp_TypeInfo_var);
		GetFloat3UInt32Normalized_00000182U24BurstDirectCall_Initialize_mBF0698BE3AB01863D3DBD08AA1D450CA46C6921A(NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GetIndexDelegate_Invoke_m6C9994C288C8CCA276A0A99084C6C51101B93114_inline (GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* __this, void* ___baseAddress0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, void*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___baseAddress0, ___index1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GetFloat3Delegate_Invoke_mDE2C9669A16C8D0572A2A964BE5F34F60DC3D2A1_inline (GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___destination0, void* ___src1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___destination0, ___src1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		// this.z = z;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		// this.w = w;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Division_mB4DAA5C12513CF75D56DC807B886074A85FD5C9F_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___lhs0, float ___rhs1, const RuntimeMethod* method) 
{
	{
		// public static float4 operator / (float4 lhs, float rhs) { return new float4 (lhs.x / rhs, lhs.y / rhs, lhs.z / rhs, lhs.w / rhs); }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		float L_2 = ___rhs1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_3 = ___lhs0;
		float L_4 = L_3.___y_1;
		float L_5 = ___rhs1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = ___lhs0;
		float L_7 = L_6.___z_2;
		float L_8 = ___rhs1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_9 = ___lhs0;
		float L_10 = L_9.___w_3;
		float L_11 = ___rhs1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_12), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), ((float)(L_10/L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Implicit_m5427E8A9BC084ACA5896A5DDED2DA6471F0619CC_inline (float ___v0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator float4(float v) { return new float4(v); }
		float L_0 = ___v0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1;
		memset((&L_1), 0, sizeof(L_1));
		float4__ctor_m103F8D391212FB2B0F01D09F7E9CCE4BDF0C7839_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E math_max_m72846DFE0AC2EF4D93BB4840595C649384976BE7_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___x0, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___y1, const RuntimeMethod* method) 
{
	{
		// public static float4 max(float4 x, float4 y) { return new float4(max(x.x, y.x), max(x.y, y.y), max(x.z, y.z), max(x.w, y.w)); }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___x0;
		float L_1 = L_0.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2 = ___y1;
		float L_3 = L_2.___x_0;
		float L_4;
		L_4 = math_max_mF7035168A46D333C6A703B673220B115411B67C1_inline(L_1, L_3, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_5 = ___x0;
		float L_6 = L_5.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7 = ___y1;
		float L_8 = L_7.___y_1;
		float L_9;
		L_9 = math_max_mF7035168A46D333C6A703B673220B115411B67C1_inline(L_6, L_8, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___x0;
		float L_11 = L_10.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12 = ___y1;
		float L_13 = L_12.___z_2;
		float L_14;
		L_14 = math_max_mF7035168A46D333C6A703B673220B115411B67C1_inline(L_11, L_13, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_15 = ___x0;
		float L_16 = L_15.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_17 = ___y1;
		float L_18 = L_17.___w_3;
		float L_19;
		L_19 = math_max_mF7035168A46D333C6A703B673220B115411B67C1_inline(L_16, L_18, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_20;
		memset((&L_20), 0, sizeof(L_20));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_20), L_4, L_9, L_14, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E math_normalize_m65D494E32BA26637F4F781F54BCFB5754422FC3B_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___x0, const RuntimeMethod* method) 
{
	{
		// public static float4 normalize(float4 x) { return rsqrt(dot(x, x)) * x; }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___x0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1 = ___x0;
		float L_2;
		L_2 = math_dot_mAE7770D5D8ABCDC54704D1A1CE0D484136C5586C_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = math_rsqrt_mB695A0575E7C8F937B0E12804508B0F489F55997_inline(L_2, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___x0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_5;
		L_5 = float4_op_Multiply_m4322D91DC960C16DFB4B645FF997F6A57821E41D_inline(L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		// this.z = z;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Division_m337596E152F22C0A19CD1189C6E38BC5EAB9514F_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___lhs0, float ___rhs1, const RuntimeMethod* method) 
{
	{
		// public static float3 operator / (float3 lhs, float rhs) { return new float3 (lhs.x / rhs, lhs.y / rhs, lhs.z / rhs); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		float L_2 = ___rhs1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = ___lhs0;
		float L_4 = L_3.___y_1;
		float L_5 = ___rhs1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = ___lhs0;
		float L_7 = L_6.___z_2;
		float L_8 = ___rhs1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_9;
		memset((&L_9), 0, sizeof(L_9));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Implicit_m47B2AAB9681E482AB9C4CB9B1691619EB72C536B_inline (float ___v0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator float3(float v) { return new float3(v); }
		float L_0 = ___v0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1;
		memset((&L_1), 0, sizeof(L_1));
		float3__ctor_m777F109CF7EBEEC78FAE5DBE52E4498CFA65E8C4_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_max_mEAED152166B3B2D1D6EF379FFAD18A85D52E6007_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___x0, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___y1, const RuntimeMethod* method) 
{
	{
		// public static float3 max(float3 x, float3 y) { return new float3(max(x.x, y.x), max(x.y, y.y), max(x.z, y.z)); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___x0;
		float L_1 = L_0.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___y1;
		float L_3 = L_2.___x_0;
		float L_4;
		L_4 = math_max_mF7035168A46D333C6A703B673220B115411B67C1_inline(L_1, L_3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5 = ___x0;
		float L_6 = L_5.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7 = ___y1;
		float L_8 = L_7.___y_1;
		float L_9;
		L_9 = math_max_mF7035168A46D333C6A703B673220B115411B67C1_inline(L_6, L_8, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_10 = ___x0;
		float L_11 = L_10.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12 = ___y1;
		float L_13 = L_12.___z_2;
		float L_14;
		L_14 = math_max_mF7035168A46D333C6A703B673220B115411B67C1_inline(L_11, L_13, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_15;
		memset((&L_15), 0, sizeof(L_15));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_15), L_4, L_9, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_normalize_m826725DC58F0CE455E3DEB3BD4808C13CBC81E25_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___x0, const RuntimeMethod* method) 
{
	{
		// public static float3 normalize(float3 x) { return rsqrt(dot(x, x)) * x; }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___x0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___x0;
		float L_2;
		L_2 = math_dot_mFC6E6AC5C12A0802A91EB7F9A897802DFF03C44D_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = math_rsqrt_mB695A0575E7C8F937B0E12804508B0F489F55997_inline(L_2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___x0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5;
		L_5 = float3_op_Multiply_mB08DA9B217A0DA39BABCE64FFE69BEA67D37D04F_inline(L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Implicit_m2D3D66A7EE86A311E60BF3C56EE34AAC6457D01D_inline (int32_t ___v0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator float3(int v) { return new float3(v); }
		int32_t L_0 = ___v0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1;
		memset((&L_1), 0, sizeof(L_1));
		float3__ctor_m131368AA87C134F64DD0B5B8684C1345BEC6EE59_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void uint4__ctor_m59B6A219A0285C60FCF2977679BF89C72B502008_inline (uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, uint32_t ___w3, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		uint32_t L_0 = ___x0;
		__this->___x_0 = L_0;
		// this.y = y;
		uint32_t L_1 = ___y1;
		__this->___y_1 = L_1;
		// this.z = z;
		uint32_t L_2 = ___z2;
		__this->___z_2 = L_2;
		// this.w = w;
		uint32_t L_3 = ___w3;
		__this->___w_3 = L_3;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_abs_mD6633C641692C4A0AEEFB52575D81599ACF1F7F5_inline (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float abs(float x) { return asfloat(asuint(x) & 0x7FFFFFFF); }
		float L_0 = ___x0;
		uint32_t L_1;
		L_1 = math_asuint_mE2534002331AC55DC7BC15E103D3CB7A4465F076_inline(L_0, NULL);
		float L_2;
		L_2 = math_asfloat_m6001AEADA0D3BB53A5BE113CE7052AB6D96FAABA_inline(((int32_t)((int32_t)L_1&((int32_t)2147483647LL))), NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_max_mF7035168A46D333C6A703B673220B115411B67C1_inline (float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		// public static float max(float x, float y) { return float.IsNaN(y) || x > y ? x : y; }
		float L_0 = ___y1;
		bool L_1;
		L_1 = Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		float L_2 = ___x0;
		float L_3 = ___y1;
		if ((((float)L_2) > ((float)L_3)))
		{
			goto IL_000e;
		}
	}
	{
		float L_4 = ___y1;
		return L_4;
	}

IL_000e:
	{
		float L_5 = ___x0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EditUnityWebRequest_Invoke_mB4635DF2823E968A9F8C5B39558EA3B27EAAC0CA_inline (EditUnityWebRequest_t6101341D344F967D7F8588E058DC022BDA5C4957* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___request0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_m103F8D391212FB2B0F01D09F7E9CCE4BDF0C7839_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___v0, const RuntimeMethod* method) 
{
	{
		// this.x = v;
		float L_0 = ___v0;
		__this->___x_0 = L_0;
		// this.y = v;
		float L_1 = ___v0;
		__this->___y_1 = L_1;
		// this.z = v;
		float L_2 = ___v0;
		__this->___z_2 = L_2;
		// this.w = v;
		float L_3 = ___v0;
		__this->___w_3 = L_3;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_mAE7770D5D8ABCDC54704D1A1CE0D484136C5586C_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___x0, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___y1, const RuntimeMethod* method) 
{
	{
		// public static float dot(float4 x, float4 y) { return x.x * y.x + x.y * y.y + x.z * y.z + x.w * y.w; }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___x0;
		float L_1 = L_0.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2 = ___y1;
		float L_3 = L_2.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___x0;
		float L_5 = L_4.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = ___y1;
		float L_7 = L_6.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8 = ___x0;
		float L_9 = L_8.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___y1;
		float L_11 = L_10.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12 = ___x0;
		float L_13 = L_12.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14 = ___y1;
		float L_15 = L_14.___w_3;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_rsqrt_mB695A0575E7C8F937B0E12804508B0F489F55997_inline (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float rsqrt(float x) { return 1.0f / sqrt(x); }
		float L_0 = ___x0;
		float L_1;
		L_1 = math_sqrt_mD0D6FA27E6D4959A0D4A823FFD3A9DA396542875_inline(L_0, NULL);
		return ((float)((1.0f)/L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Multiply_m4322D91DC960C16DFB4B645FF997F6A57821E41D_inline (float ___lhs0, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___rhs1, const RuntimeMethod* method) 
{
	{
		// public static float4 operator * (float lhs, float4 rhs) { return new float4 (lhs * rhs.x, lhs * rhs.y, lhs * rhs.z, lhs * rhs.w); }
		float L_0 = ___lhs0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1 = ___rhs1;
		float L_2 = L_1.___x_0;
		float L_3 = ___lhs0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___rhs1;
		float L_5 = L_4.___y_1;
		float L_6 = ___lhs0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7 = ___rhs1;
		float L_8 = L_7.___z_2;
		float L_9 = ___lhs0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___rhs1;
		float L_11 = L_10.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_12), ((float)il2cpp_codegen_multiply(L_0, L_2)), ((float)il2cpp_codegen_multiply(L_3, L_5)), ((float)il2cpp_codegen_multiply(L_6, L_8)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_m777F109CF7EBEEC78FAE5DBE52E4498CFA65E8C4_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___v0, const RuntimeMethod* method) 
{
	{
		// this.x = v;
		float L_0 = ___v0;
		__this->___x_0 = L_0;
		// this.y = v;
		float L_1 = ___v0;
		__this->___y_1 = L_1;
		// this.z = v;
		float L_2 = ___v0;
		__this->___z_2 = L_2;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_mFC6E6AC5C12A0802A91EB7F9A897802DFF03C44D_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___x0, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___y1, const RuntimeMethod* method) 
{
	{
		// public static float dot(float3 x, float3 y) { return x.x * y.x + x.y * y.y + x.z * y.z; }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___x0;
		float L_1 = L_0.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___y1;
		float L_3 = L_2.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___x0;
		float L_5 = L_4.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = ___y1;
		float L_7 = L_6.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_8 = ___x0;
		float L_9 = L_8.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_10 = ___y1;
		float L_11 = L_10.___z_2;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_mB08DA9B217A0DA39BABCE64FFE69BEA67D37D04F_inline (float ___lhs0, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___rhs1, const RuntimeMethod* method) 
{
	{
		// public static float3 operator * (float lhs, float3 rhs) { return new float3 (lhs * rhs.x, lhs * rhs.y, lhs * rhs.z); }
		float L_0 = ___lhs0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___rhs1;
		float L_2 = L_1.___x_0;
		float L_3 = ___lhs0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___rhs1;
		float L_5 = L_4.___y_1;
		float L_6 = ___lhs0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7 = ___rhs1;
		float L_8 = L_7.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_9;
		memset((&L_9), 0, sizeof(L_9));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_9), ((float)il2cpp_codegen_multiply(L_0, L_2)), ((float)il2cpp_codegen_multiply(L_3, L_5)), ((float)il2cpp_codegen_multiply(L_6, L_8)), /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_m131368AA87C134F64DD0B5B8684C1345BEC6EE59_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, int32_t ___v0, const RuntimeMethod* method) 
{
	{
		// this.x = v;
		int32_t L_0 = ___v0;
		__this->___x_0 = ((float)L_0);
		// this.y = v;
		int32_t L_1 = ___v0;
		__this->___y_1 = ((float)L_1);
		// this.z = v;
		int32_t L_2 = ___v0;
		__this->___z_2 = ((float)L_2);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_asuint_mE2534002331AC55DC7BC15E103D3CB7A4465F076_inline (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static uint asuint(float x) { return (uint)asint(x); }
		float L_0 = ___x0;
		int32_t L_1;
		L_1 = math_asint_mC1D3880A25BCA51C3FF63FAC83C544CEF5389891_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_asfloat_m6001AEADA0D3BB53A5BE113CE7052AB6D96FAABA_inline (uint32_t ___x0, const RuntimeMethod* method) 
{
	{
		// public static float  asfloat(uint x) { return asfloat((int)x); }
		uint32_t L_0 = ___x0;
		float L_1;
		L_1 = math_asfloat_m3924686271257D993098B811C554E07F35A5519B_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_sqrt_mD0D6FA27E6D4959A0D4A823FFD3A9DA396542875_inline (float ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float sqrt(float x) { return (float)System.Math.Sqrt((float)x); }
		float L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = sqrt(((double)((float)L_0)));
		return ((float)L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_asint_mC1D3880A25BCA51C3FF63FAC83C544CEF5389891_inline (float ___x0, const RuntimeMethod* method) 
{
	IntFloatUnion_t549256A9DD754252DD18383D9CE7EA55EBBD6D96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// u.intValue = 0;
		(&V_0)->___intValue_0 = 0;
		// u.floatValue = x;
		float L_0 = ___x0;
		(&V_0)->___floatValue_1 = L_0;
		// return u.intValue;
		IntFloatUnion_t549256A9DD754252DD18383D9CE7EA55EBBD6D96 L_1 = V_0;
		int32_t L_2 = L_1.___intValue_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_asfloat_m3924686271257D993098B811C554E07F35A5519B_inline (int32_t ___x0, const RuntimeMethod* method) 
{
	IntFloatUnion_t549256A9DD754252DD18383D9CE7EA55EBBD6D96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// u.floatValue = 0;
		(&V_0)->___floatValue_1 = (0.0f);
		// u.intValue = x;
		int32_t L_0 = ___x0;
		(&V_0)->___intValue_0 = L_0;
		// return u.floatValue;
		IntFloatUnion_t549256A9DD754252DD18383D9CE7EA55EBBD6D96 L_1 = V_0;
		float L_2 = L_1.___floatValue_1;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_inline (float ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
