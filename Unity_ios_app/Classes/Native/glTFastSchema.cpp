﻿#include "pch-cpp.hpp"

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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<System.UInt32>
struct IEnumerable_1_tF78C5A55C1D093F0B8CD95E0247BA2EE703D9D55;
// GLTFast.Schema.Accessor[]
struct AccessorU5BU5D_t3C2CD08CAD1DACB87D18453F6E1A0347BBEF2C72;
// GLTFast.Schema.AnimationChannel[]
struct AnimationChannelU5BU5D_tB034A39BA4A4B83958774B77506916FB5F760BEA;
// GLTFast.Schema.AnimationSampler[]
struct AnimationSamplerU5BU5D_t28CFF284E8C92AC88194A2A96CCE29EC24B30034;
// GLTFast.Schema.Buffer[]
struct BufferU5BU5D_t658DABFDF6B3A7F96045FD6AD4A5C0DFFD663170;
// GLTFast.Schema.BufferView[]
struct BufferViewU5BU5D_t80B6F1A5773CA56D8BBCBEBE5670EB5AF84F698E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// GLTFast.Schema.Camera[]
struct CameraU5BU5D_t254C5A84269CCB17BA401D903F24DFA1BA8F8B27;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// GLTFast.Schema.GltfAnimation[]
struct GltfAnimationU5BU5D_t1BCE1F59F3F7BC73982F35FFDD3CF614F093D4D3;
// GLTFast.Schema.Image[]
struct ImageU5BU5D_t6C84F64E9AE0C72E8AC5C1D081288D34977560D7;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// GLTFast.Schema.Material[]
struct MaterialU5BU5D_tCE6FAD730F95CC2861A8DA68C0C55D11472F292E;
// GLTFast.Schema.Mesh[]
struct MeshU5BU5D_t96E81748806E11C09FD868B0E75E54A0D0B93A4B;
// GLTFast.Schema.MeshPrimitive[]
struct MeshPrimitiveU5BU5D_tC39F55BE4E5D3AAFB80140CCBFD9541D394A0EC0;
// GLTFast.Schema.MorphTarget[]
struct MorphTargetU5BU5D_tB3CE0CA707BA21D44E56A688537C378262F25C7C;
// GLTFast.Schema.Node[]
struct NodeU5BU5D_t18BD668D63D4D0E91997B501FCEB7397701D46F9;
// GLTFast.Schema.Sampler[]
struct SamplerU5BU5D_t945916507CB2E6CDAC9521B8D7522F962104B213;
// GLTFast.Schema.Scene[]
struct SceneU5BU5D_t6620A91841857CC76517374B95229FBA2165D9F7;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// GLTFast.Schema.Skin[]
struct SkinU5BU5D_tAA27AB03DD8F3F3BB2835E07F246BEBCFAD173B3;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// GLTFast.Schema.Texture[]
struct TextureU5BU5D_t37329C5A4892837D0F5CBF3C364D75EAE7C1E9F6;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// GLTFast.Schema.Accessor
struct Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062;
// GLTFast.Schema.AccessorSparse
struct AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4;
// GLTFast.Schema.AccessorSparseIndices
struct AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C;
// GLTFast.Schema.AccessorSparseValues
struct AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E;
// GLTFast.Schema.AnimationChannel
struct AnimationChannel_t441D9B3D7A54F62EB85F217593485993153D3557;
// GLTFast.Schema.AnimationChannelTarget
struct AnimationChannelTarget_t9D13F47E0F508AC08B284FA0EE8E59BAFADD4F56;
// GLTFast.Schema.AnimationSampler
struct AnimationSampler_t439DDD9C345604D45A5D051AA40C440CD26B52A8;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// GLTFast.Schema.Asset
struct Asset_tBAD49FAA33C45350B619BF3D923C3A73A8982453;
// GLTFast.Schema.Attributes
struct Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// GLTFast.Schema.Buffer
struct Buffer_t47A7E9EBA4EF31CA3305CFDEC7717F3C96E36BA0;
// GLTFast.Schema.BufferSlice
struct BufferSlice_tD3ED9EDD12C93CF9E47B8C6A09551E5D2036764D;
// GLTFast.Schema.BufferView
struct BufferView_tA7E868125A221CC5221B38AE3F215390767834D1;
// GLTFast.Schema.BufferViewBase
struct BufferViewBase_tF706E75FF34AE31D9F158FA379D519C6487255C8;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// GLTFast.Schema.Camera
struct Camera_tF07308B27D535448829D7C97A8C54144DF18A9B5;
// GLTFast.Schema.CameraOrthographic
struct CameraOrthographic_t88A94D9229D65187D924A60C4FD63F1918D9FFBA;
// GLTFast.Schema.CameraPerspective
struct CameraPerspective_tF25DC017AB9F0ECFB1B573A84CCC784F0A4F3B6D;
// GLTFast.Schema.ClearCoat
struct ClearCoat_tC3E32154197623928989150AA64FDA8AD25EB6D2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// GLTFast.Schema.GltfAnimation
struct GltfAnimation_t4C1CEA25BD7667930E1BDF49F87B3F4906254341;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// GLTFast.Schema.Image
struct Image_t06216539D22FD8F64E39249C8F18DA87CE5EA7CB;
// GLTFast.Schema.JsonWriter
struct JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1;
// GLTFast.Schema.Material
struct Material_t1E37B852B5C4B73E91E59B4DD7ADED7B2A7D0470;
// GLTFast.Schema.MaterialExtension
struct MaterialExtension_t7E092301E5A7B753417790CB1E3FF5A0D6F27CF9;
// GLTFast.Schema.MaterialUnlit
struct MaterialUnlit_tFC8C1ACB8A8DFE956115E7FA14B28F69AFBCB5DF;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// GLTFast.Schema.Mesh
struct Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D;
// GLTFast.Schema.MeshExtras
struct MeshExtras_t0C9FC7300719D84651490B4FBB3BC69CEC86BB3E;
// GLTFast.Schema.MeshGpuInstancing
struct MeshGpuInstancing_t5B623601E3413EF0C7CC6F0D059515319D93AD04;
// GLTFast.Schema.MeshPrimitive
struct MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31;
// GLTFast.Schema.MeshPrimitiveExtensions
struct MeshPrimitiveExtensions_tA62DDD2175422FB2E152CA59BA33AFEA49FD713C;
// GLTFast.Schema.MorphTarget
struct MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092;
// GLTFast.Schema.Node
struct Node_t2E23D131CBC25EF198B717957ADA306EF4EA3998;
// GLTFast.Schema.NodeExtensions
struct NodeExtensions_tAADE3087978CF3793142C14BCDBEE07F2CC3381C;
// GLTFast.Schema.NormalTextureInfo
struct NormalTextureInfo_tFFD5E2FA7AA9C491D6CFF02FDC8EF24253602F55;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// GLTFast.Schema.OcclusionTextureInfo
struct OcclusionTextureInfo_t5F9255E7CD563F28A96C07486D589CC492357833;
// GLTFast.Schema.PbrMetallicRoughness
struct PbrMetallicRoughness_t1969AD2EB37D63AC503B44C586A934122E0B413E;
// GLTFast.Schema.PbrSpecularGlossiness
struct PbrSpecularGlossiness_t2D28D6A9133D79AB5C63A51C7C7E9AF6D48F562E;
// GLTFast.Schema.Root
struct Root_tBD536179054FA5061EEA02C441474F8B279E7DE8;
// GLTFast.Schema.RootChild
struct RootChild_t8F14572E443B762F00ECC295238A807C02F190B5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// GLTFast.Schema.Sampler
struct Sampler_t107484F70B663B848B559573EBF6A6E12DC7DED0;
// GLTFast.Schema.Scene
struct Scene_t4422FC4D5D24EE9AA6498181AB3D094DD242C7F7;
// GLTFast.Schema.Sheen
struct Sheen_t0094B5B81DE3992372C87D0746D4499F1980700E;
// GLTFast.Schema.Skin
struct Skin_tCC1AFC24DECD2B9715FF6090D0C7211290B5A077;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// GLTFast.Schema.Texture
struct Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// GLTFast.Schema.TextureExtension
struct TextureExtension_t115DCE6DCFAC652D0E7AFD58D792A1369331B3B2;
// GLTFast.Schema.TextureFormat
struct TextureFormat_tC51CEB235E78E6CA2D03E3A58F712B67D65AB5AC;
// GLTFast.Schema.TextureInfo
struct TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22;
// GLTFast.Schema.TextureInfoExtension
struct TextureInfoExtension_t4C6FD82D020CDCEE2DFFEC8C7430537E6D679E81;
// GLTFast.Schema.TextureTransform
struct TextureTransform_t052225DA5062D00CE7BA277D5EB6AD73BA372E22;
// GLTFast.Schema.Transmission
struct Transmission_tF6BE28205152A92C29C29FF652B2A069DC1273A7;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// GLTFast.Schema.MeshGpuInstancing/Attributes
struct Attributes_tB68862771132AC61C3C3E355DFDED8B11A5C4638;

IL2CPP_EXTERN_C RuntimeClass* AlphaMode_tC5BB461992585479014FD87C11A1CC560733A922_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DrawMode_t227FDC53B5754CB0E70784BED7FE1087A4DCB551_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GLTFAccessorAttributeType_t794AEB6586736F9E4F6631135595725AA72DC92F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GLTFComponentType_tD796933CF2978D626EF93C1078DC2C1822952E21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t736E9F8BD2FD38A5E9EA2E8A510AFED788D05010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterpolationType_tA18AA3E8E54F72CD0EC6CDFDC831FB457C62989F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshPrimitiveU5BU5D_tC39F55BE4E5D3AAFB80140CCBFD9541D394A0EC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t87A6E68FC2864A5AD60EFF4C0531F8CA1C19345F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t8C9B203D9A71F4B36EDCECF89FC2B34CDDBE76C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tC1E358237C258EFD324DF2AB7D6BFA4A886E1427____8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tC1E358237C258EFD324DF2AB7D6BFA4A886E1427____F6BB1294DA2F78CD935B01C7656280DF5EAA0439E9D97BC03775825A41A508E4_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00EE2035D1C1084808BE268F9D59D68FF8B3154B;
IL2CPP_EXTERN_C String_t* _stringLiteral043F6A61FD0A9CF24ECBF3D68E6902E93443AFFD;
IL2CPP_EXTERN_C String_t* _stringLiteral0653373E4E9ADC8A681764C68A7F4849F49EEF86;
IL2CPP_EXTERN_C String_t* _stringLiteral070EF86811C43BE9AB432A8290CA3F5A323C9E10;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0D339F2F458AA6A1387A1EBA67B3DEAD3E5230A7;
IL2CPP_EXTERN_C String_t* _stringLiteral0F0F6BC825F919DB3AB672DFC7E511423455FA92;
IL2CPP_EXTERN_C String_t* _stringLiteral100B3F946A4D93342EECF3906D8FF6DECC4DF094;
IL2CPP_EXTERN_C String_t* _stringLiteral1026C86B6040E33B9E24719041286454A2CE5C2F;
IL2CPP_EXTERN_C String_t* _stringLiteral10C63C8C602DD5E38BE4A758C90EBAC324CD3E69;
IL2CPP_EXTERN_C String_t* _stringLiteral13D944F6ACCBA9EB6B282C2384FC41E6B8E94E9D;
IL2CPP_EXTERN_C String_t* _stringLiteral1B97189B3FCE25069F6D673644085539059D93A4;
IL2CPP_EXTERN_C String_t* _stringLiteral2033066FF26846A7FA1DEF97FAA1797F23C50E73;
IL2CPP_EXTERN_C String_t* _stringLiteral27112AD44D1995824E01C0A9376F5CA4C9614E36;
IL2CPP_EXTERN_C String_t* _stringLiteral29FD32A08F50D27AE9CA11E8B880A56E8B1AFC03;
IL2CPP_EXTERN_C String_t* _stringLiteral2A0C50F3F35B6C73E92E7A50828B4242E5ED7B1A;
IL2CPP_EXTERN_C String_t* _stringLiteral2A47A30B4F70A2FBDC2C08E3C1841D8EF3F70D07;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral2B9F3A874AA67D4C8174AAA11EAA3758092CE0B3;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral2E3569C3B3595933B8E2F60AC56BCC2F7E4BF5D0;
IL2CPP_EXTERN_C String_t* _stringLiteral2FEACB1CEF183D510D9DE04DCA9FC572D7474C4E;
IL2CPP_EXTERN_C String_t* _stringLiteral320772EF40302B49A179DB96BAD02224E97B4018;
IL2CPP_EXTERN_C String_t* _stringLiteral32D308F08E201660A1A1B244F9AF831CDBFC2635;
IL2CPP_EXTERN_C String_t* _stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED;
IL2CPP_EXTERN_C String_t* _stringLiteral345417A9D85EC28975186A2D91654A1179606230;
IL2CPP_EXTERN_C String_t* _stringLiteral37B97248AD78DD69BA3DF192A954DA136A0917D3;
IL2CPP_EXTERN_C String_t* _stringLiteral39153503F0F293852311B939BA0FA37C5B23D23D;
IL2CPP_EXTERN_C String_t* _stringLiteral3DE37F9E97BD49711DF82ED1813CB74AD1DE0C49;
IL2CPP_EXTERN_C String_t* _stringLiteral41159E86A16FE5FE328FD5E826383482C6CB3C3F;
IL2CPP_EXTERN_C String_t* _stringLiteral44236CDB4610C296B357B89A3F9D59665B85780F;
IL2CPP_EXTERN_C String_t* _stringLiteral45EFB131CC04D173E0ABD4160CB1A07A5C6A6B6F;
IL2CPP_EXTERN_C String_t* _stringLiteral47946D04F733BF1B11730B7147B6BDC368A3A301;
IL2CPP_EXTERN_C String_t* _stringLiteral487FB12733D18F5A81C83259BFC39D4A441997D9;
IL2CPP_EXTERN_C String_t* _stringLiteral48DCDDA5B8784939FEE419112A3C8D5268F8A7B9;
IL2CPP_EXTERN_C String_t* _stringLiteral499284EE1D3CD7FE549A05AE5F4E78D079B96018;
IL2CPP_EXTERN_C String_t* _stringLiteral4A41148E29B06B1BC6EE651FC3A5C2400ADA79B9;
IL2CPP_EXTERN_C String_t* _stringLiteral4D78A26E6D27FCFE02FCE139BDBB407790B95DD6;
IL2CPP_EXTERN_C String_t* _stringLiteral4DC0ECF676CDB8466A06C299A2E315606DFC00BD;
IL2CPP_EXTERN_C String_t* _stringLiteral4DEE2D2BC203305D29C09810A2DF5A0778C06F07;
IL2CPP_EXTERN_C String_t* _stringLiteral4DF417DF46EF8A7C67D3A1FE0CC53DCF5212FC81;
IL2CPP_EXTERN_C String_t* _stringLiteral53886AC1470B3B3993A9EF525A0008E45B9CA789;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral561EB5B5AB6D3735847A6A77E3B0707F8DD6B930;
IL2CPP_EXTERN_C String_t* _stringLiteral563E1460168EA54A80919DA3A2C91EDC081445AA;
IL2CPP_EXTERN_C String_t* _stringLiteral5C0C3B05058E50D3C7B355CCA9C5B0BEE36C10E5;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral69F359B71F6F4DE78ABF7256A90B314F213EE57E;
IL2CPP_EXTERN_C String_t* _stringLiteral6B73C38F0EE0B751F38BB9BAF16A261EDAD7E731;
IL2CPP_EXTERN_C String_t* _stringLiteral6C497E20DCC43A8DDA561C73D787C08DAF284123;
IL2CPP_EXTERN_C String_t* _stringLiteral6C82574B38F4CEF9062EB629499DF893EE0427F4;
IL2CPP_EXTERN_C String_t* _stringLiteral6E651D43A8CF7AA546CAE5214C19769E2368D899;
IL2CPP_EXTERN_C String_t* _stringLiteral703A99C057D965D9989DA263201D24BBDDB68198;
IL2CPP_EXTERN_C String_t* _stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral78977E804098519D064862AB672E526435A235E1;
IL2CPP_EXTERN_C String_t* _stringLiteral7929D47072FE1BD0F03D59F11A3F594258A4BEEC;
IL2CPP_EXTERN_C String_t* _stringLiteral79E88D091421691C53CC28304934AC732EC25429;
IL2CPP_EXTERN_C String_t* _stringLiteral7C800E39CF656105FB08CCBDF7383FACFDB73DF7;
IL2CPP_EXTERN_C String_t* _stringLiteral7CBEDCD5FF6A0350179E0A1A9BEB1BCEC50F3773;
IL2CPP_EXTERN_C String_t* _stringLiteral7DAA3A0850A075E4A1FAB047315D81AFDDF0B2CF;
IL2CPP_EXTERN_C String_t* _stringLiteral7E052760968B31170B95FE09256C1585EFC757F1;
IL2CPP_EXTERN_C String_t* _stringLiteral80556002D409488C4FB7323587E9C41461C3F94A;
IL2CPP_EXTERN_C String_t* _stringLiteral83159D84316821921FC3B0CB9EF5B8B035C956D1;
IL2CPP_EXTERN_C String_t* _stringLiteral83378476BA7EF7039CCA1C937F64812A70AE4BA9;
IL2CPP_EXTERN_C String_t* _stringLiteral8AE5CBC2982431FE3F0537E6A7810E68D24DA7CA;
IL2CPP_EXTERN_C String_t* _stringLiteral8DD345FD5E347B928556D65DD49780B8BC5D7267;
IL2CPP_EXTERN_C String_t* _stringLiteral96FB3CF66DF1D3FDD921445943B64189A149ED40;
IL2CPP_EXTERN_C String_t* _stringLiteral98EE367413202474EAC3A7C4C1CF744755804C19;
IL2CPP_EXTERN_C String_t* _stringLiteral99071261C0C878413AA8F4FCEB8DB2B580ED14A0;
IL2CPP_EXTERN_C String_t* _stringLiteral9B79ADB84DC8576E1E5CB86C3C23AC1507D608B5;
IL2CPP_EXTERN_C String_t* _stringLiteral9C2ADAF9F589DE3E55AE9747E5ED55C57F5DA9A7;
IL2CPP_EXTERN_C String_t* _stringLiteral9DFFBF3AF751E079B1C9570BBBAA70372C59D1D9;
IL2CPP_EXTERN_C String_t* _stringLiteralA25C69590D313E80E32DAF839FFE871D0B53E5EB;
IL2CPP_EXTERN_C String_t* _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0;
IL2CPP_EXTERN_C String_t* _stringLiteralA47504598030EDA5230F4D04BF6F4728D7CF126D;
IL2CPP_EXTERN_C String_t* _stringLiteralA7F00519435FC33A7E48F0FCF6CB6D9B257C0DAA;
IL2CPP_EXTERN_C String_t* _stringLiteralAB1C16C2009D328CC2411BAA019F939F08970181;
IL2CPP_EXTERN_C String_t* _stringLiteralAC1DA0C9D92BC0EA9929BB82A21C30BE100C3F3F;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBE71D746FDB893CE627C5F97FEE59638767E8951;
IL2CPP_EXTERN_C String_t* _stringLiteralC1FF6CF2875BCE1475CD83F7A3209CE68FB48001;
IL2CPP_EXTERN_C String_t* _stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10;
IL2CPP_EXTERN_C String_t* _stringLiteralCB662A576323ABD7C7E8DBEF290C585C8E58B10A;
IL2CPP_EXTERN_C String_t* _stringLiteralCE0197159B309E4A12263D0785D896AD462D3349;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052;
IL2CPP_EXTERN_C String_t* _stringLiteralD90348CE9BDE9F3CE8DC222D3D4EE1C8468911A4;
IL2CPP_EXTERN_C String_t* _stringLiteralDAB2275E8007B168CDE1F8D76F730FC2D04BC691;
IL2CPP_EXTERN_C String_t* _stringLiteralE0B97587CDEEE52C4D60DC4F0F2694D006C01876;
IL2CPP_EXTERN_C String_t* _stringLiteralE0FDE161BC072ACFCD297CD594EE27B150664F3E;
IL2CPP_EXTERN_C String_t* _stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0;
IL2CPP_EXTERN_C String_t* _stringLiteralE439A4E21AD1D3C286BF2B095A23B35317A5475A;
IL2CPP_EXTERN_C String_t* _stringLiteralE52C5B21D4F4C6CC493CA0C74175DA263FD149F4;
IL2CPP_EXTERN_C String_t* _stringLiteralE6770C3A83A774E8EF77448D689E51254082440A;
IL2CPP_EXTERN_C String_t* _stringLiteralE6CF23A4D343EA2340277D3E6D4C1E83BD5134DE;
IL2CPP_EXTERN_C String_t* _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF;
IL2CPP_EXTERN_C String_t* _stringLiteralEC5621377AD9B4098EC3FB34AF35BAA9E6C07B64;
IL2CPP_EXTERN_C String_t* _stringLiteralEC77027805B1651EF89F819873354A55A93A7C4A;
IL2CPP_EXTERN_C String_t* _stringLiteralED45B89EABB07A258D2E4684BA82B3622E6C194F;
IL2CPP_EXTERN_C String_t* _stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B;
IL2CPP_EXTERN_C String_t* _stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79;
IL2CPP_EXTERN_C String_t* _stringLiteralF9F7B02C31DDA99DC72E6A6212C308FDD1C99628;
IL2CPP_EXTERN_C String_t* _stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6;
IL2CPP_EXTERN_C String_t* _stringLiteralFE02B32393C85D2BD3F88186E2A4E153AAFDBA23;
IL2CPP_EXTERN_C String_t* _stringLiteralFFF034CB8914370608177D623EBF6B0AFD16C6E0;
IL2CPP_EXTERN_C const RuntimeMethod* Accessor_GetAccessorAttributeTypeLength_m23FB051A63D6A37D227A1692D782746440FC9062_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Accessor_GetAccessorAttributeType_m1525CAE36F6725D238B9E0FA31B46E623FE3C2E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Accessor_GetComponentTypeSize_mB85376D5CC503C5ADAC641A07855576DA28A2B28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Accessor_GetComponentType_m401D4FB2E6713B98615C2453B932FBE457294226_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationChannelTarget_GltfSerialize_m96555A3E9793FE7EC4594881425E635AEF003DCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationChannel_GltfSerialize_m4608BDE2B0FC4983AEEC36EFDEACD2D9705F1DF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Camera_GltfSerialize_m89372E15B88CAF2B89C51BB608670C14BCAE7B1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClearCoat_GltfSerialize_mBA3F01E26035C195F2CDBBAE3CA0AFC01316F85A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GltfAnimation_GltfSerialize_m173CD2966371748A472B9DC4CDA61155548E4930_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashCode_Combine_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m230136A07D20B826D29A4C7BC5F585AC7469A5E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_AddArrayProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF4EDAAD77CF499B7C690F324945D68E9D889EBC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_AddProperty_TisGLTFComponentType_tD796933CF2978D626EF93C1078DC2C1822952E21_m061CF0C897D0BF4C17174476F9F8202221784475_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_AddProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0CF21958C74B8155CD6123F3773B239B87935FB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshGpuInstancing_GltfSerialize_mBFAC3E5DECC99E7F47047FD6AA07590445081BDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m1F22CA905CFB38D5358233765EC86457ADA36643_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m203A376A0AE894BD4288351A68585CF811118A85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m2A50829A5A43E5A6F969AA424DE364958591ABFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mBAC04596974DD7BC3BC7932BF6501E21E6CD0BA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mE42EBBBFBD93A0BE1351B026DBDF6CE9DCD45D99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mA82027DA1E2A2249CC4122EB2F2FB5988BB882A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC2357292D9339B73EED2D780E1F7F4DDB5037CE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PbrSpecularGlossiness_GltfSerialize_mC419605950B41988A1B1BFE6BA8433524ED5DC7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Sheen_GltfSerialize_mAE750F75EAE9D911E593860F59E944876370877D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Skin_GltfSerialize_m03433B738197BA6A507A92F816DCD070793B13A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureExtension_GltfSerialize_m2C190DEEAFC1E8FFB0AA0B8D970F645A48A56986_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Transmission_GltfSerialize_mD7044B23F9ED8B3EF1C691A891E886C184731EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AlphaMode_tC5BB461992585479014FD87C11A1CC560733A922_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GLTFAccessorAttributeType_t794AEB6586736F9E4F6631135595725AA72DC92F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InterpolationType_tA18AA3E8E54F72CD0EC6CDFDC831FB457C62989F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Path_t87A6E68FC2864A5AD60EFF4C0531F8CA1C19345F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Type_t8C9B203D9A71F4B36EDCECF89FC2B34CDDBE76C5_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AccessorU5BU5D_t3C2CD08CAD1DACB87D18453F6E1A0347BBEF2C72;
struct BufferU5BU5D_t658DABFDF6B3A7F96045FD6AD4A5C0DFFD663170;
struct BufferViewU5BU5D_t80B6F1A5773CA56D8BBCBEBE5670EB5AF84F698E;
struct CameraU5BU5D_t254C5A84269CCB17BA401D903F24DFA1BA8F8B27;
struct GltfAnimationU5BU5D_t1BCE1F59F3F7BC73982F35FFDD3CF614F093D4D3;
struct ImageU5BU5D_t6C84F64E9AE0C72E8AC5C1D081288D34977560D7;
struct MaterialU5BU5D_tCE6FAD730F95CC2861A8DA68C0C55D11472F292E;
struct MeshU5BU5D_t96E81748806E11C09FD868B0E75E54A0D0B93A4B;
struct MeshPrimitiveU5BU5D_tC39F55BE4E5D3AAFB80140CCBFD9541D394A0EC0;
struct MorphTargetU5BU5D_tB3CE0CA707BA21D44E56A688537C378262F25C7C;
struct NodeU5BU5D_t18BD668D63D4D0E91997B501FCEB7397701D46F9;
struct SamplerU5BU5D_t945916507CB2E6CDAC9521B8D7522F962104B213;
struct SceneU5BU5D_t6620A91841857CC76517374B95229FBA2165D9F7;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct SkinU5BU5D_tAA27AB03DD8F3F3BB2835E07F246BEBCFAD173B3;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TextureU5BU5D_t37329C5A4892837D0F5CBF3C364D75EAE7C1E9F6;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t70A0C26CD1A314699194D61BAC15F55C412841CA 
{
};

// GLTFast.Schema.Accessor
struct Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062  : public RuntimeObject
{
	// System.Int32 GLTFast.Schema.Accessor::bufferView
	int32_t ___bufferView_0;
	// System.Int32 GLTFast.Schema.Accessor::byteOffset
	int32_t ___byteOffset_1;
	// GLTFast.Schema.GLTFComponentType GLTFast.Schema.Accessor::componentType
	int32_t ___componentType_2;
	// System.Boolean GLTFast.Schema.Accessor::normalized
	bool ___normalized_3;
	// System.Int32 GLTFast.Schema.Accessor::count
	int32_t ___count_4;
	// System.String GLTFast.Schema.Accessor::type
	String_t* ___type_5;
	// GLTFast.Schema.GLTFAccessorAttributeType GLTFast.Schema.Accessor::_typeEnum
	uint8_t ____typeEnum_6;
	// System.Single[] GLTFast.Schema.Accessor::max
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___max_7;
	// System.Single[] GLTFast.Schema.Accessor::min
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___min_8;
	// GLTFast.Schema.AccessorSparse GLTFast.Schema.Accessor::sparse
	AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* ___sparse_9;
};

// GLTFast.Schema.AccessorSparse
struct AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4  : public RuntimeObject
{
	// System.Int32 GLTFast.Schema.AccessorSparse::count
	int32_t ___count_0;
	// GLTFast.Schema.AccessorSparseIndices GLTFast.Schema.AccessorSparse::indices
	AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C* ___indices_1;
	// GLTFast.Schema.AccessorSparseValues GLTFast.Schema.AccessorSparse::values
	AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E* ___values_2;
};

// GLTFast.Schema.AccessorSparseIndices
struct AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C  : public RuntimeObject
{
	// System.UInt32 GLTFast.Schema.AccessorSparseIndices::bufferView
	uint32_t ___bufferView_0;
	// System.Int32 GLTFast.Schema.AccessorSparseIndices::byteOffset
	int32_t ___byteOffset_1;
	// GLTFast.Schema.GLTFComponentType GLTFast.Schema.AccessorSparseIndices::componentType
	int32_t ___componentType_2;
};

// GLTFast.Schema.AccessorSparseValues
struct AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E  : public RuntimeObject
{
	// System.UInt32 GLTFast.Schema.AccessorSparseValues::bufferView
	uint32_t ___bufferView_0;
	// System.Int32 GLTFast.Schema.AccessorSparseValues::byteOffset
	int32_t ___byteOffset_1;
};

// GLTFast.Schema.AnimationChannel
struct AnimationChannel_t441D9B3D7A54F62EB85F217593485993153D3557  : public RuntimeObject
{
	// System.Int32 GLTFast.Schema.AnimationChannel::sampler
	int32_t ___sampler_0;
	// GLTFast.Schema.AnimationChannelTarget GLTFast.Schema.AnimationChannel::target
	AnimationChannelTarget_t9D13F47E0F508AC08B284FA0EE8E59BAFADD4F56* ___target_1;
};

// GLTFast.Schema.AnimationChannelTarget
struct AnimationChannelTarget_t9D13F47E0F508AC08B284FA0EE8E59BAFADD4F56  : public RuntimeObject
{
	// System.Int32 GLTFast.Schema.AnimationChannelTarget::node
	int32_t ___node_0;
	// System.String GLTFast.Schema.AnimationChannelTarget::path
	String_t* ___path_1;
	// GLTFast.Schema.AnimationChannel/Path GLTFast.Schema.AnimationChannelTarget::m_Path
	int32_t ___m_Path_2;
};

// GLTFast.Schema.AnimationSampler
struct AnimationSampler_t439DDD9C345604D45A5D051AA40C440CD26B52A8  : public RuntimeObject
{
	// System.Int32 GLTFast.Schema.AnimationSampler::input
	int32_t ___input_0;
	// System.String GLTFast.Schema.AnimationSampler::interpolation
	String_t* ___interpolation_1;
	// GLTFast.Schema.InterpolationType GLTFast.Schema.AnimationSampler::m_Interpolation
	int32_t ___m_Interpolation_2;
	// System.Int32 GLTFast.Schema.AnimationSampler::output
	int32_t ___output_3;
};
struct Il2CppArrayBounds;

// GLTFast.Schema.Asset
struct Asset_tBAD49FAA33C45350B619BF3D923C3A73A8982453  : public RuntimeObject
{
	// System.String GLTFast.Schema.Asset::copyright
	String_t* ___copyright_0;
	// System.String GLTFast.Schema.Asset::generator
	String_t* ___generator_1;
	// System.String GLTFast.Schema.Asset::version
	String_t* ___version_2;
	// System.String GLTFast.Schema.Asset::minVersion
	String_t* ___minVersion_3;
};

// GLTFast.Schema.Attributes
struct Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207  : public RuntimeObject
{
	// System.Int32 GLTFast.Schema.Attributes::POSITION
	int32_t ___POSITION_0;
	// System.Int32 GLTFast.Schema.Attributes::NORMAL
	int32_t ___NORMAL_1;
	// System.Int32 GLTFast.Schema.Attributes::TANGENT
	int32_t ___TANGENT_2;
	// System.Int32 GLTFast.Schema.Attributes::TEXCOORD_0
	int32_t ___TEXCOORD_0_3;
	// System.Int32 GLTFast.Schema.Attributes::TEXCOORD_1
	int32_t ___TEXCOORD_1_4;
	// System.Int32 GLTFast.Schema.Attributes::TEXCOORD_2
	int32_t ___TEXCOORD_2_5;
	// System.Int32 GLTFast.Schema.Attributes::TEXCOORD_3
	int32_t ___TEXCOORD_3_6;
	// System.Int32 GLTFast.Schema.Attributes::TEXCOORD_4
	int32_t ___TEXCOORD_4_7;
	// System.Int32 GLTFast.Schema.Attributes::TEXCOORD_5
	int32_t ___TEXCOORD_5_8;
	// System.Int32 GLTFast.Schema.Attributes::TEXCOORD_6
	int32_t ___TEXCOORD_6_9;
	// System.Int32 GLTFast.Schema.Attributes::TEXCOORD_7
	int32_t ___TEXCOORD_7_10;
	// System.Int32 GLTFast.Schema.Attributes::COLOR_0
	int32_t ___COLOR_0_11;
	// System.Int32 GLTFast.Schema.Attributes::JOINTS_0
	int32_t ___JOINTS_0_12;
	// System.Int32 GLTFast.Schema.Attributes::WEIGHTS_0
	int32_t ___WEIGHTS_0_13;
};

// GLTFast.Schema.Buffer
struct Buffer_t47A7E9EBA4EF31CA3305CFDEC7717F3C96E36BA0  : public RuntimeObject
{
	// System.UInt32 GLTFast.Schema.Buffer::byteLength
	uint32_t ___byteLength_0;
	// System.String GLTFast.Schema.Buffer::uri
	String_t* ___uri_1;
};

// GLTFast.Schema.BufferSlice
struct BufferSlice_tD3ED9EDD12C93CF9E47B8C6A09551E5D2036764D  : public RuntimeObject
{
	// System.Int32 GLTFast.Schema.BufferSlice::byteOffset
	int32_t ___byteOffset_0;
	// System.Int32 GLTFast.Schema.BufferSlice::byteLength
	int32_t ___byteLength_1;
};

// GLTFast.Schema.CameraOrthographic
struct CameraOrthographic_t88A94D9229D65187D924A60C4FD63F1918D9FFBA  : public RuntimeObject
{
	// System.Single GLTFast.Schema.CameraOrthographic::xmag
	float ___xmag_0;
	// System.Single GLTFast.Schema.CameraOrthographic::ymag
	float ___ymag_1;
	// System.Single GLTFast.Schema.CameraOrthographic::zfar
	float ___zfar_2;
	// System.Single GLTFast.Schema.CameraOrthographic::znear
	float ___znear_3;
};

// GLTFast.Schema.CameraPerspective
struct CameraPerspective_tF25DC017AB9F0ECFB1B573A84CCC784F0A4F3B6D  : public RuntimeObject
{
	// System.Single GLTFast.Schema.CameraPerspective::aspectRatio
	float ___aspectRatio_0;
	// System.Single GLTFast.Schema.CameraPerspective::yfov
	float ___yfov_1;
	// System.Single GLTFast.Schema.CameraPerspective::zfar
	float ___zfar_2;
	// System.Single GLTFast.Schema.CameraPerspective::znear
	float ___znear_3;
};

// GLTFast.Schema.ClearCoat
struct ClearCoat_tC3E32154197623928989150AA64FDA8AD25EB6D2  : public RuntimeObject
{
	// System.Single GLTFast.Schema.ClearCoat::clearcoatFactor
	float ___clearcoatFactor_0;
	// GLTFast.Schema.TextureInfo GLTFast.Schema.ClearCoat::clearcoatTexture
	TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* ___clearcoatTexture_1;
	// System.Single GLTFast.Schema.ClearCoat::clearcoatRoughnessFactor
	float ___clearcoatRoughnessFactor_2;
	// GLTFast.Schema.TextureInfo GLTFast.Schema.ClearCoat::clearcoatRoughnessTexture
	TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* ___clearcoatRoughnessTexture_3;
	// GLTFast.Schema.TextureInfo GLTFast.Schema.ClearCoat::clearcoatNormalTexture
	TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* ___clearcoatNormalTexture_4;
};

// GLTFast.Schema.Constants
struct Constants_t929C9ABC4C52E90A60DAF12CA0847CC2D4FC6375  : public RuntimeObject
{
};

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

