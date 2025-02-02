﻿#include "pch-cpp.hpp"

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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Google.MiniJSON.Json/Parser
struct Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A;
// Google.MiniJSON.Json/Serializer
struct Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralDAAB223BEA36473319F6E61F933248BC1430638F;
IL2CPP_EXTERN_C String_t* _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8709D934BD5DE477DB5B004FDA1310655B226003 
{
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

// Google.MiniJSON.Json
struct Json_tAC953EA3C3BAADDA37708F6DC2FFB84E4B32181D  : public RuntimeObject
{
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// Google.MiniJSON.Json/Parser
struct Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A  : public RuntimeObject
{
	// System.IO.StringReader Google.MiniJSON.Json/Parser::json
	StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* ___json_2;
};

// Google.MiniJSON.Json/Serializer
struct Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4  : public RuntimeObject
{
	// System.Text.StringBuilder Google.MiniJSON.Json/Serializer::builder
	StringBuilder_t* ___builder_0;
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

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
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

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.String System.IO.StringReader::_s
	String_t* ____s_2;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_3;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Object Google.MiniJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_Parse_m97FCCAA8F0BD180F3E7CF2F89408519C887E6B52 (String_t* ___jsonString0, const RuntimeMethod* method) ;
// System.String Google.MiniJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m65597EFD73DB19BCE3A80DF92A6DBB59B2BF8039 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0 (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* __this, String_t* ___s0, const RuntimeMethod* method) ;
// System.Void Google.MiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m5BCC54B4033554EB175D9CCAB4E06CD68127F594 (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, String_t* ___jsonString0, const RuntimeMethod* method) ;
// System.Object Google.MiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseValue_m2592528D604AC2F5EE46C1F301325B8A28D180EA (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) ;
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616 (TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// Google.MiniJSON.Json/Parser/TOKEN Google.MiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m1929B96398C765C1294FEDD658C9DF0B4C95E6CB (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) ;
// System.String Google.MiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m3A1DBEF95B05BE6518776E820C2361ED7F53EE7D (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) ;
// System.Object Google.MiniJSON.Json/Parser::ParseByToken(Google.MiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseByToken_m2BEF209879EDBD65C33D083E66542063E5850980 (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, int32_t ___token0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Object Google.MiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseNumber_m1CD296075CD1289E2DC1C25BF57D71AF91EA5821 (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Google.MiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* Parser_ParseObject_m60952B50B3C72FE70F4205524B599159145DD189 (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Object> Google.MiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Parser_ParseArray_m9127DA810B85F85B419C7F80E7F59FC438C40D59 (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Char Google.MiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_mAA110522471FA2FCA9D5731BF4FA3B61565D487F (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Boolean Google.MiniJSON.Json/Parser::IsHexDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsHexDigit_mD45E296B49D4226DCBB1EA10DA299BC19AF72AC2 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m8881C26C9DC63CBE2186F7180F780706A10283F6 (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method) ;
// System.String Google.MiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m7E1370AB8E0DA6C161CCA5A215F7A9BA1C910376 (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m280F0E3C898A7C3A57F35E3B136D4BFACE12122A (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int64_t* ___result3, const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m6038C4DBF1789F1954938FF7F6D3459359CD7718 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, double* ___result3, const RuntimeMethod* method) ;
// System.Char Google.MiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m472C7F26ADA56DB3C9AA0F4D6F02E87480BDDD5C (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) ;
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m22D0549E3F5013C6BA2E1E68B8807F20786889F1 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean Google.MiniJSON.Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_m7E50E62A8ED6EF012E660DD03650296F96E3692C (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Void Google.MiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m88624DEDFEBFA22325EC4A691FCCF5C657797A91 (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Google.MiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m4238A1AF322275FEA3A2FF5FA7BFD60452770CDD (Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4* __this, const RuntimeMethod* method) ;
// System.Void Google.MiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m98CDA290115CF811F9FF38A2B89F2849D0DB0F94 (Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.MiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_mD964E73E708CBDE27BFC85005F5B27EAC4E79768 (Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Void Google.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_mF401DE78D13BAFDED4E15F20D0DA87A5C5576F1F (Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4* __this, RuntimeObject* ___anArray0, const RuntimeMethod* method) ;
// System.Void Google.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_mA6367B0CC5538101A34545EFF8C3D3CA47186CD9 (Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void Google.MiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_mA84A5D339E6C95FD627752D174132C4F297F7621 (Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m7B23BC2572EEB2B03EDAA26D2D9232C4A00DA00C (Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE (float* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mE64ED1A9412EA3B16E4C7F1C74655F53DE71C71A (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789 (double* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
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
// System.Object Google.MiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Json_Deserialize_mCE93A4E18D7A3437472FECAC1FCFBE3A1BA02369 (String_t* ___json0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		String_t* L_0 = ___json0;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		V_1 = NULL;
		goto IL_0017;
	}

IL_000e:
	{
		String_t* L_2 = ___json0;
		RuntimeObject* L_3;
		L_3 = Parser_Parse_m97FCCAA8F0BD180F3E7CF2F89408519C887E6B52(L_2, NULL);
		V_1 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.String Google.MiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_mE7F31F490AA39941C6DF56155B8B78263317C7BB (RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		String_t* L_1;
		L_1 = Serializer_Serialize_m65597EFD73DB19BCE3A80DF92A6DBB59B2BF8039(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_2 = V_0;
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
// System.Boolean Google.MiniJSON.Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_m7E50E62A8ED6EF012E660DD03650296F96E3692C (Il2CppChar ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Il2CppChar L_0 = ___c0;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_0, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		NullCheck(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		int32_t L_3;
		L_3 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA, L_2, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Google.MiniJSON.Json/Parser::IsHexDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsHexDigit_mD45E296B49D4226DCBB1EA10DA299BC19AF72AC2 (Il2CppChar ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAAB223BEA36473319F6E61F933248BC1430638F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Il2CppChar L_0 = ___c0;
		NullCheck(_stringLiteralDAAB223BEA36473319F6E61F933248BC1430638F);
		int32_t L_1;
		L_1 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteralDAAB223BEA36473319F6E61F933248BC1430638F, L_0, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Google.MiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m5BCC54B4033554EB175D9CCAB4E06CD68127F594 (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, String_t* ___jsonString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___jsonString0;
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_1, L_0, NULL);
		__this->___json_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_2), (void*)L_1);
		return;
	}
}
// System.Object Google.MiniJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_Parse_m97FCCAA8F0BD180F3E7CF2F89408519C887E6B52 (String_t* ___jsonString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		String_t* L_0 = ___jsonString0;
		Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* L_1 = (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A*)il2cpp_codegen_object_new(Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Parser__ctor_m5BCC54B4033554EB175D9CCAB4E06CD68127F594(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0012:
			{// begin finally (depth: 1)
				{
					Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* L_2 = V_0;
					if (!L_2)
					{
						goto IL_001c;
					}
				}
				{
					Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_001c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* L_4 = V_0;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = Parser_ParseValue_m2592528D604AC2F5EE46C1F301325B8A28D180EA(L_4, NULL);
			V_1 = L_5;
			goto IL_001d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001d:
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
// System.Void Google.MiniJSON.Json/Parser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Dispose_m50F0F70BF69C7D1401E5EB27A5E65043B075BA7A (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) 
{
	{
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_2;
		NullCheck(L_0);
		TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616(L_0, NULL);
		__this->___json_2 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_2), (void*)(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Google.MiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* Parser_ParseObject_m60952B50B3C72FE70F4205524B599159145DD189 (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B20_0 = 0;
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_0 = L_0;
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		goto IL_00cb;
	}

IL_0018:
	{
		int32_t L_3;
		L_3 = Parser_get_NextToken_m1929B96398C765C1294FEDD658C9DF0B4C95E6CB(__this, NULL);
		V_5 = L_3;
		int32_t L_4 = V_5;
		V_4 = L_4;
		int32_t L_5 = V_4;
		if ((((int32_t)L_5) > ((int32_t)2)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_6 = V_4;
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		goto IL_0030;
	}

IL_0030:
	{
		int32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_0052;
		}
	}
	{
		goto IL_00c5;
	}

IL_003a:
	{
		int32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)6)))
		{
			goto IL_0050;
		}
	}
	{
		goto IL_0041;
	}

IL_0041:
	{
		int32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)7)))
		{
			goto IL_0057;
		}
	}
	{
		goto IL_00c5;
	}

IL_0048:
	{
		V_6 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
		goto IL_00d3;
	}

IL_0050:
	{
		goto IL_00cb;
	}

IL_0052:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_10 = V_0;
		V_6 = L_10;
		goto IL_00d3;
	}

IL_0057:
	{
		String_t* L_11;
		L_11 = Parser_ParseString_m3A1DBEF95B05BE6518776E820C2361ED7F53EE7D(__this, NULL);
		V_1 = L_11;
		String_t* L_12 = V_1;
		V_7 = (bool)((((RuntimeObject*)(String_t*)L_12) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_13 = V_7;
		if (!L_13)
		{
			goto IL_006e;
		}
	}
	{
		V_6 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
		goto IL_00d3;
	}

IL_006e:
	{
		int32_t L_14;
		L_14 = Parser_get_NextToken_m1929B96398C765C1294FEDD658C9DF0B4C95E6CB(__this, NULL);
		V_8 = (bool)((((int32_t)((((int32_t)L_14) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_8;
		if (!L_15)
		{
			goto IL_0086;
		}
	}
	{
		V_6 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
		goto IL_00d3;
	}

IL_0086:
	{
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_16 = __this->___json_2;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_16);
		int32_t L_18;
		L_18 = Parser_get_NextToken_m1929B96398C765C1294FEDD658C9DF0B4C95E6CB(__this, NULL);
		V_2 = L_18;
		int32_t L_19 = V_2;
		RuntimeObject* L_20;
		L_20 = Parser_ParseByToken_m2BEF209879EDBD65C33D083E66542063E5850980(__this, L_19, NULL);
		V_3 = L_20;
		RuntimeObject* L_21 = V_3;
		if (L_21)
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_22 = V_2;
		G_B20_0 = ((((int32_t)((((int32_t)L_22) == ((int32_t)((int32_t)11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00af;
	}

IL_00ae:
	{
		G_B20_0 = 0;
	}

IL_00af:
	{
		V_9 = (bool)G_B20_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00ba;
		}
	}
	{
		V_6 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
		goto IL_00d3;
	}

IL_00ba:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_24 = V_0;
		String_t* L_25 = V_1;
		RuntimeObject* L_26 = V_3;
		NullCheck(L_24);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_24, L_25, L_26, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		goto IL_00ca;
	}

IL_00c5:
	{
		V_6 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
		goto IL_00d3;
	}

IL_00ca:
	{
	}

IL_00cb:
	{
		V_10 = (bool)1;
		goto IL_0018;
	}

IL_00d3:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_27 = V_6;
		return L_27;
	}
}
// System.Collections.Generic.List`1<System.Object> Google.MiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Parser_ParseArray_m9127DA810B85F85B419C7F80E7F59FC438C40D59 (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B13_0 = 0;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		V_0 = L_0;
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_1 = (bool)1;
		goto IL_0071;
	}

IL_0017:
	{
		int32_t L_3;
		L_3 = Parser_get_NextToken_m1929B96398C765C1294FEDD658C9DF0B4C95E6CB(__this, NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		V_5 = L_4;
		int32_t L_5 = V_5;
		V_4 = L_5;
		int32_t L_6 = V_4;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		goto IL_002c;
	}

IL_002c:
	{
		int32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)4)))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0033;
	}

IL_0033:
	{
		int32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)6)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0045;
	}

IL_003a:
	{
		V_6 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)NULL;
		goto IL_007d;
	}

IL_003f:
	{
		goto IL_0071;
	}

IL_0041:
	{
		V_1 = (bool)0;
		goto IL_0070;
	}

IL_0045:
	{
		int32_t L_9 = V_2;
		RuntimeObject* L_10;
		L_10 = Parser_ParseByToken_m2BEF209879EDBD65C33D083E66542063E5850980(__this, L_9, NULL);
		V_3 = L_10;
		RuntimeObject* L_11 = V_3;
		if (L_11)
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_12 = V_2;
		G_B13_0 = ((((int32_t)((((int32_t)L_12) == ((int32_t)((int32_t)11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_005b;
	}

IL_005a:
	{
		G_B13_0 = 0;
	}

IL_005b:
	{
		V_7 = (bool)G_B13_0;
		bool L_13 = V_7;
		if (!L_13)
		{
			goto IL_0066;
		}
	}
	{
		V_6 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)NULL;
		goto IL_007d;
	}

IL_0066:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		NullCheck(L_14);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_14, L_15, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		goto IL_0070;
	}

IL_0070:
	{
	}

IL_0071:
	{
		bool L_16 = V_1;
		V_8 = L_16;
		bool L_17 = V_8;
		if (L_17)
		{
			goto IL_0017;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_18 = V_0;
		V_6 = L_18;
		goto IL_007d;
	}

IL_007d:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_19 = V_6;
		return L_19;
	}
}
// System.Object Google.MiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseValue_m2592528D604AC2F5EE46C1F301325B8A28D180EA (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = Parser_get_NextToken_m1929B96398C765C1294FEDD658C9DF0B4C95E6CB(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		RuntimeObject* L_2;
		L_2 = Parser_ParseByToken_m2BEF209879EDBD65C33D083E66542063E5850980(__this, L_1, NULL);
		V_1 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		RuntimeObject* L_3 = V_1;
		return L_3;
	}
}
// System.Object Google.MiniJSON.Json/Parser::ParseByToken(Google.MiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseByToken_m2BEF209879EDBD65C33D083E66542063E5850980 (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, int32_t ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0 = ___token0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_004d;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_0056;
			}
			case 3:
			{
				goto IL_0075;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_0075;
			}
			case 6:
			{
				goto IL_003b;
			}
			case 7:
			{
				goto IL_0044;
			}
			case 8:
			{
				goto IL_005f;
			}
			case 9:
			{
				goto IL_0068;
			}
			case 10:
			{
				goto IL_0071;
			}
		}
	}
	{
		goto IL_0075;
	}

IL_003b:
	{
		String_t* L_3;
		L_3 = Parser_ParseString_m3A1DBEF95B05BE6518776E820C2361ED7F53EE7D(__this, NULL);
		V_2 = L_3;
		goto IL_0079;
	}

IL_0044:
	{
		RuntimeObject* L_4;
		L_4 = Parser_ParseNumber_m1CD296075CD1289E2DC1C25BF57D71AF91EA5821(__this, NULL);
		V_2 = L_4;
		goto IL_0079;
	}

IL_004d:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5;
		L_5 = Parser_ParseObject_m60952B50B3C72FE70F4205524B599159145DD189(__this, NULL);
		V_2 = L_5;
		goto IL_0079;
	}

IL_0056:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_6;
		L_6 = Parser_ParseArray_m9127DA810B85F85B419C7F80E7F59FC438C40D59(__this, NULL);
		V_2 = L_6;
		goto IL_0079;
	}

IL_005f:
	{
		bool L_7 = ((bool)1);
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		V_2 = L_8;
		goto IL_0079;
	}

IL_0068:
	{
		bool L_9 = ((bool)0);
		RuntimeObject* L_10 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_9);
		V_2 = L_10;
		goto IL_0079;
	}

IL_0071:
	{
		V_2 = NULL;
		goto IL_0079;
	}

IL_0075:
	{
		V_2 = NULL;
		goto IL_0079;
	}

IL_0079:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
// System.String Google.MiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m3A1DBEF95B05BE6518776E820C2361ED7F53EE7D (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	Il2CppChar V_4 = 0x0;
	Il2CppChar V_5 = 0x0;
	bool V_6 = false;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_7 = NULL;
	Il2CppChar V_8 = 0x0;
	Il2CppChar V_9 = 0x0;
	int32_t V_10 = 0;
	bool V_11 = false;
	String_t* V_12 = NULL;
	bool V_13 = false;
	bool V_14 = false;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_2 = (bool)1;
		goto IL_0196;
	}

