#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.Exception
struct Exception_t;
// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NativeGalleryNamespace.NGMediaReceiveCallbackiOS
struct NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280;
// NativeGalleryNamespace.NGMediaSaveCallbackiOS
struct NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// NativeGallery/MediaPickCallback
struct MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6;
// NativeGallery/MediaPickMultipleCallback
struct MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B;
// NativeGallery/MediaSaveCallback
struct MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0365E1814018F9007D2AF7114C462B24D8928C59;
IL2CPP_EXTERN_C String_t* _stringLiteral0A79B0229EB4F27A4505CE75160E9133E944F111;
IL2CPP_EXTERN_C String_t* _stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D;
IL2CPP_EXTERN_C String_t* _stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2;
IL2CPP_EXTERN_C String_t* _stringLiteral15332598528DB5F9A0B9473BE7DCE0BB1F8DCAA7;
IL2CPP_EXTERN_C String_t* _stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF;
IL2CPP_EXTERN_C String_t* _stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7;
IL2CPP_EXTERN_C String_t* _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A;
IL2CPP_EXTERN_C String_t* _stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D;
IL2CPP_EXTERN_C String_t* _stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB;
IL2CPP_EXTERN_C String_t* _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
IL2CPP_EXTERN_C String_t* _stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9;
IL2CPP_EXTERN_C String_t* _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteral7BB4B5568C63748C896DED09B403F2FC4F274E91;
IL2CPP_EXTERN_C String_t* _stringLiteral7E90946BC7628636C60D094F905E96CD1360A930;
IL2CPP_EXTERN_C String_t* _stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9;
IL2CPP_EXTERN_C String_t* _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF;
IL2CPP_EXTERN_C String_t* _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralAF0174D5142A8DAD18DDD4423E7AFDBBC3687A8B;
IL2CPP_EXTERN_C String_t* _stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD;
IL2CPP_EXTERN_C String_t* _stringLiteralB04FF65BF5CEF7336F7FBA4624393E214FB7EB08;
IL2CPP_EXTERN_C String_t* _stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F;
IL2CPP_EXTERN_C String_t* _stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF;
IL2CPP_EXTERN_C String_t* _stringLiteralD4E22C84D059FC69AA54802023A8B68B6F4F4C7E;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_m5E174F21F5B691FDA1720B5AF8D4C1866F2B1547_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_mFDB8D8B0F5D4B621A2434FDD88597D027AA91F23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_GetImageProperties_mCAA04E751A89822F45FE196DF46ABEAE4ABAE593_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_GetVideoProperties_m27F6CE4143DC950D8937E4C71F219669C6D1F63D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_LoadImageAtPath_m50C948E704D493F8AB568B498FE660175639E318_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveImageToGallery_m12E159B7316F9B3CB016F656848006BD1570C2E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveToGallery_m0469D36BD917C6CE5AF191C5704B192E00929797_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveToGallery_mE5265112ECA9D5899BE7EB4899057A609AF53BB9_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF014A065BC76D0FEB5B12ABB99A95712F7EFC69A 
{
};
struct Il2CppArrayBounds;

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// NativeGallery
struct NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B  : public RuntimeObject
{
};

struct NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields
{
	// System.String NativeGallery::m_temporaryImagePath
	String_t* ___m_temporaryImagePath_0;
	// System.String NativeGallery::m_selectedMediaPath
	String_t* ___m_selectedMediaPath_1;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// NativeGallery/ImageProperties
struct ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59 
{
	// System.Int32 NativeGallery/ImageProperties::width
	int32_t ___width_0;
	// System.Int32 NativeGallery/ImageProperties::height
	int32_t ___height_1;
	// System.String NativeGallery/ImageProperties::mimeType
	String_t* ___mimeType_2;
	// NativeGallery/ImageOrientation NativeGallery/ImageProperties::orientation
	int32_t ___orientation_3;
};
// Native definition for P/Invoke marshalling of NativeGallery/ImageProperties
struct ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_pinvoke
{
	int32_t ___width_0;
	int32_t ___height_1;
	char* ___mimeType_2;
	int32_t ___orientation_3;
};
// Native definition for COM marshalling of NativeGallery/ImageProperties
struct ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_com
{
	int32_t ___width_0;
	int32_t ___height_1;
	Il2CppChar* ___mimeType_2;
	int32_t ___orientation_3;
};

// NativeGallery/VideoProperties
struct VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5 
{
	// System.Int32 NativeGallery/VideoProperties::width
	int32_t ___width_0;
	// System.Int32 NativeGallery/VideoProperties::height
	int32_t ___height_1;
	// System.Int64 NativeGallery/VideoProperties::duration
	int64_t ___duration_2;
	// System.Single NativeGallery/VideoProperties::rotation
	float ___rotation_3;
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
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

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// UnityEngine.UnityException
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// NativeGallery/MediaPickCallback
struct MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6  : public MulticastDelegate_t
{
};

// NativeGallery/MediaPickMultipleCallback
struct MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B  : public MulticastDelegate_t
{
};

// NativeGallery/MediaSaveCallback
struct MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D  : public MulticastDelegate_t
{
};

// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
	// System.String System.IO.FileNotFoundException::<FileName>k__BackingField
	String_t* ___U3CFileNameU3Ek__BackingField_18;
	// System.String System.IO.FileNotFoundException::<FusionLog>k__BackingField
	String_t* ___U3CFusionLogU3Ek__BackingField_19;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// NativeGalleryNamespace.NGMediaReceiveCallbackiOS
struct NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NativeGallery/MediaPickCallback NativeGalleryNamespace.NGMediaReceiveCallbackiOS::callback
	MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___callback_5;
	// NativeGallery/MediaPickMultipleCallback NativeGalleryNamespace.NGMediaReceiveCallbackiOS::callbackMultiple
	MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___callbackMultiple_6;
	// System.Single NativeGalleryNamespace.NGMediaReceiveCallbackiOS::nextBusyCheckTime
	float ___nextBusyCheckTime_7;
};

struct NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields
{
	// NativeGalleryNamespace.NGMediaReceiveCallbackiOS NativeGalleryNamespace.NGMediaReceiveCallbackiOS::instance
	NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* ___instance_4;
	// System.Boolean NativeGalleryNamespace.NGMediaReceiveCallbackiOS::<IsBusy>k__BackingField
	bool ___U3CIsBusyU3Ek__BackingField_8;
};

// NativeGalleryNamespace.NGMediaSaveCallbackiOS
struct NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NativeGallery/MediaSaveCallback NativeGalleryNamespace.NGMediaSaveCallbackiOS::callback
	MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___callback_5;
};