// GLTFast.Schema.JsonWriter
struct JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1  : public RuntimeObject
{
	// System.IO.StreamWriter GLTFast.Schema.JsonWriter::m_Stream
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___m_Stream_0;
	// System.Boolean GLTFast.Schema.JsonWriter::separation
	bool ___separation_1;
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

// GLTFast.Schema.MaterialExtension
struct MaterialExtension_t7E092301E5A7B753417790CB1E3FF5A0D6F27CF9  : public RuntimeObject
{
	// GLTFast.Schema.PbrSpecularGlossiness GLTFast.Schema.MaterialExtension::KHR_materials_pbrSpecularGlossiness
	PbrSpecularGlossiness_t2D28D6A9133D79AB5C63A51C7C7E9AF6D48F562E* ___KHR_materials_pbrSpecularGlossiness_0;
	// GLTFast.Schema.MaterialUnlit GLTFast.Schema.MaterialExtension::KHR_materials_unlit
	MaterialUnlit_tFC8C1ACB8A8DFE956115E7FA14B28F69AFBCB5DF* ___KHR_materials_unlit_1;
	// GLTFast.Schema.Transmission GLTFast.Schema.MaterialExtension::KHR_materials_transmission
	Transmission_tF6BE28205152A92C29C29FF652B2A069DC1273A7* ___KHR_materials_transmission_2;
	// GLTFast.Schema.ClearCoat GLTFast.Schema.MaterialExtension::KHR_materials_clearcoat
	ClearCoat_tC3E32154197623928989150AA64FDA8AD25EB6D2* ___KHR_materials_clearcoat_3;
	// GLTFast.Schema.Sheen GLTFast.Schema.MaterialExtension::KHR_materials_sheen
	Sheen_t0094B5B81DE3992372C87D0746D4499F1980700E* ___KHR_materials_sheen_4;
};

// GLTFast.Schema.MaterialUnlit
struct MaterialUnlit_tFC8C1ACB8A8DFE956115E7FA14B28F69AFBCB5DF  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// GLTFast.Schema.MeshExtras
struct MeshExtras_t0C9FC7300719D84651490B4FBB3BC69CEC86BB3E  : public RuntimeObject
{
	// System.String[] GLTFast.Schema.MeshExtras::targetNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___targetNames_0;
};

// GLTFast.Schema.MeshGpuInstancing
struct MeshGpuInstancing_t5B623601E3413EF0C7CC6F0D059515319D93AD04  : public RuntimeObject
{
	// GLTFast.Schema.MeshGpuInstancing/Attributes GLTFast.Schema.MeshGpuInstancing::attributes
	Attributes_tB68862771132AC61C3C3E355DFDED8B11A5C4638* ___attributes_0;
};

// GLTFast.Schema.MeshPrimitive
struct MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31  : public RuntimeObject
{
	// GLTFast.Schema.Attributes GLTFast.Schema.MeshPrimitive::attributes
	Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207* ___attributes_0;
	// System.Int32 GLTFast.Schema.MeshPrimitive::indices
	int32_t ___indices_1;
	// System.Int32 GLTFast.Schema.MeshPrimitive::material
	int32_t ___material_2;
	// GLTFast.Schema.DrawMode GLTFast.Schema.MeshPrimitive::mode
	int32_t ___mode_3;
	// GLTFast.Schema.MorphTarget[] GLTFast.Schema.MeshPrimitive::targets
	MorphTargetU5BU5D_tB3CE0CA707BA21D44E56A688537C378262F25C7C* ___targets_4;
	// GLTFast.Schema.MeshPrimitiveExtensions GLTFast.Schema.MeshPrimitive::extensions
	MeshPrimitiveExtensions_tA62DDD2175422FB2E152CA59BA33AFEA49FD713C* ___extensions_5;
};

// GLTFast.Schema.MeshPrimitiveExtensions
struct MeshPrimitiveExtensions_tA62DDD2175422FB2E152CA59BA33AFEA49FD713C  : public RuntimeObject
{
};

// GLTFast.Schema.MorphTarget
struct MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092  : public RuntimeObject
{
	// System.Int32 GLTFast.Schema.MorphTarget::POSITION
	int32_t ___POSITION_0;
	// System.Int32 GLTFast.Schema.MorphTarget::NORMAL
	int32_t ___NORMAL_1;
	// System.Int32 GLTFast.Schema.MorphTarget::TANGENT
	int32_t ___TANGENT_2;
};

// GLTFast.Schema.NodeExtensions
struct NodeExtensions_tAADE3087978CF3793142C14BCDBEE07F2CC3381C  : public RuntimeObject
{
	// GLTFast.Schema.MeshGpuInstancing GLTFast.Schema.NodeExtensions::EXT_mesh_gpu_instancing
	MeshGpuInstancing_t5B623601E3413EF0C7CC6F0D059515319D93AD04* ___EXT_mesh_gpu_instancing_0;
};

// GLTFast.Schema.PbrMetallicRoughness
struct PbrMetallicRoughness_t1969AD2EB37D63AC503B44C586A934122E0B413E  : public RuntimeObject
{
	// System.Single[] GLTFast.Schema.PbrMetallicRoughness::baseColorFactor
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___baseColorFactor_0;
	// GLTFast.Schema.TextureInfo GLTFast.Schema.PbrMetallicRoughness::baseColorTexture
	TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* ___baseColorTexture_1;
	// System.Single GLTFast.Schema.PbrMetallicRoughness::metallicFactor
	float ___metallicFactor_2;
	// System.Single GLTFast.Schema.PbrMetallicRoughness::roughnessFactor
	float ___roughnessFactor_3;
	// GLTFast.Schema.TextureInfo GLTFast.Schema.PbrMetallicRoughness::metallicRoughnessTexture
	TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* ___metallicRoughnessTexture_4;
};

// GLTFast.Schema.PbrSpecularGlossiness
struct PbrSpecularGlossiness_t2D28D6A9133D79AB5C63A51C7C7E9AF6D48F562E  : public RuntimeObject
{
	// System.Single[] GLTFast.Schema.PbrSpecularGlossiness::diffuseFactor
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___diffuseFactor_0;
	// GLTFast.Schema.TextureInfo GLTFast.Schema.PbrSpecularGlossiness::diffuseTexture
	TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* ___diffuseTexture_1;
	// System.Single[] GLTFast.Schema.PbrSpecularGlossiness::specularFactor
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___specularFactor_2;
	// System.Single GLTFast.Schema.PbrSpecularGlossiness::glossinessFactor
	float ___glossinessFactor_3;
	// GLTFast.Schema.TextureInfo GLTFast.Schema.PbrSpecularGlossiness::specularGlossinessTexture
	TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* ___specularGlossinessTexture_4;
};

// GLTFast.Schema.Root
struct Root_tBD536179054FA5061EEA02C441474F8B279E7DE8  : public RuntimeObject
{
	// System.String[] GLTFast.Schema.Root::extensionsUsed
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___extensionsUsed_0;
	// System.String[] GLTFast.Schema.Root::extensionsRequired
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___extensionsRequired_1;
	// GLTFast.Schema.Accessor[] GLTFast.Schema.Root::accessors
	AccessorU5BU5D_t3C2CD08CAD1DACB87D18453F6E1A0347BBEF2C72* ___accessors_2;
	// GLTFast.Schema.GltfAnimation[] GLTFast.Schema.Root::animations
	GltfAnimationU5BU5D_t1BCE1F59F3F7BC73982F35FFDD3CF614F093D4D3* ___animations_3;
	// GLTFast.Schema.Asset GLTFast.Schema.Root::asset
	Asset_tBAD49FAA33C45350B619BF3D923C3A73A8982453* ___asset_4;
	// GLTFast.Schema.Buffer[] GLTFast.Schema.Root::buffers
	BufferU5BU5D_t658DABFDF6B3A7F96045FD6AD4A5C0DFFD663170* ___buffers_5;
	// GLTFast.Schema.BufferView[] GLTFast.Schema.Root::bufferViews
	BufferViewU5BU5D_t80B6F1A5773CA56D8BBCBEBE5670EB5AF84F698E* ___bufferViews_6;
	// GLTFast.Schema.Camera[] GLTFast.Schema.Root::cameras
	CameraU5BU5D_t254C5A84269CCB17BA401D903F24DFA1BA8F8B27* ___cameras_7;
	// GLTFast.Schema.Image[] GLTFast.Schema.Root::images
	ImageU5BU5D_t6C84F64E9AE0C72E8AC5C1D081288D34977560D7* ___images_8;
	// GLTFast.Schema.Material[] GLTFast.Schema.Root::materials
	MaterialU5BU5D_tCE6FAD730F95CC2861A8DA68C0C55D11472F292E* ___materials_9;
	// GLTFast.Schema.Mesh[] GLTFast.Schema.Root::meshes
	MeshU5BU5D_t96E81748806E11C09FD868B0E75E54A0D0B93A4B* ___meshes_10;
	// GLTFast.Schema.Node[] GLTFast.Schema.Root::nodes
	NodeU5BU5D_t18BD668D63D4D0E91997B501FCEB7397701D46F9* ___nodes_11;
	// GLTFast.Schema.Sampler[] GLTFast.Schema.Root::samplers
	SamplerU5BU5D_t945916507CB2E6CDAC9521B8D7522F962104B213* ___samplers_12;
	// System.Int32 GLTFast.Schema.Root::scene
	int32_t ___scene_13;
	// GLTFast.Schema.Scene[] GLTFast.Schema.Root::scenes
	SceneU5BU5D_t6620A91841857CC76517374B95229FBA2165D9F7* ___scenes_14;
	// GLTFast.Schema.Skin[] GLTFast.Schema.Root::skins
	SkinU5BU5D_tAA27AB03DD8F3F3BB2835E07F246BEBCFAD173B3* ___skins_15;
	// GLTFast.Schema.Texture[] GLTFast.Schema.Root::textures
	TextureU5BU5D_t37329C5A4892837D0F5CBF3C364D75EAE7C1E9F6* ___textures_16;
};

// GLTFast.Schema.RootChild
struct RootChild_t8F14572E443B762F00ECC295238A807C02F190B5  : public RuntimeObject
{
	// System.String GLTFast.Schema.RootChild::name
	String_t* ___name_0;
};

// GLTFast.Schema.Sheen
struct Sheen_t0094B5B81DE3992372C87D0746D4499F1980700E  : public RuntimeObject
{
	// System.Single[] GLTFast.Schema.Sheen::sheenColorFactor
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___sheenColorFactor_0;
	// GLTFast.Schema.TextureInfo GLTFast.Schema.Sheen::sheenColorTexture
	TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* ___sheenColorTexture_1;
	// System.Single GLTFast.Schema.Sheen::sheenRoughnessFactor
	float ___sheenRoughnessFactor_2;
	// GLTFast.Schema.TextureInfo GLTFast.Schema.Sheen::sheenRoughnessTexture
	TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* ___sheenRoughnessTexture_3;
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

// GLTFast.Schema.TextureExtension
struct TextureExtension_t115DCE6DCFAC652D0E7AFD58D792A1369331B3B2  : public RuntimeObject
{
	// GLTFast.Schema.TextureFormat GLTFast.Schema.TextureExtension::KHR_texture_basisu
	TextureFormat_tC51CEB235E78E6CA2D03E3A58F712B67D65AB5AC* ___KHR_texture_basisu_0;
};

// GLTFast.Schema.TextureFormat
struct TextureFormat_tC51CEB235E78E6CA2D03E3A58F712B67D65AB5AC  : public RuntimeObject
{
	// System.Int32 GLTFast.Schema.TextureFormat::source
	int32_t ___source_0;
};

// GLTFast.Schema.TextureInfo
struct TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22  : public RuntimeObject
{
	// System.Int32 GLTFast.Schema.TextureInfo::index
	int32_t ___index_0;
	// System.Int32 GLTFast.Schema.TextureInfo::texCoord
	int32_t ___texCoord_1;
	// GLTFast.Schema.TextureInfoExtension GLTFast.Schema.TextureInfo::extensions
	TextureInfoExtension_t4C6FD82D020CDCEE2DFFEC8C7430537E6D679E81* ___extensions_2;
};

// GLTFast.Schema.TextureInfoExtension
struct TextureInfoExtension_t4C6FD82D020CDCEE2DFFEC8C7430537E6D679E81  : public RuntimeObject
{
	// GLTFast.Schema.TextureTransform GLTFast.Schema.TextureInfoExtension::KHR_texture_transform
	TextureTransform_t052225DA5062D00CE7BA277D5EB6AD73BA372E22* ___KHR_texture_transform_0;
};

// GLTFast.Schema.TextureTransform
struct TextureTransform_t052225DA5062D00CE7BA277D5EB6AD73BA372E22  : public RuntimeObject
{
	// System.Single[] GLTFast.Schema.TextureTransform::offset
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___offset_0;
	// System.Single GLTFast.Schema.TextureTransform::rotation
	float ___rotation_1;
	// System.Single[] GLTFast.Schema.TextureTransform::scale
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___scale_2;
	// System.Int32 GLTFast.Schema.TextureTransform::texCoord
	int32_t ___texCoord_3;
};

// GLTFast.Schema.Transmission
struct Transmission_tF6BE28205152A92C29C29FF652B2A069DC1273A7  : public RuntimeObject
{
	// System.Single GLTFast.Schema.Transmission::transmissionFactor
	float ___transmissionFactor_0;
	// GLTFast.Schema.TextureInfo GLTFast.Schema.Transmission::transmissionTexture
	TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* ___transmissionTexture_1;
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

// GLTFast.Schema.MeshGpuInstancing/Attributes
struct Attributes_tB68862771132AC61C3C3E355DFDED8B11A5C4638  : public RuntimeObject
{
	// System.Int32 GLTFast.Schema.MeshGpuInstancing/Attributes::TRANSLATION
	int32_t ___TRANSLATION_0;
	// System.Int32 GLTFast.Schema.MeshGpuInstancing/Attributes::ROTATION
	int32_t ___ROTATION_1;
	// System.Int32 GLTFast.Schema.MeshGpuInstancing/Attributes::SCALE
	int32_t ___SCALE_2;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<GLTFast.Schema.Camera/Type>
struct Nullable_1_tE2DB22D96422A179FAE51C04DB8815039D4FB097 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<GLTFast.Schema.Material/AlphaMode>
struct Nullable_1_tE446961F4EE63F23D293FEE3155F7BBFACDAABEC 
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

// GLTFast.Schema.BufferViewBase
struct BufferViewBase_tF706E75FF34AE31D9F158FA379D519C6487255C8  : public BufferSlice_tD3ED9EDD12C93CF9E47B8C6A09551E5D2036764D
{
	// System.Int32 GLTFast.Schema.BufferViewBase::buffer
	int32_t ___buffer_2;
	// System.Int32 GLTFast.Schema.BufferViewBase::byteStride
	int32_t ___byteStride_3;
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

// GLTFast.Schema.GltfAnimation
struct GltfAnimation_t4C1CEA25BD7667930E1BDF49F87B3F4906254341  : public RootChild_t8F14572E443B762F00ECC295238A807C02F190B5
{
	// GLTFast.Schema.AnimationChannel[] GLTFast.Schema.GltfAnimation::channels
	AnimationChannelU5BU5D_tB034A39BA4A4B83958774B77506916FB5F760BEA* ___channels_1;
	// GLTFast.Schema.AnimationSampler[] GLTFast.Schema.GltfAnimation::samplers
	AnimationSamplerU5BU5D_t28CFF284E8C92AC88194A2A96CCE29EC24B30034* ___samplers_2;
};

// GLTFast.Schema.Image
struct Image_t06216539D22FD8F64E39249C8F18DA87CE5EA7CB  : public RootChild_t8F14572E443B762F00ECC295238A807C02F190B5
{
	// System.String GLTFast.Schema.Image::uri
	String_t* ___uri_1;
	// System.String GLTFast.Schema.Image::mimeType
	String_t* ___mimeType_2;
	// System.Int32 GLTFast.Schema.Image::bufferView
	int32_t ___bufferView_3;
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

// GLTFast.Schema.Mesh
struct Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D  : public RootChild_t8F14572E443B762F00ECC295238A807C02F190B5
{
	// GLTFast.Schema.MeshPrimitive[] GLTFast.Schema.Mesh::primitives
	MeshPrimitiveU5BU5D_tC39F55BE4E5D3AAFB80140CCBFD9541D394A0EC0* ___primitives_1;
	// System.Single[] GLTFast.Schema.Mesh::weights
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights_2;
	// GLTFast.Schema.MeshExtras GLTFast.Schema.Mesh::extras
	MeshExtras_t0C9FC7300719D84651490B4FBB3BC69CEC86BB3E* ___extras_3;
};

// GLTFast.Schema.Node
struct Node_t2E23D131CBC25EF198B717957ADA306EF4EA3998  : public RootChild_t8F14572E443B762F00ECC295238A807C02F190B5
{
	// System.UInt32[] GLTFast.Schema.Node::children
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___children_1;
	// System.Int32 GLTFast.Schema.Node::mesh
	int32_t ___mesh_2;
	// System.Single[] GLTFast.Schema.Node::matrix
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___matrix_3;
	// System.Single[] GLTFast.Schema.Node::rotation
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___rotation_4;
	// System.Single[] GLTFast.Schema.Node::scale
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___scale_5;
	// System.Single[] GLTFast.Schema.Node::translation
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___translation_6;
	// System.Int32 GLTFast.Schema.Node::skin
	int32_t ___skin_7;
	// System.Int32 GLTFast.Schema.Node::camera
	int32_t ___camera_8;
	// GLTFast.Schema.NodeExtensions GLTFast.Schema.Node::extensions
	NodeExtensions_tAADE3087978CF3793142C14BCDBEE07F2CC3381C* ___extensions_9;
};

// GLTFast.Schema.NormalTextureInfo
struct NormalTextureInfo_tFFD5E2FA7AA9C491D6CFF02FDC8EF24253602F55  : public TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22
{
	// System.Single GLTFast.Schema.NormalTextureInfo::scale
	float ___scale_3;
};

// GLTFast.Schema.OcclusionTextureInfo
struct OcclusionTextureInfo_t5F9255E7CD563F28A96C07486D589CC492357833  : public TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22
{
	// System.Single GLTFast.Schema.OcclusionTextureInfo::strength
	float ___strength_3;
};

// GLTFast.Schema.Sampler
struct Sampler_t107484F70B663B848B559573EBF6A6E12DC7DED0  : public RootChild_t8F14572E443B762F00ECC295238A807C02F190B5
{
	// GLTFast.Schema.Sampler/MagFilterMode GLTFast.Schema.Sampler::magFilter
	int32_t ___magFilter_1;
	// GLTFast.Schema.Sampler/MinFilterMode GLTFast.Schema.Sampler::minFilter
	int32_t ___minFilter_2;
	// GLTFast.Schema.Sampler/WrapMode GLTFast.Schema.Sampler::wrapS
	int32_t ___wrapS_3;
	// GLTFast.Schema.Sampler/WrapMode GLTFast.Schema.Sampler::wrapT
	int32_t ___wrapT_4;
};

// GLTFast.Schema.Scene
struct Scene_t4422FC4D5D24EE9AA6498181AB3D094DD242C7F7  : public RootChild_t8F14572E443B762F00ECC295238A807C02F190B5
{
	// System.UInt32[] GLTFast.Schema.Scene::nodes
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___nodes_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// GLTFast.Schema.Skin
struct Skin_tCC1AFC24DECD2B9715FF6090D0C7211290B5A077  : public RootChild_t8F14572E443B762F00ECC295238A807C02F190B5
{
	// System.Int32 GLTFast.Schema.Skin::inverseBindMatrices
	int32_t ___inverseBindMatrices_1;
	// System.Int32 GLTFast.Schema.Skin::skeleton
	int32_t ___skeleton_2;
	// System.UInt32[] GLTFast.Schema.Skin::joints
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___joints_3;
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// GLTFast.Schema.Texture
struct Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A  : public RootChild_t8F14572E443B762F00ECC295238A807C02F190B5
{
	// System.Int32 GLTFast.Schema.Texture::sampler
	int32_t ___sampler_1;
	// System.Int32 GLTFast.Schema.Texture::source
	int32_t ___source_2;
	// GLTFast.Schema.TextureExtension GLTFast.Schema.Texture::extensions
	TextureExtension_t115DCE6DCFAC652D0E7AFD58D792A1369331B3B2* ___extensions_3;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t3C0685592FEA43CE296472F3A084323D57B523AF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t3C0685592FEA43CE296472F3A084323D57B523AF__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t147607A1852821790317726DE373E7DA7E725D4C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t147607A1852821790317726DE373E7DA7E725D4C__padding[16];
	};
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

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tC1E358237C258EFD324DF2AB7D6BFA4A886E1427  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tC1E358237C258EFD324DF2AB7D6BFA4A886E1427_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1
	__StaticArrayInitTypeSizeU3D12_t3C0685592FEA43CE296472F3A084323D57B523AF ___8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::F6BB1294DA2F78CD935B01C7656280DF5EAA0439E9D97BC03775825A41A508E4
	__StaticArrayInitTypeSizeU3D16_t147607A1852821790317726DE373E7DA7E725D4C ___F6BB1294DA2F78CD935B01C7656280DF5EAA0439E9D97BC03775825A41A508E4_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// GLTFast.Schema.BufferView
struct BufferView_tA7E868125A221CC5221B38AE3F215390767834D1  : public BufferViewBase_tF706E75FF34AE31D9F158FA379D519C6487255C8
{
	// System.Int32 GLTFast.Schema.BufferView::target
	int32_t ___target_4;
};

// GLTFast.Schema.Camera
struct Camera_tF07308B27D535448829D7C97A8C54144DF18A9B5  : public RootChild_t8F14572E443B762F00ECC295238A807C02F190B5
{
	// System.String GLTFast.Schema.Camera::type
	String_t* ___type_1;
	// System.Nullable`1<GLTFast.Schema.Camera/Type> GLTFast.Schema.Camera::_typeEnum
	Nullable_1_tE2DB22D96422A179FAE51C04DB8815039D4FB097 ____typeEnum_2;
	// GLTFast.Schema.CameraOrthographic GLTFast.Schema.Camera::orthographic
	CameraOrthographic_t88A94D9229D65187D924A60C4FD63F1918D9FFBA* ___orthographic_3;
	// GLTFast.Schema.CameraPerspective GLTFast.Schema.Camera::perspective
	CameraPerspective_tF25DC017AB9F0ECFB1B573A84CCC784F0A4F3B6D* ___perspective_4;
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

// GLTFast.Schema.Material
struct Material_t1E37B852B5C4B73E91E59B4DD7ADED7B2A7D0470  : public RootChild_t8F14572E443B762F00ECC295238A807C02F190B5
{
	// GLTFast.Schema.MaterialExtension GLTFast.Schema.Material::extensions
	MaterialExtension_t7E092301E5A7B753417790CB1E3FF5A0D6F27CF9* ___extensions_1;
	// GLTFast.Schema.PbrMetallicRoughness GLTFast.Schema.Material::pbrMetallicRoughness
	PbrMetallicRoughness_t1969AD2EB37D63AC503B44C586A934122E0B413E* ___pbrMetallicRoughness_2;
	// GLTFast.Schema.NormalTextureInfo GLTFast.Schema.Material::normalTexture
	NormalTextureInfo_tFFD5E2FA7AA9C491D6CFF02FDC8EF24253602F55* ___normalTexture_3;
	// GLTFast.Schema.OcclusionTextureInfo GLTFast.Schema.Material::occlusionTexture
	OcclusionTextureInfo_t5F9255E7CD563F28A96C07486D589CC492357833* ___occlusionTexture_4;
	// GLTFast.Schema.TextureInfo GLTFast.Schema.Material::emissiveTexture
	TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* ___emissiveTexture_5;
	// System.Single[] GLTFast.Schema.Material::emissiveFactor
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___emissiveFactor_6;
	// System.String GLTFast.Schema.Material::alphaMode
	String_t* ___alphaMode_7;
	// System.Nullable`1<GLTFast.Schema.Material/AlphaMode> GLTFast.Schema.Material::_alphaModeEnum
	Nullable_1_tE446961F4EE63F23D293FEE3155F7BBFACDAABEC ____alphaModeEnum_8;
	// System.Single GLTFast.Schema.Material::alphaCutoff
	float ___alphaCutoff_9;
	// System.Boolean GLTFast.Schema.Material::doubleSided
	bool ___doubleSided_10;
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.IO.Stream System.IO.StreamWriter::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_7;
	// System.Text.Encoding System.IO.StreamWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_8;
	// System.Text.Encoder System.IO.StreamWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_9;
	// System.Byte[] System.IO.StreamWriter::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_10;
	// System.Char[] System.IO.StreamWriter::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_11;
	// System.Int32 System.IO.StreamWriter::_charPos
	int32_t ____charPos_12;
	// System.Int32 System.IO.StreamWriter::_charLen
	int32_t ____charLen_13;
	// System.Boolean System.IO.StreamWriter::_autoFlush
	bool ____autoFlush_14;
	// System.Boolean System.IO.StreamWriter::_haveWrittenPreamble
	bool ____haveWrittenPreamble_15;
	// System.Boolean System.IO.StreamWriter::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamWriter::_asyncWriteTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncWriteTask_17;
};

struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_StaticFields
{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___Null_6;
};

// System.Nullable`1<UnityEngine.Bounds>
struct Nullable_1_t02CE5E70DFA26EDBAB3AB261067AE257C96B822F 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value_1;
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

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// GLTFast.Schema.MeshPrimitive[]
struct MeshPrimitiveU5BU5D_tC39F55BE4E5D3AAFB80140CCBFD9541D394A0EC0  : public RuntimeArray
{
	ALIGN_FIELD (8) MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31* m_Items[1];

	inline MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31* value)
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
// GLTFast.Schema.MorphTarget[]
struct MorphTargetU5BU5D_tB3CE0CA707BA21D44E56A688537C378262F25C7C  : public RuntimeArray
{
	ALIGN_FIELD (8) MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092* m_Items[1];

	inline MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// GLTFast.Schema.GltfAnimation[]
struct GltfAnimationU5BU5D_t1BCE1F59F3F7BC73982F35FFDD3CF614F093D4D3  : public RuntimeArray
{
	ALIGN_FIELD (8) GltfAnimation_t4C1CEA25BD7667930E1BDF49F87B3F4906254341* m_Items[1];

	inline GltfAnimation_t4C1CEA25BD7667930E1BDF49F87B3F4906254341* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GltfAnimation_t4C1CEA25BD7667930E1BDF49F87B3F4906254341** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GltfAnimation_t4C1CEA25BD7667930E1BDF49F87B3F4906254341* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GltfAnimation_t4C1CEA25BD7667930E1BDF49F87B3F4906254341* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GltfAnimation_t4C1CEA25BD7667930E1BDF49F87B3F4906254341** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GltfAnimation_t4C1CEA25BD7667930E1BDF49F87B3F4906254341* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GLTFast.Schema.Accessor[]
struct AccessorU5BU5D_t3C2CD08CAD1DACB87D18453F6E1A0347BBEF2C72  : public RuntimeArray
{
	ALIGN_FIELD (8) Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* m_Items[1];

	inline Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GLTFast.Schema.BufferView[]
struct BufferViewU5BU5D_t80B6F1A5773CA56D8BBCBEBE5670EB5AF84F698E  : public RuntimeArray
{
	ALIGN_FIELD (8) BufferView_tA7E868125A221CC5221B38AE3F215390767834D1* m_Items[1];

	inline BufferView_tA7E868125A221CC5221B38AE3F215390767834D1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BufferView_tA7E868125A221CC5221B38AE3F215390767834D1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BufferView_tA7E868125A221CC5221B38AE3F215390767834D1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BufferView_tA7E868125A221CC5221B38AE3F215390767834D1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BufferView_tA7E868125A221CC5221B38AE3F215390767834D1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BufferView_tA7E868125A221CC5221B38AE3F215390767834D1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GLTFast.Schema.Node[]
struct NodeU5BU5D_t18BD668D63D4D0E91997B501FCEB7397701D46F9  : public RuntimeArray
{
	ALIGN_FIELD (8) Node_t2E23D131CBC25EF198B717957ADA306EF4EA3998* m_Items[1];

	inline Node_t2E23D131CBC25EF198B717957ADA306EF4EA3998* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_t2E23D131CBC25EF198B717957ADA306EF4EA3998** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_t2E23D131CBC25EF198B717957ADA306EF4EA3998* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_t2E23D131CBC25EF198B717957ADA306EF4EA3998* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_t2E23D131CBC25EF198B717957ADA306EF4EA3998** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_t2E23D131CBC25EF198B717957ADA306EF4EA3998* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GLTFast.Schema.Buffer[]
struct BufferU5BU5D_t658DABFDF6B3A7F96045FD6AD4A5C0DFFD663170  : public RuntimeArray
{
	ALIGN_FIELD (8) Buffer_t47A7E9EBA4EF31CA3305CFDEC7717F3C96E36BA0* m_Items[1];

	inline Buffer_t47A7E9EBA4EF31CA3305CFDEC7717F3C96E36BA0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Buffer_t47A7E9EBA4EF31CA3305CFDEC7717F3C96E36BA0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Buffer_t47A7E9EBA4EF31CA3305CFDEC7717F3C96E36BA0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Buffer_t47A7E9EBA4EF31CA3305CFDEC7717F3C96E36BA0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Buffer_t47A7E9EBA4EF31CA3305CFDEC7717F3C96E36BA0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Buffer_t47A7E9EBA4EF31CA3305CFDEC7717F3C96E36BA0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GLTFast.Schema.Camera[]
struct CameraU5BU5D_t254C5A84269CCB17BA401D903F24DFA1BA8F8B27  : public RuntimeArray
{
	ALIGN_FIELD (8) Camera_tF07308B27D535448829D7C97A8C54144DF18A9B5* m_Items[1];

	inline Camera_tF07308B27D535448829D7C97A8C54144DF18A9B5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_tF07308B27D535448829D7C97A8C54144DF18A9B5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_tF07308B27D535448829D7C97A8C54144DF18A9B5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_tF07308B27D535448829D7C97A8C54144DF18A9B5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_tF07308B27D535448829D7C97A8C54144DF18A9B5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_tF07308B27D535448829D7C97A8C54144DF18A9B5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GLTFast.Schema.Image[]
struct ImageU5BU5D_t6C84F64E9AE0C72E8AC5C1D081288D34977560D7  : public RuntimeArray
{
	ALIGN_FIELD (8) Image_t06216539D22FD8F64E39249C8F18DA87CE5EA7CB* m_Items[1];

	inline Image_t06216539D22FD8F64E39249C8F18DA87CE5EA7CB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t06216539D22FD8F64E39249C8F18DA87CE5EA7CB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t06216539D22FD8F64E39249C8F18DA87CE5EA7CB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_t06216539D22FD8F64E39249C8F18DA87CE5EA7CB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t06216539D22FD8F64E39249C8F18DA87CE5EA7CB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t06216539D22FD8F64E39249C8F18DA87CE5EA7CB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GLTFast.Schema.Material[]
struct MaterialU5BU5D_tCE6FAD730F95CC2861A8DA68C0C55D11472F292E  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t1E37B852B5C4B73E91E59B4DD7ADED7B2A7D0470* m_Items[1];

	inline Material_t1E37B852B5C4B73E91E59B4DD7ADED7B2A7D0470* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t1E37B852B5C4B73E91E59B4DD7ADED7B2A7D0470** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t1E37B852B5C4B73E91E59B4DD7ADED7B2A7D0470* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t1E37B852B5C4B73E91E59B4DD7ADED7B2A7D0470* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t1E37B852B5C4B73E91E59B4DD7ADED7B2A7D0470** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t1E37B852B5C4B73E91E59B4DD7ADED7B2A7D0470* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GLTFast.Schema.Mesh[]
struct MeshU5BU5D_t96E81748806E11C09FD868B0E75E54A0D0B93A4B  : public RuntimeArray
{
	ALIGN_FIELD (8) Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D* m_Items[1];

	inline Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GLTFast.Schema.Sampler[]
struct SamplerU5BU5D_t945916507CB2E6CDAC9521B8D7522F962104B213  : public RuntimeArray
{
	ALIGN_FIELD (8) Sampler_t107484F70B663B848B559573EBF6A6E12DC7DED0* m_Items[1];

	inline Sampler_t107484F70B663B848B559573EBF6A6E12DC7DED0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sampler_t107484F70B663B848B559573EBF6A6E12DC7DED0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sampler_t107484F70B663B848B559573EBF6A6E12DC7DED0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sampler_t107484F70B663B848B559573EBF6A6E12DC7DED0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sampler_t107484F70B663B848B559573EBF6A6E12DC7DED0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sampler_t107484F70B663B848B559573EBF6A6E12DC7DED0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GLTFast.Schema.Scene[]
struct SceneU5BU5D_t6620A91841857CC76517374B95229FBA2165D9F7  : public RuntimeArray
{
	ALIGN_FIELD (8) Scene_t4422FC4D5D24EE9AA6498181AB3D094DD242C7F7* m_Items[1];

	inline Scene_t4422FC4D5D24EE9AA6498181AB3D094DD242C7F7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Scene_t4422FC4D5D24EE9AA6498181AB3D094DD242C7F7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Scene_t4422FC4D5D24EE9AA6498181AB3D094DD242C7F7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Scene_t4422FC4D5D24EE9AA6498181AB3D094DD242C7F7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Scene_t4422FC4D5D24EE9AA6498181AB3D094DD242C7F7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Scene_t4422FC4D5D24EE9AA6498181AB3D094DD242C7F7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GLTFast.Schema.Skin[]
struct SkinU5BU5D_tAA27AB03DD8F3F3BB2835E07F246BEBCFAD173B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Skin_tCC1AFC24DECD2B9715FF6090D0C7211290B5A077* m_Items[1];

	inline Skin_tCC1AFC24DECD2B9715FF6090D0C7211290B5A077* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Skin_tCC1AFC24DECD2B9715FF6090D0C7211290B5A077** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Skin_tCC1AFC24DECD2B9715FF6090D0C7211290B5A077* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Skin_tCC1AFC24DECD2B9715FF6090D0C7211290B5A077* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Skin_tCC1AFC24DECD2B9715FF6090D0C7211290B5A077** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Skin_tCC1AFC24DECD2B9715FF6090D0C7211290B5A077* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GLTFast.Schema.Texture[]
struct TextureU5BU5D_t37329C5A4892837D0F5CBF3C364D75EAE7C1E9F6  : public RuntimeArray
{
	ALIGN_FIELD (8) Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* m_Items[1];