IL_001a:
	{
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_3 = __this->___json_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_01a0;
	}

IL_0035:
	{
		Il2CppChar L_6;
		L_6 = Parser_get_NextChar_mAA110522471FA2FCA9D5731BF4FA3B61565D487F(__this, NULL);
		V_1 = L_6;
		Il2CppChar L_7 = V_1;
		V_5 = L_7;
		Il2CppChar L_8 = V_5;
		V_4 = L_8;
		Il2CppChar L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_0056;
		}
	}
	{
		goto IL_004b;
	}

IL_004b:
	{
		Il2CppChar L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_018b;
	}

IL_0056:
	{
		V_2 = (bool)0;
		goto IL_0195;
	}

IL_005d:
	{
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_11 = __this->___json_2;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_11);
		V_6 = (bool)((((int32_t)L_12) == ((int32_t)(-1)))? 1 : 0);
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_0079;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0195;
	}

IL_0079:
	{
		Il2CppChar L_14;
		L_14 = Parser_get_NextChar_mAA110522471FA2FCA9D5731BF4FA3B61565D487F(__this, NULL);
		V_1 = L_14;
		Il2CppChar L_15 = V_1;
		V_9 = L_15;
		Il2CppChar L_16 = V_9;
		V_8 = L_16;
		Il2CppChar L_17 = V_8;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a8;
		}
	}
	{
		Il2CppChar L_18 = V_8;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)34))))
		{
			goto IL_00e8;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		Il2CppChar L_19 = V_8;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)47))))
		{
			goto IL_00e8;
		}
	}
	{
		goto IL_009d;
	}

