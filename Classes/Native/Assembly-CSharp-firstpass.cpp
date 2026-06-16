#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4)
	{
		void* params[4] = { p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// BuglyAgent
struct BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12;
// BuglyCallback
struct BuglyCallback_t81F72172BC44DA604552B3E70B01BBA272206E23;
// BuglyInit
struct BuglyInit_t6DF4B47F02AAEC62F4600C5513BDD074600F0977;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// iOSUtility.MemoryReport
struct MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Diagnostics.StackTrace
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// iOSConfigureLibGC
struct iOSConfigureLibGC_t24E8B7AD284EC6A9B23510832BD916A93B07FDF9;
// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;
// BuglyAgent/LogCallbackDelegate
struct LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;

IL2CPP_EXTERN_C RuntimeClass* BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeviceType_tEC9DF281BE5EA013E3F57441442CCE5A2DFF44C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogSeverity_tDFF14151862ADE8249E4A0517B70F4F94907FDE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTraceUtility_t5C5AAD64E1074311E4831F275A817B231324C366_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0872570ECA17D286446A8F9DCBEAD11C9AC362AD;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral130AFE02856FF5A0277CB75295864F209EA2D102;
IL2CPP_EXTERN_C String_t* _stringLiteral137F5DA697E776E7439C5B6BA3A94B1971D4AEA8;
IL2CPP_EXTERN_C String_t* _stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral23DE1E906F1FC76998185695007FB138A32E707D;
IL2CPP_EXTERN_C String_t* _stringLiteral25AEDA992D7226DC2D636B3995104E58322F52D5;
IL2CPP_EXTERN_C String_t* _stringLiteral275475888FD46983B9997B4C8DC5627251DF3484;
IL2CPP_EXTERN_C String_t* _stringLiteral285CC2630BFF971E0806D28627F47E9284BA22A0;
IL2CPP_EXTERN_C String_t* _stringLiteral29CA327AC02DECBAFA88FF05C3318D491C02A30C;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968;
IL2CPP_EXTERN_C String_t* _stringLiteral2DE175241CD3F193AEBDE7A2D595059D3BB0DE3E;
IL2CPP_EXTERN_C String_t* _stringLiteral2FC877C2B8C8CB8BD4A186C7CCE90E96C49AEEDD;
IL2CPP_EXTERN_C String_t* _stringLiteral31FBC5404CB0EC661C0FD0A79B8D2BC99441B373;
IL2CPP_EXTERN_C String_t* _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407;
IL2CPP_EXTERN_C String_t* _stringLiteral326EC1779DF2A38F8AF7B8823A103084F9BDCF4B;
IL2CPP_EXTERN_C String_t* _stringLiteral38A6ACF9046399DC1DBD18C1FD3F8B8B0E4FC440;
IL2CPP_EXTERN_C String_t* _stringLiteral399424EAA0A270B0E89CD41833FF269CAD6AE3AF;
IL2CPP_EXTERN_C String_t* _stringLiteral3CC476F25BB96DF3AB48B85C9B4556E3A8EECDDF;
IL2CPP_EXTERN_C String_t* _stringLiteral4103F632AE3883CE65740E10B5320832AFA26FCF;
IL2CPP_EXTERN_C String_t* _stringLiteral442235F1D88C0C4298CC6C5D4C6803583F2E538E;
IL2CPP_EXTERN_C String_t* _stringLiteral4808ACA9668728D6BBF49150A76132057225944C;
IL2CPP_EXTERN_C String_t* _stringLiteral50EBD3550C224C67E20E5749AFA6A2C221D5AED7;
IL2CPP_EXTERN_C String_t* _stringLiteral515AE8FDB9C25ACAE2FBF81A8470F0F8B3FDD6FC;
IL2CPP_EXTERN_C String_t* _stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5;
IL2CPP_EXTERN_C String_t* _stringLiteral56C59749732F13B10E597964D8BC3F7B8B1C4A39;
IL2CPP_EXTERN_C String_t* _stringLiteral57A5B9F3116ECBC21D1419A60997CB549020FC53;
IL2CPP_EXTERN_C String_t* _stringLiteral5B3D2C8030F02C8EFA282A89920ED9B3A0987293;
IL2CPP_EXTERN_C String_t* _stringLiteral63417D112A391E256F1F6EB23C6065DCB592A88A;
IL2CPP_EXTERN_C String_t* _stringLiteral669F15A84AF7656AD4522C599D67132E9745C548;
IL2CPP_EXTERN_C String_t* _stringLiteral6A188EC67B22CF9E09D96F3638F8CCA13FB51DB5;
IL2CPP_EXTERN_C String_t* _stringLiteral6E571100EBB444DF5BCE485719D2C592256FE1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral766520BA122B11639DEA21FD11348396C1DA431F;
IL2CPP_EXTERN_C String_t* _stringLiteral7A21B738582222CA9FACA0509F3CB9B207C50446;
IL2CPP_EXTERN_C String_t* _stringLiteral7E697F948E1E198164B5B09B250C324F3D1044CB;
IL2CPP_EXTERN_C String_t* _stringLiteral822B496EE7630A0562263AF42972445ECA49F024;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral86DC3F12E9B43F86F05FCBCB272F69EC36B69290;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral88E99AFA872C3627CA43783D04308160912C2DA4;
IL2CPP_EXTERN_C String_t* _stringLiteral8984DC1B97522E55FEF48B51FFD5141EFD753241;
IL2CPP_EXTERN_C String_t* _stringLiteral89AE291F5A895AE349B8E0FC91AC6C2EAE546051;
IL2CPP_EXTERN_C String_t* _stringLiteral8D0EDAE8218575FC34769326FAE5D1CA527D46BA;
IL2CPP_EXTERN_C String_t* _stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E;
IL2CPP_EXTERN_C String_t* _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1;
IL2CPP_EXTERN_C String_t* _stringLiteral92354AFCE308AF1E2F60CBB79B54D8373AFE120E;
IL2CPP_EXTERN_C String_t* _stringLiteral927C07A9A0D4F74C939B952882D32EE98B8C854F;
IL2CPP_EXTERN_C String_t* _stringLiteral95573C22D7D829D257E36C1A9BF4671C24ABEEF0;
IL2CPP_EXTERN_C String_t* _stringLiteral9A2D33EE20E51717CDC6859049AB64AAAF108C53;
IL2CPP_EXTERN_C String_t* _stringLiteral9C8693CE7D88AAF366EE179A4BB705613CEBDD81;
IL2CPP_EXTERN_C String_t* _stringLiteral9F2F1003AD681D270AFDD661A98E96EA8A697B9F;
IL2CPP_EXTERN_C String_t* _stringLiteralA039BE88B8D6B21CA08227A0DE60A77BACD4ED1D;
IL2CPP_EXTERN_C String_t* _stringLiteralA392FB5E31FE22CF5451C4C52C4FDCA87A1EE7FF;
IL2CPP_EXTERN_C String_t* _stringLiteralA9539B7EE51651AB4FC065B8BC827242FC42613F;
IL2CPP_EXTERN_C String_t* _stringLiteralAA22D570E6C4A129777FCFB302C12DD9C8F5BA43;
IL2CPP_EXTERN_C String_t* _stringLiteralABAE1155CE9EFC0F9A95E89CB74687207B87B365;
IL2CPP_EXTERN_C String_t* _stringLiteralAD5B8D1C9401E75E664CC0008025E462198BCD3B;
IL2CPP_EXTERN_C String_t* _stringLiteralADF4CBFD67BD882C8FBC1FD6DA7AF5D413843C30;
IL2CPP_EXTERN_C String_t* _stringLiteralAE4D4F7CFAAF34EC0E2FF33AFD0AF84D99F8D9EC;
IL2CPP_EXTERN_C String_t* _stringLiteralB08C65592DC87F6D8778CEEFEFE0655FC49229A1;
IL2CPP_EXTERN_C String_t* _stringLiteralBA864B446F1D9E8734FE1D3782FF76AC3CDD0D80;
IL2CPP_EXTERN_C String_t* _stringLiteralBAC2CD1C0497556A9CCD298CC5640CBCA4B3A88E;
IL2CPP_EXTERN_C String_t* _stringLiteralBCD538BCDD7CC104808AFF7B53C5DF923978F284;
IL2CPP_EXTERN_C String_t* _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924;
IL2CPP_EXTERN_C String_t* _stringLiteralC188999EFFCB7939F9B4DEB8CFD74F0FACDF6EFF;
IL2CPP_EXTERN_C String_t* _stringLiteralC5D8AF07339C92C1C8A544FB0AED646C001200E8;
IL2CPP_EXTERN_C String_t* _stringLiteralC8D209392969C3122523988F0070F12A63316400;
IL2CPP_EXTERN_C String_t* _stringLiteralCCBC68B199DA3C0837624AEFA5E640D84B7B03F0;
IL2CPP_EXTERN_C String_t* _stringLiteralD44B6A8CFCBCCA882D30DABC08872C044BD78C58;
IL2CPP_EXTERN_C String_t* _stringLiteralD8235FE403BAB44634519FA4D2B9135A19A0C45D;
IL2CPP_EXTERN_C String_t* _stringLiteralD8A9B5362743ABE06123CCA0F1635705E67B425E;
IL2CPP_EXTERN_C String_t* _stringLiteralD8E4A2FDC293FF035F0FB42F1F6578603E80F361;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE47C281292FF54C2EC2B02EEDC33FCD74B0A4D03;
IL2CPP_EXTERN_C String_t* _stringLiteralECABF18065268EB411BB465302677CB028AA90BB;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309;
IL2CPP_EXTERN_C String_t* _stringLiteralED91876C803CEA1470118E99633BA83CE06D3C8F;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFB13B1A6B5635EEB1C610A9E87D1B0914B469581;
IL2CPP_EXTERN_C String_t* _stringLiteralFBB9FD1D78322F16D39FDEB26A0E474F826FC930;
IL2CPP_EXTERN_C String_t* _stringLiteralFBDBC88F451708877242143919478A7B7F581F79;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BuglyAgent__OnLogCallbackHandler_m00534FE27A0A20B287895C1044F6AB6C3D45FB00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BuglyAgent__OnUncaughtExceptionHandler_m6B9B17C1E8095170D67BD1D3C2671691EFDAD119_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BuglyInit_MyLogCallbackExtrasHandler_mCE34F460A9DDC8700C78568070B04D2D40ED925F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Exception_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF062866229C4952B8051AD32AB6E9D931142CC95 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// BuglyAgent
struct BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12  : public RuntimeObject
{
};

// BuglyCallback
struct BuglyCallback_t81F72172BC44DA604552B3E70B01BBA272206E23  : public RuntimeObject
{
};

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E  : public RuntimeObject
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.GroupCollection::_match
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ____match_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.GroupCollection::_captureMap
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____captureMap_1;
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::_groups
	GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9* ____groups_2;
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

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// iOSUtility.MemoryReport
struct MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46  : public RuntimeObject
{
};

// System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443  : public RuntimeObject
{
	// System.Int32 System.Diagnostics.StackFrame::ilOffset
	int32_t ___ilOffset_1;
	// System.Int32 System.Diagnostics.StackFrame::nativeOffset
	int32_t ___nativeOffset_2;
	// System.Int64 System.Diagnostics.StackFrame::methodAddress
	int64_t ___methodAddress_3;
	// System.UInt32 System.Diagnostics.StackFrame::methodIndex
	uint32_t ___methodIndex_4;
	// System.Reflection.MethodBase System.Diagnostics.StackFrame::methodBase
	MethodBase_t* ___methodBase_5;
	// System.String System.Diagnostics.StackFrame::fileName
	String_t* ___fileName_6;
	// System.Int32 System.Diagnostics.StackFrame::lineNumber
	int32_t ___lineNumber_7;
	// System.Int32 System.Diagnostics.StackFrame::columnNumber
	int32_t ___columnNumber_8;
	// System.String System.Diagnostics.StackFrame::internalMethodName
	String_t* ___internalMethodName_9;
};
// Native definition for P/Invoke marshalling of System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_pinvoke
{
	int32_t ___ilOffset_1;
	int32_t ___nativeOffset_2;
	int64_t ___methodAddress_3;
	uint32_t ___methodIndex_4;
	MethodBase_t* ___methodBase_5;
	char* ___fileName_6;
	int32_t ___lineNumber_7;
	int32_t ___columnNumber_8;
	char* ___internalMethodName_9;
};
// Native definition for COM marshalling of System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_com
{
	int32_t ___ilOffset_1;
	int32_t ___nativeOffset_2;
	int64_t ___methodAddress_3;
	uint32_t ___methodIndex_4;
	MethodBase_t* ___methodBase_5;
	Il2CppChar* ___fileName_6;
	int32_t ___lineNumber_7;
	int32_t ___columnNumber_8;
	Il2CppChar* ___internalMethodName_9;
};

// System.Diagnostics.StackTrace
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853  : public RuntimeObject
{
	// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::frames
	StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* ___frames_2;
	// System.Diagnostics.StackTrace[] System.Diagnostics.StackTrace::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_3;
	// System.Boolean System.Diagnostics.StackTrace::debug_info
	bool ___debug_info_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// iOSConfigureLibGC
struct iOSConfigureLibGC_t24E8B7AD284EC6A9B23510832BD916A93B07FDF9  : public RuntimeObject
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Object System.UnhandledExceptionEventArgs::_exception
	RuntimeObject* ____exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::_isTerminating
	bool ____isTerminating_2;
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

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
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

// UnityEngine.DeviceType
struct DeviceType_tEC9DF281BE5EA013E3F57441442CCE5A2DFF44C4 
{
	// System.Int32 UnityEngine.DeviceType::value__
	int32_t ___value___2;
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

// LogSeverity
struct LogSeverity_tDFF14151862ADE8249E4A0517B70F4F94907FDE1 
{
	// System.Int32 LogSeverity::value__
	int32_t ___value___2;
};

// UnityEngine.LogType
struct LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331 
{
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;
};

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// System.Reflection.ParameterAttributes
struct ParameterAttributes_tDAEC8B3C5986B042F8F9B0845505D0FC15F92E68 
{
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;
};

// System.Text.RegularExpressions.RegexOptions
struct RegexOptions_tE9DA9C4DF8FB26DD1C7E0F8AA022C1164A423F6B 
{
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.StringSplitOptions
struct StringSplitOptions_t4DD892C76C70DD4800FC1B76054D69826F770062 
{
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C  : public MulticastDelegate_t
{
};

// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413  : public MulticastDelegate_t
{
};

// BuglyAgent/LogCallbackDelegate
struct LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// BuglyInit
struct BuglyInit_t6DF4B47F02AAEC62F4600C5513BDD074600F0977  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// BuglyAgent
struct BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields
{
	// System.Boolean BuglyAgent::_crashReporterTypeConfiged
	bool ____crashReporterTypeConfiged_0;
	// BuglyAgent/LogCallbackDelegate BuglyAgent::_LogCallbackEventHandler
	LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* ____LogCallbackEventHandler_1;
	// System.Boolean BuglyAgent::_isInitialized
	bool ____isInitialized_2;
	// LogSeverity BuglyAgent::_autoReportLogLevel
	int32_t ____autoReportLogLevel_3;
	// System.Int32 BuglyAgent::_crashReporterType
	int32_t ____crashReporterType_4;
	// System.Int32 BuglyAgent::_crashReproterCustomizedLogLevel
	int32_t ____crashReproterCustomizedLogLevel_5;
	// System.Boolean BuglyAgent::_debugMode
	bool ____debugMode_6;
	// System.Boolean BuglyAgent::_autoQuitApplicationAfterReport
	bool ____autoQuitApplicationAfterReport_7;
	// System.Int32 BuglyAgent::EXCEPTION_TYPE_UNCAUGHT
	int32_t ___EXCEPTION_TYPE_UNCAUGHT_8;
	// System.Int32 BuglyAgent::EXCEPTION_TYPE_CAUGHT
	int32_t ___EXCEPTION_TYPE_CAUGHT_9;
	// System.String BuglyAgent::_pluginVersion
	String_t* ____pluginVersion_10;
	// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> BuglyAgent::_LogCallbackExtrasHandler
	Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* ____LogCallbackExtrasHandler_11;
	// System.Boolean BuglyAgent::_uncaughtAutoReportOnce
	bool ____uncaughtAutoReportOnce_12;
};

// BuglyAgent

// BuglyCallback

// BuglyCallback

// System.Text.RegularExpressions.Capture

// System.Text.RegularExpressions.Capture

// System.Text.RegularExpressions.GroupCollection

// System.Text.RegularExpressions.GroupCollection

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// iOSUtility.MemoryReport
struct MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46_StaticFields
{
	// System.Int32 iOSUtility.MemoryReport::mLastMemoryInMB
	int32_t ___mLastMemoryInMB_0;
	// System.Int32 iOSUtility.MemoryReport::mMaxMemoryInMB
	int32_t ___mMaxMemoryInMB_1;
};

// iOSUtility.MemoryReport

// System.Diagnostics.StackFrame

// System.Diagnostics.StackFrame

// System.Diagnostics.StackTrace
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields
{
	// System.Boolean System.Diagnostics.StackTrace::isAotidSet
	bool ___isAotidSet_5;
	// System.String System.Diagnostics.StackTrace::aotid
	String_t* ___aotid_6;
};

// System.Diagnostics.StackTrace

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// iOSConfigureLibGC

// iOSConfigureLibGC

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
};

// System.Text.RegularExpressions.Group

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.UInt64

// System.UInt64

// System.UnhandledExceptionEventArgs

// System.UnhandledExceptionEventArgs

// System.Void

// System.Void

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};

// System.Delegate

// System.Delegate

// UnityEngine.DeviceType

// UnityEngine.DeviceType

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// LogSeverity

// LogSeverity

// UnityEngine.LogType

// UnityEngine.LogType

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// System.Text.RegularExpressions.Match

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.Text.RegularExpressions.RegexOptions

// System.Text.RegularExpressions.RegexOptions

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.StringSplitOptions

// System.StringSplitOptions

// System.Reflection.ParameterInfo

// System.Reflection.ParameterInfo

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.Text.RegularExpressions.Regex

// System.Type
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

// System.Type

// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.AsyncCallback

// System.AsyncCallback

// System.UnhandledExceptionEventHandler

// System.UnhandledExceptionEventHandler

// UnityEngine.Application/LogCallback

// UnityEngine.Application/LogCallback

// BuglyAgent/LogCallbackDelegate

// BuglyAgent/LogCallbackDelegate

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// BuglyInit

// BuglyInit
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
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


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;

// System.Void BuglyAgent::_SetCrashReporterType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent__SetCrashReporterType_m6060C86A7AF6A200941AD64A322CACE1C22EE7B5 (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Void BuglyAgent::_SetCrashReporterLogLevel(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BuglyAgent__SetCrashReporterLogLevel_m088C5F79FAC9AE9C112D2B0E160B9A5AB9874265_inline (int32_t ___0_logLevel, const RuntimeMethod* method) ;
// System.Boolean BuglyAgent::get_IsInitialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BuglyAgent_get_IsInitialized_mEB33E9C8761CF9D5A834692E4968276682E2CCE3_inline (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void BuglyAgent::DebugLog(System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_DebugLog_m170F70C6FA5CB475C609A555A9582E7AF15BCA38 (String_t* ___0_tag, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void BuglyAgent::InitBuglyAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_InitBuglyAgent_mF8C6AA6E4C9FE6CA7BE89AEE530CC8799B23D52A (String_t* ___0_appId, const RuntimeMethod* method) ;
// System.Void BuglyAgent::_RegisterExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent__RegisterExceptionHandler_m40A812DA439E04146D65FFBB5E6B79917CCA7B57 (const RuntimeMethod* method) ;
// System.Void BuglyAgent::add__LogCallbackEventHandler(BuglyAgent/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_add__LogCallbackEventHandler_m0C2F1806E048C8449054F7F8A9323DB6D3550CE3 (LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* ___0_value, const RuntimeMethod* method) ;
// System.Void BuglyAgent::_HandleException(System.Exception,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent__HandleException_m71E86BAAD18ACC8F2DA4D27D79E19A5C8DC25328 (Exception_t* ___0_e, String_t* ___1_message, bool ___2_uncaught, const RuntimeMethod* method) ;
// System.Void BuglyAgent::_HandleException(LogSeverity,System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent__HandleException_m695BDBFF74CE595A3CCFE040ACC8F0457B4CDFC0 (int32_t ___0_logLevel, String_t* ___1_name, String_t* ___2_message, String_t* ___3_stackTrace, bool ___4_uncaught, const RuntimeMethod* method) ;
// System.Void BuglyAgent::remove__LogCallbackEventHandler(BuglyAgent/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_remove__LogCallbackEventHandler_m2E6AFEEAD6DF0178BFE9D3CA1C704D02CDF00183 (LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* ___0_value, const RuntimeMethod* method) ;
// System.Void BuglyAgent::SetUserInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_SetUserInfo_mC531B6410A55509128109BE3D892CC023DD0B6E0 (String_t* ___0_userInfo, const RuntimeMethod* method) ;
// System.Void BuglyAgent::SetCurrentScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_SetCurrentScene_m1BC1EAA932BF77FE6D261E0C309DE0CB0CA9B9DF (int32_t ___0_sceneId, const RuntimeMethod* method) ;
// System.Void BuglyAgent::AddKeyAndValueInScene(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_AddKeyAndValueInScene_mE95FBCC1A269D721E8D7FA33FF12512A85E66C9A (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Void BuglyAgent::EnableDebugMode(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BuglyAgent_EnableDebugMode_m5CEA016B347860AD99802AA44DFB2FBF940FDEE2_inline (bool ___0_enable, const RuntimeMethod* method) ;
// System.Void BuglyAgent::ConfigDefaultBeforeInit(System.String,System.String,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_ConfigDefaultBeforeInit_mD99262538A9E24B9A7D066B354A839070CD45372 (String_t* ___0_channel, String_t* ___1_version, String_t* ___2_user, int64_t ___3_delay, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m7A82CDC7A6F9E34A54FD706A21E3F822378028BD (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void BuglyAgent::LogRecord(LogSeverity,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_LogRecord_m36FFD56A0C1CE12C9EFB4F0962781C4D19129F73 (int32_t ___0_level, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::RegisterLogCallback(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_RegisterLogCallback_mE0FF6CCC29725C4B7FDA75AF48B8522A585335E6 (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___0_handler, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler__ctor_m97305729C8FD4CB2370169FBEB8E4364A9EE803A (UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.AppDomain::add_UnhandledException(System.UnhandledExceptionEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_add_UnhandledException_m14767641F2904E88E142CA76D4EAD955E67354C7 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// System.Void BuglyAgent::SetUnityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_SetUnityVersion_mDCA78ECE8E533C25733A118E1E5D849AD5AD8674 (const RuntimeMethod* method) ;
// System.Void System.AppDomain::remove_UnhandledException(System.UnhandledExceptionEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_remove_UnhandledException_mB02B27A301E597F7F4D581ED6058E9DBA3F6EABA (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___0_value, const RuntimeMethod* method) ;
// System.Void BuglyAgent/LogCallbackDelegate::Invoke(System.String,System.String,UnityEngine.LogType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogCallbackDelegate_Invoke_mEB5AAF91D7C2110D65DE39A86C0CE5FD360C96C8_inline (LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline (UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Type System.Exception::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09 (Exception_t* __this, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace__ctor_m9BE489F499935CFA9AD4154B18A3AB35C52886DF (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, Exception_t* ___0_e, bool ___1_fNeedFileInfo, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132 (StringBuilder_t* __this, String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void BuglyAgent::_reportException(System.Boolean,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent__reportException_m31F7835A102154C7F210174EABD3E3CEA0896512 (bool ___0_uncaught, String_t* ___1_name, String_t* ___2_reason, String_t* ___3_stackTrace, const RuntimeMethod* method) ;
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackTraceUtility_ExtractStackTrace_mFDB05BC4CA207364FFC93F44E29F35A271DF5200 (const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void BuglyAgent::PrintLog(LogSeverity,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_PrintLog_m4BE095DAD2A0DA539CC5FF0886CA36C4D4746D20 (int32_t ___0_level, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.Void BuglyAgent::ReportException(System.Int32,System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_ReportException_mC207F0A9773F5D669C8DF23D2428D8CD7A744D83 (int32_t ___0_type, String_t* ___1_name, String_t* ___2_reason, String_t* ___3_stackTrace, bool ___4_quitProgram, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___0_pattern, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___0_input, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Group_t26371E9136D6F43782C487B63C67C5FC4F472881* GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A (GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* __this, String_t* ___0_groupname, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void BuglyAgent::ConfigDebugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_ConfigDebugMode_m46CCE75E8D3E01B10B01970A287014C0B2BAAEC5 (bool ___0_enable, const RuntimeMethod* method) ;
// System.Void BuglyAgent::ConfigDefault(System.String,System.String,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_ConfigDefault_m27D836B1F52C1F85EED067987A736EFEF4F4B82E (String_t* ___0_channel, String_t* ___1_version, String_t* ___2_user, int64_t ___3_delay, const RuntimeMethod* method) ;
// System.Void BuglyAgent::ConfigAutoReportLogLevel(LogSeverity)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BuglyAgent_ConfigAutoReportLogLevel_m393552E98CE1FE3A02991F27C173E7CB278490EE_inline (int32_t ___0_level, const RuntimeMethod* method) ;
// System.Void BuglyAgent::ConfigAutoQuitApplication(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BuglyAgent_ConfigAutoQuitApplication_mBBD302308FE1A64D7ABD979C3E1413668C896310_inline (bool ___0_autoQuit, const RuntimeMethod* method) ;
// System.Void BuglyAgent::RegisterLogCallback(BuglyAgent/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_RegisterLogCallback_mB96ED5014369A269266FEF4BCF322C1A1441C003 (LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* ___0_handler, const RuntimeMethod* method) ;
// System.Void BuglyAgent::InitWithAppId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_InitWithAppId_m25E072BDE19958A3DBBD04744F5CCDF1586144A6 (String_t* ___0_appId, const RuntimeMethod* method) ;
// System.Void BuglyAgent::EnableExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_EnableExceptionHandler_m7EC5F731E19CA06DC47A9AD880A72781DA7E65C9 (const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m814B8E7C54894711132601334E53D9A14E4DA16B (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void BuglyAgent::SetLogCallbackExtrasHandler(System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_SetLogCallbackExtrasHandler_mE30A93110A72ED0FE1A533900434A5457A03B543 (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* ___0_handler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String UnityEngine.SystemInfo::get_deviceModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceModel_m308FFBADED4BF6CB34C318A0BBDA762D09A7F185 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_deviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceName_mBF171D8609337585AF50DDC7FFC9D7EEA3B4A58E (const RuntimeMethod* method) ;
// UnityEngine.DeviceType UnityEngine.SystemInfo::get_deviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_deviceType_m9BA3769FAC1102E252B5350FE208BF885E5F24D0 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_deviceUniqueIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceUniqueIdentifier_m61BA4CB77ADA09730B8B575700D85027EFDB4EFC (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_graphicsDeviceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceID_m9CB876E71515AF035A36AF3185992D10AE2ED646 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_graphicsDeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceName_mA3F2E2CA587AD5E212A38AD7D28559FD017451A2 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_graphicsDeviceVendor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceVendor_mE2D7A85437C820636639ADC124C965DB37B52204 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_graphicsDeviceVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceVersion_m8A157C76206F3CF7D9A3DA6F4BE188A6FEC0769C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_graphicsDeviceVendorID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceVendorID_m9806D2F3459612C9FFE1A152BEB6BFB9D02C3309 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_graphicsMemorySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsMemorySize_m05C833741F5F5C06FE9B4B9F50078A21E9E71ACF (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_systemMemorySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_systemMemorySize_m3BFE40CF5A43FEAB94F5C552A47D04ECD88B771E (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void iOSConfigureLibGC::bfutils_SetLibGCFreeSpaceDivisor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSConfigureLibGC_bfutils_SetLibGCFreeSpaceDivisor_m2040EDC586BFE4B4FF772CD5FCA8232740EEC8A0 (int32_t ___0_divisor, const RuntimeMethod* method) ;
// System.UInt64 iOSUtility.MemoryReport::ios_report_memory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MemoryReport_ios_report_memory_mA03BD712F6DECE0EDF9FE82A8CCB9C3E571DA3D8 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL bfutils_SetLibGCFreeSpaceDivisor(int32_t);
IL2CPP_EXTERN_C uint64_t DEFAULT_CALL ios_report_memory();
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
// System.Void BuglyAgent::ConfigCrashReporter(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_ConfigCrashReporter_m269278B4CF35114D0F2E710FC5B1563E28EFF5D6 (int32_t ___0_type, int32_t ___1_logLevel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _SetCrashReporterType (type);
		int32_t L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent__SetCrashReporterType_m6060C86A7AF6A200941AD64A322CACE1C22EE7B5(L_0, NULL);
		// _SetCrashReporterLogLevel (logLevel);
		int32_t L_1 = ___1_logLevel;
		BuglyAgent__SetCrashReporterLogLevel_m088C5F79FAC9AE9C112D2B0E160B9A5AB9874265_inline(L_1, NULL);
		// }
		return;
	}
}
// System.Void BuglyAgent::InitWithAppId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_InitWithAppId_m25E072BDE19958A3DBBD04744F5CCDF1586144A6 (String_t* ___0_appId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECABF18065268EB411BB465302677CB028AA90BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBB9FD1D78322F16D39FDEB26A0E474F826FC930);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BuglyAgent_get_IsInitialized_mEB33E9C8761CF9D5A834692E4968276682E2CCE3_inline(NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// DebugLog (null, "BuglyAgent has already been initialized.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_DebugLog_m170F70C6FA5CB475C609A555A9582E7AF15BCA38((String_t*)NULL, _stringLiteralFBB9FD1D78322F16D39FDEB26A0E474F826FC930, L_1, NULL);
		// return;
		return;
	}

IL_0018:
	{
		// if (string.IsNullOrEmpty (appId)) {
		String_t* L_2 = ___0_appId;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// return;
		return;
	}

IL_0021:
	{
		// InitBuglyAgent (appId);
		String_t* L_4 = ___0_appId;
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_InitBuglyAgent_mF8C6AA6E4C9FE6CA7BE89AEE530CC8799B23D52A(L_4, NULL);
		// DebugLog (null, "Initialized with app id: {0}", appId);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		String_t* L_7 = ___0_appId;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		BuglyAgent_DebugLog_m170F70C6FA5CB475C609A555A9582E7AF15BCA38((String_t*)NULL, _stringLiteralECABF18065268EB411BB465302677CB028AA90BB, L_6, NULL);
		// _RegisterExceptionHandler ();
		BuglyAgent__RegisterExceptionHandler_m40A812DA439E04146D65FFBB5E6B79917CCA7B57(NULL);
		// }
		return;
	}
}
// System.Void BuglyAgent::EnableExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_EnableExceptionHandler_m7EC5F731E19CA06DC47A9AD880A72781DA7E65C9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE4D4F7CFAAF34EC0E2FF33AFD0AF84D99F8D9EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBB9FD1D78322F16D39FDEB26A0E474F826FC930);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BuglyAgent_get_IsInitialized_mEB33E9C8761CF9D5A834692E4968276682E2CCE3_inline(NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// DebugLog (null, "BuglyAgent has already been initialized.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_DebugLog_m170F70C6FA5CB475C609A555A9582E7AF15BCA38((String_t*)NULL, _stringLiteralFBB9FD1D78322F16D39FDEB26A0E474F826FC930, L_1, NULL);
		// return;
		return;
	}

IL_0018:
	{
		// DebugLog (null, "Only enable the exception handler, please make sure you has initialized the sdk in the native code in associated Android or iOS project.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_DebugLog_m170F70C6FA5CB475C609A555A9582E7AF15BCA38((String_t*)NULL, _stringLiteralAE4D4F7CFAAF34EC0E2FF33AFD0AF84D99F8D9EC, L_2, NULL);
		// _RegisterExceptionHandler ();
		BuglyAgent__RegisterExceptionHandler_m40A812DA439E04146D65FFBB5E6B79917CCA7B57(NULL);
		// }
		return;
	}
}
// System.Void BuglyAgent::RegisterLogCallback(BuglyAgent/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_RegisterLogCallback_mB96ED5014369A269266FEF4BCF322C1A1441C003 (LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9539B7EE51651AB4FC065B8BC827242FC42613F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handler != null) {
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_0 = ___0_handler;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// DebugLog (null, "Add log callback handler: {0}", handler);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_3 = ___0_handler;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_DebugLog_m170F70C6FA5CB475C609A555A9582E7AF15BCA38((String_t*)NULL, _stringLiteralA9539B7EE51651AB4FC065B8BC827242FC42613F, L_2, NULL);
		// _LogCallbackEventHandler += handler;
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_4 = ___0_handler;
		BuglyAgent_add__LogCallbackEventHandler_m0C2F1806E048C8449054F7F8A9323DB6D3550CE3(L_4, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void BuglyAgent::SetLogCallbackExtrasHandler(System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_SetLogCallbackExtrasHandler_mE30A93110A72ED0FE1A533900434A5457A03B543 (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB13B1A6B5635EEB1C610A9E87D1B0914B469581);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handler != null) {
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_0 = ___0_handler;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// _LogCallbackExtrasHandler = handler;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_1 = ___0_handler;
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____LogCallbackExtrasHandler_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____LogCallbackExtrasHandler_11), (void*)L_1);
		// DebugLog(null, "Add log callback extra data handler : {0}", handler);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_4 = ___0_handler;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		BuglyAgent_DebugLog_m170F70C6FA5CB475C609A555A9582E7AF15BCA38((String_t*)NULL, _stringLiteralFB13B1A6B5635EEB1C610A9E87D1B0914B469581, L_3, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void BuglyAgent::ReportException(System.Exception,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_ReportException_m1C00BC2737F7AB98244449F9468B12335861F203 (Exception_t* ___0_e, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB08C65592DC87F6D8778CEEFEFE0655FC49229A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BuglyAgent_get_IsInitialized_mEB33E9C8761CF9D5A834692E4968276682E2CCE3_inline(NULL);
		if (L_0)
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
		// DebugLog (null, "Report exception: {0}\n------------\n{1}\n------------", message, e);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___1_message;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		Exception_t* L_5 = ___0_e;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_DebugLog_m170F70C6FA5CB475C609A555A9582E7AF15BCA38((String_t*)NULL, _stringLiteralB08C65592DC87F6D8778CEEFEFE0655FC49229A1, L_4, NULL);
		// _HandleException (e, message, false);
		Exception_t* L_6 = ___0_e;
		String_t* L_7 = ___1_message;
		BuglyAgent__HandleException_m71E86BAAD18ACC8F2DA4D27D79E19A5C8DC25328(L_6, L_7, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void BuglyAgent::ReportException(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_ReportException_m03B9ACED185A3275441D56A3E2E9EF2B0DADDA7B (String_t* ___0_name, String_t* ___1_message, String_t* ___2_stackTrace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D0EDAE8218575FC34769326FAE5D1CA527D46BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BuglyAgent_get_IsInitialized_mEB33E9C8761CF9D5A834692E4968276682E2CCE3_inline(NULL);
		if (L_0)
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
		// DebugLog (null, "Report exception: {0} {1} \n{2}", name, message, stackTrace);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_message;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___2_stackTrace;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_DebugLog_m170F70C6FA5CB475C609A555A9582E7AF15BCA38((String_t*)NULL, _stringLiteral8D0EDAE8218575FC34769326FAE5D1CA527D46BA, L_6, NULL);
		// _HandleException (LogSeverity.LogException, name, message, stackTrace, false);
		String_t* L_8 = ___0_name;
		String_t* L_9 = ___1_message;
		String_t* L_10 = ___2_stackTrace;
		BuglyAgent__HandleException_m695BDBFF74CE595A3CCFE040ACC8F0457B4CDFC0(6, L_8, L_9, L_10, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void BuglyAgent::UnregisterLogCallback(BuglyAgent/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_UnregisterLogCallback_mA6A085FCB7AA0786C75594135114C7BA80C5E221 (LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442235F1D88C0C4298CC6C5D4C6803583F2E538E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handler != null) {
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_0 = ___0_handler;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// DebugLog (null, "Remove log callback handler");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_DebugLog_m170F70C6FA5CB475C609A555A9582E7AF15BCA38((String_t*)NULL, _stringLiteral442235F1D88C0C4298CC6C5D4C6803583F2E538E, L_1, NULL);
		// _LogCallbackEventHandler -= handler;
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_2 = ___0_handler;
		BuglyAgent_remove__LogCallbackEventHandler_m2E6AFEEAD6DF0178BFE9D3CA1C704D02CDF00183(L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void BuglyAgent::SetUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_SetUserId_m62E420FC173587331844BACBE07EB9107BC31739 (String_t* ___0_userId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29CA327AC02DECBAFA88FF05C3318D491C02A30C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BuglyAgent_get_IsInitialized_mEB33E9C8761CF9D5A834692E4968276682E2CCE3_inline(NULL);
		if (L_0)
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
		// DebugLog (null, "Set user id: {0}", userId);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_userId;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_DebugLog_m170F70C6FA5CB475C609A555A9582E7AF15BCA38((String_t*)NULL, _stringLiteral29CA327AC02DECBAFA88FF05C3318D491C02A30C, L_2, NULL);
		// SetUserInfo (userId);
		String_t* L_4 = ___0_userId;
		BuglyAgent_SetUserInfo_mC531B6410A55509128109BE3D892CC023DD0B6E0(L_4, NULL);
		// }
		return;
	}
}
// System.Void BuglyAgent::SetScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_SetScene_m91750721917A3A05323D7960BCC80AFDC7C306C9 (int32_t ___0_sceneId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral275475888FD46983B9997B4C8DC5627251DF3484);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BuglyAgent_get_IsInitialized_mEB33E9C8761CF9D5A834692E4968276682E2CCE3_inline(NULL);
		if (L_0)
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
		// DebugLog (null, "Set scene: {0}", sceneId);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___0_sceneId;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_DebugLog_m170F70C6FA5CB475C609A555A9582E7AF15BCA38((String_t*)NULL, _stringLiteral275475888FD46983B9997B4C8DC5627251DF3484, L_2, NULL);
		// SetCurrentScene (sceneId);
		int32_t L_6 = ___0_sceneId;
		BuglyAgent_SetCurrentScene_m1BC1EAA932BF77FE6D261E0C309DE0CB0CA9B9DF(L_6, NULL);
		// }
		return;
	}
}
// System.Void BuglyAgent::AddSceneData(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_AddSceneData_mD02B21565472D8139200DE0526FB49658E36F106 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral285CC2630BFF971E0806D28627F47E9284BA22A0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BuglyAgent_get_IsInitialized_mEB33E9C8761CF9D5A834692E4968276682E2CCE3_inline(NULL);
		if (L_0)
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
		// DebugLog (null, "Add scene data: [{0}, {1}]", key, value);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_key;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_value;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_DebugLog_m170F70C6FA5CB475C609A555A9582E7AF15BCA38((String_t*)NULL, _stringLiteral285CC2630BFF971E0806D28627F47E9284BA22A0, L_4, NULL);
		// AddKeyAndValueInScene (key, value);
		String_t* L_6 = ___0_key;
		String_t* L_7 = ___1_value;
		BuglyAgent_AddKeyAndValueInScene_mE95FBCC1A269D721E8D7FA33FF12512A85E66C9A(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void BuglyAgent::ConfigDebugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_ConfigDebugMode_m46CCE75E8D3E01B10B01970A287014C0B2BAAEC5 (bool ___0_enable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral515AE8FDB9C25ACAE2FBF81A8470F0F8B3FDD6FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCBC68B199DA3C0837624AEFA5E640D84B7B03F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	RuntimeObject* G_B2_4 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	RuntimeObject* G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	RuntimeObject* G_B3_5 = NULL;
	{
		// EnableDebugMode (enable);
		bool L_0 = ___0_enable;
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_EnableDebugMode_m5CEA016B347860AD99802AA44DFB2FBF940FDEE2_inline(L_0, NULL);
		// DebugLog (null, "{0} the log message print to console", enable ? "Enable" : "Disable");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_enable;
		G_B1_0 = 0;
		G_B1_1 = L_2;
		G_B1_2 = L_2;
		G_B1_3 = _stringLiteralCCBC68B199DA3C0837624AEFA5E640D84B7B03F0;
		G_B1_4 = NULL;
		if (L_3)
		{
			G_B2_0 = 0;
			G_B2_1 = L_2;
			G_B2_2 = L_2;
			G_B2_3 = _stringLiteralCCBC68B199DA3C0837624AEFA5E640D84B7B03F0;
			G_B2_4 = NULL;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0023;
	}

IL_001e:
	{
		G_B3_0 = _stringLiteral515AE8FDB9C25ACAE2FBF81A8470F0F8B3FDD6FC;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0023:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_DebugLog_m170F70C6FA5CB475C609A555A9582E7AF15BCA38((String_t*)G_B3_5, G_B3_4, G_B3_3, NULL);
		// }
		return;
	}
}
// System.Void BuglyAgent::ConfigAutoQuitApplication(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_ConfigAutoQuitApplication_mBBD302308FE1A64D7ABD979C3E1413668C896310 (bool ___0_autoQuit, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _autoQuitApplicationAfterReport = autoQuit;
		bool L_0 = ___0_autoQuit;
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____autoQuitApplicationAfterReport_7 = L_0;
		// }
		return;
	}
}
// System.Void BuglyAgent::ConfigAutoReportLogLevel(LogSeverity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_ConfigAutoReportLogLevel_m393552E98CE1FE3A02991F27C173E7CB278490EE (int32_t ___0_level, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _autoReportLogLevel = level;
		int32_t L_0 = ___0_level;
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____autoReportLogLevel_3 = L_0;
		// }
		return;
	}
}
// System.Void BuglyAgent::ConfigDefault(System.String,System.String,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_ConfigDefault_m27D836B1F52C1F85EED067987A736EFEF4F4B82E (String_t* ___0_channel, String_t* ___1_version, String_t* ___2_user, int64_t ___3_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63417D112A391E256F1F6EB23C6065DCB592A88A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DebugLog (null, "Config default channel:{0}, version:{1}, user:{2}, delay:{3}", channel, version, user, delay);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___0_channel;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___1_version;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___2_user;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		int64_t L_8 = ___3_delay;
		int64_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_DebugLog_m170F70C6FA5CB475C609A555A9582E7AF15BCA38((String_t*)NULL, _stringLiteral63417D112A391E256F1F6EB23C6065DCB592A88A, L_7, NULL);
		// ConfigDefaultBeforeInit (channel, version, user, delay);
		String_t* L_11 = ___0_channel;
		String_t* L_12 = ___1_version;
		String_t* L_13 = ___2_user;
		int64_t L_14 = ___3_delay;
		BuglyAgent_ConfigDefaultBeforeInit_mD99262538A9E24B9A7D066B354A839070CD45372(L_11, L_12, L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void BuglyAgent::DebugLog(System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_DebugLog_m170F70C6FA5CB475C609A555A9582E7AF15BCA38 (String_t* ___0_tag, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8984DC1B97522E55FEF48B51FFD5141EFD753241);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!_debugMode) {
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		bool L_0 = ((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____debugMode_6;
		if (L_0)
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
		// if (string.IsNullOrEmpty (format)) {
		String_t* L_1 = ___1_format;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// Console.WriteLine ("[BuglyAgent] <Debug> - {0} : {1}", tag, string.Format (format, args));
		String_t* L_3 = ___0_tag;
		String_t* L_4 = ___1_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = ___2_args;
		String_t* L_6;
		L_6 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_4, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m7A82CDC7A6F9E34A54FD706A21E3F822378028BD(_stringLiteral8984DC1B97522E55FEF48B51FFD5141EFD753241, L_3, L_6, NULL);
		// }
		return;
	}
}
// System.Void BuglyAgent::PrintLog(LogSeverity,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_PrintLog_m4BE095DAD2A0DA539CC5FF0886CA36C4D4746D20 (int32_t ___0_level, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty (format)) {
		String_t* L_0 = ___1_format;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
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
		// LogRecord (level, string.Format (format, args));
		int32_t L_2 = ___0_level;
		String_t* L_3 = ___1_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___2_args;
		String_t* L_5;
		L_5 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_LogRecord_m36FFD56A0C1CE12C9EFB4F0962781C4D19129F73(L_2, L_5, NULL);
		// }
		return;
	}
}
// System.Void BuglyAgent::ConfigCrashReporterType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_ConfigCrashReporterType_m88EEF03E485ADAD3CAC06A689B959CCB0A2827B6 (const RuntimeMethod* method) 
{
	{
		// return;
		return;
	}
}
// System.Void BuglyAgent::ConfigDefaultBeforeInit(System.String,System.String,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_ConfigDefaultBeforeInit_mD99262538A9E24B9A7D066B354A839070CD45372 (String_t* ___0_channel, String_t* ___1_version, String_t* ___2_user, int64_t ___3_delay, const RuntimeMethod* method) 
{
	{
		// return;
		return;
	}
}
// System.Void BuglyAgent::EnableDebugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_EnableDebugMode_m5CEA016B347860AD99802AA44DFB2FBF940FDEE2 (bool ___0_enable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _debugMode = enable;
		bool L_0 = ___0_enable;
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____debugMode_6 = L_0;
		// }
		return;
	}
}
// System.Void BuglyAgent::InitBuglyAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_InitBuglyAgent_mF8C6AA6E4C9FE6CA7BE89AEE530CC8799B23D52A (String_t* ___0_appId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _isInitialized = true;
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____isInitialized_2 = (bool)1;
		// return;
		return;
	}
}
// System.Void BuglyAgent::SetUnityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_SetUnityVersion_mDCA78ECE8E533C25733A118E1E5D849AD5AD8674 (const RuntimeMethod* method) 
{
	{
		// return;
		return;
	}
}
// System.Void BuglyAgent::SetUserInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_SetUserInfo_mC531B6410A55509128109BE3D892CC023DD0B6E0 (String_t* ___0_userInfo, const RuntimeMethod* method) 
{
	{
		// return;
		return;
	}
}
// System.Void BuglyAgent::ReportException(System.Int32,System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_ReportException_mC207F0A9773F5D669C8DF23D2428D8CD7A744D83 (int32_t ___0_type, String_t* ___1_name, String_t* ___2_reason, String_t* ___3_stackTrace, bool ___4_quitProgram, const RuntimeMethod* method) 
{
	{
		// return;
		return;
	}
}
// System.Void BuglyAgent::SetCurrentScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_SetCurrentScene_m1BC1EAA932BF77FE6D261E0C309DE0CB0CA9B9DF (int32_t ___0_sceneId, const RuntimeMethod* method) 
{
	{
		// return;
		return;
	}
}
// System.Void BuglyAgent::AddKeyAndValueInScene(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_AddKeyAndValueInScene_mE95FBCC1A269D721E8D7FA33FF12512A85E66C9A (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	{
		// return;
		return;
	}
}
// System.Void BuglyAgent::AddExtraDataWithException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_AddExtraDataWithException_m5C8C9AB7BE45BB5AE3BB2A50278E0D4643FC03B7 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	{
		// return;
		return;
	}
}
// System.Void BuglyAgent::LogRecord(LogSeverity,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_LogRecord_m36FFD56A0C1CE12C9EFB4F0962781C4D19129F73 (int32_t ___0_level, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// return;
		return;
	}
}
// System.Int32 BuglyAgent::LogSeverityToInt(LogSeverity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BuglyAgent_LogSeverityToInt_m3241B100E299E3F0DA56347CD95F2459DACCEB8A (int32_t ___0_logLevel, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int level = 5;
		V_0 = 5;
		int32_t L_0 = ___0_logLevel;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_002e;
			}
			case 3:
			{
				goto IL_0032;
			}
			case 4:
			{
				goto IL_0032;
			}
			case 5:
			{
				goto IL_0036;
			}
			case 6:
			{
				goto IL_0036;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0026:
	{
		// level = 5;
		V_0 = 5;
		// break;
		goto IL_003c;
	}

IL_002a:
	{
		// level = 4;
		V_0 = 4;
		// break;
		goto IL_003c;
	}

IL_002e:
	{
		// level = 3;
		V_0 = 3;
		// break;
		goto IL_003c;
	}

IL_0032:
	{
		// level = 2;
		V_0 = 2;
		// break;
		goto IL_003c;
	}

IL_0036:
	{
		// level = 1;
		V_0 = 1;
		// break;
		goto IL_003c;
	}

IL_003a:
	{
		// level = 0;
		V_0 = 0;
	}

IL_003c:
	{
		// return level;
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void BuglyAgent::add__LogCallbackEventHandler(BuglyAgent/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_add__LogCallbackEventHandler_m0C2F1806E048C8449054F7F8A9323DB6D3550CE3 (LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* V_0 = NULL;
	LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* V_1 = NULL;
	LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_0 = ((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____LogCallbackEventHandler_1;
		V_0 = L_0;
	}

IL_0006:
	{
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_1 = V_0;
		V_1 = L_1;
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_2 = V_1;
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051*)CastclassSealed((RuntimeObject*)L_4, LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_5 = V_2;
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_6 = V_1;
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_7;
		L_7 = InterlockedCompareExchangeImpl<LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051*>((&((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____LogCallbackEventHandler_1), L_5, L_6);
		V_0 = L_7;
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_8 = V_0;
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_9 = V_1;
		if ((!(((RuntimeObject*)(LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051*)L_8) == ((RuntimeObject*)(LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void BuglyAgent::remove__LogCallbackEventHandler(BuglyAgent/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent_remove__LogCallbackEventHandler_m2E6AFEEAD6DF0178BFE9D3CA1C704D02CDF00183 (LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* V_0 = NULL;
	LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* V_1 = NULL;
	LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_0 = ((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____LogCallbackEventHandler_1;
		V_0 = L_0;
	}

IL_0006:
	{
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_1 = V_0;
		V_1 = L_1;
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_2 = V_1;
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051*)CastclassSealed((RuntimeObject*)L_4, LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_5 = V_2;
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_6 = V_1;
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_7;
		L_7 = InterlockedCompareExchangeImpl<LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051*>((&((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____LogCallbackEventHandler_1), L_5, L_6);
		V_0 = L_7;
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_8 = V_0;
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_9 = V_1;
		if ((!(((RuntimeObject*)(LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051*)L_8) == ((RuntimeObject*)(LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.String BuglyAgent::get_PluginVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BuglyAgent_get_PluginVersion_m33B07E1707E97317B6DDEC2ACC734221D1E41D3B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _pluginVersion; }
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		String_t* L_0 = ((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____pluginVersion_10;
		return L_0;
	}
}
// System.Boolean BuglyAgent::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuglyAgent_get_IsInitialized_mEB33E9C8761CF9D5A834692E4968276682E2CCE3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _isInitialized; }
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		bool L_0 = ((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____isInitialized_2;
		return L_0;
	}
}
// System.Boolean BuglyAgent::get_AutoQuitApplicationAfterReport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuglyAgent_get_AutoQuitApplicationAfterReport_m3CBFC46CA8F105155E58AF4717D104E038536235 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _autoQuitApplicationAfterReport; }
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		bool L_0 = ((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____autoQuitApplicationAfterReport_7;
		return L_0;
	}
}
// System.Void BuglyAgent::_SetCrashReporterType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent__SetCrashReporterType_m6060C86A7AF6A200941AD64A322CACE1C22EE7B5 (int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _crashReporterType = type;
		int32_t L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____crashReporterType_4 = L_0;
		// if (_crashReporterType == 2) {
		int32_t L_1 = ((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____crashReporterType_4;
		// }
		return;
	}
}
// System.Void BuglyAgent::_SetCrashReporterLogLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent__SetCrashReporterLogLevel_m088C5F79FAC9AE9C112D2B0E160B9A5AB9874265 (int32_t ___0_logLevel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _crashReproterCustomizedLogLevel = logLevel;
		int32_t L_0 = ___0_logLevel;
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____crashReproterCustomizedLogLevel_5 = L_0;
		// }
		return;
	}
}
// System.Void BuglyAgent::_RegisterExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent__RegisterExceptionHandler_m40A812DA439E04146D65FFBB5E6B79917CCA7B57 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent__OnLogCallbackHandler_m00534FE27A0A20B287895C1044F6AB6C3D45FB00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent__OnUncaughtExceptionHandler_m6B9B17C1E8095170D67BD1D3C2671691EFDAD119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA864B446F1D9E8734FE1D3782FF76AC3CDD0D80);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// Application.RegisterLogCallback (_OnLogCallbackHandler);
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, NULL, (intptr_t)((void*)BuglyAgent__OnLogCallbackHandler_m00534FE27A0A20B287895C1044F6AB6C3D45FB00_RuntimeMethod_var), NULL);
		Application_RegisterLogCallback_mE0FF6CCC29725C4B7FDA75AF48B8522A585335E6(L_0, NULL);
		// AppDomain.CurrentDomain.UnhandledException += _OnUncaughtExceptionHandler;
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_1;
		L_1 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* L_2 = (UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C*)il2cpp_codegen_object_new(UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnhandledExceptionEventHandler__ctor_m97305729C8FD4CB2370169FBEB8E4364A9EE803A(L_2, NULL, (intptr_t)((void*)BuglyAgent__OnUncaughtExceptionHandler_m6B9B17C1E8095170D67BD1D3C2671691EFDAD119_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AppDomain_add_UnhandledException_m14767641F2904E88E142CA76D4EAD955E67354C7(L_1, L_2, NULL);
		// _isInitialized = true;
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____isInitialized_2 = (bool)1;
		// DebugLog (null, "Register the log callback in Unity {0}", Application.unityVersion);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5;
		L_5 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		BuglyAgent_DebugLog_m170F70C6FA5CB475C609A555A9582E7AF15BCA38((String_t*)NULL, _stringLiteralBA864B446F1D9E8734FE1D3782FF76AC3CDD0D80, L_4, NULL);
		// } catch {
		goto IL_004b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0048;
		}
		throw e;
	}

CATCH_0048:
	{// begin catch(System.Object)
		RuntimeObject* L_6 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// } catch {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004b;
	}// end catch (depth: 1)

IL_004b:
	{
		// SetUnityVersion ();
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_SetUnityVersion_mDCA78ECE8E533C25733A118E1E5D849AD5AD8674(NULL);
		// }
		return;
	}
}
// System.Void BuglyAgent::_UnregisterExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent__UnregisterExceptionHandler_m309940503D55173748F0E7C005A1B63253C8E42A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent__OnUncaughtExceptionHandler_m6B9B17C1E8095170D67BD1D3C2671691EFDAD119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED91876C803CEA1470118E99633BA83CE06D3C8F);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// Application.RegisterLogCallback (null);
		Application_RegisterLogCallback_mE0FF6CCC29725C4B7FDA75AF48B8522A585335E6((LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)NULL, NULL);
		// System.AppDomain.CurrentDomain.UnhandledException -= _OnUncaughtExceptionHandler;
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_0;
		L_0 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* L_1 = (UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C*)il2cpp_codegen_object_new(UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnhandledExceptionEventHandler__ctor_m97305729C8FD4CB2370169FBEB8E4364A9EE803A(L_1, NULL, (intptr_t)((void*)BuglyAgent__OnUncaughtExceptionHandler_m6B9B17C1E8095170D67BD1D3C2671691EFDAD119_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		AppDomain_remove_UnhandledException_mB02B27A301E597F7F4D581ED6058E9DBA3F6EABA(L_0, L_1, NULL);
		// DebugLog (null, "Unregister the log callback in unity {0}", Application.unityVersion);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4;
		L_4 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_DebugLog_m170F70C6FA5CB475C609A555A9582E7AF15BCA38((String_t*)NULL, _stringLiteralED91876C803CEA1470118E99633BA83CE06D3C8F, L_3, NULL);
		// } catch {
		goto IL_003a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0037;
		}
		throw e;
	}

CATCH_0037:
	{// begin catch(System.Object)
		RuntimeObject* L_5 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// } catch {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003a;
	}// end catch (depth: 1)

IL_003a:
	{
		// }
		return;
	}
}
// System.Void BuglyAgent::_OnLogCallbackHandler(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent__OnLogCallbackHandler_m00534FE27A0A20B287895C1044F6AB6C3D45FB00 (String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95573C22D7D829D257E36C1A9BF4671C24ABEEF0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (_LogCallbackEventHandler != null) {
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_0 = ((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____LogCallbackEventHandler_1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// _LogCallbackEventHandler (condition, stackTrace, type);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* L_1 = ((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____LogCallbackEventHandler_1;
		String_t* L_2 = ___0_condition;
		String_t* L_3 = ___1_stackTrace;
		int32_t L_4 = ___2_type;
		NullCheck(L_1);
		LogCallbackDelegate_Invoke_mEB5AAF91D7C2110D65DE39A86C0CE5FD360C96C8_inline(L_1, L_2, L_3, L_4, NULL);
	}

IL_0014:
	{
		// if (!IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = BuglyAgent_get_IsInitialized_mEB33E9C8761CF9D5A834692E4968276682E2CCE3_inline(NULL);
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		return;
	}

IL_001c:
	{
		// if (!string.IsNullOrEmpty (condition) && condition.Contains ("[BuglyAgent] <Log>")) {
		String_t* L_6 = ___0_condition;
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_8 = ___0_condition;
		NullCheck(L_8);
		bool L_9;
		L_9 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_8, _stringLiteral95573C22D7D829D257E36C1A9BF4671C24ABEEF0, NULL);
		if (!L_9)
		{
			goto IL_0032;
		}
	}
	{
		// return;
		return;
	}

IL_0032:
	{
		// if (_uncaughtAutoReportOnce) {
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		bool L_10 = ((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____uncaughtAutoReportOnce_12;
		if (!L_10)
		{
			goto IL_003a;
		}
	}
	{
		// return;
		return;
	}

IL_003a:
	{
		// LogSeverity logLevel = LogSeverity.Log;
		V_0 = 0;
		int32_t L_11 = ___2_type;
		switch (L_11)
		{
			case 0:
			{
				goto IL_005c;
			}
			case 1:
			{
				goto IL_0060;
			}
			case 2:
			{
				goto IL_0064;
			}
			case 3:
			{
				goto IL_0068;
			}
			case 4:
			{
				goto IL_0058;
			}
		}
	}
	{
		goto IL_006a;
	}

IL_0058:
	{
		// logLevel = LogSeverity.LogException;
		V_0 = 6;
		// break;
		goto IL_006a;
	}

IL_005c:
	{
		// logLevel = LogSeverity.LogError;
		V_0 = 5;
		// break;
		goto IL_006a;
	}

IL_0060:
	{
		// logLevel = LogSeverity.LogAssert;
		V_0 = 4;
		// break;
		goto IL_006a;
	}

IL_0064:
	{
		// logLevel = LogSeverity.LogWarning;
		V_0 = 3;
		// break;
		goto IL_006a;
	}

IL_0068:
	{
		// logLevel = LogSeverity.LogDebug;
		V_0 = 1;
	}

IL_006a:
	{
		// if (LogSeverity.Log == logLevel) {
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_006e;
		}
	}
	{
		// return;
		return;
	}

IL_006e:
	{
		// _HandleException (logLevel, null, condition, stackTrace, true);
		int32_t L_13 = V_0;
		String_t* L_14 = ___0_condition;
		String_t* L_15 = ___1_stackTrace;
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent__HandleException_m695BDBFF74CE595A3CCFE040ACC8F0457B4CDFC0(L_13, (String_t*)NULL, L_14, L_15, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void BuglyAgent::_OnUncaughtExceptionHandler(System.Object,System.UnhandledExceptionEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent__OnUncaughtExceptionHandler_m6B9B17C1E8095170D67BD1D3C2671691EFDAD119 (RuntimeObject* ___0_sender, UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (args == null || args.ExceptionObject == null) {
		UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* L_1 = ___1_args;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_000c;
		}
	}

IL_000b:
	{
		// return;
		return;
	}

IL_000c:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (args.ExceptionObject.GetType () != typeof(System.Exception)) {
			UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* L_3 = ___1_args;
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline(L_3, NULL);
			NullCheck(L_4);
			Type_t* L_5;
			L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_4, NULL);
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Exception_t_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			bool L_8;
			L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_7, NULL);
			if (!L_8)
			{
				goto IL_002b_1;
			}
		}
		{
			// return;
			goto IL_0063;
		}

IL_002b_1:
		{
			// } catch {
			goto IL_0041;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002d;
		}
		throw e;
	}

CATCH_002d:
	{// begin catch(System.Object)
		{
			RuntimeObject* L_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			// } catch {
			// if (UnityEngine.Debug.isDebugBuild == true) {
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			bool L_10;
			L_10 = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(NULL);
			if (!L_10)
			{
				goto IL_003f;
			}
		}
		{
			// UnityEngine.Debug.Log ("BuglyAgent: Failed to report uncaught exception");
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD8A9B5362743ABE06123CCA0F1635705E67B425E)), NULL);
		}

IL_003f:
		{
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0063;
		}
	}// end catch (depth: 1)

IL_0041:
	{
		// if (!IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = BuglyAgent_get_IsInitialized_mEB33E9C8761CF9D5A834692E4968276682E2CCE3_inline(NULL);
		if (L_11)
		{
			goto IL_0049;
		}
	}
	{
		// return;
		return;
	}

IL_0049:
	{
		// if (_uncaughtAutoReportOnce) {
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		bool L_12 = ((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____uncaughtAutoReportOnce_12;
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		// return;
		return;
	}

IL_0051:
	{
		// _HandleException ((System.Exception)args.ExceptionObject, null, true);
		UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* L_13 = ___1_args;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent__HandleException_m71E86BAAD18ACC8F2DA4D27D79E19A5C8DC25328(((Exception_t*)CastclassClass((RuntimeObject*)L_14, Exception_t_il2cpp_TypeInfo_var)), (String_t*)NULL, (bool)1, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void BuglyAgent::_HandleException(System.Exception,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent__HandleException_m71E86BAAD18ACC8F2DA4D27D79E19A5C8DC25328 (Exception_t* ___0_e, String_t* ___1_message, bool ___2_uncaught, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25AEDA992D7226DC2D636B3995104E58322F52D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DE175241CD3F193AEBDE7A2D595059D3BB0DE3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FC877C2B8C8CB8BD4A186C7CCE90E96C49AEEDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31FBC5404CB0EC661C0FD0A79B8D2BC99441B373);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F2F1003AD681D270AFDD661A98E96EA8A697B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	StringBuilder_t* V_2 = NULL;
	StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* V_6 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_7 = NULL;
	String_t* V_8 = NULL;
	int32_t V_9 = 0;
	ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	{
		// if (e == null) {
		Exception_t* L_0 = ___0_e;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// if (!IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BuglyAgent_get_IsInitialized_mEB33E9C8761CF9D5A834692E4968276682E2CCE3_inline(NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		return;
	}

IL_000c:
	{
		// string name = e.GetType ().Name;
		Exception_t* L_2 = ___0_e;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		V_0 = L_4;
		// string reason = e.Message;
		Exception_t* L_5 = ___0_e;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_5);
		V_1 = L_6;
		// if (!string.IsNullOrEmpty (message)) {
		String_t* L_7 = ___1_message;
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		if (L_8)
		{
			goto IL_0039;
		}
	}
	{
		// reason = string.Format ("{0}{1}***{2}", reason, Environment.NewLine, message);
		String_t* L_9 = V_1;
		String_t* L_10;
		L_10 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		String_t* L_11 = ___1_message;
		String_t* L_12;
		L_12 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral2FC877C2B8C8CB8BD4A186C7CCE90E96C49AEEDD, L_9, L_10, L_11, NULL);
		V_1 = L_12;
	}

IL_0039:
	{
		// StringBuilder stackTraceBuilder = new StringBuilder ("");
		StringBuilder_t* L_13 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_13, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_2 = L_13;
		// StackTrace stackTrace = new StackTrace (e, true);
		Exception_t* L_14 = ___0_e;
		StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* L_15 = (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853*)il2cpp_codegen_object_new(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		StackTrace__ctor_m9BE489F499935CFA9AD4154B18A3AB35C52886DF(L_15, L_14, (bool)1, NULL);
		V_3 = L_15;
		// int count = stackTrace.FrameCount;
		StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* L_16 = V_3;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, L_16);
		V_4 = L_17;
		// for (int i = 0; i < count; i++) {
		V_5 = 0;
		goto IL_01bd;
	}

IL_005c:
	{
		// StackFrame frame = stackTrace.GetFrame (i);
		StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* L_18 = V_3;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_20;
		L_20 = VirtualFuncInvoker1< StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443*, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_18, L_19);
		V_6 = L_20;
		// stackTraceBuilder.AppendFormat ("{0}.{1}", frame.GetMethod ().DeclaringType.Name, frame.GetMethod ().Name);
		StringBuilder_t* L_21 = V_2;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_22 = V_6;
		NullCheck(L_22);
		MethodBase_t* L_23;
		L_23 = VirtualFuncInvoker0< MethodBase_t* >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_22);
		NullCheck(L_23);
		Type_t* L_24;
		L_24 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_23);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_24);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_26 = V_6;
		NullCheck(L_26);
		MethodBase_t* L_27;
		L_27 = VirtualFuncInvoker0< MethodBase_t* >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_26);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_27);
		NullCheck(L_21);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_21, _stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539, L_25, L_28, NULL);
		// ParameterInfo[] parameters = frame.GetMethod ().GetParameters ();
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_30 = V_6;
		NullCheck(L_30);
		MethodBase_t* L_31;
		L_31 = VirtualFuncInvoker0< MethodBase_t* >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_30);
		NullCheck(L_31);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_32;
		L_32 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_31);
		V_7 = L_32;
		// if (parameters == null || parameters.Length == 0) {
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_33 = V_7;
		if (!L_33)
		{
			goto IL_00a6;
		}
	}
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_34 = V_7;
		NullCheck(L_34);
		if ((((RuntimeArray*)L_34)->max_length))
		{
			goto IL_00b4;
		}
	}

IL_00a6:
	{
		// stackTraceBuilder.Append (" () ");
		StringBuilder_t* L_35 = V_2;
		NullCheck(L_35);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_35, _stringLiteral2DE175241CD3F193AEBDE7A2D595059D3BB0DE3E, NULL);
		goto IL_0123;
	}

IL_00b4:
	{
		// stackTraceBuilder.Append (" (");
		StringBuilder_t* L_37 = V_2;
		NullCheck(L_37);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_37, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32, NULL);
		// int pcount = parameters.Length;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_39 = V_7;
		NullCheck(L_39);
		V_9 = ((int32_t)(((RuntimeArray*)L_39)->max_length));
		// ParameterInfo param = null;
		V_10 = (ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F*)NULL;
		// for (int p = 0; p < pcount; p++) {
		V_11 = 0;
		goto IL_010e;
	}

IL_00ce:
	{
		// param = parameters [p];
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_40 = V_7;
		int32_t L_41 = V_11;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_10 = L_43;
		// stackTraceBuilder.AppendFormat ("{0} {1}", param.ParameterType.Name, param.Name);
		StringBuilder_t* L_44 = V_2;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_45 = V_10;
		NullCheck(L_45);
		Type_t* L_46;
		L_46 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_45);
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_46);
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_48 = V_10;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_48);
		NullCheck(L_44);
		StringBuilder_t* L_50;
		L_50 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_44, _stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E, L_47, L_49, NULL);
		// if (p != pcount - 1) {
		int32_t L_51 = V_11;
		int32_t L_52 = V_9;
		if ((((int32_t)L_51) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_52, 1)))))
		{
			goto IL_0108;
		}
	}
	{
		// stackTraceBuilder.Append (", ");
		StringBuilder_t* L_53 = V_2;
		NullCheck(L_53);
		StringBuilder_t* L_54;
		L_54 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_53, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0108:
	{
		// for (int p = 0; p < pcount; p++) {
		int32_t L_55 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_010e:
	{
		// for (int p = 0; p < pcount; p++) {
		int32_t L_56 = V_11;
		int32_t L_57 = V_9;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_00ce;
		}
	}
	{
		// param = null;
		V_10 = (ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F*)NULL;
		// stackTraceBuilder.Append (") ");
		StringBuilder_t* L_58 = V_2;
		NullCheck(L_58);
		StringBuilder_t* L_59;
		L_59 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_58, _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924, NULL);
	}

IL_0123:
	{
		// string fileName = frame.GetFileName ();
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_60 = V_6;
		NullCheck(L_60);
		String_t* L_61;
		L_61 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_60);
		V_8 = L_61;
		// if (!string.IsNullOrEmpty (fileName) && !fileName.ToLower ().Equals ("unknown")) {
		String_t* L_62 = V_8;
		bool L_63;
		L_63 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_62, NULL);
		if (L_63)
		{
			goto IL_01b0;
		}
	}
	{
		String_t* L_64 = V_8;
		NullCheck(L_64);
		String_t* L_65;
		L_65 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_64, NULL);
		NullCheck(L_65);
		bool L_66;
		L_66 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_65, _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968, NULL);
		if (L_66)
		{
			goto IL_01b0;
		}
	}
	{
		// fileName = fileName.Replace ("\\", "/");
		String_t* L_67 = V_8;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_67, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		V_8 = L_68;
		// int loc = fileName.ToLower ().IndexOf ("/assets/");
		String_t* L_69 = V_8;
		NullCheck(L_69);
		String_t* L_70;
		L_70 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_69, NULL);
		NullCheck(L_70);
		int32_t L_71;
		L_71 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_70, _stringLiteral31FBC5404CB0EC661C0FD0A79B8D2BC99441B373, NULL);
		V_12 = L_71;
		// if (loc < 0) {
		int32_t L_72 = V_12;
		if ((((int32_t)L_72) >= ((int32_t)0)))
		{
			goto IL_0186;
		}
	}
	{
		// loc = fileName.ToLower ().IndexOf ("assets/");
		String_t* L_73 = V_8;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_73, NULL);
		NullCheck(L_74);
		int32_t L_75;
		L_75 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_74, _stringLiteral9F2F1003AD681D270AFDD661A98E96EA8A697B9F, NULL);
		V_12 = L_75;
	}