	inline Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Nullable`1<UnityEngine.Bounds>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m203A376A0AE894BD4288351A68585CF811118A85_gshared (Nullable_1_t02CE5E70DFA26EDBAB3AB261067AE257C96B822F* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.JsonWriter::AddProperty<System.Int32>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_gshared (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.JsonWriter::AddProperty<System.UInt32>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AddProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0CF21958C74B8155CD6123F3773B239B87935FB6_gshared (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, uint32_t ___value1, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.JsonWriter::AddProperty<System.Int32Enum>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AddProperty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m7913C4426C0F4492F7F86E67CFFBB9D88B9F0400_gshared (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32Enum>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.JsonWriter::AddArrayProperty<System.UInt32>(System.String,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AddArrayProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF4EDAAD77CF499B7C690F324945D68E9D889EBC9_gshared (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, RuntimeObject* ___values1, const RuntimeMethod* method) ;
// System.Int32 System.HashCode::Combine<System.Int32,System.Int32,System.Int32>(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m230136A07D20B826D29A4C7BC5F585AC7469A5E6_gshared (int32_t ___value10, int32_t ___value21, int32_t ___value32, const RuntimeMethod* method) ;

// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m1ABE53499F05D295104BDE57EE12376CF4513585 (Type_t* ___enumType0, String_t* ___value1, bool ___ignoreCase2, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, RuntimeObject* ___actualValue1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Division(Unity.Mathematics.float3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Division_m337596E152F22C0A19CD1189C6E38BC5EAB9514F_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___lhs0, float ___rhs1, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Implicit(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Implicit_m2D3D66A7EE86A311E60BF3C56EE34AAC6457D01D_inline (int32_t ___v0, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.math::max(Unity.Mathematics.float3,Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_max_mEAED152166B3B2D1D6EF379FFAD18A85D52E6007_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___x0, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Unity.Mathematics.float3::op_Implicit(Unity.Mathematics.float3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 float3_op_Implicit_mEFBD5C49B7BC786CEEA7076D3A53D421BF88E2CB (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::set_max(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_max_mD846329090A0A151CA139A477B70AD6A76FC1A39 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::set_min(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_min_m7BAFB7EDB329CBA896FA096E671D17E498C81A35 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Bounds>::.ctor(T)
inline void Nullable_1__ctor_m203A376A0AE894BD4288351A68585CF811118A85 (Nullable_1_t02CE5E70DFA26EDBAB3AB261067AE257C96B822F* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t02CE5E70DFA26EDBAB3AB261067AE257C96B822F*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, const RuntimeMethod*))Nullable_1__ctor_m203A376A0AE894BD4288351A68585CF811118A85_gshared)(__this, ___value0, method);
}
// System.Void GLTFast.Schema.JsonWriter::AddObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.JsonWriter::AddProperty<System.Int32>(System.String,T)
inline void JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1*, String_t*, int32_t, const RuntimeMethod*))JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_gshared)(__this, ___name0, ___value1, method);
}
// System.Void GLTFast.Schema.JsonWriter::AddProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AddProperty_m9BBF34A6F6097C126C3EEB74D4B457A96ABAA179 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.JsonWriter::AddProperty(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AddProperty_mE99650D1C81BAD7E3DEE776CF534C696B28DFDB0 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.JsonWriter::AddArrayProperty(System.String,System.Collections.Generic.IEnumerable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AddArrayProperty_m598554F05B3A9E2CB6428CBEFCE33AFBB2931BC8 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, RuntimeObject* ___values1, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.JsonWriter::AddProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.AccessorSparse::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessorSparse_GltfSerialize_m6F2E880E0E824AAAC863C9CD39308757510E7ACA (AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.JsonWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.AccessorSparseIndices::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessorSparseIndices_GltfSerialize_m9C5D1D81856B42CF3CF147183B3C5D77DA69DCF4 (AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.AccessorSparseValues::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessorSparseValues_GltfSerialize_mBF1E21324B6D795ABD2EF25EAB71DADCE16DA3A2 (AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.JsonWriter::AddProperty<System.UInt32>(System.String,T)
inline void JsonWriter_AddProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0CF21958C74B8155CD6123F3773B239B87935FB6 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, uint32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1*, String_t*, uint32_t, const RuntimeMethod*))JsonWriter_AddProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0CF21958C74B8155CD6123F3773B239B87935FB6_gshared)(__this, ___name0, ___value1, method);
}
// System.Void GLTFast.Schema.JsonWriter::AddProperty<GLTFast.Schema.GLTFComponentType>(System.String,T)
inline void JsonWriter_AddProperty_TisGLTFComponentType_tD796933CF2978D626EF93C1078DC2C1822952E21_m061CF0C897D0BF4C17174476F9F8202221784475 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1*, String_t*, int32_t, const RuntimeMethod*))JsonWriter_AddProperty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m7913C4426C0F4492F7F86E67CFFBB9D88B9F0400_gshared)(__this, ___name0, ___value1, method);
}
// System.Void GLTFast.Schema.JsonWriter::OpenBrackets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_OpenBrackets_m0E765CA67526A78131D965DA563AA8C63824A766 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.BufferSlice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSlice__ctor_m455BE4E1369C352C44BA40B4E2C6BE3720865917 (BufferSlice_tD3ED9EDD12C93CF9E47B8C6A09551E5D2036764D* __this, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.BufferViewBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferViewBase__ctor_mEAB4F5F6EFEF337ED26C4B029EB985D1834E3708 (BufferViewBase_tF706E75FF34AE31D9F158FA379D519C6487255C8* __this, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.RootChild::GltfSerializeRoot(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootChild_GltfSerializeRoot_m5633F10A7CB50F661EBC5D3E552C5946F4C3D35E (RootChild_t8F14572E443B762F00ECC295238A807C02F190B5* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.RootChild::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootChild__ctor_m889C52000B217955811A13981472070C7835FF84 (RootChild_t8F14572E443B762F00ECC295238A807C02F190B5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<GLTFast.Schema.Camera/Type>::get_HasValue()
inline bool Nullable_1_get_HasValue_mBAC04596974DD7BC3BC7932BF6501E21E6CD0BA6_inline (Nullable_1_tE2DB22D96422A179FAE51C04DB8815039D4FB097* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tE2DB22D96422A179FAE51C04DB8815039D4FB097*, const RuntimeMethod*))Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline)(__this, method);
}
// T System.Nullable`1<GLTFast.Schema.Camera/Type>::get_Value()
inline int32_t Nullable_1_get_Value_mC2357292D9339B73EED2D780E1F7F4DDB5037CE7 (Nullable_1_tE2DB22D96422A179FAE51C04DB8815039D4FB097* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tE2DB22D96422A179FAE51C04DB8815039D4FB097*, const RuntimeMethod*))Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared)(__this, method);
}
// System.Void System.Nullable`1<GLTFast.Schema.Camera/Type>::.ctor(T)
inline void Nullable_1__ctor_m2A50829A5A43E5A6F969AA424DE364958591ABFE (Nullable_1_tE2DB22D96422A179FAE51C04DB8815039D4FB097* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tE2DB22D96422A179FAE51C04DB8815039D4FB097*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared)(__this, ___value0, method);
}
// System.Void GLTFast.Schema.JsonWriter::Separate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Separate_m9ECA1E8C4198DE263474527528BBF0C39E564FB5 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.JsonWriter::AddArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AddArray_m3FF9C631816077B6D0F2C80A9785CA1B1E946AF0 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE (float* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.JsonWriter::CloseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_CloseArray_m5AD2ECE87AAB8692647D11ADA12B5F7BAC3EB574 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<GLTFast.Schema.Material/AlphaMode>::get_HasValue()
inline bool Nullable_1_get_HasValue_mE42EBBBFBD93A0BE1351B026DBDF6CE9DCD45D99_inline (Nullable_1_tE446961F4EE63F23D293FEE3155F7BBFACDAABEC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tE446961F4EE63F23D293FEE3155F7BBFACDAABEC*, const RuntimeMethod*))Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline)(__this, method);
}
// T System.Nullable`1<GLTFast.Schema.Material/AlphaMode>::get_Value()
inline int32_t Nullable_1_get_Value_mA82027DA1E2A2249CC4122EB2F2FB5988BB882A0 (Nullable_1_tE446961F4EE63F23D293FEE3155F7BBFACDAABEC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tE446961F4EE63F23D293FEE3155F7BBFACDAABEC*, const RuntimeMethod*))Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared)(__this, method);
}
// System.Void System.Nullable`1<GLTFast.Schema.Material/AlphaMode>::.ctor(T)
inline void Nullable_1__ctor_m1F22CA905CFB38D5358233765EC86457ADA36643 (Nullable_1_tE446961F4EE63F23D293FEE3155F7BBFACDAABEC* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tE446961F4EE63F23D293FEE3155F7BBFACDAABEC*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared)(__this, ___value0, method);
}
// System.Void GLTFast.Schema.PbrMetallicRoughness::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PbrMetallicRoughness_GltfSerialize_mFCC5887B1665DB040DDD1A3E23E87A7270F88CBD (PbrMetallicRoughness_t1969AD2EB37D63AC503B44C586A934122E0B413E* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::abs(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_abs_mD6633C641692C4A0AEEFB52575D81599ACF1F7F5_inline (float ___x0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.JsonWriter::AddProperty(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AddProperty_mAB9A3ED6353AAF08537326C1840D2A0246DCC20B (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.MaterialExtension::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialExtension_GltfSerialize_mBB98A5EE4211EA36C2F9B70EE5F17FD91BE1BBDB (MaterialExtension_t7E092301E5A7B753417790CB1E3FF5A0D6F27CF9* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.PbrSpecularGlossiness::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PbrSpecularGlossiness_GltfSerialize_mC419605950B41988A1B1BFE6BA8433524ED5DC7F (PbrSpecularGlossiness_t2D28D6A9133D79AB5C63A51C7C7E9AF6D48F562E* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.MaterialUnlit::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialUnlit_GltfSerialize_m128D3855A7D27DAAF889809C76F9BFF8C540DA9B (MaterialUnlit_tFC8C1ACB8A8DFE956115E7FA14B28F69AFBCB5DF* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.Transmission::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transmission_GltfSerialize_mD7044B23F9ED8B3EF1C691A891E886C184731EC9 (Transmission_tF6BE28205152A92C29C29FF652B2A069DC1273A7* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.ClearCoat::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearCoat_GltfSerialize_mBA3F01E26035C195F2CDBBAE3CA0AFC01316F85A (ClearCoat_tC3E32154197623928989150AA64FDA8AD25EB6D2* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.Sheen::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sheen_GltfSerialize_mAE750F75EAE9D911E593860F59E944876370877D (Sheen_t0094B5B81DE3992372C87D0746D4499F1980700E* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Object System.Object::MemberwiseClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object GLTFast.Schema.MeshPrimitive::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeshPrimitive_Clone_m435B42C25725F1E4A99339E94942A48FC8781E4B (MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31* __this, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.MeshPrimitive::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshPrimitive_GltfSerialize_m6DAEF3BDC57243CF460296770AA2F397C60EED91 (MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.MeshExtras::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshExtras_GltfSerialize_mB4D561873DC5C8FFE7DB54F7BE2A3E0AD8F577DC (MeshExtras_t0C9FC7300719D84651490B4FBB3BC69CEC86BB3E* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.JsonWriter::AddArrayProperty(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AddArrayProperty_mDA7B79A7A0C5FE63DC275BEABA5784E8F92192DD (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, RuntimeObject* ___values1, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.Attributes::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attributes_GltfSerialize_m0445F0EE7C03D24858D2792FB36D478DF78FD897 (Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.MorphTarget::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MorphTarget_GltfSerialize_m9ECEA6AB607EBD54539E24B3173C7AB13B6B4C5C (MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.MeshPrimitiveExtensions::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshPrimitiveExtensions_GltfSerialize_mDFE820A7AC4B9C0A08C6A9CC84D97CAA3F6F6E47 (MeshPrimitiveExtensions_tA62DDD2175422FB2E152CA59BA33AFEA49FD713C* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.JsonWriter::AddArrayProperty<System.UInt32>(System.String,System.Collections.Generic.IEnumerable`1<T>)
inline void JsonWriter_AddArrayProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF4EDAAD77CF499B7C690F324945D68E9D889EBC9 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, RuntimeObject* ___values1, const RuntimeMethod* method)
{
	((  void (*) (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1*, String_t*, RuntimeObject*, const RuntimeMethod*))JsonWriter_AddArrayProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF4EDAAD77CF499B7C690F324945D68E9D889EBC9_gshared)(__this, ___name0, ___values1, method);
}
// System.Void GLTFast.Schema.NodeExtensions::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeExtensions_GltfSerialize_m53836774C37E306F83B822CCA51BA1DAFA811B10 (NodeExtensions_tAADE3087978CF3793142C14BCDBEE07F2CC3381C* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.MeshGpuInstancing::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshGpuInstancing_GltfSerialize_mBFAC3E5DECC99E7F47047FD6AA07590445081BDC (MeshGpuInstancing_t5B623601E3413EF0C7CC6F0D059515319D93AD04* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.TextureInfo::GltfSerializeTextureInfo(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureInfo_GltfSerializeTextureInfo_m9D7485480A7F0BF1A966272213BDAE81F0BCD8C2 (TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.TextureInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureInfo__ctor_mD7CC7151EC6BF57345C180E1BE13FFCF8A4D3E1B (TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* __this, const RuntimeMethod* method) ;
// GLTFast.Schema.GLTFAccessorAttributeType GLTFast.Schema.Accessor::get_typeEnum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Accessor_get_typeEnum_m39CF2035160006AB83CDD55ACBC63912CA834EE8 (Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* __this, const RuntimeMethod* method) ;
// System.Int32 GLTFast.Schema.Accessor::GetAccessorAttributeTypeLength(GLTFast.Schema.GLTFAccessorAttributeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Accessor_GetAccessorAttributeTypeLength_m23FB051A63D6A37D227A1692D782746440FC9062 (uint8_t ___type0, const RuntimeMethod* method) ;
// System.Int32 GLTFast.Schema.Accessor::GetComponentTypeSize(GLTFast.Schema.GLTFComponentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Accessor_GetComponentTypeSize_mB85376D5CC503C5ADAC641A07855576DA28A2B28 (int32_t ___componentType0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.JsonWriter::.ctor(System.IO.StreamWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m89DB7EC219D8772517E80AB866D35079EFECF67F (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___stream0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.Asset::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asset_GltfSerialize_m271FF28709B8242AA1F0A847097742E674AB69C2 (Asset_tBAD49FAA33C45350B619BF3D923C3A73A8982453* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.Node::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_GltfSerialize_mEACA2165385686D59BB9D274E65D1B28E4D1769E (Node_t2E23D131CBC25EF198B717957ADA306EF4EA3998* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.GltfAnimation::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfAnimation_GltfSerialize_m173CD2966371748A472B9DC4CDA61155548E4930 (GltfAnimation_t4C1CEA25BD7667930E1BDF49F87B3F4906254341* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.Buffer::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_GltfSerialize_m5F1597E21CB80B97FBD830D2E9ACCFC495334FD2 (Buffer_t47A7E9EBA4EF31CA3305CFDEC7717F3C96E36BA0* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.BufferView::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferView_GltfSerialize_mF30AD67022033D0691426F39BA82704A071D19C3 (BufferView_tA7E868125A221CC5221B38AE3F215390767834D1* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.Accessor::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Accessor_GltfSerialize_m3A1242EC67EFAA2EFBBB14EAD8B59E19D97D3934 (Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.Camera::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_GltfSerialize_m89372E15B88CAF2B89C51BB608670C14BCAE7B1E (Camera_tF07308B27D535448829D7C97A8C54144DF18A9B5* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.Image::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_GltfSerialize_m3D756AA03EBA1F94F601D9E255CAC4AC1DFD0E20 (Image_t06216539D22FD8F64E39249C8F18DA87CE5EA7CB* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.Material::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_GltfSerialize_m5591A16669C4A1433E7EE02F61E03B05DBE297CC (Material_t1E37B852B5C4B73E91E59B4DD7ADED7B2A7D0470* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.Mesh::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GltfSerialize_m46A5C312939F8D9C78DB21DC366875D475773767 (Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.Sampler::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sampler_GltfSerialize_m2F313A1B3D616E995A2049662ACDB646C6097FE9 (Sampler_t107484F70B663B848B559573EBF6A6E12DC7DED0* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.Scene::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene_GltfSerialize_m9BA3A78864735D0FD1F873F57E20724863284F3A (Scene_t4422FC4D5D24EE9AA6498181AB3D094DD242C7F7* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.Skin::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skin_GltfSerialize_m03433B738197BA6A507A92F816DCD070793B13A4 (Skin_tCC1AFC24DECD2B9715FF6090D0C7211290B5A077* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.Texture::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_GltfSerialize_mDA20933E6E0440144D914E5426654D09AA00014A (Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// UnityEngine.FilterMode GLTFast.Schema.Sampler::ConvertFilterMode(GLTFast.Schema.Sampler/MinFilterMode,GLTFast.Schema.Sampler/MagFilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sampler_ConvertFilterMode_mF794EAF42BAB75CDDDABCA14B0DB77F9C179DEC3 (int32_t ___minFilterToConvert0, int32_t ___magFilterToConvert1, const RuntimeMethod* method) ;
// UnityEngine.TextureWrapMode GLTFast.Schema.Sampler::ConvertWrapMode(GLTFast.Schema.Sampler/WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sampler_ConvertWrapMode_m32BB48F97DF1DFC44C9FF63A4AD738AA7B2EF512 (int32_t ___wrapMode0, const RuntimeMethod* method) ;
// GLTFast.Schema.Sampler/WrapMode GLTFast.Schema.Sampler::ConvertWrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sampler_ConvertWrapMode_m916743DA6F3FF0EF555B78A04B72EA5E99671B4B (int32_t ___wrapMode0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.TextureWrapMode GLTFast.Schema.Sampler::get_wrapU()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sampler_get_wrapU_m48B8382779549C6C466623B00C0ABA9E0A1D088F (Sampler_t107484F70B663B848B559573EBF6A6E12DC7DED0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapModeU(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapModeU_m2002CCB73143182032BD5ED6C80AB9A0ED2A0981 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.TextureWrapMode GLTFast.Schema.Sampler::get_wrapV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sampler_get_wrapV_m98F1F5E9FB05FDBA50BC020C05D46EEE23E8C254 (Sampler_t107484F70B663B848B559573EBF6A6E12DC7DED0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapModeV(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapModeV_m3C79177BAE70103DDBF871896AF464513A0F919D (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void GLTFast.Schema.TextureExtension::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureExtension_GltfSerialize_m2C190DEEAFC1E8FFB0AA0B8D970F645A48A56986 (TextureExtension_t115DCE6DCFAC652D0E7AFD58D792A1369331B3B2* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) ;
// System.Boolean GLTFast.Schema.Texture::Equals(GLTFast.Schema.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture_Equals_mC6BFD43D493CEE8E33749A5D5F734A6085975601 (Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* __this, Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* ___other0, const RuntimeMethod* method) ;
// System.Int32 System.HashCode::Combine<System.Int32,System.Int32,System.Int32>(T1,T2,T3)
inline int32_t HashCode_Combine_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m230136A07D20B826D29A4C7BC5F585AC7469A5E6 (int32_t ___value10, int32_t ___value21, int32_t ___value32, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t, const RuntimeMethod*))HashCode_Combine_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m230136A07D20B826D29A4C7BC5F585AC7469A5E6_gshared)(___value10, ___value21, ___value32, method);
}
// System.Void Unity.Mathematics.float3::.ctor(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_m131368AA87C134F64DD0B5B8684C1345BEC6EE59_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, int32_t ___v0, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_max_mF7035168A46D333C6A703B673220B115411B67C1_inline (float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.UInt32 Unity.Mathematics.math::asuint(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_asuint_mE2534002331AC55DC7BC15E103D3CB7A4465F076_inline (float ___x0, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::asfloat(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_asfloat_m6001AEADA0D3BB53A5BE113CE7052AB6D96FAABA_inline (uint32_t ___x0, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline (float ___f0, const RuntimeMethod* method) ;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// GLTFast.Schema.GLTFAccessorAttributeType GLTFast.Schema.Accessor::get_typeEnum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Accessor_get_typeEnum_m39CF2035160006AB83CDD55ACBC63912CA834EE8 (Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GLTFAccessorAttributeType_t794AEB6586736F9E4F6631135595725AA72DC92F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GLTFAccessorAttributeType_t794AEB6586736F9E4F6631135595725AA72DC92F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_typeEnum != GLTFAccessorAttributeType.Undefined) {
		uint8_t L_0 = __this->____typeEnum_6;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return _typeEnum;
		uint8_t L_1 = __this->____typeEnum_6;
		return L_1;
	}

IL_000f:
	{
		// } else if (!string.IsNullOrEmpty (type)) {
		String_t* L_2 = __this->___type_5;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_2, NULL);
		if (L_3)
		{
			goto IL_004b;
		}
	}
	{
		// _typeEnum = (GLTFAccessorAttributeType)System.Enum.Parse (typeof(GLTFAccessorAttributeType), type, true);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (GLTFAccessorAttributeType_t794AEB6586736F9E4F6631135595725AA72DC92F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		String_t* L_6 = __this->___type_5;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = Enum_Parse_m1ABE53499F05D295104BDE57EE12376CF4513585(L_5, L_6, (bool)1, NULL);
		__this->____typeEnum_6 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_7, GLTFAccessorAttributeType_t794AEB6586736F9E4F6631135595725AA72DC92F_il2cpp_TypeInfo_var))));
		// type = null;
		__this->___type_5 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_5), (void*)(String_t*)NULL);
		// return _typeEnum;
		uint8_t L_8 = __this->____typeEnum_6;
		return L_8;
	}

IL_004b:
	{
		// return GLTFAccessorAttributeType.Undefined;
		return (uint8_t)(0);
	}
}
// System.Void GLTFast.Schema.Accessor::set_typeEnum(GLTFast.Schema.GLTFAccessorAttributeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Accessor_set_typeEnum_mF860B0B0BDE52A79BF7074D631E7355521E7C3F5 (Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GLTFAccessorAttributeType_t794AEB6586736F9E4F6631135595725AA72DC92F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _typeEnum = value;
		uint8_t L_0 = ___value0;
		__this->____typeEnum_6 = L_0;
		// type = value.ToString();
		Il2CppFakeBox<uint8_t> L_1(GLTFAccessorAttributeType_t794AEB6586736F9E4F6631135595725AA72DC92F_il2cpp_TypeInfo_var, (&___value0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		__this->___type_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_5), (void*)L_2);
		// }
		return;
	}
}
// System.Int32 GLTFast.Schema.Accessor::GetComponentTypeSize(GLTFast.Schema.GLTFComponentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Accessor_GetComponentTypeSize_mB85376D5CC503C5ADAC641A07855576DA28A2B28 (int32_t ___componentType0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___componentType0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)5120))))
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_002c;
			}
			case 4:
			{
				goto IL_0030;
			}
			case 5:
			{
				goto IL_002e;
			}
			case 6:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		// return 1;
		return 1;
	}

IL_002c:
	{
		// return 2;
		return 2;
	}

IL_002e:
	{
		// return 4;
		return 4;
	}

IL_0030:
	{
		// throw new ArgumentOutOfRangeException(nameof(type), componentType, null);
		int32_t L_1 = ___componentType0;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GLTFComponentType_tD796933CF2978D626EF93C1078DC2C1822952E21_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), L_3, (String_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Accessor_GetComponentTypeSize_mB85376D5CC503C5ADAC641A07855576DA28A2B28_RuntimeMethod_var)));
	}
}
// GLTFast.Schema.GLTFComponentType GLTFast.Schema.Accessor::GetComponentType(UnityEngine.Rendering.VertexAttributeFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Accessor_GetComponentType_m401D4FB2E6713B98615C2453B932FBE457294226 (int32_t ___format0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___format0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0038;
			}
			case 1:
			{
				goto IL_0038;
			}
			case 2:
			{
				goto IL_003e;
			}
			case 3:
			{
				goto IL_0044;
			}
			case 4:
			{
				goto IL_004a;
			}
			case 5:
			{
				goto IL_0050;
			}
			case 6:
			{
				goto IL_003e;
			}
			case 7:
			{
				goto IL_0044;
			}
			case 8:
			{
				goto IL_004a;
			}
			case 9:
			{
				goto IL_0050;
			}
			case 10:
			{
				goto IL_0056;
			}
			case 11:
			{
				goto IL_0056;
			}
		}
	}
	{
		goto IL_005c;
	}

IL_0038:
	{
		// return GLTFComponentType.Float;
		return (int32_t)(((int32_t)5126));
	}

IL_003e:
	{
		// return GLTFComponentType.UnsignedByte;
		return (int32_t)(((int32_t)5121));
	}

IL_0044:
	{
		// return GLTFComponentType.Byte;
		return (int32_t)(((int32_t)5120));
	}

IL_004a:
	{
		// return GLTFComponentType.UnsignedShort;
		return (int32_t)(((int32_t)5123));
	}

IL_0050:
	{
		// return GLTFComponentType.Short;
		return (int32_t)(((int32_t)5122));
	}

IL_0056:
	{
		// return GLTFComponentType.UnsignedInt;
		return (int32_t)(((int32_t)5125));
	}

IL_005c:
	{
		// throw new ArgumentOutOfRangeException(nameof(format), format, null);
		int32_t L_1 = ___format0;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA)), L_3, (String_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Accessor_GetComponentType_m401D4FB2E6713B98615C2453B932FBE457294226_RuntimeMethod_var)));
	}
}
// GLTFast.Schema.GLTFAccessorAttributeType GLTFast.Schema.Accessor::GetAccessorAttributeType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Accessor_GetAccessorAttributeType_m1525CAE36F6725D238B9E0FA31B46E623FE3C2E2 (int32_t ___dimension0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___dimension0;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, 1)))
		{
			case 0:
			{
				goto IL_001a;
			}
			case 1:
			{
				goto IL_001c;
			}
			case 2:
			{
				goto IL_001e;
			}
			case 3:
			{
				goto IL_0020;
			}
		}
	}
	{
		goto IL_0022;
	}

IL_001a:
	{
		// return GLTFAccessorAttributeType.SCALAR;
		return (uint8_t)(1);
	}

IL_001c:
	{
		// return GLTFAccessorAttributeType.VEC2;
		return (uint8_t)(2);
	}

IL_001e:
	{
		// return GLTFAccessorAttributeType.VEC3;
		return (uint8_t)(3);
	}

IL_0020:
	{
		// return GLTFAccessorAttributeType.VEC4;
		return (uint8_t)(4);
	}

IL_0022:
	{
		// throw new ArgumentOutOfRangeException(nameof(dimension), dimension, null);
		int32_t L_1 = ___dimension0;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79)), L_3, (String_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Accessor_GetAccessorAttributeType_m1525CAE36F6725D238B9E0FA31B46E623FE3C2E2_RuntimeMethod_var)));
	}
}
// System.Int32 GLTFast.Schema.Accessor::GetAccessorAttributeTypeLength(GLTFast.Schema.GLTFAccessorAttributeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Accessor_GetAccessorAttributeTypeLength_m23FB051A63D6A37D227A1692D782746440FC9062 (uint8_t ___type0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___type0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_002a;
			}
			case 3:
			{
				goto IL_002c;
			}
			case 4:
			{
				goto IL_002c;
			}
			case 5:
			{
				goto IL_002e;
			}
			case 6:
			{
				goto IL_0031;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0026:
	{
		// return 1;
		return 1;
	}

IL_0028:
	{
		// return 2;
		return 2;
	}

IL_002a:
	{
		// return 3;
		return 3;
	}

IL_002c:
	{
		// return 4;
		return 4;
	}

IL_002e:
	{
		// return 9;
		return ((int32_t)9);
	}

IL_0031:
	{
		// return 16;
		return ((int32_t)16);
	}

IL_0034:
	{
		// throw new ArgumentOutOfRangeException(nameof(type), type, null);
		uint8_t L_1 = ___type0;
		uint8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GLTFAccessorAttributeType_t794AEB6586736F9E4F6631135595725AA72DC92F_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), L_3, (String_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Accessor_GetAccessorAttributeTypeLength_m23FB051A63D6A37D227A1692D782746440FC9062_RuntimeMethod_var)));
	}
}
// System.Nullable`1<UnityEngine.Bounds> GLTFast.Schema.Accessor::TryGetBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t02CE5E70DFA26EDBAB3AB261067AE257C96B822F Accessor_TryGetBounds_mB153F4AB96ACC9E668E19F839183111CB78AB76C (Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m203A376A0AE894BD4288351A68585CF811118A85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_0;
	memset((&V_0), 0, sizeof(V_0));
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t02CE5E70DFA26EDBAB3AB261067AE257C96B822F V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (min != null && min.Length > 2 && max != null && max.Length > 2) {
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___min_8;
		if (!L_0)
		{
			goto IL_0182;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___min_8;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) <= ((int32_t)2)))
		{
			goto IL_0182;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___max_7;
		if (!L_2)
		{
			goto IL_0182;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___max_7;
		NullCheck(L_3);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) <= ((int32_t)2)))
		{
			goto IL_0182;
		}
	}
	{
		// var maxBounds = new float3(-min[0], max[1], max[2]);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___min_8;
		NullCheck(L_4);
		int32_t L_5 = 0;
		float L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = __this->___max_7;
		NullCheck(L_7);
		int32_t L_8 = 1;
		float L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___max_7;
		NullCheck(L_10);
		int32_t L_11 = 2;
		float L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&V_0), ((-L_6)), L_9, L_12, NULL);
		// var minBounds = new float3(-max[0], min[1], min[2]);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = __this->___max_7;
		NullCheck(L_13);
		int32_t L_14 = 0;
		float L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = __this->___min_8;
		NullCheck(L_16);
		int32_t L_17 = 1;
		float L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = __this->___min_8;
		NullCheck(L_19);
		int32_t L_20 = 2;
		float L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&V_1), ((-L_15)), L_18, L_21, NULL);
		// if(normalized) {
		bool L_22 = __this->___normalized_3;
		if (!L_22)
		{
			goto IL_0159;
		}
	}
	{
		// switch (componentType) {
		int32_t L_23 = __this->___componentType_2;
		V_2 = L_23;
		int32_t L_24 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_24, ((int32_t)5120))))
		{
			case 0:
			{
				goto IL_00ad;
			}
			case 1:
			{
				goto IL_00dd;
			}
			case 2:
			{
				goto IL_00f7;
			}
			case 3:
			{
				goto IL_0127;
			}
			case 4:
			{
				goto IL_0159;
			}
			case 5:
			{
				goto IL_0141;
			}
		}
	}
	{
		goto IL_0159;
	}

IL_00ad:
	{
		// maxBounds = math.max(maxBounds/sbyte.MaxValue,-1);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26;
		L_26 = float3_op_Division_m337596E152F22C0A19CD1189C6E38BC5EAB9514F_inline(L_25, (127.0f), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_27;
		L_27 = float3_op_Implicit_m2D3D66A7EE86A311E60BF3C56EE34AAC6457D01D_inline((-1), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_28;
		L_28 = math_max_mEAED152166B3B2D1D6EF379FFAD18A85D52E6007_inline(L_26, L_27, NULL);
		V_0 = L_28;
		// minBounds = math.max(minBounds/sbyte.MaxValue,-1);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = V_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_30;
		L_30 = float3_op_Division_m337596E152F22C0A19CD1189C6E38BC5EAB9514F_inline(L_29, (127.0f), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_31;
		L_31 = float3_op_Implicit_m2D3D66A7EE86A311E60BF3C56EE34AAC6457D01D_inline((-1), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32;
		L_32 = math_max_mEAED152166B3B2D1D6EF379FFAD18A85D52E6007_inline(L_30, L_31, NULL);
		V_1 = L_32;
		// break;
		goto IL_0159;
	}

IL_00dd:
	{
		// maxBounds /= byte.MaxValue;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_33 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_34;
		L_34 = float3_op_Division_m337596E152F22C0A19CD1189C6E38BC5EAB9514F_inline(L_33, (255.0f), NULL);
		V_0 = L_34;
		// minBounds /= byte.MaxValue;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_35 = V_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_36;
		L_36 = float3_op_Division_m337596E152F22C0A19CD1189C6E38BC5EAB9514F_inline(L_35, (255.0f), NULL);
		V_1 = L_36;
		// break;
		goto IL_0159;
	}

IL_00f7:
	{
		// maxBounds = math.max(maxBounds/short.MaxValue,-1);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_37 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_38;
		L_38 = float3_op_Division_m337596E152F22C0A19CD1189C6E38BC5EAB9514F_inline(L_37, (32767.0f), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_39;
		L_39 = float3_op_Implicit_m2D3D66A7EE86A311E60BF3C56EE34AAC6457D01D_inline((-1), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_40;
		L_40 = math_max_mEAED152166B3B2D1D6EF379FFAD18A85D52E6007_inline(L_38, L_39, NULL);
		V_0 = L_40;
		// minBounds = math.max(minBounds/short.MaxValue,-1);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_41 = V_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_42;
		L_42 = float3_op_Division_m337596E152F22C0A19CD1189C6E38BC5EAB9514F_inline(L_41, (32767.0f), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_43;
		L_43 = float3_op_Implicit_m2D3D66A7EE86A311E60BF3C56EE34AAC6457D01D_inline((-1), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_44;
		L_44 = math_max_mEAED152166B3B2D1D6EF379FFAD18A85D52E6007_inline(L_42, L_43, NULL);
		V_1 = L_44;
		// break;
		goto IL_0159;
	}

IL_0127:
	{
		// maxBounds /= ushort.MaxValue;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_45 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_46;
		L_46 = float3_op_Division_m337596E152F22C0A19CD1189C6E38BC5EAB9514F_inline(L_45, (65535.0f), NULL);
		V_0 = L_46;
		// minBounds /= ushort.MaxValue;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_47 = V_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_48;
		L_48 = float3_op_Division_m337596E152F22C0A19CD1189C6E38BC5EAB9514F_inline(L_47, (65535.0f), NULL);
		V_1 = L_48;
		// break;
		goto IL_0159;
	}

IL_0141:
	{
		// maxBounds /= uint.MaxValue;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_49 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_50;
		L_50 = float3_op_Division_m337596E152F22C0A19CD1189C6E38BC5EAB9514F_inline(L_49, (4.2949673E+09f), NULL);
		V_0 = L_50;
		// minBounds /= uint.MaxValue;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_51 = V_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_52;
		L_52 = float3_op_Division_m337596E152F22C0A19CD1189C6E38BC5EAB9514F_inline(L_51, (4.2949673E+09f), NULL);
		V_1 = L_52;
	}

IL_0159:
	{
		// return new Bounds {
		//     max = maxBounds,
		//     min = minBounds
		// };
		il2cpp_codegen_initobj((&V_3), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_53 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = float3_op_Implicit_mEFBD5C49B7BC786CEEA7076D3A53D421BF88E2CB(L_53, NULL);
		Bounds_set_max_mD846329090A0A151CA139A477B70AD6A76FC1A39((&V_3), L_54, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_55 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = float3_op_Implicit_mEFBD5C49B7BC786CEEA7076D3A53D421BF88E2CB(L_55, NULL);
		Bounds_set_min_m7BAFB7EDB329CBA896FA096E671D17E498C81A35((&V_3), L_56, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_57 = V_3;
		Nullable_1_t02CE5E70DFA26EDBAB3AB261067AE257C96B822F L_58;
		memset((&L_58), 0, sizeof(L_58));
		Nullable_1__ctor_m203A376A0AE894BD4288351A68585CF811118A85((&L_58), L_57, /*hidden argument*/Nullable_1__ctor_m203A376A0AE894BD4288351A68585CF811118A85_RuntimeMethod_var);
		return L_58;
	}

IL_0182:
	{
		// return null;
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t02CE5E70DFA26EDBAB3AB261067AE257C96B822F));
		Nullable_1_t02CE5E70DFA26EDBAB3AB261067AE257C96B822F L_59 = V_4;
		return L_59;
	}
}
// System.Boolean GLTFast.Schema.Accessor::get_isSparse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Accessor_get_isSparse_mFED0429309A6972D56990A96A514C87C38408572 (Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* __this, const RuntimeMethod* method) 
{
	{
		// public bool isSparse => sparse != null;
		AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* L_0 = __this->___sparse_9;
		return (bool)((!(((RuntimeObject*)(AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void GLTFast.Schema.Accessor::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Accessor_GltfSerialize_m3A1242EC67EFAA2EFBBB14EAD8B59E19D97D3934 (Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A47A30B4F70A2FBDC2C08E3C1841D8EF3F70D07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32D308F08E201660A1A1B244F9AF831CDBFC2635);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral499284EE1D3CD7FE549A05AE5F4E78D079B96018);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CBEDCD5FF6A0350179E0A1A9BEB1BCEC50F3773);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA47504598030EDA5230F4D04BF6F4728D7CF126D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB662A576323ABD7C7E8DBEF290C585C8E58B10A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFF034CB8914370608177D623EBF6B0AFD16C6E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// if (bufferView >= 0) {
		int32_t L_1 = __this->___bufferView_0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		// writer.AddProperty("bufferView", bufferView);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_2 = ___writer0;
		int32_t L_3 = __this->___bufferView_0;
		NullCheck(L_2);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_2, _stringLiteral2A47A30B4F70A2FBDC2C08E3C1841D8EF3F70D07, L_3, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0020:
	{
		// writer.AddProperty("componentType", (int)componentType);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_4 = ___writer0;
		int32_t L_5 = __this->___componentType_2;
		NullCheck(L_4);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_4, _stringLiteralFFF034CB8914370608177D623EBF6B0AFD16C6E0, L_5, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
		// writer.AddProperty("count", count);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_6 = ___writer0;
		int32_t L_7 = __this->___count_4;
		NullCheck(L_6);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_6, _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, L_7, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
		// writer.AddProperty("type", type);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_8 = ___writer0;
		String_t* L_9 = __this->___type_5;
		NullCheck(L_8);
		JsonWriter_AddProperty_m9BBF34A6F6097C126C3EEB74D4B457A96ABAA179(L_8, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, L_9, NULL);
		// if (byteOffset > 0) {
		int32_t L_10 = __this->___byteOffset_1;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		// writer.AddProperty("byteOffset", byteOffset);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_11 = ___writer0;
		int32_t L_12 = __this->___byteOffset_1;
		NullCheck(L_11);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_11, _stringLiteral7CBEDCD5FF6A0350179E0A1A9BEB1BCEC50F3773, L_12, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_006d:
	{
		// if (normalized) {
		bool L_13 = __this->___normalized_3;
		if (!L_13)
		{
			goto IL_0086;
		}
	}
	{
		// writer.AddProperty("normalized", normalized);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_14 = ___writer0;
		bool L_15 = __this->___normalized_3;
		NullCheck(L_14);
		JsonWriter_AddProperty_mE99650D1C81BAD7E3DEE776CF534C696B28DFDB0(L_14, _stringLiteralCB662A576323ABD7C7E8DBEF290C585C8E58B10A, L_15, NULL);
	}

IL_0086:
	{
		// if (max!=null) {
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = __this->___max_7;
		if (!L_16)
		{
			goto IL_009f;
		}
	}
	{
		// writer.AddArrayProperty("max", max);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_17 = ___writer0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = __this->___max_7;
		NullCheck(L_17);
		JsonWriter_AddArrayProperty_m598554F05B3A9E2CB6428CBEFCE33AFBB2931BC8(L_17, _stringLiteral499284EE1D3CD7FE549A05AE5F4E78D079B96018, (RuntimeObject*)L_18, NULL);
	}

IL_009f:
	{
		// if (min!=null) {
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = __this->___min_8;
		if (!L_19)
		{
			goto IL_00b8;
		}
	}
	{
		// writer.AddArrayProperty("min", min);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_20 = ___writer0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = __this->___min_8;
		NullCheck(L_20);
		JsonWriter_AddArrayProperty_m598554F05B3A9E2CB6428CBEFCE33AFBB2931BC8(L_20, _stringLiteral32D308F08E201660A1A1B244F9AF831CDBFC2635, (RuntimeObject*)L_21, NULL);
	}

IL_00b8:
	{
		// if (sparse != null) {
		AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* L_22 = __this->___sparse_9;
		if (!L_22)
		{
			goto IL_00dd;
		}
	}
	{
		// writer.AddProperty("sparse");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_23 = ___writer0;
		NullCheck(L_23);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_23, _stringLiteralA47504598030EDA5230F4D04BF6F4728D7CF126D, NULL);
		// sparse.GltfSerialize(writer);
		AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* L_24 = __this->___sparse_9;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_25 = ___writer0;
		NullCheck(L_24);
		AccessorSparse_GltfSerialize_m6F2E880E0E824AAAC863C9CD39308757510E7ACA(L_24, L_25, NULL);
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_26 = ___writer0;
		NullCheck(L_26);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_26, NULL);
	}

IL_00dd:
	{
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_27 = ___writer0;
		NullCheck(L_27);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_27, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.Accessor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Accessor__ctor_mAA2738803B76953AC4D9034CBAD01A1A62123294 (Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* __this, const RuntimeMethod* method) 
{
	{
		// public int bufferView = -1;
		__this->___bufferView_0 = (-1);
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
// System.Void GLTFast.Schema.AccessorSparse::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessorSparse_GltfSerialize_m6F2E880E0E824AAAC863C9CD39308757510E7ACA (AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DC0ECF676CDB8466A06C299A2E315606DFC00BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// writer.AddProperty("count",count);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		int32_t L_2 = __this->___count_0;
		NullCheck(L_1);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_1, _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, L_2, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
		// if (indices != null) {
		AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C* L_3 = __this->___indices_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// writer.AddProperty("indices");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_4 = ___writer0;
		NullCheck(L_4);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_4, _stringLiteral4DC0ECF676CDB8466A06C299A2E315606DFC00BD, NULL);
		// indices.GltfSerialize(writer);
		AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C* L_5 = __this->___indices_1;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_6 = ___writer0;
		NullCheck(L_5);
		AccessorSparseIndices_GltfSerialize_m9C5D1D81856B42CF3CF147183B3C5D77DA69DCF4(L_5, L_6, NULL);
	}

IL_0036:
	{
		// if (values != null) {
		AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E* L_7 = __this->___values_2;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		// writer.AddProperty("values");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_8 = ___writer0;
		NullCheck(L_8);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_8, _stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6, NULL);
		// values.GltfSerialize(writer);
		AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E* L_9 = __this->___values_2;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_10 = ___writer0;
		NullCheck(L_9);
		AccessorSparseValues_GltfSerialize_mBF1E21324B6D795ABD2EF25EAB71DADCE16DA3A2(L_9, L_10, NULL);
	}

IL_0055:
	{
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_11 = ___writer0;
		NullCheck(L_11);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_11, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.AccessorSparse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessorSparse__ctor_mC5E594D75B29450BFCF898A3DAAE9AECDC0E1D74 (AccessorSparse_t9FD522136B930070281A20D5F80528641DE1E5D4* __this, const RuntimeMethod* method) 
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
// System.Void GLTFast.Schema.AccessorSparseIndices::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessorSparseIndices_GltfSerialize_m9C5D1D81856B42CF3CF147183B3C5D77DA69DCF4 (AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddProperty_TisGLTFComponentType_tD796933CF2978D626EF93C1078DC2C1822952E21_m061CF0C897D0BF4C17174476F9F8202221784475_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0CF21958C74B8155CD6123F3773B239B87935FB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A47A30B4F70A2FBDC2C08E3C1841D8EF3F70D07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CBEDCD5FF6A0350179E0A1A9BEB1BCEC50F3773);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFF034CB8914370608177D623EBF6B0AFD16C6E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// writer.AddProperty("bufferView", bufferView);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		uint32_t L_2 = __this->___bufferView_0;
		NullCheck(L_1);
		JsonWriter_AddProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0CF21958C74B8155CD6123F3773B239B87935FB6(L_1, _stringLiteral2A47A30B4F70A2FBDC2C08E3C1841D8EF3F70D07, L_2, JsonWriter_AddProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0CF21958C74B8155CD6123F3773B239B87935FB6_RuntimeMethod_var);
		// writer.AddProperty("componentType", componentType);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_3 = ___writer0;
		int32_t L_4 = __this->___componentType_2;
		NullCheck(L_3);
		JsonWriter_AddProperty_TisGLTFComponentType_tD796933CF2978D626EF93C1078DC2C1822952E21_m061CF0C897D0BF4C17174476F9F8202221784475(L_3, _stringLiteralFFF034CB8914370608177D623EBF6B0AFD16C6E0, L_4, JsonWriter_AddProperty_TisGLTFComponentType_tD796933CF2978D626EF93C1078DC2C1822952E21_m061CF0C897D0BF4C17174476F9F8202221784475_RuntimeMethod_var);
		// if (byteOffset >= 0) {
		int32_t L_5 = __this->___byteOffset_1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		// writer.AddProperty("byteOffset", byteOffset);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_6 = ___writer0;
		int32_t L_7 = __this->___byteOffset_1;
		NullCheck(L_6);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_6, _stringLiteral7CBEDCD5FF6A0350179E0A1A9BEB1BCEC50F3773, L_7, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0042:
	{
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_8 = ___writer0;
		NullCheck(L_8);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_8, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.AccessorSparseIndices::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessorSparseIndices__ctor_m4339DD9D789AC72D6B69D081D7A286C3085DFF83 (AccessorSparseIndices_t63BDBD17ED494C648A783754602F20314E71518C* __this, const RuntimeMethod* method) 
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
// System.Void GLTFast.Schema.AccessorSparseValues::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessorSparseValues_GltfSerialize_mBF1E21324B6D795ABD2EF25EAB71DADCE16DA3A2 (AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0CF21958C74B8155CD6123F3773B239B87935FB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A47A30B4F70A2FBDC2C08E3C1841D8EF3F70D07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CBEDCD5FF6A0350179E0A1A9BEB1BCEC50F3773);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// writer.AddProperty("bufferView", bufferView);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		uint32_t L_2 = __this->___bufferView_0;
		NullCheck(L_1);
		JsonWriter_AddProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0CF21958C74B8155CD6123F3773B239B87935FB6(L_1, _stringLiteral2A47A30B4F70A2FBDC2C08E3C1841D8EF3F70D07, L_2, JsonWriter_AddProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0CF21958C74B8155CD6123F3773B239B87935FB6_RuntimeMethod_var);
		// if (byteOffset >= 0) {
		int32_t L_3 = __this->___byteOffset_1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// writer.AddProperty("byteOffset", byteOffset);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_4 = ___writer0;
		int32_t L_5 = __this->___byteOffset_1;
		NullCheck(L_4);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_4, _stringLiteral7CBEDCD5FF6A0350179E0A1A9BEB1BCEC50F3773, L_5, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0031:
	{
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_6 = ___writer0;
		NullCheck(L_6);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_6, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.AccessorSparseValues::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessorSparseValues__ctor_m04CACCDE6463782BDDAC9DFD9C5375A2C92D57E0 (AccessorSparseValues_tA32622199076881771744B74EB6128F288DF7F7E* __this, const RuntimeMethod* method) 
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
// System.Void GLTFast.Schema.Asset::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asset_GltfSerialize_m271FF28709B8242AA1F0A847097742E674AB69C2 (Asset_tBAD49FAA33C45350B619BF3D923C3A73A8982453* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0653373E4E9ADC8A681764C68A7F4849F49EEF86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral561EB5B5AB6D3735847A6A77E3B0707F8DD6B930);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE0197159B309E4A12263D0785D896AD462D3349);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.OpenBrackets();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_OpenBrackets_m0E765CA67526A78131D965DA563AA8C63824A766(L_0, NULL);
		// if (!string.IsNullOrEmpty(version)) {
		String_t* L_1 = __this->___version_2;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		// writer.AddProperty("version", version);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_3 = ___writer0;
		String_t* L_4 = __this->___version_2;
		NullCheck(L_3);
		JsonWriter_AddProperty_m9BBF34A6F6097C126C3EEB74D4B457A96ABAA179(L_3, _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052, L_4, NULL);
	}

IL_0024:
	{
		// if (!string.IsNullOrEmpty(generator)) {
		String_t* L_5 = __this->___generator_1;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
		if (L_6)
		{
			goto IL_0042;
		}
	}
	{
		// writer.AddProperty("generator", generator);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_7 = ___writer0;
		String_t* L_8 = __this->___generator_1;
		NullCheck(L_7);
		JsonWriter_AddProperty_m9BBF34A6F6097C126C3EEB74D4B457A96ABAA179(L_7, _stringLiteral0653373E4E9ADC8A681764C68A7F4849F49EEF86, L_8, NULL);
	}

IL_0042:
	{
		// if (!string.IsNullOrEmpty(copyright)) {
		String_t* L_9 = __this->___copyright_0;
		bool L_10;
		L_10 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_9, NULL);
		if (L_10)
		{
			goto IL_0060;
		}
	}
	{
		// writer.AddProperty("copyright", copyright);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_11 = ___writer0;
		String_t* L_12 = __this->___copyright_0;
		NullCheck(L_11);
		JsonWriter_AddProperty_m9BBF34A6F6097C126C3EEB74D4B457A96ABAA179(L_11, _stringLiteral561EB5B5AB6D3735847A6A77E3B0707F8DD6B930, L_12, NULL);
	}

IL_0060:
	{
		// if (!string.IsNullOrEmpty(minVersion)) {
		String_t* L_13 = __this->___minVersion_3;
		bool L_14;
		L_14 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_13, NULL);
		if (L_14)
		{
			goto IL_007e;
		}
	}
	{
		// writer.AddProperty("minVersion", minVersion);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_15 = ___writer0;
		String_t* L_16 = __this->___minVersion_3;
		NullCheck(L_15);
		JsonWriter_AddProperty_m9BBF34A6F6097C126C3EEB74D4B457A96ABAA179(L_15, _stringLiteralCE0197159B309E4A12263D0785D896AD462D3349, L_16, NULL);
	}

IL_007e:
	{
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_17 = ___writer0;
		NullCheck(L_17);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_17, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.Asset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asset__ctor_m4C6EA2ABC13FA384B78D7BDA7BCF06BA18A21C55 (Asset_tBAD49FAA33C45350B619BF3D923C3A73A8982453* __this, const RuntimeMethod* method) 
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
// System.Void GLTFast.Schema.Buffer::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_GltfSerialize_m5F1597E21CB80B97FBD830D2E9ACCFC495334FD2 (Buffer_t47A7E9EBA4EF31CA3305CFDEC7717F3C96E36BA0* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0CF21958C74B8155CD6123F3773B239B87935FB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10C63C8C602DD5E38BE4A758C90EBAC324CD3E69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6CF23A4D343EA2340277D3E6D4C1E83BD5134DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// if (!string.IsNullOrEmpty(uri)) {
		String_t* L_1 = __this->___uri_1;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		// writer.AddProperty("uri", uri);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_3 = ___writer0;
		String_t* L_4 = __this->___uri_1;
		NullCheck(L_3);
		JsonWriter_AddProperty_m9BBF34A6F6097C126C3EEB74D4B457A96ABAA179(L_3, _stringLiteral10C63C8C602DD5E38BE4A758C90EBAC324CD3E69, L_4, NULL);
	}

IL_0024:
	{
		// writer.AddProperty("byteLength",byteLength);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_5 = ___writer0;
		uint32_t L_6 = __this->___byteLength_0;
		NullCheck(L_5);
		JsonWriter_AddProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0CF21958C74B8155CD6123F3773B239B87935FB6(L_5, _stringLiteralE6CF23A4D343EA2340277D3E6D4C1E83BD5134DE, L_6, JsonWriter_AddProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0CF21958C74B8155CD6123F3773B239B87935FB6_RuntimeMethod_var);
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_7 = ___writer0;
		NullCheck(L_7);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_7, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.Buffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer__ctor_mE4A1C884B675DD839BE2708365B336212CA827BB (Buffer_t47A7E9EBA4EF31CA3305CFDEC7717F3C96E36BA0* __this, const RuntimeMethod* method) 
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
// System.Void GLTFast.Schema.BufferSlice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSlice__ctor_m455BE4E1369C352C44BA40B4E2C6BE3720865917 (BufferSlice_tD3ED9EDD12C93CF9E47B8C6A09551E5D2036764D* __this, const RuntimeMethod* method) 
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
// System.Void GLTFast.Schema.BufferViewBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferViewBase__ctor_mEAB4F5F6EFEF337ED26C4B029EB985D1834E3708 (BufferViewBase_tF706E75FF34AE31D9F158FA379D519C6487255C8* __this, const RuntimeMethod* method) 
{
	{
		// public int byteStride = -1;
		__this->___byteStride_3 = (-1);
		BufferSlice__ctor_m455BE4E1369C352C44BA40B4E2C6BE3720865917(__this, NULL);
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
// System.Void GLTFast.Schema.BufferView::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferView_GltfSerialize_mF30AD67022033D0691426F39BA82704A071D19C3 (BufferView_tA7E868125A221CC5221B38AE3F215390767834D1* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral320772EF40302B49A179DB96BAD02224E97B4018);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C497E20DCC43A8DDA561C73D787C08DAF284123);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CBEDCD5FF6A0350179E0A1A9BEB1BCEC50F3773);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6CF23A4D343EA2340277D3E6D4C1E83BD5134DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// writer.AddProperty("buffer", buffer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		int32_t L_2 = ((BufferViewBase_tF706E75FF34AE31D9F158FA379D519C6487255C8*)__this)->___buffer_2;
		NullCheck(L_1);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_1, _stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10, L_2, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
		// writer.AddProperty("byteLength", byteLength);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_3 = ___writer0;
		int32_t L_4 = ((BufferSlice_tD3ED9EDD12C93CF9E47B8C6A09551E5D2036764D*)__this)->___byteLength_1;
		NullCheck(L_3);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_3, _stringLiteralE6CF23A4D343EA2340277D3E6D4C1E83BD5134DE, L_4, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
		// if (byteOffset > 0) {
		int32_t L_5 = ((BufferSlice_tD3ED9EDD12C93CF9E47B8C6A09551E5D2036764D*)__this)->___byteOffset_0;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		// writer.AddProperty("byteOffset", byteOffset);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_6 = ___writer0;
		int32_t L_7 = ((BufferSlice_tD3ED9EDD12C93CF9E47B8C6A09551E5D2036764D*)__this)->___byteOffset_0;
		NullCheck(L_6);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_6, _stringLiteral7CBEDCD5FF6A0350179E0A1A9BEB1BCEC50F3773, L_7, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0042:
	{
		// if (byteStride > 0) {
		int32_t L_8 = ((BufferViewBase_tF706E75FF34AE31D9F158FA379D519C6487255C8*)__this)->___byteStride_3;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		// writer.AddProperty("byteStride", byteStride);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_9 = ___writer0;
		int32_t L_10 = ((BufferViewBase_tF706E75FF34AE31D9F158FA379D519C6487255C8*)__this)->___byteStride_3;
		NullCheck(L_9);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_9, _stringLiteral6C497E20DCC43A8DDA561C73D787C08DAF284123, L_10, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_005c:
	{
		// if (target > 0) {
		int32_t L_11 = __this->___target_4;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		// writer.AddProperty("target", target);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_12 = ___writer0;
		int32_t L_13 = __this->___target_4;
		NullCheck(L_12);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_12, _stringLiteral320772EF40302B49A179DB96BAD02224E97B4018, L_13, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0076:
	{
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_14 = ___writer0;
		NullCheck(L_14);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_14, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.BufferView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferView__ctor_mA6F62DDBC3302A885F66AB02B171148D5A737D28 (BufferView_tA7E868125A221CC5221B38AE3F215390767834D1* __this, const RuntimeMethod* method) 
{
	{
		BufferViewBase__ctor_mEAB4F5F6EFEF337ED26C4B029EB985D1834E3708(__this, NULL);
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
// System.Void GLTFast.Schema.GltfAnimation::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfAnimation_GltfSerialize_m173CD2966371748A472B9DC4CDA61155548E4930 (GltfAnimation_t4C1CEA25BD7667930E1BDF49F87B3F4906254341* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// GltfSerializeRoot(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		RootChild_GltfSerializeRoot_m5633F10A7CB50F661EBC5D3E552C5946F4C3D35E(__this, L_1, NULL);
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_2 = ___writer0;
		NullCheck(L_2);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_2, NULL);
		// throw new System.NotImplementedException($"GltfSerialize missing on {GetType()}");
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		String_t* L_4;
		L_4 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9F7B02C31DDA99DC72E6A6212C308FDD1C99628)), L_3, NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_5 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GltfAnimation_GltfSerialize_m173CD2966371748A472B9DC4CDA61155548E4930_RuntimeMethod_var)));
	}
}
// System.Void GLTFast.Schema.GltfAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GltfAnimation__ctor_mE0C2F32E02A2A1B3F875A7FAE6A54584A1842C06 (GltfAnimation_t4C1CEA25BD7667930E1BDF49F87B3F4906254341* __this, const RuntimeMethod* method) 
{
	{
		RootChild__ctor_m889C52000B217955811A13981472070C7835FF84(__this, NULL);
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
// System.Void GLTFast.Schema.AnimationChannel::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationChannel_GltfSerialize_m4608BDE2B0FC4983AEEC36EFDEACD2D9705F1DF4 (AnimationChannel_t441D9B3D7A54F62EB85F217593485993153D3557* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException($"GltfSerialize missing on {GetType()}");
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		String_t* L_1;
		L_1 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9F7B02C31DDA99DC72E6A6212C308FDD1C99628)), L_0, NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_2 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationChannel_GltfSerialize_m4608BDE2B0FC4983AEEC36EFDEACD2D9705F1DF4_RuntimeMethod_var)));
	}
}
// System.Void GLTFast.Schema.AnimationChannel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationChannel__ctor_mB5ECE1A08839DF08FDB60886641A635B3B7B1AF7 (AnimationChannel_t441D9B3D7A54F62EB85F217593485993153D3557* __this, const RuntimeMethod* method) 
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
// GLTFast.Schema.AnimationChannel/Path GLTFast.Schema.AnimationChannelTarget::get_pathEnum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationChannelTarget_get_pathEnum_m3EA8A3417B02EFE1B924B65DE90BE235E2FD596C (AnimationChannelTarget_t9D13F47E0F508AC08B284FA0EE8E59BAFADD4F56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t87A6E68FC2864A5AD60EFF4C0531F8CA1C19345F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t87A6E68FC2864A5AD60EFF4C0531F8CA1C19345F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( m_Path == AnimationChannel.Path.unknown ) {
		int32_t L_0 = __this->___m_Path_2;
		if (L_0)
		{
			goto IL_0046;
		}
	}
	{
		// if (!string.IsNullOrEmpty (path)) {
		String_t* L_1 = __this->___path_1;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (L_2)
		{
			goto IL_0044;
		}
	}
	{
		// m_Path = (AnimationChannel.Path)System.Enum.Parse (typeof(AnimationChannel.Path), path, true);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Path_t87A6E68FC2864A5AD60EFF4C0531F8CA1C19345F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		String_t* L_5 = __this->___path_1;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = Enum_Parse_m1ABE53499F05D295104BDE57EE12376CF4513585(L_4, L_5, (bool)1, NULL);
		__this->___m_Path_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_6, Path_t87A6E68FC2864A5AD60EFF4C0531F8CA1C19345F_il2cpp_TypeInfo_var))));
		// path = null;
		__this->___path_1 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_1), (void*)(String_t*)NULL);
		// return m_Path;
		int32_t L_7 = __this->___m_Path_2;
		return L_7;
	}