IL_009d:
	{
		Il2CppChar L_20 = V_8;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)92))))
		{
			goto IL_00e8;
		}
	}
	{
		goto IL_0189;
	}

IL_00a8:
	{
		Il2CppChar L_21 = V_8;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_22 = V_8;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)98))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_00b6;
	}

IL_00b6:
	{
		Il2CppChar L_23 = V_8;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)102))))
		{
			goto IL_0102;
		}
	}
	{
		goto IL_0189;
	}

IL_00c1:
	{
		Il2CppChar L_24 = V_8;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)110))))
		{
			goto IL_010d;
		}
	}
	{
		goto IL_00c9;
	}

IL_00c9:
	{
		Il2CppChar L_25 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_25, ((int32_t)114))))
		{
			case 0:
			{
				goto IL_0118;
			}
			case 1:
			{
				goto IL_0189;
			}
			case 2:
			{
				goto IL_0123;
			}
			case 3:
			{
				goto IL_012e;
			}
		}
	}
	{
		goto IL_0189;
	}

IL_00e8:
	{
		StringBuilder_t* L_26 = V_0;
		Il2CppChar L_27 = V_1;
		NullCheck(L_26);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_26, L_27, NULL);
		goto IL_0189;
	}

IL_00f5:
	{
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_29, 8, NULL);
		goto IL_0189;
	}

