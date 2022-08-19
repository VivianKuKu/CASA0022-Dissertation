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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<Siccity.GLTFUtility.GLTFNode/ImportResult,System.Boolean>
struct Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Siccity.GLTFUtility.GLTFNode/ImportResult>
struct IEnumerable_1_t8D2903E0CAE84E6F504007334DC4855857ED96CA;
// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFSkin/ImportResult[]>
struct ImportTask_1_t62D88DAC1527A059044E9E6628FCF68F5F681D5A;
// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFTexture/ImportResult[]>
struct ImportTask_1_t30DA322D802B8EF74B0B0D8A05F6C0A7201AAC9F;
// Siccity.GLTFUtility.Importer/ImportTask`1<System.Object>
struct ImportTask_1_tE2A1536E93EFC15C8FF3A1223E62469FEB28F17F;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFAccessor>
struct List_1_tD37C75C45400E6571515AC742D2EDF26E88EA8AE;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFAnimation>
struct List_1_t05D0218ACF60C0A0C9E100B3A079E5F09553E96E;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFBuffer>
struct List_1_tE2CC091857065FF4B1DD35401B9B5CC433CD6631;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFBufferView>
struct List_1_tC94BF6DA0697F053D67D25C246BBE38587CC3472;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFCamera>
struct List_1_tA01B6AEF261C6B1DAFBC70DB3CC8D5A45C0E9731;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFImage>
struct List_1_t17B48DC0BB4477D739DB94D0868C09A513350948;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFMaterial>
struct List_1_tEE40D8B41232047ABB03F94B224A8D3BB296B937;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFMesh>
struct List_1_tB14C203FE24F672F9AD4615ED5E1F404A53D94E7;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode>
struct List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFScene>
struct List_1_tEF4EE52ADD5A83CB7F256AAD6A9C681DC09F17B5;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFSkin>
struct List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFTexture>
struct List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes>
struct List_1_tB8A9383E649C9D0D3B70C0CC942572AC143A59B8;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Siccity.GLTFUtility.GLTFSkin[]
struct GLTFSkinU5BU5D_t9E6CFCCF5303978FB1EBDA5CAE7AC816D148928F;
// Siccity.GLTFUtility.GLTFTexture[]
struct GLTFTextureU5BU5D_tDB6FDBD6CE7DD36E15DF99AE93684C77DFF069A9;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Siccity.GLTFUtility.GLTFAccessor/ImportResult[]
struct ImportResultU5BU5D_tBDEE2E40DA4DDE74176372343BB6ADBCC8472740;
// Siccity.GLTFUtility.GLTFImage/ImportResult[]
struct ImportResultU5BU5D_t8845DB7E6A0A94D26AEC54E9555717BE98E96936;
// Siccity.GLTFUtility.GLTFNode/ImportResult[]
struct ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F;
// Siccity.GLTFUtility.GLTFSkin/ImportResult[]
struct ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376;
// Siccity.GLTFUtility.GLTFTexture/ImportResult[]
struct ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71;
// Siccity.GLTFUtility.Importer/ImportTask[]
struct ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Siccity.GLTFUtility.Converters.ColorRGBAConverter
struct ColorRGBAConverter_t13916AE168ECF63ED546C51484F0BF6C986222BA;
// Siccity.GLTFUtility.Converters.ColorRGBConverter
struct ColorRGBConverter_t12CFC6714395FB17E3AF0A02FA2ACF8B80A2903A;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Siccity.GLTFUtility.Converters.EnumConverter
struct EnumConverter_t07152464D1E37E40B5D683262589B0E34AF1F721;
// Siccity.GLTFUtility.GLTFAsset
struct GLTFAsset_t82464388B7ED19F74A472502C3C9F861B88B060E;
// Siccity.GLTFUtility.GLTFNode
struct GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7;
// Siccity.GLTFUtility.GLTFObject
struct GLTFObject_tD045246E5AE1423C30A539F5767E3EED90CC5CC6;
// Siccity.GLTFUtility.GLTFPrimitive
struct GLTFPrimitive_t069231A8A45C9B80929CBB28CB4856E8D6142BD2;
// Siccity.GLTFUtility.GLTFProperty
struct GLTFProperty_t4A06B9F82E2FF4D8B9BE7A3A12D462C033E4DE61;
// Siccity.GLTFUtility.GLTFScene
struct GLTFScene_t1FDD03998A94D5A9BAC18B7AF3CBB2D3F8B0DC32;
// Siccity.GLTFUtility.GLTFSkin
struct GLTFSkin_t728B7393C539099BF34FE802FD8469A9A671BD14;
// Siccity.GLTFUtility.GLTFTexture
struct GLTFTexture_t29C52B25361578976ABF5BE441C06C71DF4F7D0C;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t7EC502F5FCA86DD95579A92A1E0116BE32D6340B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t29B0AEAFB8A7BF2EE446320DE590343B21EA69A3;
// Newtonsoft.Json.Serialization.ISerializationBinder
struct ISerializationBinder_t3C8B850335FB40001C9201981439AE77B430031F;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t44C99CB7D5AB59A077F569914E56DAD66B5A41EF;
// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89;
// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3;
// Siccity.GLTFUtility.Converters.Matrix4x4Converter
struct Matrix4x4Converter_tC8B24EF82158130786E7CAB75791535E3A8278AB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Siccity.GLTFUtility.Converters.QuaternionConverter
struct QuaternionConverter_t4A1D80DA6E25156318BB13E2727BB79EA1DA15B2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Siccity.GLTFUtility.Converters.TranslationConverter
struct TranslationConverter_t644636C700DB3129D6F337D22E15142506BFB385;
// System.Type
struct Type_t;
// Siccity.GLTFUtility.Converters.Vector2Converter
struct Vector2Converter_t1CDEF38521F312B7D847680142BCEF0B2FEA8033;
// Siccity.GLTFUtility.Converters.Vector3Converter
struct Vector3Converter_t6DB9162A4C801C111F24922629EB6BE05B30A9F7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Siccity.GLTFUtility.GLTFAccessor/ImportResult
struct ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B;
// Siccity.GLTFUtility.GLTFAccessor/ImportTask
struct ImportTask_t5B88C44DA89E18E8E38693499D4CC74FB5036009;
// Siccity.GLTFUtility.GLTFBufferView/ImportResult
struct ImportResult_t8AC262A26FF5228B3C063F6D8C6E40E99D9BAD14;
// Siccity.GLTFUtility.GLTFImage/ImportResult
struct ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC;
// Siccity.GLTFUtility.GLTFImage/ImportTask
struct ImportTask_t26EDC4BA749D5280EB5F716C2788DBA03A283B6E;
// Siccity.GLTFUtility.GLTFNode/ExportResult
struct ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B;
// Siccity.GLTFUtility.GLTFNode/ImportResult
struct ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9;
// Siccity.GLTFUtility.GLTFNodeExtensions/<>c
struct U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2;
// Siccity.GLTFUtility.GLTFPrimitive/DracoMeshCompression
struct DracoMeshCompression_tB2856EB179EC57EFF5CCCA0BB66BEDD45A9A7481;
// Siccity.GLTFUtility.GLTFPrimitive/Extensions
struct Extensions_t17718EB8D761E80A08E7AF862306332EAC0DB7A2;
// Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes
struct GLTFAttributes_t66CF595AC34CC93319F6989385E7B56AADD234AE;
// Siccity.GLTFUtility.GLTFSkin/ImportResult
struct ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED;
// Siccity.GLTFUtility.GLTFSkin/ImportTask
struct ImportTask_tD875E2C5E437DE43153897A37F61B9A05FD707FF;
// Siccity.GLTFUtility.GLTFTexture/ImportResult
struct ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4;
// Siccity.GLTFUtility.GLTFTexture/ImportTask
struct ImportTask_tEDBFBE9A9168C0670758D83A9D9A458325BE4A6F;
// Siccity.GLTFUtility.Importer/ImportTask
struct ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Siccity.GLTFUtility.GLTFAccessor/ImportResult/Sparse
struct Sparse_t92C9B0797D7948FD10712EDDBD41A1354CC4AA44;
// Siccity.GLTFUtility.GLTFSkin/ImportTask/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F;
// Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3
struct U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E;
// Siccity.GLTFUtility.GLTFTexture/ImportTask/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5352D01FE6068C601049E8637D4D269DA0DD1DC2;
IL2CPP_EXTERN_C String_t* _stringLiteral97F5F2E635A943D0F2EDA0050FC7B3BFD6AF56D1;
IL2CPP_EXTERN_C String_t* _stringLiteralD5B8C96BBCEB1E1F0FA13642A12DBECB0E90B670;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_mFB0DE8108685720A511211354300D457D9DA23B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_m7777F1773A6628853EA58EE9829DA1FF3D5550F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImportResult_U3CGetTextureCachedU3Eb__3_0_m8DB954266435E371712DEA72A274173F69924D95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImportTask_1__ctor_m9C8DA9D02CDEA4C64D819A0A3DFB0CDAD57F43D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImportTask_1__ctor_mE9303653A2C08108B4AB6F83964FFA3C186FB513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Deserialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD12C59EF3E0BDE9D3FFF50F818311CA6BC0A44CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1D3DAB49AF92CF6CA0DB34F50F4DD8ED3C39EA89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB734E6403F8372413DC432B2AC5CE1DDA22F8F4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m738697033608819BCDA5AC96D035F31810A9D5FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF65B33CB5F3500BF1E03DCDC515B99445E5A160F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetTextureCachedU3Ed__3_System_Collections_IEnumerator_Reset_mF034E52F90A4C89E95F4F1E00F8E2C7A06B1AC65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetRootU3Eb__0_0_mB6164317DB954F6DFFDA38FAF8A130C1FB834A5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_m2284EFDB40F9A8C37F20AD02C98BAF6A9BD27300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_mDD8AD408CB38895F98EC32818A85AA771F489923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct ImportResultU5BU5D_tBDEE2E40DA4DDE74176372343BB6ADBCC8472740;
struct ImportResultU5BU5D_t8845DB7E6A0A94D26AEC54E9555717BE98E96936;
struct ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F;
struct ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376;
struct ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71;
struct ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFSkin>
struct List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GLTFSkinU5BU5D_t9E6CFCCF5303978FB1EBDA5CAE7AC816D148928F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GLTFSkinU5BU5D_t9E6CFCCF5303978FB1EBDA5CAE7AC816D148928F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFTexture>
struct List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GLTFTextureU5BU5D_tDB6FDBD6CE7DD36E15DF99AE93684C77DFF069A9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GLTFTextureU5BU5D_tDB6FDBD6CE7DD36E15DF99AE93684C77DFF069A9* ___s_emptyArray_5;
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

// Siccity.GLTFUtility.GLTFNodeExtensions
struct GLTFNodeExtensions_tE8FB9A56C1D1E1EEF8D77B5214B8E67C7135727A  : public RuntimeObject
{
};

// Siccity.GLTFUtility.GLTFProperty
struct GLTFProperty_t4A06B9F82E2FF4D8B9BE7A3A12D462C033E4DE61  : public RuntimeObject
{
	// System.Object Siccity.GLTFUtility.GLTFProperty::extensions
	RuntimeObject* ___extensions_0;
	// System.Object Siccity.GLTFUtility.GLTFProperty::extras
	RuntimeObject* ___extras_1;
};

// Siccity.GLTFUtility.GLTFScene
struct GLTFScene_t1FDD03998A94D5A9BAC18B7AF3CBB2D3F8B0DC32  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Int32> Siccity.GLTFUtility.GLTFScene::nodes
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___nodes_0;
	// System.String Siccity.GLTFUtility.GLTFScene::name
	String_t* ___name_1;
};

// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// Siccity.GLTFUtility.GLTFImage/ImportResult
struct ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC  : public RuntimeObject
{
	// System.Byte[] Siccity.GLTFUtility.GLTFImage/ImportResult::bytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes_0;
	// System.String Siccity.GLTFUtility.GLTFImage/ImportResult::path
	String_t* ___path_1;
};

// Siccity.GLTFUtility.GLTFNodeExtensions/<>c
struct U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2  : public RuntimeObject
{
};

struct U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_StaticFields
{
	// Siccity.GLTFUtility.GLTFNodeExtensions/<>c Siccity.GLTFUtility.GLTFNodeExtensions/<>c::<>9
	U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2* ___U3CU3E9_0;
	// System.Func`2<Siccity.GLTFUtility.GLTFNode/ImportResult,System.Boolean> Siccity.GLTFUtility.GLTFNodeExtensions/<>c::<>9__0_0
	Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3* ___U3CU3E9__0_0_1;
};

// Siccity.GLTFUtility.GLTFPrimitive/DracoMeshCompression
struct DracoMeshCompression_tB2856EB179EC57EFF5CCCA0BB66BEDD45A9A7481  : public RuntimeObject
{
	// System.Int32 Siccity.GLTFUtility.GLTFPrimitive/DracoMeshCompression::bufferView
	int32_t ___bufferView_0;
	// Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes Siccity.GLTFUtility.GLTFPrimitive/DracoMeshCompression::attributes
	GLTFAttributes_t66CF595AC34CC93319F6989385E7B56AADD234AE* ___attributes_1;
};