IL_0186:
	{
		// if (loc > 0) {
		int32_t L_76 = V_12;
		if ((((int32_t)L_76) <= ((int32_t)0)))
		{
			goto IL_0196;
		}
	}
	{
		// fileName = fileName.Substring (loc);
		String_t* L_77 = V_8;
		int32_t L_78 = V_12;
		NullCheck(L_77);
		String_t* L_79;
		L_79 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_77, L_78, NULL);
		V_8 = L_79;
	}

IL_0196:
	{
		// stackTraceBuilder.AppendFormat ("(at {0}:{1})", fileName, frame.GetFileLineNumber ());
		StringBuilder_t* L_80 = V_2;
		String_t* L_81 = V_8;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_82 = V_6;
		NullCheck(L_82);
		int32_t L_83;
		L_83 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_82);
		int32_t L_84 = L_83;
		RuntimeObject* L_85 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_84);
		NullCheck(L_80);
		StringBuilder_t* L_86;
		L_86 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_80, _stringLiteral25AEDA992D7226DC2D636B3995104E58322F52D5, L_81, L_85, NULL);
	}

IL_01b0:
	{
		// stackTraceBuilder.AppendLine ();
		StringBuilder_t* L_87 = V_2;
		NullCheck(L_87);
		StringBuilder_t* L_88;
		L_88 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_87, NULL);
		// for (int i = 0; i < count; i++) {
		int32_t L_89 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01bd:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_90 = V_5;
		int32_t L_91 = V_4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_005c;
		}
	}
	{
		// _reportException (uncaught, name, reason, stackTraceBuilder.ToString ());
		bool L_92 = ___2_uncaught;
		String_t* L_93 = V_0;
		String_t* L_94 = V_1;
		StringBuilder_t* L_95 = V_2;
		NullCheck(L_95);
		String_t* L_96;
		L_96 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_95);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent__reportException_m31F7835A102154C7F210174EABD3E3CEA0896512(L_92, L_93, L_94, L_96, NULL);
		// }
		return;
	}
}
// System.Void BuglyAgent::_reportException(System.Boolean,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent__reportException_m31F7835A102154C7F210174EABD3E3CEA0896512 (bool ___0_uncaught, String_t* ___1_name, String_t* ___2_reason, String_t* ___3_stackTrace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceUtility_t5C5AAD64E1074311E4831F275A817B231324C366_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral130AFE02856FF5A0277CB75295864F209EA2D102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31FBC5404CB0EC661C0FD0A79B8D2BC99441B373);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326EC1779DF2A38F8AF7B8823A103084F9BDCF4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4103F632AE3883CE65740E10B5320832AFA26FCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4808ACA9668728D6BBF49150A76132057225944C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56C59749732F13B10E597964D8BC3F7B8B1C4A39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC188999EFFCB7939F9B4DEB8CFD74F0FACDF6EFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE47C281292FF54C2EC2B02EEDC33FCD74B0A4D03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B29_0 = 0;
	int32_t G_B32_0 = 0;
	String_t* G_B34_0 = NULL;
	String_t* G_B34_1 = NULL;
	String_t* G_B34_2 = NULL;
	int32_t G_B34_3 = 0;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	String_t* G_B33_2 = NULL;
	int32_t G_B33_3 = 0;
	int32_t G_B35_0 = 0;
	String_t* G_B35_1 = NULL;
	String_t* G_B35_2 = NULL;
	String_t* G_B35_3 = NULL;
	int32_t G_B35_4 = 0;
	{
		// if (string.IsNullOrEmpty (name)) {
		String_t* L_0 = ___1_name;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
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
		// if (string.IsNullOrEmpty (stackTrace)) {
		String_t* L_2 = ___3_stackTrace;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// stackTrace = StackTraceUtility.ExtractStackTrace ();
		il2cpp_codegen_runtime_class_init_inline(StackTraceUtility_t5C5AAD64E1074311E4831F275A817B231324C366_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = StackTraceUtility_ExtractStackTrace_mFDB05BC4CA207364FFC93F44E29F35A271DF5200(NULL);
		___3_stackTrace = L_4;
	}

IL_0018:
	{
		// if (string.IsNullOrEmpty (stackTrace)) {
		String_t* L_5 = ___3_stackTrace;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		// stackTrace = "Empty";
		___3_stackTrace = _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407;
		goto IL_016a;
	}

IL_002c:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// string[] frames = stackTrace.Split ('\n');
			String_t* L_7 = ___3_stackTrace;
			NullCheck(L_7);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8;
			L_8 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_7, ((int32_t)10), 0, NULL);
			V_0 = L_8;
			// if (frames != null && frames.Length > 0) {
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_0;
			if (!L_9)
			{
				goto IL_014c_1;
			}
		}
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_0;
			NullCheck(L_10);
			if (!(((RuntimeArray*)L_10)->max_length))
			{
				goto IL_014c_1;
			}
		}
		{
			// StringBuilder trimFrameBuilder = new StringBuilder ();
			StringBuilder_t* L_11 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
			NullCheck(L_11);
			StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_11, NULL);
			V_1 = L_11;
			// string frame = null;
			V_2 = (String_t*)NULL;
			// int count = frames.Length;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_0;
			NullCheck(L_12);
			V_3 = ((int32_t)(((RuntimeArray*)L_12)->max_length));
			// for (int i = 0; i < count; i++) {
			V_4 = 0;
			goto IL_013c_1;
		}