IL_0102:
	{
		StringBuilder_t* L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_31, ((int32_t)12), NULL);
		goto IL_0189;
	}

IL_010d:
	{
		StringBuilder_t* L_33 = V_0;
		NullCheck(L_33);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_33, ((int32_t)10), NULL);
		goto IL_0189;
	}

IL_0118:
	{
		StringBuilder_t* L_35 = V_0;
		NullCheck(L_35);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_35, ((int32_t)13), NULL);
		goto IL_0189;
	}

IL_0123:
	{
		StringBuilder_t* L_37 = V_0;
		NullCheck(L_37);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_37, ((int32_t)9), NULL);
		goto IL_0189;
	}

IL_012e:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_39 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)4);
		V_7 = L_39;
		V_10 = 0;
		goto IL_0166;
	}

IL_013b:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_40 = V_7;
		int32_t L_41 = V_10;
		Il2CppChar L_42;
		L_42 = Parser_get_NextChar_mAA110522471FA2FCA9D5731BF4FA3B61565D487F(__this, NULL);
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (Il2CppChar)L_42);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_43 = V_7;
		int32_t L_44 = V_10;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		uint16_t L_46 = (uint16_t)(L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		bool L_47;
		L_47 = Parser_IsHexDigit_mD45E296B49D4226DCBB1EA10DA299BC19AF72AC2(L_46, NULL);
		V_11 = (bool)((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
		bool L_48 = V_11;
		if (!L_48)
		{
			goto IL_015f;
		}
	}
	{
		V_12 = (String_t*)NULL;
		goto IL_01aa;
	}

IL_015f:
	{
		int32_t L_49 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0166:
	{
		int32_t L_50 = V_10;
		V_13 = (bool)((((int32_t)L_50) < ((int32_t)4))? 1 : 0);
		bool L_51 = V_13;
		if (L_51)
		{
			goto IL_013b;
		}
	}
	{
		StringBuilder_t* L_52 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_53 = V_7;
		String_t* L_54;
		L_54 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_53, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_55;
		L_55 = Convert_ToInt32_m8881C26C9DC63CBE2186F7180F780706A10283F6(L_54, ((int32_t)16), NULL);
		NullCheck(L_52);
		StringBuilder_t* L_56;
		L_56 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_52, ((int32_t)(uint16_t)L_55), NULL);
		goto IL_0189;
	}

IL_0189:
	{
		goto IL_0195;
	}

IL_018b:
	{
		StringBuilder_t* L_57 = V_0;
		Il2CppChar L_58 = V_1;
		NullCheck(L_57);
		StringBuilder_t* L_59;
		L_59 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_57, L_58, NULL);
		goto IL_0195;
	}

IL_0195:
	{
	}

IL_0196:
	{
		bool L_60 = V_2;
		V_14 = L_60;
		bool L_61 = V_14;
		if (L_61)
		{
			goto IL_001a;
		}
	}

IL_01a0:
	{
		StringBuilder_t* L_62 = V_0;
		NullCheck(L_62);
		String_t* L_63;
		L_63 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_62);
		V_12 = L_63;
		goto IL_01aa;
	}