struct NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_StaticFields
{
	// NativeGalleryNamespace.NGMediaSaveCallbackiOS NativeGalleryNamespace.NGMediaSaveCallbackiOS::instance
	NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* ___instance_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_m1C071883726EAFA66324E50FE73A1145272A4C60 (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Int32 NativeGallery::_NativeGallery_CheckPermission(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_CheckPermission_m645F0CF04491A18CE912B4CEF8E08EB618DD10EE (int32_t ___readPermission0, int32_t ___permissionFreeMode1, const RuntimeMethod* method) ;
// System.Int32 NativeGallery::_NativeGallery_RequestPermission(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_RequestPermission_m1B14CFD3683B3C2951ADCA63BD30B27D5C15BD37 (int32_t ___readPermission0, int32_t ___permissionFreeMode1, const RuntimeMethod* method) ;
// System.Boolean NativeGallery::IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_IsMediaPickerBusy_m33B979A96DB4B0C5724EFFE85E560E8C3D5F9B78 (const RuntimeMethod* method) ;
// System.Void NativeGallery::_NativeGallery_ShowLimitedLibraryPicker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_ShowLimitedLibraryPicker_mE2E9AD8D994DB3700A797B08FDC489DF914A6F47 (const RuntimeMethod* method) ;
// System.Int32 NativeGallery::_NativeGallery_CanOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_CanOpenSettings_mDFC6F73BE02F2C7E505B20C473EC9E202CBF492A (const RuntimeMethod* method) ;
// System.Void NativeGallery::_NativeGallery_OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_OpenSettings_mD92607F9321203B61025A4DC11ED64F5E4866BAB (const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::SaveToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_m0469D36BD917C6CE5AF191C5704B192E00929797 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, int32_t ___mediaType3, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___callback4, const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::SaveToGallery(System.String,System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_mE5265112ECA9D5899BE7EB4899057A609AF53BB9 (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, int32_t ___mediaType3, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___callback4, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Byte[] NativeGallery::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeGallery_GetTextureBytes_m5D70CCFFAF5D2DECE1274BCE8B0080A3E7485E0F (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, bool ___isJpeg1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 NativeGallery::_NativeGallery_CanPickMultipleMedia()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_CanPickMultipleMedia_m8CF9F12F376D90123CA79F3FE688A0E2C1717228 (const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::GetMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaFromGallery_mD96620CC0C5948AE6EB7AE39CB8E1E3EB9FBB437 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___callback0, int32_t ___mediaType1, String_t* ___mime2, String_t* ___title3, const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::GetMultipleMediaFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMultipleMediaFromGallery_mEE2814AE3E08D9768E5659E578E089A53B6ADFE6 (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___callback0, int32_t ___mediaType1, String_t* ___mime2, String_t* ___title3, const RuntimeMethod* method) ;
// System.Boolean NativeGalleryNamespace.NGMediaReceiveCallbackiOS::get_IsBusy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NGMediaReceiveCallbackiOS_get_IsBusy_mA25E88E06DCA0969BF03419F96743C9E93E837BE_inline (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetExtension_m52A28295599B87FA550D0654E531B56354C540C7 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 NativeGallery::_NativeGallery_GetMediaTypeFromExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_GetMediaTypeFromExtension_m2726D94869FE1007E84FB83F402797AB0C35BB7E (String_t* ___extension0, const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::RequestPermission(NativeGallery/PermissionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_RequestPermission_mBEC0EAFD758191F95C6B6D5162E09EC77280A125 (int32_t ___permissionType0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String NativeGallery::GetTemporarySavePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_GetTemporarySavePath_mB74A7829D9664CF453E08AA410AA750E10120103 (String_t* ___filename0, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m72C1A24339B30F84A655E6BF516AE1638B2C4668 (String_t* ___path0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, const RuntimeMethod* method) ;
// System.Void NativeGallery::SaveToGalleryInternal(System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_SaveToGalleryInternal_m746FE5F9B902F57EA5F0C09937AA91D2D80D9679 (String_t* ___path0, String_t* ___album1, int32_t ___mediaType2, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___callback3, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.FileNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1 (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.IO.File::Copy(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Copy_m68957393F932BED668C5725704E5DA9B71925395 (String_t* ___sourceFileName0, String_t* ___destFileName1, bool ___overwrite2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void NativeGallery/MediaSaveCallback::Invoke(System.Boolean,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_inline (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___success0, String_t* ___path1, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_mEBC73E0C8D8C56214D1DA4BA8409C5B5F00457A5 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGMediaSaveCallbackiOS::Initialize(NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaSaveCallbackiOS_Initialize_m26B1FBB394EAB5CF0561EA610B01703768F99AB7 (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___callback0, const RuntimeMethod* method) ;
// System.Void NativeGallery::_NativeGallery_ImageWriteToAlbum(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_ImageWriteToAlbum_m98937D108F97D7062C748B1A9E2F52A01D4E4228 (String_t* ___path0, String_t* ___album1, int32_t ___permissionFreeMode2, const RuntimeMethod* method) ;
// System.Void NativeGallery::_NativeGallery_VideoWriteToAlbum(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_VideoWriteToAlbum_mC740DB9A4C9B62283E6CE959657DC878982A6D0E (String_t* ___path0, String_t* ___album1, int32_t ___permissionFreeMode2, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17 (const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileNameWithoutExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileNameWithoutExtension_mD24A7CA7C45FF7A265EF7F8D5E19D1F3C014D90F (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8 (RuntimeObject* ___arg00, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) ;
// System.Void NativeGallery/MediaPickCallback::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_inline (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::Initialize(NativeGallery/MediaPickCallback,NativeGallery/MediaPickMultipleCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_Initialize_mC6D64D3A14F8A325EFD302DA9B51E525ADF81B19 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___callback0, MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___callbackMultiple1, const RuntimeMethod* method) ;
// System.String NativeGallery::get_SelectedMediaPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_SelectedMediaPath_mE2482793B978AC53DDB29D459C5EEE4587BD0EF4 (const RuntimeMethod* method) ;
// System.Void NativeGallery::_NativeGallery_PickMedia(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_PickMedia_mE8D46B601C7C45CB75416AA6EE368649A349EC39 (String_t* ___mediaSavePath0, int32_t ___mediaType1, int32_t ___permissionFreeMode2, int32_t ___selectionLimit3, const RuntimeMethod* method) ;
// System.Boolean NativeGallery::CanSelectMultipleFilesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleFilesFromGallery_m5988C932FA05DE6FB0F33DF5C4D9A91CB3CC2427 (const RuntimeMethod* method) ;
// System.Void NativeGallery/MediaPickMultipleCallback::Invoke(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_inline (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToPNG_m0FFFD0F0DC0EC22073BC937A5294067C57008391 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToJPG_mABBC4FA7AF9A69EB41FDE1CFE73A3F8656546385 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, int32_t ___quality1, const RuntimeMethod* method) ;
// System.Byte[] NativeGallery::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeGallery_GetTextureBytesFromCopy_m35A4E61C7A31DD3B5272250E6B4749FBCB51AD3F (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, bool ___isJpeg1, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_mCD6ECAD5EDABF63A1F2F496ABC4E2502F0883A6E (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_get_active_m2204DF860773F9A8CDFF92BDB35CEB72A0643345 (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___temp0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_maxTextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_maxTextureSize_mB4272D4D85179CEF11FF1CDB3E8F3786D10CA04E (const RuntimeMethod* method) ;
// System.String NativeGallery::get_TemporaryImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_TemporaryImagePath_m17CD1BF8862713A5C2E5360EEA6DDFF321D8D265 (const RuntimeMethod* method) ;
// System.String NativeGallery::_NativeGallery_LoadImageAtPath(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_LoadImageAtPath_mE74A925F6CDE0D98318D0ABF25B9C6A2EBB9FE08 (String_t* ___path0, String_t* ___temporaryFilePath1, int32_t ___maxSize2, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_mE0C2C5A0270CD40C496E85B1D8BA15C607E7011E (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_mE2D612F3895FDD7A87805E1C9D77A79C019213E2 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, bool ___markNonReadable2, const RuntimeMethod* method) ;
// System.String NativeGallery::_NativeGallery_GetVideoThumbnail(System.String,System.String,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_GetVideoThumbnail_mB11EF7517FC0E0872E695292BD3BB176054F8B73 (String_t* ___path0, String_t* ___thumbnailSavePath1, int32_t ___maxSize2, double ___captureTimeInSeconds3, const RuntimeMethod* method) ;
// UnityEngine.Texture2D NativeGallery::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeGallery_LoadImageAtPath_m50C948E704D493F8AB568B498FE660175639E318 (String_t* ___imagePath0, int32_t ___maxSize1, bool ___markTextureNonReadable2, bool ___generateMipmaps3, bool ___linearColorSpace4, const RuntimeMethod* method) ;
// System.String NativeGallery::_NativeGallery_GetImageProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_GetImageProperties_mBCD11601346432DB90A9CDFAEFF4A800316EBE27 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Void NativeGallery/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeGallery/ImageOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageProperties__ctor_m544A791184FB701B39531F6E5CB3C023856797E3 (ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59* __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method) ;
// System.String NativeGallery::_NativeGallery_GetVideoProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_GetVideoProperties_m22134EBCD3873B9D1F1F5D33C9E3CCA2808520BF (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m61AAE5CC4A0B716556765798C22FE12D87554986 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_m5920BF3A60EE1FFF0CC117021B4BF2A8114D1AE5 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, float* ___result3, const RuntimeMethod* method) ;
// System.Void NativeGallery/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoProperties__ctor_mF5D60E1ACB2B90A080BDB94C6362E49F835B2BFD (VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5* __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<NativeGalleryNamespace.NGMediaReceiveCallbackiOS>()
inline NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* GameObject_AddComponent_TisNGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_m5E174F21F5B691FDA1720B5AF8D4C1866F2B1547 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC (const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::set_IsBusy(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_set_IsBusy_m0B22395815D56D0B00BE72CA8866C26B072DD376_inline (bool ___value0, const RuntimeMethod* method) ;
// System.Int32 NativeGalleryNamespace.NGMediaReceiveCallbackiOS::_NativeGallery_IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NGMediaReceiveCallbackiOS__NativeGallery_IsMediaPickerBusy_mF5F277777613FF01982B7990523E7C48FFEEB58E (const RuntimeMethod* method) ;
// System.String[] NativeGalleryNamespace.NGMediaReceiveCallbackiOS::SplitPaths(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NGMediaReceiveCallbackiOS_SplitPaths_mCE4253E500919FECD0EB9B8ACA40F66305247E2B (NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* __this, String_t* ___paths0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<NativeGalleryNamespace.NGMediaSaveCallbackiOS>()
inline NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* GameObject_AddComponent_TisNGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_mFDB8D8B0F5D4B621A2434FDD88597D027AA91F23 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeGallery_CheckPermission(int32_t, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeGallery_RequestPermission(int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeGallery_ShowLimitedLibraryPicker();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeGallery_CanOpenSettings();
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeGallery_OpenSettings();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeGallery_CanPickMultipleMedia();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeGallery_GetMediaTypeFromExtension(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeGallery_ImageWriteToAlbum(char*, char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeGallery_VideoWriteToAlbum(char*, char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeGallery_PickMedia(char*, int32_t, int32_t, int32_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL _NativeGallery_GetImageProperties(char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL _NativeGallery_GetVideoProperties(char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL _NativeGallery_GetVideoThumbnail(char*, char*, int32_t, double);
IL2CPP_EXTERN_C char* DEFAULT_CALL _NativeGallery_LoadImageAtPath(char*, char*, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeGallery_IsMediaPickerBusy();
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
// System.Int32 NativeGallery::_NativeGallery_CheckPermission(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_CheckPermission_m645F0CF04491A18CE912B4CEF8E08EB618DD10EE (int32_t ___readPermission0, int32_t ___permissionFreeMode1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_CheckPermission)(___readPermission0, ___permissionFreeMode1);

	return returnValue;
}
// System.Int32 NativeGallery::_NativeGallery_RequestPermission(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_RequestPermission_m1B14CFD3683B3C2951ADCA63BD30B27D5C15BD37 (int32_t ___readPermission0, int32_t ___permissionFreeMode1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_RequestPermission)(___readPermission0, ___permissionFreeMode1);

	return returnValue;
}
// System.Void NativeGallery::_NativeGallery_ShowLimitedLibraryPicker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_ShowLimitedLibraryPicker_mE2E9AD8D994DB3700A797B08FDC489DF914A6F47 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeGallery_ShowLimitedLibraryPicker)();

}
// System.Int32 NativeGallery::_NativeGallery_CanOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_CanOpenSettings_mDFC6F73BE02F2C7E505B20C473EC9E202CBF492A (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_CanOpenSettings)();

	return returnValue;
}
// System.Void NativeGallery::_NativeGallery_OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_OpenSettings_mD92607F9321203B61025A4DC11ED64F5E4866BAB (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeGallery_OpenSettings)();

}
// System.Int32 NativeGallery::_NativeGallery_CanPickMultipleMedia()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_CanPickMultipleMedia_m8CF9F12F376D90123CA79F3FE688A0E2C1717228 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_CanPickMultipleMedia)();

	return returnValue;
}
// System.Int32 NativeGallery::_NativeGallery_GetMediaTypeFromExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_GetMediaTypeFromExtension_m2726D94869FE1007E84FB83F402797AB0C35BB7E (String_t* ___extension0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___extension0' to native representation
	char* ____extension0_marshaled = NULL;
	____extension0_marshaled = il2cpp_codegen_marshal_string(___extension0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_GetMediaTypeFromExtension)(____extension0_marshaled);

	// Marshaling cleanup of parameter '___extension0' native representation
	il2cpp_codegen_marshal_free(____extension0_marshaled);
	____extension0_marshaled = NULL;

	return returnValue;
}
// System.Void NativeGallery::_NativeGallery_ImageWriteToAlbum(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_ImageWriteToAlbum_m98937D108F97D7062C748B1A9E2F52A01D4E4228 (String_t* ___path0, String_t* ___album1, int32_t ___permissionFreeMode2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Marshaling of parameter '___album1' to native representation
	char* ____album1_marshaled = NULL;
	____album1_marshaled = il2cpp_codegen_marshal_string(___album1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeGallery_ImageWriteToAlbum)(____path0_marshaled, ____album1_marshaled, ___permissionFreeMode2);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

	// Marshaling cleanup of parameter '___album1' native representation
	il2cpp_codegen_marshal_free(____album1_marshaled);
	____album1_marshaled = NULL;

}
// System.Void NativeGallery::_NativeGallery_VideoWriteToAlbum(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_VideoWriteToAlbum_mC740DB9A4C9B62283E6CE959657DC878982A6D0E (String_t* ___path0, String_t* ___album1, int32_t ___permissionFreeMode2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Marshaling of parameter '___album1' to native representation
	char* ____album1_marshaled = NULL;
	____album1_marshaled = il2cpp_codegen_marshal_string(___album1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeGallery_VideoWriteToAlbum)(____path0_marshaled, ____album1_marshaled, ___permissionFreeMode2);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

	// Marshaling cleanup of parameter '___album1' native representation
	il2cpp_codegen_marshal_free(____album1_marshaled);
	____album1_marshaled = NULL;

}
// System.Void NativeGallery::_NativeGallery_PickMedia(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_PickMedia_mE8D46B601C7C45CB75416AA6EE368649A349EC39 (String_t* ___mediaSavePath0, int32_t ___mediaType1, int32_t ___permissionFreeMode2, int32_t ___selectionLimit3, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t);

	// Marshaling of parameter '___mediaSavePath0' to native representation
	char* ____mediaSavePath0_marshaled = NULL;
	____mediaSavePath0_marshaled = il2cpp_codegen_marshal_string(___mediaSavePath0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeGallery_PickMedia)(____mediaSavePath0_marshaled, ___mediaType1, ___permissionFreeMode2, ___selectionLimit3);

	// Marshaling cleanup of parameter '___mediaSavePath0' native representation
	il2cpp_codegen_marshal_free(____mediaSavePath0_marshaled);
	____mediaSavePath0_marshaled = NULL;

}
// System.String NativeGallery::_NativeGallery_GetImageProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_GetImageProperties_mBCD11601346432DB90A9CDFAEFF4A800316EBE27 (String_t* ___path0, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_GetImageProperties)(____path0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String NativeGallery::_NativeGallery_GetVideoProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_GetVideoProperties_m22134EBCD3873B9D1F1F5D33C9E3CCA2808520BF (String_t* ___path0, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_GetVideoProperties)(____path0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String NativeGallery::_NativeGallery_GetVideoThumbnail(System.String,System.String,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_GetVideoThumbnail_mB11EF7517FC0E0872E695292BD3BB176054F8B73 (String_t* ___path0, String_t* ___thumbnailSavePath1, int32_t ___maxSize2, double ___captureTimeInSeconds3, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t, double);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Marshaling of parameter '___thumbnailSavePath1' to native representation
	char* ____thumbnailSavePath1_marshaled = NULL;
	____thumbnailSavePath1_marshaled = il2cpp_codegen_marshal_string(___thumbnailSavePath1);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_GetVideoThumbnail)(____path0_marshaled, ____thumbnailSavePath1_marshaled, ___maxSize2, ___captureTimeInSeconds3);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

	// Marshaling cleanup of parameter '___thumbnailSavePath1' native representation
	il2cpp_codegen_marshal_free(____thumbnailSavePath1_marshaled);
	____thumbnailSavePath1_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String NativeGallery::_NativeGallery_LoadImageAtPath(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_LoadImageAtPath_mE74A925F6CDE0D98318D0ABF25B9C6A2EBB9FE08 (String_t* ___path0, String_t* ___temporaryFilePath1, int32_t ___maxSize2, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Marshaling of parameter '___temporaryFilePath1' to native representation
	char* ____temporaryFilePath1_marshaled = NULL;
	____temporaryFilePath1_marshaled = il2cpp_codegen_marshal_string(___temporaryFilePath1);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_LoadImageAtPath)(____path0_marshaled, ____temporaryFilePath1_marshaled, ___maxSize2);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

	// Marshaling cleanup of parameter '___temporaryFilePath1' native representation
	il2cpp_codegen_marshal_free(____temporaryFilePath1_marshaled);
	____temporaryFilePath1_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String NativeGallery::get_TemporaryImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_TemporaryImagePath_m17CD1BF8862713A5C2E5360EEA6DDFF321D8D265 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_temporaryImagePath == null )
		String_t* L_0 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_temporaryImagePath_0;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// m_temporaryImagePath = Path.Combine( Application.temporaryCachePath, "tmpImg" );
		String_t* L_1;
		L_1 = Application_get_temporaryCachePath_m1C071883726EAFA66324E50FE73A1145272A4C60(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_1, _stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2, NULL);
		((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_temporaryImagePath_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_temporaryImagePath_0), (void*)L_2);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_3;
		L_3 = Application_get_temporaryCachePath_m1C071883726EAFA66324E50FE73A1145272A4C60(NULL);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_4;
		L_4 = Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2(L_3, NULL);
	}

IL_0026:
	{
		// return m_temporaryImagePath;
		String_t* L_5 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_temporaryImagePath_0;
		return L_5;
	}
}
// System.String NativeGallery::get_SelectedMediaPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_SelectedMediaPath_mE2482793B978AC53DDB29D459C5EEE4587BD0EF4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF0174D5142A8DAD18DDD4423E7AFDBBC3687A8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_selectedMediaPath == null )
		String_t* L_0 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_selectedMediaPath_1;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// m_selectedMediaPath = Path.Combine( Application.temporaryCachePath, "pickedMedia" );
		String_t* L_1;
		L_1 = Application_get_temporaryCachePath_m1C071883726EAFA66324E50FE73A1145272A4C60(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_1, _stringLiteralAF0174D5142A8DAD18DDD4423E7AFDBBC3687A8B, NULL);
		((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_selectedMediaPath_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_selectedMediaPath_1), (void*)L_2);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_3;
		L_3 = Application_get_temporaryCachePath_m1C071883726EAFA66324E50FE73A1145272A4C60(NULL);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_4;
		L_4 = Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2(L_3, NULL);
	}