// Siccity.GLTFUtility.GLTFPrimitive/Extensions
struct Extensions_t17718EB8D761E80A08E7AF862306332EAC0DB7A2  : public RuntimeObject
{
	// Siccity.GLTFUtility.GLTFPrimitive/DracoMeshCompression Siccity.GLTFUtility.GLTFPrimitive/Extensions::KHR_draco_mesh_compression
	DracoMeshCompression_tB2856EB179EC57EFF5CCCA0BB66BEDD45A9A7481* ___KHR_draco_mesh_compression_0;
};

// Siccity.GLTFUtility.GLTFSkin/ImportResult
struct ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED  : public RuntimeObject
{
	// UnityEngine.Matrix4x4[] Siccity.GLTFUtility.GLTFSkin/ImportResult::inverseBindMatrices
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___inverseBindMatrices_0;
	// System.Int32[] Siccity.GLTFUtility.GLTFSkin/ImportResult::joints
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___joints_1;
};

// Siccity.GLTFUtility.GLTFTexture/ImportResult
struct ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4  : public RuntimeObject
{
	// Siccity.GLTFUtility.GLTFImage/ImportResult Siccity.GLTFUtility.GLTFTexture/ImportResult::image
	ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* ___image_0;
	// UnityEngine.Texture2D Siccity.GLTFUtility.GLTFTexture/ImportResult::cache
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___cache_1;
};

// Siccity.GLTFUtility.Importer/ImportTask
struct ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE  : public RuntimeObject
{
	// System.Threading.Tasks.Task Siccity.GLTFUtility.Importer/ImportTask::task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task_0;
	// Siccity.GLTFUtility.Importer/ImportTask[] Siccity.GLTFUtility.Importer/ImportTask::waitFor
	ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF* ___waitFor_1;
	// System.Boolean Siccity.GLTFUtility.Importer/ImportTask::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;
};

// Siccity.GLTFUtility.GLTFSkin/ImportTask/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFSkin> Siccity.GLTFUtility.GLTFSkin/ImportTask/<>c__DisplayClass0_0::skins
	List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F* ___skins_0;
	// Siccity.GLTFUtility.GLTFSkin/ImportTask Siccity.GLTFUtility.GLTFSkin/ImportTask/<>c__DisplayClass0_0::<>4__this
	ImportTask_tD875E2C5E437DE43153897A37F61B9A05FD707FF* ___U3CU3E4__this_1;
	// Siccity.GLTFUtility.GLTFAccessor/ImportTask Siccity.GLTFUtility.GLTFSkin/ImportTask/<>c__DisplayClass0_0::accessorTask
	ImportTask_t5B88C44DA89E18E8E38693499D4CC74FB5036009* ___accessorTask_2;
};

// Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3
struct U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E  : public RuntimeObject
{
	// System.Int32 Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Siccity.GLTFUtility.GLTFTexture/ImportResult Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::<>4__this
	ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* ___U3CU3E4__this_2;
	// System.Boolean Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::linear
	bool ___linear_3;
	// System.Action`1<System.Single> Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::onProgress
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onProgress_4;
	// System.Action`1<UnityEngine.Texture2D> Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::onFinish
	Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33* ___onFinish_5;
	// System.Collections.IEnumerator Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::<en>5__2
	RuntimeObject* ___U3CenU3E5__2_6;
};

// Siccity.GLTFUtility.GLTFTexture/ImportTask/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFTexture> Siccity.GLTFUtility.GLTFTexture/ImportTask/<>c__DisplayClass0_0::textures
	List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943* ___textures_0;
	// Siccity.GLTFUtility.GLTFTexture/ImportTask Siccity.GLTFUtility.GLTFTexture/ImportTask/<>c__DisplayClass0_0::<>4__this
	ImportTask_tEDBFBE9A9168C0670758D83A9D9A458325BE4A6F* ___U3CU3E4__this_1;
	// Siccity.GLTFUtility.GLTFImage/ImportTask Siccity.GLTFUtility.GLTFTexture/ImportTask/<>c__DisplayClass0_0::imageTask
	ImportTask_t26EDC4BA749D5280EB5F716C2788DBA03A283B6E* ___imageTask_2;
};

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFAccessor/ImportResult[]>
struct ImportTask_1_t77F40D823FFBF94BCF639D754F174066A208EF58  : public ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE
{
	// TReturn Siccity.GLTFUtility.Importer/ImportTask`1::Result
	ImportResultU5BU5D_tBDEE2E40DA4DDE74176372343BB6ADBCC8472740* ___Result_3;
};

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFImage/ImportResult[]>
struct ImportTask_1_t36F54BCE5C6C762D504AF8682AD87D50E6B082F5  : public ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE
{
	// TReturn Siccity.GLTFUtility.Importer/ImportTask`1::Result
	ImportResultU5BU5D_t8845DB7E6A0A94D26AEC54E9555717BE98E96936* ___Result_3;
};

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFSkin/ImportResult[]>
struct ImportTask_1_t62D88DAC1527A059044E9E6628FCF68F5F681D5A  : public ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE
{
	// TReturn Siccity.GLTFUtility.Importer/ImportTask`1::Result
	ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376* ___Result_3;
};

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFTexture/ImportResult[]>
struct ImportTask_1_t30DA322D802B8EF74B0B0D8A05F6C0A7201AAC9F  : public ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE
{
	// TReturn Siccity.GLTFUtility.Importer/ImportTask`1::Result
	ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71* ___Result_3;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.Formatting>
struct Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
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

// Siccity.GLTFUtility.Converters.ColorRGBAConverter
struct ColorRGBAConverter_t13916AE168ECF63ED546C51484F0BF6C986222BA  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// Siccity.GLTFUtility.Converters.ColorRGBConverter
struct ColorRGBConverter_t12CFC6714395FB17E3AF0A02FA2ACF8B80A2903A  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// Siccity.GLTFUtility.Converters.EnumConverter
struct EnumConverter_t07152464D1E37E40B5D683262589B0E34AF1F721  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
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

// Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E 
{
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;
};

struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_StaticFields
{
	// System.Char[] Newtonsoft.Json.JsonPosition::SpecialCharacters
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___SpecialCharacters_0;
};
// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
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

// Siccity.GLTFUtility.Converters.Matrix4x4Converter
struct Matrix4x4Converter_tC8B24EF82158130786E7CAB75791535E3A8278AB  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
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

// Siccity.GLTFUtility.Converters.QuaternionConverter
struct QuaternionConverter_t4A1D80DA6E25156318BB13E2727BB79EA1DA15B2  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// Siccity.GLTFUtility.Converters.TranslationConverter
struct TranslationConverter_t644636C700DB3129D6F337D22E15142506BFB385  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
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

// Siccity.GLTFUtility.Converters.Vector2Converter
struct Vector2Converter_t1CDEF38521F312B7D847680142BCEF0B2FEA8033  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
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

// Siccity.GLTFUtility.Converters.Vector3Converter
struct Vector3Converter_t6DB9162A4C801C111F24922629EB6BE05B30A9F7  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
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

// Siccity.GLTFUtility.GLTFNode
struct GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7  : public RuntimeObject
{
	// System.String Siccity.GLTFUtility.GLTFNode::name
	String_t* ___name_0;
	// System.Int32[] Siccity.GLTFUtility.GLTFNode::children
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___children_1;
	// UnityEngine.Matrix4x4 Siccity.GLTFUtility.GLTFNode::matrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix_2;
	// UnityEngine.Vector3 Siccity.GLTFUtility.GLTFNode::translation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation_3;
	// UnityEngine.Quaternion Siccity.GLTFUtility.GLTFNode::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_4;
	// UnityEngine.Vector3 Siccity.GLTFUtility.GLTFNode::scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_5;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFNode::mesh
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___mesh_6;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFNode::skin
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___skin_7;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFNode::camera
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___camera_8;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFNode::weights
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___weights_9;
};

// Siccity.GLTFUtility.GLTFObject
struct GLTFObject_tD045246E5AE1423C30A539F5767E3EED90CC5CC6  : public RuntimeObject
{
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFObject::scene
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___scene_0;
	// Siccity.GLTFUtility.GLTFAsset Siccity.GLTFUtility.GLTFObject::asset
	GLTFAsset_t82464388B7ED19F74A472502C3C9F861B88B060E* ___asset_1;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFScene> Siccity.GLTFUtility.GLTFObject::scenes
	List_1_tEF4EE52ADD5A83CB7F256AAD6A9C681DC09F17B5* ___scenes_2;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode> Siccity.GLTFUtility.GLTFObject::nodes
	List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB* ___nodes_3;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFMesh> Siccity.GLTFUtility.GLTFObject::meshes
	List_1_tB14C203FE24F672F9AD4615ED5E1F404A53D94E7* ___meshes_4;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFAnimation> Siccity.GLTFUtility.GLTFObject::animations
	List_1_t05D0218ACF60C0A0C9E100B3A079E5F09553E96E* ___animations_5;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFBuffer> Siccity.GLTFUtility.GLTFObject::buffers
	List_1_tE2CC091857065FF4B1DD35401B9B5CC433CD6631* ___buffers_6;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFBufferView> Siccity.GLTFUtility.GLTFObject::bufferViews
	List_1_tC94BF6DA0697F053D67D25C246BBE38587CC3472* ___bufferViews_7;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFAccessor> Siccity.GLTFUtility.GLTFObject::accessors
	List_1_tD37C75C45400E6571515AC742D2EDF26E88EA8AE* ___accessors_8;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFSkin> Siccity.GLTFUtility.GLTFObject::skins
	List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F* ___skins_9;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFTexture> Siccity.GLTFUtility.GLTFObject::textures
	List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943* ___textures_10;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFImage> Siccity.GLTFUtility.GLTFObject::images
	List_1_t17B48DC0BB4477D739DB94D0868C09A513350948* ___images_11;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFMaterial> Siccity.GLTFUtility.GLTFObject::materials
	List_1_tEE40D8B41232047ABB03F94B224A8D3BB296B937* ___materials_12;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFCamera> Siccity.GLTFUtility.GLTFObject::cameras
	List_1_tA01B6AEF261C6B1DAFBC70DB3CC8D5A45C0E9731* ___cameras_13;
	// System.Collections.Generic.List`1<System.String> Siccity.GLTFUtility.GLTFObject::extensionsUsed
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___extensionsUsed_14;
	// System.Collections.Generic.List`1<System.String> Siccity.GLTFUtility.GLTFObject::extensionsRequired
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___extensionsRequired_15;
	// Newtonsoft.Json.Linq.JObject Siccity.GLTFUtility.GLTFObject::extras
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___extras_16;
};

// Siccity.GLTFUtility.GLTFPrimitive
struct GLTFPrimitive_t069231A8A45C9B80929CBB28CB4856E8D6142BD2  : public RuntimeObject
{
	// Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes Siccity.GLTFUtility.GLTFPrimitive::attributes
	GLTFAttributes_t66CF595AC34CC93319F6989385E7B56AADD234AE* ___attributes_0;
	// Siccity.GLTFUtility.RenderingMode Siccity.GLTFUtility.GLTFPrimitive::mode
	int32_t ___mode_1;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive::indices
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___indices_2;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive::material
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___material_3;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes> Siccity.GLTFUtility.GLTFPrimitive::targets
	List_1_tB8A9383E649C9D0D3B70C0CC942572AC143A59B8* ___targets_4;
	// Siccity.GLTFUtility.GLTFPrimitive/Extensions Siccity.GLTFUtility.GLTFPrimitive::extensions
	Extensions_t17718EB8D761E80A08E7AF862306332EAC0DB7A2* ___extensions_5;
};

// Siccity.GLTFUtility.GLTFSkin
struct GLTFSkin_t728B7393C539099BF34FE802FD8469A9A671BD14  : public RuntimeObject
{
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFSkin::inverseBindMatrices
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___inverseBindMatrices_0;
	// System.Int32[] Siccity.GLTFUtility.GLTFSkin::joints
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___joints_1;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFSkin::skeleton
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___skeleton_2;
	// System.String Siccity.GLTFUtility.GLTFSkin::name
	String_t* ___name_3;
};

// Siccity.GLTFUtility.GLTFTexture
struct GLTFTexture_t29C52B25361578976ABF5BE441C06C71DF4F7D0C  : public RuntimeObject
{
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFTexture::sampler
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___sampler_0;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFTexture::source
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___source_1;
	// System.String Siccity.GLTFUtility.GLTFTexture::name
	String_t* ___name_2;
};

// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765  : public RuntimeObject
{
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject* ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;
};

// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59  : public RuntimeObject
{
	// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializer::_typeNameHandling
	int32_t ____typeNameHandling_0;
	// Newtonsoft.Json.TypeNameAssemblyFormatHandling Newtonsoft.Json.JsonSerializer::_typeNameAssemblyFormatHandling
	int32_t ____typeNameAssemblyFormatHandling_1;
	// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializer::_preserveReferencesHandling
	int32_t ____preserveReferencesHandling_2;
	// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializer::_referenceLoopHandling
	int32_t ____referenceLoopHandling_3;
	// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializer::_missingMemberHandling
	int32_t ____missingMemberHandling_4;
	// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializer::_objectCreationHandling
	int32_t ____objectCreationHandling_5;
	// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializer::_nullValueHandling
	int32_t ____nullValueHandling_6;
	// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializer::_defaultValueHandling
	int32_t ____defaultValueHandling_7;
	// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializer::_constructorHandling
	int32_t ____constructorHandling_8;
	// Newtonsoft.Json.MetadataPropertyHandling Newtonsoft.Json.JsonSerializer::_metadataPropertyHandling
	int32_t ____metadataPropertyHandling_9;
	// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::_converters
	JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89* ____converters_10;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::_contractResolver
	RuntimeObject* ____contractResolver_11;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializer::_traceWriter
	RuntimeObject* ____traceWriter_12;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializer::_equalityComparer
	RuntimeObject* ____equalityComparer_13;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializer::_serializationBinder
	RuntimeObject* ____serializationBinder_14;
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializer::_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ____context_15;
	// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializer::_referenceResolver
	RuntimeObject* ____referenceResolver_16;
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializer::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_17;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializer::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_18;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializer::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_19;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializer::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_20;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializer::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_21;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializer::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_22;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializer::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_23;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializer::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_24;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializer::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_25;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_maxDepthSet
	bool ____maxDepthSet_26;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializer::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_27;
	// System.String Newtonsoft.Json.JsonSerializer::_dateFormatString
	String_t* ____dateFormatString_28;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_dateFormatStringSet
	bool ____dateFormatStringSet_29;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializer::Error
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___Error_30;
};

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.JsonWriter::<AutoCompleteOnClose>k__BackingField
	bool ___U3CAutoCompleteOnCloseU3Ek__BackingField_7;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_8;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_9;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_10;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_11;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_12;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_13;
};

struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_StaticFields
{
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArrayTemplate
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArrayTemplate_1;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Siccity.GLTFUtility.GLTFAccessor/ImportResult
struct ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B  : public RuntimeObject
{
	// Siccity.GLTFUtility.GLTFBufferView/ImportResult Siccity.GLTFUtility.GLTFAccessor/ImportResult::bufferView
	ImportResult_t8AC262A26FF5228B3C063F6D8C6E40E99D9BAD14* ___bufferView_5;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFAccessor/ImportResult::byteStride
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___byteStride_6;
	// System.Int32 Siccity.GLTFUtility.GLTFAccessor/ImportResult::count
	int32_t ___count_7;
	// Siccity.GLTFUtility.GLType Siccity.GLTFUtility.GLTFAccessor/ImportResult::componentType
	int32_t ___componentType_8;
	// Siccity.GLTFUtility.AccessorType Siccity.GLTFUtility.GLTFAccessor/ImportResult::type
	int32_t ___type_9;
	// System.Int32 Siccity.GLTFUtility.GLTFAccessor/ImportResult::byteOffset
	int32_t ___byteOffset_10;
	// Siccity.GLTFUtility.GLTFAccessor/ImportResult/Sparse Siccity.GLTFUtility.GLTFAccessor/ImportResult::sparse
	Sparse_t92C9B0797D7948FD10712EDDBD41A1354CC4AA44* ___sparse_11;
};

// Siccity.GLTFUtility.GLTFAccessor/ImportTask
struct ImportTask_t5B88C44DA89E18E8E38693499D4CC74FB5036009  : public ImportTask_1_t77F40D823FFBF94BCF639D754F174066A208EF58
{
};

// Siccity.GLTFUtility.GLTFImage/ImportTask
struct ImportTask_t26EDC4BA749D5280EB5F716C2788DBA03A283B6E  : public ImportTask_1_t36F54BCE5C6C762D504AF8682AD87D50E6B082F5
{
};

// Siccity.GLTFUtility.GLTFNode/ImportResult
struct ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9  : public RuntimeObject
{
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFNode/ImportResult::parent
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___parent_0;
	// System.Int32[] Siccity.GLTFUtility.GLTFNode/ImportResult::children
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___children_1;
	// UnityEngine.Transform Siccity.GLTFUtility.GLTFNode/ImportResult::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_2;
};

// Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes
struct GLTFAttributes_t66CF595AC34CC93319F6989385E7B56AADD234AE  : public RuntimeObject
{
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::POSITION
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___POSITION_0;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::NORMAL
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___NORMAL_1;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::TANGENT
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___TANGENT_2;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::COLOR_0
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___COLOR_0_3;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::TEXCOORD_0
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___TEXCOORD_0_4;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::TEXCOORD_1
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___TEXCOORD_1_5;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::TEXCOORD_2
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___TEXCOORD_2_6;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::TEXCOORD_3
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___TEXCOORD_3_7;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::TEXCOORD_4
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___TEXCOORD_4_8;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::TEXCOORD_5
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___TEXCOORD_5_9;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::TEXCOORD_6
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___TEXCOORD_6_10;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::TEXCOORD_7
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___TEXCOORD_7_11;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::JOINTS_0
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___JOINTS_0_12;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::JOINTS_1
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___JOINTS_1_13;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::JOINTS_2
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___JOINTS_2_14;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::JOINTS_3
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___JOINTS_3_15;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::WEIGHTS_0
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___WEIGHTS_0_16;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::WEIGHTS_1
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___WEIGHTS_1_17;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::WEIGHTS_2
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___WEIGHTS_2_18;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::WEIGHTS_3
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___WEIGHTS_3_19;
};

// Siccity.GLTFUtility.GLTFSkin/ImportTask
struct ImportTask_tD875E2C5E437DE43153897A37F61B9A05FD707FF  : public ImportTask_1_t62D88DAC1527A059044E9E6628FCF68F5F681D5A
{
};

// Siccity.GLTFUtility.GLTFTexture/ImportTask
struct ImportTask_tEDBFBE9A9168C0670758D83A9D9A458325BE4A6F  : public ImportTask_1_t30DA322D802B8EF74B0B0D8A05F6C0A7201AAC9F
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// Siccity.GLTFUtility.GLTFNode/ExportResult
struct ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B  : public GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7
{
	// UnityEngine.MeshRenderer Siccity.GLTFUtility.GLTFNode/ExportResult::renderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___renderer_10;
	// UnityEngine.MeshFilter Siccity.GLTFUtility.GLTFNode/ExportResult::filter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___filter_11;
	// UnityEngine.SkinnedMeshRenderer Siccity.GLTFUtility.GLTFNode/ExportResult::skinnedRenderer
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___skinnedRenderer_12;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Texture2D>
struct Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33  : public MulticastDelegate_t
{
};

// System.Func`2<Siccity.GLTFUtility.GLTFNode/ImportResult,System.Boolean>
struct Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
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

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Siccity.GLTFUtility.GLTFNode/ImportResult[]
struct ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F  : public RuntimeArray
{
	ALIGN_FIELD (8) ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* m_Items[1];

	inline ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Siccity.GLTFUtility.GLTFAccessor/ImportResult[]
struct ImportResultU5BU5D_tBDEE2E40DA4DDE74176372343BB6ADBCC8472740  : public RuntimeArray
{
	ALIGN_FIELD (8) ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B* m_Items[1];

	inline ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
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
// Siccity.GLTFUtility.Importer/ImportTask[]
struct ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF  : public RuntimeArray
{
	ALIGN_FIELD (8) ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE* m_Items[1];

	inline ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Siccity.GLTFUtility.GLTFSkin/ImportResult[]
struct ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376  : public RuntimeArray
{
	ALIGN_FIELD (8) ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* m_Items[1];

	inline ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Siccity.GLTFUtility.GLTFImage/ImportResult[]
struct ImportResultU5BU5D_t8845DB7E6A0A94D26AEC54E9555717BE98E96936  : public RuntimeArray
{
	ALIGN_FIELD (8) ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* m_Items[1];

	inline ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Siccity.GLTFUtility.GLTFTexture/ImportResult[]
struct ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71  : public RuntimeArray
{
	ALIGN_FIELD (8) ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* m_Items[1];

	inline ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.Importer/ImportTask`1<System.Object>::.ctor(Siccity.GLTFUtility.Importer/ImportTask[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportTask_1__ctor_m5AE60557C9C692A1C9E8D0F38B2A34F0130E6128_gshared (ImportTask_1_tE2A1536E93EFC15C8FF3A1223E62469FEB28F17F* __this, ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF* ___waitFor0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonSerializer::Deserialize<System.Object>(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonSerializer_Deserialize_TisRuntimeObject_m887812E4D7F06E92950AB4CA73CA8F31EDB09BFC_gshared (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonSerializer::Deserialize<System.Single>(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JsonSerializer_Deserialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD12C59EF3E0BDE9D3FFF50F818311CA6BC0A44CE_gshared (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method) ;

// System.Void Siccity.GLTFUtility.GLTFNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFNode__ctor_m96D7DBCDDE679F5C900497099EEDEF682DC06034 (GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Siccity.GLTFUtility.GLTFNode/ImportResult,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m828445C78865E1ACC9C636FD283DF6459459254D (Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<Siccity.GLTFUtility.GLTFNode/ImportResult>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_m7777F1773A6628853EA58EE9829DA1FF3D5550F7 (RuntimeObject* ___source0, Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared)(___source0, ___predicate1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<Siccity.GLTFUtility.GLTFNode/ImportResult>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* Enumerable_ToArray_TisImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_mFB0DE8108685720A511211354300D457D9DA23B5 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.GLTFNodeExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBE965964844A0FF7152FFFA94340A1F558BF8960 (U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean Siccity.GLTFUtility.GLTFNode/ImportResult::get_IsRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImportResult_get_IsRoot_m7F595F057311EDA04643EEB6356B5D1414CC4D41 (ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* __this, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.GLTFSkin/ImportResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportResult__ctor_m779A3381906CEC65988B755631C379A467CAA2DC (ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
// UnityEngine.Matrix4x4[] Siccity.GLTFUtility.GLTFAccessor/ImportResult::ReadMatrix4x4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ImportResult_ReadMatrix4x4_m34CDE85953F6971EFC99A1628F56E4F65103B014 (ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetRow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_GetRow_m59C6981300C6F6927BEA17C5D095B2AD29629E9F (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___column1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.SkinnedMeshRenderer>()
inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_bones(UnityEngine.Transform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_bones_m80B64F72E4E5C7901E3105594D964F25D00952D7 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_rootBone(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_rootBone_m218D83F020040DB84BA06D99050D6A01A3C90355 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_bindposes(UnityEngine.Matrix4x4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_sharedMesh_m3D3A431BC8B244C21EB9D01B9A10D040D7137F98 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.GLTFSkin/ImportTask/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m98078E5372FEE4823046B05C7B997DF7BC98EF7F (U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F* __this, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFSkin/ImportResult[]>::.ctor(Siccity.GLTFUtility.Importer/ImportTask[])
inline void ImportTask_1__ctor_m9C8DA9D02CDEA4C64D819A0A3DFB0CDAD57F43D8 (ImportTask_1_t62D88DAC1527A059044E9E6628FCF68F5F681D5A* __this, ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF* ___waitFor0, const RuntimeMethod* method)
{
	((  void (*) (ImportTask_1_t62D88DAC1527A059044E9E6628FCF68F5F681D5A*, ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF*, const RuntimeMethod*))ImportTask_1__ctor_m5AE60557C9C692A1C9E8D0F38B2A34F0130E6128_gshared)(__this, ___waitFor0, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.Task::.ctor(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task__ctor_m101572B46FBE74F66367F25C84D9CDB15D68A637 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFSkin>::get_Count()
inline int32_t List_1_get_Count_mB734E6403F8372413DC432B2AC5CE1DDA22F8F4E_inline (List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFSkin>::get_Item(System.Int32)
inline GLTFSkin_t728B7393C539099BF34FE802FD8469A9A671BD14* List_1_get_Item_m738697033608819BCDA5AC96D035F31810A9D5FF (List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GLTFSkin_t728B7393C539099BF34FE802FD8469A9A671BD14* (*) (List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// Siccity.GLTFUtility.GLTFSkin/ImportResult Siccity.GLTFUtility.GLTFSkin::Import(Siccity.GLTFUtility.GLTFAccessor/ImportResult[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* GLTFSkin_Import_m80EAC69C261DE791F117A4585C3C8BD9FE4078DE (GLTFSkin_t728B7393C539099BF34FE802FD8469A9A671BD14* __this, ImportResultU5BU5D_tBDEE2E40DA4DDE74176372343BB6ADBCC8472740* ___accessors0, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportResult::.ctor(Siccity.GLTFUtility.GLTFImage/ImportResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportResult__ctor_mE1EE7F4036EA5EBB526264B34BF3EF3526643D57 (ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* __this, ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* ___image0, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTextureCachedU3Ed__3__ctor_m107AACA55A06DAC9FCAFD04141B7FF3FF90C1C6E (U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Texture2D>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m0D74126D5BBFFF417FDA1881B8AEBD833A833F76 (Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.IEnumerator Siccity.GLTFUtility.GLTFImage/ImportResult::CreateTextureAsync(System.Boolean,System.Action`1<UnityEngine.Texture2D>,System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImportResult_CreateTextureAsync_m2258AD5309211F20BF436D291FB5E73D48D8D23A (ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* __this, bool ___linear0, Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33* ___onFinish1, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onProgress2, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Texture2D>::Invoke(T)
inline void Action_1_Invoke_mCBAA13E9863B2958F53D13FBB8B1B51CA0011B53_inline (Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportTask/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mF3621EA969A5ACCAD71777DFFFC7B6D459F42476 (U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B* __this, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFTexture/ImportResult[]>::.ctor(Siccity.GLTFUtility.Importer/ImportTask[])
inline void ImportTask_1__ctor_mE9303653A2C08108B4AB6F83964FFA3C186FB513 (ImportTask_1_t30DA322D802B8EF74B0B0D8A05F6C0A7201AAC9F* __this, ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF* ___waitFor0, const RuntimeMethod* method)
{
	((  void (*) (ImportTask_1_t30DA322D802B8EF74B0B0D8A05F6C0A7201AAC9F*, ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF*, const RuntimeMethod*))ImportTask_1__ctor_m5AE60557C9C692A1C9E8D0F38B2A34F0130E6128_gshared)(__this, ___waitFor0, method);
}
// System.Int32 System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFTexture>::get_Count()
inline int32_t List_1_get_Count_m1D3DAB49AF92CF6CA0DB34F50F4DD8ED3C39EA89_inline (List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFTexture>::get_Item(System.Int32)
inline GLTFTexture_t29C52B25361578976ABF5BE441C06C71DF4F7D0C* List_1_get_Item_mF65B33CB5F3500BF1E03DCDC515B99445E5A160F (List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GLTFTexture_t29C52B25361578976ABF5BE441C06C71DF4F7D0C* (*) (List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// Siccity.GLTFUtility.GLTFTexture/ImportResult Siccity.GLTFUtility.GLTFTexture::Import(Siccity.GLTFUtility.GLTFImage/ImportResult[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* GLTFTexture_Import_mA7CE2532D2EDCD6B22D0E7F42095618B1BE1165A (GLTFTexture_t29C52B25361578976ABF5BE441C06C71DF4F7D0C* __this, ImportResultU5BU5D_t8845DB7E6A0A94D26AEC54E9555717BE98E96936* ___images0, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonSerializer::Deserialize<System.Single[]>(Newtonsoft.Json.JsonReader)
inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27 (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59*, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765*, const RuntimeMethod*))JsonSerializer_Deserialize_TisRuntimeObject_m887812E4D7F06E92950AB4CA73CA8F31EDB09BFC_gshared)(__this, ___reader0, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB (JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonSerializer::Deserialize<System.String>(Newtonsoft.Json.JsonReader)
inline String_t* JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59*, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765*, const RuntimeMethod*))JsonSerializer_Deserialize_TisRuntimeObject_m887812E4D7F06E92950AB4CA73CA8F31EDB09BFC_gshared)(__this, ___reader0, method);
}
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m715E9AAD26B4AAA4B08E4D6AED73237174E82BB4 (Type_t* ___enumType0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m2E810F090FE2D6D78D29D87EA6773F8C616E0257 (Type_t* ___enumType0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4__ctor_m6523044D700F15EC6BCD183633A329EE56AA8C99 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___column00, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___column11, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___column22, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___column33, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonSerializer::Deserialize<System.Single>(Newtonsoft.Json.JsonReader)
inline float JsonSerializer_Deserialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD12C59EF3E0BDE9D3FFF50F818311CA6BC0A44CE (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method)
{
	return ((  float (*) (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59*, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765*, const RuntimeMethod*))JsonSerializer_Deserialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD12C59EF3E0BDE9D3FFF50F818311CA6BC0A44CE_gshared)(__this, ___reader0, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Siccity.GLTFUtility.GLTFNode/ExportResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExportResult__ctor_mA7DF1658976A0629E75B3A73DDC0B372E0169423 (ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B* __this, const RuntimeMethod* method) 
{
	{
		GLTFNode__ctor_m96D7DBCDDE679F5C900497099EEDEF682DC06034(__this, NULL);
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
// UnityEngine.GameObject Siccity.GLTFUtility.GLTFNodeExtensions::GetRoot(Siccity.GLTFUtility.GLTFNode/ImportResult[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GLTFNodeExtensions_GetRoot_mA9A3C2E23A83F8CB05F09E6F409EA42BD086490F (ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* ___nodes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_mFB0DE8108685720A511211354300D457D9DA23B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_m7777F1773A6628853EA58EE9829DA1FF3D5550F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetRootU3Eb__0_0_mB6164317DB954F6DFFDA38FAF8A130C1FB834A5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97F5F2E635A943D0F2EDA0050FC7B3BFD6AF56D1);
		s_Il2CppMethodInitialized = true;
	}
	ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	int32_t V_2 = 0;
	Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3* G_B2_0 = NULL;
	ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* G_B2_1 = NULL;
	Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3* G_B1_0 = NULL;
	ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* G_B1_1 = NULL;
	{
		// GLTFNode.ImportResult[] roots = nodes.Where(x => x.IsRoot).ToArray();
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_0 = ___nodes0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var);
		Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3* L_1 = ((U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var);
		U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2* L_3 = ((U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3* L_4 = (Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3*)il2cpp_codegen_object_new(Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m828445C78865E1ACC9C636FD283DF6459459254D(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CGetRootU3Eb__0_0_mB6164317DB954F6DFFDA38FAF8A130C1FB834A5D_RuntimeMethod_var), NULL);
		Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3* L_5 = L_4;
		((U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_m7777F1773A6628853EA58EE9829DA1FF3D5550F7((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_m7777F1773A6628853EA58EE9829DA1FF3D5550F7_RuntimeMethod_var);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_7;
		L_7 = Enumerable_ToArray_TisImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_mFB0DE8108685720A511211354300D457D9DA23B5(L_6, Enumerable_ToArray_TisImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_mFB0DE8108685720A511211354300D457D9DA23B5_RuntimeMethod_var);
		V_0 = L_7;
		// if (roots.Length == 1) return roots[0].transform.gameObject;
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_8 = V_0;
		NullCheck(L_8);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		// if (roots.Length == 1) return roots[0].transform.gameObject;
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 0;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = L_11->___transform_2;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		return L_13;
	}

IL_003f:
	{
		// GameObject root = new GameObject("Root");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_14, _stringLiteral97F5F2E635A943D0F2EDA0050FC7B3BFD6AF56D1, NULL);
		V_1 = L_14;
		// for (int i = 0; i < roots.Length; i++) {
		V_2 = 0;
		goto IL_0065;
	}

IL_004e:
	{
		// roots[i].transform.parent = root.transform;
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_15 = V_0;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = L_18->___transform_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_1;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_19);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_19, L_21, NULL);
		// for (int i = 0; i < roots.Length; i++) {
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0065:
	{
		// for (int i = 0; i < roots.Length; i++) {
		int32_t L_23 = V_2;
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_004e;
		}
	}
	{
		// return root;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_1;
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
// System.Void Siccity.GLTFUtility.GLTFNodeExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m731F0462029255C691A185D58D118995614F519C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2* L_0 = (U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2*)il2cpp_codegen_object_new(U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mBE965964844A0FF7152FFFA94340A1F558BF8960(L_0, NULL);
		((U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Siccity.GLTFUtility.GLTFNodeExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBE965964844A0FF7152FFFA94340A1F558BF8960 (U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Siccity.GLTFUtility.GLTFNodeExtensions/<>c::<GetRoot>b__0_0(Siccity.GLTFUtility.GLTFNode/ImportResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetRootU3Eb__0_0_mB6164317DB954F6DFFDA38FAF8A130C1FB834A5D (U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2* __this, ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* ___x0, const RuntimeMethod* method) 
{
	{
		// GLTFNode.ImportResult[] roots = nodes.Where(x => x.IsRoot).ToArray();
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_0 = ___x0;
		NullCheck(L_0);
		bool L_1;
		L_1 = ImportResult_get_IsRoot_m7F595F057311EDA04643EEB6356B5D1414CC4D41(L_0, NULL);
		return L_1;
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
// System.Void Siccity.GLTFUtility.GLTFObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFObject__ctor_m351DBDE00DD0B4BFAE6839B547C9B38A87C264B7 (GLTFObject_tD045246E5AE1423C30A539F5767E3EED90CC5CC6* __this, const RuntimeMethod* method) 
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
// System.Void Siccity.GLTFUtility.GLTFPrimitive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFPrimitive__ctor_m2E258DCE7C13BB56F559FDF5D0621FEB7A843E24 (GLTFPrimitive_t069231A8A45C9B80929CBB28CB4856E8D6142BD2* __this, const RuntimeMethod* method) 
{
	{
		// public RenderingMode mode = RenderingMode.TRIANGLES;
		__this->___mode_1 = 4;
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
// System.Void Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFAttributes__ctor_mD8AC514A308F3959A3C1522C6020FF02A5D2F80F (GLTFAttributes_t66CF595AC34CC93319F6989385E7B56AADD234AE* __this, const RuntimeMethod* method) 
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
// System.Void Siccity.GLTFUtility.GLTFPrimitive/Extensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions__ctor_mEB08C1F95A67CCEFF372762FFC124B40DF7E8033 (Extensions_t17718EB8D761E80A08E7AF862306332EAC0DB7A2* __this, const RuntimeMethod* method) 
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
// System.Void Siccity.GLTFUtility.GLTFPrimitive/DracoMeshCompression::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DracoMeshCompression__ctor_m0278E2055CFA661560622E7725FE2CADFDD527BF (DracoMeshCompression_tB2856EB179EC57EFF5CCCA0BB66BEDD45A9A7481* __this, const RuntimeMethod* method) 
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
// System.Void Siccity.GLTFUtility.GLTFProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFProperty__ctor_m5BF5B7EBA28F626906E02930B4590B3F38311307 (GLTFProperty_t4A06B9F82E2FF4D8B9BE7A3A12D462C033E4DE61* __this, const RuntimeMethod* method) 
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
// System.Void Siccity.GLTFUtility.GLTFScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFScene__ctor_mCA096F97908A43A6DC28114EC20DBEE9788D745F (GLTFScene_t1FDD03998A94D5A9BAC18B7AF3CBB2D3F8B0DC32* __this, const RuntimeMethod* method) 
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
// Siccity.GLTFUtility.GLTFSkin/ImportResult Siccity.GLTFUtility.GLTFSkin::Import(Siccity.GLTFUtility.GLTFAccessor/ImportResult[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* GLTFSkin_Import_m80EAC69C261DE791F117A4585C3C8BD9FE4078DE (GLTFSkin_t728B7393C539099BF34FE802FD8469A9A671BD14* __this, ImportResultU5BU5D_tBDEE2E40DA4DDE74176372343BB6ADBCC8472740* ___accessors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* V_0 = NULL;
	int32_t V_1 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// ImportResult result = new ImportResult();
		ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* L_0 = (ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED*)il2cpp_codegen_object_new(ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ImportResult__ctor_m779A3381906CEC65988B755631C379A467CAA2DC(L_0, NULL);
		V_0 = L_0;
		// result.joints = joints;
		ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___joints_1;
		NullCheck(L_1);
		L_1->___joints_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___joints_1), (void*)L_2);
		// if (inverseBindMatrices.HasValue) {
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_3 = (&__this->___inverseBindMatrices_0);
		bool L_4;
		L_4 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_3, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0104;
		}
	}
	{
		// result.inverseBindMatrices = accessors[inverseBindMatrices.Value].ReadMatrix4x4();
		ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* L_5 = V_0;
		ImportResultU5BU5D_tBDEE2E40DA4DDE74176372343BB6ADBCC8472740* L_6 = ___accessors0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_7 = (&__this->___inverseBindMatrices_0);
		int32_t L_8;
		L_8 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_7, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_9 = L_8;
		ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B* L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_11;
		L_11 = ImportResult_ReadMatrix4x4_m34CDE85953F6971EFC99A1628F56E4F65103B014(L_10, NULL);
		NullCheck(L_5);
		L_5->___inverseBindMatrices_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___inverseBindMatrices_0), (void*)L_11);
		// for (int i = 0; i < result.inverseBindMatrices.Length; i++) {
		V_1 = 0;
		goto IL_00f6;
	}

IL_0041:
	{
		// Matrix4x4 m = result.inverseBindMatrices[i];
		ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* L_12 = V_0;
		NullCheck(L_12);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_13 = L_12->___inverseBindMatrices_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_2 = L_16;
		// Vector4 row0 = m.GetRow(0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17;
		L_17 = Matrix4x4_GetRow_m59C6981300C6F6927BEA17C5D095B2AD29629E9F((&V_2), 0, NULL);
		V_3 = L_17;
		// row0.y = -row0.y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_18 = V_3;
		float L_19 = L_18.___y_2;
		(&V_3)->___y_2 = ((-L_19));
		// row0.z = -row0.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20 = V_3;
		float L_21 = L_20.___z_3;
		(&V_3)->___z_3 = ((-L_21));
		// Vector4 row1 = m.GetRow(1);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_22;
		L_22 = Matrix4x4_GetRow_m59C6981300C6F6927BEA17C5D095B2AD29629E9F((&V_2), 1, NULL);
		V_4 = L_22;
		// row1.x = -row1.x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = V_4;
		float L_24 = L_23.___x_1;
		(&V_4)->___x_1 = ((-L_24));
		// Vector4 row2 = m.GetRow(2);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25;
		L_25 = Matrix4x4_GetRow_m59C6981300C6F6927BEA17C5D095B2AD29629E9F((&V_2), 2, NULL);
		V_5 = L_25;
		// row2.x = -row2.x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26 = V_5;
		float L_27 = L_26.___x_1;
		(&V_5)->___x_1 = ((-L_27));
		// Vector4 row3 = m.GetRow(3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_28;
		L_28 = Matrix4x4_GetRow_m59C6981300C6F6927BEA17C5D095B2AD29629E9F((&V_2), 3, NULL);
		V_6 = L_28;
		// row3.x = -row3.x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_29 = V_6;
		float L_30 = L_29.___x_1;
		(&V_6)->___x_1 = ((-L_30));
		// m.SetColumn(0, row0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_31 = V_3;
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_2), 0, L_31, NULL);
		// m.SetColumn(1, row1);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_32 = V_4;
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_2), 1, L_32, NULL);
		// m.SetColumn(2, row2);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_33 = V_5;
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_2), 2, L_33, NULL);
		// m.SetColumn(3, row3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_34 = V_6;
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_2), 3, L_34, NULL);
		// result.inverseBindMatrices[i] = m;
		ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* L_35 = V_0;
		NullCheck(L_35);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_36 = L_35->___inverseBindMatrices_0;
		int32_t L_37 = V_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_38 = V_2;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_38);
		// for (int i = 0; i < result.inverseBindMatrices.Length; i++) {
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00f6:
	{
		// for (int i = 0; i < result.inverseBindMatrices.Length; i++) {
		int32_t L_40 = V_1;
		ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* L_41 = V_0;
		NullCheck(L_41);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_42 = L_41->___inverseBindMatrices_0;
		NullCheck(L_42);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0041;
		}
	}

IL_0104:
	{
		// return result;
		ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* L_43 = V_0;
		return L_43;
	}
}
// System.Void Siccity.GLTFUtility.GLTFSkin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFSkin__ctor_m5DFD93E86DAF05D0D3E31FD07D050F158E24BC60 (GLTFSkin_t728B7393C539099BF34FE802FD8469A9A671BD14* __this, const RuntimeMethod* method) 
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
// UnityEngine.SkinnedMeshRenderer Siccity.GLTFUtility.GLTFSkin/ImportResult::SetupSkinnedRenderer(UnityEngine.GameObject,UnityEngine.Mesh,Siccity.GLTFUtility.GLTFNode/ImportResult[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ImportResult_SetupSkinnedRenderer_mB1B0C5C09DD34D94FCC2838AB0C41A2020A2DFAD (ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh1, ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* ___nodes2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5352D01FE6068C601049E8637D4D269DA0DD1DC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5B8C96BBCEB1E1F0FA13642A12DBECB0E90B670);
		s_Il2CppMethodInitialized = true;
	}
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* V_0 = NULL;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* V_4 = NULL;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_5 = NULL;
	int32_t V_6 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_8 = NULL;
	int32_t V_9 = 0;
	{
		// SkinnedMeshRenderer smr = go.AddComponent<SkinnedMeshRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		NullCheck(L_0);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_1;
		L_1 = GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6(L_0, GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6_RuntimeMethod_var);
		V_0 = L_1;
		// Transform[] bones = new Transform[joints.Length];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___joints_1;
		NullCheck(L_2);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_1 = L_3;
		// for (int i = 0; i < bones.Length; i++) {
		V_2 = 0;
		goto IL_0065;
	}

IL_0019:
	{
		// int jointNodeIndex = joints[i];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___joints_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		// GLTFNode.ImportResult jointNode = nodes[jointNodeIndex];
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_8 = ___nodes2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		// bones[i] = jointNode.transform;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = V_1;
		int32_t L_13 = V_2;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_14 = V_4;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = L_14->___transform_2;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_15);
		// if (string.IsNullOrEmpty(jointNode.transform.name)) jointNode.transform.name = "joint" + i;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_16 = V_4;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = L_16->___transform_2;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_17, NULL);
		bool L_19;
		L_19 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_18, NULL);
		if (!L_19)
		{
			goto IL_0061;
		}
	}
	{
		// if (string.IsNullOrEmpty(jointNode.transform.name)) jointNode.transform.name = "joint" + i;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_20 = V_4;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = L_20->___transform_2;
		String_t* L_22;
		L_22 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_23;
		L_23 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralD5B8C96BBCEB1E1F0FA13642A12DBECB0E90B670, L_22, NULL);
		NullCheck(L_21);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_21, L_23, NULL);
	}

IL_0061:
	{
		// for (int i = 0; i < bones.Length; i++) {
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0065:
	{
		// for (int i = 0; i < bones.Length; i++) {
		int32_t L_25 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_26 = V_1;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		// smr.bones = bones;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_27 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_28 = V_1;
		NullCheck(L_27);
		SkinnedMeshRenderer_set_bones_m80B64F72E4E5C7901E3105594D964F25D00952D7(L_27, L_28, NULL);
		// smr.rootBone = bones[0];
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_29 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_30 = V_1;
		NullCheck(L_30);
		int32_t L_31 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_29);
		SkinnedMeshRenderer_set_rootBone_m218D83F020040DB84BA06D99050D6A01A3C90355(L_29, L_32, NULL);
		// if (inverseBindMatrices != null) {
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_33 = __this->___inverseBindMatrices_0;
		if (!L_33)
		{
			goto IL_00f3;
		}
	}
	{
		// if (inverseBindMatrices.Length != joints.Length) Debug.LogWarning("InverseBindMatrices count and joints count not the same");
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_34 = __this->___inverseBindMatrices_0;
		NullCheck(L_34);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = __this->___joints_1;
		NullCheck(L_35);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_009f;
		}
	}
	{
		// if (inverseBindMatrices.Length != joints.Length) Debug.LogWarning("InverseBindMatrices count and joints count not the same");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral5352D01FE6068C601049E8637D4D269DA0DD1DC2, NULL);
	}

IL_009f:
	{
		// Matrix4x4 m = nodes[0].transform.localToWorldMatrix;
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_36 = ___nodes2;
		NullCheck(L_36);
		int32_t L_37 = 0;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = L_38->___transform_2;
		NullCheck(L_39);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_40;
		L_40 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_39, NULL);
		// Matrix4x4[] bindPoses = new Matrix4x4[joints.Length];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->___joints_1;
		NullCheck(L_41);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_42 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)));
		V_5 = L_42;
		// for (int i = 0; i < joints.Length; i++) {
		V_6 = 0;
		goto IL_00dd;
	}

IL_00c1:
	{
		// bindPoses[i] = inverseBindMatrices[i];
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_43 = V_5;
		int32_t L_44 = V_6;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_45 = __this->___inverseBindMatrices_0;
		int32_t L_46 = V_6;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_48);
		// for (int i = 0; i < joints.Length; i++) {
		int32_t L_49 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00dd:
	{
		// for (int i = 0; i < joints.Length; i++) {
		int32_t L_50 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = __this->___joints_1;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_00c1;
		}
	}
	{
		// mesh.bindposes = bindPoses;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_52 = ___mesh1;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_53 = V_5;
		NullCheck(L_52);
		Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF(L_52, L_53, NULL);
		goto IL_0155;
	}

IL_00f3:
	{
		// Matrix4x4 m = nodes[0].transform.localToWorldMatrix;
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_54 = ___nodes2;
		NullCheck(L_54);
		int32_t L_55 = 0;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_56);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57 = L_56->___transform_2;
		NullCheck(L_57);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_58;
		L_58 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_57, NULL);
		V_7 = L_58;
		// Matrix4x4[] bindPoses = new Matrix4x4[joints.Length];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = __this->___joints_1;
		NullCheck(L_59);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_60 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length)));
		V_8 = L_60;
		// for (int i = 0; i < joints.Length; i++) {
		V_9 = 0;
		goto IL_0141;
	}