IL_01aa:
	{
		String_t* L_64 = V_12;
		return L_64;
	}
}
// System.Object Google.MiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseNumber_m1CD296075CD1289E2DC1C25BF57D71AF91EA5821 (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	bool V_2 = false;
	int64_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0;
		L_0 = Parser_get_NextWord_m7E1370AB8E0DA6C161CCA5A215F7A9BA1C910376(__this, NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_1, ((int32_t)46), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_3, ((int32_t)69), NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_5, ((int32_t)101), NULL);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 0;
	}

IL_002c:
	{
		V_2 = (bool)G_B4_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9;
		L_9 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		bool L_10;
		L_10 = Int64_TryParse_m280F0E3C898A7C3A57F35E3B136D4BFACE12122A(L_8, ((int32_t)511), L_9, (&V_3), NULL);
		int64_t L_11 = V_3;
		int64_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_12);
		V_4 = L_13;
		goto IL_006b;
	}

IL_004e:
	{
		String_t* L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_15;
		L_15 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		bool L_16;
		L_16 = Double_TryParse_m6038C4DBF1789F1954938FF7F6D3459359CD7718(L_14, ((int32_t)511), L_15, (&V_1), NULL);
		double L_17 = V_1;
		double L_18 = L_17;
		RuntimeObject* L_19 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_18);
		V_4 = L_19;
		goto IL_006b;
	}

IL_006b:
	{
		RuntimeObject* L_20 = V_4;
		return L_20;
	}
}
// System.Void Google.MiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m88624DEDFEBFA22325EC4A691FCCF5C657797A91 (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		goto IL_0026;
	}

IL_0003:
	{
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_2 = __this->___json_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_0025:
	{
	}

IL_0026:
	{
		Il2CppChar L_5;
		L_5 = Parser_get_PeekChar_m472C7F26ADA56DB3C9AA0F4D6F02E87480BDDD5C(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0003;
		}
	}

IL_0035:
	{
		return;
	}
}
// System.Char Google.MiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m472C7F26ADA56DB3C9AA0F4D6F02E87480BDDD5C (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_m22D0549E3F5013C6BA2E1E68B8807F20786889F1(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Il2CppChar L_3 = V_0;
		return L_3;
	}
}
// System.Char Google.MiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_mAA110522471FA2FCA9D5731BF4FA3B61565D487F (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_m22D0549E3F5013C6BA2E1E68B8807F20786889F1(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Il2CppChar L_3 = V_0;
		return L_3;
	}
}
// System.String Google.MiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m7E1370AB8E0DA6C161CCA5A215F7A9BA1C910376 (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		goto IL_002d;
	}

IL_0009:
	{
		StringBuilder_t* L_1 = V_0;
		Il2CppChar L_2;
		L_2 = Parser_get_NextChar_mAA110522471FA2FCA9D5731BF4FA3B61565D487F(__this, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, L_2, NULL);
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_4 = __this->___json_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_4);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)(-1)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_003f;
	}

IL_002c:
	{
	}

IL_002d:
	{
		Il2CppChar L_7;
		L_7 = Parser_get_PeekChar_m472C7F26ADA56DB3C9AA0F4D6F02E87480BDDD5C(__this, NULL);
		bool L_8;
		L_8 = Parser_IsWordBreak_m7E50E62A8ED6EF012E660DD03650296F96E3692C(L_7, NULL);
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0009;
		}
	}

IL_003f:
	{
		StringBuilder_t* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		V_3 = L_11;
		goto IL_0048;
	}

IL_0048:
	{
		String_t* L_12 = V_3;
		return L_12;
	}
}
// Google.MiniJSON.Json/Parser/TOKEN Google.MiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m1929B96398C765C1294FEDD658C9DF0B4C95E6CB (Parser_t210EE2AD527340A4E80AF8C5F48F62D2CD48DA8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	Il2CppChar V_3 = 0x0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		Parser_EatWhitespace_m88624DEDFEBFA22325EC4A691FCCF5C657797A91(__this, NULL);
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		V_1 = 0;
		goto IL_014d;
	}

