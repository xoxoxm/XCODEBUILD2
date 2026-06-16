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

// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// ILogger
struct ILogger_t8C4E05C3884AF364EBBE1D29575A81AD26D55D94;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;

IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t8C4E05C3884AF364EBBE1D29575A81AD26D55D94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MyExtensionMethods_t313F32175F3DAA6F89BAFB2C2C01A9B787BD8B9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTraceUtility_t5C5AAD64E1074311E4831F275A817B231324C366_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7B44C038C41E1BDF1CAB83AA809F309CF4EA5BBE 
{
};

// Debugger
struct Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD  : public RuntimeObject
{
};

// MyExtensionMethods
struct MyExtensionMethods_t313F32175F3DAA6F89BAFB2C2C01A9B787BD8B9E  : public RuntimeObject
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

// StringBuilderCache
struct StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1  : public RuntimeObject
{
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.LogType
struct LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331 
{
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;
};

// <Module>

// <Module>

// Debugger
struct Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_StaticFields
{
	// System.Boolean Debugger::useLog
	bool ___useLog_0;
	// System.String Debugger::threadStack
	String_t* ___threadStack_1;
	// ILogger Debugger::logger
	RuntimeObject* ___logger_2;
};

// Debugger

// MyExtensionMethods
struct MyExtensionMethods_t313F32175F3DAA6F89BAFB2C2C01A9B787BD8B9E_StaticFields
{
	// UnityEngine.Vector3 MyExtensionMethods::vec3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec3_0;
};

// MyExtensionMethods

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// StringBuilderCache

// StringBuilderCache
struct StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_ThreadStaticFields
{
	// System.Text.StringBuilder StringBuilderCache::_cache
	StringBuilder_t* ____cache_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Int32

// System.Int32

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.LogType

// UnityEngine.LogType
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Text.StringBuilder StringBuilderCache::Acquire(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilderCache_Acquire_m4ADBF281CEFA2093355A5DE6879B2B3CECDD3DEE (int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Millisecond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Millisecond_mD47CAACAF231AA82552DA9F71836784AF8E27878 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667 (const RuntimeMethod* method) ;
// System.String StringBuilderCache::GetStringAndRelease(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderCache_GetStringAndRelease_mCAE30AF9FAC730BFE69BA499164E0B6D5FDFA670 (StringBuilder_t* ___0_sb, const RuntimeMethod* method) ;
// System.String Debugger::GetLogFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Debugger_GetLogFormat_mEE7B8792F1C8DFCAE0C99B43FD1281742FD4C628 (String_t* ___0_str, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackTraceUtility_ExtractStackTrace_mFDB05BC4CA207364FFC93F44E29F35A271DF5200 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Capacity_m9DBF3B3940BC0BB882CA26F0EDB53896A491AD1E (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void MyExtensionMethods::Clear(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyExtensionMethods_Clear_mCE7B8D059AE4BCC66CFC1AB1B7820134272C1B56 (StringBuilder_t* ___0_sb, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void StringBuilderCache::Release(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilderCache_Release_m06BAFE06E98D7C810AC8EB4746ACA0D71061CADE (StringBuilder_t* ___0_sb, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
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
// System.String Debugger::GetLogFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Debugger_GetLogFormat_mEE7B8792F1C8DFCAE0C99B43FD1281742FD4C628 (String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_runtime_class_init_inline(StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_il2cpp_TypeInfo_var);
		StringBuilder_t* L_0;
		L_0 = StringBuilderCache_Acquire_m4ADBF281CEFA2093355A5DE6879B2B3CECDD3DEE(((int32_t)256), NULL);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_1 = L_1;
		StringBuilder_t* L_2 = V_0;
		int32_t L_3;
		L_3 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3((&V_1), NULL);
		NullCheck(L_2);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_2, L_3, NULL);
		StringBuilder_t* L_5 = V_0;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		StringBuilder_t* L_7 = V_0;
		int32_t L_8;
		L_8 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973((&V_1), NULL);
		NullCheck(L_7);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_7, L_8, NULL);
		StringBuilder_t* L_10 = V_0;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		StringBuilder_t* L_12 = V_0;
		int32_t L_13;
		L_13 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&V_1), NULL);
		NullCheck(L_12);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_12, L_13, NULL);
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		StringBuilder_t* L_17 = V_0;
		int32_t L_18;
		L_18 = DateTime_get_Millisecond_mD47CAACAF231AA82552DA9F71836784AF8E27878((&V_1), NULL);
		NullCheck(L_17);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_17, L_18, NULL);
		StringBuilder_t* L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, NULL);
		StringBuilder_t* L_22 = V_0;
		int32_t L_23;
		L_23 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		NullCheck(L_22);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_22, ((int32_t)(L_23%((int32_t)999))), NULL);
		StringBuilder_t* L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, NULL);
		StringBuilder_t* L_27 = V_0;
		String_t* L_28 = ___0_str;
		NullCheck(L_27);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_27, L_28, NULL);
		StringBuilder_t* L_30 = V_0;
		String_t* L_31;
		L_31 = StringBuilderCache_GetStringAndRelease_mCAE30AF9FAC730BFE69BA499164E0B6D5FDFA670(L_30, NULL);
		return L_31;
	}
}
// System.Void Debugger::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_Log_m9FE116F6047E85F9517D400439B7B91EF10833E8 (String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t8C4E05C3884AF364EBBE1D29575A81AD26D55D94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_str;
		il2cpp_codegen_runtime_class_init_inline(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Debugger_GetLogFormat_mEE7B8792F1C8DFCAE0C99B43FD1281742FD4C628(L_0, NULL);
		___0_str = L_1;
		bool L_2 = ((Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var))->___useLog_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = ___0_str;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		return;
	}