IL_0058_1:
		{
			// frame = frames [i];
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_0;
			int32_t L_14 = V_4;
			NullCheck(L_13);
			int32_t L_15 = L_14;
			String_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
			V_2 = L_16;
			// if (string.IsNullOrEmpty (frame) || string.IsNullOrEmpty (frame.Trim ())) {
			String_t* L_17 = V_2;
			bool L_18;
			L_18 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_17, NULL);
			if (L_18)
			{
				goto IL_0136_1;
			}
		}
		{
			String_t* L_19 = V_2;
			NullCheck(L_19);
			String_t* L_20;
			L_20 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_19, NULL);
			bool L_21;
			L_21 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_20, NULL);
			if (L_21)
			{
				goto IL_0136_1;
			}
		}
		{
			// frame = frame.Trim ();
			String_t* L_22 = V_2;
			NullCheck(L_22);
			String_t* L_23;
			L_23 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_22, NULL);
			V_2 = L_23;
			// if (frame.StartsWith ("System.Collections.Generic.") || frame.StartsWith ("ShimEnumerator")) {
			String_t* L_24 = V_2;
			NullCheck(L_24);
			bool L_25;
			L_25 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_24, _stringLiteral326EC1779DF2A38F8AF7B8823A103084F9BDCF4B, NULL);
			if (L_25)
			{
				goto IL_0136_1;
			}
		}
		{
			String_t* L_26 = V_2;
			NullCheck(L_26);
			bool L_27;
			L_27 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_26, _stringLiteralC188999EFFCB7939F9B4DEB8CFD74F0FACDF6EFF, NULL);
			if (L_27)
			{
				goto IL_0136_1;
			}
		}
		{
			// if (frame.StartsWith ("Bugly")) {
			String_t* L_28 = V_2;
			NullCheck(L_28);
			bool L_29;
			L_29 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_28, _stringLiteralE47C281292FF54C2EC2B02EEDC33FCD74B0A4D03, NULL);
			if (L_29)
			{
				goto IL_0136_1;
			}
		}
		{
			// if (frame.Contains ("..ctor")) {
			String_t* L_30 = V_2;
			NullCheck(L_30);
			bool L_31;
			L_31 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_30, _stringLiteral130AFE02856FF5A0277CB75295864F209EA2D102, NULL);
			if (L_31)
			{
				goto IL_0136_1;
			}
		}
		{
			// int start = frame.ToLower ().IndexOf ("(at");
			String_t* L_32 = V_2;
			NullCheck(L_32);
			String_t* L_33;
			L_33 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_32, NULL);
			NullCheck(L_33);
			int32_t L_34;
			L_34 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_33, _stringLiteral4808ACA9668728D6BBF49150A76132057225944C, NULL);
			V_5 = L_34;
			// int end = frame.ToLower ().IndexOf ("/assets/");
			String_t* L_35 = V_2;
			NullCheck(L_35);
			String_t* L_36;
			L_36 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_35, NULL);
			NullCheck(L_36);
			int32_t L_37;
			L_37 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_36, _stringLiteral31FBC5404CB0EC661C0FD0A79B8D2BC99441B373, NULL);
			V_6 = L_37;
			// if (start > 0 && end > 0) {
			int32_t L_38 = V_5;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_0118_1;
			}
		}
		{
			int32_t L_39 = V_6;
			if ((((int32_t)L_39) <= ((int32_t)0)))
			{
				goto IL_0118_1;
			}
		}
		{
			// trimFrameBuilder.AppendFormat ("{0}(at {1}", frame.Substring (0, start).Replace (":", "."), frame.Substring (end));
			StringBuilder_t* L_40 = V_1;
			String_t* L_41 = V_2;
			int32_t L_42 = V_5;
			NullCheck(L_41);
			String_t* L_43;
			L_43 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_41, 0, L_42, NULL);
			NullCheck(L_43);
			String_t* L_44;
			L_44 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_43, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
			String_t* L_45 = V_2;
			int32_t L_46 = V_6;
			NullCheck(L_45);
			String_t* L_47;
			L_47 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_45, L_46, NULL);
			NullCheck(L_40);
			StringBuilder_t* L_48;
			L_48 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_40, _stringLiteral4103F632AE3883CE65740E10B5320832AFA26FCF, L_44, L_47, NULL);
			goto IL_012f_1;
		}