IL_0022:
	{
		Il2CppChar L_3;
		L_3 = Parser_get_PeekChar_m472C7F26ADA56DB3C9AA0F4D6F02E87480BDDD5C(__this, NULL);
		V_3 = L_3;
		Il2CppChar L_4 = V_3;
		V_2 = L_4;
		Il2CppChar L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_00a6;
		}
	}
	{
		Il2CppChar L_6 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)34))))
		{
			case 0:
			{
				goto IL_00f6;
			}
			case 1:
			{
				goto IL_0102;
			}
			case 2:
			{
				goto IL_0102;
			}
			case 3:
			{
				goto IL_0102;
			}
			case 4:
			{
				goto IL_0102;
			}
			case 5:
			{
				goto IL_0102;
			}
			case 6:
			{
				goto IL_0102;
			}
			case 7:
			{
				goto IL_0102;
			}
			case 8:
			{
				goto IL_0102;
			}
			case 9:
			{
				goto IL_0102;
			}
			case 10:
			{
				goto IL_00e6;
			}
			case 11:
			{
				goto IL_00fe;
			}
			case 12:
			{
				goto IL_0102;
			}
			case 13:
			{
				goto IL_0102;
			}
			case 14:
			{
				goto IL_00fe;
			}
			case 15:
			{
				goto IL_00fe;
			}
			case 16:
			{
				goto IL_00fe;
			}
			case 17:
			{
				goto IL_00fe;
			}
			case 18:
			{
				goto IL_00fe;
			}
			case 19:
			{
				goto IL_00fe;
			}
			case 20:
			{
				goto IL_00fe;
			}
			case 21:
			{
				goto IL_00fe;
			}
			case 22:
			{
				goto IL_00fe;
			}
			case 23:
			{
				goto IL_00fe;
			}
			case 24:
			{
				goto IL_00fa;
			}
		}
	}
	{
		goto IL_009f;
	}

IL_009f:
	{
		Il2CppChar L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)91))))
		{
			goto IL_00d2;
		}
	}
	{
		goto IL_0102;
	}

IL_00a6:
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)93))))
		{
			goto IL_00d6;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)123))))
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00b4;
	}

IL_00b4:
	{
		Il2CppChar L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)125))))
		{
			goto IL_00c2;
		}
	}
	{
		goto IL_0102;
	}

IL_00bb:
	{
		V_1 = 1;
		goto IL_014d;
	}

IL_00c2:
	{
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_11 = __this->___json_2;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		V_1 = 2;
		goto IL_014d;
	}

IL_00d2:
	{
		V_1 = 3;
		goto IL_014d;
	}

IL_00d6:
	{
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_13 = __this->___json_2;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_13);
		V_1 = 4;
		goto IL_014d;
	}

IL_00e6:
	{
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_15 = __this->___json_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_15);
		V_1 = 6;
		goto IL_014d;
	}

IL_00f6:
	{
		V_1 = 7;
		goto IL_014d;
	}

IL_00fa:
	{
		V_1 = 5;
		goto IL_014d;
	}

IL_00fe:
	{
		V_1 = 8;
		goto IL_014d;
	}

IL_0102:
	{
		String_t* L_17;
		L_17 = Parser_get_NextWord_m7E1370AB8E0DA6C161CCA5A215F7A9BA1C910376(__this, NULL);
		V_5 = L_17;
		String_t* L_18 = V_5;
		V_4 = L_18;
		String_t* L_19 = V_4;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		if (L_20)
		{
			goto IL_013a;
		}
	}
	{
		String_t* L_21 = V_4;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (L_22)
		{
			goto IL_013f;
		}
	}
	{
		String_t* L_23 = V_4;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		if (L_24)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_0149;
	}

IL_013a:
	{
		V_1 = ((int32_t)10);
		goto IL_014d;
	}

IL_013f:
	{
		V_1 = ((int32_t)9);
		goto IL_014d;
	}

IL_0144:
	{
		V_1 = ((int32_t)11);
		goto IL_014d;
	}

IL_0149:
	{
		V_1 = 0;
		goto IL_014d;
	}

IL_014d:
	{
		int32_t L_25 = V_1;
		return L_25;
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
// System.Void Google.MiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m4238A1AF322275FEA3A2FF5FA7BFD60452770CDD (Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		__this->___builder_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___builder_0), (void*)L_0);
		return;
	}
}
// System.String Google.MiniJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m65597EFD73DB19BCE3A80DF92A6DBB59B2BF8039 (RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4* L_0 = (Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4*)il2cpp_codegen_object_new(Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Serializer__ctor_m4238A1AF322275FEA3A2FF5FA7BFD60452770CDD(L_0, NULL);
		V_0 = L_0;
		Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4* L_1 = V_0;
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_m98CDA290115CF811F9FF38A2B89F2849D0DB0F94(L_1, L_2, NULL);
		Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4* L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t* L_4 = L_3->___builder_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		V_1 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.Void Google.MiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m98CDA290115CF811F9FF38A2B89F2849D0DB0F94 (Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	StringBuilder_t* G_B7_0 = NULL;
	StringBuilder_t* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t* G_B8_1 = NULL;
	{
		RuntimeObject* L_0 = ___value0;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		StringBuilder_t* L_2 = __this->___builder_0;
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		goto IL_00de;
	}

IL_0021:
	{
		RuntimeObject* L_4 = ___value0;
		String_t* L_5 = ((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		V_2 = L_5;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_7 = V_2;
		Serializer_SerializeString_mD964E73E708CBDE27BFC85005F5B27EAC4E79768(__this, L_7, NULL);
		goto IL_00de;
	}

IL_0041:
	{
		RuntimeObject* L_8 = ___value0;
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_8, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0074;
		}
	}
	{
		StringBuilder_t* L_10 = __this->___builder_0;
		RuntimeObject* L_11 = ___value0;
		G_B6_0 = L_10;
		if (((*(bool*)((bool*)(bool*)UnBox(L_11, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_10;
			goto IL_0066;
		}
	}
	{
		G_B8_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B8_1 = G_B6_0;
		goto IL_006b;
	}

IL_0066:
	{
		G_B8_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B8_1 = G_B7_0;
	}

IL_006b:
	{
		NullCheck(G_B8_1);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B8_1, G_B8_0, NULL);
		goto IL_00de;
	}

IL_0074:
	{
		RuntimeObject* L_13 = ___value0;
		RuntimeObject* L_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		V_0 = L_14;
		V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0091;
		}
	}
	{
		RuntimeObject* L_16 = V_0;
		Serializer_SerializeArray_mF401DE78D13BAFDED4E15F20D0DA87A5C5576F1F(__this, L_16, NULL);
		goto IL_00de;
	}

IL_0091:
	{
		RuntimeObject* L_17 = ___value0;
		RuntimeObject* L_18 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
		V_1 = L_18;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_00ae;
		}
	}
	{
		RuntimeObject* L_20 = V_1;
		Serializer_SerializeObject_mA6367B0CC5538101A34545EFF8C3D3CA47186CD9(__this, L_20, NULL);
		goto IL_00de;
	}

IL_00ae:
	{
		RuntimeObject* L_21 = ___value0;
		V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_21, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_00d4;
		}
	}
	{
		RuntimeObject* L_23 = ___value0;
		String_t* L_24;
		L_24 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_23, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))), 1, NULL);
		Serializer_SerializeString_mD964E73E708CBDE27BFC85005F5B27EAC4E79768(__this, L_24, NULL);
		goto IL_00de;
	}