IL_0044:
	{
		// return AnimationChannel.Path.invalid;
		return (int32_t)(1);
	}

IL_0046:
	{
		// return m_Path;
		int32_t L_8 = __this->___m_Path_2;
		return L_8;
	}
}
// System.Void GLTFast.Schema.AnimationChannelTarget::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationChannelTarget_GltfSerialize_m96555A3E9793FE7EC4594881425E635AEF003DCB (AnimationChannelTarget_t9D13F47E0F508AC08B284FA0EE8E59BAFADD4F56* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException($"GltfSerialize missing on {GetType()}");
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		String_t* L_1;
		L_1 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9F7B02C31DDA99DC72E6A6212C308FDD1C99628)), L_0, NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_2 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationChannelTarget_GltfSerialize_m96555A3E9793FE7EC4594881425E635AEF003DCB_RuntimeMethod_var)));
	}
}
// System.Void GLTFast.Schema.AnimationChannelTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationChannelTarget__ctor_m49FDF2A78E6A3909347701273A74E5CE0F1F3112 (AnimationChannelTarget_t9D13F47E0F508AC08B284FA0EE8E59BAFADD4F56* __this, const RuntimeMethod* method) 
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
// GLTFast.Schema.InterpolationType GLTFast.Schema.AnimationSampler::get_interpolationEnum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationSampler_get_interpolationEnum_m53E5244D44C0267D5F6FB30F7954DE05BFF3C2A9 (AnimationSampler_t439DDD9C345604D45A5D051AA40C440CD26B52A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterpolationType_tA18AA3E8E54F72CD0EC6CDFDC831FB457C62989F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterpolationType_tA18AA3E8E54F72CD0EC6CDFDC831FB457C62989F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( m_Interpolation == InterpolationType.Unknown ) {
		int32_t L_0 = __this->___m_Interpolation_2;
		if (L_0)
		{
			goto IL_004b;
		}
	}
	{
		// if (!string.IsNullOrEmpty (interpolation)) {
		String_t* L_1 = __this->___interpolation_1;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (L_2)
		{
			goto IL_0044;
		}
	}
	{
		// m_Interpolation = (InterpolationType)Enum.Parse (typeof(InterpolationType), interpolation, true);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (InterpolationType_tA18AA3E8E54F72CD0EC6CDFDC831FB457C62989F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		String_t* L_5 = __this->___interpolation_1;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = Enum_Parse_m1ABE53499F05D295104BDE57EE12376CF4513585(L_4, L_5, (bool)1, NULL);
		__this->___m_Interpolation_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_6, InterpolationType_tA18AA3E8E54F72CD0EC6CDFDC831FB457C62989F_il2cpp_TypeInfo_var))));
		// interpolation = null;
		__this->___interpolation_1 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interpolation_1), (void*)(String_t*)NULL);
		// return m_Interpolation;
		int32_t L_7 = __this->___m_Interpolation_2;
		return L_7;
	}

IL_0044:
	{
		// m_Interpolation = InterpolationType.LINEAR;
		__this->___m_Interpolation_2 = 1;
	}

IL_004b:
	{
		// return m_Interpolation;
		int32_t L_8 = __this->___m_Interpolation_2;
		return L_8;
	}
}
// System.Void GLTFast.Schema.AnimationSampler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationSampler__ctor_mF5C559FECBDBBE7A1645D9F5A6278140700B2A6F (AnimationSampler_t439DDD9C345604D45A5D051AA40C440CD26B52A8* __this, const RuntimeMethod* method) 
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
// GLTFast.Schema.Camera/Type GLTFast.Schema.Camera::get_typeEnum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_typeEnum_m6D50DD9BA20C8C29118A6D418C062661152719AB (Camera_tF07308B27D535448829D7C97A8C54144DF18A9B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m2A50829A5A43E5A6F969AA424DE364958591ABFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mBAC04596974DD7BC3BC7932BF6501E21E6CD0BA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC2357292D9339B73EED2D780E1F7F4DDB5037CE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t8C9B203D9A71F4B36EDCECF89FC2B34CDDBE76C5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t8C9B203D9A71F4B36EDCECF89FC2B34CDDBE76C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_typeEnum.HasValue) {
		Nullable_1_tE2DB22D96422A179FAE51C04DB8815039D4FB097* L_0 = (&__this->____typeEnum_2);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mBAC04596974DD7BC3BC7932BF6501E21E6CD0BA6_inline(L_0, Nullable_1_get_HasValue_mBAC04596974DD7BC3BC7932BF6501E21E6CD0BA6_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// return _typeEnum.Value;
		Nullable_1_tE2DB22D96422A179FAE51C04DB8815039D4FB097* L_2 = (&__this->____typeEnum_2);
		int32_t L_3;
		L_3 = Nullable_1_get_Value_mC2357292D9339B73EED2D780E1F7F4DDB5037CE7(L_2, Nullable_1_get_Value_mC2357292D9339B73EED2D780E1F7F4DDB5037CE7_RuntimeMethod_var);
		return L_3;
	}

IL_0019:
	{
		// if (!string.IsNullOrEmpty (type)) {
		String_t* L_4 = __this->___type_1;
		bool L_5;
		L_5 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_4, NULL);
		if (L_5)
		{
			goto IL_005f;
		}
	}
	{
		// _typeEnum = (Type)System.Enum.Parse (typeof(Type), type, true);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Type_t8C9B203D9A71F4B36EDCECF89FC2B34CDDBE76C5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		String_t* L_8 = __this->___type_1;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = Enum_Parse_m1ABE53499F05D295104BDE57EE12376CF4513585(L_7, L_8, (bool)1, NULL);
		Nullable_1_tE2DB22D96422A179FAE51C04DB8815039D4FB097 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Nullable_1__ctor_m2A50829A5A43E5A6F969AA424DE364958591ABFE((&L_10), ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_9, Type_t8C9B203D9A71F4B36EDCECF89FC2B34CDDBE76C5_il2cpp_TypeInfo_var)))), /*hidden argument*/Nullable_1__ctor_m2A50829A5A43E5A6F969AA424DE364958591ABFE_RuntimeMethod_var);
		__this->____typeEnum_2 = L_10;
		// type = null;
		__this->___type_1 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_1), (void*)(String_t*)NULL);
		// return _typeEnum.Value;
		Nullable_1_tE2DB22D96422A179FAE51C04DB8815039D4FB097* L_11 = (&__this->____typeEnum_2);
		int32_t L_12;
		L_12 = Nullable_1_get_Value_mC2357292D9339B73EED2D780E1F7F4DDB5037CE7(L_11, Nullable_1_get_Value_mC2357292D9339B73EED2D780E1F7F4DDB5037CE7_RuntimeMethod_var);
		return L_12;
	}

IL_005f:
	{
		// if (orthographic != null) _typeEnum = Type.Orthographic;
		CameraOrthographic_t88A94D9229D65187D924A60C4FD63F1918D9FFBA* L_13 = __this->___orthographic_3;
		if (!L_13)
		{
			goto IL_0073;
		}
	}
	{
		// if (orthographic != null) _typeEnum = Type.Orthographic;
		Nullable_1_tE2DB22D96422A179FAE51C04DB8815039D4FB097 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Nullable_1__ctor_m2A50829A5A43E5A6F969AA424DE364958591ABFE((&L_14), 0, /*hidden argument*/Nullable_1__ctor_m2A50829A5A43E5A6F969AA424DE364958591ABFE_RuntimeMethod_var);
		__this->____typeEnum_2 = L_14;
	}

IL_0073:
	{
		// if (perspective != null) _typeEnum = Type.Perspective;
		CameraPerspective_tF25DC017AB9F0ECFB1B573A84CCC784F0A4F3B6D* L_15 = __this->___perspective_4;
		if (!L_15)
		{
			goto IL_0087;
		}
	}
	{
		// if (perspective != null) _typeEnum = Type.Perspective;
		Nullable_1_tE2DB22D96422A179FAE51C04DB8815039D4FB097 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Nullable_1__ctor_m2A50829A5A43E5A6F969AA424DE364958591ABFE((&L_16), 1, /*hidden argument*/Nullable_1__ctor_m2A50829A5A43E5A6F969AA424DE364958591ABFE_RuntimeMethod_var);
		__this->____typeEnum_2 = L_16;
	}

IL_0087:
	{
		// return _typeEnum.Value;
		Nullable_1_tE2DB22D96422A179FAE51C04DB8815039D4FB097* L_17 = (&__this->____typeEnum_2);
		int32_t L_18;
		L_18 = Nullable_1_get_Value_mC2357292D9339B73EED2D780E1F7F4DDB5037CE7(L_17, Nullable_1_get_Value_mC2357292D9339B73EED2D780E1F7F4DDB5037CE7_RuntimeMethod_var);
		return L_18;
	}
}
// System.Void GLTFast.Schema.Camera::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_GltfSerialize_m89372E15B88CAF2B89C51BB608670C14BCAE7B1E (Camera_tF07308B27D535448829D7C97A8C54144DF18A9B5* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// GltfSerializeRoot(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		RootChild_GltfSerializeRoot_m5633F10A7CB50F661EBC5D3E552C5946F4C3D35E(__this, L_1, NULL);
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_2 = ___writer0;
		NullCheck(L_2);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_2, NULL);
		// throw new System.NotImplementedException($"GltfSerialize missing on {GetType()}");
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		String_t* L_4;
		L_4 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9F7B02C31DDA99DC72E6A6212C308FDD1C99628)), L_3, NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_5 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Camera_GltfSerialize_m89372E15B88CAF2B89C51BB608670C14BCAE7B1E_RuntimeMethod_var)));
	}
}
// System.Void GLTFast.Schema.Camera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera__ctor_m432283102707EB66272575122DE15E15E2F8403C (Camera_tF07308B27D535448829D7C97A8C54144DF18A9B5* __this, const RuntimeMethod* method) 
{
	{
		RootChild__ctor_m889C52000B217955811A13981472070C7835FF84(__this, NULL);
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
// System.Void GLTFast.Schema.CameraOrthographic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthographic__ctor_m5ABAAB233AD4666DCB223C908DA382A98C860057 (CameraOrthographic_t88A94D9229D65187D924A60C4FD63F1918D9FFBA* __this, const RuntimeMethod* method) 
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
// System.Void GLTFast.Schema.CameraPerspective::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspective__ctor_m812B7009CC157974ECE030567A50D6453B189EC9 (CameraPerspective_tF25DC017AB9F0ECFB1B573A84CCC784F0A4F3B6D* __this, const RuntimeMethod* method) 
{
	{
		// public float aspectRatio = -1;
		__this->___aspectRatio_0 = (-1.0f);
		// public float zfar = -1f;
		__this->___zfar_2 = (-1.0f);
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
// System.Void GLTFast.Schema.Image::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_GltfSerialize_m3D756AA03EBA1F94F601D9E255CAC4AC1DFD0E20 (Image_t06216539D22FD8F64E39249C8F18DA87CE5EA7CB* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10C63C8C602DD5E38BE4A758C90EBAC324CD3E69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A47A30B4F70A2FBDC2C08E3C1841D8EF3F70D07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78977E804098519D064862AB672E526435A235E1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// GltfSerializeRoot(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		RootChild_GltfSerializeRoot_m5633F10A7CB50F661EBC5D3E552C5946F4C3D35E(__this, L_1, NULL);
		// if (!string.IsNullOrEmpty(uri)) {
		String_t* L_2 = __this->___uri_1;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_2, NULL);
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		// writer.AddProperty("uri", uri);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_4 = ___writer0;
		String_t* L_5 = __this->___uri_1;
		NullCheck(L_4);
		JsonWriter_AddProperty_m9BBF34A6F6097C126C3EEB74D4B457A96ABAA179(L_4, _stringLiteral10C63C8C602DD5E38BE4A758C90EBAC324CD3E69, L_5, NULL);
	}

IL_002b:
	{
		// if (!string.IsNullOrEmpty(mimeType)) {
		String_t* L_6 = __this->___mimeType_2;
		bool L_7;
		L_7 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_6, NULL);
		if (L_7)
		{
			goto IL_0049;
		}
	}
	{
		// writer.AddProperty("mimeType", mimeType);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_8 = ___writer0;
		String_t* L_9 = __this->___mimeType_2;
		NullCheck(L_8);
		JsonWriter_AddProperty_m9BBF34A6F6097C126C3EEB74D4B457A96ABAA179(L_8, _stringLiteral78977E804098519D064862AB672E526435A235E1, L_9, NULL);
	}

IL_0049:
	{
		// if (bufferView >= 0) {
		int32_t L_10 = __this->___bufferView_3;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		// writer.AddProperty("bufferView", bufferView);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_11 = ___writer0;
		int32_t L_12 = __this->___bufferView_3;
		NullCheck(L_11);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_11, _stringLiteral2A47A30B4F70A2FBDC2C08E3C1841D8EF3F70D07, L_12, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0063:
	{
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_13 = ___writer0;
		NullCheck(L_13);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_13, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.Image::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image__ctor_mD2E6262367381528CED52C33CEFFD1EE3D616CFF (Image_t06216539D22FD8F64E39249C8F18DA87CE5EA7CB* __this, const RuntimeMethod* method) 
{
	{
		// public int bufferView = -1;
		__this->___bufferView_3 = (-1);
		RootChild__ctor_m889C52000B217955811A13981472070C7835FF84(__this, NULL);
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
// System.Void GLTFast.Schema.JsonWriter::.ctor(System.IO.StreamWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m89DB7EC219D8772517E80AB866D35079EFECF67F (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___stream0, const RuntimeMethod* method) 
{
	{
		// public JsonWriter(StreamWriter stream) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Stream = stream;
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_0 = ___stream0;
		__this->___m_Stream_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stream_0), (void*)L_0);
		// OpenBrackets();
		JsonWriter_OpenBrackets_m0E765CA67526A78131D965DA563AA8C63824A766(__this, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.JsonWriter::OpenBrackets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_OpenBrackets_m0E765CA67526A78131D965DA563AA8C63824A766 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, const RuntimeMethod* method) 
{
	{
		// m_Stream.Write('{');
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_0 = __this->___m_Stream_0;
		NullCheck(L_0);
		VirtualActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_0, ((int32_t)123));
		// separation = false;
		__this->___separation_1 = (bool)0;
		// }
		return;
	}
}
// System.Void GLTFast.Schema.JsonWriter::AddProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Separate();
		JsonWriter_Separate_m9ECA1E8C4198DE263474527528BBF0C39E564FB5(__this, NULL);
		// m_Stream.Write('"');
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_0 = __this->___m_Stream_0;
		NullCheck(L_0);
		VirtualActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_0, ((int32_t)34));
		// m_Stream.Write(name);
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_1 = __this->___m_Stream_0;
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_1, L_2);
		// m_Stream.Write("\":");
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_3 = __this->___m_Stream_0;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_3, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
		// separation = false;
		__this->___separation_1 = (bool)0;
		// }
		return;
	}
}
// System.Void GLTFast.Schema.JsonWriter::AddObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, const RuntimeMethod* method) 
{
	{
		// Separate();
		JsonWriter_Separate_m9ECA1E8C4198DE263474527528BBF0C39E564FB5(__this, NULL);
		// m_Stream.Write('{');
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_0 = __this->___m_Stream_0;
		NullCheck(L_0);
		VirtualActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_0, ((int32_t)123));
		// separation = false;
		__this->___separation_1 = (bool)0;
		// }
		return;
	}
}
// System.Void GLTFast.Schema.JsonWriter::AddArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AddArray_m3FF9C631816077B6D0F2C80A9785CA1B1E946AF0 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98EE367413202474EAC3A7C4C1CF744755804C19);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Separate();
		JsonWriter_Separate_m9ECA1E8C4198DE263474527528BBF0C39E564FB5(__this, NULL);
		// m_Stream.Write('"');
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_0 = __this->___m_Stream_0;
		NullCheck(L_0);
		VirtualActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_0, ((int32_t)34));
		// m_Stream.Write(name);
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_1 = __this->___m_Stream_0;
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_1, L_2);
		// m_Stream.Write("\":[");
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_3 = __this->___m_Stream_0;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_3, _stringLiteral98EE367413202474EAC3A7C4C1CF744755804C19);
		// separation = false;
		__this->___separation_1 = (bool)0;
		// }
		return;
	}
}
// System.Void GLTFast.Schema.JsonWriter::CloseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_CloseArray_m5AD2ECE87AAB8692647D11ADA12B5F7BAC3EB574 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, const RuntimeMethod* method) 
{
	{
		// m_Stream.Write(']');
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_0 = __this->___m_Stream_0;
		NullCheck(L_0);
		VirtualActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_0, ((int32_t)93));
		// separation = true;
		__this->___separation_1 = (bool)1;
		// }
		return;
	}
}
// System.Void GLTFast.Schema.JsonWriter::AddArrayProperty(System.String,System.Collections.Generic.IEnumerable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AddArrayProperty_m598554F05B3A9E2CB6428CBEFCE33AFBB2931BC8 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, RuntimeObject* ___values1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t736E9F8BD2FD38A5E9EA2E8A510AFED788D05010_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	float V_1 = 0.0f;
	{
		// AddArray(name);
		String_t* L_0 = ___name0;
		JsonWriter_AddArray_m3FF9C631816077B6D0F2C80A9785CA1B1E946AF0(__this, L_0, NULL);
		// foreach (var value in values) {
		RuntimeObject* L_1 = ___values1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator() */, IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0043:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_004c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_004c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0039_1;
			}

IL_0010_1:
			{
				// foreach (var value in values) {
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				float L_6;
				L_6 = InterfaceFuncInvoker0< float >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IEnumerator_1_t736E9F8BD2FD38A5E9EA2E8A510AFED788D05010_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				// Separate();
				JsonWriter_Separate_m9ECA1E8C4198DE263474527528BBF0C39E564FB5(__this, NULL);
				// m_Stream.Write(value.ToString("R", CultureInfo.InvariantCulture));
				StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_7 = __this->___m_Stream_0;
				il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8;
				L_8 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
				String_t* L_9;
				L_9 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE((&V_1), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_8, NULL);
				NullCheck(L_7);
				VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_9);
			}

IL_0039_1:
			{
				// foreach (var value in values) {
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_004d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		// CloseArray();
		JsonWriter_CloseArray_m5AD2ECE87AAB8692647D11ADA12B5F7BAC3EB574(__this, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.JsonWriter::AddArrayProperty(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AddArrayProperty_mDA7B79A7A0C5FE63DC275BEABA5784E8F92192DD (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, RuntimeObject* ___values1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// AddArray(name);
		String_t* L_0 = ___name0;
		JsonWriter_AddArray_m3FF9C631816077B6D0F2C80A9785CA1B1E946AF0(__this, L_0, NULL);
		// foreach (var value in values) {
		RuntimeObject* L_1 = ___values1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0056;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0056:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0043_1;
			}

IL_0010_1:
			{
				// foreach (var value in values) {
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				String_t* L_6;
				L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				// Separate();
				JsonWriter_Separate_m9ECA1E8C4198DE263474527528BBF0C39E564FB5(__this, NULL);
				// m_Stream.Write('"');
				StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_7 = __this->___m_Stream_0;
				NullCheck(L_7);
				VirtualActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_7, ((int32_t)34));
				// m_Stream.Write(value);
				StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_8 = __this->___m_Stream_0;
				String_t* L_9 = V_1;
				NullCheck(L_8);
				VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, L_9);
				// m_Stream.Write('"');
				StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_10 = __this->___m_Stream_0;
				NullCheck(L_10);
				VirtualActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_10, ((int32_t)34));
			}

IL_0043_1:
			{
				// foreach (var value in values) {
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0057;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
		// CloseArray();
		JsonWriter_CloseArray_m5AD2ECE87AAB8692647D11ADA12B5F7BAC3EB574(__this, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.JsonWriter::AddProperty(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AddProperty_mAB9A3ED6353AAF08537326C1840D2A0246DCC20B (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Separate();
		JsonWriter_Separate_m9ECA1E8C4198DE263474527528BBF0C39E564FB5(__this, NULL);
		// m_Stream.Write('"');
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_0 = __this->___m_Stream_0;
		NullCheck(L_0);
		VirtualActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_0, ((int32_t)34));
		// m_Stream.Write(name);
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_1 = __this->___m_Stream_0;
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_1, L_2);
		// m_Stream.Write("\":");
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_3 = __this->___m_Stream_0;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_3, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
		// m_Stream.Write(value.ToString("R", CultureInfo.InvariantCulture));
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_4 = __this->___m_Stream_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_6;
		L_6 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE((&___value1), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_4, L_6);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.JsonWriter::AddProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AddProperty_m9BBF34A6F6097C126C3EEB74D4B457A96ABAA179 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Separate();
		JsonWriter_Separate_m9ECA1E8C4198DE263474527528BBF0C39E564FB5(__this, NULL);
		// m_Stream.Write('"');
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_0 = __this->___m_Stream_0;
		NullCheck(L_0);
		VirtualActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_0, ((int32_t)34));
		// m_Stream.Write(name);
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_1 = __this->___m_Stream_0;
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_1, L_2);
		// m_Stream.Write("\":\"");
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_3 = __this->___m_Stream_0;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_3, _stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0);
		// m_Stream.Write(value);
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_4 = __this->___m_Stream_0;
		String_t* L_5 = ___value1;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_4, L_5);
		// m_Stream.Write('"');
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_6 = __this->___m_Stream_0;
		NullCheck(L_6);
		VirtualActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_6, ((int32_t)34));
		// }
		return;
	}
}
// System.Void GLTFast.Schema.JsonWriter::AddProperty(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AddProperty_mE99650D1C81BAD7E3DEE776CF534C696B28DFDB0 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* G_B2_0 = NULL;
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* G_B3_1 = NULL;
	{
		// Separate();
		JsonWriter_Separate_m9ECA1E8C4198DE263474527528BBF0C39E564FB5(__this, NULL);
		// m_Stream.Write('"');
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_0 = __this->___m_Stream_0;
		NullCheck(L_0);
		VirtualActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_0, ((int32_t)34));
		// m_Stream.Write(name);
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_1 = __this->___m_Stream_0;
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_1, L_2);
		// m_Stream.Write("\":");
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_3 = __this->___m_Stream_0;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_3, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
		// m_Stream.Write(value?"true":"false");
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_4 = __this->___m_Stream_0;
		bool L_5 = ___value1;
		G_B1_0 = L_4;
		if (L_5)
		{
			G_B2_0 = L_4;
			goto IL_003f;
		}
	}
	{
		G_B3_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B3_1 = G_B1_0;
		goto IL_0044;
	}

IL_003f:
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B2_0;
	}

IL_0044:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.JsonWriter::Separate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Separate_m9ECA1E8C4198DE263474527528BBF0C39E564FB5 (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, const RuntimeMethod* method) 
{
	{
		// if (separation) {
		bool L_0 = __this->___separation_1;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// m_Stream.Write(',');
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_1 = __this->___m_Stream_0;
		NullCheck(L_1);
		VirtualActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)44));
	}

IL_0015:
	{
		// separation = true;
		__this->___separation_1 = (bool)1;
		// }
		return;
	}
}
// System.Void GLTFast.Schema.JsonWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* __this, const RuntimeMethod* method) 
{
	{
		// m_Stream.Write('}');
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_0 = __this->___m_Stream_0;
		NullCheck(L_0);
		VirtualActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_0, ((int32_t)125));
		// separation = true;
		__this->___separation_1 = (bool)1;
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
// UnityEngine.Color GLTFast.Schema.Material::get_emissive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_emissive_m8126EECD37AA52A524CB767A050D4016BB4F1F02 (Material_t1E37B852B5C4B73E91E59B4DD7ADED7B2A7D0470* __this, const RuntimeMethod* method) 
{
	{
		// return new Color(
		//     emissiveFactor[0],
		//     emissiveFactor[1],
		//     emissiveFactor[2]
		// );
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___emissiveFactor_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		float L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___emissiveFactor_6;
		NullCheck(L_3);
		int32_t L_4 = 1;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___emissiveFactor_6;
		NullCheck(L_6);
		int32_t L_7 = 2;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void GLTFast.Schema.Material::set_emissive(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_emissive_m5BA1109F693BD7C10EC9DA78583CEB15BE31D106 (Material_t1E37B852B5C4B73E91E59B4DD7ADED7B2A7D0470* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// emissiveFactor = new[] { value.r, value.g, value.b };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___value0;
		float L_3 = L_2.___r_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___value0;
		float L_6 = L_5.___g_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_6);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = L_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___value0;
		float L_9 = L_8.___b_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_9);
		__this->___emissiveFactor_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___emissiveFactor_6), (void*)L_7);
		// }
		return;
	}
}
// GLTFast.Schema.Material/AlphaMode GLTFast.Schema.Material::get_alphaModeEnum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_alphaModeEnum_mD6A41CFA752C377E8F80D4361DE1FFEF821DFA7F (Material_t1E37B852B5C4B73E91E59B4DD7ADED7B2A7D0470* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AlphaMode_tC5BB461992585479014FD87C11A1CC560733A922_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AlphaMode_tC5BB461992585479014FD87C11A1CC560733A922_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m1F22CA905CFB38D5358233765EC86457ADA36643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mE42EBBBFBD93A0BE1351B026DBDF6CE9DCD45D99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA82027DA1E2A2249CC4122EB2F2FB5988BB882A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( _alphaModeEnum.HasValue ) {
		Nullable_1_tE446961F4EE63F23D293FEE3155F7BBFACDAABEC* L_0 = (&__this->____alphaModeEnum_8);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mE42EBBBFBD93A0BE1351B026DBDF6CE9DCD45D99_inline(L_0, Nullable_1_get_HasValue_mE42EBBBFBD93A0BE1351B026DBDF6CE9DCD45D99_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// return _alphaModeEnum.Value;
		Nullable_1_tE446961F4EE63F23D293FEE3155F7BBFACDAABEC* L_2 = (&__this->____alphaModeEnum_8);
		int32_t L_3;
		L_3 = Nullable_1_get_Value_mA82027DA1E2A2249CC4122EB2F2FB5988BB882A0(L_2, Nullable_1_get_Value_mA82027DA1E2A2249CC4122EB2F2FB5988BB882A0_RuntimeMethod_var);
		return L_3;
	}