IL_0026:
	{
		// return m_selectedMediaPath;
		String_t* L_5 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_selectedMediaPath_1;
		return L_5;
	}
}
// NativeGallery/Permission NativeGallery::CheckPermission(NativeGallery/PermissionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_CheckPermission_mDB388DE25B1B2D1277D05C370FB678129DF2CDF9 (int32_t ___permissionType0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// int result = _NativeGallery_CheckPermission( permissionType == PermissionType.Read ? 1 : 0, PermissionFreeMode ? 1 : 0 );
		int32_t L_0 = ___permissionType0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 1;
	}

IL_0007:
	{
		int32_t L_1;
		L_1 = NativeGallery__NativeGallery_CheckPermission_m645F0CF04491A18CE912B4CEF8E08EB618DD10EE(G_B3_0, 1, NULL);
		V_0 = L_1;
		// return result == 3 ? Permission.Granted : (Permission) result;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		return (int32_t)(L_3);
	}

IL_0014:
	{
		return (int32_t)(1);
	}
}
// NativeGallery/Permission NativeGallery::RequestPermission(NativeGallery/PermissionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_RequestPermission_mBEC0EAFD758191F95C6B6D5162E09EC77280A125 (int32_t ___permissionType0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// int result = _NativeGallery_RequestPermission( permissionType == PermissionType.Read ? 1 : 0, PermissionFreeMode ? 1 : 0 );
		int32_t L_0 = ___permissionType0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 1;
	}

IL_0007:
	{
		int32_t L_1;
		L_1 = NativeGallery__NativeGallery_RequestPermission_m1B14CFD3683B3C2951ADCA63BD30B27D5C15BD37(G_B3_0, 1, NULL);
		V_0 = L_1;
		// return result == 3 ? Permission.Granted : (Permission) result;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		return (int32_t)(L_3);
	}

IL_0014:
	{
		return (int32_t)(1);
	}
}
// System.Void NativeGallery::TryExtendLimitedAccessPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_TryExtendLimitedAccessPermission_m4553537ADD7802888A36A7CBAA41F46142B4B644 (const RuntimeMethod* method) 
{
	{
		// if( IsMediaPickerBusy() )
		bool L_0;
		L_0 = NativeGallery_IsMediaPickerBusy_m33B979A96DB4B0C5724EFFE85E560E8C3D5F9B78(NULL);
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// _NativeGallery_ShowLimitedLibraryPicker();
		NativeGallery__NativeGallery_ShowLimitedLibraryPicker_mE2E9AD8D994DB3700A797B08FDC489DF914A6F47(NULL);
		// }
		return;
	}
}
// System.Boolean NativeGallery::CanOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanOpenSettings_m03E4A95806345CB76CB87B55617EEE65E717AE29 (const RuntimeMethod* method) 
{
	{
		// return _NativeGallery_CanOpenSettings() == 1;
		int32_t L_0;
		L_0 = NativeGallery__NativeGallery_CanOpenSettings_mDFC6F73BE02F2C7E505B20C473EC9E202CBF492A(NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void NativeGallery::OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_OpenSettings_m8C80C3EDFEFD36F971E469470926224F487A5A1E (const RuntimeMethod* method) 
{
	{
		// _NativeGallery_OpenSettings();
		NativeGallery__NativeGallery_OpenSettings_mD92607F9321203B61025A4DC11ED64F5E4866BAB(NULL);
		// }
		return;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_mA99979150B304E8C84BF3DD188A2BC741AB2E614 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___callback3, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Image, callback );
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___mediaBytes0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___callback3;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_m0469D36BD917C6CE5AF191C5704B192E00929797(L_0, L_1, L_2, 1, L_3, NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_mF1FC7B72AE07F46DEBE336C0438ABA2CEE399D8F (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___callback3, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Image, callback );
		String_t* L_0 = ___existingMediaPath0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___callback3;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mE5265112ECA9D5899BE7EB4899057A609AF53BB9(L_0, L_1, L_2, 1, L_3, NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(UnityEngine.Texture2D,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_m12E159B7316F9B3CB016F656848006BD1570C2E5 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___image0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___callback3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( image == null )
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___image0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentException( "Parameter 'image' is null!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15332598528DB5F9A0B9473BE7DCE0BB1F8DCAA7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveImageToGallery_m12E159B7316F9B3CB016F656848006BD1570C2E5_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if( filename.EndsWith( ".jpeg", StringComparison.OrdinalIgnoreCase ) || filename.EndsWith( ".jpg", StringComparison.OrdinalIgnoreCase ) )
		String_t* L_3 = ___filename2;
		NullCheck(L_3);
		bool L_4;
		L_4 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_3, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, 5, NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_5 = ___filename2;
		NullCheck(L_5);
		bool L_6;
		L_6 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_5, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, 5, NULL);
		if (!L_6)
		{
			goto IL_0041;
		}
	}

IL_0030:
	{
		// return SaveToGallery( GetTextureBytes( image, true ), album, filename, MediaType.Image, callback );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = ___image0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = NativeGallery_GetTextureBytes_m5D70CCFFAF5D2DECE1274BCE8B0080A3E7485E0F(L_7, (bool)1, NULL);
		String_t* L_9 = ___album1;
		String_t* L_10 = ___filename2;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_11 = ___callback3;
		int32_t L_12;
		L_12 = NativeGallery_SaveToGallery_m0469D36BD917C6CE5AF191C5704B192E00929797(L_8, L_9, L_10, 1, L_11, NULL);
		return L_12;
	}

IL_0041:
	{
		// else if( filename.EndsWith( ".png", StringComparison.OrdinalIgnoreCase ) )
		String_t* L_13 = ___filename2;
		NullCheck(L_13);
		bool L_14;
		L_14 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_13, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, 5, NULL);
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		// return SaveToGallery( GetTextureBytes( image, false ), album, filename, MediaType.Image, callback );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = ___image0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = NativeGallery_GetTextureBytes_m5D70CCFFAF5D2DECE1274BCE8B0080A3E7485E0F(L_15, (bool)0, NULL);
		String_t* L_17 = ___album1;
		String_t* L_18 = ___filename2;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_19 = ___callback3;
		int32_t L_20;
		L_20 = NativeGallery_SaveToGallery_m0469D36BD917C6CE5AF191C5704B192E00929797(L_16, L_17, L_18, 1, L_19, NULL);
		return L_20;
	}

IL_0060:
	{
		// return SaveToGallery( GetTextureBytes( image, false ), album, filename + ".png", MediaType.Image, callback );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = ___image0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = NativeGallery_GetTextureBytes_m5D70CCFFAF5D2DECE1274BCE8B0080A3E7485E0F(L_21, (bool)0, NULL);
		String_t* L_23 = ___album1;
		String_t* L_24 = ___filename2;
		String_t* L_25;
		L_25 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_24, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_26 = ___callback3;
		int32_t L_27;
		L_27 = NativeGallery_SaveToGallery_m0469D36BD917C6CE5AF191C5704B192E00929797(L_22, L_23, L_25, 1, L_26, NULL);
		return L_27;
	}
}
// NativeGallery/Permission NativeGallery::SaveVideoToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveVideoToGallery_m4DE9CE4E7E518DF4C1FC5F9E2957D6A329D433A7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___callback3, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Video, callback );
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___mediaBytes0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___callback3;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_m0469D36BD917C6CE5AF191C5704B192E00929797(L_0, L_1, L_2, 2, L_3, NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveVideoToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveVideoToGallery_m0C6AAFAC5B535775E22DE89BFB09E6B231FA7D20 (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___callback3, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Video, callback );
		String_t* L_0 = ___existingMediaPath0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___callback3;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mE5265112ECA9D5899BE7EB4899057A609AF53BB9(L_0, L_1, L_2, 2, L_3, NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveAudioToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveAudioToGallery_mB35AEAF1D969B1DB148BC97A99B50AAC60D2B74B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___callback3, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Audio, callback );
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___mediaBytes0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___callback3;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_m0469D36BD917C6CE5AF191C5704B192E00929797(L_0, L_1, L_2, 4, L_3, NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveAudioToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveAudioToGallery_m7DE835EA3BB934615EA87DDDE232B206145A42A7 (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___callback3, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Audio, callback );
		String_t* L_0 = ___existingMediaPath0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___callback3;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mE5265112ECA9D5899BE7EB4899057A609AF53BB9(L_0, L_1, L_2, 4, L_3, NULL);
		return L_4;
	}
}
// System.Boolean NativeGallery::CanSelectMultipleFilesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleFilesFromGallery_m5988C932FA05DE6FB0F33DF5C4D9A91CB3CC2427 (const RuntimeMethod* method) 
{
	{
		// return _NativeGallery_CanPickMultipleMedia() == 1;
		int32_t L_0;
		L_0 = NativeGallery__NativeGallery_CanPickMultipleMedia_m8CF9F12F376D90123CA79F3FE688A0E2C1717228(NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean NativeGallery::CanSelectMultipleMediaTypesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleMediaTypesFromGallery_m7933FD3387F1B5FA453E6C0058066B66C2940D85 (const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// NativeGallery/Permission NativeGallery::GetImageFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetImageFromGallery_m82D0088A30E6C21058FC976035A79A3FB69092D0 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method) 
{
	{
		// return GetMediaFromGallery( callback, MediaType.Image, mime, title );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_mD96620CC0C5948AE6EB7AE39CB8E1E3EB9FBB437(L_0, 1, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetVideoFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetVideoFromGallery_m4EA9B0D238EA7C0871AC09BB79411CCB728522A7 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method) 
{
	{
		// return GetMediaFromGallery( callback, MediaType.Video, mime, title );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_mD96620CC0C5948AE6EB7AE39CB8E1E3EB9FBB437(L_0, 2, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetAudioFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetAudioFromGallery_mDC61BA12F5DA2C0D48DC63388EBEBE09098DB873 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method) 
{
	{
		// return GetMediaFromGallery( callback, MediaType.Audio, mime, title );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_mD96620CC0C5948AE6EB7AE39CB8E1E3EB9FBB437(L_0, 4, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetMixedMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMixedMediaFromGallery_m1E455DC6D7C21B13A0349F1EE8D887CD2B9FBD6D (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___callback0, int32_t ___mediaTypes1, String_t* ___title2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMediaFromGallery( callback, mediaTypes, "*/*", title );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_0 = ___callback0;
		int32_t L_1 = ___mediaTypes1;
		String_t* L_2 = ___title2;
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_mD96620CC0C5948AE6EB7AE39CB8E1E3EB9FBB437(L_0, L_1, _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetImagesFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetImagesFromGallery_mCD6030234E4A58F3008D02368866D25076350E63 (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method) 
{
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Image, mime, title );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mEE2814AE3E08D9768E5659E578E089A53B6ADFE6(L_0, 1, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetVideosFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetVideosFromGallery_m6EDCCA17F550C401A7F97263A3E9F11492168BA9 (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method) 
{
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Video, mime, title );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mEE2814AE3E08D9768E5659E578E089A53B6ADFE6(L_0, 2, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetAudiosFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetAudiosFromGallery_mA72C23FD9B8185E64ADCA5D09F41465448A31FF8 (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method) 
{
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Audio, mime, title );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mEE2814AE3E08D9768E5659E578E089A53B6ADFE6(L_0, 4, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetMixedMediasFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMixedMediasFromGallery_m10F5C52BFD0ABD3BC2437C064A6F2ABBCE9A6B08 (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___callback0, int32_t ___mediaTypes1, String_t* ___title2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMultipleMediaFromGallery( callback, mediaTypes, "*/*", title );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_0 = ___callback0;
		int32_t L_1 = ___mediaTypes1;
		String_t* L_2 = ___title2;
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mEE2814AE3E08D9768E5659E578E089A53B6ADFE6(L_0, L_1, _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF, L_2, NULL);
		return L_3;
	}
}
// System.Boolean NativeGallery::IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_IsMediaPickerBusy_m33B979A96DB4B0C5724EFFE85E560E8C3D5F9B78 (const RuntimeMethod* method) 
{
	{
		// return NGMediaReceiveCallbackiOS.IsBusy;
		bool L_0;
		L_0 = NGMediaReceiveCallbackiOS_get_IsBusy_mA25E88E06DCA0969BF03419F96743C9E93E837BE_inline(NULL);
		return L_0;
	}
}
// NativeGallery/MediaType NativeGallery::GetMediaTypeOfFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaTypeOfFile_mA96959253AD3780CB52FBD2514AB73D94CB292CD (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if( string.IsNullOrEmpty( path ) )
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_000a:
	{
		// string extension = Path.GetExtension( path );
		String_t* L_2 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_GetExtension_m52A28295599B87FA550D0654E531B56354C540C7(L_2, NULL);
		V_0 = L_3;
		// if( string.IsNullOrEmpty( extension ) )
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_4, NULL);
		if (!L_5)
		{
			goto IL_001b;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_001b:
	{
		// if( extension[0] == '.' )
		String_t* L_6 = V_0;
		NullCheck(L_6);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, 0, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0039;
		}
	}
	{
		// if( extension.Length == 1 )
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_0031:
	{
		// extension = extension.Substring( 1 );
		String_t* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_10, 1, NULL);
		V_0 = L_11;
	}

IL_0039:
	{
		// return (MediaType) _NativeGallery_GetMediaTypeFromExtension( extension.ToLowerInvariant() );
		String_t* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_12, NULL);
		int32_t L_14;
		L_14 = NativeGallery__NativeGallery_GetMediaTypeFromExtension_m2726D94869FE1007E84FB83F402797AB0C35BB7E(L_13, NULL);
		return (int32_t)(L_14);
	}
}
// NativeGallery/Permission NativeGallery::SaveToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_m0469D36BD917C6CE5AF191C5704B192E00929797 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, int32_t ___mediaType3, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___callback4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B13_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Write );
		int32_t L_0;
		L_0 = NativeGallery_RequestPermission_mBEC0EAFD758191F95C6B6D5162E09EC77280A125(1, NULL);
		// if( result == Permission.Granted )
		int32_t L_1 = L_0;
		G_B1_0 = L_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			G_B13_0 = L_1;
			goto IL_0075;
		}
	}
	{
		// if( mediaBytes == null || mediaBytes.Length == 0 )
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___mediaBytes0;
		G_B2_0 = G_B1_0;
		if (!L_2)
		{
			G_B3_0 = G_B1_0;
			goto IL_0011;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___mediaBytes0;
		NullCheck(L_3);
		G_B3_0 = G_B2_0;
		if ((((RuntimeArray*)L_3)->max_length))
		{
			G_B4_0 = G_B2_0;
			goto IL_001c;
		}
	}

IL_0011:
	{
		// throw new ArgumentException( "Parameter 'mediaBytes' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7BB4B5568C63748C896DED09B403F2FC4F274E91)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_m0469D36BD917C6CE5AF191C5704B192E00929797_RuntimeMethod_var)));
	}

IL_001c:
	{
		// if( album == null || album.Length == 0 )
		String_t* L_5 = ___album1;
		G_B5_0 = G_B4_0;
		if (!L_5)
		{
			G_B6_0 = G_B4_0;
			goto IL_0027;
		}
	}
	{
		String_t* L_6 = ___album1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		G_B6_0 = G_B5_0;
		if (L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_0032;
		}
	}

IL_0027:
	{
		// throw new ArgumentException( "Parameter 'album' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_m0469D36BD917C6CE5AF191C5704B192E00929797_RuntimeMethod_var)));
	}

IL_0032:
	{
		// if( filename == null || filename.Length == 0 )
		String_t* L_9 = ___filename2;
		G_B8_0 = G_B7_0;
		if (!L_9)
		{
			G_B9_0 = G_B7_0;
			goto IL_003d;
		}
	}
	{
		String_t* L_10 = ___filename2;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		G_B9_0 = G_B8_0;
		if (L_11)
		{
			G_B10_0 = G_B8_0;
			goto IL_0048;
		}
	}

IL_003d:
	{
		// throw new ArgumentException( "Parameter 'filename' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_m0469D36BD917C6CE5AF191C5704B192E00929797_RuntimeMethod_var)));
	}

IL_0048:
	{
		// if( string.IsNullOrEmpty( Path.GetExtension( filename ) ) )
		String_t* L_13 = ___filename2;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = Path_GetExtension_m52A28295599B87FA550D0654E531B56354C540C7(L_13, NULL);
		bool L_15;
		L_15 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_14, NULL);
		G_B11_0 = G_B10_0;
		if (!L_15)
		{
			G_B12_0 = G_B10_0;
			goto IL_005f;
		}
	}
	{
		// Debug.LogWarning( "'filename' doesn't have an extension, this might result in unexpected behaviour!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7, NULL);
		G_B12_0 = G_B11_0;
	}

IL_005f:
	{
		// string path = GetTemporarySavePath( filename );
		String_t* L_16 = ___filename2;
		String_t* L_17;
		L_17 = NativeGallery_GetTemporarySavePath_mB74A7829D9664CF453E08AA410AA750E10120103(L_16, NULL);
		// File.WriteAllBytes( path, mediaBytes );
		String_t* L_18 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___mediaBytes0;
		File_WriteAllBytes_m72C1A24339B30F84A655E6BF516AE1638B2C4668(L_18, L_19, NULL);
		// SaveToGalleryInternal( path, album, mediaType, callback );
		String_t* L_20 = ___album1;
		int32_t L_21 = ___mediaType3;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_22 = ___callback4;
		NativeGallery_SaveToGalleryInternal_m746FE5F9B902F57EA5F0C09937AA91D2D80D9679(L_18, L_20, L_21, L_22, NULL);
		G_B13_0 = G_B12_0;
	}

IL_0075:
	{
		// return result;
		return G_B13_0;
	}
}
// NativeGallery/Permission NativeGallery::SaveToGallery(System.String,System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_mE5265112ECA9D5899BE7EB4899057A609AF53BB9 (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, int32_t ___mediaType3, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___callback4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Write );
		int32_t L_0;
		L_0 = NativeGallery_RequestPermission_mBEC0EAFD758191F95C6B6D5162E09EC77280A125(1, NULL);
		// if( result == Permission.Granted )
		int32_t L_1 = L_0;
		G_B1_0 = L_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			G_B14_0 = L_1;
			goto IL_009c;
		}
	}
	{
		// if( !File.Exists( existingMediaPath ) )
		String_t* L_2 = ___existingMediaPath0;
		bool L_3;
		L_3 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_2, NULL);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0026;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + existingMediaPath );
		String_t* L_4 = ___existingMediaPath0;
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_4, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_6 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mE5265112ECA9D5899BE7EB4899057A609AF53BB9_RuntimeMethod_var)));
	}

IL_0026:
	{
		// if( album == null || album.Length == 0 )
		String_t* L_7 = ___album1;
		G_B4_0 = G_B3_0;
		if (!L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_0031;
		}
	}
	{
		String_t* L_8 = ___album1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B6_0 = G_B4_0;
			goto IL_003c;
		}
	}

IL_0031:
	{
		// throw new ArgumentException( "Parameter 'album' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mE5265112ECA9D5899BE7EB4899057A609AF53BB9_RuntimeMethod_var)));
	}

IL_003c:
	{
		// if( filename == null || filename.Length == 0 )
		String_t* L_11 = ___filename2;
		G_B7_0 = G_B6_0;
		if (!L_11)
		{
			G_B8_0 = G_B6_0;
			goto IL_0047;
		}
	}
	{
		String_t* L_12 = ___filename2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		G_B8_0 = G_B7_0;
		if (L_13)
		{
			G_B9_0 = G_B7_0;
			goto IL_0052;
		}
	}

IL_0047:
	{
		// throw new ArgumentException( "Parameter 'filename' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mE5265112ECA9D5899BE7EB4899057A609AF53BB9_RuntimeMethod_var)));
	}

IL_0052:
	{
		// if( string.IsNullOrEmpty( Path.GetExtension( filename ) ) )
		String_t* L_15 = ___filename2;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = Path_GetExtension_m52A28295599B87FA550D0654E531B56354C540C7(L_15, NULL);
		bool L_17;
		L_17 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_16, NULL);
		G_B10_0 = G_B9_0;
		if (!L_17)
		{
			G_B13_0 = G_B9_0;
			goto IL_0083;
		}
	}
	{
		// string originalExtension = Path.GetExtension( existingMediaPath );
		String_t* L_18 = ___existingMediaPath0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_19;
		L_19 = Path_GetExtension_m52A28295599B87FA550D0654E531B56354C540C7(L_18, NULL);
		V_1 = L_19;
		// if( string.IsNullOrEmpty( originalExtension ) )
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_20, NULL);
		G_B11_0 = G_B10_0;
		if (!L_21)
		{
			G_B12_0 = G_B10_0;
			goto IL_007a;
		}
	}
	{
		// Debug.LogWarning( "'filename' doesn't have an extension, this might result in unexpected behaviour!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7, NULL);
		G_B13_0 = G_B11_0;
		goto IL_0083;
	}

IL_007a:
	{
		// filename += originalExtension;
		String_t* L_22 = ___filename2;
		String_t* L_23 = V_1;
		String_t* L_24;
		L_24 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_22, L_23, NULL);
		___filename2 = L_24;
		G_B13_0 = G_B12_0;
	}

IL_0083:
	{
		// string path = GetTemporarySavePath( filename );
		String_t* L_25 = ___filename2;
		String_t* L_26;
		L_26 = NativeGallery_GetTemporarySavePath_mB74A7829D9664CF453E08AA410AA750E10120103(L_25, NULL);
		V_0 = L_26;
		// File.Copy( existingMediaPath, path, true );
		String_t* L_27 = ___existingMediaPath0;
		String_t* L_28 = V_0;
		File_Copy_m68957393F932BED668C5725704E5DA9B71925395(L_27, L_28, (bool)1, NULL);
		// SaveToGalleryInternal( path, album, mediaType, callback );
		String_t* L_29 = V_0;
		String_t* L_30 = ___album1;
		int32_t L_31 = ___mediaType3;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_32 = ___callback4;
		NativeGallery_SaveToGalleryInternal_m746FE5F9B902F57EA5F0C09937AA91D2D80D9679(L_29, L_30, L_31, L_32, NULL);
		G_B14_0 = G_B13_0;
	}

IL_009c:
	{
		// return result;
		return G_B14_0;
	}
}
// System.Void NativeGallery::SaveToGalleryInternal(System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_SaveToGalleryInternal_m746FE5F9B902F57EA5F0C09937AA91D2D80D9679 (String_t* ___path0, String_t* ___album1, int32_t ___mediaType2, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___callback3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0365E1814018F9007D2AF7114C462B24D8928C59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4E22C84D059FC69AA54802023A8B68B6F4F4C7E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( mediaType == MediaType.Audio )
		int32_t L_0 = ___mediaType2;
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_001a;
		}
	}
	{
		// Debug.LogError( "Saving audio files is not supported on iOS" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralD4E22C84D059FC69AA54802023A8B68B6F4F4C7E, NULL);
		// if( callback != null )
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_1 = ___callback3;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback( false, null );
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_2 = ___callback3;
		NullCheck(L_2);
		MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_inline(L_2, (bool)0, (String_t*)NULL, NULL);
	}