IL_00d4:
	{
		RuntimeObject* L_25 = ___value0;
		Serializer_SerializeOther_mA84A5D339E6C95FD627752D174132C4F297F7621(__this, L_25, NULL);
	}

IL_00de:
	{
		return;
	}
}
// System.Void Google.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_mA6367B0CC5538101A34545EFF8C3D3CA47186CD9 (Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	{
		V_0 = (bool)1;
		StringBuilder_t* L_0 = __this->___builder_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)123), NULL);
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0076:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_6 = V_4;
					if (!L_6)
					{
						goto IL_008a;
					}
				}
				{
					RuntimeObject* L_7 = V_4;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_008a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006c_1;
			}

IL_0020_1:
			{
				RuntimeObject* L_8 = V_1;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				V_2 = L_9;
				bool L_10 = V_0;
				V_3 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
				bool L_11 = V_3;
				if (!L_11)
				{
					goto IL_0040_1;
				}
			}
			{
				StringBuilder_t* L_12 = __this->___builder_0;
				NullCheck(L_12);
				StringBuilder_t* L_13;
				L_13 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_12, ((int32_t)44), NULL);
			}

IL_0040_1:
			{
				RuntimeObject* L_14 = V_2;
				NullCheck(L_14);
				String_t* L_15;
				L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
				Serializer_SerializeString_mD964E73E708CBDE27BFC85005F5B27EAC4E79768(__this, L_15, NULL);
				StringBuilder_t* L_16 = __this->___builder_0;
				NullCheck(L_16);
				StringBuilder_t* L_17;
				L_17 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_16, ((int32_t)58), NULL);
				RuntimeObject* L_18 = ___obj0;
				RuntimeObject* L_19 = V_2;
				NullCheck(L_18);
				RuntimeObject* L_20;
				L_20 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_18, L_19);
				Serializer_SerializeValue_m98CDA290115CF811F9FF38A2B89F2849D0DB0F94(__this, L_20, NULL);
				V_0 = (bool)0;
			}

IL_006c_1:
			{
				RuntimeObject* L_21 = V_1;
				NullCheck(L_21);
				bool L_22;
				L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_21);
				if (L_22)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_008b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008b:
	{
		StringBuilder_t* L_23 = __this->___builder_0;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_23, ((int32_t)125), NULL);
		return;
	}
}
// System.Void Google.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_mF401DE78D13BAFDED4E15F20D0DA87A5C5576F1F (Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4* __this, RuntimeObject* ___anArray0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		StringBuilder_t* L_0 = __this->___builder_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)91), NULL);
		V_0 = (bool)1;
		V_1 = 0;
		goto IL_0045;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___anArray0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_2, L_3);
		V_2 = L_4;
		bool L_5 = V_0;
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_7 = __this->___builder_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, ((int32_t)44), NULL);
	}

IL_0036:
	{
		RuntimeObject* L_9 = V_2;
		Serializer_SerializeValue_m98CDA290115CF811F9FF38A2B89F2849D0DB0F94(__this, L_9, NULL);
		V_0 = (bool)0;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0045:
	{
		int32_t L_11 = V_1;
		RuntimeObject* L_12 = ___anArray0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_12);
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_0015;
		}
	}
	{
		StringBuilder_t* L_15 = __this->___builder_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, ((int32_t)93), NULL);
		return;
	}
}
// System.Void Google.MiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_mD964E73E708CBDE27BFC85005F5B27EAC4E79768 (Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE727BF366E3CC855B808D806440542BF7152AF19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	Il2CppChar V_5 = 0x0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B17_0 = 0;
	{
		StringBuilder_t* L_0 = __this->___builder_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)34), NULL);
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3;
		L_3 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_2, NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0153;
	}

IL_001d:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Il2CppChar L_8 = V_2;
		V_5 = L_8;
		Il2CppChar L_9 = V_5;
		V_4 = L_9;
		Il2CppChar L_10 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, 8)))
		{
			case 0:
			{
				goto IL_008b;
			}
			case 1:
			{
				goto IL_00e0;
			}
			case 2:
			{
				goto IL_00b7;
			}
			case 3:
			{
				goto IL_00f3;
			}
			case 4:
			{
				goto IL_00a1;
			}
			case 5:
			{
				goto IL_00cd;
			}
		}
	}
	{
		goto IL_004c;
	}