IL_0116:
	{
		// bindPoses[i] = nodes[joints[i]].transform.worldToLocalMatrix * m;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_61 = V_8;
		int32_t L_62 = V_9;
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_63 = ___nodes2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = __this->___joints_1;
		int32_t L_65 = V_9;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		int32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_63);
		int32_t L_68 = L_67;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_69 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_69);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70 = L_69->___transform_2;
		NullCheck(L_70);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_71;
		L_71 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_70, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_72 = V_7;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_73;
		L_73 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_71, L_72, NULL);
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_73);
		// for (int i = 0; i < joints.Length; i++) {
		int32_t L_74 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_0141:
	{
		// for (int i = 0; i < joints.Length; i++) {
		int32_t L_75 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = __this->___joints_1;
		NullCheck(L_76);
		if ((((int32_t)L_75) < ((int32_t)((int32_t)(((RuntimeArray*)L_76)->max_length)))))
		{
			goto IL_0116;
		}
	}
	{
		// mesh.bindposes = bindPoses;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_77 = ___mesh1;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_78 = V_8;
		NullCheck(L_77);
		Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF(L_77, L_78, NULL);
	}

IL_0155:
	{
		// smr.sharedMesh = mesh;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_79 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_80 = ___mesh1;
		NullCheck(L_79);
		SkinnedMeshRenderer_set_sharedMesh_m3D3A431BC8B244C21EB9D01B9A10D040D7137F98(L_79, L_80, NULL);
		// return smr;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_81 = V_0;
		return L_81;
	}
}
// System.Void Siccity.GLTFUtility.GLTFSkin/ImportResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportResult__ctor_m779A3381906CEC65988B755631C379A467CAA2DC (ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* __this, const RuntimeMethod* method) 
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
// System.Void Siccity.GLTFUtility.GLTFSkin/ImportTask::.ctor(System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFSkin>,Siccity.GLTFUtility.GLTFAccessor/ImportTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportTask__ctor_m4E66B0EC15CECE19C9F038EEE03F0CC22344DA79 (ImportTask_tD875E2C5E437DE43153897A37F61B9A05FD707FF* __this, List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F* ___skins0, ImportTask_t5B88C44DA89E18E8E38693499D4CC74FB5036009* ___accessorTask1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportTask_1__ctor_m9C8DA9D02CDEA4C64D819A0A3DFB0CDAD57F43D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_mDD8AD408CB38895F98EC32818A85AA771F489923_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F* L_0 = (U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_m98078E5372FEE4823046B05C7B997DF7BC98EF7F(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F* L_1 = V_0;
		List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F* L_2 = ___skins0;
		NullCheck(L_1);
		L_1->___skins_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___skins_0), (void*)L_2);
		U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F* L_3 = V_0;
		ImportTask_t5B88C44DA89E18E8E38693499D4CC74FB5036009* L_4 = ___accessorTask1;
		NullCheck(L_3);
		L_3->___accessorTask_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___accessorTask_2), (void*)L_4);
		// public ImportTask(List<GLTFSkin> skins, GLTFAccessor.ImportTask accessorTask) : base(accessorTask) {
		ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF* L_5 = (ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF*)(ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF*)SZArrayNew(ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF_il2cpp_TypeInfo_var, (uint32_t)1);
		ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF* L_6 = L_5;
		U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F* L_7 = V_0;
		NullCheck(L_7);
		ImportTask_t5B88C44DA89E18E8E38693499D4CC74FB5036009* L_8 = L_7->___accessorTask_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE*)L_8);
		ImportTask_1__ctor_m9C8DA9D02CDEA4C64D819A0A3DFB0CDAD57F43D8(__this, L_6, ImportTask_1__ctor_m9C8DA9D02CDEA4C64D819A0A3DFB0CDAD57F43D8_RuntimeMethod_var);
		U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F* L_9 = V_0;
		NullCheck(L_9);
		L_9->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___U3CU3E4__this_1), (void*)__this);
		// task = new Task(() => {
		//     if (skins == null) return;
		// 
		//     Result = new ImportResult[skins.Count];
		//     for (int i = 0; i < Result.Length; i++) {
		//         Result[i] = skins[i].Import(accessorTask.Result);
		//     }
		// });
		U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F* L_10 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_11, L_10, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_mDD8AD408CB38895F98EC32818A85AA771F489923_RuntimeMethod_var), NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_12 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)il2cpp_codegen_object_new(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Task__ctor_m101572B46FBE74F66367F25C84D9CDB15D68A637(L_12, L_11, NULL);
		((ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE*)__this)->___task_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE*)__this)->___task_0), (void*)L_12);
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
// System.Void Siccity.GLTFUtility.GLTFSkin/ImportTask/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m98078E5372FEE4823046B05C7B997DF7BC98EF7F (U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Siccity.GLTFUtility.GLTFSkin/ImportTask/<>c__DisplayClass0_0::<.ctor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_mDD8AD408CB38895F98EC32818A85AA771F489923 (U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB734E6403F8372413DC432B2AC5CE1DDA22F8F4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m738697033608819BCDA5AC96D035F31810A9D5FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (skins == null) return;
		List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F* L_0 = __this->___skins_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (skins == null) return;
		return;
	}