IL_0019:
	{
		// return;
		return;
	}

IL_001a:
	{
		// Debug.Log( "Saving to Pictures: " + Path.GetFileName( path ) );
		String_t* L_3 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Path_GetFileName_mEBC73E0C8D8C56214D1DA4BA8409C5B5F00457A5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral0365E1814018F9007D2AF7114C462B24D8928C59, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// NGMediaSaveCallbackiOS.Initialize( callback );
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_6 = ___callback3;
		NGMediaSaveCallbackiOS_Initialize_m26B1FBB394EAB5CF0561EA610B01703768F99AB7(L_6, NULL);
		// if( mediaType == MediaType.Image )
		int32_t L_7 = ___mediaType2;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		// _NativeGallery_ImageWriteToAlbum( path, album, PermissionFreeMode ? 1 : 0 );
		String_t* L_8 = ___path0;
		String_t* L_9 = ___album1;
		NativeGallery__NativeGallery_ImageWriteToAlbum_m98937D108F97D7062C748B1A9E2F52A01D4E4228(L_8, L_9, 1, NULL);
		return;
	}

IL_0042:
	{
		// else if( mediaType == MediaType.Video )
		int32_t L_10 = ___mediaType2;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		// _NativeGallery_VideoWriteToAlbum( path, album, PermissionFreeMode ? 1 : 0 );
		String_t* L_11 = ___path0;
		String_t* L_12 = ___album1;
		NativeGallery__NativeGallery_VideoWriteToAlbum_mC740DB9A4C9B62283E6CE959657DC878982A6D0E(L_11, L_12, 1, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.String NativeGallery::GetTemporarySavePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_GetTemporarySavePath_mB74A7829D9664CF453E08AA410AA750E10120103 (String_t* ___filename0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		// string saveDir = Path.Combine( Application.persistentDataPath, "NGallery" );
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_0, _stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF, NULL);
		V_0 = L_1;
		// Directory.CreateDirectory( saveDir );
		String_t* L_2 = V_0;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_3;
		L_3 = Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2(L_2, NULL);
		// string path = Path.Combine( saveDir, filename );
		String_t* L_4 = V_0;
		String_t* L_5 = ___filename0;
		String_t* L_6;
		L_6 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_4, L_5, NULL);
		V_1 = L_6;
		// if( File.Exists( path ) )
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_7, NULL);
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		// int fileIndex = 0;
		V_2 = 0;
		// string filenameWithoutExtension = Path.GetFileNameWithoutExtension( filename );
		String_t* L_9 = ___filename0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = Path_GetFileNameWithoutExtension_mD24A7CA7C45FF7A265EF7F8D5E19D1F3C014D90F(L_9, NULL);
		V_3 = L_10;
		// string extension = Path.GetExtension( filename );
		String_t* L_11 = ___filename0;
		String_t* L_12;
		L_12 = Path_GetExtension_m52A28295599B87FA550D0654E531B56354C540C7(L_11, NULL);
		V_4 = L_12;
	}

IL_0038:
	{
		// path = Path.Combine( saveDir, string.Concat( filenameWithoutExtension, ++fileIndex, extension ) );
		String_t* L_13 = V_0;
		String_t* L_14 = V_3;
		int32_t L_15 = V_2;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		V_2 = L_16;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19 = V_4;
		String_t* L_20;
		L_20 = String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8(L_14, L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_21;
		L_21 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_13, L_20, NULL);
		V_1 = L_21;
		// } while( File.Exists( path ) );
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_22, NULL);
		if (L_23)
		{
			goto IL_0038;
		}
	}