IL_0118_1:
		{
			// trimFrameBuilder.Append (frame.Replace (":", "."));
			StringBuilder_t* L_49 = V_1;
			String_t* L_50 = V_2;
			NullCheck(L_50);
			String_t* L_51;
			L_51 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_50, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
			NullCheck(L_49);
			StringBuilder_t* L_52;
			L_52 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_49, L_51, NULL);
		}

IL_012f_1:
		{
			// trimFrameBuilder.AppendLine ();
			StringBuilder_t* L_53 = V_1;
			NullCheck(L_53);
			StringBuilder_t* L_54;
			L_54 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_53, NULL);
		}

IL_0136_1:
		{
			// for (int i = 0; i < count; i++) {
			int32_t L_55 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		}

IL_013c_1:
		{
			// for (int i = 0; i < count; i++) {
			int32_t L_56 = V_4;
			int32_t L_57 = V_3;
			if ((((int32_t)L_56) < ((int32_t)L_57)))
			{
				goto IL_0058_1;
			}
		}
		{
			// stackTrace = trimFrameBuilder.ToString ();
			StringBuilder_t* L_58 = V_1;
			NullCheck(L_58);
			String_t* L_59;
			L_59 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_58);
			___3_stackTrace = L_59;
		}

IL_014c_1:
		{
			// } catch {
			goto IL_016a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_014e;
		}
		throw e;
	}