IL_0009:
	{
		// Result = new ImportResult[skins.Count];
		ImportTask_tD875E2C5E437DE43153897A37F61B9A05FD707FF* L_1 = __this->___U3CU3E4__this_1;
		List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F* L_2 = __this->___skins_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mB734E6403F8372413DC432B2AC5CE1DDA22F8F4E_inline(L_2, List_1_get_Count_mB734E6403F8372413DC432B2AC5CE1DDA22F8F4E_RuntimeMethod_var);
		ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376* L_4 = (ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376*)(ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376*)SZArrayNew(ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376_il2cpp_TypeInfo_var, (uint32_t)L_3);
		NullCheck(L_1);
		((ImportTask_1_t62D88DAC1527A059044E9E6628FCF68F5F681D5A*)L_1)->___Result_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((ImportTask_1_t62D88DAC1527A059044E9E6628FCF68F5F681D5A*)L_1)->___Result_3), (void*)L_4);
		// for (int i = 0; i < Result.Length; i++) {
		V_0 = 0;
		goto IL_0055;
	}

IL_0028:
	{
		// Result[i] = skins[i].Import(accessorTask.Result);
		ImportTask_tD875E2C5E437DE43153897A37F61B9A05FD707FF* L_5 = __this->___U3CU3E4__this_1;
		NullCheck(L_5);
		ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376* L_6 = ((ImportTask_1_t62D88DAC1527A059044E9E6628FCF68F5F681D5A*)L_5)->___Result_3;
		int32_t L_7 = V_0;
		List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F* L_8 = __this->___skins_0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		GLTFSkin_t728B7393C539099BF34FE802FD8469A9A671BD14* L_10;
		L_10 = List_1_get_Item_m738697033608819BCDA5AC96D035F31810A9D5FF(L_8, L_9, List_1_get_Item_m738697033608819BCDA5AC96D035F31810A9D5FF_RuntimeMethod_var);
		ImportTask_t5B88C44DA89E18E8E38693499D4CC74FB5036009* L_11 = __this->___accessorTask_2;
		NullCheck(L_11);
		ImportResultU5BU5D_tBDEE2E40DA4DDE74176372343BB6ADBCC8472740* L_12 = ((ImportTask_1_t77F40D823FFBF94BCF639D754F174066A208EF58*)L_11)->___Result_3;
		NullCheck(L_10);
		ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* L_13;
		L_13 = GLTFSkin_Import_m80EAC69C261DE791F117A4585C3C8BD9FE4078DE(L_10, L_12, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_13);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED*)L_13);
		// for (int i = 0; i < Result.Length; i++) {
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0055:
	{
		// for (int i = 0; i < Result.Length; i++) {
		int32_t L_15 = V_0;
		ImportTask_tD875E2C5E437DE43153897A37F61B9A05FD707FF* L_16 = __this->___U3CU3E4__this_1;
		NullCheck(L_16);
		ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376* L_17 = ((ImportTask_1_t62D88DAC1527A059044E9E6628FCF68F5F681D5A*)L_16)->___Result_3;
		NullCheck(L_17);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0028;
		}
	}
	{
		// });
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
// Siccity.GLTFUtility.GLTFTexture/ImportResult Siccity.GLTFUtility.GLTFTexture::Import(Siccity.GLTFUtility.GLTFImage/ImportResult[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* GLTFTexture_Import_mA7CE2532D2EDCD6B22D0E7F42095618B1BE1165A (GLTFTexture_t29C52B25361578976ABF5BE441C06C71DF4F7D0C* __this, ImportResultU5BU5D_t8845DB7E6A0A94D26AEC54E9555717BE98E96936* ___images0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (source.HasValue) {
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_0 = (&__this->___source_1);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_0, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// ImportResult result = new ImportResult(images[source.Value]);
		ImportResultU5BU5D_t8845DB7E6A0A94D26AEC54E9555717BE98E96936* L_2 = ___images0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_3 = (&__this->___source_1);
		int32_t L_4;
		L_4 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_3, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_5 = L_4;
		ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* L_7 = (ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4*)il2cpp_codegen_object_new(ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ImportResult__ctor_mE1EE7F4036EA5EBB526264B34BF3EF3526643D57(L_7, L_6, NULL);
		// return result;
		return L_7;
	}

IL_0020:
	{
		// return null;
		return (ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4*)NULL;
	}
}
// System.Void Siccity.GLTFUtility.GLTFTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFTexture__ctor_m86F6B5A9377BA3840211137A62724168A66F875B (GLTFTexture_t29C52B25361578976ABF5BE441C06C71DF4F7D0C* __this, const RuntimeMethod* method) 
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
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportResult::.ctor(Siccity.GLTFUtility.GLTFImage/ImportResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportResult__ctor_mE1EE7F4036EA5EBB526264B34BF3EF3526643D57 (ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* __this, ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* ___image0, const RuntimeMethod* method) 
{
	{
		// public ImportResult(GLTFImage.ImportResult image) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.image = image;
		ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* L_0 = ___image0;
		__this->___image_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___image_0), (void*)L_0);
		// }
		return;
	}
}
// System.Collections.IEnumerator Siccity.GLTFUtility.GLTFTexture/ImportResult::GetTextureCached(System.Boolean,System.Action`1<UnityEngine.Texture2D>,System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImportResult_GetTextureCached_mCF9BA1F3B453108280AE72F581875B80A05911F2 (ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* __this, bool ___linear0, Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33* ___onFinish1, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onProgress2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* L_0 = (U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E*)il2cpp_codegen_object_new(U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetTextureCachedU3Ed__3__ctor_m107AACA55A06DAC9FCAFD04141B7FF3FF90C1C6E(L_0, 0, NULL);
		U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* L_2 = L_1;
		bool L_3 = ___linear0;
		NullCheck(L_2);
		L_2->___linear_3 = L_3;
		U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* L_4 = L_2;
		Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33* L_5 = ___onFinish1;
		NullCheck(L_4);
		L_4->___onFinish_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___onFinish_5), (void*)L_5);
		U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* L_6 = L_4;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_7 = ___onProgress2;
		NullCheck(L_6);
		L_6->___onProgress_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___onProgress_4), (void*)L_7);
		return L_6;
	}
}
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportResult::<GetTextureCached>b__3_0(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportResult_U3CGetTextureCachedU3Eb__3_0_m8DB954266435E371712DEA72A274173F69924D95 (ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___x0, const RuntimeMethod* method) 
{
	{
		// IEnumerator en = image.CreateTextureAsync(linear, x => cache = x, onProgress);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___x0;
		__this->___cache_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cache_1), (void*)L_0);
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
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTextureCachedU3Ed__3__ctor_m107AACA55A06DAC9FCAFD04141B7FF3FF90C1C6E (U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTextureCachedU3Ed__3_System_IDisposable_Dispose_mDDCEF534D74D8B0CE354A2E9A058477102CA6435 (U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetTextureCachedU3Ed__3_MoveNext_m0CCBA000A088CC3DAA05F8CCD879F004251BA5E4 (U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportResult_U3CGetTextureCachedU3Eb__3_0_m8DB954266435E371712DEA72A274173F69924D95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (cache == null) {
		ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* L_4 = V_1;
		NullCheck(L_4);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = L_4->___cache_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0082;
		}
	}
	{
		// IEnumerator en = image.CreateTextureAsync(linear, x => cache = x, onProgress);
		ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* L_7 = V_1;
		NullCheck(L_7);
		ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* L_8 = L_7->___image_0;
		bool L_9 = __this->___linear_3;
		ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* L_10 = V_1;
		Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33* L_11 = (Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33*)il2cpp_codegen_object_new(Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_m0D74126D5BBFFF417FDA1881B8AEBD833A833F76(L_11, L_10, (intptr_t)((void*)ImportResult_U3CGetTextureCachedU3Eb__3_0_m8DB954266435E371712DEA72A274173F69924D95_RuntimeMethod_var), NULL);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_12 = __this->___onProgress_4;
		NullCheck(L_8);
		RuntimeObject* L_13;
		L_13 = ImportResult_CreateTextureAsync_m2258AD5309211F20BF436D291FB5E73D48D8D23A(L_8, L_9, L_11, L_12, NULL);
		__this->___U3CenU3E5__2_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CenU3E5__2_6), (void*)L_13);
		goto IL_006e;
	}

IL_0057:
	{
		// while (en.MoveNext()) { yield return null; };
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0067:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_006e:
	{
		// while (en.MoveNext()) { yield return null; };
		RuntimeObject* L_14 = __this->___U3CenU3E5__2_6;
		NullCheck(L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
		if (L_15)
		{
			goto IL_0057;
		}
	}
	{
		// }
		__this->___U3CenU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CenU3E5__2_6), (void*)(RuntimeObject*)NULL);
	}

IL_0082:
	{
		// onFinish(cache);
		Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33* L_16 = __this->___onFinish_5;
		ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* L_17 = V_1;
		NullCheck(L_17);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = L_17->___cache_1;
		NullCheck(L_16);
		Action_1_Invoke_mCBAA13E9863B2958F53D13FBB8B1B51CA0011B53_inline(L_16, L_18, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetTextureCachedU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1C9762DCC01034EB35EA8AE733ADA08FA8003C3E (U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTextureCachedU3Ed__3_System_Collections_IEnumerator_Reset_mF034E52F90A4C89E95F4F1E00F8E2C7A06B1AC65 (U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetTextureCachedU3Ed__3_System_Collections_IEnumerator_Reset_mF034E52F90A4C89E95F4F1E00F8E2C7A06B1AC65_RuntimeMethod_var)));
	}
}
// System.Object Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetTextureCachedU3Ed__3_System_Collections_IEnumerator_get_Current_mA284ED3390F0DBAD281E37B70FE16A98918038F6 (U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* __this, const RuntimeMethod* method) 
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
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportTask::.ctor(System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFTexture>,Siccity.GLTFUtility.GLTFImage/ImportTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportTask__ctor_mD67D31CF0335DF7D0E814D9654438247851FFE8C (ImportTask_tEDBFBE9A9168C0670758D83A9D9A458325BE4A6F* __this, List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943* ___textures0, ImportTask_t26EDC4BA749D5280EB5F716C2788DBA03A283B6E* ___imageTask1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportTask_1__ctor_mE9303653A2C08108B4AB6F83964FFA3C186FB513_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_m2284EFDB40F9A8C37F20AD02C98BAF6A9BD27300_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B* L_0 = (U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_mF3621EA969A5ACCAD71777DFFFC7B6D459F42476(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B* L_1 = V_0;
		List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943* L_2 = ___textures0;
		NullCheck(L_1);
		L_1->___textures_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___textures_0), (void*)L_2);
		U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B* L_3 = V_0;
		ImportTask_t26EDC4BA749D5280EB5F716C2788DBA03A283B6E* L_4 = ___imageTask1;
		NullCheck(L_3);
		L_3->___imageTask_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___imageTask_2), (void*)L_4);
		// public ImportTask(List<GLTFTexture> textures, GLTFImage.ImportTask imageTask) : base(imageTask) {
		ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF* L_5 = (ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF*)(ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF*)SZArrayNew(ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF_il2cpp_TypeInfo_var, (uint32_t)1);
		ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF* L_6 = L_5;
		U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B* L_7 = V_0;
		NullCheck(L_7);
		ImportTask_t26EDC4BA749D5280EB5F716C2788DBA03A283B6E* L_8 = L_7->___imageTask_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE*)L_8);
		ImportTask_1__ctor_mE9303653A2C08108B4AB6F83964FFA3C186FB513(__this, L_6, ImportTask_1__ctor_mE9303653A2C08108B4AB6F83964FFA3C186FB513_RuntimeMethod_var);
		U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B* L_9 = V_0;
		NullCheck(L_9);
		L_9->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___U3CU3E4__this_1), (void*)__this);
		// task = new Task(() => {
		//     if (textures == null) return;
		// 
		//     Result = new ImportResult[textures.Count];
		//     for (int i = 0; i < Result.Length; i++) {
		//         Result[i] = textures[i].Import(imageTask.Result);
		//     }
		// });
		U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B* L_10 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_11, L_10, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_m2284EFDB40F9A8C37F20AD02C98BAF6A9BD27300_RuntimeMethod_var), NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_12 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)il2cpp_codegen_object_new(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Task__ctor_m101572B46FBE74F66367F25C84D9CDB15D68A637(L_12, L_11, NULL);
		((ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE*)__this)->___task_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE*)__this)->___task_0), (void*)L_12);
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
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportTask/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mF3621EA969A5ACCAD71777DFFFC7B6D459F42476 (U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportTask/<>c__DisplayClass0_0::<.ctor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_m2284EFDB40F9A8C37F20AD02C98BAF6A9BD27300 (U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1D3DAB49AF92CF6CA0DB34F50F4DD8ED3C39EA89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF65B33CB5F3500BF1E03DCDC515B99445E5A160F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (textures == null) return;
		List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943* L_0 = __this->___textures_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (textures == null) return;
		return;
	}

IL_0009:
	{
		// Result = new ImportResult[textures.Count];
		ImportTask_tEDBFBE9A9168C0670758D83A9D9A458325BE4A6F* L_1 = __this->___U3CU3E4__this_1;
		List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943* L_2 = __this->___textures_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m1D3DAB49AF92CF6CA0DB34F50F4DD8ED3C39EA89_inline(L_2, List_1_get_Count_m1D3DAB49AF92CF6CA0DB34F50F4DD8ED3C39EA89_RuntimeMethod_var);
		ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71* L_4 = (ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71*)(ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71*)SZArrayNew(ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71_il2cpp_TypeInfo_var, (uint32_t)L_3);
		NullCheck(L_1);
		((ImportTask_1_t30DA322D802B8EF74B0B0D8A05F6C0A7201AAC9F*)L_1)->___Result_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((ImportTask_1_t30DA322D802B8EF74B0B0D8A05F6C0A7201AAC9F*)L_1)->___Result_3), (void*)L_4);
		// for (int i = 0; i < Result.Length; i++) {
		V_0 = 0;
		goto IL_0055;
	}