IL_0059:
	{
		// return path;
		String_t* L_24 = V_1;
		return L_24;
	}
}
// NativeGallery/Permission NativeGallery::GetMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaFromGallery_mD96620CC0C5948AE6EB7AE39CB8E1E3EB9FBB437 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___callback0, int32_t ___mediaType1, String_t* ___mime2, String_t* ___title3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB04FF65BF5CEF7336F7FBA4624393E214FB7EB08);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B6_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B4_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Read );
		int32_t L_0;
		L_0 = NativeGallery_RequestPermission_mBEC0EAFD758191F95C6B6D5162E09EC77280A125(0, NULL);
		// if( result == Permission.Granted && !IsMediaPickerBusy() )
		int32_t L_1 = L_0;
		G_B1_0 = L_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			G_B6_0 = L_1;
			goto IL_0041;
		}
	}
	{
		bool L_2;
		L_2 = NativeGallery_IsMediaPickerBusy_m33B979A96DB4B0C5724EFFE85E560E8C3D5F9B78(NULL);
		G_B2_0 = G_B1_0;
		if (L_2)
		{
			G_B6_0 = G_B1_0;
			goto IL_0041;
		}
	}
	{
		// if( mediaType == MediaType.Audio )
		int32_t L_3 = ___mediaType1;
		G_B3_0 = G_B2_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			G_B5_0 = G_B2_0;
			goto IL_002a;
		}
	}
	{
		// Debug.LogError( "Picking audio files is not supported on iOS" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralB04FF65BF5CEF7336F7FBA4624393E214FB7EB08, NULL);
		// if( callback != null ) // Selecting audio files is not supported on iOS
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_4 = ___callback0;
		G_B4_0 = G_B3_0;
		if (!L_4)
		{
			G_B6_0 = G_B3_0;
			goto IL_0041;
		}
	}
	{
		// callback( null );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_5 = ___callback0;
		NullCheck(L_5);
		MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_inline(L_5, (String_t*)NULL, NULL);
		return G_B4_0;
	}

IL_002a:
	{
		// NGMediaReceiveCallbackiOS.Initialize( callback, null );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_6 = ___callback0;
		NGMediaReceiveCallbackiOS_Initialize_mC6D64D3A14F8A325EFD302DA9B51E525ADF81B19(L_6, (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B*)NULL, NULL);
		// _NativeGallery_PickMedia( SelectedMediaPath, (int) ( mediaType & ~MediaType.Audio ), PermissionFreeMode ? 1 : 0, 1 );
		String_t* L_7;
		L_7 = NativeGallery_get_SelectedMediaPath_mE2482793B978AC53DDB29D459C5EEE4587BD0EF4(NULL);
		int32_t L_8 = ___mediaType1;
		NativeGallery__NativeGallery_PickMedia_mE8D46B601C7C45CB75416AA6EE368649A349EC39(L_7, ((int32_t)((int32_t)L_8&((int32_t)-5))), 1, 1, NULL);
		G_B6_0 = G_B5_0;
	}

IL_0041:
	{
		// return result;
		return G_B6_0;
	}
}
// NativeGallery/Permission NativeGallery::GetMultipleMediaFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMultipleMediaFromGallery_mEE2814AE3E08D9768E5659E578E089A53B6ADFE6 (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___callback0, int32_t ___mediaType1, String_t* ___mime2, String_t* ___title3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB04FF65BF5CEF7336F7FBA4624393E214FB7EB08);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B9_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Read );
		int32_t L_0;
		L_0 = NativeGallery_RequestPermission_mBEC0EAFD758191F95C6B6D5162E09EC77280A125(0, NULL);
		// if( result == Permission.Granted && !IsMediaPickerBusy() )
		int32_t L_1 = L_0;
		G_B1_0 = L_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			G_B9_0 = L_1;
			goto IL_0053;
		}
	}
	{
		bool L_2;
		L_2 = NativeGallery_IsMediaPickerBusy_m33B979A96DB4B0C5724EFFE85E560E8C3D5F9B78(NULL);
		G_B2_0 = G_B1_0;
		if (L_2)
		{
			G_B9_0 = G_B1_0;
			goto IL_0053;
		}
	}
	{
		// if( CanSelectMultipleFilesFromGallery() )
		bool L_3;
		L_3 = NativeGallery_CanSelectMultipleFilesFromGallery_m5988C932FA05DE6FB0F33DF5C4D9A91CB3CC2427(NULL);
		G_B3_0 = G_B2_0;
		if (!L_3)
		{
			G_B7_0 = G_B2_0;
			goto IL_0049;
		}
	}
	{
		// if( mediaType == MediaType.Audio )
		int32_t L_4 = ___mediaType1;
		G_B4_0 = G_B3_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			G_B6_0 = G_B3_0;
			goto IL_0031;
		}
	}
	{
		// Debug.LogError( "Picking audio files is not supported on iOS" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralB04FF65BF5CEF7336F7FBA4624393E214FB7EB08, NULL);
		// if( callback != null ) // Selecting audio files is not supported on iOS
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_5 = ___callback0;
		G_B5_0 = G_B4_0;
		if (!L_5)
		{
			G_B9_0 = G_B4_0;
			goto IL_0053;
		}
	}
	{
		// callback( null );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_6 = ___callback0;
		NullCheck(L_6);
		MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_inline(L_6, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
		return G_B5_0;
	}

IL_0031:
	{
		// NGMediaReceiveCallbackiOS.Initialize( null, callback );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_7 = ___callback0;
		NGMediaReceiveCallbackiOS_Initialize_mC6D64D3A14F8A325EFD302DA9B51E525ADF81B19((MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6*)NULL, L_7, NULL);
		// _NativeGallery_PickMedia( SelectedMediaPath, (int) ( mediaType & ~MediaType.Audio ), PermissionFreeMode ? 1 : 0, 0 );
		String_t* L_8;
		L_8 = NativeGallery_get_SelectedMediaPath_mE2482793B978AC53DDB29D459C5EEE4587BD0EF4(NULL);
		int32_t L_9 = ___mediaType1;
		NativeGallery__NativeGallery_PickMedia_mE8D46B601C7C45CB75416AA6EE368649A349EC39(L_8, ((int32_t)((int32_t)L_9&((int32_t)-5))), 1, 0, NULL);
		return G_B6_0;
	}

IL_0049:
	{
		// else if( callback != null )
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_10 = ___callback0;
		G_B8_0 = G_B7_0;
		if (!L_10)
		{
			G_B9_0 = G_B7_0;
			goto IL_0053;
		}
	}
	{
		// callback( null );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_11 = ___callback0;
		NullCheck(L_11);
		MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_inline(L_11, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
		G_B9_0 = G_B8_0;
	}

IL_0053:
	{
		// return result;
		return G_B9_0;
	}
}
// System.Byte[] NativeGallery::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeGallery_GetTextureBytes_m5D70CCFFAF5D2DECE1274BCE8B0080A3E7485E0F (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, bool ___isJpeg1, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	try
	{// begin try (depth: 1)
		{
			// return isJpeg ? texture.EncodeToJPG( 100 ) : texture.EncodeToPNG();
			bool L_0 = ___isJpeg1;
			if (L_0)
			{
				goto IL_000b_1;
			}
		}
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = ___texture0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
			L_2 = ImageConversion_EncodeToPNG_m0FFFD0F0DC0EC22073BC937A5294067C57008391(L_1, NULL);
			G_B3_0 = L_2;
			goto IL_0013_1;
		}

IL_000b_1:
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = ___texture0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
			L_4 = ImageConversion_EncodeToJPG_mABBC4FA7AF9A69EB41FDE1CFE73A3F8656546385(L_3, ((int32_t)100), NULL);
			G_B3_0 = L_4;
		}

IL_0013_1:
		{
			V_0 = G_B3_0;
			goto IL_002c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0021;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(UnityEngine.UnityException)
		// catch( UnityException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = ___texture0;
		bool L_6 = ___isJpeg1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = NativeGallery_GetTextureBytesFromCopy_m35A4E61C7A31DD3B5272250E6B4749FBCB51AD3F(L_5, L_6, NULL);
		V_0 = L_7;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002c;
	}// end catch (depth: 1)

CATCH_0021:
	{// begin catch(System.ArgumentException)
		// catch( ArgumentException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___texture0;
		bool L_9 = ___isJpeg1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = NativeGallery_GetTextureBytesFromCopy_m35A4E61C7A31DD3B5272250E6B4749FBCB51AD3F(L_8, L_9, NULL);
		V_0 = L_10;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002c;
	}// end catch (depth: 1)

IL_002c:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		return L_11;
	}
}
// System.Byte[] NativeGallery::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeGallery_GetTextureBytesFromCopy_m35A4E61C7A31DD3B5272250E6B4749FBCB51AD3F (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, bool ___isJpeg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B4_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B11_0 = NULL;
	{
		// Debug.LogWarning( "Saving non-readable textures is slower than saving readable textures" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9, NULL);
		// Texture2D sourceTexReadable = null;
		V_0 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		// RenderTexture rt = RenderTexture.GetTemporary( texture.width, texture.height );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___texture0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___texture0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4;
		L_4 = RenderTexture_GetTemporary_mCD6ECAD5EDABF63A1F2F496ABC4E2502F0883A6E(L_1, L_3, NULL);
		V_1 = L_4;
		// RenderTexture activeRT = RenderTexture.active;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5;
		L_5 = RenderTexture_get_active_m2204DF860773F9A8CDFF92BDB35CEB72A0643345(NULL);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{// begin finally (depth: 1)
				// RenderTexture.active = activeRT;
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = V_2;
				RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_6, NULL);
				// RenderTexture.ReleaseTemporary( rt );
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = V_1;
				RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_7, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// Graphics.Blit( texture, rt );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___texture0;
					RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = V_1;
					il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
					Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_8, L_9, NULL);
					// RenderTexture.active = rt;
					RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = V_1;
					RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_10, NULL);
					// sourceTexReadable = new Texture2D( texture.width, texture.height, isJpeg ? TextureFormat.RGB24 : TextureFormat.RGBA32, false );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = ___texture0;
					NullCheck(L_11);
					int32_t L_12;
					L_12 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = ___texture0;
					NullCheck(L_13);
					int32_t L_14;
					L_14 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_13);
					bool L_15 = ___isJpeg1;
					G_B2_0 = L_14;
					G_B2_1 = L_12;
					if (L_15)
					{
						G_B3_0 = L_14;
						G_B3_1 = L_12;
						goto IL_0043_2;
					}
				}
				{
					G_B4_0 = 4;
					G_B4_1 = G_B2_0;
					G_B4_2 = G_B2_1;
					goto IL_0044_2;
				}

IL_0043_2:
				{
					G_B4_0 = 3;
					G_B4_1 = G_B3_0;
					G_B4_2 = G_B3_1;
				}

IL_0044_2:
				{
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
					NullCheck(L_16);
					Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_16, G_B4_2, G_B4_1, G_B4_0, (bool)0, NULL);
					V_0 = L_16;
					// sourceTexReadable.ReadPixels( new Rect( 0, 0, texture.width, texture.height ), 0, 0, false );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = V_0;
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = ___texture0;
					NullCheck(L_18);
					int32_t L_19;
					L_19 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = ___texture0;
					NullCheck(L_20);
					int32_t L_21;
					L_21 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_20);
					Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_22;
					memset((&L_22), 0, sizeof(L_22));
					Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_22), (0.0f), (0.0f), ((float)L_19), ((float)L_21), /*hidden argument*/NULL);
					NullCheck(L_17);
					Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C(L_17, L_22, 0, 0, (bool)0, NULL);
					// sourceTexReadable.Apply( false, false );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_23 = V_0;
					NullCheck(L_23);
					Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_23, (bool)0, (bool)0, NULL);
					// }
					goto IL_0097;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_007b_1;
				}
				throw e;
			}

CATCH_007b_1:
			{// begin catch(System.Exception)
				// Debug.LogException( e );
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// Object.DestroyImmediate( sourceTexReadable );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = V_0;
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
				Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_24, NULL);
				// return null;
				V_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00be;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b7:
			{// begin finally (depth: 1)
				// Object.DestroyImmediate( sourceTexReadable );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_25, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// return isJpeg ? sourceTexReadable.EncodeToJPG( 100 ) : sourceTexReadable.EncodeToPNG();
					bool L_26 = ___isJpeg1;
					if (L_26)
					{
						goto IL_00a3_2;
					}
				}
				{
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = V_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
					L_28 = ImageConversion_EncodeToPNG_m0FFFD0F0DC0EC22073BC937A5294067C57008391(L_27, NULL);
					G_B11_0 = L_28;
					goto IL_00ab_2;
				}

IL_00a3_2:
				{
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = V_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
					L_30 = ImageConversion_EncodeToJPG_mABBC4FA7AF9A69EB41FDE1CFE73A3F8656546385(L_29, ((int32_t)100), NULL);
					G_B11_0 = L_30;
				}

IL_00ab_2:
				{
					V_3 = G_B11_0;
					goto IL_00be;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00ae_1;
				}
				throw e;
			}