IL_0016:
	{
		il2cpp_codegen_runtime_class_init_inline(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var))->___logger_2;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var))->___logger_2;
		String_t* L_6 = ___0_str;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_5);
		InterfaceActionInvoker3< String_t*, String_t*, int32_t >::Invoke(0 /* System.Void ILogger::Log(System.String,System.String,UnityEngine.LogType) */, ILogger_t8C4E05C3884AF364EBBE1D29575A81AD26D55D94_il2cpp_TypeInfo_var, L_5, L_6, L_7, 3);
	}

IL_002e:
	{
		return;
	}
}
// System.Void Debugger::LogWarning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogWarning_mD6F7E3D08F84129F48431275A4292A3C72228DA9 (String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t8C4E05C3884AF364EBBE1D29575A81AD26D55D94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceUtility_t5C5AAD64E1074311E4831F275A817B231324C366_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___0_str;
		il2cpp_codegen_runtime_class_init_inline(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Debugger_GetLogFormat_mEE7B8792F1C8DFCAE0C99B43FD1281742FD4C628(L_0, NULL);
		___0_str = L_1;
		bool L_2 = ((Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var))->___useLog_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = ___0_str;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_3, NULL);
		return;
	}

IL_0016:
	{
		il2cpp_codegen_runtime_class_init_inline(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var))->___logger_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StackTraceUtility_t5C5AAD64E1074311E4831F275A817B231324C366_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = StackTraceUtility_ExtractStackTrace_mFDB05BC4CA207364FFC93F44E29F35A271DF5200(NULL);
		V_0 = L_5;
		il2cpp_codegen_runtime_class_init_inline(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var))->___logger_2;
		String_t* L_7 = ___0_str;
		String_t* L_8 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker3< String_t*, String_t*, int32_t >::Invoke(0 /* System.Void ILogger::Log(System.String,System.String,UnityEngine.LogType) */, ILogger_t8C4E05C3884AF364EBBE1D29575A81AD26D55D94_il2cpp_TypeInfo_var, L_6, L_7, L_8, 2);
	}

IL_0030:
	{
		return;
	}
}
// System.Void Debugger::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogError_m70F0FDE3C76C94F9BCFA6CABD76B6E19388E7819 (String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t8C4E05C3884AF364EBBE1D29575A81AD26D55D94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceUtility_t5C5AAD64E1074311E4831F275A817B231324C366_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___0_str;
		il2cpp_codegen_runtime_class_init_inline(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Debugger_GetLogFormat_mEE7B8792F1C8DFCAE0C99B43FD1281742FD4C628(L_0, NULL);
		___0_str = L_1;
		bool L_2 = ((Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var))->___useLog_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = ___0_str;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_3, NULL);
		return;
	}

IL_0016:
	{
		il2cpp_codegen_runtime_class_init_inline(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var))->___logger_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StackTraceUtility_t5C5AAD64E1074311E4831F275A817B231324C366_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = StackTraceUtility_ExtractStackTrace_mFDB05BC4CA207364FFC93F44E29F35A271DF5200(NULL);
		V_0 = L_5;
		il2cpp_codegen_runtime_class_init_inline(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var))->___logger_2;
		String_t* L_7 = ___0_str;
		String_t* L_8 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker3< String_t*, String_t*, int32_t >::Invoke(0 /* System.Void ILogger::Log(System.String,System.String,UnityEngine.LogType) */, ILogger_t8C4E05C3884AF364EBBE1D29575A81AD26D55D94_il2cpp_TypeInfo_var, L_6, L_7, L_8, 0);
	}