IL_0028:
	{
		// Result[i] = textures[i].Import(imageTask.Result);
		ImportTask_tEDBFBE9A9168C0670758D83A9D9A458325BE4A6F* L_5 = __this->___U3CU3E4__this_1;
		NullCheck(L_5);
		ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71* L_6 = ((ImportTask_1_t30DA322D802B8EF74B0B0D8A05F6C0A7201AAC9F*)L_5)->___Result_3;
		int32_t L_7 = V_0;
		List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943* L_8 = __this->___textures_0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		GLTFTexture_t29C52B25361578976ABF5BE441C06C71DF4F7D0C* L_10;
		L_10 = List_1_get_Item_mF65B33CB5F3500BF1E03DCDC515B99445E5A160F(L_8, L_9, List_1_get_Item_mF65B33CB5F3500BF1E03DCDC515B99445E5A160F_RuntimeMethod_var);
		ImportTask_t26EDC4BA749D5280EB5F716C2788DBA03A283B6E* L_11 = __this->___imageTask_2;
		NullCheck(L_11);
		ImportResultU5BU5D_t8845DB7E6A0A94D26AEC54E9555717BE98E96936* L_12 = ((ImportTask_1_t36F54BCE5C6C762D504AF8682AD87D50E6B082F5*)L_11)->___Result_3;
		NullCheck(L_10);
		ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* L_13;
		L_13 = GLTFTexture_Import_mA7CE2532D2EDCD6B22D0E7F42095618B1BE1165A(L_10, L_12, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_13);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4*)L_13);
		// for (int i = 0; i < Result.Length; i++) {
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0055:
	{
		// for (int i = 0; i < Result.Length; i++) {
		int32_t L_15 = V_0;
		ImportTask_tEDBFBE9A9168C0670758D83A9D9A458325BE4A6F* L_16 = __this->___U3CU3E4__this_1;
		NullCheck(L_16);
		ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71* L_17 = ((ImportTask_1_t30DA322D802B8EF74B0B0D8A05F6C0A7201AAC9F*)L_16)->___Result_3;
		NullCheck(L_17);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0028;
		}
	}
	{
		// });
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
// System.Void Siccity.GLTFUtility.Converters.ColorRGBConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorRGBConverter_WriteJson_m943AF2C1DFFAA6E1B940CF8487F91E0964B9B990 (ColorRGBConverter_t12CFC6714395FB17E3AF0A02FA2ACF8B80A2903A* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___value1, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color c = (Color) value;
		RuntimeObject* L_0 = ___value1;
		V_0 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var))));
		// writer.WriteStartArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_1 = ___writer0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(70 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartArray() */, L_1);
		// writer.WriteValue(c.r);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_2 = ___writer0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = V_0;
		float L_4 = L_3.___r_0;
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_2, L_4);
		// writer.WriteValue(c.g);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_5 = ___writer0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		float L_7 = L_6.___g_1;
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_5, L_7);
		// writer.WriteValue(c.b);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_8 = ___writer0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		float L_10 = L_9.___b_2;
		NullCheck(L_8);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_8, L_10);
		// writer.WriteEndArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_11 = ___writer0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(71 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndArray() */, L_11);
		// }
		return;
	}
}
// System.Object Siccity.GLTFUtility.Converters.ColorRGBConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ColorRGBConverter_ReadJson_mF4926D3ADC9A2F1167FD58939DA592428DE8D44D (ColorRGBConverter_t12CFC6714395FB17E3AF0A02FA2ACF8B80A2903A* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, Type_t* ___objectType1, RuntimeObject* ___existingValue2, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		// float[] a = serializer.Deserialize<float[]>(reader);
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___serializer3;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_1 = ___reader0;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27(L_0, L_1, JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		V_0 = L_2;
		// return new Color(a[0], a[1], a[2]);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_12), L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Boolean Siccity.GLTFUtility.Converters.ColorRGBConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorRGBConverter_CanConvert_mE74DA034FA890B4FF009C373B827E9CFDE9D811D (ColorRGBConverter_t12CFC6714395FB17E3AF0A02FA2ACF8B80A2903A* __this, Type_t* ___objectType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return objectType == typeof(Color);
		Type_t* L_0 = ___objectType0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Void Siccity.GLTFUtility.Converters.ColorRGBConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorRGBConverter__ctor_m221AF504B28256B18A7435EDE1EF936737B5E516 (ColorRGBConverter_t12CFC6714395FB17E3AF0A02FA2ACF8B80A2903A* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Void Siccity.GLTFUtility.Converters.ColorRGBAConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorRGBAConverter_WriteJson_mFCC723ED8933B4D870EBE87216E9C3D9EB0026D1 (ColorRGBAConverter_t13916AE168ECF63ED546C51484F0BF6C986222BA* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___value1, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color c = (Color) value;
		RuntimeObject* L_0 = ___value1;
		V_0 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var))));
		// writer.WriteStartArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_1 = ___writer0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(70 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartArray() */, L_1);
		// writer.WriteValue(c.r);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_2 = ___writer0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = V_0;
		float L_4 = L_3.___r_0;
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_2, L_4);
		// writer.WriteValue(c.g);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_5 = ___writer0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		float L_7 = L_6.___g_1;
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_5, L_7);
		// writer.WriteValue(c.b);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_8 = ___writer0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		float L_10 = L_9.___b_2;
		NullCheck(L_8);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_8, L_10);
		// writer.WriteValue(c.a);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_11 = ___writer0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = V_0;
		float L_13 = L_12.___a_3;
		NullCheck(L_11);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_11, L_13);
		// writer.WriteEndArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_14 = ___writer0;
		NullCheck(L_14);
		VirtualActionInvoker0::Invoke(71 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndArray() */, L_14);
		// }
		return;
	}
}
// System.Object Siccity.GLTFUtility.Converters.ColorRGBAConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ColorRGBAConverter_ReadJson_m9F04D93C769CE9B1D0971A14B42D39CA4B15B628 (ColorRGBAConverter_t13916AE168ECF63ED546C51484F0BF6C986222BA* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, Type_t* ___objectType1, RuntimeObject* ___existingValue2, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		// float[] a = serializer.Deserialize<float[]>(reader);
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___serializer3;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_1 = ___reader0;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27(L_0, L_1, JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		V_0 = L_2;
		// return new Color(a[0], a[1], a[2], a[3]);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 3;
		float L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		memset((&L_15), 0, sizeof(L_15));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_15), L_5, L_8, L_11, L_14, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = L_15;
		RuntimeObject* L_17 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_16);
		return L_17;
	}
}
// System.Boolean Siccity.GLTFUtility.Converters.ColorRGBAConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorRGBAConverter_CanConvert_mD9028D229BED303B5F845C0335094B27E3CF220F (ColorRGBAConverter_t13916AE168ECF63ED546C51484F0BF6C986222BA* __this, Type_t* ___objectType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return objectType == typeof(Color);
		Type_t* L_0 = ___objectType0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Void Siccity.GLTFUtility.Converters.ColorRGBAConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorRGBAConverter__ctor_m0C42F93506AD38D79F70FC9F6CE9520FDC2450CD (ColorRGBAConverter_t13916AE168ECF63ED546C51484F0BF6C986222BA* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Void Siccity.GLTFUtility.Converters.EnumConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumConverter_WriteJson_mDFC1B79190072CE30375B2B294C7FB223DB4A544 (EnumConverter_t07152464D1E37E40B5D683262589B0E34AF1F721* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___value1, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer2, const RuntimeMethod* method) 
{
	{
		// writer.WriteValue(value.ToString());
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_0 = ___writer0;
		RuntimeObject* L_1 = ___value1;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(86 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Object Siccity.GLTFUtility.Converters.EnumConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnumConverter_ReadJson_mDE3957FC96A8BD4B47C4690B8D6D7C7F2646D0DE (EnumConverter_t07152464D1E37E40B5D683262589B0E34AF1F721* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, Type_t* ___objectType1, RuntimeObject* ___existingValue2, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string value = serializer.Deserialize<string>(reader);
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___serializer3;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_1 = ___reader0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE(L_0, L_1, JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE_RuntimeMethod_var);
		V_0 = L_2;
		// if (Enum.IsDefined(objectType, value)) return Enum.Parse(objectType, value);
		Type_t* L_3 = ___objectType1;
		String_t* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Enum_IsDefined_m715E9AAD26B4AAA4B08E4D6AED73237174E82BB4(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		// if (Enum.IsDefined(objectType, value)) return Enum.Parse(objectType, value);
		Type_t* L_6 = ___objectType1;
		String_t* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = Enum_Parse_m2E810F090FE2D6D78D29D87EA6773F8C616E0257(L_6, L_7, NULL);
		return L_8;
	}

IL_001a:
	{
		// else return existingValue;
		RuntimeObject* L_9 = ___existingValue2;
		return L_9;
	}
}
// System.Boolean Siccity.GLTFUtility.Converters.EnumConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnumConverter_CanConvert_m0ED2A6C7C6243C832B256D80FA4864B9AA567A45 (EnumConverter_t07152464D1E37E40B5D683262589B0E34AF1F721* __this, Type_t* ___objectType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return typeof(Enum).IsAssignableFrom(objectType);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		Type_t* L_2 = ___objectType0;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_2);
		return L_3;
	}
}
// System.Void Siccity.GLTFUtility.Converters.EnumConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumConverter__ctor_m43A32B44831E5887DA0EC596FD71C1C25673BC68 (EnumConverter_t07152464D1E37E40B5D683262589B0E34AF1F721* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Void Siccity.GLTFUtility.Converters.Matrix4x4Converter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4Converter_WriteJson_m1A96A1FEAAA09F08478DF817DA19FD3BE565EF02 (Matrix4x4Converter_tC8B24EF82158130786E7CAB75791535E3A8278AB* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___value1, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Matrix4x4 m = (Matrix4x4) value;
		RuntimeObject* L_0 = ___value1;
		V_0 = ((*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)UnBox(L_0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))));
		// writer.WriteStartArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_1 = ___writer0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(70 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartArray() */, L_1);
		// for (int i = 0; i < 16; i++) {
		V_1 = 0;
		goto IL_0023;
	}