IL_0019:
	{
		// if (!string.IsNullOrEmpty (alphaMode)) {
		String_t* L_4 = __this->___alphaMode_7;
		bool L_5;
		L_5 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_4, NULL);
		if (L_5)
		{
			goto IL_005f;
		}
	}
	{
		// _alphaModeEnum = (AlphaMode)System.Enum.Parse (typeof(AlphaMode), alphaMode, true);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (AlphaMode_tC5BB461992585479014FD87C11A1CC560733A922_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		String_t* L_8 = __this->___alphaMode_7;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = Enum_Parse_m1ABE53499F05D295104BDE57EE12376CF4513585(L_7, L_8, (bool)1, NULL);
		Nullable_1_tE446961F4EE63F23D293FEE3155F7BBFACDAABEC L_10;
		memset((&L_10), 0, sizeof(L_10));
		Nullable_1__ctor_m1F22CA905CFB38D5358233765EC86457ADA36643((&L_10), ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_9, AlphaMode_tC5BB461992585479014FD87C11A1CC560733A922_il2cpp_TypeInfo_var)))), /*hidden argument*/Nullable_1__ctor_m1F22CA905CFB38D5358233765EC86457ADA36643_RuntimeMethod_var);
		__this->____alphaModeEnum_8 = L_10;
		// alphaMode = null;
		__this->___alphaMode_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___alphaMode_7), (void*)(String_t*)NULL);
		// return _alphaModeEnum.Value;
		Nullable_1_tE446961F4EE63F23D293FEE3155F7BBFACDAABEC* L_11 = (&__this->____alphaModeEnum_8);
		int32_t L_12;
		L_12 = Nullable_1_get_Value_mA82027DA1E2A2249CC4122EB2F2FB5988BB882A0(L_11, Nullable_1_get_Value_mA82027DA1E2A2249CC4122EB2F2FB5988BB882A0_RuntimeMethod_var);
		return L_12;
	}

IL_005f:
	{
		// return AlphaMode.OPAQUE;
		return (int32_t)(0);
	}
}
// System.Void GLTFast.Schema.Material::set_alphaModeEnum(GLTFast.Schema.Material/AlphaMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_alphaModeEnum_m108B152D7314D9D963D87C9B55974E20F2790BA1 (Material_t1E37B852B5C4B73E91E59B4DD7ADED7B2A7D0470* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AlphaMode_tC5BB461992585479014FD87C11A1CC560733A922_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m1F22CA905CFB38D5358233765EC86457ADA36643_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _alphaModeEnum = value;
		int32_t L_0 = ___value0;
		Nullable_1_tE446961F4EE63F23D293FEE3155F7BBFACDAABEC L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m1F22CA905CFB38D5358233765EC86457ADA36643((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m1F22CA905CFB38D5358233765EC86457ADA36643_RuntimeMethod_var);
		__this->____alphaModeEnum_8 = L_1;
		// if (value != AlphaMode.OPAQUE) {
		int32_t L_2 = ___value0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// alphaMode = value.ToString();
		Il2CppFakeBox<int32_t> L_3(AlphaMode_tC5BB461992585479014FD87C11A1CC560733A922_il2cpp_TypeInfo_var, (&___value0));
		String_t* L_4;
		L_4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_3), NULL);
		__this->___alphaMode_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___alphaMode_7), (void*)L_4);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Boolean GLTFast.Schema.Material::get_requiresNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_get_requiresNormals_m82A5A7552D2EEDE813591BE6BC79011B05BA60F9 (Material_t1E37B852B5C4B73E91E59B4DD7ADED7B2A7D0470* __this, const RuntimeMethod* method) 
{
	MaterialExtension_t7E092301E5A7B753417790CB1E3FF5A0D6F27CF9* G_B2_0 = NULL;
	MaterialExtension_t7E092301E5A7B753417790CB1E3FF5A0D6F27CF9* G_B1_0 = NULL;
	MaterialUnlit_tFC8C1ACB8A8DFE956115E7FA14B28F69AFBCB5DF* G_B3_0 = NULL;
	{
		// public bool requiresNormals => extensions?.KHR_materials_unlit == null;
		MaterialExtension_t7E092301E5A7B753417790CB1E3FF5A0D6F27CF9* L_0 = __this->___extensions_1;
		MaterialExtension_t7E092301E5A7B753417790CB1E3FF5A0D6F27CF9* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((MaterialUnlit_tFC8C1ACB8A8DFE956115E7FA14B28F69AFBCB5DF*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		MaterialUnlit_tFC8C1ACB8A8DFE956115E7FA14B28F69AFBCB5DF* L_2 = G_B2_0->___KHR_materials_unlit_1;
		G_B3_0 = L_2;
	}

IL_0012:
	{
		return (bool)((((RuntimeObject*)(MaterialUnlit_tFC8C1ACB8A8DFE956115E7FA14B28F69AFBCB5DF*)G_B3_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
// System.Boolean GLTFast.Schema.Material::get_requiresTangents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_get_requiresTangents_mBE4150B510C6D5BF5738E6783867ED4DBFEE99B7 (Material_t1E37B852B5C4B73E91E59B4DD7ADED7B2A7D0470* __this, const RuntimeMethod* method) 
{
	{
		// public bool requiresTangents => normalTexture!=null && normalTexture.index>=0;
		NormalTextureInfo_tFFD5E2FA7AA9C491D6CFF02FDC8EF24253602F55* L_0 = __this->___normalTexture_3;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		NormalTextureInfo_tFFD5E2FA7AA9C491D6CFF02FDC8EF24253602F55* L_1 = __this->___normalTexture_3;
		NullCheck(L_1);
		int32_t L_2 = ((TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22*)L_1)->___index_0;
		return (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Void GLTFast.Schema.Material::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_GltfSerialize_m5591A16669C4A1433E7EE02F61E03B05DBE297CC (Material_t1E37B852B5C4B73E91E59B4DD7ADED7B2A7D0470* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral070EF86811C43BE9AB432A8290CA3F5A323C9E10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1026C86B6040E33B9E24719041286454A2CE5C2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45EFB131CC04D173E0ABD4160CB1A07A5C6A6B6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral703A99C057D965D9989DA263201D24BBDDB68198);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79E88D091421691C53CC28304934AC732EC25429);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E052760968B31170B95FE09256C1585EFC757F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83159D84316821921FC3B0CB9EF5B8B035C956D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD345FD5E347B928556D65DD49780B8BC5D7267);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99071261C0C878413AA8F4FCEB8DB2B580ED14A0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// GltfSerializeRoot(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		RootChild_GltfSerializeRoot_m5633F10A7CB50F661EBC5D3E552C5946F4C3D35E(__this, L_1, NULL);
		// if(pbrMetallicRoughness!=null) {
		PbrMetallicRoughness_t1969AD2EB37D63AC503B44C586A934122E0B413E* L_2 = __this->___pbrMetallicRoughness_2;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// writer.AddProperty("pbrMetallicRoughness");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_3 = ___writer0;
		NullCheck(L_3);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_3, _stringLiteral8DD345FD5E347B928556D65DD49780B8BC5D7267, NULL);
		// pbrMetallicRoughness.GltfSerialize(writer);
		PbrMetallicRoughness_t1969AD2EB37D63AC503B44C586A934122E0B413E* L_4 = __this->___pbrMetallicRoughness_2;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_5 = ___writer0;
		NullCheck(L_4);
		PbrMetallicRoughness_GltfSerialize_mFCC5887B1665DB040DDD1A3E23E87A7270F88CBD(L_4, L_5, NULL);
	}

IL_002c:
	{
		// if(normalTexture!=null) {
		NormalTextureInfo_tFFD5E2FA7AA9C491D6CFF02FDC8EF24253602F55* L_6 = __this->___normalTexture_3;
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		// writer.AddProperty("normalTexture");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_7 = ___writer0;
		NullCheck(L_7);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_7, _stringLiteral83159D84316821921FC3B0CB9EF5B8B035C956D1, NULL);
		// normalTexture.GltfSerialize(writer);
		NormalTextureInfo_tFFD5E2FA7AA9C491D6CFF02FDC8EF24253602F55* L_8 = __this->___normalTexture_3;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_9 = ___writer0;
		NullCheck(L_8);
		VirtualActionInvoker1< JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* >::Invoke(4 /* System.Void GLTFast.Schema.TextureInfo::GltfSerialize(GLTFast.Schema.JsonWriter) */, L_8, L_9);
	}

IL_004b:
	{
		// if(occlusionTexture!=null) {
		OcclusionTextureInfo_t5F9255E7CD563F28A96C07486D589CC492357833* L_10 = __this->___occlusionTexture_4;
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		// writer.AddProperty("occlusionTexture");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_11 = ___writer0;
		NullCheck(L_11);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_11, _stringLiteral703A99C057D965D9989DA263201D24BBDDB68198, NULL);
		// occlusionTexture.GltfSerialize(writer);
		OcclusionTextureInfo_t5F9255E7CD563F28A96C07486D589CC492357833* L_12 = __this->___occlusionTexture_4;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_13 = ___writer0;
		NullCheck(L_12);
		VirtualActionInvoker1< JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* >::Invoke(4 /* System.Void GLTFast.Schema.TextureInfo::GltfSerialize(GLTFast.Schema.JsonWriter) */, L_12, L_13);
	}

IL_006a:
	{
		// if(emissiveTexture!=null) {
		TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* L_14 = __this->___emissiveTexture_5;
		if (!L_14)
		{
			goto IL_0089;
		}
	}
	{
		// writer.AddProperty("emissiveTexture");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_15 = ___writer0;
		NullCheck(L_15);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_15, _stringLiteral99071261C0C878413AA8F4FCEB8DB2B580ED14A0, NULL);
		// emissiveTexture.GltfSerialize(writer);
		TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* L_16 = __this->___emissiveTexture_5;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_17 = ___writer0;
		NullCheck(L_16);
		VirtualActionInvoker1< JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* >::Invoke(4 /* System.Void GLTFast.Schema.TextureInfo::GltfSerialize(GLTFast.Schema.JsonWriter) */, L_16, L_17);
	}

IL_0089:
	{
		// if (emissiveFactor != null
		//     && (
		//         emissiveFactor[0] > Constants.epsilon
		//         || emissiveFactor[1] > Constants.epsilon
		//         || emissiveFactor[2] > Constants.epsilon)
		//     )
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = __this->___emissiveFactor_6;
		if (!L_18)
		{
			goto IL_00cf;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = __this->___emissiveFactor_6;
		NullCheck(L_19);
		int32_t L_20 = 0;
		float L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if ((((float)L_21) > ((float)(0.00100000005f))))
		{
			goto IL_00be;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = __this->___emissiveFactor_6;
		NullCheck(L_22);
		int32_t L_23 = 1;
		float L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if ((((float)L_24) > ((float)(0.00100000005f))))
		{
			goto IL_00be;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = __this->___emissiveFactor_6;
		NullCheck(L_25);
		int32_t L_26 = 2;
		float L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if ((!(((float)L_27) > ((float)(0.00100000005f)))))
		{
			goto IL_00cf;
		}
	}

IL_00be:
	{
		// writer.AddArrayProperty("emissiveFactor", emissiveFactor);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_28 = ___writer0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = __this->___emissiveFactor_6;
		NullCheck(L_28);
		JsonWriter_AddArrayProperty_m598554F05B3A9E2CB6428CBEFCE33AFBB2931BC8(L_28, _stringLiteral45EFB131CC04D173E0ABD4160CB1A07A5C6A6B6F, (RuntimeObject*)L_29, NULL);
	}

IL_00cf:
	{
		// if (!string.IsNullOrEmpty(alphaMode)) {
		String_t* L_30 = __this->___alphaMode_7;
		bool L_31;
		L_31 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_30, NULL);
		if (L_31)
		{
			goto IL_00ed;
		}
	}
	{
		// writer.AddProperty("alphaMode", alphaMode);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_32 = ___writer0;
		String_t* L_33 = __this->___alphaMode_7;
		NullCheck(L_32);
		JsonWriter_AddProperty_m9BBF34A6F6097C126C3EEB74D4B457A96ABAA179(L_32, _stringLiteral7E052760968B31170B95FE09256C1585EFC757F1, L_33, NULL);
	}

IL_00ed:
	{
		// if (math.abs(alphaCutoff - .5f) > Constants.epsilon) {
		float L_34 = __this->___alphaCutoff_9;
		float L_35;
		L_35 = math_abs_mD6633C641692C4A0AEEFB52575D81599ACF1F7F5_inline(((float)il2cpp_codegen_subtract(L_34, (0.5f))), NULL);
		if ((!(((float)L_35) > ((float)(0.00100000005f)))))
		{
			goto IL_0116;
		}
	}
	{
		// writer.AddProperty("alphaCutoff", alphaCutoff);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_36 = ___writer0;
		float L_37 = __this->___alphaCutoff_9;
		NullCheck(L_36);
		JsonWriter_AddProperty_mAB9A3ED6353AAF08537326C1840D2A0246DCC20B(L_36, _stringLiteral1026C86B6040E33B9E24719041286454A2CE5C2F, L_37, NULL);
	}

IL_0116:
	{
		// if (doubleSided) {
		bool L_38 = __this->___doubleSided_10;
		if (!L_38)
		{
			goto IL_012f;
		}
	}
	{
		// writer.AddProperty("doubleSided", doubleSided);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_39 = ___writer0;
		bool L_40 = __this->___doubleSided_10;
		NullCheck(L_39);
		JsonWriter_AddProperty_mE99650D1C81BAD7E3DEE776CF534C696B28DFDB0(L_39, _stringLiteral070EF86811C43BE9AB432A8290CA3F5A323C9E10, L_40, NULL);
	}

IL_012f:
	{
		// if (extensions != null) {
		MaterialExtension_t7E092301E5A7B753417790CB1E3FF5A0D6F27CF9* L_41 = __this->___extensions_1;
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		// writer.AddProperty("extensions");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_42 = ___writer0;
		NullCheck(L_42);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_42, _stringLiteral79E88D091421691C53CC28304934AC732EC25429, NULL);
		// extensions.GltfSerialize(writer);
		MaterialExtension_t7E092301E5A7B753417790CB1E3FF5A0D6F27CF9* L_43 = __this->___extensions_1;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_44 = ___writer0;
		NullCheck(L_43);
		MaterialExtension_GltfSerialize_mBB98A5EE4211EA36C2F9B70EE5F17FD91BE1BBDB(L_43, L_44, NULL);
	}

IL_014e:
	{
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_45 = ___writer0;
		NullCheck(L_45);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_45, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.Material::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7EE429A7ED187F1F7B37FB237ACA58A5F19CFF1A (Material_t1E37B852B5C4B73E91E59B4DD7ADED7B2A7D0470* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float[] emissiveFactor = {0,0,0};
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___emissiveFactor_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___emissiveFactor_6), (void*)L_0);
		// public float alphaCutoff = 0.5f;
		__this->___alphaCutoff_9 = (0.5f);
		RootChild__ctor_m889C52000B217955811A13981472070C7835FF84(__this, NULL);
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
// System.Void GLTFast.Schema.ClearCoat::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearCoat_GltfSerialize_mBA3F01E26035C195F2CDBBAE3CA0AFC01316F85A (ClearCoat_tC3E32154197623928989150AA64FDA8AD25EB6D2* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		NullCheck(L_1);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_1, NULL);
		// throw new System.NotImplementedException($"GltfSerialize missing on {GetType()}");
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		String_t* L_3;
		L_3 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9F7B02C31DDA99DC72E6A6212C308FDD1C99628)), L_2, NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_4 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ClearCoat_GltfSerialize_mBA3F01E26035C195F2CDBBAE3CA0AFC01316F85A_RuntimeMethod_var)));
	}
}
// System.Void GLTFast.Schema.ClearCoat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearCoat__ctor_m6D9AD4C61ADFA9C29F611F980C51903E4C6355B9 (ClearCoat_tC3E32154197623928989150AA64FDA8AD25EB6D2* __this, const RuntimeMethod* method) 
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
// System.Void GLTFast.Schema.MaterialExtension::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialExtension_GltfSerialize_mBB98A5EE4211EA36C2F9B70EE5F17FD91BE1BBDB (MaterialExtension_t7E092301E5A7B753417790CB1E3FF5A0D6F27CF9* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D339F2F458AA6A1387A1EBA67B3DEAD3E5230A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A41148E29B06B1BC6EE651FC3A5C2400ADA79B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80556002D409488C4FB7323587E9C41461C3F94A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE52C5B21D4F4C6CC493CA0C74175DA263FD149F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE02B32393C85D2BD3F88186E2A4E153AAFDBA23);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// if(KHR_materials_pbrSpecularGlossiness!=null) {
		PbrSpecularGlossiness_t2D28D6A9133D79AB5C63A51C7C7E9AF6D48F562E* L_1 = __this->___KHR_materials_pbrSpecularGlossiness_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// writer.AddProperty("KHR_materials_pbrSpecularGlossiness");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_2 = ___writer0;
		NullCheck(L_2);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_2, _stringLiteral0D339F2F458AA6A1387A1EBA67B3DEAD3E5230A7, NULL);
		// KHR_materials_pbrSpecularGlossiness.GltfSerialize(writer);
		PbrSpecularGlossiness_t2D28D6A9133D79AB5C63A51C7C7E9AF6D48F562E* L_3 = __this->___KHR_materials_pbrSpecularGlossiness_0;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_4 = ___writer0;
		NullCheck(L_3);
		PbrSpecularGlossiness_GltfSerialize_mC419605950B41988A1B1BFE6BA8433524ED5DC7F(L_3, L_4, NULL);
	}

IL_0025:
	{
		// if(KHR_materials_unlit!=null) {
		MaterialUnlit_tFC8C1ACB8A8DFE956115E7FA14B28F69AFBCB5DF* L_5 = __this->___KHR_materials_unlit_1;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// writer.AddProperty("KHR_materials_unlit");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_6 = ___writer0;
		NullCheck(L_6);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_6, _stringLiteral4A41148E29B06B1BC6EE651FC3A5C2400ADA79B9, NULL);
		// KHR_materials_unlit.GltfSerialize(writer);
		MaterialUnlit_tFC8C1ACB8A8DFE956115E7FA14B28F69AFBCB5DF* L_7 = __this->___KHR_materials_unlit_1;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_8 = ___writer0;
		NullCheck(L_7);
		MaterialUnlit_GltfSerialize_m128D3855A7D27DAAF889809C76F9BFF8C540DA9B(L_7, L_8, NULL);
	}

IL_0044:
	{
		// if(KHR_materials_transmission!=null) {
		Transmission_tF6BE28205152A92C29C29FF652B2A069DC1273A7* L_9 = __this->___KHR_materials_transmission_2;
		if (!L_9)
		{
			goto IL_0063;
		}
	}
	{
		// writer.AddProperty("KHR_materials_transmission");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_10 = ___writer0;
		NullCheck(L_10);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_10, _stringLiteral80556002D409488C4FB7323587E9C41461C3F94A, NULL);
		// KHR_materials_transmission.GltfSerialize(writer);
		Transmission_tF6BE28205152A92C29C29FF652B2A069DC1273A7* L_11 = __this->___KHR_materials_transmission_2;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_12 = ___writer0;
		NullCheck(L_11);
		Transmission_GltfSerialize_mD7044B23F9ED8B3EF1C691A891E886C184731EC9(L_11, L_12, NULL);
	}

IL_0063:
	{
		// if(KHR_materials_clearcoat!=null) {
		ClearCoat_tC3E32154197623928989150AA64FDA8AD25EB6D2* L_13 = __this->___KHR_materials_clearcoat_3;
		if (!L_13)
		{
			goto IL_0082;
		}
	}
	{
		// writer.AddProperty("KHR_materials_clearcoat");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_14 = ___writer0;
		NullCheck(L_14);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_14, _stringLiteralE52C5B21D4F4C6CC493CA0C74175DA263FD149F4, NULL);
		// KHR_materials_clearcoat.GltfSerialize(writer);
		ClearCoat_tC3E32154197623928989150AA64FDA8AD25EB6D2* L_15 = __this->___KHR_materials_clearcoat_3;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_16 = ___writer0;
		NullCheck(L_15);
		ClearCoat_GltfSerialize_mBA3F01E26035C195F2CDBBAE3CA0AFC01316F85A(L_15, L_16, NULL);
	}

IL_0082:
	{
		// if(KHR_materials_sheen!=null) {
		Sheen_t0094B5B81DE3992372C87D0746D4499F1980700E* L_17 = __this->___KHR_materials_sheen_4;
		if (!L_17)
		{
			goto IL_00a1;
		}
	}
	{
		// writer.AddProperty("KHR_materials_sheen");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_18 = ___writer0;
		NullCheck(L_18);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_18, _stringLiteralFE02B32393C85D2BD3F88186E2A4E153AAFDBA23, NULL);
		// KHR_materials_sheen.GltfSerialize(writer);
		Sheen_t0094B5B81DE3992372C87D0746D4499F1980700E* L_19 = __this->___KHR_materials_sheen_4;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_20 = ___writer0;
		NullCheck(L_19);
		Sheen_GltfSerialize_mAE750F75EAE9D911E593860F59E944876370877D(L_19, L_20, NULL);
	}

IL_00a1:
	{
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_21 = ___writer0;
		NullCheck(L_21);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_21, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.MaterialExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialExtension__ctor_m5E075B34297587BB380AE67801CF77366E3B8966 (MaterialExtension_t7E092301E5A7B753417790CB1E3FF5A0D6F27CF9* __this, const RuntimeMethod* method) 
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
// UnityEngine.Color GLTFast.Schema.PbrMetallicRoughness::get_baseColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F PbrMetallicRoughness_get_baseColor_m19E451B7274B91190765044376D0FC302C756FE7 (PbrMetallicRoughness_t1969AD2EB37D63AC503B44C586A934122E0B413E* __this, const RuntimeMethod* method) 
{
	{
		// new Color(
		//     baseColorFactor[0],
		//     baseColorFactor[1],
		//     baseColorFactor[2],
		//     baseColorFactor[3]
		// );
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___baseColorFactor_0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		float L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___baseColorFactor_0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___baseColorFactor_0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = __this->___baseColorFactor_0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void GLTFast.Schema.PbrMetallicRoughness::set_baseColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PbrMetallicRoughness_set_baseColor_m965047F4CF2A62E7555687404D9770E6FCF87E0E (PbrMetallicRoughness_t1969AD2EB37D63AC503B44C586A934122E0B413E* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// baseColorFactor = new[] { value.r, value.g, value.b, value.a };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___value0;
		float L_3 = L_2.___r_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___value0;
		float L_6 = L_5.___g_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_6);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = L_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___value0;
		float L_9 = L_8.___b_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_9);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___value0;
		float L_12 = L_11.___a_3;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_12);
		__this->___baseColorFactor_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseColorFactor_0), (void*)L_10);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.PbrMetallicRoughness::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PbrMetallicRoughness_GltfSerialize_mFCC5887B1665DB040DDD1A3E23E87A7270F88CBD (PbrMetallicRoughness_t1969AD2EB37D63AC503B44C586A934122E0B413E* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F0F6BC825F919DB3AB672DFC7E511423455FA92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DE37F9E97BD49711DF82ED1813CB74AD1DE0C49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B73C38F0EE0B751F38BB9BAF16A261EDAD7E731);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83378476BA7EF7039CCA1C937F64812A70AE4BA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0B97587CDEEE52C4D60DC4F0F2694D006C01876);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// if (baseColorFactor != null && (
		//     math.abs(baseColorFactor[0] - 1f) > Constants.epsilon ||
		//     math.abs(baseColorFactor[1] - 1f) > Constants.epsilon ||
		//     math.abs(baseColorFactor[2] - 1f) > Constants.epsilon ||
		//     math.abs(baseColorFactor[3] - 1f) > Constants.epsilon
		//     ))
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___baseColorFactor_0;
		if (!L_1)
		{
			goto IL_0087;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___baseColorFactor_0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		float L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		float L_5;
		L_5 = math_abs_mD6633C641692C4A0AEEFB52575D81599ACF1F7F5_inline(((float)il2cpp_codegen_subtract(L_4, (1.0f))), NULL);
		if ((((float)L_5) > ((float)(0.00100000005f))))
		{
			goto IL_0076;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___baseColorFactor_0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		float L_9;
		L_9 = math_abs_mD6633C641692C4A0AEEFB52575D81599ACF1F7F5_inline(((float)il2cpp_codegen_subtract(L_8, (1.0f))), NULL);
		if ((((float)L_9) > ((float)(0.00100000005f))))
		{
			goto IL_0076;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___baseColorFactor_0;
		NullCheck(L_10);
		int32_t L_11 = 2;
		float L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		float L_13;
		L_13 = math_abs_mD6633C641692C4A0AEEFB52575D81599ACF1F7F5_inline(((float)il2cpp_codegen_subtract(L_12, (1.0f))), NULL);
		if ((((float)L_13) > ((float)(0.00100000005f))))
		{
			goto IL_0076;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = __this->___baseColorFactor_0;
		NullCheck(L_14);
		int32_t L_15 = 3;
		float L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		float L_17;
		L_17 = math_abs_mD6633C641692C4A0AEEFB52575D81599ACF1F7F5_inline(((float)il2cpp_codegen_subtract(L_16, (1.0f))), NULL);
		if ((!(((float)L_17) > ((float)(0.00100000005f)))))
		{
			goto IL_0087;
		}
	}

IL_0076:
	{
		// writer.AddArrayProperty("baseColorFactor", baseColorFactor);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_18 = ___writer0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = __this->___baseColorFactor_0;
		NullCheck(L_18);
		JsonWriter_AddArrayProperty_m598554F05B3A9E2CB6428CBEFCE33AFBB2931BC8(L_18, _stringLiteral6B73C38F0EE0B751F38BB9BAF16A261EDAD7E731, (RuntimeObject*)L_19, NULL);
	}

IL_0087:
	{
		// if(metallicFactor < 1f) {
		float L_20 = __this->___metallicFactor_2;
		if ((!(((float)L_20) < ((float)(1.0f)))))
		{
			goto IL_00a5;
		}
	}
	{
		// writer.AddProperty("metallicFactor", metallicFactor);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_21 = ___writer0;
		float L_22 = __this->___metallicFactor_2;
		NullCheck(L_21);
		JsonWriter_AddProperty_mAB9A3ED6353AAF08537326C1840D2A0246DCC20B(L_21, _stringLiteral83378476BA7EF7039CCA1C937F64812A70AE4BA9, L_22, NULL);
	}

IL_00a5:
	{
		// if(roughnessFactor < 1f) {
		float L_23 = __this->___roughnessFactor_3;
		if ((!(((float)L_23) < ((float)(1.0f)))))
		{
			goto IL_00c3;
		}
	}
	{
		// writer.AddProperty("roughnessFactor", roughnessFactor);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_24 = ___writer0;
		float L_25 = __this->___roughnessFactor_3;
		NullCheck(L_24);
		JsonWriter_AddProperty_mAB9A3ED6353AAF08537326C1840D2A0246DCC20B(L_24, _stringLiteral0F0F6BC825F919DB3AB672DFC7E511423455FA92, L_25, NULL);
	}

IL_00c3:
	{
		// if(baseColorTexture!=null) {
		TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* L_26 = __this->___baseColorTexture_1;
		if (!L_26)
		{
			goto IL_00e2;
		}
	}
	{
		// writer.AddProperty("baseColorTexture");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_27 = ___writer0;
		NullCheck(L_27);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_27, _stringLiteralE0B97587CDEEE52C4D60DC4F0F2694D006C01876, NULL);
		// baseColorTexture.GltfSerialize(writer);
		TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* L_28 = __this->___baseColorTexture_1;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_29 = ___writer0;
		NullCheck(L_28);
		VirtualActionInvoker1< JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* >::Invoke(4 /* System.Void GLTFast.Schema.TextureInfo::GltfSerialize(GLTFast.Schema.JsonWriter) */, L_28, L_29);
	}

IL_00e2:
	{
		// if(metallicRoughnessTexture!=null) {
		TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* L_30 = __this->___metallicRoughnessTexture_4;
		if (!L_30)
		{
			goto IL_0101;
		}
	}
	{
		// writer.AddProperty("metallicRoughnessTexture");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_31 = ___writer0;
		NullCheck(L_31);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_31, _stringLiteral3DE37F9E97BD49711DF82ED1813CB74AD1DE0C49, NULL);
		// metallicRoughnessTexture.GltfSerialize(writer);
		TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* L_32 = __this->___metallicRoughnessTexture_4;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_33 = ___writer0;
		NullCheck(L_32);
		VirtualActionInvoker1< JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* >::Invoke(4 /* System.Void GLTFast.Schema.TextureInfo::GltfSerialize(GLTFast.Schema.JsonWriter) */, L_32, L_33);
	}

IL_0101:
	{
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_34 = ___writer0;
		NullCheck(L_34);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_34, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.PbrMetallicRoughness::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PbrMetallicRoughness__ctor_mB2837D2E0C46AB91E8B3F3021B23328ED08510DB (PbrMetallicRoughness_t1969AD2EB37D63AC503B44C586A934122E0B413E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tC1E358237C258EFD324DF2AB7D6BFA4A886E1427____F6BB1294DA2F78CD935B01C7656280DF5EAA0439E9D97BC03775825A41A508E4_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float[] baseColorFactor = {1,1,1,1};
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tC1E358237C258EFD324DF2AB7D6BFA4A886E1427____F6BB1294DA2F78CD935B01C7656280DF5EAA0439E9D97BC03775825A41A508E4_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		__this->___baseColorFactor_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseColorFactor_0), (void*)L_1);
		// public float metallicFactor = 1;
		__this->___metallicFactor_2 = (1.0f);
		// public float roughnessFactor = 1;
		__this->___roughnessFactor_3 = (1.0f);
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
// UnityEngine.Color GLTFast.Schema.Sheen::get_sheenColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Sheen_get_sheenColor_mB023B0A8C847DCEC3F6514322CF753497FF39568 (Sheen_t0094B5B81DE3992372C87D0746D4499F1980700E* __this, const RuntimeMethod* method) 
{
	{
		// new Color(
		//     sheenColorFactor[0],
		//     sheenColorFactor[1],
		//     sheenColorFactor[2]
		// );
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___sheenColorFactor_0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		float L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___sheenColorFactor_0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___sheenColorFactor_0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void GLTFast.Schema.Sheen::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sheen_GltfSerialize_mAE750F75EAE9D911E593860F59E944876370877D (Sheen_t0094B5B81DE3992372C87D0746D4499F1980700E* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		NullCheck(L_1);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_1, NULL);
		// throw new System.NotImplementedException($"GltfSerialize missing on {GetType()}");
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		String_t* L_3;
		L_3 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9F7B02C31DDA99DC72E6A6212C308FDD1C99628)), L_2, NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_4 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Sheen_GltfSerialize_mAE750F75EAE9D911E593860F59E944876370877D_RuntimeMethod_var)));
	}
}
// System.Void GLTFast.Schema.Sheen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sheen__ctor_m2EA032C6685D9A325AB268C0AE348B812E4C5F5C (Sheen_t0094B5B81DE3992372C87D0746D4499F1980700E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tC1E358237C258EFD324DF2AB7D6BFA4A886E1427____8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float[] sheenColorFactor = {1,1,1};
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tC1E358237C258EFD324DF2AB7D6BFA4A886E1427____8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		__this->___sheenColorFactor_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sheenColorFactor_0), (void*)L_1);
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
// System.Void GLTFast.Schema.Transmission::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transmission_GltfSerialize_mD7044B23F9ED8B3EF1C691A891E886C184731EC9 (Transmission_tF6BE28205152A92C29C29FF652B2A069DC1273A7* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		NullCheck(L_1);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_1, NULL);
		// throw new System.NotImplementedException($"GltfSerialize missing on {GetType()}");
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		String_t* L_3;
		L_3 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9F7B02C31DDA99DC72E6A6212C308FDD1C99628)), L_2, NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_4 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Transmission_GltfSerialize_mD7044B23F9ED8B3EF1C691A891E886C184731EC9_RuntimeMethod_var)));
	}
}
// System.Void GLTFast.Schema.Transmission::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transmission__ctor_m15F34AE13BE80546DCBC9F0965749A48341B6711 (Transmission_tF6BE28205152A92C29C29FF652B2A069DC1273A7* __this, const RuntimeMethod* method) 
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
// System.Void GLTFast.Schema.MaterialUnlit::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialUnlit_GltfSerialize_m128D3855A7D27DAAF889809C76F9BFF8C540DA9B (MaterialUnlit_tFC8C1ACB8A8DFE956115E7FA14B28F69AFBCB5DF* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		NullCheck(L_1);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_1, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.MaterialUnlit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialUnlit__ctor_m750DA8A39B4E1D1DB3B591F4B56142D35071923C (MaterialUnlit_tFC8C1ACB8A8DFE956115E7FA14B28F69AFBCB5DF* __this, const RuntimeMethod* method) 
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
// System.Object GLTFast.Schema.Mesh::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mesh_Clone_m4746CD0BB40C530207CE7D3DE91270AA6B3D8B39 (Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshPrimitiveU5BU5D_tC39F55BE4E5D3AAFB80140CCBFD9541D394A0EC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var clone = (Mesh)MemberwiseClone();
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		V_0 = ((Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D*)CastclassClass((RuntimeObject*)L_0, Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D_il2cpp_TypeInfo_var));
		// if (primitives != null) {
		MeshPrimitiveU5BU5D_tC39F55BE4E5D3AAFB80140CCBFD9541D394A0EC0* L_1 = __this->___primitives_1;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		// clone.primitives = new MeshPrimitive[primitives.Length];
		Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D* L_2 = V_0;
		MeshPrimitiveU5BU5D_tC39F55BE4E5D3AAFB80140CCBFD9541D394A0EC0* L_3 = __this->___primitives_1;
		NullCheck(L_3);
		MeshPrimitiveU5BU5D_tC39F55BE4E5D3AAFB80140CCBFD9541D394A0EC0* L_4 = (MeshPrimitiveU5BU5D_tC39F55BE4E5D3AAFB80140CCBFD9541D394A0EC0*)(MeshPrimitiveU5BU5D_tC39F55BE4E5D3AAFB80140CCBFD9541D394A0EC0*)SZArrayNew(MeshPrimitiveU5BU5D_tC39F55BE4E5D3AAFB80140CCBFD9541D394A0EC0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		NullCheck(L_2);
		L_2->___primitives_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___primitives_1), (void*)L_4);
		// for (var i = 0; i < primitives.Length; i++) {
		V_1 = 0;
		goto IL_0049;
	}

IL_002b:
	{
		// clone.primitives[i] = (MeshPrimitive) primitives[i].Clone();
		Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D* L_5 = V_0;
		NullCheck(L_5);
		MeshPrimitiveU5BU5D_tC39F55BE4E5D3AAFB80140CCBFD9541D394A0EC0* L_6 = L_5->___primitives_1;
		int32_t L_7 = V_1;
		MeshPrimitiveU5BU5D_tC39F55BE4E5D3AAFB80140CCBFD9541D394A0EC0* L_8 = __this->___primitives_1;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = MeshPrimitive_Clone_m435B42C25725F1E4A99339E94942A48FC8781E4B(L_11, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, ((MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31*)CastclassClass((RuntimeObject*)L_12, MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31_il2cpp_TypeInfo_var)));
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31*)((MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31*)CastclassClass((RuntimeObject*)L_12, MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31_il2cpp_TypeInfo_var)));
		// for (var i = 0; i < primitives.Length; i++) {
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0049:
	{
		// for (var i = 0; i < primitives.Length; i++) {
		int32_t L_14 = V_1;
		MeshPrimitiveU5BU5D_tC39F55BE4E5D3AAFB80140CCBFD9541D394A0EC0* L_15 = __this->___primitives_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_002b;
		}
	}

IL_0054:
	{
		// return clone;
		Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D* L_16 = V_0;
		return L_16;
	}
}
// System.Void GLTFast.Schema.Mesh::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GltfSerialize_m46A5C312939F8D9C78DB21DC366875D475773767 (Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral043F6A61FD0A9CF24ECBF3D68E6902E93443AFFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C800E39CF656105FB08CCBDF7383FACFDB73DF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DFFBF3AF751E079B1C9570BBBAA70372C59D1D9);
		s_Il2CppMethodInitialized = true;
	}
	MeshPrimitiveU5BU5D_tC39F55BE4E5D3AAFB80140CCBFD9541D394A0EC0* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// GltfSerializeRoot(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		RootChild_GltfSerializeRoot_m5633F10A7CB50F661EBC5D3E552C5946F4C3D35E(__this, L_1, NULL);
		// if (primitives != null) {
		MeshPrimitiveU5BU5D_tC39F55BE4E5D3AAFB80140CCBFD9541D394A0EC0* L_2 = __this->___primitives_1;
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		// writer.AddArray("primitives");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_3 = ___writer0;
		NullCheck(L_3);
		JsonWriter_AddArray_m3FF9C631816077B6D0F2C80A9785CA1B1E946AF0(L_3, _stringLiteral043F6A61FD0A9CF24ECBF3D68E6902E93443AFFD, NULL);
		// foreach (var primitive in primitives) {
		MeshPrimitiveU5BU5D_tC39F55BE4E5D3AAFB80140CCBFD9541D394A0EC0* L_4 = __this->___primitives_1;
		V_0 = L_4;
		V_1 = 0;
		goto IL_0038;
	}

IL_002b:
	{
		// foreach (var primitive in primitives) {
		MeshPrimitiveU5BU5D_tC39F55BE4E5D3AAFB80140CCBFD9541D394A0EC0* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// primitive.GltfSerialize(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_9 = ___writer0;
		NullCheck(L_8);
		MeshPrimitive_GltfSerialize_m6DAEF3BDC57243CF460296770AA2F397C60EED91(L_8, L_9, NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0038:
	{
		// foreach (var primitive in primitives) {
		int32_t L_11 = V_1;
		MeshPrimitiveU5BU5D_tC39F55BE4E5D3AAFB80140CCBFD9541D394A0EC0* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_002b;
		}
	}
	{
		// writer.CloseArray();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_13 = ___writer0;
		NullCheck(L_13);
		JsonWriter_CloseArray_m5AD2ECE87AAB8692647D11ADA12B5F7BAC3EB574(L_13, NULL);
	}

IL_0044:
	{
		// if (weights != null) {
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = __this->___weights_2;
		if (!L_14)
		{
			goto IL_005d;
		}
	}
	{
		// writer.AddArrayProperty("weights", weights);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_15 = ___writer0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = __this->___weights_2;
		NullCheck(L_15);
		JsonWriter_AddArrayProperty_m598554F05B3A9E2CB6428CBEFCE33AFBB2931BC8(L_15, _stringLiteral9DFFBF3AF751E079B1C9570BBBAA70372C59D1D9, (RuntimeObject*)L_16, NULL);
	}

IL_005d:
	{
		// if (extras != null) {
		MeshExtras_t0C9FC7300719D84651490B4FBB3BC69CEC86BB3E* L_17 = __this->___extras_3;
		if (!L_17)
		{
			goto IL_0082;
		}
	}
	{
		// writer.AddProperty("extras");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_18 = ___writer0;
		NullCheck(L_18);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_18, _stringLiteral7C800E39CF656105FB08CCBDF7383FACFDB73DF7, NULL);
		// extras.GltfSerialize(writer);
		MeshExtras_t0C9FC7300719D84651490B4FBB3BC69CEC86BB3E* L_19 = __this->___extras_3;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_20 = ___writer0;
		NullCheck(L_19);
		MeshExtras_GltfSerialize_mB4D561873DC5C8FFE7DB54F7BE2A3E0AD8F577DC(L_19, L_20, NULL);
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_21 = ___writer0;
		NullCheck(L_21);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_21, NULL);
	}

