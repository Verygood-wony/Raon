#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip>
struct Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t673DFF64E51C18A8B1287F4BD988966CE3B15A45;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.AudioClip>
struct KeyCollection_t65782A9A3E08E40FFC767329E73337C228E82EC2;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.AudioClip>
struct ValueCollection_t1C99D614E5B0AB66731C97C0B8F796B736A17687;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.AudioClip>[]
struct EntryU5BU5D_t7A19B1C8240CE6EC03B5B2BD6C07F220353C7B9A;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// Gamekit3D.SimpleSFX.SynthLayer[]
struct SynthLayerU5BU5D_t9919E41BA20A575D559D9106FFEDDF881237EAD6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// Gamekit3D.SimpleSFX.BQFilter
struct BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Gamekit3D.SimpleSFX.SimpleFXSynth
struct SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17;
// System.String
struct String_t;
// Gamekit3D.SimpleSFX.SynthLayer
struct SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// Gamekit3D.SimpleSFX.SimpleFXSynth/<Start>d__8
struct U3CStartU3Ed__8_tBAA399AC9D5C031CE0438A5F11229F20AC03BC6A;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__8_tBAA399AC9D5C031CE0438A5F11229F20AC03BC6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758;
IL2CPP_EXTERN_C String_t* _stringLiteral7CE10074DA4EDD547E37EFFF41398CD6AD4437FE;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E;
IL2CPP_EXTERN_C String_t* _stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F;
IL2CPP_EXTERN_C String_t* _stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD67285F79EBD150EA5A4E1330145519429ACE105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFEE5D90F96A7C48E1A9FAA53BC37E4E4958DDC13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m3C3D41A25839A58F2833075DD1DE5E08CBC31D52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD8A3DFB6518A152D151908E96F7294183B8911BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m3C02335CFC5106AE22A3A6766602716222F52554_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m65426A0A2C2F83271252601E2AF4A31C3A0FD22D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__8_System_Collections_IEnumerator_Reset_m22A556AB91C0BE234C306F39719280132F4B2B56_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct SynthLayerU5BU5D_t9919E41BA20A575D559D9106FFEDDF881237EAD6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tAD652478D97EBA036141FF8CEFB8958C9C7DF47A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip>
struct Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7A19B1C8240CE6EC03B5B2BD6C07F220353C7B9A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t65782A9A3E08E40FFC767329E73337C228E82EC2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1C99D614E5B0AB66731C97C0B8F796B736A17687 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E, ___entries_1)); }
	inline EntryU5BU5D_t7A19B1C8240CE6EC03B5B2BD6C07F220353C7B9A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7A19B1C8240CE6EC03B5B2BD6C07F220353C7B9A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7A19B1C8240CE6EC03B5B2BD6C07F220353C7B9A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E, ___keys_7)); }
	inline KeyCollection_t65782A9A3E08E40FFC767329E73337C228E82EC2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t65782A9A3E08E40FFC767329E73337C228E82EC2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t65782A9A3E08E40FFC767329E73337C228E82EC2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E, ___values_8)); }
	inline ValueCollection_t1C99D614E5B0AB66731C97C0B8F796B736A17687 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1C99D614E5B0AB66731C97C0B8F796B736A17687 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1C99D614E5B0AB66731C97C0B8F796B736A17687 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____items_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Gamekit3D.SimpleSFX.AudioClipExporter
struct AudioClipExporter_tDF8F4D3CCCDCF4A81693F561F2178B97FDDD1DF4  : public RuntimeObject
{
public:

public:
};


// Gamekit3D.SimpleSFX.BQFilter
struct BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311  : public RuntimeObject
{
public:
	// System.Single Gamekit3D.SimpleSFX.BQFilter::a0
	float ___a0_1;
	// System.Single Gamekit3D.SimpleSFX.BQFilter::a1
	float ___a1_2;
	// System.Single Gamekit3D.SimpleSFX.BQFilter::a2
	float ___a2_3;
	// System.Single Gamekit3D.SimpleSFX.BQFilter::a3
	float ___a3_4;
	// System.Single Gamekit3D.SimpleSFX.BQFilter::a4
	float ___a4_5;
	// System.Single Gamekit3D.SimpleSFX.BQFilter::x1
	float ___x1_6;
	// System.Single Gamekit3D.SimpleSFX.BQFilter::x2
	float ___x2_7;
	// System.Single Gamekit3D.SimpleSFX.BQFilter::y1
	float ___y1_8;
	// System.Single Gamekit3D.SimpleSFX.BQFilter::y2
	float ___y2_9;

public:
	inline static int32_t get_offset_of_a0_1() { return static_cast<int32_t>(offsetof(BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311, ___a0_1)); }
	inline float get_a0_1() const { return ___a0_1; }
	inline float* get_address_of_a0_1() { return &___a0_1; }
	inline void set_a0_1(float value)
	{
		___a0_1 = value;
	}

	inline static int32_t get_offset_of_a1_2() { return static_cast<int32_t>(offsetof(BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311, ___a1_2)); }
	inline float get_a1_2() const { return ___a1_2; }
	inline float* get_address_of_a1_2() { return &___a1_2; }
	inline void set_a1_2(float value)
	{
		___a1_2 = value;
	}

	inline static int32_t get_offset_of_a2_3() { return static_cast<int32_t>(offsetof(BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311, ___a2_3)); }
	inline float get_a2_3() const { return ___a2_3; }
	inline float* get_address_of_a2_3() { return &___a2_3; }
	inline void set_a2_3(float value)
	{
		___a2_3 = value;
	}

	inline static int32_t get_offset_of_a3_4() { return static_cast<int32_t>(offsetof(BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311, ___a3_4)); }
	inline float get_a3_4() const { return ___a3_4; }
	inline float* get_address_of_a3_4() { return &___a3_4; }
	inline void set_a3_4(float value)
	{
		___a3_4 = value;
	}

	inline static int32_t get_offset_of_a4_5() { return static_cast<int32_t>(offsetof(BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311, ___a4_5)); }
	inline float get_a4_5() const { return ___a4_5; }
	inline float* get_address_of_a4_5() { return &___a4_5; }
	inline void set_a4_5(float value)
	{
		___a4_5 = value;
	}

	inline static int32_t get_offset_of_x1_6() { return static_cast<int32_t>(offsetof(BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311, ___x1_6)); }
	inline float get_x1_6() const { return ___x1_6; }
	inline float* get_address_of_x1_6() { return &___x1_6; }
	inline void set_x1_6(float value)
	{
		___x1_6 = value;
	}

	inline static int32_t get_offset_of_x2_7() { return static_cast<int32_t>(offsetof(BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311, ___x2_7)); }
	inline float get_x2_7() const { return ___x2_7; }
	inline float* get_address_of_x2_7() { return &___x2_7; }
	inline void set_x2_7(float value)
	{
		___x2_7 = value;
	}

	inline static int32_t get_offset_of_y1_8() { return static_cast<int32_t>(offsetof(BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311, ___y1_8)); }
	inline float get_y1_8() const { return ___y1_8; }
	inline float* get_address_of_y1_8() { return &___y1_8; }
	inline void set_y1_8(float value)
	{
		___y1_8 = value;
	}

	inline static int32_t get_offset_of_y2_9() { return static_cast<int32_t>(offsetof(BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311, ___y2_9)); }
	inline float get_y2_9() const { return ___y2_9; }
	inline float* get_address_of_y2_9() { return &___y2_9; }
	inline void set_y2_9(float value)
	{
		___y2_9 = value;
	}
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Gamekit3D.SimpleSFX.SimpleFXSynth/<Start>d__8
struct U3CStartU3Ed__8_tBAA399AC9D5C031CE0438A5F11229F20AC03BC6A  : public RuntimeObject
{
public:
	// System.Int32 Gamekit3D.SimpleSFX.SimpleFXSynth/<Start>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Gamekit3D.SimpleSFX.SimpleFXSynth/<Start>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Gamekit3D.SimpleSFX.SimpleFXSynth Gamekit3D.SimpleSFX.SimpleFXSynth/<Start>d__8::<>4__this
	SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__8_tBAA399AC9D5C031CE0438A5F11229F20AC03BC6A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__8_tBAA399AC9D5C031CE0438A5F11229F20AC03BC6A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__8_tBAA399AC9D5C031CE0438A5F11229F20AC03BC6A, ___U3CU3E4__this_2)); }
	inline SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.Mathf
struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194__padding[1];
	};

public:
};

struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Gamekit3D.SimpleSFX.FilterType
struct FilterType_t98A6CBFA7DF36CD2A7D4CEDD7742F0EC02F683E4 
{
public:
	// System.Int32 Gamekit3D.SimpleSFX.FilterType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FilterType_t98A6CBFA7DF36CD2A7D4CEDD7742F0EC02F683E4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Gamekit3D.SimpleSFX.OscType
struct OscType_t8E56AE5D371FAEF6DDA869A7D962AFD54D91CC60 
{
public:
	// System.Int32 Gamekit3D.SimpleSFX.OscType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OscType_t8E56AE5D371FAEF6DDA869A7D962AFD54D91CC60, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.SeekOrigin
struct SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_8)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
	}
};


// Gamekit3D.SimpleSFX.SynthLayer
struct SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D  : public RuntimeObject
{
public:
	// Gamekit3D.SimpleSFX.OscType Gamekit3D.SimpleSFX.SynthLayer::oscType
	int32_t ___oscType_0;
	// UnityEngine.AnimationCurve Gamekit3D.SimpleSFX.SynthLayer::oscillatorFrequency
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___oscillatorFrequency_1;
	// UnityEngine.AnimationCurve Gamekit3D.SimpleSFX.SynthLayer::volumeEnvelope
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___volumeEnvelope_2;
	// Gamekit3D.SimpleSFX.FilterType Gamekit3D.SimpleSFX.SynthLayer::filterType
	int32_t ___filterType_3;
	// UnityEngine.AnimationCurve Gamekit3D.SimpleSFX.SynthLayer::cutoffEnvelope
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___cutoffEnvelope_4;
	// UnityEngine.AnimationCurve Gamekit3D.SimpleSFX.SynthLayer::resonanceEnvelope
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___resonanceEnvelope_5;
	// System.Single Gamekit3D.SimpleSFX.SynthLayer::phase
	float ___phase_6;
	// System.Single Gamekit3D.SimpleSFX.SynthLayer::time
	float ___time_7;
	// Gamekit3D.SimpleSFX.BQFilter Gamekit3D.SimpleSFX.SynthLayer::bqFilter
	BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * ___bqFilter_8;
	// System.Single[] Gamekit3D.SimpleSFX.SynthLayer::xv
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___xv_11;
	// System.Single[] Gamekit3D.SimpleSFX.SynthLayer::yv
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___yv_12;

public:
	inline static int32_t get_offset_of_oscType_0() { return static_cast<int32_t>(offsetof(SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D, ___oscType_0)); }
	inline int32_t get_oscType_0() const { return ___oscType_0; }
	inline int32_t* get_address_of_oscType_0() { return &___oscType_0; }
	inline void set_oscType_0(int32_t value)
	{
		___oscType_0 = value;
	}