IL_004c:
	{
		Il2CppChar L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)34))))
		{
			goto IL_005f;
		}
	}
	{
		goto IL_0054;
	}

IL_0054:
	{
		Il2CppChar L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)92))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_00f3;
	}

IL_005f:
	{
		StringBuilder_t* L_13 = __this->___builder_0;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
		goto IL_014e;
	}

IL_0075:
	{
		StringBuilder_t* L_15 = __this->___builder_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, NULL);
		goto IL_014e;
	}

IL_008b:
	{
		StringBuilder_t* L_17 = __this->___builder_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, NULL);
		goto IL_014e;
	}

IL_00a1:
	{
		StringBuilder_t* L_19 = __this->___builder_0;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, NULL);
		goto IL_014e;
	}

IL_00b7:
	{
		StringBuilder_t* L_21 = __this->___builder_0;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, NULL);
		goto IL_014e;
	}

IL_00cd:
	{
		StringBuilder_t* L_23 = __this->___builder_0;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, NULL);
		goto IL_014e;
	}

IL_00e0:
	{
		StringBuilder_t* L_25 = __this->___builder_0;
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, NULL);
		goto IL_014e;
	}

IL_00f3:
	{
		Il2CppChar L_27 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = Convert_ToInt32_m7B23BC2572EEB2B03EDAA26D2D9232C4A00DA00C(L_27, NULL);
		V_3 = L_28;
		int32_t L_29 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)32))))
		{
			goto IL_0109;
		}
	}
	{
		int32_t L_30 = V_3;
		G_B17_0 = ((((int32_t)((((int32_t)L_30) > ((int32_t)((int32_t)126)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_010a;
	}

IL_0109:
	{
		G_B17_0 = 0;
	}

IL_010a:
	{
		V_6 = (bool)G_B17_0;
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_0121;
		}
	}
	{
		StringBuilder_t* L_32 = __this->___builder_0;
		Il2CppChar L_33 = V_2;
		NullCheck(L_32);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_32, L_33, NULL);
		goto IL_014c;
	}

IL_0121:
	{
		StringBuilder_t* L_35 = __this->___builder_0;
		NullCheck(L_35);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_35, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, NULL);
		StringBuilder_t* L_37 = __this->___builder_0;
		String_t* L_38;
		L_38 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_3), _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19, NULL);
		NullCheck(L_37);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_37, L_38, NULL);
	}

IL_014c:
	{
		goto IL_014e;
	}

IL_014e:
	{
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0153:
	{
		int32_t L_41 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_42 = V_0;
		NullCheck(L_42);
		V_7 = (bool)((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))))? 1 : 0);
		bool L_43 = V_7;
		if (L_43)
		{
			goto IL_001d;
		}
	}
	{
		StringBuilder_t* L_44 = __this->___builder_0;
		NullCheck(L_44);
		StringBuilder_t* L_45;
		L_45 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_44, ((int32_t)34), NULL);
		return;
	}
}
// System.Void Google.MiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_mA84A5D339E6C95FD627752D174132C4F297F7621 (Serializer_t10F73A5DAB5B9F4861729F29359E374AA273F0B4* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	double V_4 = 0.0;
	int32_t G_B11_0 = 0;
	int32_t G_B16_0 = 0;
	{
		RuntimeObject* L_0 = ___value0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		StringBuilder_t* L_2 = __this->___builder_0;
		RuntimeObject* L_3 = ___value0;
		V_1 = ((*(float*)((float*)(float*)UnBox(L_3, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4;
		L_4 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_5;
		L_5 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE((&V_1), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_4, NULL);
		NullCheck(L_2);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, L_5, NULL);
		goto IL_00e2;
	}

IL_0039:
	{
		RuntimeObject* L_7 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_7, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject* L_8 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_8, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject* L_9 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_9, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject* L_10 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_10, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject* L_11 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_11, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject* L_12 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_12, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject* L_13 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_13, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject* L_14 = ___value0;
		G_B11_0 = ((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_14, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_007d;
	}

IL_007c:
	{
		G_B11_0 = 1;
	}

IL_007d:
	{
		V_2 = (bool)G_B11_0;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0092;
		}
	}
	{
		StringBuilder_t* L_16 = __this->___builder_0;
		RuntimeObject* L_17 = ___value0;
		NullCheck(L_16);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_16, L_17, NULL);
		goto IL_00e2;
	}

IL_0092:
	{
		RuntimeObject* L_19 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_19, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_00a5;
		}
	}
	{
		RuntimeObject* L_20 = ___value0;
		G_B16_0 = ((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_20, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_00a6;
	}

IL_00a5:
	{
		G_B16_0 = 1;
	}

IL_00a6:
	{
		V_3 = (bool)G_B16_0;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t* L_22 = __this->___builder_0;
		RuntimeObject* L_23 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_24;
		L_24 = Convert_ToDouble_mE64ED1A9412EA3B16E4C7F1C74655F53DE71C71A(L_23, NULL);
		V_4 = L_24;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_25;
		L_25 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_26;
		L_26 = Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789((&V_4), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_25, NULL);
		NullCheck(L_22);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, L_26, NULL);
		goto IL_00e2;
	}

IL_00d3:
	{
		RuntimeObject* L_28 = ___value0;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		Serializer_SerializeString_mD964E73E708CBDE27BFC85005F5B27EAC4E79768(__this, L_29, NULL);
	}

IL_00e2:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