CATCH_014e:
	{// begin catch(System.Object)
		RuntimeObject* L_60 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// } catch {
		// PrintLog(LogSeverity.LogWarning,"{0}", "Error to parse the stack trace");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_61 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_62 = L_61;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral86DC3F12E9B43F86F05FCBCB272F69EC36B69290)));
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral86DC3F12E9B43F86F05FCBCB272F69EC36B69290)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var)));
		BuglyAgent_PrintLog_m4BE095DAD2A0DA539CC5FF0886CA36C4D4746D20(3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94)), L_62, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_016a;
	}// end catch (depth: 1)

IL_016a:
	{
		// PrintLog (LogSeverity.LogError, "ReportException: {0} {1}\n*********\n{2}\n*********", name, reason, stackTrace);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_63 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = L_63;
		String_t* L_65 = ___1_name;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_65);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_65);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_66 = L_64;
		String_t* L_67 = ___2_reason;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_67);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_67);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_68 = L_66;
		String_t* L_69 = ___3_stackTrace;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_69);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_69);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_PrintLog_m4BE095DAD2A0DA539CC5FF0886CA36C4D4746D20(5, _stringLiteral56C59749732F13B10E597964D8BC3F7B8B1C4A39, L_68, NULL);
		// _uncaughtAutoReportOnce = uncaught && _autoQuitApplicationAfterReport;
		bool L_70 = ___0_uncaught;
		if (!L_70)
		{
			goto IL_0191;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		bool L_71 = ((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____autoQuitApplicationAfterReport_7;
		G_B29_0 = ((int32_t)(L_71));
		goto IL_0192;
	}

IL_0191:
	{
		G_B29_0 = 0;
	}

IL_0192:
	{
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____uncaughtAutoReportOnce_12 = (bool)G_B29_0;
		// ReportException (uncaught ? EXCEPTION_TYPE_UNCAUGHT : EXCEPTION_TYPE_CAUGHT, name, reason, stackTrace, uncaught && _autoQuitApplicationAfterReport);
		bool L_72 = ___0_uncaught;
		if (L_72)
		{
			goto IL_01a1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		int32_t L_73 = ((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->___EXCEPTION_TYPE_CAUGHT_9;
		G_B32_0 = L_73;
		goto IL_01a6;
	}

IL_01a1:
	{
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		int32_t L_74 = ((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->___EXCEPTION_TYPE_UNCAUGHT_8;
		G_B32_0 = L_74;
	}

IL_01a6:
	{
		String_t* L_75 = ___1_name;
		String_t* L_76 = ___2_reason;
		String_t* L_77 = ___3_stackTrace;
		bool L_78 = ___0_uncaught;
		G_B33_0 = L_77;
		G_B33_1 = L_76;
		G_B33_2 = L_75;
		G_B33_3 = G_B32_0;
		if (!L_78)
		{
			G_B34_0 = L_77;
			G_B34_1 = L_76;
			G_B34_2 = L_75;
			G_B34_3 = G_B32_0;
			goto IL_01b3;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		bool L_79 = ((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____autoQuitApplicationAfterReport_7;
		G_B35_0 = ((int32_t)(L_79));
		G_B35_1 = G_B33_0;
		G_B35_2 = G_B33_1;
		G_B35_3 = G_B33_2;
		G_B35_4 = G_B33_3;
		goto IL_01b4;
	}

IL_01b3:
	{
		G_B35_0 = 0;
		G_B35_1 = G_B34_0;
		G_B35_2 = G_B34_1;
		G_B35_3 = G_B34_2;
		G_B35_4 = G_B34_3;
	}

IL_01b4:
	{
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_ReportException_mC207F0A9773F5D669C8DF23D2428D8CD7A744D83(G_B35_4, G_B35_3, G_B35_2, G_B35_1, (bool)G_B35_0, NULL);
		// }
		return;
	}
}
// System.Void BuglyAgent::_HandleException(LogSeverity,System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent__HandleException_m695BDBFF74CE595A3CCFE040ACC8F0457B4CDFC0 (int32_t ___0_logLevel, String_t* ___1_name, String_t* ___2_message, String_t* ___3_stackTrace, bool ___4_uncaught, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogSeverity_tDFF14151862ADE8249E4A0517B70F4F94907FDE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0872570ECA17D286446A8F9DCBEAD11C9AC362AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DE1E906F1FC76998185695007FB138A32E707D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38A6ACF9046399DC1DBD18C1FD3F8B8B0E4FC440);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50EBD3550C224C67E20E5749AFA6A2C221D5AED7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57A5B9F3116ECBC21D1419A60997CB549020FC53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral669F15A84AF7656AD4522C599D67132E9745C548);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A188EC67B22CF9E09D96F3638F8CCA13FB51DB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E571100EBB444DF5BCE485719D2C592256FE1C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral822B496EE7630A0562263AF42972445ECA49F024);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88E99AFA872C3627CA43783D04308160912C2DA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89AE291F5A895AE349B8E0FC91AC6C2EAE546051);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92354AFCE308AF1E2F60CBB79B54D8373AFE120E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA22D570E6C4A129777FCFB302C12DD9C8F5BA43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADF4CBFD67BD882C8FBC1FD6DA7AF5D413843C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAC2CD1C0497556A9CCD298CC5640CBCA4B3A88E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCD538BCDD7CC104808AFF7B53C5DF923978F284);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44B6A8CFCBCCA882D30DABC08872C044BD78C58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8235FE403BAB44634519FA4D2B9135A19A0C45D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_2 = NULL;
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	String_t* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (!IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BuglyAgent_get_IsInitialized_mEB33E9C8761CF9D5A834692E4968276682E2CCE3_inline(NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// DebugLog (null, "It has not been initialized.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_DebugLog_m170F70C6FA5CB475C609A555A9582E7AF15BCA38((String_t*)NULL, _stringLiteralD8235FE403BAB44634519FA4D2B9135A19A0C45D, L_1, NULL);
		// return;
		return;
	}

IL_0018:
	{
		// if (logLevel == LogSeverity.Log) {
		int32_t L_2 = ___0_logLevel;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		return;
	}

IL_001c:
	{
		// if ((uncaught && logLevel < _autoReportLogLevel)) {
		bool L_3 = ___4_uncaught;
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_4 = ___0_logLevel;
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____autoReportLogLevel_3;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_004a;
		}
	}
	{
		// DebugLog (null, "Not report exception for level {0}", logLevel.ToString ());
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		Il2CppFakeBox<int32_t> L_8(LogSeverity_tDFF14151862ADE8249E4A0517B70F4F94907FDE1_il2cpp_TypeInfo_var, (&___0_logLevel));
		String_t* L_9;
		L_9 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_DebugLog_m170F70C6FA5CB475C609A555A9582E7AF15BCA38((String_t*)NULL, _stringLiteralD44B6A8CFCBCCA882D30DABC08872C044BD78C58, L_7, NULL);
		// return;
		return;
	}

IL_004a:
	{
		// string type = null;
		V_0 = (String_t*)NULL;
		// string reason = null;
		V_1 = (String_t*)NULL;
		// if (!string.IsNullOrEmpty (message)) {
		String_t* L_10 = ___2_message;
		bool L_11;
		L_11 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_10, NULL);
		if (L_11)
		{
			goto IL_0257;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// if ((LogSeverity.LogException == logLevel) && message.Contains ("Exception")) {
			int32_t L_12 = ___0_logLevel;
			if ((!(((uint32_t)6) == ((uint32_t)L_12))))
			{
				goto IL_00c3_1;
			}
		}
		{
			String_t* L_13 = ___2_message;
			NullCheck(L_13);
			bool L_14;
			L_14 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_13, _stringLiteral57A5B9F3116ECBC21D1419A60997CB549020FC53, NULL);
			if (!L_14)
			{
				goto IL_00c3_1;
			}
		}
		{
			// Match match = new Regex (@"^(?<errorType>\S+):\s*(?<errorMessage>.*)", RegexOptions.Singleline).Match (message);
			Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_15 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
			NullCheck(L_15);
			Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_15, _stringLiteral50EBD3550C224C67E20E5749AFA6A2C221D5AED7, ((int32_t)16), NULL);
			String_t* L_16 = ___2_message;
			NullCheck(L_15);
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_17;
			L_17 = Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84(L_15, L_16, NULL);
			V_2 = L_17;
			// if (match.Success) {
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_18 = V_2;
			NullCheck(L_18);
			bool L_19;
			L_19 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_18, NULL);
			if (!L_19)
			{
				goto IL_0248_1;
			}
		}
		{
			// type = match.Groups ["errorType"].Value.Trim();
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_20 = V_2;
			NullCheck(L_20);
			GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_21;
			L_21 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_20);
			NullCheck(L_21);
			Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_22;
			L_22 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_21, _stringLiteralBAC2CD1C0497556A9CCD298CC5640CBCA4B3A88E, NULL);
			NullCheck(L_22);
			String_t* L_23;
			L_23 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_22, NULL);
			NullCheck(L_23);
			String_t* L_24;
			L_24 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_23, NULL);
			V_0 = L_24;
			// reason = match.Groups ["errorMessage"].Value.Trim ();
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_25 = V_2;
			NullCheck(L_25);
			GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_26;
			L_26 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_25);
			NullCheck(L_26);
			Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_27;
			L_27 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_26, _stringLiteral23DE1E906F1FC76998185695007FB138A32E707D, NULL);
			NullCheck(L_27);
			String_t* L_28;
			L_28 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_27, NULL);
			NullCheck(L_28);
			String_t* L_29;
			L_29 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_28, NULL);
			V_1 = L_29;
			goto IL_0248_1;
		}