IL_0082:
	{
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_22 = ___writer0;
		NullCheck(L_22);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_22, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m31F79DB68C59CFBCC806E2DDB5D9B9367705FF1C (Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D* __this, const RuntimeMethod* method) 
{
	{
		RootChild__ctor_m889C52000B217955811A13981472070C7835FF84(__this, NULL);
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
// System.Void GLTFast.Schema.MeshExtras::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshExtras_GltfSerialize_mB4D561873DC5C8FFE7DB54F7BE2A3E0AD8F577DC (MeshExtras_t0C9FC7300719D84651490B4FBB3BC69CEC86BB3E* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2033066FF26846A7FA1DEF97FAA1797F23C50E73);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (targetNames != null) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___targetNames_0;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// writer.AddArrayProperty("targetNames", targetNames);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->___targetNames_0;
		NullCheck(L_1);
		JsonWriter_AddArrayProperty_mDA7B79A7A0C5FE63DC275BEABA5784E8F92192DD(L_1, _stringLiteral2033066FF26846A7FA1DEF97FAA1797F23C50E73, (RuntimeObject*)L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GLTFast.Schema.MeshExtras::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshExtras__ctor_m421EE5CF2ECDC1680ECC3B2798A69833E42B6FB5 (MeshExtras_t0C9FC7300719D84651490B4FBB3BC69CEC86BB3E* __this, const RuntimeMethod* method) 
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
// System.Void GLTFast.Schema.MeshGpuInstancing::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshGpuInstancing_GltfSerialize_mBFAC3E5DECC99E7F47047FD6AA07590445081BDC (MeshGpuInstancing_t5B623601E3413EF0C7CC6F0D059515319D93AD04* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshGpuInstancing_GltfSerialize_mBFAC3E5DECC99E7F47047FD6AA07590445081BDC_RuntimeMethod_var)));
	}
}
// System.Void GLTFast.Schema.MeshGpuInstancing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshGpuInstancing__ctor_m566C2351EF543B20CAB55376453BC651DAF15F82 (MeshGpuInstancing_t5B623601E3413EF0C7CC6F0D059515319D93AD04* __this, const RuntimeMethod* method) 
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
// System.Void GLTFast.Schema.MeshGpuInstancing/Attributes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attributes__ctor_m13D90E24385B2A5C49CA27775893022D6A2DC032 (Attributes_tB68862771132AC61C3C3E355DFDED8B11A5C4638* __this, const RuntimeMethod* method) 
{
	{
		// public int TRANSLATION = -1;
		__this->___TRANSLATION_0 = (-1);
		// public int ROTATION = -1;
		__this->___ROTATION_1 = (-1);
		// public int SCALE = -1;
		__this->___SCALE_2 = (-1);
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
// System.Boolean GLTFast.Schema.MeshPrimitive::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshPrimitive_Equals_mBDCE3BA1E6BE1A85DD9786D11E35456B2E53060B (MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if ((obj == null) || ! this.GetType().Equals(obj.GetType())) {
		RuntimeObject* L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(125 /* System.Boolean System.Type::Equals(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		// return false;
		return (bool)0;
	}

IL_0018:
	{
		// var b = (MeshPrimitive) obj;
		RuntimeObject* L_5 = ___obj0;
		V_0 = ((MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31*)CastclassClass((RuntimeObject*)L_5, MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31_il2cpp_TypeInfo_var));
		// if (attributes.Equals(b.attributes)) {
		Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207* L_6 = __this->___attributes_0;
		MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31* L_7 = V_0;
		NullCheck(L_7);
		Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207* L_8 = L_7->___attributes_0;
		NullCheck(L_6);
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_6, L_8);
		if (!L_9)
		{
			goto IL_008c;
		}
	}
	{
		// if (targets == null) {
		MorphTargetU5BU5D_tB3CE0CA707BA21D44E56A688537C378262F25C7C* L_10 = __this->___targets_4;
		if (L_10)
		{
			goto IL_0044;
		}
	}
	{
		// return b.targets == null;
		MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31* L_11 = V_0;
		NullCheck(L_11);
		MorphTargetU5BU5D_tB3CE0CA707BA21D44E56A688537C378262F25C7C* L_12 = L_11->___targets_4;
		return (bool)((((RuntimeObject*)(MorphTargetU5BU5D_tB3CE0CA707BA21D44E56A688537C378262F25C7C*)L_12) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_0044:
	{
		// if (b.targets!=null && targets.Length == b.targets.Length) {
		MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31* L_13 = V_0;
		NullCheck(L_13);
		MorphTargetU5BU5D_tB3CE0CA707BA21D44E56A688537C378262F25C7C* L_14 = L_13->___targets_4;
		if (!L_14)
		{
			goto IL_008c;
		}
	}
	{
		MorphTargetU5BU5D_tB3CE0CA707BA21D44E56A688537C378262F25C7C* L_15 = __this->___targets_4;
		NullCheck(L_15);
		MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31* L_16 = V_0;
		NullCheck(L_16);
		MorphTargetU5BU5D_tB3CE0CA707BA21D44E56A688537C378262F25C7C* L_17 = L_16->___targets_4;
		NullCheck(L_17);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))) == ((uint32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_008c;
		}
	}
	{
		// for (var i = 0; i < targets.Length; i++) {
		V_1 = 0;
		goto IL_007f;
	}

IL_0062:
	{
		// if (!targets[i].Equals(b.targets[i])) return false;
		MorphTargetU5BU5D_tB3CE0CA707BA21D44E56A688537C378262F25C7C* L_18 = __this->___targets_4;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31* L_22 = V_0;
		NullCheck(L_22);
		MorphTargetU5BU5D_tB3CE0CA707BA21D44E56A688537C378262F25C7C* L_23 = L_22->___targets_4;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_21);
		bool L_27;
		L_27 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_21, L_26);
		if (L_27)
		{
			goto IL_007b;
		}
	}
	{
		// if (!targets[i].Equals(b.targets[i])) return false;
		return (bool)0;
	}

IL_007b:
	{
		// for (var i = 0; i < targets.Length; i++) {
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_007f:
	{
		// for (var i = 0; i < targets.Length; i++) {
		int32_t L_29 = V_1;
		MorphTargetU5BU5D_tB3CE0CA707BA21D44E56A688537C378262F25C7C* L_30 = __this->___targets_4;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0062;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_008c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 GLTFast.Schema.MeshPrimitive::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshPrimitive_GetHashCode_m1CBBB461CBB215B4B92C4C5066AF52FDD7A7F0FF (MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int hash = 13;
		V_0 = ((int32_t)13);
		// hash = hash * 7 + attributes.GetHashCode();
		int32_t L_0 = V_0;
		Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207* L_1 = __this->___attributes_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 7)), L_2));
		// if (targets != null) {
		MorphTargetU5BU5D_tB3CE0CA707BA21D44E56A688537C378262F25C7C* L_3 = __this->___targets_4;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// hash = hash * 7 + targets.GetHashCode();
		int32_t L_4 = V_0;
		MorphTargetU5BU5D_tB3CE0CA707BA21D44E56A688537C378262F25C7C* L_5 = __this->___targets_4;
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject*)L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_4, 7)), L_6));
	}

IL_002b:
	{
		// return hash;
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Object GLTFast.Schema.MeshPrimitive::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeshPrimitive_Clone_m435B42C25725F1E4A99339E94942A48FC8781E4B (MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31* __this, const RuntimeMethod* method) 
{
	{
		// return MemberwiseClone();
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		return L_0;
	}
}
// System.Void GLTFast.Schema.MeshPrimitive::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshPrimitive_GltfSerialize_m6DAEF3BDC57243CF460296770AA2F397C60EED91 (MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrawMode_t227FDC53B5754CB0E70784BED7FE1087A4DCB551_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DC0ECF676CDB8466A06C299A2E315606DFC00BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral563E1460168EA54A80919DA3A2C91EDC081445AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA25C69590D313E80E32DAF839FFE871D0B53E5EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		s_Il2CppMethodInitialized = true;
	}
	MorphTargetU5BU5D_tB3CE0CA707BA21D44E56A688537C378262F25C7C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// if(attributes!=null) {
		Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207* L_1 = __this->___attributes_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// writer.AddProperty("attributes");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_2 = ___writer0;
		NullCheck(L_2);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_2, _stringLiteralA25C69590D313E80E32DAF839FFE871D0B53E5EB, NULL);
		// attributes.GltfSerialize(writer);
		Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207* L_3 = __this->___attributes_0;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_4 = ___writer0;
		NullCheck(L_3);
		Attributes_GltfSerialize_m0445F0EE7C03D24858D2792FB36D478DF78FD897(L_3, L_4, NULL);
	}

IL_0025:
	{
		// if(indices>=0) {
		int32_t L_5 = __this->___indices_1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		// writer.AddProperty("indices", indices);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_6 = ___writer0;
		int32_t L_7 = __this->___indices_1;
		NullCheck(L_6);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_6, _stringLiteral4DC0ECF676CDB8466A06C299A2E315606DFC00BD, L_7, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_003f:
	{
		// if(material>=0) {
		int32_t L_8 = __this->___material_2;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		// writer.AddProperty("material", material);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_9 = ___writer0;
		int32_t L_10 = __this->___material_2;
		NullCheck(L_9);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_9, _stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED, L_10, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0059:
	{
		// if( mode != DrawMode.Triangles) {
		int32_t L_11 = __this->___mode_3;
		if ((((int32_t)L_11) == ((int32_t)4)))
		{
			goto IL_007e;
		}
	}
	{
		// writer.AddProperty("mode",mode.ToString());
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_12 = ___writer0;
		int32_t* L_13 = (&__this->___mode_3);
		Il2CppFakeBox<int32_t> L_14(DrawMode_t227FDC53B5754CB0E70784BED7FE1087A4DCB551_il2cpp_TypeInfo_var, L_13);
		String_t* L_15;
		L_15 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_14), NULL);
		NullCheck(L_12);
		JsonWriter_AddProperty_m9BBF34A6F6097C126C3EEB74D4B457A96ABAA179(L_12, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, L_15, NULL);
	}

IL_007e:
	{
		// if(targets!=null) {
		MorphTargetU5BU5D_tB3CE0CA707BA21D44E56A688537C378262F25C7C* L_16 = __this->___targets_4;
		if (!L_16)
		{
			goto IL_00b5;
		}
	}
	{
		// writer.AddArray("targets");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_17 = ___writer0;
		NullCheck(L_17);
		JsonWriter_AddArray_m3FF9C631816077B6D0F2C80A9785CA1B1E946AF0(L_17, _stringLiteral563E1460168EA54A80919DA3A2C91EDC081445AA, NULL);
		// foreach (var target in targets) {
		MorphTargetU5BU5D_tB3CE0CA707BA21D44E56A688537C378262F25C7C* L_18 = __this->___targets_4;
		V_0 = L_18;
		V_1 = 0;
		goto IL_00a9;
	}

IL_009c:
	{
		// foreach (var target in targets) {
		MorphTargetU5BU5D_tB3CE0CA707BA21D44E56A688537C378262F25C7C* L_19 = V_0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		// target.GltfSerialize(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_23 = ___writer0;
		NullCheck(L_22);
		MorphTarget_GltfSerialize_m9ECEA6AB607EBD54539E24B3173C7AB13B6B4C5C(L_22, L_23, NULL);
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_00a9:
	{
		// foreach (var target in targets) {
		int32_t L_25 = V_1;
		MorphTargetU5BU5D_tB3CE0CA707BA21D44E56A688537C378262F25C7C* L_26 = V_0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_009c;
		}
	}
	{
		// writer.CloseArray();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_27 = ___writer0;
		NullCheck(L_27);
		JsonWriter_CloseArray_m5AD2ECE87AAB8692647D11ADA12B5F7BAC3EB574(L_27, NULL);
	}

IL_00b5:
	{
		// if(extensions!=null) {
		MeshPrimitiveExtensions_tA62DDD2175422FB2E152CA59BA33AFEA49FD713C* L_28 = __this->___extensions_5;
		if (!L_28)
		{
			goto IL_00c9;
		}
	}
	{
		// extensions.GltfSerialize(writer);
		MeshPrimitiveExtensions_tA62DDD2175422FB2E152CA59BA33AFEA49FD713C* L_29 = __this->___extensions_5;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_30 = ___writer0;
		NullCheck(L_29);
		MeshPrimitiveExtensions_GltfSerialize_mDFE820A7AC4B9C0A08C6A9CC84D97CAA3F6F6E47(L_29, L_30, NULL);
	}

IL_00c9:
	{
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_31 = ___writer0;
		NullCheck(L_31);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_31, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.MeshPrimitive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshPrimitive__ctor_mB846C73BA82A04EDF3A73038D331731C27473CB5 (MeshPrimitive_t7684F86910383D7396BB415B1F39C4DDFB0ECC31* __this, const RuntimeMethod* method) 
{
	{
		// public int indices = -1;
		__this->___indices_1 = (-1);
		// public int material = -1;
		__this->___material_2 = (-1);
		// public DrawMode mode = DrawMode.Triangles;
		__this->___mode_3 = 4;
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
// System.Boolean GLTFast.Schema.Attributes::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Attributes_Equals_mBF4847943B59BF9F75B1AE825AC9BDBE551719F2 (Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207* V_0 = NULL;
	{
		// if ((obj == null) || ! this.GetType().Equals(obj.GetType()))
		RuntimeObject* L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(125 /* System.Boolean System.Type::Equals(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		// return false;
		return (bool)0;
	}

IL_0018:
	{
		// var b = (Attributes) obj;
		RuntimeObject* L_5 = ___obj0;
		V_0 = ((Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207*)CastclassClass((RuntimeObject*)L_5, Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207_il2cpp_TypeInfo_var));
		// return POSITION==b.POSITION
		//     && NORMAL==b.NORMAL
		//     && TANGENT==b.TANGENT
		//     && TEXCOORD_0==b.TEXCOORD_0
		//     && TEXCOORD_1==b.TEXCOORD_1
		//     && COLOR_0==b.COLOR_0
		//     ;
		int32_t L_6 = __this->___POSITION_0;
		Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___POSITION_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_9 = __this->___NORMAL_1;
		Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___NORMAL_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_12 = __this->___TANGENT_2;
		Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___TANGENT_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_15 = __this->___TEXCOORD_0_3;
		Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = L_16->___TEXCOORD_0_3;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_17))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_18 = __this->___TEXCOORD_1_4;
		Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = L_19->___TEXCOORD_1_4;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_20))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_21 = __this->___COLOR_0_11;
		Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = L_22->___COLOR_0_11;
		return (bool)((((int32_t)L_21) == ((int32_t)L_23))? 1 : 0);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Int32 GLTFast.Schema.Attributes::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Attributes_GetHashCode_mDD91C98BCB81B6E4F6A167607A7A7F18331D5075 (Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207* __this, const RuntimeMethod* method) 
{
	{
		// int hash = 13;
		// hash = hash * 7 + POSITION.GetHashCode();
		int32_t* L_0 = (&__this->___POSITION_0);
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_0, NULL);
		// hash = hash * 7 + NORMAL.GetHashCode();
		int32_t* L_2 = (&__this->___NORMAL_1);
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_2, NULL);
		// hash = hash * 7 + TANGENT.GetHashCode();
		int32_t* L_4 = (&__this->___TANGENT_2);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, NULL);
		// hash = hash * 7 + TEXCOORD_0.GetHashCode();
		int32_t* L_6 = (&__this->___TEXCOORD_0_3);
		int32_t L_7;
		L_7 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_6, NULL);
		// hash = hash * 7 + TEXCOORD_1.GetHashCode();
		int32_t* L_8 = (&__this->___TEXCOORD_1_4);
		int32_t L_9;
		L_9 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_8, NULL);
		// hash = hash * 7 + COLOR_0.GetHashCode();
		int32_t* L_10 = (&__this->___COLOR_0_11);
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_10, NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)13), 7)), L_1)), 7)), L_3)), 7)), L_5)), 7)), L_7)), 7)), L_9)), 7)), L_11));
	}
}
// System.Void GLTFast.Schema.Attributes::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attributes_GltfSerialize_m0445F0EE7C03D24858D2792FB36D478DF78FD897 (Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral100B3F946A4D93342EECF3906D8FF6DECC4DF094);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13D944F6ACCBA9EB6B282C2384FC41E6B8E94E9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29FD32A08F50D27AE9CA11E8B880A56E8B1AFC03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39153503F0F293852311B939BA0FA37C5B23D23D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41159E86A16FE5FE328FD5E826383482C6CB3C3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47946D04F733BF1B11730B7147B6BDC368A3A301);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral487FB12733D18F5A81C83259BFC39D4A441997D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C0C3B05058E50D3C7B355CCA9C5B0BEE36C10E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C82574B38F4CEF9062EB629499DF893EE0427F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7929D47072FE1BD0F03D59F11A3F594258A4BEEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B79ADB84DC8576E1E5CB86C3C23AC1507D608B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C2ADAF9F589DE3E55AE9747E5ED55C57F5DA9A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB1C16C2009D328CC2411BAA019F939F08970181);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1FF6CF2875BCE1475CD83F7A3209CE68FB48001);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// if( POSITION >= 0 ) writer.AddProperty("POSITION", POSITION);
		int32_t L_1 = __this->___POSITION_0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		// if( POSITION >= 0 ) writer.AddProperty("POSITION", POSITION);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_2 = ___writer0;
		int32_t L_3 = __this->___POSITION_0;
		NullCheck(L_2);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_2, _stringLiteral47946D04F733BF1B11730B7147B6BDC368A3A301, L_3, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0020:
	{
		// if( NORMAL >= 0 ) writer.AddProperty("NORMAL", NORMAL);
		int32_t L_4 = __this->___NORMAL_1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		// if( NORMAL >= 0 ) writer.AddProperty("NORMAL", NORMAL);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_5 = ___writer0;
		int32_t L_6 = __this->___NORMAL_1;
		NullCheck(L_5);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_5, _stringLiteralAB1C16C2009D328CC2411BAA019F939F08970181, L_6, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_003a:
	{
		// if( TANGENT >= 0 ) writer.AddProperty("TANGENT", TANGENT);
		int32_t L_7 = __this->___TANGENT_2;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0054;
		}
	}
	{
		// if( TANGENT >= 0 ) writer.AddProperty("TANGENT", TANGENT);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_8 = ___writer0;
		int32_t L_9 = __this->___TANGENT_2;
		NullCheck(L_8);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_8, _stringLiteral41159E86A16FE5FE328FD5E826383482C6CB3C3F, L_9, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0054:
	{
		// if( TEXCOORD_0 >= 0 ) writer.AddProperty("TEXCOORD_0", TEXCOORD_0);
		int32_t L_10 = __this->___TEXCOORD_0_3;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		// if( TEXCOORD_0 >= 0 ) writer.AddProperty("TEXCOORD_0", TEXCOORD_0);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_11 = ___writer0;
		int32_t L_12 = __this->___TEXCOORD_0_3;
		NullCheck(L_11);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_11, _stringLiteral100B3F946A4D93342EECF3906D8FF6DECC4DF094, L_12, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_006e:
	{
		// if( TEXCOORD_1 >= 0 ) writer.AddProperty("TEXCOORD_1", TEXCOORD_1);
		int32_t L_13 = __this->___TEXCOORD_1_4;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		// if( TEXCOORD_1 >= 0 ) writer.AddProperty("TEXCOORD_1", TEXCOORD_1);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_14 = ___writer0;
		int32_t L_15 = __this->___TEXCOORD_1_4;
		NullCheck(L_14);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_14, _stringLiteral9B79ADB84DC8576E1E5CB86C3C23AC1507D608B5, L_15, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0088:
	{
		// if( TEXCOORD_2 >= 0 ) writer.AddProperty("TEXCOORD_2", TEXCOORD_2);
		int32_t L_16 = __this->___TEXCOORD_2_5;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		// if( TEXCOORD_2 >= 0 ) writer.AddProperty("TEXCOORD_2", TEXCOORD_2);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_17 = ___writer0;
		int32_t L_18 = __this->___TEXCOORD_2_5;
		NullCheck(L_17);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_17, _stringLiteralC1FF6CF2875BCE1475CD83F7A3209CE68FB48001, L_18, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_00a2:
	{
		// if( TEXCOORD_3 >= 0 ) writer.AddProperty("TEXCOORD_3", TEXCOORD_3);
		int32_t L_19 = __this->___TEXCOORD_3_6;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_00bc;
		}
	}
	{
		// if( TEXCOORD_3 >= 0 ) writer.AddProperty("TEXCOORD_3", TEXCOORD_3);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_20 = ___writer0;
		int32_t L_21 = __this->___TEXCOORD_3_6;
		NullCheck(L_20);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_20, _stringLiteral29FD32A08F50D27AE9CA11E8B880A56E8B1AFC03, L_21, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_00bc:
	{
		// if( TEXCOORD_4 >= 0 ) writer.AddProperty("TEXCOORD_4", TEXCOORD_4);
		int32_t L_22 = __this->___TEXCOORD_4_7;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_00d6;
		}
	}
	{
		// if( TEXCOORD_4 >= 0 ) writer.AddProperty("TEXCOORD_4", TEXCOORD_4);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_23 = ___writer0;
		int32_t L_24 = __this->___TEXCOORD_4_7;
		NullCheck(L_23);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_23, _stringLiteral6C82574B38F4CEF9062EB629499DF893EE0427F4, L_24, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_00d6:
	{
		// if( TEXCOORD_5 >= 0 ) writer.AddProperty("TEXCOORD_5", TEXCOORD_5);
		int32_t L_25 = __this->___TEXCOORD_5_8;
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_00f0;
		}
	}
	{
		// if( TEXCOORD_5 >= 0 ) writer.AddProperty("TEXCOORD_5", TEXCOORD_5);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_26 = ___writer0;
		int32_t L_27 = __this->___TEXCOORD_5_8;
		NullCheck(L_26);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_26, _stringLiteral7929D47072FE1BD0F03D59F11A3F594258A4BEEC, L_27, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_00f0:
	{
		// if( TEXCOORD_6 >= 0 ) writer.AddProperty("TEXCOORD_6", TEXCOORD_6);
		int32_t L_28 = __this->___TEXCOORD_6_9;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_010a;
		}
	}
	{
		// if( TEXCOORD_6 >= 0 ) writer.AddProperty("TEXCOORD_6", TEXCOORD_6);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_29 = ___writer0;
		int32_t L_30 = __this->___TEXCOORD_6_9;
		NullCheck(L_29);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_29, _stringLiteral487FB12733D18F5A81C83259BFC39D4A441997D9, L_30, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_010a:
	{
		// if( TEXCOORD_7 >= 0 ) writer.AddProperty("TEXCOORD_7", TEXCOORD_7);
		int32_t L_31 = __this->___TEXCOORD_7_10;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_0124;
		}
	}
	{
		// if( TEXCOORD_7 >= 0 ) writer.AddProperty("TEXCOORD_7", TEXCOORD_7);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_32 = ___writer0;
		int32_t L_33 = __this->___TEXCOORD_7_10;
		NullCheck(L_32);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_32, _stringLiteral5C0C3B05058E50D3C7B355CCA9C5B0BEE36C10E5, L_33, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0124:
	{
		// if( COLOR_0 >= 0 ) writer.AddProperty("COLOR_0", COLOR_0);
		int32_t L_34 = __this->___COLOR_0_11;
		if ((((int32_t)L_34) < ((int32_t)0)))
		{
			goto IL_013e;
		}
	}
	{
		// if( COLOR_0 >= 0 ) writer.AddProperty("COLOR_0", COLOR_0);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_35 = ___writer0;
		int32_t L_36 = __this->___COLOR_0_11;
		NullCheck(L_35);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_35, _stringLiteral39153503F0F293852311B939BA0FA37C5B23D23D, L_36, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_013e:
	{
		// if( JOINTS_0 >= 0 ) writer.AddProperty("JOINTS_0", JOINTS_0);
		int32_t L_37 = __this->___JOINTS_0_12;
		if ((((int32_t)L_37) < ((int32_t)0)))
		{
			goto IL_0158;
		}
	}
	{
		// if( JOINTS_0 >= 0 ) writer.AddProperty("JOINTS_0", JOINTS_0);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_38 = ___writer0;
		int32_t L_39 = __this->___JOINTS_0_12;
		NullCheck(L_38);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_38, _stringLiteral13D944F6ACCBA9EB6B282C2384FC41E6B8E94E9D, L_39, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0158:
	{
		// if( WEIGHTS_0 >= 0 ) writer.AddProperty("WEIGHTS_0", WEIGHTS_0);
		int32_t L_40 = __this->___WEIGHTS_0_13;
		if ((((int32_t)L_40) < ((int32_t)0)))
		{
			goto IL_0172;
		}
	}
	{
		// if( WEIGHTS_0 >= 0 ) writer.AddProperty("WEIGHTS_0", WEIGHTS_0);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_41 = ___writer0;
		int32_t L_42 = __this->___WEIGHTS_0_13;
		NullCheck(L_41);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_41, _stringLiteral9C2ADAF9F589DE3E55AE9747E5ED55C57F5DA9A7, L_42, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0172:
	{
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_43 = ___writer0;
		NullCheck(L_43);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_43, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.Attributes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attributes__ctor_mDF397AA77DC5CD0F193897BF93EB0C7FE9C6E3AF (Attributes_t668C970DC933ECA3832EBFE147A0E374F38BA207* __this, const RuntimeMethod* method) 
{
	{
		// public int POSITION = -1;
		__this->___POSITION_0 = (-1);
		// public int NORMAL = -1;
		__this->___NORMAL_1 = (-1);
		// public int TANGENT = -1;
		__this->___TANGENT_2 = (-1);
		// public int TEXCOORD_0 = -1;
		__this->___TEXCOORD_0_3 = (-1);
		// public int TEXCOORD_1 = -1;
		__this->___TEXCOORD_1_4 = (-1);
		// public int TEXCOORD_2 = -1;
		__this->___TEXCOORD_2_5 = (-1);
		// public int TEXCOORD_3 = -1;
		__this->___TEXCOORD_3_6 = (-1);
		// public int TEXCOORD_4 = -1;
		__this->___TEXCOORD_4_7 = (-1);
		// public int TEXCOORD_5 = -1;
		__this->___TEXCOORD_5_8 = (-1);
		// public int TEXCOORD_6 = -1;
		__this->___TEXCOORD_6_9 = (-1);
		// public int TEXCOORD_7 = -1;
		__this->___TEXCOORD_7_10 = (-1);
		// public int COLOR_0 = -1;
		__this->___COLOR_0_11 = (-1);
		// public int JOINTS_0 = -1;
		__this->___JOINTS_0_12 = (-1);
		// public int WEIGHTS_0 = -1;
		__this->___WEIGHTS_0_13 = (-1);
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
// System.Void GLTFast.Schema.MeshPrimitiveExtensions::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshPrimitiveExtensions_GltfSerialize_mDFE820A7AC4B9C0A08C6A9CC84D97CAA3F6F6E47 (MeshPrimitiveExtensions_tA62DDD2175422FB2E152CA59BA33AFEA49FD713C* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GLTFast.Schema.MeshPrimitiveExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshPrimitiveExtensions__ctor_mCD468DF8113C6F1662E43B9B6162904B1FCDE480 (MeshPrimitiveExtensions_tA62DDD2175422FB2E152CA59BA33AFEA49FD713C* __this, const RuntimeMethod* method) 
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
// System.Boolean GLTFast.Schema.MorphTarget::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MorphTarget_Equals_m0E70F6CDEED7B7438FA565D9716A9896CAEF6614 (MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092* V_0 = NULL;
	{
		// if ((obj == null) || ! this.GetType().Equals(obj.GetType())) {
		RuntimeObject* L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(125 /* System.Boolean System.Type::Equals(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		// return false;
		return (bool)0;
	}

IL_0018:
	{
		// var b = (MorphTarget) obj;
		RuntimeObject* L_5 = ___obj0;
		V_0 = ((MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092*)CastclassClass((RuntimeObject*)L_5, MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092_il2cpp_TypeInfo_var));
		// return POSITION==b.POSITION
		//     && NORMAL==b.NORMAL
		//     && TANGENT==b.TANGENT
		//     ;
		int32_t L_6 = __this->___POSITION_0;
		MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___POSITION_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_9 = __this->___NORMAL_1;
		MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___NORMAL_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_12 = __this->___TANGENT_2;
		MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___TANGENT_2;
		return (bool)((((int32_t)L_12) == ((int32_t)L_14))? 1 : 0);
	}

IL_004a:
	{
		return (bool)0;
	}
}
// System.Int32 GLTFast.Schema.MorphTarget::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MorphTarget_GetHashCode_m5BC3F11FDF2E2B4796753A82683BBB60069C96CA (MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092* __this, const RuntimeMethod* method) 
{
	{
		// int hash = 13;
		// hash = hash * 7 + POSITION.GetHashCode();
		int32_t* L_0 = (&__this->___POSITION_0);
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_0, NULL);
		// hash = hash * 7 + NORMAL.GetHashCode();
		int32_t* L_2 = (&__this->___NORMAL_1);
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_2, NULL);
		// hash = hash * 7 + TANGENT.GetHashCode();
		int32_t* L_4 = (&__this->___TANGENT_2);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)13), 7)), L_1)), 7)), L_3)), 7)), L_5));
	}
}
// System.Void GLTFast.Schema.MorphTarget::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MorphTarget_GltfSerialize_m9ECEA6AB607EBD54539E24B3173C7AB13B6B4C5C (MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41159E86A16FE5FE328FD5E826383482C6CB3C3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47946D04F733BF1B11730B7147B6BDC368A3A301);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB1C16C2009D328CC2411BAA019F939F08970181);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( POSITION >= 0 ) writer.AddProperty("POSITION", POSITION);
		int32_t L_0 = __this->___POSITION_0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		// if( POSITION >= 0 ) writer.AddProperty("POSITION", POSITION);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		int32_t L_2 = __this->___POSITION_0;
		NullCheck(L_1);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_1, _stringLiteral47946D04F733BF1B11730B7147B6BDC368A3A301, L_2, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_001a:
	{
		// if( NORMAL >= 0 ) writer.AddProperty("NORMAL", NORMAL);
		int32_t L_3 = __this->___NORMAL_1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		// if( NORMAL >= 0 ) writer.AddProperty("NORMAL", NORMAL);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_4 = ___writer0;
		int32_t L_5 = __this->___NORMAL_1;
		NullCheck(L_4);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_4, _stringLiteralAB1C16C2009D328CC2411BAA019F939F08970181, L_5, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0034:
	{
		// if( TANGENT >= 0 ) writer.AddProperty("TANGENT", TANGENT);
		int32_t L_6 = __this->___TANGENT_2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		// if( TANGENT >= 0 ) writer.AddProperty("TANGENT", TANGENT);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_7 = ___writer0;
		int32_t L_8 = __this->___TANGENT_2;
		NullCheck(L_7);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_7, _stringLiteral41159E86A16FE5FE328FD5E826383482C6CB3C3F, L_8, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void GLTFast.Schema.MorphTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MorphTarget__ctor_m732EB1C3170E6E21D83EE25470AA5DA867007828 (MorphTarget_tAF8321B26DF247C71DFA4830B7C8B45D82A71092* __this, const RuntimeMethod* method) 
{
	{
		// public int POSITION = -1;
		__this->___POSITION_0 = (-1);
		// public int NORMAL = -1;
		__this->___NORMAL_1 = (-1);
		// public int TANGENT = -1;
		__this->___TANGENT_2 = (-1);
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
// System.Void GLTFast.Schema.Node::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_GltfSerialize_mEACA2165385686D59BB9D274E65D1B28E4D1769E (Node_t2E23D131CBC25EF198B717957ADA306EF4EA3998* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddArrayProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF4EDAAD77CF499B7C690F324945D68E9D889EBC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00EE2035D1C1084808BE268F9D59D68FF8B3154B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E3569C3B3595933B8E2F60AC56BCC2F7E4BF5D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48DCDDA5B8784939FEE419112A3C8D5268F8A7B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D78A26E6D27FCFE02FCE139BDBB407790B95DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DF417DF46EF8A7C67D3A1FE0CC53DCF5212FC81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7F00519435FC33A7E48F0FCF6CB6D9B257C0DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// GltfSerializeRoot(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		RootChild_GltfSerializeRoot_m5633F10A7CB50F661EBC5D3E552C5946F4C3D35E(__this, L_1, NULL);
		// if (children != null) {
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___children_1;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// writer.AddArrayProperty("children", children);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_3 = ___writer0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->___children_1;
		NullCheck(L_3);
		JsonWriter_AddArrayProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF4EDAAD77CF499B7C690F324945D68E9D889EBC9(L_3, _stringLiteral00EE2035D1C1084808BE268F9D59D68FF8B3154B, (RuntimeObject*)L_4, JsonWriter_AddArrayProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF4EDAAD77CF499B7C690F324945D68E9D889EBC9_RuntimeMethod_var);
	}

IL_0026:
	{
		// if (mesh >= 0) {
		int32_t L_5 = __this->___mesh_2;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		// writer.AddProperty("mesh", mesh);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_6 = ___writer0;
		int32_t L_7 = __this->___mesh_2;
		NullCheck(L_6);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_6, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, L_7, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0040:
	{
		// if (translation!=null) {
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = __this->___translation_6;
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		// writer.AddArrayProperty("translation", translation);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_9 = ___writer0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___translation_6;
		NullCheck(L_9);
		JsonWriter_AddArrayProperty_m598554F05B3A9E2CB6428CBEFCE33AFBB2931BC8(L_9, _stringLiteral2E3569C3B3595933B8E2F60AC56BCC2F7E4BF5D0, (RuntimeObject*)L_10, NULL);
	}

IL_0059:
	{
		// if (rotation!=null) {
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = __this->___rotation_4;
		if (!L_11)
		{
			goto IL_0072;
		}
	}
	{
		// writer.AddArrayProperty("rotation", rotation);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_12 = ___writer0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = __this->___rotation_4;
		NullCheck(L_12);
		JsonWriter_AddArrayProperty_m598554F05B3A9E2CB6428CBEFCE33AFBB2931BC8(L_12, _stringLiteral4DF417DF46EF8A7C67D3A1FE0CC53DCF5212FC81, (RuntimeObject*)L_13, NULL);
	}

IL_0072:
	{
		// if (scale!=null) {
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = __this->___scale_5;
		if (!L_14)
		{
			goto IL_008b;
		}
	}
	{
		// writer.AddArrayProperty("scale", scale);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_15 = ___writer0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = __this->___scale_5;
		NullCheck(L_15);
		JsonWriter_AddArrayProperty_m598554F05B3A9E2CB6428CBEFCE33AFBB2931BC8(L_15, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, (RuntimeObject*)L_16, NULL);
	}

IL_008b:
	{
		// if (matrix!=null) {
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = __this->___matrix_3;
		if (!L_17)
		{
			goto IL_00a4;
		}
	}
	{
		// writer.AddArrayProperty("matrix", matrix);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_18 = ___writer0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = __this->___matrix_3;
		NullCheck(L_18);
		JsonWriter_AddArrayProperty_m598554F05B3A9E2CB6428CBEFCE33AFBB2931BC8(L_18, _stringLiteral48DCDDA5B8784939FEE419112A3C8D5268F8A7B9, (RuntimeObject*)L_19, NULL);
	}

IL_00a4:
	{
		// if (skin >= 0) {
		int32_t L_20 = __this->___skin_7;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		// writer.AddProperty("skin", skin);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_21 = ___writer0;
		int32_t L_22 = __this->___skin_7;
		NullCheck(L_21);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_21, _stringLiteral4D78A26E6D27FCFE02FCE139BDBB407790B95DD6, L_22, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_00be:
	{
		// if (camera >= 0) {
		int32_t L_23 = __this->___camera_8;
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_00d8;
		}
	}
	{
		// writer.AddProperty("camera", skin);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_24 = ___writer0;
		int32_t L_25 = __this->___skin_7;
		NullCheck(L_24);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_24, _stringLiteralA7F00519435FC33A7E48F0FCF6CB6D9B257C0DAA, L_25, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_00d8:
	{
		// if (extensions != null) {
		NodeExtensions_tAADE3087978CF3793142C14BCDBEE07F2CC3381C* L_26 = __this->___extensions_9;
		if (!L_26)
		{
			goto IL_00ec;
		}
	}
	{
		// extensions.GltfSerialize(writer);
		NodeExtensions_tAADE3087978CF3793142C14BCDBEE07F2CC3381C* L_27 = __this->___extensions_9;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_28 = ___writer0;
		NullCheck(L_27);
		NodeExtensions_GltfSerialize_m53836774C37E306F83B822CCA51BA1DAFA811B10(L_27, L_28, NULL);
	}

IL_00ec:
	{
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_29 = ___writer0;
		NullCheck(L_29);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_29, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.Node::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mB3A63DEA108623C741B9974402EF89AC3F50D4F6 (Node_t2E23D131CBC25EF198B717957ADA306EF4EA3998* __this, const RuntimeMethod* method) 
{
	{
		// public int mesh = -1;
		__this->___mesh_2 = (-1);
		// public int skin = -1;
		__this->___skin_7 = (-1);
		// public int camera = -1;
		__this->___camera_8 = (-1);
		RootChild__ctor_m889C52000B217955811A13981472070C7835FF84(__this, NULL);
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
// System.Void GLTFast.Schema.NodeExtensions::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeExtensions_GltfSerialize_m53836774C37E306F83B822CCA51BA1DAFA811B10 (NodeExtensions_tAADE3087978CF3793142C14BCDBEE07F2CC3381C* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE439A4E21AD1D3C286BF2B095A23B35317A5475A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (EXT_mesh_gpu_instancing != null) {
		MeshGpuInstancing_t5B623601E3413EF0C7CC6F0D059515319D93AD04* L_0 = __this->___EXT_mesh_gpu_instancing_0;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// writer.AddProperty("EXT_mesh_gpu_instancing");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		NullCheck(L_1);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_1, _stringLiteralE439A4E21AD1D3C286BF2B095A23B35317A5475A, NULL);
		// EXT_mesh_gpu_instancing.GltfSerialize(writer);
		MeshGpuInstancing_t5B623601E3413EF0C7CC6F0D059515319D93AD04* L_2 = __this->___EXT_mesh_gpu_instancing_0;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_3 = ___writer0;
		NullCheck(L_2);
		MeshGpuInstancing_GltfSerialize_mBFAC3E5DECC99E7F47047FD6AA07590445081BDC(L_2, L_3, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void GLTFast.Schema.NodeExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeExtensions__ctor_m21C0CB7388CFB871B67EE8BF39A37852BDCA5416 (NodeExtensions_tAADE3087978CF3793142C14BCDBEE07F2CC3381C* __this, const RuntimeMethod* method) 
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
// System.Void GLTFast.Schema.NormalTextureInfo::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NormalTextureInfo_GltfSerialize_mA53BA182913E3C0A5DCE69D3A5E5BB28D18D601C (NormalTextureInfo_tFFD5E2FA7AA9C491D6CFF02FDC8EF24253602F55* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// GltfSerializeTextureInfo(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		TextureInfo_GltfSerializeTextureInfo_m9D7485480A7F0BF1A966272213BDAE81F0BCD8C2(__this, L_1, NULL);
		// if (math.abs(scale - 1f) > Constants.epsilon) {
		float L_2 = __this->___scale_3;
		float L_3;
		L_3 = math_abs_mD6633C641692C4A0AEEFB52575D81599ACF1F7F5_inline(((float)il2cpp_codegen_subtract(L_2, (1.0f))), NULL);
		if ((!(((float)L_3) > ((float)(0.00100000005f)))))
		{
			goto IL_0036;
		}
	}
	{
		// writer.AddProperty("scale", scale);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_4 = ___writer0;
		float L_5 = __this->___scale_3;
		NullCheck(L_4);
		JsonWriter_AddProperty_mAB9A3ED6353AAF08537326C1840D2A0246DCC20B(L_4, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, L_5, NULL);
	}

IL_0036:
	{
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_6 = ___writer0;
		NullCheck(L_6);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_6, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.NormalTextureInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NormalTextureInfo__ctor_m01A39BF6FFCDFC3F0F923AF44AB5F20A1A7801E5 (NormalTextureInfo_tFFD5E2FA7AA9C491D6CFF02FDC8EF24253602F55* __this, const RuntimeMethod* method) 
{
	{
		// public float scale = 1.0f;
		__this->___scale_3 = (1.0f);
		TextureInfo__ctor_mD7CC7151EC6BF57345C180E1BE13FFCF8A4D3E1B(__this, NULL);
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
// System.Void GLTFast.Schema.OcclusionTextureInfo::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcclusionTextureInfo_GltfSerialize_mCA8F032B85150390828A7D8142C564CF9268BA56 (OcclusionTextureInfo_t5F9255E7CD563F28A96C07486D589CC492357833* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// GltfSerializeTextureInfo(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		TextureInfo_GltfSerializeTextureInfo_m9D7485480A7F0BF1A966272213BDAE81F0BCD8C2(__this, L_1, NULL);
		// if (math.abs(strength - 1f) > Constants.epsilon) {
		float L_2 = __this->___strength_3;
		float L_3;
		L_3 = math_abs_mD6633C641692C4A0AEEFB52575D81599ACF1F7F5_inline(((float)il2cpp_codegen_subtract(L_2, (1.0f))), NULL);
		if ((!(((float)L_3) > ((float)(0.00100000005f)))))
		{
			goto IL_0036;
		}
	}
	{
		// writer.AddProperty("strength", strength);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_4 = ___writer0;
		float L_5 = __this->___strength_3;
		NullCheck(L_4);
		JsonWriter_AddProperty_mAB9A3ED6353AAF08537326C1840D2A0246DCC20B(L_4, _stringLiteralEF65109317E1DF79845D5868309B0E9BFB10384B, L_5, NULL);
	}

IL_0036:
	{
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_6 = ___writer0;
		NullCheck(L_6);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_6, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.OcclusionTextureInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcclusionTextureInfo__ctor_mDE125E487183BC4C8054A5523E6124CF08498F17 (OcclusionTextureInfo_t5F9255E7CD563F28A96C07486D589CC492357833* __this, const RuntimeMethod* method) 
{
	{
		// public float strength = 1.0f;
		__this->___strength_3 = (1.0f);
		TextureInfo__ctor_mD7CC7151EC6BF57345C180E1BE13FFCF8A4D3E1B(__this, NULL);
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
// UnityEngine.Color GLTFast.Schema.PbrSpecularGlossiness::get_diffuseColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F PbrSpecularGlossiness_get_diffuseColor_m5F4FE71347BE2D9BEF9845371CC35D8A3CF6C5CE (PbrSpecularGlossiness_t2D28D6A9133D79AB5C63A51C7C7E9AF6D48F562E* __this, const RuntimeMethod* method) 
{
	{
		// return new Color(
		//     diffuseFactor[0],
		//     diffuseFactor[1],
		//     diffuseFactor[2],
		//     diffuseFactor[3]
		// );
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___diffuseFactor_0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		float L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___diffuseFactor_0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___diffuseFactor_0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = __this->___diffuseFactor_0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Color GLTFast.Schema.PbrSpecularGlossiness::get_specularColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F PbrSpecularGlossiness_get_specularColor_m6ED191A5D763CF1CAFA5F55306123588E000DFA3 (PbrSpecularGlossiness_t2D28D6A9133D79AB5C63A51C7C7E9AF6D48F562E* __this, const RuntimeMethod* method) 
{
	{
		// return new Color(
		//     specularFactor[0],
		//     specularFactor[1],
		//     specularFactor[2]
		// );
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___specularFactor_2;
		NullCheck(L_0);
		int32_t L_1 = 0;
		float L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___specularFactor_2;
		NullCheck(L_3);
		int32_t L_4 = 1;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___specularFactor_2;
		NullCheck(L_6);
		int32_t L_7 = 2;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void GLTFast.Schema.PbrSpecularGlossiness::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PbrSpecularGlossiness_GltfSerialize_mC419605950B41988A1B1BFE6BA8433524ED5DC7F (PbrSpecularGlossiness_t2D28D6A9133D79AB5C63A51C7C7E9AF6D48F562E* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		NullCheck(L_1);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_1, NULL);
		// throw new System.NotImplementedException($"GltfSerialize missing on {GetType()}");
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		String_t* L_3;
		L_3 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9F7B02C31DDA99DC72E6A6212C308FDD1C99628)), L_2, NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_4 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PbrSpecularGlossiness_GltfSerialize_mC419605950B41988A1B1BFE6BA8433524ED5DC7F_RuntimeMethod_var)));
	}
}
// System.Void GLTFast.Schema.PbrSpecularGlossiness::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PbrSpecularGlossiness__ctor_m2B5FAB32B64427B7444A814E1E9B9A1157B32D06 (PbrSpecularGlossiness_t2D28D6A9133D79AB5C63A51C7C7E9AF6D48F562E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tC1E358237C258EFD324DF2AB7D6BFA4A886E1427____8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tC1E358237C258EFD324DF2AB7D6BFA4A886E1427____F6BB1294DA2F78CD935B01C7656280DF5EAA0439E9D97BC03775825A41A508E4_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float[] diffuseFactor = { 1, 1, 1, 1 };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tC1E358237C258EFD324DF2AB7D6BFA4A886E1427____F6BB1294DA2F78CD935B01C7656280DF5EAA0439E9D97BC03775825A41A508E4_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		__this->___diffuseFactor_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___diffuseFactor_0), (void*)L_1);
		// public float[] specularFactor = { 1, 1, 1 };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tC1E358237C258EFD324DF2AB7D6BFA4A886E1427____8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_4, L_5, NULL);
		__this->___specularFactor_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___specularFactor_2), (void*)L_4);
		// public float glossinessFactor = 1;
		__this->___glossinessFactor_3 = (1.0f);
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
// System.Boolean GLTFast.Schema.Root::get_hasAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Root_get_hasAnimation_mF20EA9156222B56E4BA76C40CCE845650E0DFB5B (Root_tBD536179054FA5061EEA02C441474F8B279E7DE8* __this, const RuntimeMethod* method) 
{
	{
		// public bool hasAnimation => animations != null && animations.Length > 0;
		GltfAnimationU5BU5D_t1BCE1F59F3F7BC73982F35FFDD3CF614F093D4D3* L_0 = __this->___animations_3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		GltfAnimationU5BU5D_t1BCE1F59F3F7BC73982F35FFDD3CF614F093D4D3* L_1 = __this->___animations_3;
		NullCheck(L_1);
		return (bool)((!(((uint32_t)(((RuntimeArray*)L_1)->max_length)) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0013:
	{
		return (bool)0;
	}
}
// System.Boolean GLTFast.Schema.Root::IsAccessorInterleaved(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Root_IsAccessorInterleaved_mCDDB29D1E96E5522EBF0AD3820D3DBF5BB3FC7CF (Root_tBD536179054FA5061EEA02C441474F8B279E7DE8* __this, int32_t ___accessorIndex0, const RuntimeMethod* method) 
{
	Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* V_0 = NULL;
	BufferView_tA7E868125A221CC5221B38AE3F215390767834D1* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var accessor = accessors[accessorIndex];
		AccessorU5BU5D_t3C2CD08CAD1DACB87D18453F6E1A0347BBEF2C72* L_0 = __this->___accessors_2;
		int32_t L_1 = ___accessorIndex0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// var bufferView = bufferViews[accessor.bufferView];
		BufferViewU5BU5D_t80B6F1A5773CA56D8BBCBEBE5670EB5AF84F698E* L_4 = __this->___bufferViews_6;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bufferView_0;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		BufferView_tA7E868125A221CC5221B38AE3F215390767834D1* L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		// if (bufferView.byteStride < 0) return false;
		BufferView_tA7E868125A221CC5221B38AE3F215390767834D1* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = ((BufferViewBase_tF706E75FF34AE31D9F158FA379D519C6487255C8*)L_9)->___byteStride_3;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		// if (bufferView.byteStride < 0) return false;
		return (bool)0;
	}

IL_0022:
	{
		// var elementSize = Accessor.GetAccessorAttributeTypeLength(accessor.typeEnum) * Accessor.GetComponentTypeSize(accessor.componentType);
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_11 = V_0;
		NullCheck(L_11);
		uint8_t L_12;
		L_12 = Accessor_get_typeEnum_m39CF2035160006AB83CDD55ACBC63912CA834EE8(L_11, NULL);
		int32_t L_13;
		L_13 = Accessor_GetAccessorAttributeTypeLength_m23FB051A63D6A37D227A1692D782746440FC9062(L_12, NULL);
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->___componentType_2;
		int32_t L_16;
		L_16 = Accessor_GetComponentTypeSize_mB85376D5CC503C5ADAC641A07855576DA28A2B28(L_15, NULL);
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_13, L_16));
		// return bufferView.byteStride > elementSize;
		BufferView_tA7E868125A221CC5221B38AE3F215390767834D1* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18 = ((BufferViewBase_tF706E75FF34AE31D9F158FA379D519C6487255C8*)L_17)->___byteStride_3;
		int32_t L_19 = V_2;
		return (bool)((((int32_t)L_18) > ((int32_t)L_19))? 1 : 0);
	}
}
// System.Void GLTFast.Schema.Root::GltfSerialize(System.IO.StreamWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root_GltfSerialize_m3D8A4D3F3D21697E7B64EE634E8D4F3F55B3D502 (Root_tBD536179054FA5061EEA02C441474F8B279E7DE8* __this, StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B97189B3FCE25069F6D673644085539059D93A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A0C50F3F35B6C73E92E7A50828B4242E5ED7B1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FEACB1CEF183D510D9DE04DCA9FC572D7474C4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37B97248AD78DD69BA3DF192A954DA136A0917D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44236CDB4610C296B357B89A3F9D59665B85780F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69F359B71F6F4DE78ABF7256A90B314F213EE57E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E651D43A8CF7AA546CAE5214C19769E2368D899);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AE5CBC2982431FE3F0537E6A7810E68D24DA7CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96FB3CF66DF1D3FDD921445943B64189A149ED40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC1DA0C9D92BC0EA9929BB82A21C30BE100C3F3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE71D746FDB893CE627C5F97FEE59638767E8951);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD90348CE9BDE9F3CE8DC222D3D4EE1C8468911A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAB2275E8007B168CDE1F8D76F730FC2D04BC691);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0FDE161BC072ACFCD297CD594EE27B150664F3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6770C3A83A774E8EF77448D689E51254082440A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC5621377AD9B4098EC3FB34AF35BAA9E6C07B64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC77027805B1651EF89F819873354A55A93A7C4A);
		s_Il2CppMethodInitialized = true;
	}
	JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* V_0 = NULL;
	NodeU5BU5D_t18BD668D63D4D0E91997B501FCEB7397701D46F9* V_1 = NULL;
	int32_t V_2 = 0;
	GltfAnimationU5BU5D_t1BCE1F59F3F7BC73982F35FFDD3CF614F093D4D3* V_3 = NULL;
	BufferU5BU5D_t658DABFDF6B3A7F96045FD6AD4A5C0DFFD663170* V_4 = NULL;
	BufferViewU5BU5D_t80B6F1A5773CA56D8BBCBEBE5670EB5AF84F698E* V_5 = NULL;
	AccessorU5BU5D_t3C2CD08CAD1DACB87D18453F6E1A0347BBEF2C72* V_6 = NULL;
	CameraU5BU5D_t254C5A84269CCB17BA401D903F24DFA1BA8F8B27* V_7 = NULL;
	ImageU5BU5D_t6C84F64E9AE0C72E8AC5C1D081288D34977560D7* V_8 = NULL;
	MaterialU5BU5D_tCE6FAD730F95CC2861A8DA68C0C55D11472F292E* V_9 = NULL;
	MeshU5BU5D_t96E81748806E11C09FD868B0E75E54A0D0B93A4B* V_10 = NULL;
	SamplerU5BU5D_t945916507CB2E6CDAC9521B8D7522F962104B213* V_11 = NULL;
	SceneU5BU5D_t6620A91841857CC76517374B95229FBA2165D9F7* V_12 = NULL;
	SkinU5BU5D_tAA27AB03DD8F3F3BB2835E07F246BEBCFAD173B3* V_13 = NULL;
	TextureU5BU5D_t37329C5A4892837D0F5CBF3C364D75EAE7C1E9F6* V_14 = NULL;
	{
		// var writer = new JsonWriter(stream);
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_0 = ___stream0;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = (JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1*)il2cpp_codegen_object_new(JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonWriter__ctor_m89DB7EC219D8772517E80AB866D35079EFECF67F(L_1, L_0, NULL);
		V_0 = L_1;
		// if (asset != null) {
		Asset_tBAD49FAA33C45350B619BF3D923C3A73A8982453* L_2 = __this->___asset_4;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// writer.AddProperty("asset");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_3 = V_0;
		NullCheck(L_3);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_3, _stringLiteral37B97248AD78DD69BA3DF192A954DA136A0917D3, NULL);
		// asset.GltfSerialize(writer);
		Asset_tBAD49FAA33C45350B619BF3D923C3A73A8982453* L_4 = __this->___asset_4;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_5 = V_0;
		NullCheck(L_4);
		Asset_GltfSerialize_m271FF28709B8242AA1F0A847097742E674AB69C2(L_4, L_5, NULL);
	}

IL_0026:
	{
		// if (nodes != null) {
		NodeU5BU5D_t18BD668D63D4D0E91997B501FCEB7397701D46F9* L_6 = __this->___nodes_11;
		if (!L_6)
		{
			goto IL_005d;
		}
	}
	{
		// writer.AddArray("nodes");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_7 = V_0;
		NullCheck(L_7);
		JsonWriter_AddArray_m3FF9C631816077B6D0F2C80A9785CA1B1E946AF0(L_7, _stringLiteral69F359B71F6F4DE78ABF7256A90B314F213EE57E, NULL);
		// foreach (var node in nodes) {
		NodeU5BU5D_t18BD668D63D4D0E91997B501FCEB7397701D46F9* L_8 = __this->___nodes_11;
		V_1 = L_8;
		V_2 = 0;
		goto IL_0051;
	}

IL_0044:
	{
		// foreach (var node in nodes) {
		NodeU5BU5D_t18BD668D63D4D0E91997B501FCEB7397701D46F9* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Node_t2E23D131CBC25EF198B717957ADA306EF4EA3998* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		// node.GltfSerialize(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_13 = V_0;
		NullCheck(L_12);
		Node_GltfSerialize_mEACA2165385686D59BB9D274E65D1B28E4D1769E(L_12, L_13, NULL);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0051:
	{
		// foreach (var node in nodes) {
		int32_t L_15 = V_2;
		NodeU5BU5D_t18BD668D63D4D0E91997B501FCEB7397701D46F9* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		// writer.CloseArray();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_17 = V_0;
		NullCheck(L_17);
		JsonWriter_CloseArray_m5AD2ECE87AAB8692647D11ADA12B5F7BAC3EB574(L_17, NULL);
	}

IL_005d:
	{
		// if (extensionsRequired != null) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = __this->___extensionsRequired_1;
		if (!L_18)
		{
			goto IL_0076;
		}
	}
	{
		// writer.AddArrayProperty("extensionsRequired", extensionsRequired);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_19 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = __this->___extensionsRequired_1;
		NullCheck(L_19);
		JsonWriter_AddArrayProperty_mDA7B79A7A0C5FE63DC275BEABA5784E8F92192DD(L_19, _stringLiteral8AE5CBC2982431FE3F0537E6A7810E68D24DA7CA, (RuntimeObject*)L_20, NULL);
	}

IL_0076:
	{
		// if (extensionsUsed != null) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = __this->___extensionsUsed_0;
		if (!L_21)
		{
			goto IL_008f;
		}
	}
	{
		// writer.AddArrayProperty("extensionsUsed", extensionsUsed);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_22 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = __this->___extensionsUsed_0;
		NullCheck(L_22);
		JsonWriter_AddArrayProperty_mDA7B79A7A0C5FE63DC275BEABA5784E8F92192DD(L_22, _stringLiteral2A0C50F3F35B6C73E92E7A50828B4242E5ED7B1A, (RuntimeObject*)L_23, NULL);
	}

IL_008f:
	{
		// if (animations!=null) {
		GltfAnimationU5BU5D_t1BCE1F59F3F7BC73982F35FFDD3CF614F093D4D3* L_24 = __this->___animations_3;
		if (!L_24)
		{
			goto IL_00c6;
		}
	}
	{
		// writer.AddArray("animations");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_25 = V_0;
		NullCheck(L_25);
		JsonWriter_AddArray_m3FF9C631816077B6D0F2C80A9785CA1B1E946AF0(L_25, _stringLiteral44236CDB4610C296B357B89A3F9D59665B85780F, NULL);
		// foreach( var animation in animations) {
		GltfAnimationU5BU5D_t1BCE1F59F3F7BC73982F35FFDD3CF614F093D4D3* L_26 = __this->___animations_3;
		V_3 = L_26;
		V_2 = 0;
		goto IL_00ba;
	}

IL_00ad:
	{
		// foreach( var animation in animations) {
		GltfAnimationU5BU5D_t1BCE1F59F3F7BC73982F35FFDD3CF614F093D4D3* L_27 = V_3;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		GltfAnimation_t4C1CEA25BD7667930E1BDF49F87B3F4906254341* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		// animation.GltfSerialize(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_31 = V_0;
		NullCheck(L_30);
		GltfAnimation_GltfSerialize_m173CD2966371748A472B9DC4CDA61155548E4930(L_30, L_31, NULL);
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00ba:
	{
		// foreach( var animation in animations) {
		int32_t L_33 = V_2;
		GltfAnimationU5BU5D_t1BCE1F59F3F7BC73982F35FFDD3CF614F093D4D3* L_34 = V_3;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_00ad;
		}
	}
	{
		// writer.CloseArray();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_35 = V_0;
		NullCheck(L_35);
		JsonWriter_CloseArray_m5AD2ECE87AAB8692647D11ADA12B5F7BAC3EB574(L_35, NULL);
	}

IL_00c6:
	{
		// if (buffers!=null) {
		BufferU5BU5D_t658DABFDF6B3A7F96045FD6AD4A5C0DFFD663170* L_36 = __this->___buffers_5;
		if (!L_36)
		{
			goto IL_0100;
		}
	}
	{
		// writer.AddArray("buffers");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_37 = V_0;
		NullCheck(L_37);
		JsonWriter_AddArray_m3FF9C631816077B6D0F2C80A9785CA1B1E946AF0(L_37, _stringLiteralBE71D746FDB893CE627C5F97FEE59638767E8951, NULL);
		// foreach( var buffer in buffers) {
		BufferU5BU5D_t658DABFDF6B3A7F96045FD6AD4A5C0DFFD663170* L_38 = __this->___buffers_5;
		V_4 = L_38;
		V_2 = 0;
		goto IL_00f3;
	}

IL_00e5:
	{
		// foreach( var buffer in buffers) {
		BufferU5BU5D_t658DABFDF6B3A7F96045FD6AD4A5C0DFFD663170* L_39 = V_4;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		Buffer_t47A7E9EBA4EF31CA3305CFDEC7717F3C96E36BA0* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		// buffer.GltfSerialize(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_43 = V_0;
		NullCheck(L_42);
		Buffer_GltfSerialize_m5F1597E21CB80B97FBD830D2E9ACCFC495334FD2(L_42, L_43, NULL);
		int32_t L_44 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00f3:
	{
		// foreach( var buffer in buffers) {
		int32_t L_45 = V_2;
		BufferU5BU5D_t658DABFDF6B3A7F96045FD6AD4A5C0DFFD663170* L_46 = V_4;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_00e5;
		}
	}
	{
		// writer.CloseArray();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_47 = V_0;
		NullCheck(L_47);
		JsonWriter_CloseArray_m5AD2ECE87AAB8692647D11ADA12B5F7BAC3EB574(L_47, NULL);
	}

IL_0100:
	{
		// if (bufferViews!=null) {
		BufferViewU5BU5D_t80B6F1A5773CA56D8BBCBEBE5670EB5AF84F698E* L_48 = __this->___bufferViews_6;
		if (!L_48)
		{
			goto IL_013a;
		}
	}
	{
		// writer.AddArray("bufferViews");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_49 = V_0;
		NullCheck(L_49);
		JsonWriter_AddArray_m3FF9C631816077B6D0F2C80A9785CA1B1E946AF0(L_49, _stringLiteralE6770C3A83A774E8EF77448D689E51254082440A, NULL);
		// foreach( var bufferView in bufferViews) {
		BufferViewU5BU5D_t80B6F1A5773CA56D8BBCBEBE5670EB5AF84F698E* L_50 = __this->___bufferViews_6;
		V_5 = L_50;
		V_2 = 0;
		goto IL_012d;
	}

IL_011f:
	{
		// foreach( var bufferView in bufferViews) {
		BufferViewU5BU5D_t80B6F1A5773CA56D8BBCBEBE5670EB5AF84F698E* L_51 = V_5;
		int32_t L_52 = V_2;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		BufferView_tA7E868125A221CC5221B38AE3F215390767834D1* L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		// bufferView.GltfSerialize(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_55 = V_0;
		NullCheck(L_54);
		BufferView_GltfSerialize_mF30AD67022033D0691426F39BA82704A071D19C3(L_54, L_55, NULL);
		int32_t L_56 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_012d:
	{
		// foreach( var bufferView in bufferViews) {
		int32_t L_57 = V_2;
		BufferViewU5BU5D_t80B6F1A5773CA56D8BBCBEBE5670EB5AF84F698E* L_58 = V_5;
		NullCheck(L_58);
		if ((((int32_t)L_57) < ((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length)))))
		{
			goto IL_011f;
		}
	}
	{
		// writer.CloseArray();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_59 = V_0;
		NullCheck(L_59);
		JsonWriter_CloseArray_m5AD2ECE87AAB8692647D11ADA12B5F7BAC3EB574(L_59, NULL);
	}

IL_013a:
	{
		// if (accessors!=null) {
		AccessorU5BU5D_t3C2CD08CAD1DACB87D18453F6E1A0347BBEF2C72* L_60 = __this->___accessors_2;
		if (!L_60)
		{
			goto IL_0174;
		}
	}
	{
		// writer.AddArray("accessors");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_61 = V_0;
		NullCheck(L_61);
		JsonWriter_AddArray_m3FF9C631816077B6D0F2C80A9785CA1B1E946AF0(L_61, _stringLiteral96FB3CF66DF1D3FDD921445943B64189A149ED40, NULL);
		// foreach( var accessor in accessors) {
		AccessorU5BU5D_t3C2CD08CAD1DACB87D18453F6E1A0347BBEF2C72* L_62 = __this->___accessors_2;
		V_6 = L_62;
		V_2 = 0;
		goto IL_0167;
	}

IL_0159:
	{
		// foreach( var accessor in accessors) {
		AccessorU5BU5D_t3C2CD08CAD1DACB87D18453F6E1A0347BBEF2C72* L_63 = V_6;
		int32_t L_64 = V_2;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		Accessor_tA8D68A35A3216109FEDB7D2325F6183035A50062* L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		// accessor.GltfSerialize(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_67 = V_0;
		NullCheck(L_66);
		Accessor_GltfSerialize_m3A1242EC67EFAA2EFBBB14EAD8B59E19D97D3934(L_66, L_67, NULL);
		int32_t L_68 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_0167:
	{
		// foreach( var accessor in accessors) {
		int32_t L_69 = V_2;
		AccessorU5BU5D_t3C2CD08CAD1DACB87D18453F6E1A0347BBEF2C72* L_70 = V_6;
		NullCheck(L_70);
		if ((((int32_t)L_69) < ((int32_t)((int32_t)(((RuntimeArray*)L_70)->max_length)))))
		{
			goto IL_0159;
		}
	}
	{
		// writer.CloseArray();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_71 = V_0;
		NullCheck(L_71);
		JsonWriter_CloseArray_m5AD2ECE87AAB8692647D11ADA12B5F7BAC3EB574(L_71, NULL);
	}

IL_0174:
	{
		// if (cameras!=null) {
		CameraU5BU5D_t254C5A84269CCB17BA401D903F24DFA1BA8F8B27* L_72 = __this->___cameras_7;
		if (!L_72)
		{
			goto IL_01ae;
		}
	}
	{
		// writer.AddArray("cameras");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_73 = V_0;
		NullCheck(L_73);
		JsonWriter_AddArray_m3FF9C631816077B6D0F2C80A9785CA1B1E946AF0(L_73, _stringLiteralD90348CE9BDE9F3CE8DC222D3D4EE1C8468911A4, NULL);
		// foreach( var camera in cameras) {
		CameraU5BU5D_t254C5A84269CCB17BA401D903F24DFA1BA8F8B27* L_74 = __this->___cameras_7;
		V_7 = L_74;
		V_2 = 0;
		goto IL_01a1;
	}

IL_0193:
	{
		// foreach( var camera in cameras) {
		CameraU5BU5D_t254C5A84269CCB17BA401D903F24DFA1BA8F8B27* L_75 = V_7;
		int32_t L_76 = V_2;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		Camera_tF07308B27D535448829D7C97A8C54144DF18A9B5* L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		// camera.GltfSerialize(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_79 = V_0;
		NullCheck(L_78);
		Camera_GltfSerialize_m89372E15B88CAF2B89C51BB608670C14BCAE7B1E(L_78, L_79, NULL);
		int32_t L_80 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_01a1:
	{
		// foreach( var camera in cameras) {
		int32_t L_81 = V_2;
		CameraU5BU5D_t254C5A84269CCB17BA401D903F24DFA1BA8F8B27* L_82 = V_7;
		NullCheck(L_82);
		if ((((int32_t)L_81) < ((int32_t)((int32_t)(((RuntimeArray*)L_82)->max_length)))))
		{
			goto IL_0193;
		}
	}
	{
		// writer.CloseArray();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_83 = V_0;
		NullCheck(L_83);
		JsonWriter_CloseArray_m5AD2ECE87AAB8692647D11ADA12B5F7BAC3EB574(L_83, NULL);
	}

IL_01ae:
	{
		// if (images!=null) {
		ImageU5BU5D_t6C84F64E9AE0C72E8AC5C1D081288D34977560D7* L_84 = __this->___images_8;
		if (!L_84)
		{
			goto IL_01e8;
		}
	}
	{
		// writer.AddArray("images");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_85 = V_0;
		NullCheck(L_85);
		JsonWriter_AddArray_m3FF9C631816077B6D0F2C80A9785CA1B1E946AF0(L_85, _stringLiteralAC1DA0C9D92BC0EA9929BB82A21C30BE100C3F3F, NULL);
		// foreach( var image in images) {
		ImageU5BU5D_t6C84F64E9AE0C72E8AC5C1D081288D34977560D7* L_86 = __this->___images_8;
		V_8 = L_86;
		V_2 = 0;
		goto IL_01db;
	}

IL_01cd:
	{
		// foreach( var image in images) {
		ImageU5BU5D_t6C84F64E9AE0C72E8AC5C1D081288D34977560D7* L_87 = V_8;
		int32_t L_88 = V_2;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		Image_t06216539D22FD8F64E39249C8F18DA87CE5EA7CB* L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		// image.GltfSerialize(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_91 = V_0;
		NullCheck(L_90);
		Image_GltfSerialize_m3D756AA03EBA1F94F601D9E255CAC4AC1DFD0E20(L_90, L_91, NULL);
		int32_t L_92 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_01db:
	{
		// foreach( var image in images) {
		int32_t L_93 = V_2;
		ImageU5BU5D_t6C84F64E9AE0C72E8AC5C1D081288D34977560D7* L_94 = V_8;
		NullCheck(L_94);
		if ((((int32_t)L_93) < ((int32_t)((int32_t)(((RuntimeArray*)L_94)->max_length)))))
		{
			goto IL_01cd;
		}
	}
	{
		// writer.CloseArray();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_95 = V_0;
		NullCheck(L_95);
		JsonWriter_CloseArray_m5AD2ECE87AAB8692647D11ADA12B5F7BAC3EB574(L_95, NULL);
	}

IL_01e8:
	{
		// if (materials!=null) {
		MaterialU5BU5D_tCE6FAD730F95CC2861A8DA68C0C55D11472F292E* L_96 = __this->___materials_9;
		if (!L_96)
		{
			goto IL_0222;
		}
	}
	{
		// writer.AddArray("materials");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_97 = V_0;
		NullCheck(L_97);
		JsonWriter_AddArray_m3FF9C631816077B6D0F2C80A9785CA1B1E946AF0(L_97, _stringLiteralEC77027805B1651EF89F819873354A55A93A7C4A, NULL);
		// foreach( var material in materials) {
		MaterialU5BU5D_tCE6FAD730F95CC2861A8DA68C0C55D11472F292E* L_98 = __this->___materials_9;
		V_9 = L_98;
		V_2 = 0;
		goto IL_0215;
	}

IL_0207:
	{
		// foreach( var material in materials) {
		MaterialU5BU5D_tCE6FAD730F95CC2861A8DA68C0C55D11472F292E* L_99 = V_9;
		int32_t L_100 = V_2;
		NullCheck(L_99);
		int32_t L_101 = L_100;
		Material_t1E37B852B5C4B73E91E59B4DD7ADED7B2A7D0470* L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		// material.GltfSerialize(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_103 = V_0;
		NullCheck(L_102);
		Material_GltfSerialize_m5591A16669C4A1433E7EE02F61E03B05DBE297CC(L_102, L_103, NULL);
		int32_t L_104 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_0215:
	{
		// foreach( var material in materials) {
		int32_t L_105 = V_2;
		MaterialU5BU5D_tCE6FAD730F95CC2861A8DA68C0C55D11472F292E* L_106 = V_9;
		NullCheck(L_106);
		if ((((int32_t)L_105) < ((int32_t)((int32_t)(((RuntimeArray*)L_106)->max_length)))))
		{
			goto IL_0207;
		}
	}
	{
		// writer.CloseArray();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_107 = V_0;
		NullCheck(L_107);
		JsonWriter_CloseArray_m5AD2ECE87AAB8692647D11ADA12B5F7BAC3EB574(L_107, NULL);
	}

IL_0222:
	{
		// if (meshes!=null) {
		MeshU5BU5D_t96E81748806E11C09FD868B0E75E54A0D0B93A4B* L_108 = __this->___meshes_10;
		if (!L_108)
		{
			goto IL_025c;
		}
	}
	{
		// writer.AddArray("meshes");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_109 = V_0;
		NullCheck(L_109);
		JsonWriter_AddArray_m3FF9C631816077B6D0F2C80A9785CA1B1E946AF0(L_109, _stringLiteralEC5621377AD9B4098EC3FB34AF35BAA9E6C07B64, NULL);
		// foreach( var mesh in meshes) {
		MeshU5BU5D_t96E81748806E11C09FD868B0E75E54A0D0B93A4B* L_110 = __this->___meshes_10;
		V_10 = L_110;
		V_2 = 0;
		goto IL_024f;
	}

IL_0241:
	{
		// foreach( var mesh in meshes) {
		MeshU5BU5D_t96E81748806E11C09FD868B0E75E54A0D0B93A4B* L_111 = V_10;
		int32_t L_112 = V_2;
		NullCheck(L_111);
		int32_t L_113 = L_112;
		Mesh_tC513FCB3E5308ACDF65492D53096FF5D787AA82D* L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		// mesh.GltfSerialize(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_115 = V_0;
		NullCheck(L_114);
		Mesh_GltfSerialize_m46A5C312939F8D9C78DB21DC366875D475773767(L_114, L_115, NULL);
		int32_t L_116 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_116, 1));
	}

IL_024f:
	{
		// foreach( var mesh in meshes) {
		int32_t L_117 = V_2;
		MeshU5BU5D_t96E81748806E11C09FD868B0E75E54A0D0B93A4B* L_118 = V_10;
		NullCheck(L_118);
		if ((((int32_t)L_117) < ((int32_t)((int32_t)(((RuntimeArray*)L_118)->max_length)))))
		{
			goto IL_0241;
		}
	}
	{
		// writer.CloseArray();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_119 = V_0;
		NullCheck(L_119);
		JsonWriter_CloseArray_m5AD2ECE87AAB8692647D11ADA12B5F7BAC3EB574(L_119, NULL);
	}

IL_025c:
	{
		// if (samplers!=null) {
		SamplerU5BU5D_t945916507CB2E6CDAC9521B8D7522F962104B213* L_120 = __this->___samplers_12;
		if (!L_120)
		{
			goto IL_0296;
		}
	}
	{
		// writer.AddArray("samplers");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_121 = V_0;
		NullCheck(L_121);
		JsonWriter_AddArray_m3FF9C631816077B6D0F2C80A9785CA1B1E946AF0(L_121, _stringLiteralE0FDE161BC072ACFCD297CD594EE27B150664F3E, NULL);
		// foreach( var sampler in samplers) {
		SamplerU5BU5D_t945916507CB2E6CDAC9521B8D7522F962104B213* L_122 = __this->___samplers_12;
		V_11 = L_122;
		V_2 = 0;
		goto IL_0289;
	}

IL_027b:
	{
		// foreach( var sampler in samplers) {
		SamplerU5BU5D_t945916507CB2E6CDAC9521B8D7522F962104B213* L_123 = V_11;
		int32_t L_124 = V_2;
		NullCheck(L_123);
		int32_t L_125 = L_124;
		Sampler_t107484F70B663B848B559573EBF6A6E12DC7DED0* L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		// sampler.GltfSerialize(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_127 = V_0;
		NullCheck(L_126);
		Sampler_GltfSerialize_m2F313A1B3D616E995A2049662ACDB646C6097FE9(L_126, L_127, NULL);
		int32_t L_128 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_128, 1));
	}

IL_0289:
	{
		// foreach( var sampler in samplers) {
		int32_t L_129 = V_2;
		SamplerU5BU5D_t945916507CB2E6CDAC9521B8D7522F962104B213* L_130 = V_11;
		NullCheck(L_130);
		if ((((int32_t)L_129) < ((int32_t)((int32_t)(((RuntimeArray*)L_130)->max_length)))))
		{
			goto IL_027b;
		}
	}
	{
		// writer.CloseArray();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_131 = V_0;
		NullCheck(L_131);
		JsonWriter_CloseArray_m5AD2ECE87AAB8692647D11ADA12B5F7BAC3EB574(L_131, NULL);
	}

IL_0296:
	{
		// if (scene>=0) {
		int32_t L_132 = __this->___scene_13;
		if ((((int32_t)L_132) < ((int32_t)0)))
		{
			goto IL_02b0;
		}
	}
	{
		// writer.AddProperty("scene",scene);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_133 = V_0;
		int32_t L_134 = __this->___scene_13;
		NullCheck(L_133);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_133, _stringLiteral6E651D43A8CF7AA546CAE5214C19769E2368D899, L_134, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_02b0:
	{
		// if (scenes!=null) {
		SceneU5BU5D_t6620A91841857CC76517374B95229FBA2165D9F7* L_135 = __this->___scenes_14;
		if (!L_135)
		{
			goto IL_02ea;
		}
	}
	{
		// writer.AddArray("scenes");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_136 = V_0;
		NullCheck(L_136);
		JsonWriter_AddArray_m3FF9C631816077B6D0F2C80A9785CA1B1E946AF0(L_136, _stringLiteral2FEACB1CEF183D510D9DE04DCA9FC572D7474C4E, NULL);
		// foreach( var scene in scenes) {
		SceneU5BU5D_t6620A91841857CC76517374B95229FBA2165D9F7* L_137 = __this->___scenes_14;
		V_12 = L_137;
		V_2 = 0;
		goto IL_02dd;
	}

IL_02cf:
	{
		// foreach( var scene in scenes) {
		SceneU5BU5D_t6620A91841857CC76517374B95229FBA2165D9F7* L_138 = V_12;
		int32_t L_139 = V_2;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		Scene_t4422FC4D5D24EE9AA6498181AB3D094DD242C7F7* L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		// scene.GltfSerialize(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_142 = V_0;
		NullCheck(L_141);
		Scene_GltfSerialize_m9BA3A78864735D0FD1F873F57E20724863284F3A(L_141, L_142, NULL);
		int32_t L_143 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_02dd:
	{
		// foreach( var scene in scenes) {
		int32_t L_144 = V_2;
		SceneU5BU5D_t6620A91841857CC76517374B95229FBA2165D9F7* L_145 = V_12;
		NullCheck(L_145);
		if ((((int32_t)L_144) < ((int32_t)((int32_t)(((RuntimeArray*)L_145)->max_length)))))
		{
			goto IL_02cf;
		}
	}
	{
		// writer.CloseArray();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_146 = V_0;
		NullCheck(L_146);
		JsonWriter_CloseArray_m5AD2ECE87AAB8692647D11ADA12B5F7BAC3EB574(L_146, NULL);
	}

IL_02ea:
	{
		// if (skins!=null) {
		SkinU5BU5D_tAA27AB03DD8F3F3BB2835E07F246BEBCFAD173B3* L_147 = __this->___skins_15;
		if (!L_147)
		{
			goto IL_0324;
		}
	}
	{
		// writer.AddArray("skins");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_148 = V_0;
		NullCheck(L_148);
		JsonWriter_AddArray_m3FF9C631816077B6D0F2C80A9785CA1B1E946AF0(L_148, _stringLiteral1B97189B3FCE25069F6D673644085539059D93A4, NULL);
		// foreach( var skin in skins) {
		SkinU5BU5D_tAA27AB03DD8F3F3BB2835E07F246BEBCFAD173B3* L_149 = __this->___skins_15;
		V_13 = L_149;
		V_2 = 0;
		goto IL_0317;
	}

IL_0309:
	{
		// foreach( var skin in skins) {
		SkinU5BU5D_tAA27AB03DD8F3F3BB2835E07F246BEBCFAD173B3* L_150 = V_13;
		int32_t L_151 = V_2;
		NullCheck(L_150);
		int32_t L_152 = L_151;
		Skin_tCC1AFC24DECD2B9715FF6090D0C7211290B5A077* L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		// skin.GltfSerialize(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_154 = V_0;
		NullCheck(L_153);
		Skin_GltfSerialize_m03433B738197BA6A507A92F816DCD070793B13A4(L_153, L_154, NULL);
		int32_t L_155 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_155, 1));
	}

IL_0317:
	{
		// foreach( var skin in skins) {
		int32_t L_156 = V_2;
		SkinU5BU5D_tAA27AB03DD8F3F3BB2835E07F246BEBCFAD173B3* L_157 = V_13;
		NullCheck(L_157);
		if ((((int32_t)L_156) < ((int32_t)((int32_t)(((RuntimeArray*)L_157)->max_length)))))
		{
			goto IL_0309;
		}
	}
	{
		// writer.CloseArray();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_158 = V_0;
		NullCheck(L_158);
		JsonWriter_CloseArray_m5AD2ECE87AAB8692647D11ADA12B5F7BAC3EB574(L_158, NULL);
	}

IL_0324:
	{
		// if (textures!=null) {
		TextureU5BU5D_t37329C5A4892837D0F5CBF3C364D75EAE7C1E9F6* L_159 = __this->___textures_16;
		if (!L_159)
		{
			goto IL_035e;
		}
	}
	{
		// writer.AddArray("textures");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_160 = V_0;
		NullCheck(L_160);
		JsonWriter_AddArray_m3FF9C631816077B6D0F2C80A9785CA1B1E946AF0(L_160, _stringLiteralDAB2275E8007B168CDE1F8D76F730FC2D04BC691, NULL);
		// foreach( var texture in textures) {
		TextureU5BU5D_t37329C5A4892837D0F5CBF3C364D75EAE7C1E9F6* L_161 = __this->___textures_16;
		V_14 = L_161;
		V_2 = 0;
		goto IL_0351;
	}

IL_0343:
	{
		// foreach( var texture in textures) {
		TextureU5BU5D_t37329C5A4892837D0F5CBF3C364D75EAE7C1E9F6* L_162 = V_14;
		int32_t L_163 = V_2;
		NullCheck(L_162);
		int32_t L_164 = L_163;
		Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		// texture.GltfSerialize(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_166 = V_0;
		NullCheck(L_165);
		Texture_GltfSerialize_mDA20933E6E0440144D914E5426654D09AA00014A(L_165, L_166, NULL);
		int32_t L_167 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_167, 1));
	}

IL_0351:
	{
		// foreach( var texture in textures) {
		int32_t L_168 = V_2;
		TextureU5BU5D_t37329C5A4892837D0F5CBF3C364D75EAE7C1E9F6* L_169 = V_14;
		NullCheck(L_169);
		if ((((int32_t)L_168) < ((int32_t)((int32_t)(((RuntimeArray*)L_169)->max_length)))))
		{
			goto IL_0343;
		}
	}
	{
		// writer.CloseArray();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_170 = V_0;
		NullCheck(L_170);
		JsonWriter_CloseArray_m5AD2ECE87AAB8692647D11ADA12B5F7BAC3EB574(L_170, NULL);
	}

IL_035e:
	{
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_171 = V_0;
		NullCheck(L_171);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_171, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.Root::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root__ctor_m61F1ED3A2E1CFB70ED388F0670D664D26968E966 (Root_tBD536179054FA5061EEA02C441474F8B279E7DE8* __this, const RuntimeMethod* method) 
{
	{
		// public int scene = -1;
		__this->___scene_13 = (-1);
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
// System.Void GLTFast.Schema.RootChild::GltfSerializeRoot(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootChild_GltfSerializeRoot_m5633F10A7CB50F661EBC5D3E552C5946F4C3D35E (RootChild_t8F14572E443B762F00ECC295238A807C02F190B5* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!string.IsNullOrEmpty(name)) {
		String_t* L_0 = __this->___name_0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// writer.AddProperty("name", name);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_2 = ___writer0;
		String_t* L_3 = __this->___name_0;
		NullCheck(L_2);
		JsonWriter_AddProperty_m9BBF34A6F6097C126C3EEB74D4B457A96ABAA179(L_2, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_3, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void GLTFast.Schema.RootChild::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootChild__ctor_m889C52000B217955811A13981472070C7835FF84 (RootChild_t8F14572E443B762F00ECC295238A807C02F190B5* __this, const RuntimeMethod* method) 
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
// UnityEngine.FilterMode GLTFast.Schema.Sampler::get_filterMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sampler_get_filterMode_m2AEBBE72CED1881C6F0EAD5DF9196D56D8DBEC86 (Sampler_t107484F70B663B848B559573EBF6A6E12DC7DED0* __this, const RuntimeMethod* method) 
{
	{
		// public FilterMode filterMode => ConvertFilterMode(minFilter, magFilter);
		int32_t L_0 = __this->___minFilter_2;
		int32_t L_1 = __this->___magFilter_1;
		int32_t L_2;
		L_2 = Sampler_ConvertFilterMode_mF794EAF42BAB75CDDDABCA14B0DB77F9C179DEC3(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.TextureWrapMode GLTFast.Schema.Sampler::get_wrapU()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sampler_get_wrapU_m48B8382779549C6C466623B00C0ABA9E0A1D088F (Sampler_t107484F70B663B848B559573EBF6A6E12DC7DED0* __this, const RuntimeMethod* method) 
{
	{
		// public TextureWrapMode wrapU => ConvertWrapMode((WrapMode)wrapS);
		int32_t L_0 = __this->___wrapS_3;
		int32_t L_1;
		L_1 = Sampler_ConvertWrapMode_m32BB48F97DF1DFC44C9FF63A4AD738AA7B2EF512(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.TextureWrapMode GLTFast.Schema.Sampler::get_wrapV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sampler_get_wrapV_m98F1F5E9FB05FDBA50BC020C05D46EEE23E8C254 (Sampler_t107484F70B663B848B559573EBF6A6E12DC7DED0* __this, const RuntimeMethod* method) 
{
	{
		// public TextureWrapMode wrapV => ConvertWrapMode((WrapMode)wrapT);
		int32_t L_0 = __this->___wrapT_4;
		int32_t L_1;
		L_1 = Sampler_ConvertWrapMode_m32BB48F97DF1DFC44C9FF63A4AD738AA7B2EF512(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.FilterMode GLTFast.Schema.Sampler::ConvertFilterMode(GLTFast.Schema.Sampler/MinFilterMode,GLTFast.Schema.Sampler/MagFilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sampler_ConvertFilterMode_mF794EAF42BAB75CDDDABCA14B0DB77F9C179DEC3 (int32_t ___minFilterToConvert0, int32_t ___magFilterToConvert1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___minFilterToConvert0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)9728))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_1 = ___minFilterToConvert0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, ((int32_t)9984))))
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0028;
			}
			case 3:
			{
				goto IL_0026;
			}
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		// return FilterMode.Trilinear;
		return (int32_t)(2);
	}

IL_0028:
	{
		// return FilterMode.Point;
		return (int32_t)(0);
	}

IL_002a:
	{
		int32_t L_2 = ___magFilterToConvert1;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)9728)))))
		{
			goto IL_0034;
		}
	}
	{
		// return FilterMode.Point;
		return (int32_t)(0);
	}

IL_0034:
	{
		// return FilterMode.Bilinear;
		return (int32_t)(1);
	}
}
// UnityEngine.TextureWrapMode GLTFast.Schema.Sampler::ConvertWrapMode(GLTFast.Schema.Sampler/WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sampler_ConvertWrapMode_m32BB48F97DF1DFC44C9FF63A4AD738AA7B2EF512 (int32_t ___wrapMode0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___wrapMode0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)10497))))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___wrapMode0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = ___wrapMode0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)10497))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0025;
	}

IL_0015:
	{
		int32_t L_3 = ___wrapMode0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)33071))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = ___wrapMode0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)33648))))
		{
			goto IL_0029;
		}
	}

IL_0025:
	{
		// return TextureWrapMode.Repeat;
		return (int32_t)(0);
	}

IL_0027:
	{
		// return TextureWrapMode.Clamp;
		return (int32_t)(1);
	}

IL_0029:
	{
		// return TextureWrapMode.Mirror;
		return (int32_t)(2);
	}
}
// GLTFast.Schema.Sampler/WrapMode GLTFast.Schema.Sampler::ConvertWrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sampler_ConvertWrapMode_m916743DA6F3FF0EF555B78A04B72EA5E99671B4B (int32_t ___wrapMode0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___wrapMode0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0024;
			}
			case 1:
			{
				goto IL_0018;
			}
			case 2:
			{
				goto IL_001e;
			}
			case 3:
			{
				goto IL_001e;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_0018:
	{
		// return WrapMode.ClampToEdge;
		return (int32_t)(((int32_t)33071));
	}

IL_001e:
	{
		// return WrapMode.MirroredRepeat;
		return (int32_t)(((int32_t)33648));
	}

IL_0024:
	{
		// return WrapMode.Repeat;
		return (int32_t)(((int32_t)10497));
	}
}
// System.Void GLTFast.Schema.Sampler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sampler__ctor_mA614E2E828D0391E2E6DEB0620487EF5D183412D (Sampler_t107484F70B663B848B559573EBF6A6E12DC7DED0* __this, const RuntimeMethod* method) 
{
	{
		// public WrapMode wrapS = WrapMode.Repeat;
		__this->___wrapS_3 = ((int32_t)10497);
		// public WrapMode wrapT = WrapMode.Repeat;
		__this->___wrapT_4 = ((int32_t)10497);
		// public Sampler() { }
		RootChild__ctor_m889C52000B217955811A13981472070C7835FF84(__this, NULL);
		// public Sampler() { }
		return;
	}
}
// System.Void GLTFast.Schema.Sampler::.ctor(UnityEngine.FilterMode,UnityEngine.TextureWrapMode,UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sampler__ctor_mD7D1C1BC5E5E5205A973671A31D039F6AAE76309 (Sampler_t107484F70B663B848B559573EBF6A6E12DC7DED0* __this, int32_t ___filterMode0, int32_t ___wrapModeU1, int32_t ___wrapModeV2, const RuntimeMethod* method) 
{
	{
		// public WrapMode wrapS = WrapMode.Repeat;
		__this->___wrapS_3 = ((int32_t)10497);
		// public WrapMode wrapT = WrapMode.Repeat;
		__this->___wrapT_4 = ((int32_t)10497);
		// public Sampler(FilterMode filterMode, TextureWrapMode wrapModeU, TextureWrapMode wrapModeV) {
		RootChild__ctor_m889C52000B217955811A13981472070C7835FF84(__this, NULL);
		int32_t L_0 = ___filterMode0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0030;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0076;
	}

IL_0030:
	{
		// magFilter = MagFilterMode.Nearest;
		__this->___magFilter_1 = ((int32_t)9728);
		// minFilter = MinFilterMode.Nearest;
		__this->___minFilter_2 = ((int32_t)9728);
		// break;
		goto IL_0076;
	}

IL_0048:
	{
		// magFilter = MagFilterMode.Linear;
		__this->___magFilter_1 = ((int32_t)9729);
		// minFilter = MinFilterMode.Linear;
		__this->___minFilter_2 = ((int32_t)9729);
		// break;
		goto IL_0076;
	}

IL_0060:
	{
		// magFilter = MagFilterMode.Linear;
		__this->___magFilter_1 = ((int32_t)9729);
		// minFilter = MinFilterMode.LinearMipmapLinear;
		__this->___minFilter_2 = ((int32_t)9987);
	}

IL_0076:
	{
		// wrapS = ConvertWrapMode(wrapModeU);
		int32_t L_1 = ___wrapModeU1;
		int32_t L_2;
		L_2 = Sampler_ConvertWrapMode_m916743DA6F3FF0EF555B78A04B72EA5E99671B4B(L_1, NULL);
		__this->___wrapS_3 = L_2;
		// wrapT = ConvertWrapMode(wrapModeV);
		int32_t L_3 = ___wrapModeV2;
		int32_t L_4;
		L_4 = Sampler_ConvertWrapMode_m916743DA6F3FF0EF555B78A04B72EA5E99671B4B(L_3, NULL);
		__this->___wrapT_4 = L_4;
		// }
		return;
	}
}
// System.Void GLTFast.Schema.Sampler::Apply(UnityEngine.Texture2D,GLTFast.Schema.Sampler/MinFilterMode,GLTFast.Schema.Sampler/MagFilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sampler_Apply_m3710716136E7EB61299821FBC2F238ADDBD7B1BB (Sampler_t107484F70B663B848B559573EBF6A6E12DC7DED0* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___image0, int32_t ___defaultMinFilter1, int32_t ___defaultMagFilter2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B4_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B7_1 = NULL;
	int32_t G_B6_0 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B6_1 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B8_2 = NULL;
	{
		// if (image == null) return;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___image0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (image == null) return;
		return;
	}

IL_000a:
	{
		// image.wrapModeU = wrapU;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___image0;
		int32_t L_3;
		L_3 = Sampler_get_wrapU_m48B8382779549C6C466623B00C0ABA9E0A1D088F(__this, NULL);
		NullCheck(L_2);
		Texture_set_wrapModeU_m2002CCB73143182032BD5ED6C80AB9A0ED2A0981(L_2, L_3, NULL);
		// image.wrapModeV = wrapV;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = ___image0;
		int32_t L_5;
		L_5 = Sampler_get_wrapV_m98F1F5E9FB05FDBA50BC020C05D46EEE23E8C254(__this, NULL);
		NullCheck(L_4);
		Texture_set_wrapModeV_m3C79177BAE70103DDBF871896AF464513A0F919D(L_4, L_5, NULL);
		// image.filterMode = ConvertFilterMode(
		//     minFilter == MinFilterMode.None ? defaultMinFilter : minFilter,
		//     magFilter == MagFilterMode.None ? defaultMagFilter : magFilter
		// );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = ___image0;
		int32_t L_7 = __this->___minFilter_2;
		G_B3_0 = L_6;
		if (!L_7)
		{
			G_B4_0 = L_6;
			goto IL_0033;
		}
	}
	{
		int32_t L_8 = __this->___minFilter_2;
		G_B5_0 = L_8;
		G_B5_1 = G_B3_0;
		goto IL_0034;
	}

IL_0033:
	{
		int32_t L_9 = ___defaultMinFilter1;
		G_B5_0 = L_9;
		G_B5_1 = G_B4_0;
	}

IL_0034:
	{
		int32_t L_10 = __this->___magFilter_1;
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		if (!L_10)
		{
			G_B7_0 = G_B5_0;
			G_B7_1 = G_B5_1;
			goto IL_0044;
		}
	}
	{
		int32_t L_11 = __this->___magFilter_1;
		G_B8_0 = L_11;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_0045;
	}

IL_0044:
	{
		int32_t L_12 = ___defaultMagFilter2;
		G_B8_0 = L_12;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_0045:
	{
		int32_t L_13;
		L_13 = Sampler_ConvertFilterMode_mF794EAF42BAB75CDDDABCA14B0DB77F9C179DEC3(G_B8_1, G_B8_0, NULL);
		NullCheck(G_B8_2);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(G_B8_2, L_13, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.Sampler::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sampler_GltfSerialize_m2F313A1B3D616E995A2049662ACDB646C6097FE9 (Sampler_t107484F70B663B848B559573EBF6A6E12DC7DED0* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B9F3A874AA67D4C8174AAA11EAA3758092CE0B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DEE2D2BC203305D29C09810A2DF5A0778C06F07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DAA3A0850A075E4A1FAB047315D81AFDDF0B2CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED45B89EABB07A258D2E4684BA82B3622E6C194F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// GltfSerializeRoot(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		RootChild_GltfSerializeRoot_m5633F10A7CB50F661EBC5D3E552C5946F4C3D35E(__this, L_1, NULL);
		// if (magFilter == MagFilterMode.Nearest) {
		int32_t L_2 = __this->___magFilter_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)9728)))))
		{
			goto IL_002b;
		}
	}
	{
		// writer.AddProperty("magFilter", (int)magFilter);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_3 = ___writer0;
		int32_t L_4 = __this->___magFilter_1;
		NullCheck(L_3);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_3, _stringLiteral7DAA3A0850A075E4A1FAB047315D81AFDDF0B2CF, L_4, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_002b:
	{
		// if (minFilter != MinFilterMode.None && minFilter != MinFilterMode.Linear) {
		int32_t L_5 = __this->___minFilter_2;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = __this->___minFilter_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)9729))))
		{
			goto IL_0051;
		}
	}
	{
		// writer.AddProperty("minFilter", (int)minFilter);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_7 = ___writer0;
		int32_t L_8 = __this->___minFilter_2;
		NullCheck(L_7);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_7, _stringLiteralED45B89EABB07A258D2E4684BA82B3622E6C194F, L_8, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0051:
	{
		// if (wrapS != WrapMode.None && wrapS != WrapMode.Repeat) {
		int32_t L_9 = __this->___wrapS_3;
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_10 = __this->___wrapS_3;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)10497))))
		{
			goto IL_0077;
		}
	}
	{
		// writer.AddProperty("wrapS", (int)wrapS);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_11 = ___writer0;
		int32_t L_12 = __this->___wrapS_3;
		NullCheck(L_11);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_11, _stringLiteral4DEE2D2BC203305D29C09810A2DF5A0778C06F07, L_12, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0077:
	{
		// if (wrapT != WrapMode.None && wrapT != WrapMode.Repeat) {
		int32_t L_13 = __this->___wrapT_4;
		if (!L_13)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_14 = __this->___wrapT_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)10497))))
		{
			goto IL_009d;
		}
	}
	{
		// writer.AddProperty("wrapT", (int)wrapT);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_15 = ___writer0;
		int32_t L_16 = __this->___wrapT_4;
		NullCheck(L_15);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_15, _stringLiteral2B9F3A874AA67D4C8174AAA11EAA3758092CE0B3, L_16, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_009d:
	{
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_17 = ___writer0;
		NullCheck(L_17);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_17, NULL);
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
// System.Void GLTFast.Schema.Scene::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene_GltfSerialize_m9BA3A78864735D0FD1F873F57E20724863284F3A (Scene_t4422FC4D5D24EE9AA6498181AB3D094DD242C7F7* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddArrayProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF4EDAAD77CF499B7C690F324945D68E9D889EBC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69F359B71F6F4DE78ABF7256A90B314F213EE57E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// GltfSerializeRoot(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		RootChild_GltfSerializeRoot_m5633F10A7CB50F661EBC5D3E552C5946F4C3D35E(__this, L_1, NULL);
		// writer.AddArrayProperty("nodes",nodes);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_2 = ___writer0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___nodes_1;
		NullCheck(L_2);
		JsonWriter_AddArrayProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF4EDAAD77CF499B7C690F324945D68E9D889EBC9(L_2, _stringLiteral69F359B71F6F4DE78ABF7256A90B314F213EE57E, (RuntimeObject*)L_3, JsonWriter_AddArrayProperty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF4EDAAD77CF499B7C690F324945D68E9D889EBC9_RuntimeMethod_var);
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_4 = ___writer0;
		NullCheck(L_4);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_4, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.Scene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene__ctor_mB7288E0B4123F5AE1411006FCFC17A30C7CE0DEA (Scene_t4422FC4D5D24EE9AA6498181AB3D094DD242C7F7* __this, const RuntimeMethod* method) 
{
	{
		RootChild__ctor_m889C52000B217955811A13981472070C7835FF84(__this, NULL);
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
// System.Void GLTFast.Schema.Skin::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skin_GltfSerialize_m03433B738197BA6A507A92F816DCD070793B13A4 (Skin_tCC1AFC24DECD2B9715FF6090D0C7211290B5A077* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// GltfSerializeRoot(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		RootChild_GltfSerializeRoot_m5633F10A7CB50F661EBC5D3E552C5946F4C3D35E(__this, L_1, NULL);
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_2 = ___writer0;
		NullCheck(L_2);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_2, NULL);
		// throw new System.NotImplementedException($"GltfSerialize missing on {GetType()}");
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		String_t* L_4;
		L_4 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9F7B02C31DDA99DC72E6A6212C308FDD1C99628)), L_3, NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_5 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Skin_GltfSerialize_m03433B738197BA6A507A92F816DCD070793B13A4_RuntimeMethod_var)));
	}
}
// System.Void GLTFast.Schema.Skin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skin__ctor_m93A9A099B159C3B50F15D6F862F29D92EFA6C40B (Skin_tCC1AFC24DECD2B9715FF6090D0C7211290B5A077* __this, const RuntimeMethod* method) 
{
	{
		// public int inverseBindMatrices = -1;
		__this->___inverseBindMatrices_1 = (-1);
		// public int skeleton = -1;
		__this->___skeleton_2 = (-1);
		RootChild__ctor_m889C52000B217955811A13981472070C7835FF84(__this, NULL);
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
// System.Int32 GLTFast.Schema.Texture::GetImageIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_GetImageIndex_mDD2DA186E43FE5261B1BA32B07827BA06B8D1EB4 (Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* __this, const RuntimeMethod* method) 
{
	{
		// if(extensions!=null) {
		TextureExtension_t115DCE6DCFAC652D0E7AFD58D792A1369331B3B2* L_0 = __this->___extensions_3;
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		// if(extensions.KHR_texture_basisu!=null && extensions.KHR_texture_basisu.source >= 0 ) {
		TextureExtension_t115DCE6DCFAC652D0E7AFD58D792A1369331B3B2* L_1 = __this->___extensions_3;
		NullCheck(L_1);
		TextureFormat_tC51CEB235E78E6CA2D03E3A58F712B67D65AB5AC* L_2 = L_1->___KHR_texture_basisu_0;
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		TextureExtension_t115DCE6DCFAC652D0E7AFD58D792A1369331B3B2* L_3 = __this->___extensions_3;
		NullCheck(L_3);
		TextureFormat_tC51CEB235E78E6CA2D03E3A58F712B67D65AB5AC* L_4 = L_3->___KHR_texture_basisu_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___source_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		// return extensions.KHR_texture_basisu.source;
		TextureExtension_t115DCE6DCFAC652D0E7AFD58D792A1369331B3B2* L_6 = __this->___extensions_3;
		NullCheck(L_6);
		TextureFormat_tC51CEB235E78E6CA2D03E3A58F712B67D65AB5AC* L_7 = L_6->___KHR_texture_basisu_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___source_0;
		return L_8;
	}

IL_0039:
	{
		// return source;
		int32_t L_9 = __this->___source_2;
		return L_9;
	}
}
// System.Boolean GLTFast.Schema.Texture::get_isKtx()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture_get_isKtx_m622EA77361F58D276C53347E69E9D4BD52CE976C (Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* __this, const RuntimeMethod* method) 
{
	{
		// return extensions!=null && extensions.KHR_texture_basisu!=null;
		TextureExtension_t115DCE6DCFAC652D0E7AFD58D792A1369331B3B2* L_0 = __this->___extensions_3;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		TextureExtension_t115DCE6DCFAC652D0E7AFD58D792A1369331B3B2* L_1 = __this->___extensions_3;
		NullCheck(L_1);
		TextureFormat_tC51CEB235E78E6CA2D03E3A58F712B67D65AB5AC* L_2 = L_1->___KHR_texture_basisu_0;
		return (bool)((!(((RuntimeObject*)(TextureFormat_tC51CEB235E78E6CA2D03E3A58F712B67D65AB5AC*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Void GLTFast.Schema.Texture::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_GltfSerialize_mDA20933E6E0440144D914E5426654D09AA00014A (Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53886AC1470B3B3993A9EF525A0008E45B9CA789);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79E88D091421691C53CC28304934AC732EC25429);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// GltfSerializeRoot(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		RootChild_GltfSerializeRoot_m5633F10A7CB50F661EBC5D3E552C5946F4C3D35E(__this, L_1, NULL);
		// if (source >= 0) {
		int32_t L_2 = __this->___source_2;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// writer.AddProperty("source", source);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_3 = ___writer0;
		int32_t L_4 = __this->___source_2;
		NullCheck(L_3);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_3, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, L_4, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0027:
	{
		// if (sampler >= 0) {
		int32_t L_5 = __this->___sampler_1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		// writer.AddProperty("sampler", sampler);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_6 = ___writer0;
		int32_t L_7 = __this->___sampler_1;
		NullCheck(L_6);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_6, _stringLiteral53886AC1470B3B3993A9EF525A0008E45B9CA789, L_7, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0041:
	{
		// if (extensions!=null) {
		TextureExtension_t115DCE6DCFAC652D0E7AFD58D792A1369331B3B2* L_8 = __this->___extensions_3;
		if (!L_8)
		{
			goto IL_0060;
		}
	}
	{
		// writer.AddProperty("extensions");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_9 = ___writer0;
		NullCheck(L_9);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_9, _stringLiteral79E88D091421691C53CC28304934AC732EC25429, NULL);
		// extensions.GltfSerialize(writer);
		TextureExtension_t115DCE6DCFAC652D0E7AFD58D792A1369331B3B2* L_10 = __this->___extensions_3;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_11 = ___writer0;
		NullCheck(L_10);
		TextureExtension_GltfSerialize_m2C190DEEAFC1E8FFB0AA0B8D970F645A48A56986(L_10, L_11, NULL);
	}

IL_0060:
	{
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_12 = ___writer0;
		NullCheck(L_12);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_12, NULL);
		// }
		return;
	}
}
// System.Boolean GLTFast.Schema.Texture::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture_Equals_m2EAADE7C0DB2F5646C02484B4A852BECDFEB2A54 (Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj == null || ! GetType().Equals(obj.GetType())) {
		RuntimeObject* L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(125 /* System.Boolean System.Type::Equals(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		// return false;
		return (bool)0;
	}

IL_0018:
	{
		// return Equals((Texture)obj);
		RuntimeObject* L_5 = ___obj0;
		bool L_6;
		L_6 = Texture_Equals_mC6BFD43D493CEE8E33749A5D5F734A6085975601(__this, ((Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A*)CastclassClass((RuntimeObject*)L_5, Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A_il2cpp_TypeInfo_var)), NULL);
		return L_6;
	}
}
// System.Boolean GLTFast.Schema.Texture::Equals(GLTFast.Schema.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture_Equals_mC6BFD43D493CEE8E33749A5D5F734A6085975601 (Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* __this, Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* ___other0, const RuntimeMethod* method) 
{
	{
		// return source == other.source
		//     && sampler == other.sampler
		//     && (
		//         extensions == null && other.extensions == null
		//         || (extensions != null && extensions.Equals(other.extensions))
		//     );
		int32_t L_0 = __this->___source_2;
		Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* L_1 = ___other0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___source_2;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_3 = __this->___sampler_1;
		Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* L_4 = ___other0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___sampler_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_004a;
		}
	}
	{
		TextureExtension_t115DCE6DCFAC652D0E7AFD58D792A1369331B3B2* L_6 = __this->___extensions_3;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* L_7 = ___other0;
		NullCheck(L_7);
		TextureExtension_t115DCE6DCFAC652D0E7AFD58D792A1369331B3B2* L_8 = L_7->___extensions_3;
		if (!L_8)
		{
			goto IL_0048;
		}
	}

IL_002c:
	{
		TextureExtension_t115DCE6DCFAC652D0E7AFD58D792A1369331B3B2* L_9 = __this->___extensions_3;
		if (!L_9)
		{
			goto IL_0046;
		}
	}
	{
		TextureExtension_t115DCE6DCFAC652D0E7AFD58D792A1369331B3B2* L_10 = __this->___extensions_3;
		Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* L_11 = ___other0;
		NullCheck(L_11);
		TextureExtension_t115DCE6DCFAC652D0E7AFD58D792A1369331B3B2* L_12 = L_11->___extensions_3;
		NullCheck(L_10);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_10, L_12);
		return L_13;
	}

IL_0046:
	{
		return (bool)0;
	}

IL_0048:
	{
		return (bool)1;
	}

IL_004a:
	{
		return (bool)0;
	}
}
// System.Int32 GLTFast.Schema.Texture::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_GetHashCode_mF87D15741253C128964CB9DE71F8C5F495872AFA (Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_Combine_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m230136A07D20B826D29A4C7BC5F585AC7469A5E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return HashCode.Combine(source, sampler, extensions.GetHashCode());
		int32_t L_0 = __this->___source_2;
		int32_t L_1 = __this->___sampler_1;
		TextureExtension_t115DCE6DCFAC652D0E7AFD58D792A1369331B3B2* L_2 = __this->___extensions_3;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		il2cpp_codegen_runtime_class_init_inline(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = HashCode_Combine_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m230136A07D20B826D29A4C7BC5F585AC7469A5E6(L_0, L_1, L_3, HashCode_Combine_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m230136A07D20B826D29A4C7BC5F585AC7469A5E6_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void GLTFast.Schema.Texture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture__ctor_m04D51BE339AC06392F5E3079B9E9EEB07E6E819F (Texture_tEF31830A9DBFB07BE2A5B5BDBCF2F004FC2DBD8A* __this, const RuntimeMethod* method) 
{
	{
		// public int sampler = -1;
		__this->___sampler_1 = (-1);
		// public int source = -1;
		__this->___source_2 = (-1);
		RootChild__ctor_m889C52000B217955811A13981472070C7835FF84(__this, NULL);
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
// System.Void GLTFast.Schema.TextureExtension::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureExtension_GltfSerialize_m2C190DEEAFC1E8FFB0AA0B8D970F645A48A56986 (TextureExtension_t115DCE6DCFAC652D0E7AFD58D792A1369331B3B2* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException($"GltfSerialize missing on {GetType()}");
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		String_t* L_1;
		L_1 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9F7B02C31DDA99DC72E6A6212C308FDD1C99628)), L_0, NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_2 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextureExtension_GltfSerialize_m2C190DEEAFC1E8FFB0AA0B8D970F645A48A56986_RuntimeMethod_var)));
	}
}
// System.Void GLTFast.Schema.TextureExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureExtension__ctor_m6732B87B298953E845E33C4304CB82C97C33FCC0 (TextureExtension_t115DCE6DCFAC652D0E7AFD58D792A1369331B3B2* __this, const RuntimeMethod* method) 
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
// System.Void GLTFast.Schema.TextureFormat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureFormat__ctor_m9D0A6FAF40A3D31EC24F7FA046887BEC2ADEBD9F (TextureFormat_tC51CEB235E78E6CA2D03E3A58F712B67D65AB5AC* __this, const RuntimeMethod* method) 
{
	{
		// public int source = -1;
		__this->___source_0 = (-1);
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
// System.Void GLTFast.Schema.TextureInfo::GltfSerializeTextureInfo(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureInfo_GltfSerializeTextureInfo_m9D7485480A7F0BF1A966272213BDAE81F0BCD8C2 (TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27112AD44D1995824E01C0A9376F5CA4C9614E36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79E88D091421691C53CC28304934AC732EC25429);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (index >= 0) {
		int32_t L_0 = __this->___index_0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		// writer.AddProperty("index", index);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		int32_t L_2 = __this->___index_0;
		NullCheck(L_1);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_1, _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, L_2, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_001a:
	{
		// if (texCoord > 0) {
		int32_t L_3 = __this->___texCoord_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		// writer.AddProperty("texCoord", texCoord);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_4 = ___writer0;
		int32_t L_5 = __this->___texCoord_1;
		NullCheck(L_4);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_4, _stringLiteral27112AD44D1995824E01C0A9376F5CA4C9614E36, L_5, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0034:
	{
		// if (extensions != null) {
		TextureInfoExtension_t4C6FD82D020CDCEE2DFFEC8C7430537E6D679E81* L_6 = __this->___extensions_2;
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		// writer.AddProperty("extensions");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_7 = ___writer0;
		NullCheck(L_7);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_7, _stringLiteral79E88D091421691C53CC28304934AC732EC25429, NULL);
		// extensions.GltfSerialize(writer);
		TextureInfoExtension_t4C6FD82D020CDCEE2DFFEC8C7430537E6D679E81* L_8 = __this->___extensions_2;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_9 = ___writer0;
		NullCheck(L_8);
		VirtualActionInvoker1< JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* >::Invoke(4 /* System.Void GLTFast.Schema.TextureInfoExtension::GltfSerialize(GLTFast.Schema.JsonWriter) */, L_8, L_9);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void GLTFast.Schema.TextureInfo::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureInfo_GltfSerialize_mE8A556F0675E781AFBF0C0ADFB81AC19C2B5A674 (TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// GltfSerializeTextureInfo(writer);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		TextureInfo_GltfSerializeTextureInfo_m9D7485480A7F0BF1A966272213BDAE81F0BCD8C2(__this, L_1, NULL);
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_2 = ___writer0;
		NullCheck(L_2);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_2, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.TextureInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureInfo__ctor_mD7CC7151EC6BF57345C180E1BE13FFCF8A4D3E1B (TextureInfo_t0D9F7D1678C2BE844B807539EB9A16A94C69CF22* __this, const RuntimeMethod* method) 
{
	{
		// public int index = -1;
		__this->___index_0 = (-1);
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
// System.Void GLTFast.Schema.TextureInfoExtension::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureInfoExtension_GltfSerialize_m90CE7EE71B834E4FEA422100F2DD2B9D0D44E88B (TextureInfoExtension_t4C6FD82D020CDCEE2DFFEC8C7430537E6D679E81* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral345417A9D85EC28975186A2D91654A1179606230);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(KHR_texture_transform != null) {
		TextureTransform_t052225DA5062D00CE7BA277D5EB6AD73BA372E22* L_0 = __this->___KHR_texture_transform_0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_1 = ___writer0;
		NullCheck(L_1);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_1, NULL);
		// writer.AddProperty("KHR_texture_transform");
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_2 = ___writer0;
		NullCheck(L_2);
		JsonWriter_AddProperty_m19C00D8FBFEA79FA505F2332881B8A4D8DE1AEB5(L_2, _stringLiteral345417A9D85EC28975186A2D91654A1179606230, NULL);
		// KHR_texture_transform.GltfSerialize(writer);
		TextureTransform_t052225DA5062D00CE7BA277D5EB6AD73BA372E22* L_3 = __this->___KHR_texture_transform_0;
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_4 = ___writer0;
		NullCheck(L_3);
		VirtualActionInvoker1< JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* >::Invoke(4 /* System.Void GLTFast.Schema.TextureTransform::GltfSerialize(GLTFast.Schema.JsonWriter) */, L_3, L_4);
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_5 = ___writer0;
		NullCheck(L_5);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_5, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void GLTFast.Schema.TextureInfoExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureInfoExtension__ctor_m274EA44457C86D23FB5BB05255D2D93A6AE0AC75 (TextureInfoExtension_t4C6FD82D020CDCEE2DFFEC8C7430537E6D679E81* __this, const RuntimeMethod* method) 
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
// System.Void GLTFast.Schema.TextureTransform::GltfSerialize(GLTFast.Schema.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureTransform_GltfSerialize_m4515C30243C8F443EBAF1508CC6C96111684688B (TextureTransform_t052225DA5062D00CE7BA277D5EB6AD73BA372E22* __this, JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27112AD44D1995824E01C0A9376F5CA4C9614E36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DF417DF46EF8A7C67D3A1FE0CC53DCF5212FC81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.AddObject();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_0 = ___writer0;
		NullCheck(L_0);
		JsonWriter_AddObject_m938C4D1643DE8E83D633762FC70651A6868CCF29(L_0, NULL);
		// if (offset != null) {
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___offset_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// writer.AddArrayProperty("offset", offset);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_2 = ___writer0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___offset_0;
		NullCheck(L_2);
		JsonWriter_AddArrayProperty_m598554F05B3A9E2CB6428CBEFCE33AFBB2931BC8(L_2, _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4, (RuntimeObject*)L_3, NULL);
	}

IL_001f:
	{
		// if (scale != null) {
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___scale_2;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// writer.AddArrayProperty("scale", scale);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_5 = ___writer0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___scale_2;
		NullCheck(L_5);
		JsonWriter_AddArrayProperty_m598554F05B3A9E2CB6428CBEFCE33AFBB2931BC8(L_5, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, (RuntimeObject*)L_6, NULL);
	}

IL_0038:
	{
		// if(rotation != 0) {
		float L_7 = __this->___rotation_1;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0056;
		}
	}
	{
		// writer.AddProperty("rotation", rotation);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_8 = ___writer0;
		float L_9 = __this->___rotation_1;
		NullCheck(L_8);
		JsonWriter_AddProperty_mAB9A3ED6353AAF08537326C1840D2A0246DCC20B(L_8, _stringLiteral4DF417DF46EF8A7C67D3A1FE0CC53DCF5212FC81, L_9, NULL);
	}

IL_0056:
	{
		// if(texCoord >= 0) {
		int32_t L_10 = __this->___texCoord_3;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		// writer.AddProperty("texCoord", texCoord);
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_11 = ___writer0;
		int32_t L_12 = __this->___texCoord_3;
		NullCheck(L_11);
		JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C(L_11, _stringLiteral27112AD44D1995824E01C0A9376F5CA4C9614E36, L_12, JsonWriter_AddProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m485315360344F94EA860581B8F251666BE6FA67C_RuntimeMethod_var);
	}

IL_0070:
	{
		// writer.Close();
		JsonWriter_t8949F7E51207411AFE7E2422027C78B40EA8BEB1* L_13 = ___writer0;
		NullCheck(L_13);
		JsonWriter_Close_mC22689B5D6913CC556E3022EB91779236BE9F9BA(L_13, NULL);
		// }
		return;
	}
}
// System.Void GLTFast.Schema.TextureTransform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureTransform__ctor_m9FF4D2626D6F65BEBB4616198403F0CE5C2624C3 (TextureTransform_t052225DA5062D00CE7BA277D5EB6AD73BA372E22* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float[] offset = {0,0};
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___offset_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___offset_0), (void*)L_0);
		// public float[] scale = {1,1};
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.0f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(1.0f));
		__this->___scale_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scale_2), (void*)L_3);
		// public int texCoord = -1;
		__this->___texCoord_3 = (-1);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
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