IL_0030:
	{
		return;
	}
}
// System.Void Debugger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger__cctor_m57DF68853C5C5935C42DC71DB9AD58370D6FD728 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var))->___useLog_0 = (bool)1;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		((Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var))->___threadStack_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var))->___threadStack_1), (void*)L_0);
		((Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var))->___logger_2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tC6D2E5E813B12AE0ED84458A6AEB0328F4A2D6BD_il2cpp_TypeInfo_var))->___logger_2), (void*)(RuntimeObject*)NULL);
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
// System.Void MyExtensionMethods::Clear(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyExtensionMethods_Clear_mCE7B8D059AE4BCC66CFC1AB1B7820134272C1B56 (StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	{
		StringBuilder_t* L_0 = ___0_sb;
		NullCheck(L_0);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_0, 0, NULL);
		return;
	}
}
// System.Void MyExtensionMethods::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyExtensionMethods__cctor_m4FD955D9C4F4A445111CC00AE55EDBA10297B0E5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MyExtensionMethods_t313F32175F3DAA6F89BAFB2C2C01A9B787BD8B9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		((MyExtensionMethods_t313F32175F3DAA6F89BAFB2C2C01A9B787BD8B9E_StaticFields*)il2cpp_codegen_static_fields_for(MyExtensionMethods_t313F32175F3DAA6F89BAFB2C2C01A9B787BD8B9E_il2cpp_TypeInfo_var))->___vec3_0 = L_0;
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
// System.Text.StringBuilder StringBuilderCache::Acquire(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilderCache_Acquire_m4ADBF281CEFA2093355A5DE6879B2B3CECDD3DEE (int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MyExtensionMethods_t313F32175F3DAA6F89BAFB2C2C01A9B787BD8B9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_il2cpp_TypeInfo_var);
		StringBuilder_t* L_0 = ((StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_il2cpp_TypeInfo_var))->____cache_0;
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = StringBuilder_get_Capacity_m9DBF3B3940BC0BB882CA26F0EDB53896A491AD1E(L_2, NULL);
		int32_t L_4 = ___0_capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_il2cpp_TypeInfo_var);
		((StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_il2cpp_TypeInfo_var))->____cache_0 = (StringBuilder_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_il2cpp_TypeInfo_var))->____cache_0), (void*)(StringBuilder_t*)NULL);
		StringBuilder_t* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(MyExtensionMethods_t313F32175F3DAA6F89BAFB2C2C01A9B787BD8B9E_il2cpp_TypeInfo_var);
		MyExtensionMethods_Clear_mCE7B8D059AE4BCC66CFC1AB1B7820134272C1B56(L_5, NULL);
		StringBuilder_t* L_6 = V_0;
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___0_capacity;
		StringBuilder_t* L_8 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_8, L_7, NULL);
		return L_8;
	}
}
// System.String StringBuilderCache::GetStringAndRelease(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderCache_GetStringAndRelease_mCAE30AF9FAC730BFE69BA499164E0B6D5FDFA670 (StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = ___0_sb;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		V_0 = L_1;
		StringBuilder_t* L_2 = ___0_sb;
		il2cpp_codegen_runtime_class_init_inline(StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_il2cpp_TypeInfo_var);
		StringBuilderCache_Release_m06BAFE06E98D7C810AC8EB4746ACA0D71061CADE(L_2, NULL);
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void StringBuilderCache::Release(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilderCache_Release_m06BAFE06E98D7C810AC8EB4746ACA0D71061CADE (StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = ___0_sb;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = StringBuilder_get_Capacity_m9DBF3B3940BC0BB882CA26F0EDB53896A491AD1E(L_0, NULL);
		if ((((int32_t)L_1) > ((int32_t)((int32_t)512))))
		{
			goto IL_0013;
		}
	}
	{
		StringBuilder_t* L_2 = ___0_sb;
		il2cpp_codegen_runtime_class_init_inline(StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_il2cpp_TypeInfo_var);
		((StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_il2cpp_TypeInfo_var))->____cache_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_il2cpp_TypeInfo_var))->____cache_0), (void*)L_2);
	}

IL_0013:
	{
		return;
	}
}
// System.Void StringBuilderCache::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilderCache__cctor_mDE7DDFDD4F52C5604AFED84E52D061BFCBBC6873 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		((StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_il2cpp_TypeInfo_var))->____cache_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringBuilderCache_tFC957B05D3BB25C9DCBB07525EA9DD65D5B806E1_il2cpp_TypeInfo_var))->____cache_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