IL_00c3_1:
		{
			// } else if ((LogSeverity.LogError == logLevel) && message.StartsWith ("Unhandled Exception:")) {
			int32_t L_30 = ___0_logLevel;
			if ((!(((uint32_t)5) == ((uint32_t)L_30))))
			{
				goto IL_0248_1;
			}
		}
		{
			String_t* L_31 = ___2_message;
			NullCheck(L_31);
			bool L_32;
			L_32 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_31, _stringLiteral669F15A84AF7656AD4522C599D67132E9745C548, NULL);
			if (!L_32)
			{
				goto IL_0248_1;
			}
		}
		{
			// Match match = new Regex (@"^Unhandled\s+Exception:\s*(?<exceptionName>\S+):\s*(?<exceptionDetail>.*)", RegexOptions.Singleline).Match(message);
			Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_33 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
			NullCheck(L_33);
			Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_33, _stringLiteralADF4CBFD67BD882C8FBC1FD6DA7AF5D413843C30, ((int32_t)16), NULL);
			String_t* L_34 = ___2_message;
			NullCheck(L_33);
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_35;
			L_35 = Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84(L_33, L_34, NULL);
			V_3 = L_35;
			// if (match.Success) {
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_36 = V_3;
			NullCheck(L_36);
			bool L_37;
			L_37 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_36, NULL);
			if (!L_37)
			{
				goto IL_0248_1;
			}
		}
		{
			// string exceptionName = match.Groups ["exceptionName"].Value.Trim();
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_38 = V_3;
			NullCheck(L_38);
			GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_39;
			L_39 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_38);
			NullCheck(L_39);
			Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_40;
			L_40 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_39, _stringLiteral822B496EE7630A0562263AF42972445ECA49F024, NULL);
			NullCheck(L_40);
			String_t* L_41;
			L_41 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_40, NULL);
			NullCheck(L_41);
			String_t* L_42;
			L_42 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_41, NULL);
			V_4 = L_42;
			// string exceptionDetail = match.Groups ["exceptionDetail"].Value.Trim ();
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_43 = V_3;
			NullCheck(L_43);
			GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_44;
			L_44 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_43);
			NullCheck(L_44);
			Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_45;
			L_45 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_44, _stringLiteral6A188EC67B22CF9E09D96F3638F8CCA13FB51DB5, NULL);
			NullCheck(L_45);
			String_t* L_46;
			L_46 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_45, NULL);
			NullCheck(L_46);
			String_t* L_47;
			L_47 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_46, NULL);
			V_5 = L_47;
			// int dotLocation = exceptionName.LastIndexOf(".");
			String_t* L_48 = V_4;
			NullCheck(L_48);
			int32_t L_49;
			L_49 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_48, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
			V_6 = L_49;
			// if (dotLocation > 0 && dotLocation != exceptionName.Length) {
			int32_t L_50 = V_6;
			if ((((int32_t)L_50) <= ((int32_t)0)))
			{
				goto IL_015c_1;
			}
		}
		{
			int32_t L_51 = V_6;
			String_t* L_52 = V_4;
			NullCheck(L_52);
			int32_t L_53;
			L_53 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_52, NULL);
			if ((((int32_t)L_51) == ((int32_t)L_53)))
			{
				goto IL_015c_1;
			}
		}
		{
			// type = exceptionName.Substring(dotLocation + 1);
			String_t* L_54 = V_4;
			int32_t L_55 = V_6;
			NullCheck(L_54);
			String_t* L_56;
			L_56 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_54, ((int32_t)il2cpp_codegen_add(L_55, 1)), NULL);
			V_0 = L_56;
			goto IL_015f_1;
		}