	inline static int32_t get_offset_of_oscillatorFrequency_1() { return static_cast<int32_t>(offsetof(SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D, ___oscillatorFrequency_1)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_oscillatorFrequency_1() const { return ___oscillatorFrequency_1; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_oscillatorFrequency_1() { return &___oscillatorFrequency_1; }
	inline void set_oscillatorFrequency_1(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___oscillatorFrequency_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oscillatorFrequency_1), (void*)value);
	}

	inline static int32_t get_offset_of_volumeEnvelope_2() { return static_cast<int32_t>(offsetof(SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D, ___volumeEnvelope_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_volumeEnvelope_2() const { return ___volumeEnvelope_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_volumeEnvelope_2() { return &___volumeEnvelope_2; }
	inline void set_volumeEnvelope_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___volumeEnvelope_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___volumeEnvelope_2), (void*)value);
	}

	inline static int32_t get_offset_of_filterType_3() { return static_cast<int32_t>(offsetof(SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D, ___filterType_3)); }
	inline int32_t get_filterType_3() const { return ___filterType_3; }
	inline int32_t* get_address_of_filterType_3() { return &___filterType_3; }
	inline void set_filterType_3(int32_t value)
	{
		___filterType_3 = value;
	}

	inline static int32_t get_offset_of_cutoffEnvelope_4() { return static_cast<int32_t>(offsetof(SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D, ___cutoffEnvelope_4)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_cutoffEnvelope_4() const { return ___cutoffEnvelope_4; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_cutoffEnvelope_4() { return &___cutoffEnvelope_4; }
	inline void set_cutoffEnvelope_4(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___cutoffEnvelope_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cutoffEnvelope_4), (void*)value);
	}

	inline static int32_t get_offset_of_resonanceEnvelope_5() { return static_cast<int32_t>(offsetof(SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D, ___resonanceEnvelope_5)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_resonanceEnvelope_5() const { return ___resonanceEnvelope_5; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_resonanceEnvelope_5() { return &___resonanceEnvelope_5; }
	inline void set_resonanceEnvelope_5(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___resonanceEnvelope_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resonanceEnvelope_5), (void*)value);
	}

	inline static int32_t get_offset_of_phase_6() { return static_cast<int32_t>(offsetof(SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D, ___phase_6)); }
	inline float get_phase_6() const { return ___phase_6; }
	inline float* get_address_of_phase_6() { return &___phase_6; }
	inline void set_phase_6(float value)
	{
		___phase_6 = value;
	}

	inline static int32_t get_offset_of_time_7() { return static_cast<int32_t>(offsetof(SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D, ___time_7)); }
	inline float get_time_7() const { return ___time_7; }
	inline float* get_address_of_time_7() { return &___time_7; }
	inline void set_time_7(float value)
	{
		___time_7 = value;
	}

	inline static int32_t get_offset_of_bqFilter_8() { return static_cast<int32_t>(offsetof(SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D, ___bqFilter_8)); }
	inline BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * get_bqFilter_8() const { return ___bqFilter_8; }
	inline BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 ** get_address_of_bqFilter_8() { return &___bqFilter_8; }
	inline void set_bqFilter_8(BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * value)
	{
		___bqFilter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bqFilter_8), (void*)value);
	}

	inline static int32_t get_offset_of_xv_11() { return static_cast<int32_t>(offsetof(SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D, ___xv_11)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_xv_11() const { return ___xv_11; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_xv_11() { return &___xv_11; }
	inline void set_xv_11(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___xv_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xv_11), (void*)value);
	}

	inline static int32_t get_offset_of_yv_12() { return static_cast<int32_t>(offsetof(SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D, ___yv_12)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_yv_12() const { return ___yv_12; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_yv_12() { return &___yv_12; }
	inline void set_yv_12(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___yv_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yv_12), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Gamekit3D.SimpleSFX.SimpleFXSynth
struct SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Gamekit3D.SimpleSFX.SimpleFXSynth::fxName
	String_t* ___fxName_4;
	// System.Single Gamekit3D.SimpleSFX.SimpleFXSynth::duration
	float ___duration_5;
	// System.Boolean Gamekit3D.SimpleSFX.SimpleFXSynth::playOnStart
	bool ___playOnStart_6;
	// Gamekit3D.SimpleSFX.SynthLayer[] Gamekit3D.SimpleSFX.SimpleFXSynth::layers
	SynthLayerU5BU5D_t9919E41BA20A575D559D9106FFEDDF881237EAD6* ___layers_7;
	// UnityEngine.AudioSource Gamekit3D.SimpleSFX.SimpleFXSynth::audio
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audio_8;

public:
	inline static int32_t get_offset_of_fxName_4() { return static_cast<int32_t>(offsetof(SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17, ___fxName_4)); }
	inline String_t* get_fxName_4() const { return ___fxName_4; }
	inline String_t** get_address_of_fxName_4() { return &___fxName_4; }
	inline void set_fxName_4(String_t* value)
	{
		___fxName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fxName_4), (void*)value);
	}

	inline static int32_t get_offset_of_duration_5() { return static_cast<int32_t>(offsetof(SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17, ___duration_5)); }
	inline float get_duration_5() const { return ___duration_5; }
	inline float* get_address_of_duration_5() { return &___duration_5; }
	inline void set_duration_5(float value)
	{
		___duration_5 = value;
	}

	inline static int32_t get_offset_of_playOnStart_6() { return static_cast<int32_t>(offsetof(SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17, ___playOnStart_6)); }
	inline bool get_playOnStart_6() const { return ___playOnStart_6; }
	inline bool* get_address_of_playOnStart_6() { return &___playOnStart_6; }
	inline void set_playOnStart_6(bool value)
	{
		___playOnStart_6 = value;
	}

	inline static int32_t get_offset_of_layers_7() { return static_cast<int32_t>(offsetof(SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17, ___layers_7)); }
	inline SynthLayerU5BU5D_t9919E41BA20A575D559D9106FFEDDF881237EAD6* get_layers_7() const { return ___layers_7; }
	inline SynthLayerU5BU5D_t9919E41BA20A575D559D9106FFEDDF881237EAD6** get_address_of_layers_7() { return &___layers_7; }
	inline void set_layers_7(SynthLayerU5BU5D_t9919E41BA20A575D559D9106FFEDDF881237EAD6* value)
	{
		___layers_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layers_7), (void*)value);
	}

	inline static int32_t get_offset_of_audio_8() { return static_cast<int32_t>(offsetof(SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17, ___audio_8)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audio_8() const { return ___audio_8; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audio_8() { return &___audio_8; }
	inline void set_audio_8(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audio_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audio_8), (void*)value);
	}
};

struct SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip> Gamekit3D.SimpleSFX.SimpleFXSynth::clips
	Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E * ___clips_9;

public:
	inline static int32_t get_offset_of_clips_9() { return static_cast<int32_t>(offsetof(SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17_StaticFields, ___clips_9)); }
	inline Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E * get_clips_9() const { return ___clips_9; }
	inline Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E ** get_address_of_clips_9() { return &___clips_9; }
	inline void set_clips_9(Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E * value)
	{
		___clips_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clips_9), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
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
// Gamekit3D.SimpleSFX.SynthLayer[]
struct SynthLayerU5BU5D_t9919E41BA20A575D559D9106FFEDDF881237EAD6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * m_Items[1];

public:
	inline SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m65426A0A2C2F83271252601E2AF4A31C3A0FD22D_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m3C02335CFC5106AE22A3A6766602716222F52554_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Single>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);

// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.IO.FileStream Gamekit3D.SimpleSFX.AudioClipExporter::CreateEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * AudioClipExporter_CreateEmpty_mA2D68D50AB2C5B0E7BD81088769689C3C3253F0B (String_t* ___filepath0, const RuntimeMethod* method);
// System.Void Gamekit3D.SimpleSFX.AudioClipExporter::ConvertAndWrite(System.IO.FileStream,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipExporter_ConvertAndWrite_mBA38798368EFAE0DDAAA7587E875CCF8CC5BBD73 (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * ___fileStream0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___samples1, const RuntimeMethod* method);
// System.Void Gamekit3D.SimpleSFX.AudioClipExporter::WriteHeader(System.IO.FileStream,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipExporter_WriteHeader_m8512CB91CEE6335509E7E52A8A98450C7541BEA0 (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * ___fileStream0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data1, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m2D7410645789EBED93CAA8146D271C79156E2CB0 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m65426A0A2C2F83271252601E2AF4A31C3A0FD22D (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m65426A0A2C2F83271252601E2AF4A31C3A0FD22D_gshared)(__this, ___collection0, method);
}
// System.Int32 UnityEngine.AudioClip::get_channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m5346F253EE3761A2535B20E0E27B6AB0B875BFCD (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// UnityEngine.AudioClip Gamekit3D.SimpleSFX.AudioClipExporter::TrimSilence(System.Collections.Generic.List`1<System.Single>,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioClipExporter_TrimSilence_mA5C15D2E9EF2D2D6DEE227A430E3677A14797E22 (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___samples0, float ___min1, int32_t ___channels2, int32_t ___hz3, const RuntimeMethod* method);
// UnityEngine.AudioClip Gamekit3D.SimpleSFX.AudioClipExporter::TrimSilence(System.Collections.Generic.List`1<System.Single>,System.Single,System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioClipExporter_TrimSilence_m6AD192694B738EF3507AD0402124C0ACB7A83FF4 (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___samples0, float ___min1, int32_t ___channels2, int32_t ___hz3, bool ____3D4, bool ___stream5, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, int32_t, const RuntimeMethod*))List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
inline int32_t List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m3C02335CFC5106AE22A3A6766602716222F52554 (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m3C02335CFC5106AE22A3A6766602716222F52554_gshared)(__this, ___index0, ___count1, method);
}
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioClip_Create_m889DC46878E297CE089D4182F5FCDC4961529137 (String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Single>::ToArray()
inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4 (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4_gshared)(__this, method);
}
// System.Boolean UnityEngine.AudioClip::SetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m3424F9C6C5B7A15491B79F961C30D8F0051E34F7 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_mDC286819520925AB5873921EFFEADA1EC1648CFB (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * __this, String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m4178DFE7B47F12FAF452AA4742B16FC3BA9618A8 (int16_t ___value0, const RuntimeMethod* method);
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_m6AF950973942E09BAB1F21B055BBD2CD58C980B2 (RuntimeArray * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m4BCB9C5EF4286885A640995E44AB52E5F629E3C7 (int64_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39 (int32_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m3C97C148BCA617D42430B74AB3B71E6F64E8F296 (uint16_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599 (float ___f0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void Gamekit3D.SimpleSFX.BQFilter::SetCoeff(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BQFilter_SetCoeff_m1AABEAC78910CEB7ABBAFEF061D5900933928277 (BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * __this, float ___aa00, float ___aa11, float ___aa22, float ___b03, float ___b14, float ___b25, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Gamekit3D.SimpleSFX.SimpleFXSynth::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleFXSynth_Init_m132346096670A968173CD823D908ABE82FAC5DF9 (SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17 * __this, const RuntimeMethod* method);
// System.Void Gamekit3D.SimpleSFX.SimpleFXSynth/<Start>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8__ctor_m38B90F60C93F1079F4EDE101A53FF64875B86033 (U3CStartU3Ed__8_tBAA399AC9D5C031CE0438A5F11229F20AC03BC6A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mD67285F79EBD150EA5A4E1330145519429ACE105 (Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip>::get_Item(!0)
inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * Dictionary_2_get_Item_m3C3D41A25839A58F2833075DD1DE5E08CBC31D52 (Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * (*) (Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD8A3DFB6518A152D151908E96F7294183B8911BB (Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E * __this, String_t* ___key0, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E *, String_t*, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Single[] Gamekit3D.SimpleSFX.SimpleFXSynth::RenderAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* SimpleFXSynth_RenderAudio_m142536AE5F4B524FC7A6A27B9564B1D20D840896 (SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void Gamekit3D.SimpleSFX.SynthLayer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynthLayer_Reset_m90B19C6BEB140CD16AC620B3E5D1C595A208F542 (SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * __this, const RuntimeMethod* method);
// System.Single Gamekit3D.SimpleSFX.SynthLayer::Sample(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SynthLayer_Sample_mFF6C500D3002C9B76BB2C7F7BF92896DABE39CEC (SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * __this, float ___duration0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip>::.ctor()
inline void Dictionary_2__ctor_mFEE5D90F96A7C48E1A9FAA53BC37E4E4958DDC13 (Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Single Gamekit3D.SimpleSFX.SynthLayer::BandLimit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SynthLayer_BandLimit_m74397546F038AD37273B5520C188F956931B9602 (SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * __this, float ___smp0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872 (const RuntimeMethod* method);
// System.Single Gamekit3D.SimpleSFX.SynthLayer::SampleOsc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SynthLayer_SampleOsc_m859935821413E6677DAB02E77D0112B35FE88589 (SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// System.Void Gamekit3D.SimpleSFX.BQFilter::SetLowPass(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BQFilter_SetLowPass_m8820B7CFCDF3A6446F02CF9F5F7ACCC682D80252 (BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * __this, float ___freq0, float ___q1, const RuntimeMethod* method);
// System.Single Gamekit3D.SimpleSFX.BQFilter::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BQFilter_Update_mB4A9350FC0199A41B62363B7E443881CE7E0692C (BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * __this, float ___v0, const RuntimeMethod* method);
// System.Void Gamekit3D.SimpleSFX.BQFilter::SetHighPass(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BQFilter_SetHighPass_m89BE1C7C1F18683CBFB268F2D3219B98A8EB537C (BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * __this, float ___freq0, float ___q1, const RuntimeMethod* method);
// System.Void Gamekit3D.SimpleSFX.BQFilter::SetBandPass(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BQFilter_SetBandPass_m8666B1B10C90D85480699C7FBF8F13482E2CF904 (BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * __this, float ___freq0, float ___q1, const RuntimeMethod* method);
// System.Void Gamekit3D.SimpleSFX.BQFilter::SetBandStop(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BQFilter_SetBandStop_m04718A46BF38DD5F084993BC271A1EAA86BC0C77 (BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * __this, float ___freq0, float ___q1, const RuntimeMethod* method);
// System.Void Gamekit3D.SimpleSFX.BQFilter::SetAllPass(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BQFilter_SetAllPass_mDDC55441B3EE913D0DCF21DFC06E3AE769CEA129 (BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * __this, float ___freq0, float ___q1, const RuntimeMethod* method);
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::Linear(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * AnimationCurve_Linear_mE61D9A684B81B47365C299B6B9C5D744FC9DFBFA (float ___timeStart0, float ___valueStart1, float ___timeEnd2, float ___valueEnd3, const RuntimeMethod* method);
// System.Void Gamekit3D.SimpleSFX.BQFilter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BQFilter__ctor_m89489C7A3EFA900E6F316261D0A88F2D590BF4C1 (BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void Gamekit3D.SimpleSFX.SimpleFXSynth::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleFXSynth_Play_m11C396CBB7BED2EAE01D28F07C3238F9D856796D (SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Boolean Gamekit3D.SimpleSFX.AudioClipExporter::Save(System.String,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipExporter_Save_m9A4C40F1D6F89CBD35E5103BED0E672F83693FA1 (String_t* ___filename0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (!filename.ToLower().EndsWith(".wav"))
		String_t* L_0 = ___filename0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_1, _stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		// filename += ".wav";
		String_t* L_3 = ___filename0;
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_3, _stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198, /*hidden argument*/NULL);
		___filename0 = L_4;
	}

IL_001f:
	{
		// Debug.Log(filename);
		String_t* L_5 = ___filename0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
		// using (var fileStream = CreateEmpty(filename))
		String_t* L_6 = ___filename0;
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_7;
		L_7 = AudioClipExporter_CreateEmpty_mA2D68D50AB2C5B0E7BD81088769689C3C3253F0B(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		// ConvertAndWrite(fileStream, data);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_8 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = ___data1;
		AudioClipExporter_ConvertAndWrite_mBA38798368EFAE0DDAAA7587E875CCF8CC5BBD73(L_8, L_9, /*hidden argument*/NULL);
		// WriteHeader(fileStream, data);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_10 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = ___data1;
		AudioClipExporter_WriteHeader_m8512CB91CEE6335509E7E52A8A98450C7541BEA0(L_10, L_11, /*hidden argument*/NULL);
		// fileStream.Close();
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_12 = V_0;
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_12);
		// }
		IL2CPP_LEAVE(0x4C, FINALLY_0042);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		{
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_13 = V_0;
			if (!L_13)
			{
				goto IL_004b;
			}
		}

IL_0045:
		{
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_14 = V_0;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_14);
		}

IL_004b:
		{
			IL2CPP_END_FINALLY(66)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// return true; // TODO: return false if there's a failure saving the file
		return (bool)1;
	}
}
// UnityEngine.AudioClip Gamekit3D.SimpleSFX.AudioClipExporter::TrimSilence(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioClipExporter_TrimSilence_m36D6CBE9CECDC1926F4A397DD580129F151D18F7 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, float ___min1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m65426A0A2C2F83271252601E2AF4A31C3A0FD22D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	{
		// var samples = new float[clip.samples];
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_0 = ___clip0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_0, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// clip.GetData(samples, 0);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3 = ___clip0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = AudioClip_GetData_m2D7410645789EBED93CAA8146D271C79156E2CB0(L_3, L_4, 0, /*hidden argument*/NULL);
		// return TrimSilence(new List<float>(samples), min, clip.channels, clip.frequency);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = V_0;
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_7 = (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)il2cpp_codegen_object_new(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
		List_1__ctor_m65426A0A2C2F83271252601E2AF4A31C3A0FD22D(L_7, (RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/List_1__ctor_m65426A0A2C2F83271252601E2AF4A31C3A0FD22D_RuntimeMethod_var);
		float L_8 = ___min1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_9 = ___clip0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8(L_9, /*hidden argument*/NULL);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_11 = ___clip0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = AudioClip_get_frequency_m5346F253EE3761A2535B20E0E27B6AB0B875BFCD(L_11, /*hidden argument*/NULL);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_13;
		L_13 = AudioClipExporter_TrimSilence_mA5C15D2E9EF2D2D6DEE227A430E3677A14797E22(L_7, L_8, L_10, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// UnityEngine.AudioClip Gamekit3D.SimpleSFX.AudioClipExporter::TrimSilence(System.Collections.Generic.List`1<System.Single>,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioClipExporter_TrimSilence_mA5C15D2E9EF2D2D6DEE227A430E3677A14797E22 (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___samples0, float ___min1, int32_t ___channels2, int32_t ___hz3, const RuntimeMethod* method)
{
	{
		// return TrimSilence(samples, min, channels, hz, false, false);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_0 = ___samples0;
		float L_1 = ___min1;
		int32_t L_2 = ___channels2;
		int32_t L_3 = ___hz3;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4;
		L_4 = AudioClipExporter_TrimSilence_m6AD192694B738EF3507AD0402124C0ACB7A83FF4(L_0, L_1, L_2, L_3, (bool)0, (bool)0, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.AudioClip Gamekit3D.SimpleSFX.AudioClipExporter::TrimSilence(System.Collections.Generic.List`1<System.Single>,System.Single,System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioClipExporter_TrimSilence_m6AD192694B738EF3507AD0402124C0ACB7A83FF4 (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___samples0, float ___min1, int32_t ___channels2, int32_t ___hz3, bool ____3D4, bool ___stream5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m3C02335CFC5106AE22A3A6766602716222F52554_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CE10074DA4EDD547E37EFFF41398CD6AD4437FE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (i = 0; i < samples.Count; i++)
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		// if (Mathf.Abs(samples[i]) > min)
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_0 = ___samples0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		float L_2;
		L_2 = List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4 = ___min1;
		if ((((float)L_3) > ((float)L_4)))
		{
			goto IL_0020;
		}
	}
	{
		// for (i = 0; i < samples.Count; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0017:
	{
		// for (i = 0; i < samples.Count; i++)
		int32_t L_6 = V_0;
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_7 = ___samples0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline(L_7, /*hidden argument*/List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}

IL_0020:
	{
		// samples.RemoveRange(0, i);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_9 = ___samples0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		List_1_RemoveRange_m3C02335CFC5106AE22A3A6766602716222F52554(L_9, 0, L_10, /*hidden argument*/List_1_RemoveRange_m3C02335CFC5106AE22A3A6766602716222F52554_RuntimeMethod_var);
		// for (i = samples.Count - 1; i > 0; i--)
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_11 = ___samples0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline(L_11, /*hidden argument*/List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		goto IL_0046;
	}

IL_0033:
	{
		// if (Mathf.Abs(samples[i]) > min)
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_13 = ___samples0;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		float L_15;
		L_15 = List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline(L_13, L_14, /*hidden argument*/List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		float L_16;
		L_16 = fabsf(L_15);
		float L_17 = ___min1;
		if ((((float)L_16) > ((float)L_17)))
		{
			goto IL_004a;
		}
	}
	{
		// for (i = samples.Count - 1; i > 0; i--)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1));
	}

IL_0046:
	{
		// for (i = samples.Count - 1; i > 0; i--)
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_0033;
		}
	}

IL_004a:
	{
		// samples.RemoveRange(i, samples.Count - i);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_20 = ___samples0;
		int32_t L_21 = V_0;
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_22 = ___samples0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline(L_22, /*hidden argument*/List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var);
		int32_t L_24 = V_0;
		NullCheck(L_20);
		List_1_RemoveRange_m3C02335CFC5106AE22A3A6766602716222F52554(L_20, L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24)), /*hidden argument*/List_1_RemoveRange_m3C02335CFC5106AE22A3A6766602716222F52554_RuntimeMethod_var);
		// var clip = AudioClip.Create("TempClip", samples.Count, channels, hz, stream);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_25 = ___samples0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline(L_25, /*hidden argument*/List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var);
		int32_t L_27 = ___channels2;
		int32_t L_28 = ___hz3;
		bool L_29 = ___stream5;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_30;
		L_30 = AudioClip_Create_m889DC46878E297CE089D4182F5FCDC4961529137(_stringLiteral7CE10074DA4EDD547E37EFFF41398CD6AD4437FE, L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
		// clip.SetData(samples.ToArray(), 0);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_31 = L_30;
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_32 = ___samples0;
		NullCheck(L_32);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_33;
		L_33 = List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4(L_32, /*hidden argument*/List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4_RuntimeMethod_var);
		NullCheck(L_31);
		bool L_34;
		L_34 = AudioClip_SetData_m3424F9C6C5B7A15491B79F961C30D8F0051E34F7(L_31, L_33, 0, /*hidden argument*/NULL);
		// return clip;
		return L_31;
	}
}
// System.IO.FileStream Gamekit3D.SimpleSFX.AudioClipExporter::CreateEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * AudioClipExporter_CreateEmpty_mA2D68D50AB2C5B0E7BD81088769689C3C3253F0B (String_t* ___filepath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * V_0 = NULL;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	{
		// var fileStream = new FileStream(filepath, FileMode.Create);
		String_t* L_0 = ___filepath0;
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_1 = (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)il2cpp_codegen_object_new(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		FileStream__ctor_mDC286819520925AB5873921EFFEADA1EC1648CFB(L_1, L_0, 2, /*hidden argument*/NULL);
		V_0 = L_1;
		// byte emptybyte = new byte();
		V_1 = (uint8_t)0;
		// for (int i = 0; i < HEADER_SIZE; i++) //preparing the header
		V_2 = 0;
		goto IL_0019;
	}

IL_000e:
	{
		// fileStream.WriteByte(emptybyte);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_2 = V_0;
		uint8_t L_3 = V_1;
		NullCheck(L_2);
		VirtActionInvoker1< uint8_t >::Invoke(24 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_2, L_3);
		// for (int i = 0; i < HEADER_SIZE; i++) //preparing the header
		int32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0019:
	{
		// for (int i = 0; i < HEADER_SIZE; i++) //preparing the header
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)44))))
		{
			goto IL_000e;
		}
	}
	{
		// return fileStream;
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_6 = V_0;
		return L_6;
	}
}
// System.Void Gamekit3D.SimpleSFX.AudioClipExporter::ConvertAndWrite(System.IO.FileStream,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipExporter_ConvertAndWrite_mBA38798368EFAE0DDAAA7587E875CCF8CC5BBD73 (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * ___fileStream0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___samples1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// Int16[] intData = new Int16[samples.Length];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___samples1;
		NullCheck(L_0);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		// byte[] bytesData = new byte[samples.Length * 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___samples1;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), (int32_t)2)));
		V_1 = L_3;
		// int rescaleFactor = 32767; //to convert float to Int16
		V_2 = ((int32_t)32767);
		// for (int i = 0; i < samples.Length; i++)
		V_3 = 0;
		goto IL_0044;
	}

IL_001e:
	{
		// intData[i] = (short)(samples[i] * rescaleFactor);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = V_0;
		int32_t L_5 = V_3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___samples1;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_2;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int16_t)il2cpp_codegen_cast_double_to_int<int16_t>(((float)il2cpp_codegen_multiply((float)L_9, (float)((float)((float)L_10))))));
		// byte[] byteArr = new byte[2];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)2);
		// byteArr = BitConverter.GetBytes(intData[i]);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int16_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = BitConverter_GetBytes_m4178DFE7B47F12FAF452AA4742B16FC3BA9618A8(L_15, /*hidden argument*/NULL);
		// byteArr.CopyTo(bytesData, i * 2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_16);
		Array_CopyTo_m6AF950973942E09BAB1F21B055BBD2CD58C980B2((RuntimeArray *)(RuntimeArray *)L_16, (RuntimeArray *)(RuntimeArray *)L_17, ((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)2)), /*hidden argument*/NULL);
		// for (int i = 0; i < samples.Length; i++)
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0044:
	{
		// for (int i = 0; i < samples.Length; i++)
		int32_t L_20 = V_3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_21 = ___samples1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		// fileStream.Write(bytesData, 0, bytesData.Length);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_22 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = V_1;
		NullCheck(L_24);
		NullCheck(L_22);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_22, L_23, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))));
		// }
		return;
	}
}
// System.Void Gamekit3D.SimpleSFX.AudioClipExporter::WriteHeader(System.IO.FileStream,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipExporter_WriteHeader_m8512CB91CEE6335509E7E52A8A98450C7541BEA0 (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * ___fileStream0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_6 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_7 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_8 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_9 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_10 = NULL;
	uint16_t V_11 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_12 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_13 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_14 = NULL;
	{
		// var hz = 44100;
		// var channels = 2;
		V_0 = 2;
		// var samples = data.Length;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___data1;
		NullCheck(L_0);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		// fileStream.Seek(0, SeekOrigin.Begin);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_1 = ___fileStream0;
		NullCheck(L_1);
		int64_t L_2;
		L_2 = VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_1, ((int64_t)((int64_t)0)), 0);
		// byte[] riff = System.Text.Encoding.UTF8.GetBytes("RIFF");
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3;
		L_3 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, _stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
		V_2 = L_4;
		// fileStream.Write(riff, 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_5 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_2;
		NullCheck(L_5);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, 4);
		// byte[] chunkSize = BitConverter.GetBytes(fileStream.Length - 8);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_7 = ___fileStream0;
		NullCheck(L_7);
		int64_t L_8;
		L_8 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_7);
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = BitConverter_GetBytes_m4BCB9C5EF4286885A640995E44AB52E5F629E3C7(((int64_t)il2cpp_codegen_subtract((int64_t)L_8, (int64_t)((int64_t)((int64_t)8)))), /*hidden argument*/NULL);
		V_3 = L_9;
		// fileStream.Write(chunkSize, 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_10 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_3;
		NullCheck(L_10);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_10, L_11, 0, 4);
		// byte[] wave = System.Text.Encoding.UTF8.GetBytes("WAVE");
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_12;
		L_12 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, _stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
		V_4 = L_13;
		// fileStream.Write(wave, 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_14 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = V_4;
		NullCheck(L_14);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, 4);
		// byte[] fmt = System.Text.Encoding.UTF8.GetBytes("fmt ");
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_16;
		L_16 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_16);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17;
		L_17 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_16, _stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
		V_5 = L_17;
		// fileStream.Write(fmt, 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_18 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = V_5;
		NullCheck(L_18);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_18, L_19, 0, 4);
		// byte[] subChunk1 = BitConverter.GetBytes(16);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20;
		L_20 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(((int32_t)16), /*hidden argument*/NULL);
		V_6 = L_20;
		// fileStream.Write(subChunk1, 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_21 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = V_6;
		NullCheck(L_21);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_21, L_22, 0, 4);
		// UInt16 one = 1;
		// byte[] audioFormat = BitConverter.GetBytes(one);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = BitConverter_GetBytes_m3C97C148BCA617D42430B74AB3B71E6F64E8F296((uint16_t)1, /*hidden argument*/NULL);
		V_7 = L_23;
		// fileStream.Write(audioFormat, 0, 2);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_24 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = V_7;
		NullCheck(L_24);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_24, L_25, 0, 2);
		// byte[] numChannels = BitConverter.GetBytes(channels);
		int32_t L_26 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27;
		L_27 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(L_26, /*hidden argument*/NULL);
		V_8 = L_27;
		// fileStream.Write(numChannels, 0, 2);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_28 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = V_8;
		NullCheck(L_28);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_28, L_29, 0, 2);
		// byte[] sampleRate = BitConverter.GetBytes(hz);
		int32_t L_30 = ((int32_t)44100);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31;
		L_31 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(L_30, /*hidden argument*/NULL);
		V_9 = L_31;
		// fileStream.Write(sampleRate, 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_32 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = V_9;
		NullCheck(L_32);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_32, L_33, 0, 4);
		// byte[] byteRate = BitConverter.GetBytes(hz * channels * 2); // sampleRate * bytesPerSample*number of channels, here Osc.SAMPLERATE*2*2
		int32_t L_34 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35;
		L_35 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_30, (int32_t)L_34)), (int32_t)2)), /*hidden argument*/NULL);
		V_10 = L_35;
		// fileStream.Write(byteRate, 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_36 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = V_10;
		NullCheck(L_36);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_36, L_37, 0, 4);
		// UInt16 blockAlign = (ushort)(channels * 2);
		int32_t L_38 = V_0;
		V_11 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_38, (int32_t)2))));
		// fileStream.Write(BitConverter.GetBytes(blockAlign), 0, 2);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_39 = ___fileStream0;
		uint16_t L_40 = V_11;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41;
		L_41 = BitConverter_GetBytes_m3C97C148BCA617D42430B74AB3B71E6F64E8F296(L_40, /*hidden argument*/NULL);
		NullCheck(L_39);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_39, L_41, 0, 2);
		// UInt16 bps = 16;
		// byte[] bitsPerSample = BitConverter.GetBytes(bps);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42;
		L_42 = BitConverter_GetBytes_m3C97C148BCA617D42430B74AB3B71E6F64E8F296((uint16_t)((int32_t)16), /*hidden argument*/NULL);
		V_12 = L_42;
		// fileStream.Write(bitsPerSample, 0, 2);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_43 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_44 = V_12;
		NullCheck(L_43);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_43, L_44, 0, 2);
		// byte[] datastring = System.Text.Encoding.UTF8.GetBytes("data");
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_45;
		L_45 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_45);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46;
		L_46 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_45, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		V_13 = L_46;
		// fileStream.Write(datastring, 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_47 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_48 = V_13;
		NullCheck(L_47);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_47, L_48, 0, 4);
		// byte[] subChunk2 = BitConverter.GetBytes(samples * channels * 2);
		int32_t L_49 = V_1;
		int32_t L_50 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_51;
		L_51 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_49, (int32_t)L_50)), (int32_t)2)), /*hidden argument*/NULL);
		V_14 = L_51;
		// fileStream.Write(subChunk2, 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_52 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_53 = V_14;
		NullCheck(L_52);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_52, L_53, 0, 4);
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
// System.Single Gamekit3D.SimpleSFX.BQFilter::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BQFilter_Update_mB4A9350FC0199A41B62363B7E443881CE7E0692C (BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * __this, float ___v0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * G_B2_0 = NULL;
	BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * G_B3_1 = NULL;
	BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * G_B5_0 = NULL;
	BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * G_B6_1 = NULL;
	BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * G_B8_0 = NULL;
	BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * G_B7_0 = NULL;
	float G_B9_0 = 0.0f;
	BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * G_B9_1 = NULL;
	BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * G_B11_0 = NULL;
	BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * G_B10_0 = NULL;
	float G_B12_0 = 0.0f;
	BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * G_B12_1 = NULL;
	{
		// var smp = a0 * v + a1 * x1 + a2 * x2 - a3 * y1 - a4 * y2;
		float L_0 = __this->get_a0_1();
		float L_1 = ___v0;
		float L_2 = __this->get_a1_2();
		float L_3 = __this->get_x1_6();
		float L_4 = __this->get_a2_3();
		float L_5 = __this->get_x2_7();
		float L_6 = __this->get_a3_4();
		float L_7 = __this->get_y1_8();
		float L_8 = __this->get_a4_5();
		float L_9 = __this->get_y2_9();
		V_0 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))), (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)))), (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9))));
		// x2 = float.IsNaN(x1) ? 0 : x1;
		float L_10 = __this->get_x1_6();
		bool L_11;
		L_11 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(L_10, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_11)
		{
			G_B2_0 = __this;
			goto IL_0057;
		}
	}
	{
		float L_12 = __this->get_x1_6();
		G_B3_0 = L_12;
		G_B3_1 = G_B1_0;
		goto IL_005c;
	}

IL_0057:
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B2_0;
	}

IL_005c:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_x2_7(G_B3_0);
		// x1 = float.IsNaN(v) ? 0 : v;
		float L_13 = ___v0;
		bool L_14;
		L_14 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(L_13, /*hidden argument*/NULL);
		G_B4_0 = __this;
		if (L_14)
		{
			G_B5_0 = __this;
			goto IL_006d;
		}
	}
	{
		float L_15 = ___v0;
		G_B6_0 = L_15;
		G_B6_1 = G_B4_0;
		goto IL_0072;
	}

IL_006d:
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B5_0;
	}

IL_0072:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_x1_6(G_B6_0);
		// y2 = float.IsNaN(y1) ? 0 : y1;
		float L_16 = __this->get_y1_8();
		bool L_17;
		L_17 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(L_16, /*hidden argument*/NULL);
		G_B7_0 = __this;
		if (L_17)
		{
			G_B8_0 = __this;
			goto IL_008d;
		}
	}
	{
		float L_18 = __this->get_y1_8();
		G_B9_0 = L_18;
		G_B9_1 = G_B7_0;
		goto IL_0092;
	}

IL_008d:
	{
		G_B9_0 = (0.0f);
		G_B9_1 = G_B8_0;
	}

IL_0092:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_y2_9(G_B9_0);
		// y1 = float.IsNaN(smp) ? 0 : smp;
		float L_19 = V_0;
		bool L_20;
		L_20 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(L_19, /*hidden argument*/NULL);
		G_B10_0 = __this;
		if (L_20)
		{
			G_B11_0 = __this;
			goto IL_00a3;
		}
	}
	{
		float L_21 = V_0;
		G_B12_0 = L_21;
		G_B12_1 = G_B10_0;
		goto IL_00a8;
	}

IL_00a3:
	{
		G_B12_0 = (0.0f);
		G_B12_1 = G_B11_0;
	}

IL_00a8:
	{
		NullCheck(G_B12_1);
		G_B12_1->set_y1_8(G_B12_0);
		// return y1;
		float L_22 = __this->get_y1_8();
		return L_22;
	}
}
// System.Void Gamekit3D.SimpleSFX.BQFilter::SetCoeff(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BQFilter_SetCoeff_m1AABEAC78910CEB7ABBAFEF061D5900933928277 (BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * __this, float ___aa00, float ___aa11, float ___aa22, float ___b03, float ___b14, float ___b25, const RuntimeMethod* method)
{
	{
		// a0 = b0 / aa0;
		float L_0 = ___b03;
		float L_1 = ___aa00;
		__this->set_a0_1(((float)((float)L_0/(float)L_1)));
		// a1 = b1 / aa0;
		float L_2 = ___b14;
		float L_3 = ___aa00;
		__this->set_a1_2(((float)((float)L_2/(float)L_3)));
		// a2 = b2 / aa0;
		float L_4 = ___b25;
		float L_5 = ___aa00;
		__this->set_a2_3(((float)((float)L_4/(float)L_5)));
		// a3 = aa1 / aa0;
		float L_6 = ___aa11;
		float L_7 = ___aa00;
		__this->set_a3_4(((float)((float)L_6/(float)L_7)));
		// a4 = aa2 / aa0;
		float L_8 = ___aa22;
		float L_9 = ___aa00;
		__this->set_a4_5(((float)((float)L_8/(float)L_9)));
		// }
		return;
	}
}
// System.Void Gamekit3D.SimpleSFX.BQFilter::SetLowPass(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BQFilter_SetLowPass_m8820B7CFCDF3A6446F02CF9F5F7ACCC682D80252 (BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * __this, float ___freq0, float ___q1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// freq = Mathf.Clamp(freq, Mathf.Epsilon, sampleRate / 4);
		float L_0 = ___freq0;
		float L_1 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		float L_2;
		L_2 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_0, L_1, (11025.0f), /*hidden argument*/NULL);
		___freq0 = L_2;
		// if (q <= 0.01f) q = 0.01f;
		float L_3 = ___q1;
		if ((!(((float)L_3) <= ((float)(0.00999999978f)))))
		{
			goto IL_0021;
		}
	}
	{
		// if (q <= 0.01f) q = 0.01f;
		___q1 = (0.00999999978f);
	}

IL_0021:
	{
		// var w0 = 2 * Mathf.PI * freq / sampleRate;
		float L_4 = ___freq0;
		// var cosw0 = Mathf.Cos(w0);
		float L_5 = ((float)((float)((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_4))/(float)(44100.0f)));
		float L_6;
		L_6 = cosf(L_5);
		V_0 = L_6;
		// var alpha = Mathf.Sin(w0) / (2 * q);
		float L_7;
		L_7 = sinf(L_5);
		float L_8 = ___q1;
		V_1 = ((float)((float)L_7/(float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_8))));
		// var b0 = (1 - cosw0) / 2;
		float L_9 = V_0;
		V_2 = ((float)((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_9))/(float)(2.0f)));
		// var b1 = 1 - cosw0;
		float L_10 = V_0;
		V_3 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_10));
		// var b2 = (1 - cosw0) / 2;
		float L_11 = V_0;
		V_4 = ((float)((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_11))/(float)(2.0f)));
		// var aa0 = 1 + alpha;
		float L_12 = V_1;
		V_5 = ((float)il2cpp_codegen_add((float)(1.0f), (float)L_12));
		// var aa1 = -2 * cosw0;
		float L_13 = V_0;
		V_6 = ((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_13));
		// var aa2 = 1 - alpha;
		float L_14 = V_1;
		V_7 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_14));
		// SetCoeff(aa0, aa1, aa2, b0, b1, b2);
		float L_15 = V_5;
		float L_16 = V_6;
		float L_17 = V_7;
		float L_18 = V_2;
		float L_19 = V_3;
		float L_20 = V_4;
		BQFilter_SetCoeff_m1AABEAC78910CEB7ABBAFEF061D5900933928277(__this, L_15, L_16, L_17, L_18, L_19, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gamekit3D.SimpleSFX.BQFilter::SetHighPass(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BQFilter_SetHighPass_m89BE1C7C1F18683CBFB268F2D3219B98A8EB537C (BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * __this, float ___freq0, float ___q1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// freq = Mathf.Clamp(freq, Mathf.Epsilon, sampleRate / 4);
		float L_0 = ___freq0;
		float L_1 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		float L_2;
		L_2 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_0, L_1, (11025.0f), /*hidden argument*/NULL);
		___freq0 = L_2;
		// if (q <= 0.01f) q = 0.01f;
		float L_3 = ___q1;
		if ((!(((float)L_3) <= ((float)(0.00999999978f)))))
		{
			goto IL_0021;
		}
	}
	{
		// if (q <= 0.01f) q = 0.01f;
		___q1 = (0.00999999978f);
	}

IL_0021:
	{
		// var w0 = 2 * Mathf.PI * freq / sampleRate;
		float L_4 = ___freq0;
		// var cosw0 = Mathf.Cos(w0);
		float L_5 = ((float)((float)((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_4))/(float)(44100.0f)));
		float L_6;
		L_6 = cosf(L_5);
		V_0 = L_6;
		// var alpha = Mathf.Sin(w0) / (2 * q);
		float L_7;
		L_7 = sinf(L_5);
		float L_8 = ___q1;
		V_1 = ((float)((float)L_7/(float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_8))));
		// var b0 = (1 + cosw0) / 2;
		float L_9 = V_0;
		V_2 = ((float)((float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_9))/(float)(2.0f)));
		// var b1 = -(1 + cosw0);
		float L_10 = V_0;
		V_3 = ((-((float)il2cpp_codegen_add((float)(1.0f), (float)L_10))));
		// var b2 = (1 + cosw0) / 2;
		float L_11 = V_0;
		V_4 = ((float)((float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_11))/(float)(2.0f)));
		// var aa0 = 1 + alpha;
		float L_12 = V_1;
		V_5 = ((float)il2cpp_codegen_add((float)(1.0f), (float)L_12));
		// var aa1 = -2 * cosw0;
		float L_13 = V_0;
		V_6 = ((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_13));
		// var aa2 = 1 - alpha;
		float L_14 = V_1;
		V_7 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_14));
		// SetCoeff(aa0, aa1, aa2, b0, b1, b2);
		float L_15 = V_5;
		float L_16 = V_6;
		float L_17 = V_7;
		float L_18 = V_2;
		float L_19 = V_3;
		float L_20 = V_4;
		BQFilter_SetCoeff_m1AABEAC78910CEB7ABBAFEF061D5900933928277(__this, L_15, L_16, L_17, L_18, L_19, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gamekit3D.SimpleSFX.BQFilter::SetBandPass(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BQFilter_SetBandPass_m8666B1B10C90D85480699C7FBF8F13482E2CF904 (BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * __this, float ___freq0, float ___q1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// freq = Mathf.Clamp(freq, Mathf.Epsilon, sampleRate / 4);
		float L_0 = ___freq0;
		float L_1 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		float L_2;
		L_2 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_0, L_1, (11025.0f), /*hidden argument*/NULL);
		___freq0 = L_2;
		// if (q <= 0.01f) q = 0.01f;
		float L_3 = ___q1;
		if ((!(((float)L_3) <= ((float)(0.00999999978f)))))
		{
			goto IL_0021;
		}
	}
	{
		// if (q <= 0.01f) q = 0.01f;
		___q1 = (0.00999999978f);
	}

IL_0021:
	{
		// var w0 = 2 * Mathf.PI * freq / sampleRate;
		float L_4 = ___freq0;
		// var cosw0 = Mathf.Cos(w0);
		float L_5 = ((float)((float)((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_4))/(float)(44100.0f)));
		float L_6;
		L_6 = cosf(L_5);
		V_0 = L_6;
		// var sinw0 = Mathf.Sin(w0);
		float L_7;
		L_7 = sinf(L_5);
		// var alpha = sinw0 / (2 * q);
		float L_8 = ___q1;
		V_1 = ((float)((float)L_7/(float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_8))));
		// var b0 = alpha;
		float L_9 = V_1;
		V_2 = L_9;
		// var b1 = 0;
		V_3 = 0;
		// var b2 = -alpha;
		float L_10 = V_1;
		V_4 = ((-L_10));
		// var a0 = 1 + alpha;
		float L_11 = V_1;
		V_5 = ((float)il2cpp_codegen_add((float)(1.0f), (float)L_11));
		// var a1 = -2 * cosw0;
		float L_12 = V_0;
		V_6 = ((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_12));
		// var a2 = 1 - alpha;
		float L_13 = V_1;
		V_7 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_13));
		// SetCoeff(a0, a1, a2, b0, b1, b2);
		float L_14 = V_5;
		float L_15 = V_6;
		float L_16 = V_7;
		float L_17 = V_2;
		int32_t L_18 = V_3;
		float L_19 = V_4;
		BQFilter_SetCoeff_m1AABEAC78910CEB7ABBAFEF061D5900933928277(__this, L_14, L_15, L_16, L_17, ((float)((float)L_18)), L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gamekit3D.SimpleSFX.BQFilter::SetBandStop(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BQFilter_SetBandStop_m04718A46BF38DD5F084993BC271A1EAA86BC0C77 (BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * __this, float ___freq0, float ___q1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// freq = Mathf.Clamp(freq, Mathf.Epsilon, sampleRate / 4);
		float L_0 = ___freq0;
		float L_1 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		float L_2;
		L_2 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_0, L_1, (11025.0f), /*hidden argument*/NULL);
		___freq0 = L_2;
		// if (q <= 0.01f) q = 0.01f;
		float L_3 = ___q1;
		if ((!(((float)L_3) <= ((float)(0.00999999978f)))))
		{
			goto IL_0021;
		}
	}
	{
		// if (q <= 0.01f) q = 0.01f;
		___q1 = (0.00999999978f);
	}

IL_0021:
	{
		// var w0 = 2 * Mathf.PI * freq / sampleRate;
		float L_4 = ___freq0;
		// var cosw0 = Mathf.Cos(w0);
		float L_5 = ((float)((float)((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_4))/(float)(44100.0f)));
		float L_6;
		L_6 = cosf(L_5);
		V_0 = L_6;
		// var sinw0 = Mathf.Sin(w0);
		float L_7;
		L_7 = sinf(L_5);
		// var alpha = sinw0 / (2 * q);
		float L_8 = ___q1;
		V_1 = ((float)((float)L_7/(float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_8))));
		// var b0 = 1;
		V_2 = 1;
		// var b1 = -2 * cosw0;
		float L_9 = V_0;
		V_3 = ((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_9));
		// var b2 = 1;
		V_4 = 1;
		// var a0 = 1 + alpha;
		float L_10 = V_1;
		V_5 = ((float)il2cpp_codegen_add((float)(1.0f), (float)L_10));
		// var a1 = -2 * cosw0;
		float L_11 = V_0;
		V_6 = ((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_11));
		// var a2 = 1 - alpha;
		float L_12 = V_1;
		V_7 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_12));
		// SetCoeff(a0, a1, a2, b0, b1, b2);
		float L_13 = V_5;
		float L_14 = V_6;
		float L_15 = V_7;
		int32_t L_16 = V_2;
		float L_17 = V_3;
		int32_t L_18 = V_4;
		BQFilter_SetCoeff_m1AABEAC78910CEB7ABBAFEF061D5900933928277(__this, L_13, L_14, L_15, ((float)((float)L_16)), L_17, ((float)((float)L_18)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gamekit3D.SimpleSFX.BQFilter::SetAllPass(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BQFilter_SetAllPass_mDDC55441B3EE913D0DCF21DFC06E3AE769CEA129 (BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * __this, float ___freq0, float ___q1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// var w0 = 2 * Mathf.PI * freq / sampleRate;
		float L_0 = ___freq0;
		// var cosw0 = Mathf.Cos(w0);
		float L_1 = ((float)((float)((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_0))/(float)(44100.0f)));
		float L_2;
		L_2 = cosf(L_1);
		V_0 = L_2;
		// var sinw0 = Mathf.Sin(w0);
		float L_3;
		L_3 = sinf(L_1);
		// var alpha = sinw0 / (2 * q);
		float L_4 = ___q1;
		V_1 = ((float)((float)L_3/(float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_4))));
		// var b0 = 1 - alpha;
		float L_5 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_5));
		// var b1 = -2 * cosw0;
		float L_6 = V_0;
		V_3 = ((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_6));
		// var b2 = 1 + alpha;
		float L_7 = V_1;
		V_4 = ((float)il2cpp_codegen_add((float)(1.0f), (float)L_7));
		// var a0 = 1 + alpha;
		float L_8 = V_1;
		V_5 = ((float)il2cpp_codegen_add((float)(1.0f), (float)L_8));
		// var a1 = -2 * cosw0;
		float L_9 = V_0;
		V_6 = ((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_9));
		// var a2 = 1 - alpha;
		float L_10 = V_1;
		V_7 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_10));
		// SetCoeff(a0, a1, a2, b0, b1, b2);
		float L_11 = V_5;
		float L_12 = V_6;
		float L_13 = V_7;
		float L_14 = V_2;
		float L_15 = V_3;
		float L_16 = V_4;
		BQFilter_SetCoeff_m1AABEAC78910CEB7ABBAFEF061D5900933928277(__this, L_11, L_12, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gamekit3D.SimpleSFX.BQFilter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BQFilter__ctor_m89489C7A3EFA900E6F316261D0A88F2D590BF4C1 (BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Gamekit3D.SimpleSFX.SimpleFXSynth::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleFXSynth_Reset_m6E370B1DEF3C9E97944C33FEA17DBCCF164F1A4E (SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audio = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audio_8(L_0);
		// }
		return;
	}
}
// System.Void Gamekit3D.SimpleSFX.SimpleFXSynth::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleFXSynth_OnEnable_mB16FE53600427EAC549AA352CC5A9113AEDF3757 (SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17 * __this, const RuntimeMethod* method)
{
	{
		// Init();
		SimpleFXSynth_Init_m132346096670A968173CD823D908ABE82FAC5DF9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Gamekit3D.SimpleSFX.SimpleFXSynth::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SimpleFXSynth_Start_mE1A74E87A5A3B6CC2F110CC9B161E4D037F853F3 (SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__8_tBAA399AC9D5C031CE0438A5F11229F20AC03BC6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__8_tBAA399AC9D5C031CE0438A5F11229F20AC03BC6A * L_0 = (U3CStartU3Ed__8_tBAA399AC9D5C031CE0438A5F11229F20AC03BC6A *)il2cpp_codegen_object_new(U3CStartU3Ed__8_tBAA399AC9D5C031CE0438A5F11229F20AC03BC6A_il2cpp_TypeInfo_var);
		U3CStartU3Ed__8__ctor_m38B90F60C93F1079F4EDE101A53FF64875B86033(L_0, 0, /*hidden argument*/NULL);
		U3CStartU3Ed__8_tBAA399AC9D5C031CE0438A5F11229F20AC03BC6A * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Gamekit3D.SimpleSFX.SimpleFXSynth::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleFXSynth_Init_m132346096670A968173CD823D908ABE82FAC5DF9 (SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD67285F79EBD150EA5A4E1330145519429ACE105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3C3D41A25839A58F2833075DD1DE5E08CBC31D52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD8A3DFB6518A152D151908E96F7294183B8911BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_0 = NULL;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_1 = NULL;
	{
		// if (audio == null) audio = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audio_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// if (audio == null) audio = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2;
		L_2 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audio_8(L_2);
	}

IL_001a:
	{
		// if (audio == null) return;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get_audio_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// if (audio == null) return;
		return;
	}

IL_0029:
	{
		// if (Application.isPlaying && clips.ContainsKey(fxName))
		bool L_5;
		L_5 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17_il2cpp_TypeInfo_var);
		Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E * L_6 = ((SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17_StaticFields*)il2cpp_codegen_static_fields_for(SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17_il2cpp_TypeInfo_var))->get_clips_9();
		String_t* L_7 = __this->get_fxName_4();
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_ContainsKey_mD67285F79EBD150EA5A4E1330145519429ACE105(L_6, L_7, /*hidden argument*/Dictionary_2_ContainsKey_mD67285F79EBD150EA5A4E1330145519429ACE105_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		// clip = clips[fxName];
		IL2CPP_RUNTIME_CLASS_INIT(SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17_il2cpp_TypeInfo_var);
		Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E * L_9 = ((SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17_StaticFields*)il2cpp_codegen_static_fields_for(SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17_il2cpp_TypeInfo_var))->get_clips_9();
		String_t* L_10 = __this->get_fxName_4();
		NullCheck(L_9);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_11;
		L_11 = Dictionary_2_get_Item_m3C3D41A25839A58F2833075DD1DE5E08CBC31D52(L_9, L_10, /*hidden argument*/Dictionary_2_get_Item_m3C3D41A25839A58F2833075DD1DE5E08CBC31D52_RuntimeMethod_var);
		V_0 = L_11;
		goto IL_009a;
	}

IL_0055:
	{
		// clip = clips[fxName] = AudioClip.Create(this.name, Mathf.FloorToInt(44100 * duration), 2, 44100, false);
		IL2CPP_RUNTIME_CLASS_INIT(SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17_il2cpp_TypeInfo_var);
		Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E * L_12 = ((SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17_StaticFields*)il2cpp_codegen_static_fields_for(SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17_il2cpp_TypeInfo_var))->get_clips_9();
		String_t* L_13 = __this->get_fxName_4();
		String_t* L_14;
		L_14 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		float L_15 = __this->get_duration_5();
		int32_t L_16;
		L_16 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)il2cpp_codegen_multiply((float)(44100.0f), (float)L_15)), /*hidden argument*/NULL);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_17;
		L_17 = AudioClip_Create_m889DC46878E297CE089D4182F5FCDC4961529137(L_14, L_16, 2, ((int32_t)44100), (bool)0, /*hidden argument*/NULL);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_18 = L_17;
		V_1 = L_18;
		NullCheck(L_12);
		Dictionary_2_set_Item_mD8A3DFB6518A152D151908E96F7294183B8911BB(L_12, L_13, L_18, /*hidden argument*/Dictionary_2_set_Item_mD8A3DFB6518A152D151908E96F7294183B8911BB_RuntimeMethod_var);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_19 = V_1;
		V_0 = L_19;
		// clip.SetData(RenderAudio(), 0);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_20 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_21;
		L_21 = SimpleFXSynth_RenderAudio_m142536AE5F4B524FC7A6A27B9564B1D20D840896(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		bool L_22;
		L_22 = AudioClip_SetData_m3424F9C6C5B7A15491B79F961C30D8F0051E34F7(L_20, L_21, 0, /*hidden argument*/NULL);
	}

IL_009a:
	{
		// audio.clip = clip;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_23 = __this->get_audio_8();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_24 = V_0;
		NullCheck(L_23);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_23, L_24, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gamekit3D.SimpleSFX.SimpleFXSynth::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleFXSynth_Play_m11C396CBB7BED2EAE01D28F07C3238F9D856796D (SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17 * __this, const RuntimeMethod* method)
{
	{
		// Init();
		SimpleFXSynth_Init_m132346096670A968173CD823D908ABE82FAC5DF9(__this, /*hidden argument*/NULL);
		// audio.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audio_8();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single[] Gamekit3D.SimpleSFX.SimpleFXSynth::RenderAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* SimpleFXSynth_RenderAudio_m142536AE5F4B524FC7A6A27B9564B1D20D840896 (SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	SynthLayerU5BU5D_t9919E41BA20A575D559D9106FFEDDF881237EAD6* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * V_6 = NULL;
	{
		// foreach (var layer in layers)
		SynthLayerU5BU5D_t9919E41BA20A575D559D9106FFEDDF881237EAD6* L_0 = __this->get_layers_7();
		V_2 = L_0;
		V_3 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		// foreach (var layer in layers)
		SynthLayerU5BU5D_t9919E41BA20A575D559D9106FFEDDF881237EAD6* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// layer.Reset();
		NullCheck(L_4);
		SynthLayer_Reset_m90B19C6BEB140CD16AC620B3E5D1C595A208F542(L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0017:
	{
		// foreach (var layer in layers)
		int32_t L_6 = V_3;
		SynthLayerU5BU5D_t9919E41BA20A575D559D9106FFEDDF881237EAD6* L_7 = V_2;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// var channels = 2;
		V_0 = 2;
		// var data = new float[Mathf.FloorToInt((duration * 44100) * channels)];
		float L_8 = __this->get_duration_5();
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)(44100.0f))), (float)((float)((float)L_9)))), /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_1 = L_11;
		// for (var i = 0; i < data.Length; i += channels)
		V_4 = 0;
		goto IL_0085;
	}

IL_003e:
	{
		// var smp = 0f;
		V_5 = (0.0f);
		// foreach (var layer in layers)
		SynthLayerU5BU5D_t9919E41BA20A575D559D9106FFEDDF881237EAD6* L_12 = __this->get_layers_7();
		V_2 = L_12;
		V_3 = 0;
		goto IL_006b;
	}

IL_0050:
	{
		// foreach (var layer in layers)
		SynthLayerU5BU5D_t9919E41BA20A575D559D9106FFEDDF881237EAD6* L_13 = V_2;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		// smp += layer.Sample(duration);
		float L_17 = V_5;
		SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * L_18 = V_6;
		float L_19 = __this->get_duration_5();
		NullCheck(L_18);
		float L_20;
		L_20 = SynthLayer_Sample_mFF6C500D3002C9B76BB2C7F7BF92896DABE39CEC(L_18, L_19, /*hidden argument*/NULL);
		V_5 = ((float)il2cpp_codegen_add((float)L_17, (float)L_20));
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_006b:
	{
		// foreach (var layer in layers)
		int32_t L_22 = V_3;
		SynthLayerU5BU5D_t9919E41BA20A575D559D9106FFEDDF881237EAD6* L_23 = V_2;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		// data[i + 0] = smp;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_24 = V_1;
		int32_t L_25 = V_4;
		float L_26 = V_5;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (float)L_26);
		// data[i + 1] = smp;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_27 = V_1;
		int32_t L_28 = V_4;
		float L_29 = V_5;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1))), (float)L_29);
		// for (var i = 0; i < data.Length; i += channels)
		int32_t L_30 = V_4;
		int32_t L_31 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_31));
	}

IL_0085:
	{
		// for (var i = 0; i < data.Length; i += channels)
		int32_t L_32 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_33 = V_1;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		// return data;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_34 = V_1;
		return L_34;
	}
}
// System.Void Gamekit3D.SimpleSFX.SimpleFXSynth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleFXSynth__ctor_m7071A6FCC0056FAB985A50A725B55884CA194F72 (SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17 * __this, const RuntimeMethod* method)
{
	{
		// public float duration = 5;
		__this->set_duration_5((5.0f));
		// public bool playOnStart = true;
		__this->set_playOnStart_6((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Gamekit3D.SimpleSFX.SimpleFXSynth::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleFXSynth__cctor_m518D0147616113AF0F44DFDE154B22DA4D2F0729 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mFEE5D90F96A7C48E1A9FAA53BC37E4E4958DDC13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Dictionary<string, AudioClip> clips = new Dictionary<string, AudioClip>();
		Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E * L_0 = (Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E *)il2cpp_codegen_object_new(Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mFEE5D90F96A7C48E1A9FAA53BC37E4E4958DDC13(L_0, /*hidden argument*/Dictionary_2__ctor_mFEE5D90F96A7C48E1A9FAA53BC37E4E4958DDC13_RuntimeMethod_var);
		((SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17_StaticFields*)il2cpp_codegen_static_fields_for(SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17_il2cpp_TypeInfo_var))->set_clips_9(L_0);
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
// System.Void Gamekit3D.SimpleSFX.SynthLayer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynthLayer_Reset_m90B19C6BEB140CD16AC620B3E5D1C595A208F542 (SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * __this, const RuntimeMethod* method)
{
	{
		// phase = 0f;
		__this->set_phase_6((0.0f));
		// time = 0f;
		__this->set_time_7((0.0f));
		// }
		return;
	}
}
// System.Single Gamekit3D.SimpleSFX.SynthLayer::SampleOsc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SynthLayer_SampleOsc_m859935821413E6677DAB02E77D0112B35FE88589 (SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * G_B5_0 = NULL;
	SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * G_B6_1 = NULL;
	SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * G_B9_0 = NULL;
	SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * G_B8_0 = NULL;
	float G_B10_0 = 0.0f;
	SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * G_B10_1 = NULL;
	{
		// switch (oscType)
		int32_t L_0 = __this->get_oscType_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_0080;
			}
			case 2:
			{
				goto IL_0040;
			}
			case 3:
			{
				goto IL_00a7;
			}
			case 4:
			{
				goto IL_00c0;
			}
			case 5:
			{
				goto IL_0060;
			}
			case 6:
			{
				goto IL_00ff;
			}
		}
	}
	{
		goto IL_0111;
	}

IL_002e:
	{
		// return BandLimit(Mathf.Sin(phase));
		float L_2 = __this->get_phase_6();
		float L_3;
		L_3 = sinf(L_2);
		float L_4;
		L_4 = SynthLayer_BandLimit_m74397546F038AD37273B5520C188F956931B9602(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0040:
	{
		// return BandLimit(phase < Mathf.PI ? 1f : -1f);
		float L_5 = __this->get_phase_6();
		G_B4_0 = __this;
		if ((((float)L_5) < ((float)(3.14159274f))))
		{
			G_B5_0 = __this;
			goto IL_0055;
		}
	}
	{
		G_B6_0 = (-1.0f);
		G_B6_1 = G_B4_0;
		goto IL_005a;
	}

IL_0055:
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B5_0;
	}

IL_005a:
	{
		NullCheck(G_B6_1);
		float L_6;
		L_6 = SynthLayer_BandLimit_m74397546F038AD37273B5520C188F956931B9602(G_B6_1, G_B6_0, /*hidden argument*/NULL);
		return L_6;
	}

IL_0060:
	{
		// return BandLimit(phase < Mathf.PI * 0.25f ? 1f : -1f);
		float L_7 = __this->get_phase_6();
		G_B8_0 = __this;
		if ((((float)L_7) < ((float)(0.785398185f))))
		{
			G_B9_0 = __this;
			goto IL_0075;
		}
	}
	{
		G_B10_0 = (-1.0f);
		G_B10_1 = G_B8_0;
		goto IL_007a;
	}

IL_0075:
	{
		G_B10_0 = (1.0f);
		G_B10_1 = G_B9_0;
	}

IL_007a:
	{
		NullCheck(G_B10_1);
		float L_8;
		L_8 = SynthLayer_BandLimit_m74397546F038AD37273B5520C188F956931B9602(G_B10_1, G_B10_0, /*hidden argument*/NULL);
		return L_8;
	}

IL_0080:
	{
		// return BandLimit(Mathf.Clamp(Mathf.Tan(phase / 2), -1, 1));
		float L_9 = __this->get_phase_6();
		float L_10;
		L_10 = tanf(((float)((float)L_9/(float)(2.0f))));
		float L_11;
		L_11 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_10, (-1.0f), (1.0f), /*hidden argument*/NULL);
		float L_12;
		L_12 = SynthLayer_BandLimit_m74397546F038AD37273B5520C188F956931B9602(__this, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_00a7:
	{
		// return BandLimit(1f - (1f / Mathf.PI * phase));
		float L_13 = __this->get_phase_6();
		float L_14;
		L_14 = SynthLayer_BandLimit_m74397546F038AD37273B5520C188F956931B9602(__this, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)(0.318309873f), (float)L_13)))), /*hidden argument*/NULL);
		return L_14;
	}

IL_00c0:
	{
		// if (phase < Mathf.PI)
		float L_15 = __this->get_phase_6();
		if ((!(((float)L_15) < ((float)(3.14159274f)))))
		{
			goto IL_00e6;
		}
	}
	{
		// return BandLimit(-1f + (2 * 1f / Mathf.PI) * phase);
		float L_16 = __this->get_phase_6();
		float L_17;
		L_17 = SynthLayer_BandLimit_m74397546F038AD37273B5520C188F956931B9602(__this, ((float)il2cpp_codegen_add((float)(-1.0f), (float)((float)il2cpp_codegen_multiply((float)(0.636619747f), (float)L_16)))), /*hidden argument*/NULL);
		return L_17;
	}

IL_00e6:
	{
		// return BandLimit(3f - (2 * 1f / Mathf.PI) * phase);
		float L_18 = __this->get_phase_6();
		float L_19;
		L_19 = SynthLayer_BandLimit_m74397546F038AD37273B5520C188F956931B9602(__this, ((float)il2cpp_codegen_subtract((float)(3.0f), (float)((float)il2cpp_codegen_multiply((float)(0.636619747f), (float)L_18)))), /*hidden argument*/NULL);
		return L_19;
	}

IL_00ff:
	{
		// return Random.value * 2 - 1;
		float L_20;
		L_20 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		return ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_20, (float)(2.0f))), (float)(1.0f)));
	}

IL_0111:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Single Gamekit3D.SimpleSFX.SynthLayer::BandLimit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SynthLayer_BandLimit_m74397546F038AD37273B5520C188F956931B9602 (SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * __this, float ___smp0, const RuntimeMethod* method)
{
	{
		// xv[0] = xv[1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = __this->get_xv_11();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = __this->get_xv_11();
		NullCheck(L_1);
		int32_t L_2 = 1;
		float L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_3);
		// xv[1] = smp / 1.000071238f;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = __this->get_xv_11();
		float L_5 = ___smp0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)((float)L_5/(float)(1.00007129f))));
		// yv[0] = yv[1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = __this->get_yv_12();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = __this->get_yv_12();
		NullCheck(L_7);
		int32_t L_8 = 1;
		float L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_9);
		// yv[1] = (xv[0] + xv[1]) + (-0.9998575343f * yv[0]);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = __this->get_yv_12();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = __this->get_xv_11();
		NullCheck(L_11);
		int32_t L_12 = 0;
		float L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = __this->get_xv_11();
		NullCheck(L_14);
		int32_t L_15 = 1;
		float L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17 = __this->get_yv_12();
		NullCheck(L_17);
		int32_t L_18 = 0;
		float L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_13, (float)L_16)), (float)((float)il2cpp_codegen_multiply((float)(-0.999857545f), (float)L_19)))));
		// return yv[1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20 = __this->get_yv_12();
		NullCheck(L_20);
		int32_t L_21 = 1;
		float L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		return L_22;
	}
}
// System.Single Gamekit3D.SimpleSFX.SynthLayer::Sample(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SynthLayer_Sample_mFF6C500D3002C9B76BB2C7F7BF92896DABE39CEC (SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * __this, float ___duration0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	{
		// var smp = SampleOsc();
		float L_0;
		L_0 = SynthLayer_SampleOsc_m859935821413E6677DAB02E77D0112B35FE88589(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// time += 1f / SAMPLERATE;
		float L_1 = __this->get_time_7();
		__this->set_time_7(((float)il2cpp_codegen_add((float)L_1, (float)(2.26757365E-05f))));
		// var a = volumeEnvelope.Evaluate(time / duration);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2 = __this->get_volumeEnvelope_2();
		float L_3 = __this->get_time_7();
		float L_4 = ___duration0;
		NullCheck(L_2);
		float L_5;
		L_5 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_2, ((float)((float)L_3/(float)L_4)), /*hidden argument*/NULL);
		V_1 = L_5;
		// var c = cutoffEnvelope.Evaluate(time / duration);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = __this->get_cutoffEnvelope_4();
		float L_7 = __this->get_time_7();
		float L_8 = ___duration0;
		NullCheck(L_6);
		float L_9;
		L_9 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_6, ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_2 = L_9;
		// var r = resonanceEnvelope.Evaluate(time / duration);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_10 = __this->get_resonanceEnvelope_5();
		float L_11 = __this->get_time_7();
		float L_12 = ___duration0;
		NullCheck(L_10);
		float L_13;
		L_13 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_10, ((float)((float)L_11/(float)L_12)), /*hidden argument*/NULL);
		V_3 = L_13;
		// smp *= a;
		float L_14 = V_0;
		float L_15 = V_1;
		V_0 = ((float)il2cpp_codegen_multiply((float)L_14, (float)L_15));
		// phase = phase + ((TWOPI * oscillatorFrequency.Evaluate(phase)) / SAMPLERATE);
		float L_16 = __this->get_phase_6();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_17 = __this->get_oscillatorFrequency_1();
		float L_18 = __this->get_phase_6();
		NullCheck(L_17);
		float L_19;
		L_19 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_17, L_18, /*hidden argument*/NULL);
		__this->set_phase_6(((float)il2cpp_codegen_add((float)L_16, (float)((float)((float)((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_19))/(float)(44100.0f))))));
		// if (phase > TWOPI)
		float L_20 = __this->get_phase_6();
		if ((!(((float)L_20) > ((float)(6.28318548f)))))
		{
			goto IL_00a2;
		}
	}
	{
		// phase -= TWOPI;
		float L_21 = __this->get_phase_6();
		__this->set_phase_6(((float)il2cpp_codegen_subtract((float)L_21, (float)(6.28318548f))));
	}

IL_00a2:
	{
		// switch (filterType)
		int32_t L_22 = __this->get_filterType_3();
		V_4 = L_22;
		int32_t L_23 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00e8;
			}
			case 1:
			{
				goto IL_00cc;
			}
			case 2:
			{
				goto IL_0104;
			}
			case 3:
			{
				goto IL_0120;
			}
			case 4:
			{
				goto IL_013c;
			}
		}
	}
	{
		goto IL_0156;
	}

IL_00cc:
	{
		// bqFilter.SetLowPass(c, r);
		BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * L_24 = __this->get_bqFilter_8();
		float L_25 = V_2;
		float L_26 = V_3;
		NullCheck(L_24);
		BQFilter_SetLowPass_m8820B7CFCDF3A6446F02CF9F5F7ACCC682D80252(L_24, L_25, L_26, /*hidden argument*/NULL);
		// smp = bqFilter.Update(smp);
		BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * L_27 = __this->get_bqFilter_8();
		float L_28 = V_0;
		NullCheck(L_27);
		float L_29;
		L_29 = BQFilter_Update_mB4A9350FC0199A41B62363B7E443881CE7E0692C(L_27, L_28, /*hidden argument*/NULL);
		V_0 = L_29;
		// break;
		goto IL_0156;
	}

IL_00e8:
	{
		// bqFilter.SetHighPass(c, r);
		BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * L_30 = __this->get_bqFilter_8();
		float L_31 = V_2;
		float L_32 = V_3;
		NullCheck(L_30);
		BQFilter_SetHighPass_m89BE1C7C1F18683CBFB268F2D3219B98A8EB537C(L_30, L_31, L_32, /*hidden argument*/NULL);
		// smp = bqFilter.Update(smp);
		BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * L_33 = __this->get_bqFilter_8();
		float L_34 = V_0;
		NullCheck(L_33);
		float L_35;
		L_35 = BQFilter_Update_mB4A9350FC0199A41B62363B7E443881CE7E0692C(L_33, L_34, /*hidden argument*/NULL);
		V_0 = L_35;
		// break;
		goto IL_0156;
	}

IL_0104:
	{
		// bqFilter.SetBandPass(c, r);
		BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * L_36 = __this->get_bqFilter_8();
		float L_37 = V_2;
		float L_38 = V_3;
		NullCheck(L_36);
		BQFilter_SetBandPass_m8666B1B10C90D85480699C7FBF8F13482E2CF904(L_36, L_37, L_38, /*hidden argument*/NULL);
		// smp = bqFilter.Update(smp);
		BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * L_39 = __this->get_bqFilter_8();
		float L_40 = V_0;
		NullCheck(L_39);
		float L_41;
		L_41 = BQFilter_Update_mB4A9350FC0199A41B62363B7E443881CE7E0692C(L_39, L_40, /*hidden argument*/NULL);
		V_0 = L_41;
		// break;
		goto IL_0156;
	}

IL_0120:
	{
		// bqFilter.SetBandStop(c, r);
		BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * L_42 = __this->get_bqFilter_8();
		float L_43 = V_2;
		float L_44 = V_3;
		NullCheck(L_42);
		BQFilter_SetBandStop_m04718A46BF38DD5F084993BC271A1EAA86BC0C77(L_42, L_43, L_44, /*hidden argument*/NULL);
		// smp = bqFilter.Update(smp);
		BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * L_45 = __this->get_bqFilter_8();
		float L_46 = V_0;
		NullCheck(L_45);
		float L_47;
		L_47 = BQFilter_Update_mB4A9350FC0199A41B62363B7E443881CE7E0692C(L_45, L_46, /*hidden argument*/NULL);
		V_0 = L_47;
		// break;
		goto IL_0156;
	}

IL_013c:
	{
		// bqFilter.SetAllPass(c, r);
		BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * L_48 = __this->get_bqFilter_8();
		float L_49 = V_2;
		float L_50 = V_3;
		NullCheck(L_48);
		BQFilter_SetAllPass_mDDC55441B3EE913D0DCF21DFC06E3AE769CEA129(L_48, L_49, L_50, /*hidden argument*/NULL);
		// smp = bqFilter.Update(smp);
		BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * L_51 = __this->get_bqFilter_8();
		float L_52 = V_0;
		NullCheck(L_51);
		float L_53;
		L_53 = BQFilter_Update_mB4A9350FC0199A41B62363B7E443881CE7E0692C(L_51, L_52, /*hidden argument*/NULL);
		V_0 = L_53;
	}

IL_0156:
	{
		// return smp;
		float L_54 = V_0;
		return L_54;
	}
}
// System.Void Gamekit3D.SimpleSFX.SynthLayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynthLayer__ctor_m05B8DD3FC7C709C6AE6553CB8F53D24D3BBC0C97 (SynthLayer_tB7B4A27ED60E92C804669D874C7D07313887C90D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AnimationCurve oscillatorFrequency = AnimationCurve.Linear(0, 440, 1, 440);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0;
		L_0 = AnimationCurve_Linear_mE61D9A684B81B47365C299B6B9C5D744FC9DFBFA((0.0f), (440.0f), (1.0f), (440.0f), /*hidden argument*/NULL);
		__this->set_oscillatorFrequency_1(L_0);
		// public AnimationCurve volumeEnvelope = AnimationCurve.Linear(0, 1, 0, 1);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1;
		L_1 = AnimationCurve_Linear_mE61D9A684B81B47365C299B6B9C5D744FC9DFBFA((0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_volumeEnvelope_2(L_1);
		// public AnimationCurve cutoffEnvelope = AnimationCurve.Linear(0, 1, 0, 1);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2;
		L_2 = AnimationCurve_Linear_mE61D9A684B81B47365C299B6B9C5D744FC9DFBFA((0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_cutoffEnvelope_4(L_2);
		// public AnimationCurve resonanceEnvelope = AnimationCurve.Linear(0, 1, 0, 1);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3;
		L_3 = AnimationCurve_Linear_mE61D9A684B81B47365C299B6B9C5D744FC9DFBFA((0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_resonanceEnvelope_5(L_3);
		// [System.NonSerialized] BQFilter bqFilter = new BQFilter();
		BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 * L_4 = (BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311 *)il2cpp_codegen_object_new(BQFilter_tDD7AAF166B8F8767CA7FF2392075AD732DE89311_il2cpp_TypeInfo_var);
		BQFilter__ctor_m89489C7A3EFA900E6F316261D0A88F2D590BF4C1(L_4, /*hidden argument*/NULL);
		__this->set_bqFilter_8(L_4);
		// float[] xv = new float[2], yv = new float[2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_xv_11(L_5);
		// float[] xv = new float[2], yv = new float[2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_yv_12(L_6);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Gamekit3D.SimpleSFX.SimpleFXSynth/<Start>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8__ctor_m38B90F60C93F1079F4EDE101A53FF64875B86033 (U3CStartU3Ed__8_tBAA399AC9D5C031CE0438A5F11229F20AC03BC6A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Gamekit3D.SimpleSFX.SimpleFXSynth/<Start>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8_System_IDisposable_Dispose_mA51DCD2EB881C667500A7C0E537151E671DB4C84 (U3CStartU3Ed__8_tBAA399AC9D5C031CE0438A5F11229F20AC03BC6A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Gamekit3D.SimpleSFX.SimpleFXSynth/<Start>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__8_MoveNext_mBBDEE63257C597DA7691ACE7FE8DADC20699099B (U3CStartU3Ed__8_tBAA399AC9D5C031CE0438A5F11229F20AC03BC6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (playOnStart)
		SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get_playOnStart_6();
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		// yield return new WaitForSeconds(Random.value * 2);
		float L_6;
		L_6 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, ((float)il2cpp_codegen_multiply((float)L_6, (float)(2.0f))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0045:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Play();
		SimpleFXSynth_t4FF9A719A8B9BB9654D718C75D0465E2649ADA17 * L_8 = V_1;
		NullCheck(L_8);
		SimpleFXSynth_Play_m11C396CBB7BED2EAE01D28F07C3238F9D856796D(L_8, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// }
		return (bool)0;
	}
}
// System.Object Gamekit3D.SimpleSFX.SimpleFXSynth/<Start>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1A731A04B6DA9C646F8E328099085AC16F81D4B0 (U3CStartU3Ed__8_tBAA399AC9D5C031CE0438A5F11229F20AC03BC6A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Gamekit3D.SimpleSFX.SimpleFXSynth/<Start>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8_System_Collections_IEnumerator_Reset_m22A556AB91C0BE234C306F39719280132F4B2B56 (U3CStartU3Ed__8_tBAA399AC9D5C031CE0438A5F11229F20AC03BC6A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__8_System_Collections_IEnumerator_Reset_m22A556AB91C0BE234C306F39719280132F4B2B56_RuntimeMethod_var)));
	}
}
// System.Object Gamekit3D.SimpleSFX.SimpleFXSynth/<Start>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__8_System_Collections_IEnumerator_get_Current_mF45A1811D02FA38E8363A378E083B00436CA8492 (U3CStartU3Ed__8_tBAA399AC9D5C031CE0438A5F11229F20AC03BC6A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get__items_1();
		int32_t L_3 = ___index0;
		float L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_2, (int32_t)L_3);
		return (float)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