CATCH_00ae_1:
			{// begin catch(System.Exception)
				// Debug.LogException( e );
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// return null;
				V_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00be;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00be:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_3;
		return L_31;
	}
}
// UnityEngine.Texture2D NativeGallery::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeGallery_LoadImageAtPath_m50C948E704D493F8AB568B498FE660175639E318 (String_t* ___imagePath0, int32_t ___maxSize1, bool ___markTextureNonReadable2, bool ___generateMipmaps3, bool ___linearColorSpace4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B10_0 = 0;
	{
		// if( string.IsNullOrEmpty( imagePath ) )
		String_t* L_0 = ___imagePath0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentException( "Parameter 'imagePath' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_LoadImageAtPath_m50C948E704D493F8AB568B498FE660175639E318_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if( !File.Exists( imagePath ) )
		String_t* L_3 = ___imagePath0;
		bool L_4;
		L_4 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_3, NULL);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + imagePath );
		String_t* L_5 = ___imagePath0;
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_5, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_7 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_LoadImageAtPath_m50C948E704D493F8AB568B498FE660175639E318_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if( maxSize <= 0 )
		int32_t L_8 = ___maxSize1;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		// maxSize = SystemInfo.maxTextureSize;
		int32_t L_9;
		L_9 = SystemInfo_get_maxTextureSize_mB4272D4D85179CEF11FF1CDB3E8F3786D10CA04E(NULL);
		___maxSize1 = L_9;
	}

IL_0037:
	{
		// string loadPath = _NativeGallery_LoadImageAtPath( imagePath, TemporaryImagePath, maxSize );
		String_t* L_10 = ___imagePath0;
		String_t* L_11;
		L_11 = NativeGallery_get_TemporaryImagePath_m17CD1BF8862713A5C2E5360EEA6DDFF321D8D265(NULL);
		int32_t L_12 = ___maxSize1;
		String_t* L_13;
		L_13 = NativeGallery__NativeGallery_LoadImageAtPath_mE74A925F6CDE0D98318D0ABF25B9C6A2EBB9FE08(L_10, L_11, L_12, NULL);
		V_0 = L_13;
		// string extension = Path.GetExtension( imagePath ).ToLowerInvariant();
		String_t* L_14 = ___imagePath0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = Path_GetExtension_m52A28295599B87FA550D0654E531B56354C540C7(L_14, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_15, NULL);
		V_1 = L_16;
		// TextureFormat format = ( extension == ".jpg" || extension == ".jpeg" ) ? TextureFormat.RGB24 : TextureFormat.RGBA32;
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, NULL);
		if (L_18)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, NULL);
		if (L_20)
		{
			goto IL_006d;
		}
	}
	{
		G_B10_0 = 4;
		goto IL_006e;
	}

IL_006d:
	{
		G_B10_0 = 3;
	}

IL_006e:
	{
		V_2 = G_B10_0;
		// Texture2D result = new Texture2D( 2, 2, format, generateMipmaps, linearColorSpace );
		int32_t L_21 = V_2;
		bool L_22 = ___generateMipmaps3;
		bool L_23 = ___linearColorSpace4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_24, 2, 2, L_21, L_22, L_23, NULL);
		V_3 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a7:
			{// begin finally (depth: 1)
				{
					// if( loadPath != imagePath )
					String_t* L_25 = V_0;
					String_t* L_26 = ___imagePath0;
					bool L_27;
					L_27 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_25, L_26, NULL);
					if (!L_27)
					{
						goto IL_00bb;
					}
				}
				try
				{// begin try (depth: 2)
					// File.Delete( loadPath );
					String_t* L_28 = V_0;
					File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08(L_28, NULL);
					// }
					goto IL_00bb;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_00b8;
					}
					throw e;
				}

CATCH_00b8:
				{// begin catch(System.Object)
					// catch { }
					// catch { }
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00bb;
				}// end catch (depth: 2)

IL_00bb:
				{
					// }
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// if( !result.LoadImage( File.ReadAllBytes( loadPath ), markTextureNonReadable ) )
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = V_3;
					String_t* L_30 = V_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
					L_31 = File_ReadAllBytes_mE0C2C5A0270CD40C496E85B1D8BA15C607E7011E(L_30, NULL);
					bool L_32 = ___markTextureNonReadable2;
					bool L_33;
					L_33 = ImageConversion_LoadImage_mE2D612F3895FDD7A87805E1C9D77A79C019213E2(L_29, L_31, L_32, NULL);
					if (L_33)
					{
						goto IL_0095_2;
					}
				}
				{
					// Object.DestroyImmediate( result );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_34 = V_3;
					il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
					Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_34, NULL);
					// return null;
					V_4 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
					goto IL_00be;
				}

IL_0095_2:
				{
					// }
					goto IL_00bc;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0097_1;
				}
				throw e;
			}

CATCH_0097_1:
			{// begin catch(System.Exception)
				// Debug.LogException( e );
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// Object.DestroyImmediate( result );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_35 = V_3;
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
				Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_35, NULL);
				// return null;
				V_4 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00be;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bc:
	{
		// return result;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_36 = V_3;
		return L_36;
	}

IL_00be:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_37 = V_4;
		return L_37;
	}
}
// UnityEngine.Texture2D NativeGallery::GetVideoThumbnail(System.String,System.Int32,System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeGallery_GetVideoThumbnail_m4415F702CB5081CB6D4658B68D049AB765E687E9 (String_t* ___videoPath0, int32_t ___maxSize1, double ___captureTimeInSeconds2, bool ___markTextureNonReadable3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if( maxSize <= 0 )
		int32_t L_0 = ___maxSize1;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		// maxSize = SystemInfo.maxTextureSize;
		int32_t L_1;
		L_1 = SystemInfo_get_maxTextureSize_mB4272D4D85179CEF11FF1CDB3E8F3786D10CA04E(NULL);
		___maxSize1 = L_1;
	}

IL_000b:
	{
		// string thumbnailPath = _NativeGallery_GetVideoThumbnail( videoPath, TemporaryImagePath + ".png", maxSize, captureTimeInSeconds );
		String_t* L_2 = ___videoPath0;
		String_t* L_3;
		L_3 = NativeGallery_get_TemporaryImagePath_m17CD1BF8862713A5C2E5360EEA6DDFF321D8D265(NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_3, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		int32_t L_5 = ___maxSize1;
		double L_6 = ___captureTimeInSeconds2;
		String_t* L_7;
		L_7 = NativeGallery__NativeGallery_GetVideoThumbnail_mB11EF7517FC0E0872E695292BD3BB176054F8B73(L_2, L_4, L_5, L_6, NULL);
		V_0 = L_7;
		// if( !string.IsNullOrEmpty( thumbnailPath ) )
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_8, NULL);
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		// return LoadImageAtPath( thumbnailPath, maxSize, markTextureNonReadable );
		String_t* L_10 = V_0;
		int32_t L_11 = ___maxSize1;
		bool L_12 = ___markTextureNonReadable3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13;
		L_13 = NativeGallery_LoadImageAtPath_m50C948E704D493F8AB568B498FE660175639E318(L_10, L_11, L_12, (bool)1, (bool)0, NULL);
		return L_13;
	}

IL_0036:
	{
		// return null;
		return (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
	}
}
// NativeGallery/ImageProperties NativeGallery::GetImageProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59 NativeGallery_GetImageProperties_mCAA04E751A89822F45FE196DF46ABEAE4ABAE593 (String_t* ___imagePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	{
		// if( !File.Exists( imagePath ) )
		String_t* L_0 = ___imagePath0;
		bool L_1;
		L_1 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + imagePath );
		String_t* L_2 = ___imagePath0;
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_2, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_4 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_GetImageProperties_mCAA04E751A89822F45FE196DF46ABEAE4ABAE593_RuntimeMethod_var)));
	}

IL_0019:
	{
		// string value = _NativeGallery_GetImageProperties( imagePath );
		String_t* L_5 = ___imagePath0;
		String_t* L_6;
		L_6 = NativeGallery__NativeGallery_GetImageProperties_mBCD11601346432DB90A9CDFAEFF4A800316EBE27(L_5, NULL);
		V_0 = L_6;
		// int width = 0, height = 0;
		V_1 = 0;
		// int width = 0, height = 0;
		V_2 = 0;
		// string mimeType = null;
		V_3 = (String_t*)NULL;
		// ImageOrientation orientation = ImageOrientation.Unknown;
		V_4 = (-1);
		// if( !string.IsNullOrEmpty( value ) )
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_7, NULL);
		if (L_8)
		{
			goto IL_0115;
		}
	}
	{
		// string[] properties = value.Split( '>' );
		String_t* L_9 = V_0;
		NullCheck(L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10;
		L_10 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_9, ((int32_t)62), 0, NULL);
		V_5 = L_10;
		// if( properties != null && properties.Length >= 4 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_5;
		if (!L_11)
		{
			goto IL_0115;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_5;
		NullCheck(L_12);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) < ((int32_t)4)))
		{
			goto IL_0115;
		}
	}
	{
		// if( !int.TryParse( properties[0].Trim(), out width ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_15, NULL);
		bool L_17;
		L_17 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_16, (&V_1), NULL);
		if (L_17)
		{
			goto IL_0064;
		}
	}
	{
		// width = 0;
		V_1 = 0;
	}

IL_0064:
	{
		// if( !int.TryParse( properties[1].Trim(), out height ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_5;
		NullCheck(L_18);
		int32_t L_19 = 1;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_20, NULL);
		bool L_22;
		L_22 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_21, (&V_2), NULL);
		if (L_22)
		{
			goto IL_0078;
		}
	}
	{
		// height = 0;
		V_2 = 0;
	}

IL_0078:
	{
		// mimeType = properties[2].Trim();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_5;
		NullCheck(L_23);
		int32_t L_24 = 2;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_25, NULL);
		V_3 = L_26;
		// if( mimeType.Length == 0 )
		String_t* L_27 = V_3;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_27, NULL);
		if (L_28)
		{
			goto IL_00ff;
		}
	}
	{
		// string extension = Path.GetExtension( imagePath ).ToLowerInvariant();
		String_t* L_29 = ___imagePath0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_30;
		L_30 = Path_GetExtension_m52A28295599B87FA550D0654E531B56354C540C7(L_29, NULL);
		NullCheck(L_30);
		String_t* L_31;
		L_31 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_30, NULL);
		V_7 = L_31;
		// if( extension == ".png" )
		String_t* L_32 = V_7;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		if (!L_33)
		{
			goto IL_00ad;
		}
	}
	{
		// mimeType = "image/png";
		V_3 = _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
		goto IL_00ff;
	}

IL_00ad:
	{
		// else if( extension == ".jpg" || extension == ".jpeg" )
		String_t* L_34 = V_7;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, NULL);
		if (L_35)
		{
			goto IL_00c9;
		}
	}
	{
		String_t* L_36 = V_7;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, NULL);
		if (!L_37)
		{
			goto IL_00d1;
		}
	}

IL_00c9:
	{
		// mimeType = "image/jpeg";
		V_3 = _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
		goto IL_00ff;
	}

IL_00d1:
	{
		// else if( extension == ".gif" )
		String_t* L_38 = V_7;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D, NULL);
		if (!L_39)
		{
			goto IL_00e7;
		}
	}
	{
		// mimeType = "image/gif";
		V_3 = _stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD;
		goto IL_00ff;
	}

IL_00e7:
	{
		// else if( extension == ".bmp" )
		String_t* L_40 = V_7;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C, NULL);
		if (!L_41)
		{
			goto IL_00fd;
		}
	}
	{
		// mimeType = "image/bmp";
		V_3 = _stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F;
		goto IL_00ff;
	}

IL_00fd:
	{
		// mimeType = null;
		V_3 = (String_t*)NULL;
	}

IL_00ff:
	{
		// if( int.TryParse( properties[3].Trim(), out orientationInt ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = V_5;
		NullCheck(L_42);
		int32_t L_43 = 3;
		String_t* L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		String_t* L_45;
		L_45 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_44, NULL);
		bool L_46;
		L_46 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_45, (&V_6), NULL);
		if (!L_46)
		{
			goto IL_0115;
		}
	}
	{
		// orientation = (ImageOrientation) orientationInt;
		int32_t L_47 = V_6;
		V_4 = L_47;
	}

IL_0115:
	{
		// return new ImageProperties( width, height, mimeType, orientation );
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		String_t* L_50 = V_3;
		int32_t L_51 = V_4;
		ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59 L_52;
		memset((&L_52), 0, sizeof(L_52));
		ImageProperties__ctor_m544A791184FB701B39531F6E5CB3C023856797E3((&L_52), L_48, L_49, L_50, L_51, /*hidden argument*/NULL);
		return L_52;
	}
}
// NativeGallery/VideoProperties NativeGallery::GetVideoProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5 NativeGallery_GetVideoProperties_m27F6CE4143DC950D8937E4C71F219669C6D1F63D (String_t* ___videoPath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	float V_4 = 0.0f;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	{
		// if( !File.Exists( videoPath ) )
		String_t* L_0 = ___videoPath0;
		bool L_1;
		L_1 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + videoPath );
		String_t* L_2 = ___videoPath0;
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_2, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_4 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_GetVideoProperties_m27F6CE4143DC950D8937E4C71F219669C6D1F63D_RuntimeMethod_var)));
	}