IL_015c_1:
		{
			// type = exceptionName;
			String_t* L_57 = V_4;
			V_0 = L_57;
		}

IL_015f_1:
		{
			// int stackLocation = exceptionDetail.IndexOf(" at ");
			String_t* L_58 = V_5;
			NullCheck(L_58);
			int32_t L_59;
			L_59 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_58, _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1, NULL);
			V_7 = L_59;
			// if (stackLocation > 0) {
			int32_t L_60 = V_7;
			if ((((int32_t)L_60) <= ((int32_t)0)))
			{
				goto IL_01cd_1;
			}
		}
		{
			// reason = exceptionDetail.Substring(0, stackLocation);
			String_t* L_61 = V_5;
			int32_t L_62 = V_7;
			NullCheck(L_61);
			String_t* L_63;
			L_63 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_61, 0, L_62, NULL);
			V_1 = L_63;
			// string callStacks = exceptionDetail.Substring(stackLocation + 3).Replace(" at ", "\n").Replace("in <filename unknown>:0","").Replace("[0x00000]","");
			String_t* L_64 = V_5;
			int32_t L_65 = V_7;
			NullCheck(L_64);
			String_t* L_66;
			L_66 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_64, ((int32_t)il2cpp_codegen_add(L_65, 3)), NULL);
			NullCheck(L_66);
			String_t* L_67;
			L_67 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_66, _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
			NullCheck(L_67);
			String_t* L_68;
			L_68 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_67, _stringLiteral0872570ECA17D286446A8F9DCBEAD11C9AC362AD, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
			NullCheck(L_68);
			String_t* L_69;
			L_69 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_68, _stringLiteral88E99AFA872C3627CA43783D04308160912C2DA4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
			V_8 = L_69;
			// stackTrace = string.Format("{0}\n{1}", stackTrace, callStacks.Trim());
			String_t* L_70 = ___3_stackTrace;
			String_t* L_71 = V_8;
			NullCheck(L_71);
			String_t* L_72;
			L_72 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_71, NULL);
			String_t* L_73;
			L_73 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralAA22D570E6C4A129777FCFB302C12DD9C8F5BA43, L_70, L_72, NULL);
			___3_stackTrace = L_73;
			goto IL_01d0_1;
		}

IL_01cd_1:
		{
			// reason = exceptionDetail;
			String_t* L_74 = V_5;
			V_1 = L_74;
		}

IL_01d0_1:
		{
			// if(type.Equals("LuaScriptException") && exceptionDetail.Contains(".lua") && exceptionDetail.Contains("stack traceback:")) {
			String_t* L_75 = V_0;
			NullCheck(L_75);
			bool L_76;
			L_76 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_75, _stringLiteralBCD538BCDD7CC104808AFF7B53C5DF923978F284, NULL);
			if (!L_76)
			{
				goto IL_0248_1;
			}
		}
		{
			String_t* L_77 = V_5;
			NullCheck(L_77);
			bool L_78;
			L_78 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_77, _stringLiteral89AE291F5A895AE349B8E0FC91AC6C2EAE546051, NULL);
			if (!L_78)
			{
				goto IL_0248_1;
			}
		}
		{
			String_t* L_79 = V_5;
			NullCheck(L_79);
			bool L_80;
			L_80 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_79, _stringLiteral38A6ACF9046399DC1DBD18C1FD3F8B8B0E4FC440, NULL);
			if (!L_80)
			{
				goto IL_0248_1;
			}
		}
		{
			// stackLocation = exceptionDetail.IndexOf("stack traceback:");
			String_t* L_81 = V_5;
			NullCheck(L_81);
			int32_t L_82;
			L_82 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_81, _stringLiteral38A6ACF9046399DC1DBD18C1FD3F8B8B0E4FC440, NULL);
			V_7 = L_82;
			// if(stackLocation > 0) {
			int32_t L_83 = V_7;
			if ((((int32_t)L_83) <= ((int32_t)0)))
			{
				goto IL_0248_1;
			}
		}
		{
			// reason = exceptionDetail.Substring(0, stackLocation);
			String_t* L_84 = V_5;
			int32_t L_85 = V_7;
			NullCheck(L_84);
			String_t* L_86;
			L_86 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_84, 0, L_85, NULL);
			V_1 = L_86;
			// string callStacks = exceptionDetail.Substring(stackLocation + 16).Replace(" [", " \n[");
			String_t* L_87 = V_5;
			int32_t L_88 = V_7;
			NullCheck(L_87);
			String_t* L_89;
			L_89 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)16))), NULL);
			NullCheck(L_89);
			String_t* L_90;
			L_90 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_89, _stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5, _stringLiteral6E571100EBB444DF5BCE485719D2C592256FE1C4, NULL);
			V_9 = L_90;
			// stackTrace = string.Format("{0}\n{1}", stackTrace, callStacks.Trim());
			String_t* L_91 = ___3_stackTrace;
			String_t* L_92 = V_9;
			NullCheck(L_92);
			String_t* L_93;
			L_93 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_92, NULL);
			String_t* L_94;
			L_94 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralAA22D570E6C4A129777FCFB302C12DD9C8F5BA43, L_91, L_93, NULL);
			___3_stackTrace = L_94;
		}

IL_0248_1:
		{
			// } catch {
			goto IL_024d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_024a;
		}
		throw e;
	}

CATCH_024a:
	{// begin catch(System.Object)
		RuntimeObject* L_95 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// } catch {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_024d;
	}// end catch (depth: 1)

IL_024d:
	{
		// if (string.IsNullOrEmpty (reason)) {
		String_t* L_96 = V_1;
		bool L_97;
		L_97 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_96, NULL);
		if (!L_97)
		{
			goto IL_0257;
		}
	}
	{
		// reason = message;
		String_t* L_98 = ___2_message;
		V_1 = L_98;
	}

IL_0257:
	{
		// if (string.IsNullOrEmpty (name)) {
		String_t* L_99 = ___1_name;
		bool L_100;
		L_100 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_99, NULL);
		if (!L_100)
		{
			goto IL_0281;
		}
	}
	{
		// if (string.IsNullOrEmpty (type)) {
		String_t* L_101 = V_0;
		bool L_102;
		L_102 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_101, NULL);
		if (!L_102)
		{
			goto IL_0283;
		}
	}
	{
		// type = string.Format ("Unity{0}", logLevel.ToString ());
		Il2CppFakeBox<int32_t> L_103(LogSeverity_tDFF14151862ADE8249E4A0517B70F4F94907FDE1_il2cpp_TypeInfo_var, (&___0_logLevel));
		String_t* L_104;
		L_104 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_103), NULL);
		String_t* L_105;
		L_105 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral92354AFCE308AF1E2F60CBB79B54D8373AFE120E, L_104, NULL);
		V_0 = L_105;
		goto IL_0283;
	}

IL_0281:
	{
		// type = name;
		String_t* L_106 = ___1_name;
		V_0 = L_106;
	}