IL_0011:
	{
		// writer.WriteValue(m[i]);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_2 = ___writer0;
		int32_t L_3 = V_1;
		float L_4;
		L_4 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A((&V_0), L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_2, L_4);
		// for (int i = 0; i < 16; i++) {
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0023:
	{
		// for (int i = 0; i < 16; i++) {
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)16))))
		{
			goto IL_0011;
		}
	}
	{
		// writer.WriteEndArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_7 = ___writer0;
		NullCheck(L_7);
		VirtualActionInvoker0::Invoke(71 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndArray() */, L_7);
		// }
		return;
	}
}
// System.Object Siccity.GLTFUtility.Converters.Matrix4x4Converter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Matrix4x4Converter_ReadJson_mCED14C2FDF8027D788A7B4B22B50308B1EC6DDB4 (Matrix4x4Converter_tC8B24EF82158130786E7CAB75791535E3A8278AB* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, Type_t* ___objectType1, RuntimeObject* ___existingValue2, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		// float[] floatArray = serializer.Deserialize<float[]>(reader);
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___serializer3;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_1 = ___reader0;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27(L_0, L_1, JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		V_0 = L_2;
		// return new Matrix4x4(
		//     new Vector4(floatArray[0], floatArray[1], floatArray[2], floatArray[3]),
		//     new Vector4(floatArray[4], floatArray[5], floatArray[6], floatArray[7]),
		//     new Vector4(floatArray[8], floatArray[9], floatArray[10], floatArray[11]),
		//     new Vector4(floatArray[12], floatArray[13], floatArray[14], floatArray[15])
		// );;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 3;
		float L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_15), L_5, L_8, L_11, L_14, /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = 4;
		float L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = 5;
		float L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = 6;
		float L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = 7;
		float L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_28), L_18, L_21, L_24, L_27, /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = 8;
		float L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = ((int32_t)9);
		float L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = V_0;
		NullCheck(L_35);
		int32_t L_36 = ((int32_t)10);
		float L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39 = ((int32_t)11);
		float L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_41), L_31, L_34, L_37, L_40, /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43 = ((int32_t)12);
		float L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46 = ((int32_t)13);
		float L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = ((int32_t)14);
		float L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_51 = V_0;
		NullCheck(L_51);
		int32_t L_52 = ((int32_t)15);
		float L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_54), L_44, L_47, L_50, L_53, /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_55;
		memset((&L_55), 0, sizeof(L_55));
		Matrix4x4__ctor_m6523044D700F15EC6BCD183633A329EE56AA8C99((&L_55), L_15, L_28, L_41, L_54, /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_56 = L_55;
		RuntimeObject* L_57 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_56);
		return L_57;
	}
}
// System.Boolean Siccity.GLTFUtility.Converters.Matrix4x4Converter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Matrix4x4Converter_CanConvert_m38E2D86BB56D27CA165731F5802CE339E18B9123 (Matrix4x4Converter_tC8B24EF82158130786E7CAB75791535E3A8278AB* __this, Type_t* ___objectType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return objectType == typeof(Matrix4x4);
		Type_t* L_0 = ___objectType0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Void Siccity.GLTFUtility.Converters.Matrix4x4Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4Converter__ctor_m61616B874A3930F4EB50C40186009F022312A585 (Matrix4x4Converter_tC8B24EF82158130786E7CAB75791535E3A8278AB* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Void Siccity.GLTFUtility.Converters.QuaternionConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionConverter_WriteJson_m48C0968A936C67F737AE53CC83936181F05BC61B (QuaternionConverter_t4A1D80DA6E25156318BB13E2727BB79EA1DA15B2* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___value1, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer2, const RuntimeMethod* method) 
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
		// Quaternion q = (Quaternion) value;
		RuntimeObject* L_0 = ___value1;
		V_0 = ((*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)UnBox(L_0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))));
		// writer.WriteStartArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_1 = ___writer0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(70 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartArray() */, L_1);
		// writer.WriteValue(q.x);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_2 = ___writer0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		float L_4 = L_3.___x_0;
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_2, L_4);
		// writer.WriteValue(-q.y);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_5 = ___writer0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		float L_7 = L_6.___y_1;
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_5, ((-L_7)));
		// writer.WriteValue(-q.z);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_8 = ___writer0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_0;
		float L_10 = L_9.___z_2;
		NullCheck(L_8);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_8, ((-L_10)));
		// writer.WriteValue(q.w);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_11 = ___writer0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_0;
		float L_13 = L_12.___w_3;
		NullCheck(L_11);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_11, L_13);
		// writer.WriteEndArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_14 = ___writer0;
		NullCheck(L_14);
		VirtualActionInvoker0::Invoke(71 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndArray() */, L_14);
		// }
		return;
	}
}
// System.Object Siccity.GLTFUtility.Converters.QuaternionConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QuaternionConverter_ReadJson_mD959BF071123CF69B95BC0726870CF356BD3D987 (QuaternionConverter_t4A1D80DA6E25156318BB13E2727BB79EA1DA15B2* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, Type_t* ___objectType1, RuntimeObject* ___existingValue2, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		// float[] floatArray = serializer.Deserialize<float[]>(reader);
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___serializer3;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_1 = ___reader0;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27(L_0, L_1, JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		V_0 = L_2;
		// return new Quaternion(floatArray[0], -floatArray[1], -floatArray[2], floatArray[3]);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 3;
		float L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_15), L_5, ((-L_8)), ((-L_11)), L_14, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = L_15;
		RuntimeObject* L_17 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_16);
		return L_17;
	}
}
// System.Boolean Siccity.GLTFUtility.Converters.QuaternionConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuaternionConverter_CanConvert_mEB8909DC69B6568D084972BC913907036EE2583C (QuaternionConverter_t4A1D80DA6E25156318BB13E2727BB79EA1DA15B2* __this, Type_t* ___objectType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return objectType == typeof(Quaternion);
		Type_t* L_0 = ___objectType0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Void Siccity.GLTFUtility.Converters.QuaternionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionConverter__ctor_mCFA10E3782B7804406CBE4A0872CBF3C2104C2F4 (QuaternionConverter_t4A1D80DA6E25156318BB13E2727BB79EA1DA15B2* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Void Siccity.GLTFUtility.Converters.TranslationConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationConverter_WriteJson_mA927B77C59A951CF90FE4BB959EA0C2B9A26B20C (TranslationConverter_t644636C700DB3129D6F337D22E15142506BFB385* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___value1, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer2, const RuntimeMethod* method) 
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
		// Vector3 pos = (Vector3) value;
		RuntimeObject* L_0 = ___value1;
		V_0 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		// writer.WriteStartArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_1 = ___writer0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(70 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartArray() */, L_1);
		// writer.WriteValue(-pos.x);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_2 = ___writer0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4 = L_3.___x_2;
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_2, ((-L_4)));
		// writer.WriteValue(pos.y);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_5 = ___writer0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7 = L_6.___y_3;
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_5, L_7);
		// writer.WriteValue(pos.z);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_8 = ___writer0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = L_9.___z_4;
		NullCheck(L_8);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_8, L_10);
		// writer.WriteEndArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_11 = ___writer0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(71 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndArray() */, L_11);
		// }
		return;
	}
}
// System.Object Siccity.GLTFUtility.Converters.TranslationConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TranslationConverter_ReadJson_mEC5ACC38C6F549B2CB32B9EE3906FE756DC33E51 (TranslationConverter_t644636C700DB3129D6F337D22E15142506BFB385* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, Type_t* ___objectType1, RuntimeObject* ___existingValue2, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		// float[] floatArray = serializer.Deserialize<float[]>(reader);
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___serializer3;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_1 = ___reader0;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27(L_0, L_1, JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		V_0 = L_2;
		// return new Vector3(-floatArray[0], floatArray[1], floatArray[2]);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((-L_5)), L_8, L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12;
		RuntimeObject* L_14 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Boolean Siccity.GLTFUtility.Converters.TranslationConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TranslationConverter_CanConvert_m9CE3209DAB916845F9BB1C107FBC1552E89E4C79 (TranslationConverter_t644636C700DB3129D6F337D22E15142506BFB385* __this, Type_t* ___objectType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return objectType == typeof(Vector3);
		Type_t* L_0 = ___objectType0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Void Siccity.GLTFUtility.Converters.TranslationConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationConverter__ctor_m08CDB47D3D7A8C6A987C4E0D261781FFEA179755 (TranslationConverter_t644636C700DB3129D6F337D22E15142506BFB385* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Void Siccity.GLTFUtility.Converters.Vector2Converter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Converter_WriteJson_m2EC82B453C2899854C535E6CA0A3C504DF69AE63 (Vector2Converter_t1CDEF38521F312B7D847680142BCEF0B2FEA8033* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___value1, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer2, const RuntimeMethod* method) 
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
		// Vector2 pos = (Vector2) value;
		RuntimeObject* L_0 = ___value1;
		V_0 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))));
		// writer.WriteStartArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_1 = ___writer0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(70 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartArray() */, L_1);
		// writer.WriteValue(pos.x);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_2 = ___writer0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		float L_4 = L_3.___x_0;
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_2, L_4);
		// writer.WriteValue(pos.y);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_5 = ___writer0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		float L_7 = L_6.___y_1;
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_5, L_7);
		// writer.WriteEndArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_8 = ___writer0;
		NullCheck(L_8);
		VirtualActionInvoker0::Invoke(71 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndArray() */, L_8);
		// }
		return;
	}
}
// System.Object Siccity.GLTFUtility.Converters.Vector2Converter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Vector2Converter_ReadJson_m1C44C79E6122B83D4DF425CE2FAD25F6FB996D26 (Vector2Converter_t1CDEF38521F312B7D847680142BCEF0B2FEA8033* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, Type_t* ___objectType1, RuntimeObject* ___existingValue2, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// float[] floatArray = null;
		V_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL;
	}
	try
	{// begin try (depth: 1)
		// floatArray = serializer.Deserialize<float[]>(reader);
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___serializer3;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_1 = ___reader0;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27(L_0, L_1, JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		V_0 = L_2;
		// } catch (System.Exception) {
		goto IL_0022;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000d;
		}
		throw e;
	}