IL_0019:
	{
		// string value = _NativeGallery_GetVideoProperties( videoPath );
		String_t* L_5 = ___videoPath0;
		String_t* L_6;
		L_6 = NativeGallery__NativeGallery_GetVideoProperties_m22134EBCD3873B9D1F1F5D33C9E3CCA2808520BF(L_5, NULL);
		V_0 = L_6;
		// int width = 0, height = 0;
		V_1 = 0;
		// int width = 0, height = 0;
		V_2 = 0;
		// long duration = 0L;
		V_3 = ((int64_t)0);
		// float rotation = 0f;
		V_4 = (0.0f);
		// if( !string.IsNullOrEmpty( value ) )
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_7, NULL);
		if (L_8)
		{
			goto IL_00b5;
		}
	}
	{
		// string[] properties = value.Split( '>' );
		String_t* L_9 = V_0;
		NullCheck(L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10;
		L_10 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_9, ((int32_t)62), 0, NULL);
		V_5 = L_10;
		// if( properties != null && properties.Length >= 4 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_5;
		if (!L_11)
		{
			goto IL_00b5;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_5;
		NullCheck(L_12);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) < ((int32_t)4)))
		{
			goto IL_00b5;
		}
	}
	{
		// if( !int.TryParse( properties[0].Trim(), out width ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_15, NULL);
		bool L_17;
		L_17 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_16, (&V_1), NULL);
		if (L_17)
		{
			goto IL_0060;
		}
	}
	{
		// width = 0;
		V_1 = 0;
	}

IL_0060:
	{
		// if( !int.TryParse( properties[1].Trim(), out height ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_5;
		NullCheck(L_18);
		int32_t L_19 = 1;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_20, NULL);
		bool L_22;
		L_22 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_21, (&V_2), NULL);
		if (L_22)
		{
			goto IL_0074;
		}
	}
	{
		// height = 0;
		V_2 = 0;
	}

IL_0074:
	{
		// if( !long.TryParse( properties[2].Trim(), out duration ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_5;
		NullCheck(L_23);
		int32_t L_24 = 2;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_25, NULL);
		bool L_27;
		L_27 = Int64_TryParse_m61AAE5CC4A0B716556765798C22FE12D87554986(L_26, (&V_3), NULL);
		if (L_27)
		{
			goto IL_0089;
		}
	}
	{
		// duration = 0L;
		V_3 = ((int64_t)0);
	}

IL_0089:
	{
		// if( !float.TryParse( properties[3].Trim().Replace( ',', '.' ), NumberStyles.Float, CultureInfo.InvariantCulture, out rotation ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_5;
		NullCheck(L_28);
		int32_t L_29 = 3;
		String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		String_t* L_31;
		L_31 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_30, NULL);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_31, ((int32_t)44), ((int32_t)46), NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_33;
		L_33 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		bool L_34;
		L_34 = Single_TryParse_m5920BF3A60EE1FFF0CC117021B4BF2A8114D1AE5(L_32, ((int32_t)167), L_33, (&V_4), NULL);
		if (L_34)
		{
			goto IL_00b5;
		}
	}
	{
		// rotation = 0f;
		V_4 = (0.0f);
	}

IL_00b5:
	{
		// if( rotation == -90f )
		float L_35 = V_4;
		if ((!(((float)L_35) == ((float)(-90.0f)))))
		{
			goto IL_00c5;
		}
	}
	{
		// rotation = 270f;
		V_4 = (270.0f);
	}