IL_0283:
	{
		// _reportException (uncaught, type, reason, stackTrace);
		bool L_107 = ___4_uncaught;
		String_t* L_108 = V_0;
		String_t* L_109 = V_1;
		String_t* L_110 = ___3_stackTrace;
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent__reportException_m31F7835A102154C7F210174EABD3E3CEA0896512(L_107, L_108, L_109, L_110, NULL);
		// }
		return;
	}
}
// System.Void BuglyAgent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent__ctor_mEBB83AEC047110A4213448A08270868F6CBF62E6 (BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BuglyAgent::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyAgent__cctor_mC311A0ECB63594323AF440FF6BAE54BA13CD2E18 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBDBC88F451708877242143919478A7B7F581F79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool _crashReporterTypeConfiged = false;
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____crashReporterTypeConfiged_0 = (bool)0;
		// private static bool _isInitialized = false;
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____isInitialized_2 = (bool)0;
		// private static LogSeverity _autoReportLogLevel = LogSeverity.LogError;
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____autoReportLogLevel_3 = 5;
		// private static int _crashReporterType = 1;  // Default=0,1=Bugly-V2,MSDKBugly=2, IMSDKBugly=3
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____crashReporterType_4 = 1;
		// private static int _crashReproterCustomizedLogLevel = 2; // Off=0,Error=1,Warn=2,Info=3,Debug=4
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____crashReproterCustomizedLogLevel_5 = 2;
		// private static bool _debugMode = false;
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____debugMode_6 = (bool)0;
		// private static bool _autoQuitApplicationAfterReport = false;
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____autoQuitApplicationAfterReport_7 = (bool)0;
		// private static readonly int EXCEPTION_TYPE_UNCAUGHT = 1;
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->___EXCEPTION_TYPE_UNCAUGHT_8 = 1;
		// private static readonly int EXCEPTION_TYPE_CAUGHT = 2;
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->___EXCEPTION_TYPE_CAUGHT_9 = 2;
		// private static readonly string _pluginVersion = "1.5.1";
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____pluginVersion_10 = _stringLiteralFBDBC88F451708877242143919478A7B7F581F79;
		Il2CppCodeGenWriteBarrier((void**)(&((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____pluginVersion_10), (void*)_stringLiteralFBDBC88F451708877242143919478A7B7F581F79);
		// private static bool _uncaughtAutoReportOnce = false;
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____uncaughtAutoReportOnce_12 = (bool)0;
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
void LogCallbackDelegate_Invoke_mEB5AAF91D7C2110D65DE39A86C0CE5FD360C96C8_Multicast(LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* currentDelegate = reinterpret_cast<LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_condition, ___1_stackTrace, ___2_type, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LogCallbackDelegate_Invoke_mEB5AAF91D7C2110D65DE39A86C0CE5FD360C96C8_OpenInst(LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method)
{
	NullCheck(___0_condition);
	typedef void (*FunctionPointerType) (String_t*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_condition, ___1_stackTrace, ___2_type, method);
}
void LogCallbackDelegate_Invoke_mEB5AAF91D7C2110D65DE39A86C0CE5FD360C96C8_OpenStatic(LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_condition, ___1_stackTrace, ___2_type, method);
}
void LogCallbackDelegate_Invoke_mEB5AAF91D7C2110D65DE39A86C0CE5FD360C96C8_OpenStaticInvoker(LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method)
{
	InvokerActionInvoker3< String_t*, String_t*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_condition, ___1_stackTrace, ___2_type);
}
void LogCallbackDelegate_Invoke_mEB5AAF91D7C2110D65DE39A86C0CE5FD360C96C8_ClosedStaticInvoker(LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, String_t*, String_t*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_condition, ___1_stackTrace, ___2_type);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051 (LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_condition' to native representation
	char* ____0_condition_marshaled = NULL;
	____0_condition_marshaled = il2cpp_codegen_marshal_string(___0_condition);

	// Marshaling of parameter '___1_stackTrace' to native representation
	char* ____1_stackTrace_marshaled = NULL;
	____1_stackTrace_marshaled = il2cpp_codegen_marshal_string(___1_stackTrace);

	// Native function invocation
	il2cppPInvokeFunc(____0_condition_marshaled, ____1_stackTrace_marshaled, ___2_type);

	// Marshaling cleanup of parameter '___0_condition' native representation
	il2cpp_codegen_marshal_free(____0_condition_marshaled);
	____0_condition_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_stackTrace' native representation
	il2cpp_codegen_marshal_free(____1_stackTrace_marshaled);
	____1_stackTrace_marshaled = NULL;

}
// System.Void BuglyAgent/LogCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate__ctor_m51F292F9E56D27D304005776BB89586C979D22EA (LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_mEB5AAF91D7C2110D65DE39A86C0CE5FD360C96C8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_mEB5AAF91D7C2110D65DE39A86C0CE5FD360C96C8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_mEB5AAF91D7C2110D65DE39A86C0CE5FD360C96C8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_mEB5AAF91D7C2110D65DE39A86C0CE5FD360C96C8_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&LogCallbackDelegate_Invoke_mEB5AAF91D7C2110D65DE39A86C0CE5FD360C96C8_Multicast;
}
// System.Void BuglyAgent/LogCallbackDelegate::Invoke(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_Invoke_mEB5AAF91D7C2110D65DE39A86C0CE5FD360C96C8 (LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_condition, ___1_stackTrace, ___2_type, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult BuglyAgent/LogCallbackDelegate::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogCallbackDelegate_BeginInvoke_mEA600AAE20E9856EEEFCE99EB4D601E289D19CDB (LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_condition;
	__d_args[1] = ___1_stackTrace;
	__d_args[2] = Box(LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var, &___2_type);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void BuglyAgent/LogCallbackDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_EndInvoke_m5D8A8D441F01F37D0BCD3EE79CABFC0418163A50 (LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BuglyCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyCallback__ctor_mA84B2B66C58D610AA030720780B5321BE39172AE (BuglyCallback_t81F72172BC44DA604552B3E70B01BBA272206E23* __this, const RuntimeMethod* method) 
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
// System.Void BuglyInit::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyInit_Awake_m98ACACBDC3FCE70BAF50F8CC467D12C92CB100E9 (BuglyInit_t6DF4B47F02AAEC62F4600C5513BDD074600F0977* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyInit_MyLogCallbackExtrasHandler_mCE34F460A9DDC8700C78568070B04D2D40ED925F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA039BE88B8D6B21CA08227A0DE60A77BACD4ED1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BuglyAgent.ConfigDebugMode (false);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_ConfigDebugMode_m46CCE75E8D3E01B10B01970A287014C0B2BAAEC5((bool)0, NULL);
		// BuglyAgent.ConfigDefault (null, null, null, 0);
		BuglyAgent_ConfigDefault_m27D836B1F52C1F85EED067987A736EFEF4F4B82E((String_t*)NULL, (String_t*)NULL, (String_t*)NULL, ((int64_t)0), NULL);
		// BuglyAgent.ConfigAutoReportLogLevel (LogSeverity.LogError);
		BuglyAgent_ConfigAutoReportLogLevel_m393552E98CE1FE3A02991F27C173E7CB278490EE_inline(5, NULL);
		// BuglyAgent.ConfigAutoQuitApplication (false);
		BuglyAgent_ConfigAutoQuitApplication_mBBD302308FE1A64D7ABD979C3E1413668C896310_inline((bool)0, NULL);
		// BuglyAgent.RegisterLogCallback (null);
		BuglyAgent_RegisterLogCallback_mB96ED5014369A269266FEF4BCF322C1A1441C003((LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051*)NULL, NULL);
		// BuglyAgent.InitWithAppId (BuglyAppID);
		BuglyAgent_InitWithAppId_m25E072BDE19958A3DBBD04744F5CCDF1586144A6(_stringLiteralA039BE88B8D6B21CA08227A0DE60A77BACD4ED1D, NULL);
		// BuglyAgent.EnableExceptionHandler ();
		BuglyAgent_EnableExceptionHandler_m7EC5F731E19CA06DC47A9AD880A72781DA7E65C9(NULL);
		// BuglyAgent.SetLogCallbackExtrasHandler (MyLogCallbackExtrasHandler);
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_0 = (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*)il2cpp_codegen_object_new(Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_1__ctor_m814B8E7C54894711132601334E53D9A14E4DA16B(L_0, NULL, (intptr_t)((void*)BuglyInit_MyLogCallbackExtrasHandler_mCE34F460A9DDC8700C78568070B04D2D40ED925F_RuntimeMethod_var), NULL);
		BuglyAgent_SetLogCallbackExtrasHandler_mE30A93110A72ED0FE1A533900434A5457A03B543(L_0, NULL);
		// Destroy (this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> BuglyInit::MyLogCallbackExtrasHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* BuglyInit_MyLogCallbackExtrasHandler_mCE34F460A9DDC8700C78568070B04D2D40ED925F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceType_tEC9DF281BE5EA013E3F57441442CCE5A2DFF44C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral137F5DA697E776E7439C5B6BA3A94B1971D4AEA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral399424EAA0A270B0E89CD41833FF269CAD6AE3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CC476F25BB96DF3AB48B85C9B4556E3A8EECDDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B3D2C8030F02C8EFA282A89920ED9B3A0987293);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766520BA122B11639DEA21FD11348396C1DA431F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A21B738582222CA9FACA0509F3CB9B207C50446);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E697F948E1E198164B5B09B250C324F3D1044CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral927C07A9A0D4F74C939B952882D32EE98B8C854F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A2D33EE20E51717CDC6859049AB64AAAF108C53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C8693CE7D88AAF366EE179A4BB705613CEBDD81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA392FB5E31FE22CF5451C4C52C4FDCA87A1EE7FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABAE1155CE9EFC0F9A95E89CB74687207B87B365);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD5B8D1C9401E75E664CC0008025E462198BCD3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5D8AF07339C92C1C8A544FB0AED646C001200E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8D209392969C3122523988F0070F12A63316400);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8E4A2FDC293FF035F0FB42F1F6578603E80F361);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// BuglyAgent.PrintLog (LogSeverity.Log, "extra handler");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		BuglyAgent_PrintLog_m4BE095DAD2A0DA539CC5FF0886CA36C4D4746D20(0, _stringLiteral7A21B738582222CA9FACA0509F3CB9B207C50446, L_0, NULL);
		// Dictionary<string, string> extras = new Dictionary<string, string> ();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_1, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		// extras.Add ("ScreenSolution", string.Format ("{0}x{1}", Screen.width, Screen.height));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = L_1;
		int32_t L_3;
		L_3 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6;
		L_6 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralC5D8AF07339C92C1C8A544FB0AED646C001200E8, L_5, L_8, NULL);
		NullCheck(L_2);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_2, _stringLiteral399424EAA0A270B0E89CD41833FF269CAD6AE3AF, L_9, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("deviceModel", SystemInfo.deviceModel);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = L_2;
		String_t* L_11;
		L_11 = SystemInfo_get_deviceModel_m308FFBADED4BF6CB34C318A0BBDA762D09A7F185(NULL);
		NullCheck(L_10);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_10, _stringLiteral927C07A9A0D4F74C939B952882D32EE98B8C854F, L_11, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("deviceName", SystemInfo.deviceName);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12 = L_10;
		String_t* L_13;
		L_13 = SystemInfo_get_deviceName_mBF171D8609337585AF50DDC7FFC9D7EEA3B4A58E(NULL);
		NullCheck(L_12);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_12, _stringLiteralAD5B8D1C9401E75E664CC0008025E462198BCD3B, L_13, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("deviceType", SystemInfo.deviceType.ToString ());
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14 = L_12;
		int32_t L_15;
		L_15 = SystemInfo_get_deviceType_m9BA3769FAC1102E252B5350FE208BF885E5F24D0(NULL);
		V_0 = L_15;
		Il2CppFakeBox<int32_t> L_16(DeviceType_tEC9DF281BE5EA013E3F57441442CCE5A2DFF44C4_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_17;
		L_17 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_16), NULL);
		NullCheck(L_14);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_14, _stringLiteral3CC476F25BB96DF3AB48B85C9B4556E3A8EECDDF, L_17, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("deviceUId", SystemInfo.deviceUniqueIdentifier);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_18 = L_14;
		String_t* L_19;
		L_19 = SystemInfo_get_deviceUniqueIdentifier_m61BA4CB77ADA09730B8B575700D85027EFDB4EFC(NULL);
		NullCheck(L_18);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_18, _stringLiteralABAE1155CE9EFC0F9A95E89CB74687207B87B365, L_19, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("gDId", string.Format ("{0}", SystemInfo.graphicsDeviceID));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_20 = L_18;
		int32_t L_21;
		L_21 = SystemInfo_get_graphicsDeviceID_m9CB876E71515AF035A36AF3185992D10AE2ED646(NULL);
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24;
		L_24 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_23, NULL);
		NullCheck(L_20);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_20, _stringLiteralA392FB5E31FE22CF5451C4C52C4FDCA87A1EE7FF, L_24, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("gDName", SystemInfo.graphicsDeviceName);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_25 = L_20;
		String_t* L_26;
		L_26 = SystemInfo_get_graphicsDeviceName_mA3F2E2CA587AD5E212A38AD7D28559FD017451A2(NULL);
		NullCheck(L_25);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_25, _stringLiteral766520BA122B11639DEA21FD11348396C1DA431F, L_26, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("gDVdr", SystemInfo.graphicsDeviceVendor);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_27 = L_25;
		String_t* L_28;
		L_28 = SystemInfo_get_graphicsDeviceVendor_mE2D7A85437C820636639ADC124C965DB37B52204(NULL);
		NullCheck(L_27);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_27, _stringLiteral7E697F948E1E198164B5B09B250C324F3D1044CB, L_28, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("gDVer", SystemInfo.graphicsDeviceVersion);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_29 = L_27;
		String_t* L_30;
		L_30 = SystemInfo_get_graphicsDeviceVersion_m8A157C76206F3CF7D9A3DA6F4BE188A6FEC0769C(NULL);
		NullCheck(L_29);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_29, _stringLiteral9A2D33EE20E51717CDC6859049AB64AAAF108C53, L_30, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("gDVdrID", string.Format ("{0}", SystemInfo.graphicsDeviceVendorID));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_31 = L_29;
		int32_t L_32;
		L_32 = SystemInfo_get_graphicsDeviceVendorID_m9806D2F3459612C9FFE1A152BEB6BFB9D02C3309(NULL);
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35;
		L_35 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_34, NULL);
		NullCheck(L_31);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_31, _stringLiteral9C8693CE7D88AAF366EE179A4BB705613CEBDD81, L_35, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("graphicsMemorySize", string.Format ("{0}", SystemInfo.graphicsMemorySize));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_36 = L_31;
		int32_t L_37;
		L_37 = SystemInfo_get_graphicsMemorySize_m05C833741F5F5C06FE9B4B9F50078A21E9E71ACF(NULL);
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_38);
		String_t* L_40;
		L_40 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_39, NULL);
		NullCheck(L_36);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_36, _stringLiteralC8D209392969C3122523988F0070F12A63316400, L_40, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("systemMemorySize", string.Format ("{0}", SystemInfo.systemMemorySize));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_41 = L_36;
		int32_t L_42;
		L_42 = SystemInfo_get_systemMemorySize_m3BFE40CF5A43FEAB94F5C552A47D04ECD88B771E(NULL);
		int32_t L_43 = L_42;
		RuntimeObject* L_44 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_43);
		String_t* L_45;
		L_45 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_44, NULL);
		NullCheck(L_41);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_41, _stringLiteral137F5DA697E776E7439C5B6BA3A94B1971D4AEA8, L_45, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("UnityVersion", Application.unityVersion);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_46 = L_41;
		String_t* L_47;
		L_47 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_46);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_46, _stringLiteral5B3D2C8030F02C8EFA282A89920ED9B3A0987293, L_47, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// BuglyAgent.PrintLog (LogSeverity.LogInfo, "Package extra data");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48;
		L_48 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		BuglyAgent_PrintLog_m4BE095DAD2A0DA539CC5FF0886CA36C4D4746D20(2, _stringLiteralD8E4A2FDC293FF035F0FB42F1F6578603E80F361, L_48, NULL);
		// return extras;
		return L_46;
	}
}
// System.Void BuglyInit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuglyInit__ctor_mFFA66ABA98F3808A022BC0B5A55B8A61100A1157 (BuglyInit_t6DF4B47F02AAEC62F4600C5513BDD074600F0977* __this, const RuntimeMethod* method) 
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
// System.Void iOSConfigureLibGC::bfutils_SetLibGCFreeSpaceDivisor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSConfigureLibGC_bfutils_SetLibGCFreeSpaceDivisor_m2040EDC586BFE4B4FF772CD5FCA8232740EEC8A0 (int32_t ___0_divisor, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(bfutils_SetLibGCFreeSpaceDivisor)(___0_divisor);

}
// System.Void iOSConfigureLibGC::ConfigureLibGC(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSConfigureLibGC_ConfigureLibGC_mC4E661C5EEC35C137E1AF73170E58C66C625EB47 (int32_t ___0_divisor, const RuntimeMethod* method) 
{
	{
		// bfutils_SetLibGCFreeSpaceDivisor(divisor);
		int32_t L_0 = ___0_divisor;
		iOSConfigureLibGC_bfutils_SetLibGCFreeSpaceDivisor_m2040EDC586BFE4B4FF772CD5FCA8232740EEC8A0(L_0, NULL);
		// }
		return;
	}
}
// System.Void iOSConfigureLibGC::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSConfigureLibGC__ctor_m5DE308C26CA77375AB7778B2767DEBCCB24995D5 (iOSConfigureLibGC_t24E8B7AD284EC6A9B23510832BD916A93B07FDF9* __this, const RuntimeMethod* method) 
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
// System.UInt64 iOSUtility.MemoryReport::ios_report_memory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MemoryReport_ios_report_memory_mA03BD712F6DECE0EDF9FE82A8CCB9C3E571DA3D8 (const RuntimeMethod* method) 
{
	typedef uint64_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(ios_report_memory)();

	return returnValue;
}
// System.Int32 iOSUtility.MemoryReport::GetMaxMemoryUsedInMB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryReport_GetMaxMemoryUsedInMB_mACE82ED775842B16A4E326FFCD51B94DF0C230A8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mMaxMemoryInMB;
		int32_t L_0 = ((MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46_StaticFields*)il2cpp_codegen_static_fields_for(MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46_il2cpp_TypeInfo_var))->___mMaxMemoryInMB_1;
		return L_0;
	}
}
// System.Int32 iOSUtility.MemoryReport::GetMemoryUsedInMB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryReport_GetMemoryUsedInMB_m61DD8722E240571773CCF8B8F536364D069418C0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UInt64 memoryUseInByte = ios_report_memory();
		uint64_t L_0;
		L_0 = MemoryReport_ios_report_memory_mA03BD712F6DECE0EDF9FE82A8CCB9C3E571DA3D8(NULL);
		// mLastMemoryInMB = (int)memoryUseInByte / 1024 / 1024;
		((MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46_StaticFields*)il2cpp_codegen_static_fields_for(MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46_il2cpp_TypeInfo_var))->___mLastMemoryInMB_0 = ((int32_t)(((int32_t)(((int32_t)L_0)/((int32_t)1024)))/((int32_t)1024)));
		// if (mLastMemoryInMB > mMaxMemoryInMB)
		int32_t L_1 = ((MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46_StaticFields*)il2cpp_codegen_static_fields_for(MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46_il2cpp_TypeInfo_var))->___mLastMemoryInMB_0;
		int32_t L_2 = ((MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46_StaticFields*)il2cpp_codegen_static_fields_for(MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46_il2cpp_TypeInfo_var))->___mMaxMemoryInMB_1;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_002d;
		}
	}
	{
		// mMaxMemoryInMB = mLastMemoryInMB;
		int32_t L_3 = ((MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46_StaticFields*)il2cpp_codegen_static_fields_for(MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46_il2cpp_TypeInfo_var))->___mLastMemoryInMB_0;
		((MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46_StaticFields*)il2cpp_codegen_static_fields_for(MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46_il2cpp_TypeInfo_var))->___mMaxMemoryInMB_1 = L_3;
	}

IL_002d:
	{
		// return mLastMemoryInMB;
		int32_t L_4 = ((MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46_StaticFields*)il2cpp_codegen_static_fields_for(MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46_il2cpp_TypeInfo_var))->___mLastMemoryInMB_0;
		return L_4;
	}
}
// System.Void iOSUtility.MemoryReport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryReport__ctor_m658278577135BD50AC5CA5ACF1F628989FAB1818 (MemoryReport_t424F995124C824C4E0E0CF1073E1A04CA4277E46* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BuglyAgent__SetCrashReporterLogLevel_m088C5F79FAC9AE9C112D2B0E160B9A5AB9874265_inline (int32_t ___0_logLevel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _crashReproterCustomizedLogLevel = logLevel;
		int32_t L_0 = ___0_logLevel;
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____crashReproterCustomizedLogLevel_5 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BuglyAgent_get_IsInitialized_mEB33E9C8761CF9D5A834692E4968276682E2CCE3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _isInitialized; }
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		bool L_0 = ((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____isInitialized_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BuglyAgent_EnableDebugMode_m5CEA016B347860AD99802AA44DFB2FBF940FDEE2_inline (bool ___0_enable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _debugMode = enable;
		bool L_0 = ___0_enable;
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____debugMode_6 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogCallbackDelegate_Invoke_mEB5AAF91D7C2110D65DE39A86C0CE5FD360C96C8_inline (LogCallbackDelegate_tD05D9B1265EFB62EE6521DDD4774393E72A8E051* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_condition, ___1_stackTrace, ___2_type, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline (UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____exception_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BuglyAgent_ConfigAutoReportLogLevel_m393552E98CE1FE3A02991F27C173E7CB278490EE_inline (int32_t ___0_level, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _autoReportLogLevel = level;
		int32_t L_0 = ___0_level;
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____autoReportLogLevel_3 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BuglyAgent_ConfigAutoQuitApplication_mBBD302308FE1A64D7ABD979C3E1413668C896310_inline (bool ___0_autoQuit, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _autoQuitApplicationAfterReport = autoQuit;
		bool L_0 = ___0_autoQuit;
		il2cpp_codegen_runtime_class_init_inline(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var);
		((BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_StaticFields*)il2cpp_codegen_static_fields_for(BuglyAgent_tB670C809C75C3BDDB8F140B554A60234343C3D12_il2cpp_TypeInfo_var))->____autoQuitApplicationAfterReport_7 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