CATCH_000d:
	{// begin catch(System.Exception)
		// } catch (System.Exception) {
		// floatArray = new float[] { serializer.Deserialize<float>(reader) };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var)), (uint32_t)1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3;
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_5 = ___serializer3;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_6 = ___reader0;
		NullCheck(L_5);
		float L_7;
		L_7 = JsonSerializer_Deserialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD12C59EF3E0BDE9D3FFF50F818311CA6BC0A44CE(L_5, L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializer_Deserialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD12C59EF3E0BDE9D3FFF50F818311CA6BC0A44CE_RuntimeMethod_var)));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_7);
		V_0 = L_4;
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0022;
	}// end catch (depth: 1)

IL_0022:
	{
		// switch (floatArray.Length) {
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = V_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(((RuntimeArray*)L_8)->max_length));
		int32_t L_9 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_9, 1)))
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_005e;
			}
		}
	}
	{
		goto IL_006f;
	}

IL_003c:
	{
		// return new Vector2(floatArray[0], floatArray[0]); // just copy float
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		float L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = 0;
		float L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), L_12, L_15, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = L_16;
		RuntimeObject* L_18 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_17);
		return L_18;
	}

IL_004d:
	{
		// return new Vector2(floatArray[0], floatArray[1]);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = 0;
		float L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = 1;
		float L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_25), L_21, L_24, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = L_25;
		RuntimeObject* L_27 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_26);
		return L_27;
	}

IL_005e:
	{
		// return new Vector2(floatArray[0], floatArray[1]); // we dont need third float
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = 0;
		float L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = 1;
		float L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_34), L_30, L_33, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = L_34;
		RuntimeObject* L_36 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_35);
		return L_36;
	}

IL_006f:
	{
		// return new Vector2(1, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_37), (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = L_37;
		RuntimeObject* L_39 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_38);
		return L_39;
	}
}
// System.Boolean Siccity.GLTFUtility.Converters.Vector2Converter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2Converter_CanConvert_mE505480E15C00FEBFFC16A41F15137EE04B6E759 (Vector2Converter_t1CDEF38521F312B7D847680142BCEF0B2FEA8033* __this, Type_t* ___objectType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return objectType == typeof(Vector2);
		Type_t* L_0 = ___objectType0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Void Siccity.GLTFUtility.Converters.Vector2Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Converter__ctor_m7F29F61B0E4FDF145F33F25B5979A635A0EC42CB (Vector2Converter_t1CDEF38521F312B7D847680142BCEF0B2FEA8033* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Void Siccity.GLTFUtility.Converters.Vector3Converter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Converter_WriteJson_m0E70E8DC92AD278E6668CAEFBD9A3F1100AF92E6 (Vector3Converter_t6DB9162A4C801C111F24922629EB6BE05B30A9F7* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___value1, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer2, const RuntimeMethod* method) 
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
		// Vector3 pos = (Vector3) value;
		RuntimeObject* L_0 = ___value1;
		V_0 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		// writer.WriteStartArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_1 = ___writer0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(70 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartArray() */, L_1);
		// writer.WriteValue(pos.x);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_2 = ___writer0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4 = L_3.___x_2;
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_2, L_4);
		// writer.WriteValue(pos.y);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_5 = ___writer0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7 = L_6.___y_3;
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_5, L_7);
		// writer.WriteValue(pos.z);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_8 = ___writer0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = L_9.___z_4;
		NullCheck(L_8);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_8, L_10);
		// writer.WriteEndArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_11 = ___writer0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(71 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndArray() */, L_11);
		// }
		return;
	}
}
// System.Object Siccity.GLTFUtility.Converters.Vector3Converter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Vector3Converter_ReadJson_m6C73B47E26993B78AF219B394B21F4879AFCA3F3 (Vector3Converter_t6DB9162A4C801C111F24922629EB6BE05B30A9F7* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, Type_t* ___objectType1, RuntimeObject* ___existingValue2, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		// float[] floatArray = serializer.Deserialize<float[]>(reader);
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___serializer3;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_1 = ___reader0;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27(L_0, L_1, JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		V_0 = L_2;
		// return new Vector3(floatArray[0], floatArray[1], floatArray[2]);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_5, L_8, L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12;
		RuntimeObject* L_14 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Boolean Siccity.GLTFUtility.Converters.Vector3Converter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3Converter_CanConvert_m2661EB942A3144489DAAD245E854E7137F65F784 (Vector3Converter_t6DB9162A4C801C111F24922629EB6BE05B30A9F7* __this, Type_t* ___objectType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return objectType == typeof(Vector3);
		Type_t* L_0 = ___objectType0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Void Siccity.GLTFUtility.Converters.Vector3Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Converter__ctor_m73E4A6D4652242B34582613D7DE4E485B996D41A (Vector3Converter_t6DB9162A4C801C111F24922629EB6BE05B30A9F7* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