IL_00c5:
	{
		// return new VideoProperties( width, height, duration, rotation );
		int32_t L_36 = V_1;
		int32_t L_37 = V_2;
		int64_t L_38 = V_3;
		float L_39 = V_4;
		VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5 L_40;
		memset((&L_40), 0, sizeof(L_40));
		VideoProperties__ctor_mF5D60E1ACB2B90A080BDB94C6362E49F835B2BFD((&L_40), L_36, L_37, L_38, L_39, /*hidden argument*/NULL);
		return L_40;
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
// Conversion methods for marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_pinvoke(const ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59& unmarshaled, ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_pinvoke& marshaled)
{
	marshaled.___width_0 = unmarshaled.___width_0;
	marshaled.___height_1 = unmarshaled.___height_1;
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_string(unmarshaled.___mimeType_2);
	marshaled.___orientation_3 = unmarshaled.___orientation_3;
}
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_pinvoke_back(const ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_pinvoke& marshaled, ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59& unmarshaled)
{
	int32_t unmarshaledwidth_temp_0 = 0;
	unmarshaledwidth_temp_0 = marshaled.___width_0;
	unmarshaled.___width_0 = unmarshaledwidth_temp_0;
	int32_t unmarshaledheight_temp_1 = 0;
	unmarshaledheight_temp_1 = marshaled.___height_1;
	unmarshaled.___height_1 = unmarshaledheight_temp_1;
	unmarshaled.___mimeType_2 = il2cpp_codegen_marshal_string_result(marshaled.___mimeType_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mimeType_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mimeType_2));
	int32_t unmarshaledorientation_temp_3 = 0;
	unmarshaledorientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.___orientation_3 = unmarshaledorientation_temp_3;
}
// Conversion method for clean up from marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_pinvoke_cleanup(ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// Conversion methods for marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_com(const ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59& unmarshaled, ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_com& marshaled)
{
	marshaled.___width_0 = unmarshaled.___width_0;
	marshaled.___height_1 = unmarshaled.___height_1;
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___mimeType_2);
	marshaled.___orientation_3 = unmarshaled.___orientation_3;
}
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_com_back(const ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_com& marshaled, ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59& unmarshaled)
{
	int32_t unmarshaledwidth_temp_0 = 0;
	unmarshaledwidth_temp_0 = marshaled.___width_0;
	unmarshaled.___width_0 = unmarshaledwidth_temp_0;
	int32_t unmarshaledheight_temp_1 = 0;
	unmarshaledheight_temp_1 = marshaled.___height_1;
	unmarshaled.___height_1 = unmarshaledheight_temp_1;
	unmarshaled.___mimeType_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___mimeType_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mimeType_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mimeType_2));
	int32_t unmarshaledorientation_temp_3 = 0;
	unmarshaledorientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.___orientation_3 = unmarshaledorientation_temp_3;
}
// Conversion method for clean up from marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_com_cleanup(ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// System.Void NativeGallery/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeGallery/ImageOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageProperties__ctor_m544A791184FB701B39531F6E5CB3C023856797E3 (ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59* __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method) 
{
	{
		// this.width = width;
		int32_t L_0 = ___width0;
		__this->___width_0 = L_0;
		// this.height = height;
		int32_t L_1 = ___height1;
		__this->___height_1 = L_1;
		// this.mimeType = mimeType;
		String_t* L_2 = ___mimeType2;
		__this->___mimeType_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mimeType_2), (void*)L_2);
		// this.orientation = orientation;
		int32_t L_3 = ___orientation3;
		__this->___orientation_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ImageProperties__ctor_m544A791184FB701B39531F6E5CB3C023856797E3_AdjustorThunk (RuntimeObject* __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method)
{
	ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59*>(__this + _offset);
	ImageProperties__ctor_m544A791184FB701B39531F6E5CB3C023856797E3(_thisAdjusted, ___width0, ___height1, ___mimeType2, ___orientation3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeGallery/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoProperties__ctor_mF5D60E1ACB2B90A080BDB94C6362E49F835B2BFD (VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5* __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method) 
{
	{
		// this.width = width;
		int32_t L_0 = ___width0;
		__this->___width_0 = L_0;
		// this.height = height;
		int32_t L_1 = ___height1;
		__this->___height_1 = L_1;
		// this.duration = duration;
		int64_t L_2 = ___duration2;
		__this->___duration_2 = L_2;
		// this.rotation = rotation;
		float L_3 = ___rotation3;
		__this->___rotation_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void VideoProperties__ctor_mF5D60E1ACB2B90A080BDB94C6362E49F835B2BFD_AdjustorThunk (RuntimeObject* __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method)
{
	VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5*>(__this + _offset);
	VideoProperties__ctor_mF5D60E1ACB2B90A080BDB94C6362E49F835B2BFD(_thisAdjusted, ___width0, ___height1, ___duration2, ___rotation3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_Multicast(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___success0, String_t* ___path1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* currentDelegate = reinterpret_cast<MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___success0, ___path1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_Open(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___success0, String_t* ___path1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___success0, ___path1, method);
}
void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_OpenStaticInvoker(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___success0, String_t* ___path1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< bool, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___success0, ___path1);
}
void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_ClosedStaticInvoker(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___success0, String_t* ___path1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, bool, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___success0, ___path1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___success0, String_t* ___path1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___path1' to native representation
	char* ____path1_marshaled = NULL;
	____path1_marshaled = il2cpp_codegen_marshal_string(___path1);

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___success0), ____path1_marshaled);

	// Marshaling cleanup of parameter '___path1' native representation
	il2cpp_codegen_marshal_free(____path1_marshaled);
	____path1_marshaled = NULL;

}
// System.Void NativeGallery/MediaSaveCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback__ctor_mC807D0DC716FCEACAB7FC85AD2916F702D92E5EF (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_Multicast;
}
// System.Void NativeGallery/MediaSaveCallback::Invoke(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___success0, String_t* ___path1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___success0, ___path1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeGallery/MediaSaveCallback::BeginInvoke(System.Boolean,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaSaveCallback_BeginInvoke_m43DF1543431C55DFD9BCFF30017FA4F4FC2BEB72 (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___success0, String_t* ___path1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___success0);
	__d_args[1] = ___path1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void NativeGallery/MediaSaveCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback_EndInvoke_mE988BF2B3A6EBA13C068BF8BAAFF8B9C2E4298BE (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_Multicast(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___path0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* currentDelegate = reinterpret_cast<MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___path0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_Open(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___path0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___path0, method);
}
void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_OpenStaticInvoker(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___path0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___path0);
}
void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_ClosedStaticInvoker(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___path0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___path0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___path0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	il2cppPInvokeFunc(____path0_marshaled);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

}
// System.Void NativeGallery/MediaPickCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback__ctor_m6772B2B8FB0ED8FC367118012A390E247874EA4D (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_Open;
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
			__this->___invoke_impl_1 = (intptr_t)&MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_Multicast;
}
// System.Void NativeGallery/MediaPickCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___path0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeGallery/MediaPickCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaPickCallback_BeginInvoke_m722D25075399F4136F7A72DEB486B16E6979F072 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___path0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___path0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void NativeGallery/MediaPickCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback_EndInvoke_m789929E1A570D84F6AE2F20FB722F42CC027E97D (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_Multicast(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* currentDelegate = reinterpret_cast<MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___paths0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_Open(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___paths0, method);
}
void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_OpenStaticInvoker(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(__this->___method_ptr_0, method, NULL, ___paths0);
}
void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_ClosedStaticInvoker(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___paths0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char**);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___paths0' to native representation
	char** ____paths0_marshaled = NULL;
	if (___paths0 != NULL)
	{
		il2cpp_array_size_t ____paths0_Length = (___paths0)->max_length;
		____paths0_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____paths0_Length + 1);
		(____paths0_marshaled)[____paths0_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paths0_Length); i++)
		{
			(____paths0_marshaled)[i] = il2cpp_codegen_marshal_string((___paths0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____paths0_marshaled = NULL;
	}

	// Native function invocation
	il2cppPInvokeFunc(____paths0_marshaled);

	// Marshaling cleanup of parameter '___paths0' native representation
	if (____paths0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____paths0_marshaled_CleanupLoopCount = (___paths0 != NULL) ? (___paths0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paths0_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____paths0_marshaled)[i]);
			(____paths0_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____paths0_marshaled);
		____paths0_marshaled = NULL;
	}

}
// System.Void NativeGallery/MediaPickMultipleCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback__ctor_m51B26CBD435D26A6CC44DFA51D2C58D74D6F1CE9 (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_Open;
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
			__this->___invoke_impl_1 = (intptr_t)&MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_Multicast;
}
// System.Void NativeGallery/MediaPickMultipleCallback::Invoke(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___paths0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeGallery/MediaPickMultipleCallback::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaPickMultipleCallback_BeginInvoke_m6321A0529E97A8616F70F36CC82830AD8B1A38C9 (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___paths0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void NativeGallery/MediaPickMultipleCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_EndInvoke_m52B699AF968CA46D70F40ED0B433D9FE577753EF (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Boolean NativeGalleryNamespace.NGMediaReceiveCallbackiOS::get_IsBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NGMediaReceiveCallbackiOS_get_IsBusy_mA25E88E06DCA0969BF03419F96743C9E93E837BE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsBusy { get; private set; }
		bool L_0 = ((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___U3CIsBusyU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::set_IsBusy(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_set_IsBusy_m0B22395815D56D0B00BE72CA8866C26B072DD376 (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsBusy { get; private set; }
		bool L_0 = ___value0;
		((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___U3CIsBusyU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Int32 NativeGalleryNamespace.NGMediaReceiveCallbackiOS::_NativeGallery_IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NGMediaReceiveCallbackiOS__NativeGallery_IsMediaPickerBusy_mF5F277777613FF01982B7990523E7C48FFEEB58E (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_IsMediaPickerBusy)();

	return returnValue;
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::Initialize(NativeGallery/MediaPickCallback,NativeGallery/MediaPickMultipleCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_Initialize_mC6D64D3A14F8A325EFD302DA9B51E525ADF81B19 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___callback0, MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___callbackMultiple1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_m5E174F21F5B691FDA1720B5AF8D4C1866F2B1547_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E90946BC7628636C60D094F905E96CD1360A930);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( IsBusy )
		bool L_0;
		L_0 = NGMediaReceiveCallbackiOS_get_IsBusy_mA25E88E06DCA0969BF03419F96743C9E93E837BE_inline(NULL);
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if( instance == null )
		NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* L_1 = ((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		// instance = new GameObject( "NGMediaReceiveCallbackiOS" ).AddComponent<NGMediaReceiveCallbackiOS>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteral7E90946BC7628636C60D094F905E96CD1360A930, NULL);
		NullCheck(L_3);
		NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* L_4;
		L_4 = GameObject_AddComponent_TisNGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_m5E174F21F5B691FDA1720B5AF8D4C1866F2B1547(L_3, GameObject_AddComponent_TisNGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_m5E174F21F5B691FDA1720B5AF8D4C1866F2B1547_RuntimeMethod_var);
		((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___instance_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___instance_4), (void*)L_4);
		// DontDestroyOnLoad( instance.gameObject );
		NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* L_5 = ((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_6, NULL);
	}

IL_0038:
	{
		// instance.callback = callback;
		NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* L_7 = ((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___instance_4;
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_8 = ___callback0;
		NullCheck(L_7);
		L_7->___callback_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___callback_5), (void*)L_8);
		// instance.callbackMultiple = callbackMultiple;
		NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* L_9 = ((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___instance_4;
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_10 = ___callbackMultiple1;
		NullCheck(L_9);
		L_9->___callbackMultiple_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___callbackMultiple_6), (void*)L_10);
		// instance.nextBusyCheckTime = Time.realtimeSinceStartup + 1f;
		NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* L_11 = ((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___instance_4;
		float L_12;
		L_12 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		NullCheck(L_11);
		L_11->___nextBusyCheckTime_7 = ((float)il2cpp_codegen_add(L_12, (1.0f)));
		// IsBusy = true;
		NGMediaReceiveCallbackiOS_set_IsBusy_m0B22395815D56D0B00BE72CA8866C26B072DD376_inline((bool)1, NULL);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_Update_mFC36FE20A450A54FF9C691A2FB85DB1F2D8E22A6 (NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* __this, const RuntimeMethod* method) 
{
	MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* V_0 = NULL;
	MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* V_1 = NULL;
	{
		// if( IsBusy )
		bool L_0;
		L_0 = NGMediaReceiveCallbackiOS_get_IsBusy_mA25E88E06DCA0969BF03419F96743C9E93E837BE_inline(NULL);
		if (!L_0)
		{
			goto IL_0062;
		}
	}
	{
		// if( Time.realtimeSinceStartup >= nextBusyCheckTime )
		float L_1;
		L_1 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		float L_2 = __this->___nextBusyCheckTime_7;
		if ((!(((float)L_1) >= ((float)L_2))))
		{
			goto IL_0062;
		}
	}
	{
		// nextBusyCheckTime = Time.realtimeSinceStartup + 1f;
		float L_3;
		L_3 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		__this->___nextBusyCheckTime_7 = ((float)il2cpp_codegen_add(L_3, (1.0f)));
		// if( _NativeGallery_IsMediaPickerBusy() == 0 )
		int32_t L_4;
		L_4 = NGMediaReceiveCallbackiOS__NativeGallery_IsMediaPickerBusy_mF5F277777613FF01982B7990523E7C48FFEEB58E(NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		// IsBusy = false;
		NGMediaReceiveCallbackiOS_set_IsBusy_m0B22395815D56D0B00BE72CA8866C26B072DD376_inline((bool)0, NULL);
		// NativeGallery.MediaPickCallback _callback = callback;
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_5 = __this->___callback_5;
		V_0 = L_5;
		// callback = null;
		__this->___callback_5 = (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_5), (void*)(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6*)NULL);
		// NativeGallery.MediaPickMultipleCallback _callbackMultiple = callbackMultiple;
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_6 = __this->___callbackMultiple_6;
		V_1 = L_6;
		// callbackMultiple = null;
		__this->___callbackMultiple_6 = (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackMultiple_6), (void*)(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B*)NULL);
		// if( _callback != null )
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		// _callback( null );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_8 = V_0;
		NullCheck(L_8);
		MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_inline(L_8, (String_t*)NULL, NULL);
	}

IL_0058:
	{
		// if( _callbackMultiple != null )
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		// _callbackMultiple( null );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_10 = V_1;
		NullCheck(L_10);
		MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_inline(L_10, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::OnMediaReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_OnMediaReceived_mDE9B1F66958CE1103DD9F924957FAC01131FE560 (NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* V_0 = NULL;
	{
		// IsBusy = false;
		NGMediaReceiveCallbackiOS_set_IsBusy_m0B22395815D56D0B00BE72CA8866C26B072DD376_inline((bool)0, NULL);
		// if( string.IsNullOrEmpty( path ) )
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// path = null;
		___path0 = (String_t*)NULL;
	}

IL_0011:
	{
		// NativeGallery.MediaPickCallback _callback = callback;
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_2 = __this->___callback_5;
		V_0 = L_2;
		// callback = null;
		__this->___callback_5 = (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_5), (void*)(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6*)NULL);
		// if( _callback != null )
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// _callback( path );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_4 = V_0;
		String_t* L_5 = ___path0;
		NullCheck(L_4);
		MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_inline(L_4, L_5, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::OnMultipleMediaReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_OnMultipleMediaReceived_m978EBD4153C6206985E10872D954603A8FEAAE09 (NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* __this, String_t* ___paths0, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* V_1 = NULL;
	{
		// IsBusy = false;
		NGMediaReceiveCallbackiOS_set_IsBusy_m0B22395815D56D0B00BE72CA8866C26B072DD376_inline((bool)0, NULL);
		// string[] _paths = SplitPaths( paths );
		String_t* L_0 = ___paths0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = NGMediaReceiveCallbackiOS_SplitPaths_mCE4253E500919FECD0EB9B8ACA40F66305247E2B(__this, L_0, NULL);
		V_0 = L_1;
		// if( _paths != null && _paths.Length == 0 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		NullCheck(L_3);
		if ((((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0017;
		}
	}
	{
		// _paths = null;
		V_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}

IL_0017:
	{
		// NativeGallery.MediaPickMultipleCallback _callbackMultiple = callbackMultiple;
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_4 = __this->___callbackMultiple_6;
		V_1 = L_4;
		// callbackMultiple = null;
		__this->___callbackMultiple_6 = (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackMultiple_6), (void*)(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B*)NULL);
		// if( _callbackMultiple != null )
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_5 = V_1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// _callbackMultiple( _paths );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_6 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		NullCheck(L_6);
		MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_inline(L_6, L_7, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.String[] NativeGalleryNamespace.NGMediaReceiveCallbackiOS::SplitPaths(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NGMediaReceiveCallbackiOS_SplitPaths_mCE4253E500919FECD0EB9B8ACA40F66305247E2B (NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* __this, String_t* ___paths0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// string[] result = null;
		V_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		// if( !string.IsNullOrEmpty( paths ) )
		String_t* L_0 = ___paths0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_007f;
		}
	}
	{
		// string[] pathsSplit = paths.Split( '>' );
		String_t* L_2 = ___paths0;
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_2, ((int32_t)62), 0, NULL);
		V_1 = L_3;
		// int validPathCount = 0;
		V_2 = 0;
		// for( int i = 0; i < pathsSplit.Length; i++ )
		V_3 = 0;
		goto IL_002c;
	}

IL_001a:
	{
		// if( !string.IsNullOrEmpty( pathsSplit[i] ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_1;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_7, NULL);
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		// validPathCount++;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0028:
	{
		// for( int i = 0; i < pathsSplit.Length; i++ )
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		// for( int i = 0; i < pathsSplit.Length; i++ )
		int32_t L_11 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// if( validPathCount == 0 )
		int32_t L_13 = V_2;
		if (L_13)
		{
			goto IL_003e;
		}
	}
	{
		// pathsSplit = new string[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		V_1 = L_14;
		goto IL_007d;
	}

IL_003e:
	{
		// else if( validPathCount != pathsSplit.Length )
		int32_t L_15 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) == ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_007d;
		}
	}
	{
		// string[] validPaths = new string[validPathCount];
		int32_t L_17 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_17);
		V_4 = L_18;
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		V_5 = 0;
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		V_6 = 0;
		goto IL_0073;
	}

IL_0054:
	{
		// if( !string.IsNullOrEmpty( pathsSplit[i] ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_1;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		String_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_22, NULL);
		if (L_23)
		{
			goto IL_006d;
		}
	}
	{
		// validPaths[j++] = pathsSplit[i];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = V_4;
		int32_t L_25 = V_6;
		int32_t L_26 = L_25;
		V_6 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		String_t* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_30);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (String_t*)L_30);
	}

IL_006d:
	{
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0073:
	{
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		int32_t L_32 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_1;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_0054;
		}
	}
	{
		// pathsSplit = validPaths;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = V_4;
		V_1 = L_34;
	}

IL_007d:
	{
		// result = pathsSplit;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = V_1;
		V_0 = L_35;
	}

IL_007f:
	{
		// return result;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = V_0;
		return L_36;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS__ctor_m4D70D6592553882BDA384E884B17FAA0C27515C6 (NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280* __this, const RuntimeMethod* method) 
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
// System.Void NativeGalleryNamespace.NGMediaSaveCallbackiOS::Initialize(NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaSaveCallbackiOS_Initialize_m26B1FBB394EAB5CF0561EA610B01703768F99AB7 (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_mFDB8D8B0F5D4B621A2434FDD88597D027AA91F23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A79B0229EB4F27A4505CE75160E9133E944F111);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( instance == null )
		NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* L_0 = ((NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// instance = new GameObject( "NGMediaSaveCallbackiOS" ).AddComponent<NGMediaSaveCallbackiOS>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral0A79B0229EB4F27A4505CE75160E9133E944F111, NULL);
		NullCheck(L_2);
		NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* L_3;
		L_3 = GameObject_AddComponent_TisNGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_mFDB8D8B0F5D4B621A2434FDD88597D027AA91F23(L_2, GameObject_AddComponent_TisNGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_mFDB8D8B0F5D4B621A2434FDD88597D027AA91F23_RuntimeMethod_var);
		((NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_il2cpp_TypeInfo_var))->___instance_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_il2cpp_TypeInfo_var))->___instance_4), (void*)L_3);
		// DontDestroyOnLoad( instance.gameObject );
		NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* L_4 = ((NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_5, NULL);
		goto IL_004f;
	}

IL_0032:
	{
		// else if( instance.callback != null )
		NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* L_6 = ((NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_6);
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_7 = L_6->___callback_5;
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		// instance.callback( false, null );
		NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* L_8 = ((NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_8);
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_9 = L_8->___callback_5;
		NullCheck(L_9);
		MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_inline(L_9, (bool)0, (String_t*)NULL, NULL);
	}

IL_004f:
	{
		// instance.callback = callback;
		NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* L_10 = ((NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9_il2cpp_TypeInfo_var))->___instance_4;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_11 = ___callback0;
		NullCheck(L_10);
		L_10->___callback_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___callback_5), (void*)L_11);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaSaveCallbackiOS::OnMediaSaveCompleted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaSaveCallbackiOS_OnMediaSaveCompleted_m90E6DFF9418ADF8F12894EB328D02A832DE2CB44 (NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* V_0 = NULL;
	{
		// NativeGallery.MediaSaveCallback _callback = callback;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_0 = __this->___callback_5;
		V_0 = L_0;
		// callback = null;
		__this->___callback_5 = (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_5), (void*)(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D*)NULL);
		// if( _callback != null )
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _callback( true, null );
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_2 = V_0;
		NullCheck(L_2);
		MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_inline(L_2, (bool)1, (String_t*)NULL, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaSaveCallbackiOS::OnMediaSaveFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaSaveCallbackiOS_OnMediaSaveFailed_mE81BDC65F8159F6CE0EEAD4D78415F6C1F84918C (NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* __this, String_t* ___error0, const RuntimeMethod* method) 
{
	MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* V_0 = NULL;
	{
		// NativeGallery.MediaSaveCallback _callback = callback;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_0 = __this->___callback_5;
		V_0 = L_0;
		// callback = null;
		__this->___callback_5 = (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_5), (void*)(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D*)NULL);
		// if( _callback != null )
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _callback( false, null );
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_2 = V_0;
		NullCheck(L_2);
		MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_inline(L_2, (bool)0, (String_t*)NULL, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaSaveCallbackiOS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaSaveCallbackiOS__ctor_mBAC62B3A8CFA91057F5BB4C94D531D61DC5D1883 (NGMediaSaveCallbackiOS_t31F72978BB8FB757F7580EABA2D1EDFEAE2E87B9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NGMediaReceiveCallbackiOS_get_IsBusy_mA25E88E06DCA0969BF03419F96743C9E93E837BE_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsBusy { get; private set; }
		bool L_0 = ((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___U3CIsBusyU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_inline (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___success0, String_t* ___path1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___success0, ___path1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_inline (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___path0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_inline (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___paths0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_set_IsBusy_m0B22395815D56D0B00BE72CA8866C26B072DD376_inline (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsBusy { get; private set; }
		bool L_0 = ___value0;
		((NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tD90DF712E9D1B5AE35D625194DB2E09EABAD0280_il2cpp_TypeInfo_var))->___U3CIsBusyU3Ek__BackingField_8 = L_0;
		return;
	}
}
