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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t2091847364;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t4224248211;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1318642398;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.StringComparer
struct StringComparer_t3301955079;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1624492310;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t417719465;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.ICollection
struct ICollection_t3904884886;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.IO.FileSystemWatcher
struct FileSystemWatcher_t416760199;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.IO.InotifyData
struct InotifyData_t2533354870;
// System.Threading.Thread
struct Thread_t2300836069;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t39585132;
// System.Exception
struct Exception_t1436737249;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Void
struct Void_t1185182177;
// System.ComponentModel.ISite
struct ISite_t4006303512;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1108123056;
// System.Diagnostics.TraceSwitch
struct TraceSwitch_t3738701686;
// System.ComponentModel.PropertyTabScope[]
struct PropertyTabScopeU5BU5D_t3490735091;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Type
struct Type_t;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t876121385;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t2184948248;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t1357618335;
// System.IO.SearchPattern2
struct SearchPattern2_t2824637351;
// System.IO.IFileWatcher
struct IFileWatcher_t3899097327;
// System.IO.FileSystemEventHandler
struct FileSystemEventHandler_t1806121106;
// System.IO.ErrorEventHandler
struct ErrorEventHandler_t2621677363;
// System.IO.RenamedEventHandler
struct RenamedEventHandler_t3047461033;
// System.IO.ErrorEventArgs
struct ErrorEventArgs_t1584858912;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.IO.FileSystemEventArgs
struct FileSystemEventArgs_t1603777841;

struct Exception_t1436737249_marshaled_pinvoke;
struct Exception_t1436737249_marshaled_com;



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
#ifndef NAMEOBJECTKEYSENUMERATOR_T3824388371_H
#define NAMEOBJECTKEYSENUMERATOR_T3824388371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator
struct  NameObjectKeysEnumerator_t3824388371  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_pos
	int32_t ____pos_0;
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_coll
	NameObjectCollectionBase_t2091847364 * ____coll_1;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__pos_0() { return static_cast<int32_t>(offsetof(NameObjectKeysEnumerator_t3824388371, ____pos_0)); }
	inline int32_t get__pos_0() const { return ____pos_0; }
	inline int32_t* get_address_of__pos_0() { return &____pos_0; }
	inline void set__pos_0(int32_t value)
	{
		____pos_0 = value;
	}

	inline static int32_t get_offset_of__coll_1() { return static_cast<int32_t>(offsetof(NameObjectKeysEnumerator_t3824388371, ____coll_1)); }
	inline NameObjectCollectionBase_t2091847364 * get__coll_1() const { return ____coll_1; }
	inline NameObjectCollectionBase_t2091847364 ** get_address_of__coll_1() { return &____coll_1; }
	inline void set__coll_1(NameObjectCollectionBase_t2091847364 * value)
	{
		____coll_1 = value;
		Il2CppCodeGenWriteBarrier((&____coll_1), value);
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(NameObjectKeysEnumerator_t3824388371, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTKEYSENUMERATOR_T3824388371_H
#ifndef NAMEOBJECTENTRY_T4224248211_H
#define NAMEOBJECTENTRY_T4224248211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct  NameObjectEntry_t4224248211  : public RuntimeObject
{
public:
	// System.String System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::Key
	String_t* ___Key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::Value
	RuntimeObject * ___Value_1;

public:
	inline static int32_t get_offset_of_Key_0() { return static_cast<int32_t>(offsetof(NameObjectEntry_t4224248211, ___Key_0)); }
	inline String_t* get_Key_0() const { return ___Key_0; }
	inline String_t** get_address_of_Key_0() { return &___Key_0; }
	inline void set_Key_0(String_t* value)
	{
		___Key_0 = value;
		Il2CppCodeGenWriteBarrier((&___Key_0), value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(NameObjectEntry_t4224248211, ___Value_1)); }
	inline RuntimeObject * get_Value_1() const { return ___Value_1; }
	inline RuntimeObject ** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(RuntimeObject * value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier((&___Value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTENTRY_T4224248211_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#define NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t2091847364  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_0;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t2718874744 * ____entriesArray_1;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_t1853889766 * ____entriesTable_3;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_t4224248211 * ____nullKeyEntry_4;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::_keys
	KeysCollection_t1318642398 * ____keys_5;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t950877179 * ____serializationInfo_6;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_7;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject * ____syncRoot_8;

public:
	inline static int32_t get_offset_of__readOnly_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____readOnly_0)); }
	inline bool get__readOnly_0() const { return ____readOnly_0; }
	inline bool* get_address_of__readOnly_0() { return &____readOnly_0; }
	inline void set__readOnly_0(bool value)
	{
		____readOnly_0 = value;
	}

	inline static int32_t get_offset_of__entriesArray_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____entriesArray_1)); }
	inline ArrayList_t2718874744 * get__entriesArray_1() const { return ____entriesArray_1; }
	inline ArrayList_t2718874744 ** get_address_of__entriesArray_1() { return &____entriesArray_1; }
	inline void set__entriesArray_1(ArrayList_t2718874744 * value)
	{
		____entriesArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____entriesArray_1), value);
	}

	inline static int32_t get_offset_of__keyComparer_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____keyComparer_2)); }
	inline RuntimeObject* get__keyComparer_2() const { return ____keyComparer_2; }
	inline RuntimeObject** get_address_of__keyComparer_2() { return &____keyComparer_2; }
	inline void set__keyComparer_2(RuntimeObject* value)
	{
		____keyComparer_2 = value;
		Il2CppCodeGenWriteBarrier((&____keyComparer_2), value);
	}

	inline static int32_t get_offset_of__entriesTable_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____entriesTable_3)); }
	inline Hashtable_t1853889766 * get__entriesTable_3() const { return ____entriesTable_3; }
	inline Hashtable_t1853889766 ** get_address_of__entriesTable_3() { return &____entriesTable_3; }
	inline void set__entriesTable_3(Hashtable_t1853889766 * value)
	{
		____entriesTable_3 = value;
		Il2CppCodeGenWriteBarrier((&____entriesTable_3), value);
	}

	inline static int32_t get_offset_of__nullKeyEntry_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____nullKeyEntry_4)); }
	inline NameObjectEntry_t4224248211 * get__nullKeyEntry_4() const { return ____nullKeyEntry_4; }
	inline NameObjectEntry_t4224248211 ** get_address_of__nullKeyEntry_4() { return &____nullKeyEntry_4; }
	inline void set__nullKeyEntry_4(NameObjectEntry_t4224248211 * value)
	{
		____nullKeyEntry_4 = value;
		Il2CppCodeGenWriteBarrier((&____nullKeyEntry_4), value);
	}

	inline static int32_t get_offset_of__keys_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____keys_5)); }
	inline KeysCollection_t1318642398 * get__keys_5() const { return ____keys_5; }
	inline KeysCollection_t1318642398 ** get_address_of__keys_5() { return &____keys_5; }
	inline void set__keys_5(KeysCollection_t1318642398 * value)
	{
		____keys_5 = value;
		Il2CppCodeGenWriteBarrier((&____keys_5), value);
	}

	inline static int32_t get_offset_of__serializationInfo_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____serializationInfo_6)); }
	inline SerializationInfo_t950877179 * get__serializationInfo_6() const { return ____serializationInfo_6; }
	inline SerializationInfo_t950877179 ** get_address_of__serializationInfo_6() { return &____serializationInfo_6; }
	inline void set__serializationInfo_6(SerializationInfo_t950877179 * value)
	{
		____serializationInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&____serializationInfo_6), value);
	}

	inline static int32_t get_offset_of__version_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____version_7)); }
	inline int32_t get__version_7() const { return ____version_7; }
	inline int32_t* get_address_of__version_7() { return &____version_7; }
	inline void set__version_7(int32_t value)
	{
		____version_7 = value;
	}

	inline static int32_t get_offset_of__syncRoot_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____syncRoot_8)); }
	inline RuntimeObject * get__syncRoot_8() const { return ____syncRoot_8; }
	inline RuntimeObject ** get_address_of__syncRoot_8() { return &____syncRoot_8; }
	inline void set__syncRoot_8(RuntimeObject * value)
	{
		____syncRoot_8 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_8), value);
	}
};

struct NameObjectCollectionBase_t2091847364_StaticFields
{
public:
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t3301955079 * ___defaultComparer_9;

public:
	inline static int32_t get_offset_of_defaultComparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364_StaticFields, ___defaultComparer_9)); }
	inline StringComparer_t3301955079 * get_defaultComparer_9() const { return ___defaultComparer_9; }
	inline StringComparer_t3301955079 ** get_address_of_defaultComparer_9() { return &___defaultComparer_9; }
	inline void set_defaultComparer_9(StringComparer_t3301955079 * value)
	{
		___defaultComparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#ifndef ORDEREDDICTIONARY_T2617496293_H
#define ORDEREDDICTIONARY_T2617496293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary
struct  OrderedDictionary_t2617496293  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary::_objectsArray
	ArrayList_t2718874744 * ____objectsArray_0;
	// System.Collections.Hashtable System.Collections.Specialized.OrderedDictionary::_objectsTable
	Hashtable_t1853889766 * ____objectsTable_1;
	// System.Int32 System.Collections.Specialized.OrderedDictionary::_initialCapacity
	int32_t ____initialCapacity_2;
	// System.Collections.IEqualityComparer System.Collections.Specialized.OrderedDictionary::_comparer
	RuntimeObject* ____comparer_3;
	// System.Boolean System.Collections.Specialized.OrderedDictionary::_readOnly
	bool ____readOnly_4;
	// System.Object System.Collections.Specialized.OrderedDictionary::_syncRoot
	RuntimeObject * ____syncRoot_5;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.OrderedDictionary::_siInfo
	SerializationInfo_t950877179 * ____siInfo_6;

public:
	inline static int32_t get_offset_of__objectsArray_0() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____objectsArray_0)); }
	inline ArrayList_t2718874744 * get__objectsArray_0() const { return ____objectsArray_0; }
	inline ArrayList_t2718874744 ** get_address_of__objectsArray_0() { return &____objectsArray_0; }
	inline void set__objectsArray_0(ArrayList_t2718874744 * value)
	{
		____objectsArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectsArray_0), value);
	}

	inline static int32_t get_offset_of__objectsTable_1() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____objectsTable_1)); }
	inline Hashtable_t1853889766 * get__objectsTable_1() const { return ____objectsTable_1; }
	inline Hashtable_t1853889766 ** get_address_of__objectsTable_1() { return &____objectsTable_1; }
	inline void set__objectsTable_1(Hashtable_t1853889766 * value)
	{
		____objectsTable_1 = value;
		Il2CppCodeGenWriteBarrier((&____objectsTable_1), value);
	}

	inline static int32_t get_offset_of__initialCapacity_2() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____initialCapacity_2)); }
	inline int32_t get__initialCapacity_2() const { return ____initialCapacity_2; }
	inline int32_t* get_address_of__initialCapacity_2() { return &____initialCapacity_2; }
	inline void set__initialCapacity_2(int32_t value)
	{
		____initialCapacity_2 = value;
	}

	inline static int32_t get_offset_of__comparer_3() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____comparer_3)); }
	inline RuntimeObject* get__comparer_3() const { return ____comparer_3; }
	inline RuntimeObject** get_address_of__comparer_3() { return &____comparer_3; }
	inline void set__comparer_3(RuntimeObject* value)
	{
		____comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_3), value);
	}

	inline static int32_t get_offset_of__readOnly_4() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____readOnly_4)); }
	inline bool get__readOnly_4() const { return ____readOnly_4; }
	inline bool* get_address_of__readOnly_4() { return &____readOnly_4; }
	inline void set__readOnly_4(bool value)
	{
		____readOnly_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_5), value);
	}

	inline static int32_t get_offset_of__siInfo_6() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____siInfo_6)); }
	inline SerializationInfo_t950877179 * get__siInfo_6() const { return ____siInfo_6; }
	inline SerializationInfo_t950877179 ** get_address_of__siInfo_6() { return &____siInfo_6; }
	inline void set__siInfo_6(SerializationInfo_t950877179 * value)
	{
		____siInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&____siInfo_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARY_T2617496293_H
#ifndef COMPATIBLECOMPARER_T4154576053_H
#define COMPATIBLECOMPARER_T4154576053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.CompatibleComparer
struct  CompatibleComparer_t4154576053  : public RuntimeObject
{
public:
	// System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::_comparer
	RuntimeObject* ____comparer_0;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::_hcp
	RuntimeObject* ____hcp_2;

public:
	inline static int32_t get_offset_of__comparer_0() { return static_cast<int32_t>(offsetof(CompatibleComparer_t4154576053, ____comparer_0)); }
	inline RuntimeObject* get__comparer_0() const { return ____comparer_0; }
	inline RuntimeObject** get_address_of__comparer_0() { return &____comparer_0; }
	inline void set__comparer_0(RuntimeObject* value)
	{
		____comparer_0 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_0), value);
	}

	inline static int32_t get_offset_of__hcp_2() { return static_cast<int32_t>(offsetof(CompatibleComparer_t4154576053, ____hcp_2)); }
	inline RuntimeObject* get__hcp_2() const { return ____hcp_2; }
	inline RuntimeObject** get_address_of__hcp_2() { return &____hcp_2; }
	inline void set__hcp_2(RuntimeObject* value)
	{
		____hcp_2 = value;
		Il2CppCodeGenWriteBarrier((&____hcp_2), value);
	}
};

struct CompatibleComparer_t4154576053_StaticFields
{
public:
	// System.Collections.IComparer modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.CompatibleComparer::defaultComparer
	RuntimeObject* ___defaultComparer_1;
	// System.Collections.IHashCodeProvider modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.CompatibleComparer::defaultHashProvider
	RuntimeObject* ___defaultHashProvider_3;

public:
	inline static int32_t get_offset_of_defaultComparer_1() { return static_cast<int32_t>(offsetof(CompatibleComparer_t4154576053_StaticFields, ___defaultComparer_1)); }
	inline RuntimeObject* get_defaultComparer_1() const { return ___defaultComparer_1; }
	inline RuntimeObject** get_address_of_defaultComparer_1() { return &___defaultComparer_1; }
	inline void set_defaultComparer_1(RuntimeObject* value)
	{
		___defaultComparer_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_1), value);
	}

	inline static int32_t get_offset_of_defaultHashProvider_3() { return static_cast<int32_t>(offsetof(CompatibleComparer_t4154576053_StaticFields, ___defaultHashProvider_3)); }
	inline RuntimeObject* get_defaultHashProvider_3() const { return ___defaultHashProvider_3; }
	inline RuntimeObject** get_address_of_defaultHashProvider_3() { return &___defaultHashProvider_3; }
	inline void set_defaultHashProvider_3(RuntimeObject* value)
	{
		___defaultHashProvider_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHashProvider_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPATIBLECOMPARER_T4154576053_H
#ifndef KEYSCOLLECTION_T1318642398_H
#define KEYSCOLLECTION_T1318642398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct  KeysCollection_t1318642398  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::_coll
	NameObjectCollectionBase_t2091847364 * ____coll_0;

public:
	inline static int32_t get_offset_of__coll_0() { return static_cast<int32_t>(offsetof(KeysCollection_t1318642398, ____coll_0)); }
	inline NameObjectCollectionBase_t2091847364 * get__coll_0() const { return ____coll_0; }
	inline NameObjectCollectionBase_t2091847364 ** get_address_of__coll_0() { return &____coll_0; }
	inline void set__coll_0(NameObjectCollectionBase_t2091847364 * value)
	{
		____coll_0 = value;
		Il2CppCodeGenWriteBarrier((&____coll_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSCOLLECTION_T1318642398_H
#ifndef DICTIONARYNODE_T417719465_H
#define DICTIONARYNODE_T417719465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct  DictionaryNode_t417719465  : public RuntimeObject
{
public:
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_t417719465 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t417719465, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t417719465, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t417719465, ___next_2)); }
	inline DictionaryNode_t417719465 * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t417719465 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t417719465 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODE_T417719465_H
#ifndef NODEENUMERATOR_T3248827953_H
#define NODEENUMERATOR_T3248827953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/NodeEnumerator
struct  NodeEnumerator_t3248827953  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeEnumerator::list
	ListDictionary_t1624492310 * ___list_0;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/NodeEnumerator::current
	DictionaryNode_t417719465 * ___current_1;
	// System.Int32 System.Collections.Specialized.ListDictionary/NodeEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeEnumerator::start
	bool ___start_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeEnumerator_t3248827953, ___list_0)); }
	inline ListDictionary_t1624492310 * get_list_0() const { return ___list_0; }
	inline ListDictionary_t1624492310 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_t1624492310 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(NodeEnumerator_t3248827953, ___current_1)); }
	inline DictionaryNode_t417719465 * get_current_1() const { return ___current_1; }
	inline DictionaryNode_t417719465 ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(DictionaryNode_t417719465 * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier((&___current_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(NodeEnumerator_t3248827953, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_start_3() { return static_cast<int32_t>(offsetof(NodeEnumerator_t3248827953, ___start_3)); }
	inline bool get_start_3() const { return ___start_3; }
	inline bool* get_address_of_start_3() { return &___start_3; }
	inline void set_start_3(bool value)
	{
		___start_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODEENUMERATOR_T3248827953_H
#ifndef LISTDICTIONARY_T1624492310_H
#define LISTDICTIONARY_T1624492310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t1624492310  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t417719465 * ___head_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;
	// System.Object System.Collections.Specialized.ListDictionary::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___head_0)); }
	inline DictionaryNode_t417719465 * get_head_0() const { return ___head_0; }
	inline DictionaryNode_t417719465 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(DictionaryNode_t417719465 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((&___head_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_3), value);
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTDICTIONARY_T1624492310_H
#ifndef HYBRIDDICTIONARY_T4070033136_H
#define HYBRIDDICTIONARY_T4070033136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t4070033136  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t1624492310 * ___list_0;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t1853889766 * ___hashtable_1;
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_2;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(HybridDictionary_t4070033136, ___list_0)); }
	inline ListDictionary_t1624492310 * get_list_0() const { return ___list_0; }
	inline ListDictionary_t1624492310 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_t1624492310 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_hashtable_1() { return static_cast<int32_t>(offsetof(HybridDictionary_t4070033136, ___hashtable_1)); }
	inline Hashtable_t1853889766 * get_hashtable_1() const { return ___hashtable_1; }
	inline Hashtable_t1853889766 ** get_address_of_hashtable_1() { return &___hashtable_1; }
	inline void set_hashtable_1(Hashtable_t1853889766 * value)
	{
		___hashtable_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_1), value);
	}

	inline static int32_t get_offset_of_caseInsensitive_2() { return static_cast<int32_t>(offsetof(HybridDictionary_t4070033136, ___caseInsensitive_2)); }
	inline bool get_caseInsensitive_2() const { return ___caseInsensitive_2; }
	inline bool* get_address_of_caseInsensitive_2() { return &___caseInsensitive_2; }
	inline void set_caseInsensitive_2(bool value)
	{
		___caseInsensitive_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HYBRIDDICTIONARY_T4070033136_H
#ifndef INSTANCEDESCRIPTOR_T657473484_H
#define INSTANCEDESCRIPTOR_T657473484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct  InstanceDescriptor_t657473484  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::member
	MemberInfo_t * ___member_0;
	// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::arguments
	RuntimeObject* ___arguments_1;
	// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::isComplete
	bool ___isComplete_2;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t657473484, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t657473484, ___arguments_1)); }
	inline RuntimeObject* get_arguments_1() const { return ___arguments_1; }
	inline RuntimeObject** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(RuntimeObject* value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_1), value);
	}

	inline static int32_t get_offset_of_isComplete_2() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t657473484, ___isComplete_2)); }
	inline bool get_isComplete_2() const { return ___isComplete_2; }
	inline bool* get_address_of_isComplete_2() { return &___isComplete_2; }
	inline void set_isComplete_2(bool value)
	{
		___isComplete_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEDESCRIPTOR_T657473484_H
#ifndef NODEKEYVALUEENUMERATOR_T642906510_H
#define NODEKEYVALUEENUMERATOR_T642906510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator
struct  NodeKeyValueEnumerator_t642906510  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::list
	ListDictionary_t1624492310 * ___list_0;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::current
	DictionaryNode_t417719465 * ___current_1;
	// System.Int32 System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::isKeys
	bool ___isKeys_3;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::start
	bool ___start_4;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t642906510, ___list_0)); }
	inline ListDictionary_t1624492310 * get_list_0() const { return ___list_0; }
	inline ListDictionary_t1624492310 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_t1624492310 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t642906510, ___current_1)); }
	inline DictionaryNode_t417719465 * get_current_1() const { return ___current_1; }
	inline DictionaryNode_t417719465 ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(DictionaryNode_t417719465 * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier((&___current_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t642906510, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_isKeys_3() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t642906510, ___isKeys_3)); }
	inline bool get_isKeys_3() const { return ___isKeys_3; }
	inline bool* get_address_of_isKeys_3() { return &___isKeys_3; }
	inline void set_isKeys_3(bool value)
	{
		___isKeys_3 = value;
	}

	inline static int32_t get_offset_of_start_4() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t642906510, ___start_4)); }
	inline bool get_start_4() const { return ___start_4; }
	inline bool* get_address_of_start_4() { return &___start_4; }
	inline void set_start_4(bool value)
	{
		___start_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODEKEYVALUEENUMERATOR_T642906510_H
#ifndef NODEKEYVALUECOLLECTION_T1279341543_H
#define NODEKEYVALUECOLLECTION_T1279341543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/NodeKeyValueCollection
struct  NodeKeyValueCollection_t1279341543  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::list
	ListDictionary_t1624492310 * ___list_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::isKeys
	bool ___isKeys_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeKeyValueCollection_t1279341543, ___list_0)); }
	inline ListDictionary_t1624492310 * get_list_0() const { return ___list_0; }
	inline ListDictionary_t1624492310 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_t1624492310 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_isKeys_1() { return static_cast<int32_t>(offsetof(NodeKeyValueCollection_t1279341543, ___isKeys_1)); }
	inline bool get_isKeys_1() const { return ___isKeys_1; }
	inline bool* get_address_of_isKeys_1() { return &___isKeys_1; }
	inline void set_isKeys_1(bool value)
	{
		___isKeys_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODEKEYVALUECOLLECTION_T1279341543_H
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
#ifndef LICENSECONTEXT_T2141136407_H
#define LICENSECONTEXT_T2141136407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseContext
struct  LicenseContext_t2141136407  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSECONTEXT_T2141136407_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	ServerIdentity_t2342208608 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_com
{
	ServerIdentity_t2342208608 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef EXCEPTION_T1436737249_H
#define EXCEPTION_T1436737249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1436737249  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t1436737249 * ____innerException_4;
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
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ____innerException_4)); }
	inline Exception_t1436737249 * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t1436737249 ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t1436737249 * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t1436737249_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t1436737249_StaticFields, ___s_EDILock_0)); }
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
struct Exception_t1436737249_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t1436737249_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t1436737249_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t1436737249_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T1436737249_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef INOTIFYDATA_T2533354870_H
#define INOTIFYDATA_T2533354870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.InotifyData
struct  InotifyData_t2533354870  : public RuntimeObject
{
public:
	// System.IO.FileSystemWatcher System.IO.InotifyData::FSW
	FileSystemWatcher_t416760199 * ___FSW_0;
	// System.String System.IO.InotifyData::Directory
	String_t* ___Directory_1;
	// System.Int32 System.IO.InotifyData::Watch
	int32_t ___Watch_2;

public:
	inline static int32_t get_offset_of_FSW_0() { return static_cast<int32_t>(offsetof(InotifyData_t2533354870, ___FSW_0)); }
	inline FileSystemWatcher_t416760199 * get_FSW_0() const { return ___FSW_0; }
	inline FileSystemWatcher_t416760199 ** get_address_of_FSW_0() { return &___FSW_0; }
	inline void set_FSW_0(FileSystemWatcher_t416760199 * value)
	{
		___FSW_0 = value;
		Il2CppCodeGenWriteBarrier((&___FSW_0), value);
	}

	inline static int32_t get_offset_of_Directory_1() { return static_cast<int32_t>(offsetof(InotifyData_t2533354870, ___Directory_1)); }
	inline String_t* get_Directory_1() const { return ___Directory_1; }
	inline String_t** get_address_of_Directory_1() { return &___Directory_1; }
	inline void set_Directory_1(String_t* value)
	{
		___Directory_1 = value;
		Il2CppCodeGenWriteBarrier((&___Directory_1), value);
	}

	inline static int32_t get_offset_of_Watch_2() { return static_cast<int32_t>(offsetof(InotifyData_t2533354870, ___Watch_2)); }
	inline int32_t get_Watch_2() const { return ___Watch_2; }
	inline int32_t* get_address_of_Watch_2() { return &___Watch_2; }
	inline void set_Watch_2(int32_t value)
	{
		___Watch_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INOTIFYDATA_T2533354870_H
#ifndef STRINGCOLLECTION_T167406615_H
#define STRINGCOLLECTION_T167406615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringCollection
struct  StringCollection_t167406615  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.StringCollection::data
	ArrayList_t2718874744 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(StringCollection_t167406615, ___data_0)); }
	inline ArrayList_t2718874744 * get_data_0() const { return ___data_0; }
	inline ArrayList_t2718874744 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ArrayList_t2718874744 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOLLECTION_T167406615_H
#ifndef ORDEREDDICTIONARYKEYVALUECOLLECTION_T1788601968_H
#define ORDEREDDICTIONARYKEYVALUECOLLECTION_T1788601968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection
struct  OrderedDictionaryKeyValueCollection_t1788601968  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::_objects
	ArrayList_t2718874744 * ____objects_0;
	// System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::isKeys
	bool ___isKeys_1;

public:
	inline static int32_t get_offset_of__objects_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryKeyValueCollection_t1788601968, ____objects_0)); }
	inline ArrayList_t2718874744 * get__objects_0() const { return ____objects_0; }
	inline ArrayList_t2718874744 ** get_address_of__objects_0() { return &____objects_0; }
	inline void set__objects_0(ArrayList_t2718874744 * value)
	{
		____objects_0 = value;
		Il2CppCodeGenWriteBarrier((&____objects_0), value);
	}

	inline static int32_t get_offset_of_isKeys_1() { return static_cast<int32_t>(offsetof(OrderedDictionaryKeyValueCollection_t1788601968, ___isKeys_1)); }
	inline bool get_isKeys_1() const { return ___isKeys_1; }
	inline bool* get_address_of_isKeys_1() { return &___isKeys_1; }
	inline void set_isKeys_1(bool value)
	{
		___isKeys_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARYKEYVALUECOLLECTION_T1788601968_H
#ifndef ORDEREDDICTIONARYENUMERATOR_T1215437281_H
#define ORDEREDDICTIONARYENUMERATOR_T1215437281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator
struct  OrderedDictionaryEnumerator_t1215437281  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::_objectReturnType
	int32_t ____objectReturnType_0;
	// System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::arrayEnumerator
	RuntimeObject* ___arrayEnumerator_1;

public:
	inline static int32_t get_offset_of__objectReturnType_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryEnumerator_t1215437281, ____objectReturnType_0)); }
	inline int32_t get__objectReturnType_0() const { return ____objectReturnType_0; }
	inline int32_t* get_address_of__objectReturnType_0() { return &____objectReturnType_0; }
	inline void set__objectReturnType_0(int32_t value)
	{
		____objectReturnType_0 = value;
	}

	inline static int32_t get_offset_of_arrayEnumerator_1() { return static_cast<int32_t>(offsetof(OrderedDictionaryEnumerator_t1215437281, ___arrayEnumerator_1)); }
	inline RuntimeObject* get_arrayEnumerator_1() const { return ___arrayEnumerator_1; }
	inline RuntimeObject** get_address_of_arrayEnumerator_1() { return &___arrayEnumerator_1; }
	inline void set_arrayEnumerator_1(RuntimeObject* value)
	{
		___arrayEnumerator_1 = value;
		Il2CppCodeGenWriteBarrier((&___arrayEnumerator_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARYENUMERATOR_T1215437281_H
#ifndef PARENTINOTIFYDATA_T1149622319_H
#define PARENTINOTIFYDATA_T1149622319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.ParentInotifyData
struct  ParentInotifyData_t1149622319  : public RuntimeObject
{
public:
	// System.Boolean System.IO.ParentInotifyData::IncludeSubdirs
	bool ___IncludeSubdirs_0;
	// System.Boolean System.IO.ParentInotifyData::Enabled
	bool ___Enabled_1;
	// System.Collections.ArrayList System.IO.ParentInotifyData::children
	ArrayList_t2718874744 * ___children_2;
	// System.IO.InotifyData System.IO.ParentInotifyData::data
	InotifyData_t2533354870 * ___data_3;

public:
	inline static int32_t get_offset_of_IncludeSubdirs_0() { return static_cast<int32_t>(offsetof(ParentInotifyData_t1149622319, ___IncludeSubdirs_0)); }
	inline bool get_IncludeSubdirs_0() const { return ___IncludeSubdirs_0; }
	inline bool* get_address_of_IncludeSubdirs_0() { return &___IncludeSubdirs_0; }
	inline void set_IncludeSubdirs_0(bool value)
	{
		___IncludeSubdirs_0 = value;
	}

	inline static int32_t get_offset_of_Enabled_1() { return static_cast<int32_t>(offsetof(ParentInotifyData_t1149622319, ___Enabled_1)); }
	inline bool get_Enabled_1() const { return ___Enabled_1; }
	inline bool* get_address_of_Enabled_1() { return &___Enabled_1; }
	inline void set_Enabled_1(bool value)
	{
		___Enabled_1 = value;
	}

	inline static int32_t get_offset_of_children_2() { return static_cast<int32_t>(offsetof(ParentInotifyData_t1149622319, ___children_2)); }
	inline ArrayList_t2718874744 * get_children_2() const { return ___children_2; }
	inline ArrayList_t2718874744 ** get_address_of_children_2() { return &___children_2; }
	inline void set_children_2(ArrayList_t2718874744 * value)
	{
		___children_2 = value;
		Il2CppCodeGenWriteBarrier((&___children_2), value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(ParentInotifyData_t1149622319, ___data_3)); }
	inline InotifyData_t2533354870 * get_data_3() const { return ___data_3; }
	inline InotifyData_t2533354870 ** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(InotifyData_t2533354870 * value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((&___data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARENTINOTIFYDATA_T1149622319_H
#ifndef DEFAULTWATCHER_T2229106420_H
#define DEFAULTWATCHER_T2229106420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.DefaultWatcher
struct  DefaultWatcher_t2229106420  : public RuntimeObject
{
public:

public:
};

struct DefaultWatcher_t2229106420_StaticFields
{
public:
	// System.IO.DefaultWatcher System.IO.DefaultWatcher::instance
	DefaultWatcher_t2229106420 * ___instance_0;
	// System.Threading.Thread System.IO.DefaultWatcher::thread
	Thread_t2300836069 * ___thread_1;
	// System.Collections.Hashtable System.IO.DefaultWatcher::watches
	Hashtable_t1853889766 * ___watches_2;
	// System.String[] System.IO.DefaultWatcher::NoStringsArray
	StringU5BU5D_t1281789340* ___NoStringsArray_3;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(DefaultWatcher_t2229106420_StaticFields, ___instance_0)); }
	inline DefaultWatcher_t2229106420 * get_instance_0() const { return ___instance_0; }
	inline DefaultWatcher_t2229106420 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(DefaultWatcher_t2229106420 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}

	inline static int32_t get_offset_of_thread_1() { return static_cast<int32_t>(offsetof(DefaultWatcher_t2229106420_StaticFields, ___thread_1)); }
	inline Thread_t2300836069 * get_thread_1() const { return ___thread_1; }
	inline Thread_t2300836069 ** get_address_of_thread_1() { return &___thread_1; }
	inline void set_thread_1(Thread_t2300836069 * value)
	{
		___thread_1 = value;
		Il2CppCodeGenWriteBarrier((&___thread_1), value);
	}

	inline static int32_t get_offset_of_watches_2() { return static_cast<int32_t>(offsetof(DefaultWatcher_t2229106420_StaticFields, ___watches_2)); }
	inline Hashtable_t1853889766 * get_watches_2() const { return ___watches_2; }
	inline Hashtable_t1853889766 ** get_address_of_watches_2() { return &___watches_2; }
	inline void set_watches_2(Hashtable_t1853889766 * value)
	{
		___watches_2 = value;
		Il2CppCodeGenWriteBarrier((&___watches_2), value);
	}

	inline static int32_t get_offset_of_NoStringsArray_3() { return static_cast<int32_t>(offsetof(DefaultWatcher_t2229106420_StaticFields, ___NoStringsArray_3)); }
	inline StringU5BU5D_t1281789340* get_NoStringsArray_3() const { return ___NoStringsArray_3; }
	inline StringU5BU5D_t1281789340** get_address_of_NoStringsArray_3() { return &___NoStringsArray_3; }
	inline void set_NoStringsArray_3(StringU5BU5D_t1281789340* value)
	{
		___NoStringsArray_3 = value;
		Il2CppCodeGenWriteBarrier((&___NoStringsArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTWATCHER_T2229106420_H
#ifndef STRINGDICTIONARY_T120437468_H
#define STRINGDICTIONARY_T120437468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringDictionary
struct  StringDictionary_t120437468  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t1853889766 * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t120437468, ___contents_0)); }
	inline Hashtable_t1853889766 * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t1853889766 ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t1853889766 * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGDICTIONARY_T120437468_H
#ifndef TYPEDESCRIPTORINTERFACE_T3054885090_H
#define TYPEDESCRIPTORINTERFACE_T3054885090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/TypeDescriptorInterface
struct  TypeDescriptorInterface_t3054885090  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTORINTERFACE_T3054885090_H
#ifndef DESIGNTIMELICENSECONTEXTSERIALIZER_T377857600_H
#define DESIGNTIMELICENSECONTEXTSERIALIZER_T377857600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.DesigntimeLicenseContextSerializer
struct  DesigntimeLicenseContextSerializer_t377857600  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNTIMELICENSECONTEXTSERIALIZER_T377857600_H
#ifndef WEAKKEYCOMPARER_T448163292_H
#define WEAKKEYCOMPARER_T448163292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakHashtable/WeakKeyComparer
struct  WeakKeyComparer_t448163292  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKKEYCOMPARER_T448163292_H
#ifndef TYPEDESCRIPTORCOMOBJECT_T50518439_H
#define TYPEDESCRIPTORCOMOBJECT_T50518439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/TypeDescriptorComObject
struct  TypeDescriptorComObject_t50518439  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTORCOMOBJECT_T50518439_H
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
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
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
#ifndef FAMREQUEST_T3578860103_H
#define FAMREQUEST_T3578860103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FAMRequest
struct  FAMRequest_t3578860103 
{
public:
	// System.Int32 System.IO.FAMRequest::ReqNum
	int32_t ___ReqNum_0;

public:
	inline static int32_t get_offset_of_ReqNum_0() { return static_cast<int32_t>(offsetof(FAMRequest_t3578860103, ___ReqNum_0)); }
	inline int32_t get_ReqNum_0() const { return ___ReqNum_0; }
	inline int32_t* get_address_of_ReqNum_0() { return &___ReqNum_0; }
	inline void set_ReqNum_0(int32_t value)
	{
		___ReqNum_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FAMREQUEST_T3578860103_H
#ifndef CATEGORYATTRIBUTE_T39585132_H
#define CATEGORYATTRIBUTE_T39585132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t39585132  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.CategoryAttribute::localized
	bool ___localized_14;
	// System.String System.ComponentModel.CategoryAttribute::categoryValue
	String_t* ___categoryValue_15;

public:
	inline static int32_t get_offset_of_localized_14() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132, ___localized_14)); }
	inline bool get_localized_14() const { return ___localized_14; }
	inline bool* get_address_of_localized_14() { return &___localized_14; }
	inline void set_localized_14(bool value)
	{
		___localized_14 = value;
	}

	inline static int32_t get_offset_of_categoryValue_15() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132, ___categoryValue_15)); }
	inline String_t* get_categoryValue_15() const { return ___categoryValue_15; }
	inline String_t** get_address_of_categoryValue_15() { return &___categoryValue_15; }
	inline void set_categoryValue_15(String_t* value)
	{
		___categoryValue_15 = value;
		Il2CppCodeGenWriteBarrier((&___categoryValue_15), value);
	}
};

struct CategoryAttribute_t39585132_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::appearance
	CategoryAttribute_t39585132 * ___appearance_0;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::asynchronous
	CategoryAttribute_t39585132 * ___asynchronous_1;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::behavior
	CategoryAttribute_t39585132 * ___behavior_2;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::data
	CategoryAttribute_t39585132 * ___data_3;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::design
	CategoryAttribute_t39585132 * ___design_4;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::action
	CategoryAttribute_t39585132 * ___action_5;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::format
	CategoryAttribute_t39585132 * ___format_6;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::layout
	CategoryAttribute_t39585132 * ___layout_7;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::mouse
	CategoryAttribute_t39585132 * ___mouse_8;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::key
	CategoryAttribute_t39585132 * ___key_9;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::focus
	CategoryAttribute_t39585132 * ___focus_10;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::windowStyle
	CategoryAttribute_t39585132 * ___windowStyle_11;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::dragDrop
	CategoryAttribute_t39585132 * ___dragDrop_12;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::defAttr
	CategoryAttribute_t39585132 * ___defAttr_13;

public:
	inline static int32_t get_offset_of_appearance_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___appearance_0)); }
	inline CategoryAttribute_t39585132 * get_appearance_0() const { return ___appearance_0; }
	inline CategoryAttribute_t39585132 ** get_address_of_appearance_0() { return &___appearance_0; }
	inline void set_appearance_0(CategoryAttribute_t39585132 * value)
	{
		___appearance_0 = value;
		Il2CppCodeGenWriteBarrier((&___appearance_0), value);
	}

	inline static int32_t get_offset_of_asynchronous_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___asynchronous_1)); }
	inline CategoryAttribute_t39585132 * get_asynchronous_1() const { return ___asynchronous_1; }
	inline CategoryAttribute_t39585132 ** get_address_of_asynchronous_1() { return &___asynchronous_1; }
	inline void set_asynchronous_1(CategoryAttribute_t39585132 * value)
	{
		___asynchronous_1 = value;
		Il2CppCodeGenWriteBarrier((&___asynchronous_1), value);
	}

	inline static int32_t get_offset_of_behavior_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___behavior_2)); }
	inline CategoryAttribute_t39585132 * get_behavior_2() const { return ___behavior_2; }
	inline CategoryAttribute_t39585132 ** get_address_of_behavior_2() { return &___behavior_2; }
	inline void set_behavior_2(CategoryAttribute_t39585132 * value)
	{
		___behavior_2 = value;
		Il2CppCodeGenWriteBarrier((&___behavior_2), value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___data_3)); }
	inline CategoryAttribute_t39585132 * get_data_3() const { return ___data_3; }
	inline CategoryAttribute_t39585132 ** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(CategoryAttribute_t39585132 * value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((&___data_3), value);
	}

	inline static int32_t get_offset_of_design_4() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___design_4)); }
	inline CategoryAttribute_t39585132 * get_design_4() const { return ___design_4; }
	inline CategoryAttribute_t39585132 ** get_address_of_design_4() { return &___design_4; }
	inline void set_design_4(CategoryAttribute_t39585132 * value)
	{
		___design_4 = value;
		Il2CppCodeGenWriteBarrier((&___design_4), value);
	}

	inline static int32_t get_offset_of_action_5() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___action_5)); }
	inline CategoryAttribute_t39585132 * get_action_5() const { return ___action_5; }
	inline CategoryAttribute_t39585132 ** get_address_of_action_5() { return &___action_5; }
	inline void set_action_5(CategoryAttribute_t39585132 * value)
	{
		___action_5 = value;
		Il2CppCodeGenWriteBarrier((&___action_5), value);
	}

	inline static int32_t get_offset_of_format_6() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___format_6)); }
	inline CategoryAttribute_t39585132 * get_format_6() const { return ___format_6; }
	inline CategoryAttribute_t39585132 ** get_address_of_format_6() { return &___format_6; }
	inline void set_format_6(CategoryAttribute_t39585132 * value)
	{
		___format_6 = value;
		Il2CppCodeGenWriteBarrier((&___format_6), value);
	}

	inline static int32_t get_offset_of_layout_7() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___layout_7)); }
	inline CategoryAttribute_t39585132 * get_layout_7() const { return ___layout_7; }
	inline CategoryAttribute_t39585132 ** get_address_of_layout_7() { return &___layout_7; }
	inline void set_layout_7(CategoryAttribute_t39585132 * value)
	{
		___layout_7 = value;
		Il2CppCodeGenWriteBarrier((&___layout_7), value);
	}

	inline static int32_t get_offset_of_mouse_8() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___mouse_8)); }
	inline CategoryAttribute_t39585132 * get_mouse_8() const { return ___mouse_8; }
	inline CategoryAttribute_t39585132 ** get_address_of_mouse_8() { return &___mouse_8; }
	inline void set_mouse_8(CategoryAttribute_t39585132 * value)
	{
		___mouse_8 = value;
		Il2CppCodeGenWriteBarrier((&___mouse_8), value);
	}

	inline static int32_t get_offset_of_key_9() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___key_9)); }
	inline CategoryAttribute_t39585132 * get_key_9() const { return ___key_9; }
	inline CategoryAttribute_t39585132 ** get_address_of_key_9() { return &___key_9; }
	inline void set_key_9(CategoryAttribute_t39585132 * value)
	{
		___key_9 = value;
		Il2CppCodeGenWriteBarrier((&___key_9), value);
	}

	inline static int32_t get_offset_of_focus_10() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___focus_10)); }
	inline CategoryAttribute_t39585132 * get_focus_10() const { return ___focus_10; }
	inline CategoryAttribute_t39585132 ** get_address_of_focus_10() { return &___focus_10; }
	inline void set_focus_10(CategoryAttribute_t39585132 * value)
	{
		___focus_10 = value;
		Il2CppCodeGenWriteBarrier((&___focus_10), value);
	}

	inline static int32_t get_offset_of_windowStyle_11() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___windowStyle_11)); }
	inline CategoryAttribute_t39585132 * get_windowStyle_11() const { return ___windowStyle_11; }
	inline CategoryAttribute_t39585132 ** get_address_of_windowStyle_11() { return &___windowStyle_11; }
	inline void set_windowStyle_11(CategoryAttribute_t39585132 * value)
	{
		___windowStyle_11 = value;
		Il2CppCodeGenWriteBarrier((&___windowStyle_11), value);
	}

	inline static int32_t get_offset_of_dragDrop_12() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___dragDrop_12)); }
	inline CategoryAttribute_t39585132 * get_dragDrop_12() const { return ___dragDrop_12; }
	inline CategoryAttribute_t39585132 ** get_address_of_dragDrop_12() { return &___dragDrop_12; }
	inline void set_dragDrop_12(CategoryAttribute_t39585132 * value)
	{
		___dragDrop_12 = value;
		Il2CppCodeGenWriteBarrier((&___dragDrop_12), value);
	}

	inline static int32_t get_offset_of_defAttr_13() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___defAttr_13)); }
	inline CategoryAttribute_t39585132 * get_defAttr_13() const { return ___defAttr_13; }
	inline CategoryAttribute_t39585132 ** get_address_of_defAttr_13() { return &___defAttr_13; }
	inline void set_defAttr_13(CategoryAttribute_t39585132 * value)
	{
		___defAttr_13 = value;
		Il2CppCodeGenWriteBarrier((&___defAttr_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORYATTRIBUTE_T39585132_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t1436737249
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef ERROREVENTARGS_T1584858912_H
#define ERROREVENTARGS_T1584858912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.ErrorEventArgs
struct  ErrorEventArgs_t1584858912  : public EventArgs_t3591816995
{
public:
	// System.Exception System.IO.ErrorEventArgs::exception
	Exception_t1436737249 * ___exception_1;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(ErrorEventArgs_t1584858912, ___exception_1)); }
	inline Exception_t1436737249 * get_exception_1() const { return ___exception_1; }
	inline Exception_t1436737249 ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(Exception_t1436737249 * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERROREVENTARGS_T1584858912_H
#ifndef NOTIFYPARENTPROPERTYATTRIBUTE_T1405421815_H
#define NOTIFYPARENTPROPERTYATTRIBUTE_T1405421815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NotifyParentPropertyAttribute
struct  NotifyParentPropertyAttribute_t1405421815  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.NotifyParentPropertyAttribute::notifyParent
	bool ___notifyParent_3;

public:
	inline static int32_t get_offset_of_notifyParent_3() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t1405421815, ___notifyParent_3)); }
	inline bool get_notifyParent_3() const { return ___notifyParent_3; }
	inline bool* get_address_of_notifyParent_3() { return &___notifyParent_3; }
	inline void set_notifyParent_3(bool value)
	{
		___notifyParent_3 = value;
	}
};

struct NotifyParentPropertyAttribute_t1405421815_StaticFields
{
public:
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::Yes
	NotifyParentPropertyAttribute_t1405421815 * ___Yes_0;
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::No
	NotifyParentPropertyAttribute_t1405421815 * ___No_1;
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::Default
	NotifyParentPropertyAttribute_t1405421815 * ___Default_2;

public:
	inline static int32_t get_offset_of_Yes_0() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t1405421815_StaticFields, ___Yes_0)); }
	inline NotifyParentPropertyAttribute_t1405421815 * get_Yes_0() const { return ___Yes_0; }
	inline NotifyParentPropertyAttribute_t1405421815 ** get_address_of_Yes_0() { return &___Yes_0; }
	inline void set_Yes_0(NotifyParentPropertyAttribute_t1405421815 * value)
	{
		___Yes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t1405421815_StaticFields, ___No_1)); }
	inline NotifyParentPropertyAttribute_t1405421815 * get_No_1() const { return ___No_1; }
	inline NotifyParentPropertyAttribute_t1405421815 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(NotifyParentPropertyAttribute_t1405421815 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t1405421815_StaticFields, ___Default_2)); }
	inline NotifyParentPropertyAttribute_t1405421815 * get_Default_2() const { return ___Default_2; }
	inline NotifyParentPropertyAttribute_t1405421815 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(NotifyParentPropertyAttribute_t1405421815 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYPARENTPROPERTYATTRIBUTE_T1405421815_H
#ifndef DESIGNERSERIALIZERATTRIBUTE_T1570548024_H
#define DESIGNERSERIALIZERATTRIBUTE_T1570548024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.DesignerSerializerAttribute
struct  DesignerSerializerAttribute_t1570548024  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.Design.Serialization.DesignerSerializerAttribute::serializerTypeName
	String_t* ___serializerTypeName_0;
	// System.String System.ComponentModel.Design.Serialization.DesignerSerializerAttribute::serializerBaseTypeName
	String_t* ___serializerBaseTypeName_1;
	// System.String System.ComponentModel.Design.Serialization.DesignerSerializerAttribute::typeId
	String_t* ___typeId_2;

public:
	inline static int32_t get_offset_of_serializerTypeName_0() { return static_cast<int32_t>(offsetof(DesignerSerializerAttribute_t1570548024, ___serializerTypeName_0)); }
	inline String_t* get_serializerTypeName_0() const { return ___serializerTypeName_0; }
	inline String_t** get_address_of_serializerTypeName_0() { return &___serializerTypeName_0; }
	inline void set_serializerTypeName_0(String_t* value)
	{
		___serializerTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___serializerTypeName_0), value);
	}

	inline static int32_t get_offset_of_serializerBaseTypeName_1() { return static_cast<int32_t>(offsetof(DesignerSerializerAttribute_t1570548024, ___serializerBaseTypeName_1)); }
	inline String_t* get_serializerBaseTypeName_1() const { return ___serializerBaseTypeName_1; }
	inline String_t** get_address_of_serializerBaseTypeName_1() { return &___serializerBaseTypeName_1; }
	inline void set_serializerBaseTypeName_1(String_t* value)
	{
		___serializerBaseTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___serializerBaseTypeName_1), value);
	}

	inline static int32_t get_offset_of_typeId_2() { return static_cast<int32_t>(offsetof(DesignerSerializerAttribute_t1570548024, ___typeId_2)); }
	inline String_t* get_typeId_2() const { return ___typeId_2; }
	inline String_t** get_address_of_typeId_2() { return &___typeId_2; }
	inline void set_typeId_2(String_t* value)
	{
		___typeId_2 = value;
		Il2CppCodeGenWriteBarrier((&___typeId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZERATTRIBUTE_T1570548024_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_31)); }
	inline DateTime_t3738529785  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t3738529785 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t3738529785  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_32)); }
	inline DateTime_t3738529785  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t3738529785  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
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
#endif // BOOLEAN_T97287965_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
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
#endif // INT32_T2950945753_H
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
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
#endif // GCHANDLE_T3351438187_H
#ifndef DESCRIPTIONATTRIBUTE_T874390736_H
#define DESCRIPTIONATTRIBUTE_T874390736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t874390736  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::description
	String_t* ___description_1;

public:
	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t874390736, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((&___description_1), value);
	}
};

struct DescriptionAttribute_t874390736_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t874390736 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t874390736_StaticFields, ___Default_0)); }
	inline DescriptionAttribute_t874390736 * get_Default_0() const { return ___Default_0; }
	inline DescriptionAttribute_t874390736 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DescriptionAttribute_t874390736 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T874390736_H
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
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
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
#ifndef COMPONENT_T3620823400_H
#define COMPONENT_T3620823400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t3620823400  : public MarshalByRefObject_t2760389100
{
public:
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t1108123056 * ___events_3;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___site_2)); }
	inline RuntimeObject* get_site_2() const { return ___site_2; }
	inline RuntimeObject** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(RuntimeObject* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((&___site_2), value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___events_3)); }
	inline EventHandlerList_t1108123056 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_t1108123056 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_t1108123056 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((&___events_3), value);
	}
};

struct Component_t3620823400_StaticFields
{
public:
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject * ___EventDisposed_1;

public:
	inline static int32_t get_offset_of_EventDisposed_1() { return static_cast<int32_t>(offsetof(Component_t3620823400_StaticFields, ___EventDisposed_1)); }
	inline RuntimeObject * get_EventDisposed_1() const { return ___EventDisposed_1; }
	inline RuntimeObject ** get_address_of_EventDisposed_1() { return &___EventDisposed_1; }
	inline void set_EventDisposed_1(RuntimeObject * value)
	{
		___EventDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((&___EventDisposed_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3620823400_H
#ifndef RUNTIMELICENSECONTEXT_T1578118062_H
#define RUNTIMELICENSECONTEXT_T1578118062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.RuntimeLicenseContext
struct  RuntimeLicenseContext_t1578118062  : public LicenseContext_t2141136407
{
public:
	// System.Collections.Hashtable System.ComponentModel.Design.RuntimeLicenseContext::savedLicenseKeys
	Hashtable_t1853889766 * ___savedLicenseKeys_1;

public:
	inline static int32_t get_offset_of_savedLicenseKeys_1() { return static_cast<int32_t>(offsetof(RuntimeLicenseContext_t1578118062, ___savedLicenseKeys_1)); }
	inline Hashtable_t1853889766 * get_savedLicenseKeys_1() const { return ___savedLicenseKeys_1; }
	inline Hashtable_t1853889766 ** get_address_of_savedLicenseKeys_1() { return &___savedLicenseKeys_1; }
	inline void set_savedLicenseKeys_1(Hashtable_t1853889766 * value)
	{
		___savedLicenseKeys_1 = value;
		Il2CppCodeGenWriteBarrier((&___savedLicenseKeys_1), value);
	}
};

struct RuntimeLicenseContext_t1578118062_StaticFields
{
public:
	// System.Diagnostics.TraceSwitch System.ComponentModel.Design.RuntimeLicenseContext::RuntimeLicenseContextSwitch
	TraceSwitch_t3738701686 * ___RuntimeLicenseContextSwitch_0;

public:
	inline static int32_t get_offset_of_RuntimeLicenseContextSwitch_0() { return static_cast<int32_t>(offsetof(RuntimeLicenseContext_t1578118062_StaticFields, ___RuntimeLicenseContextSwitch_0)); }
	inline TraceSwitch_t3738701686 * get_RuntimeLicenseContextSwitch_0() const { return ___RuntimeLicenseContextSwitch_0; }
	inline TraceSwitch_t3738701686 ** get_address_of_RuntimeLicenseContextSwitch_0() { return &___RuntimeLicenseContextSwitch_0; }
	inline void set_RuntimeLicenseContextSwitch_0(TraceSwitch_t3738701686 * value)
	{
		___RuntimeLicenseContextSwitch_0 = value;
		Il2CppCodeGenWriteBarrier((&___RuntimeLicenseContextSwitch_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMELICENSECONTEXT_T1578118062_H
#ifndef PROPERTYTABATTRIBUTE_T2227247962_H
#define PROPERTYTABATTRIBUTE_T2227247962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyTabAttribute
struct  PropertyTabAttribute_t2227247962  : public Attribute_t861562559
{
public:
	// System.ComponentModel.PropertyTabScope[] System.ComponentModel.PropertyTabAttribute::tabScopes
	PropertyTabScopeU5BU5D_t3490735091* ___tabScopes_0;
	// System.Type[] System.ComponentModel.PropertyTabAttribute::tabClasses
	TypeU5BU5D_t3940880105* ___tabClasses_1;
	// System.String[] System.ComponentModel.PropertyTabAttribute::tabClassNames
	StringU5BU5D_t1281789340* ___tabClassNames_2;

public:
	inline static int32_t get_offset_of_tabScopes_0() { return static_cast<int32_t>(offsetof(PropertyTabAttribute_t2227247962, ___tabScopes_0)); }
	inline PropertyTabScopeU5BU5D_t3490735091* get_tabScopes_0() const { return ___tabScopes_0; }
	inline PropertyTabScopeU5BU5D_t3490735091** get_address_of_tabScopes_0() { return &___tabScopes_0; }
	inline void set_tabScopes_0(PropertyTabScopeU5BU5D_t3490735091* value)
	{
		___tabScopes_0 = value;
		Il2CppCodeGenWriteBarrier((&___tabScopes_0), value);
	}

	inline static int32_t get_offset_of_tabClasses_1() { return static_cast<int32_t>(offsetof(PropertyTabAttribute_t2227247962, ___tabClasses_1)); }
	inline TypeU5BU5D_t3940880105* get_tabClasses_1() const { return ___tabClasses_1; }
	inline TypeU5BU5D_t3940880105** get_address_of_tabClasses_1() { return &___tabClasses_1; }
	inline void set_tabClasses_1(TypeU5BU5D_t3940880105* value)
	{
		___tabClasses_1 = value;
		Il2CppCodeGenWriteBarrier((&___tabClasses_1), value);
	}

	inline static int32_t get_offset_of_tabClassNames_2() { return static_cast<int32_t>(offsetof(PropertyTabAttribute_t2227247962, ___tabClassNames_2)); }
	inline StringU5BU5D_t1281789340* get_tabClassNames_2() const { return ___tabClassNames_2; }
	inline StringU5BU5D_t1281789340** get_address_of_tabClassNames_2() { return &___tabClassNames_2; }
	inline void set_tabClassNames_2(StringU5BU5D_t1281789340* value)
	{
		___tabClassNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___tabClassNames_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYTABATTRIBUTE_T2227247962_H
#ifndef DESIGNTIMELICENSECONTEXT_T2427359527_H
#define DESIGNTIMELICENSECONTEXT_T2427359527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.DesigntimeLicenseContext
struct  DesigntimeLicenseContext_t2427359527  : public LicenseContext_t2141136407
{
public:
	// System.Collections.Hashtable System.ComponentModel.Design.DesigntimeLicenseContext::savedLicenseKeys
	Hashtable_t1853889766 * ___savedLicenseKeys_0;

public:
	inline static int32_t get_offset_of_savedLicenseKeys_0() { return static_cast<int32_t>(offsetof(DesigntimeLicenseContext_t2427359527, ___savedLicenseKeys_0)); }
	inline Hashtable_t1853889766 * get_savedLicenseKeys_0() const { return ___savedLicenseKeys_0; }
	inline Hashtable_t1853889766 ** get_address_of_savedLicenseKeys_0() { return &___savedLicenseKeys_0; }
	inline void set_savedLicenseKeys_0(Hashtable_t1853889766 * value)
	{
		___savedLicenseKeys_0 = value;
		Il2CppCodeGenWriteBarrier((&___savedLicenseKeys_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNTIMELICENSECONTEXT_T2427359527_H
#ifndef TOOLBOXITEMATTRIBUTE_T243705872_H
#define TOOLBOXITEMATTRIBUTE_T243705872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ToolboxItemAttribute
struct  ToolboxItemAttribute_t243705872  : public Attribute_t861562559
{
public:
	// System.Type System.ComponentModel.ToolboxItemAttribute::toolboxItemType
	Type_t * ___toolboxItemType_0;
	// System.String System.ComponentModel.ToolboxItemAttribute::toolboxItemTypeName
	String_t* ___toolboxItemTypeName_1;

public:
	inline static int32_t get_offset_of_toolboxItemType_0() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t243705872, ___toolboxItemType_0)); }
	inline Type_t * get_toolboxItemType_0() const { return ___toolboxItemType_0; }
	inline Type_t ** get_address_of_toolboxItemType_0() { return &___toolboxItemType_0; }
	inline void set_toolboxItemType_0(Type_t * value)
	{
		___toolboxItemType_0 = value;
		Il2CppCodeGenWriteBarrier((&___toolboxItemType_0), value);
	}

	inline static int32_t get_offset_of_toolboxItemTypeName_1() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t243705872, ___toolboxItemTypeName_1)); }
	inline String_t* get_toolboxItemTypeName_1() const { return ___toolboxItemTypeName_1; }
	inline String_t** get_address_of_toolboxItemTypeName_1() { return &___toolboxItemTypeName_1; }
	inline void set_toolboxItemTypeName_1(String_t* value)
	{
		___toolboxItemTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___toolboxItemTypeName_1), value);
	}
};

struct ToolboxItemAttribute_t243705872_StaticFields
{
public:
	// System.ComponentModel.ToolboxItemAttribute System.ComponentModel.ToolboxItemAttribute::Default
	ToolboxItemAttribute_t243705872 * ___Default_2;
	// System.ComponentModel.ToolboxItemAttribute System.ComponentModel.ToolboxItemAttribute::None
	ToolboxItemAttribute_t243705872 * ___None_3;

public:
	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t243705872_StaticFields, ___Default_2)); }
	inline ToolboxItemAttribute_t243705872 * get_Default_2() const { return ___Default_2; }
	inline ToolboxItemAttribute_t243705872 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(ToolboxItemAttribute_t243705872 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t243705872_StaticFields, ___None_3)); }
	inline ToolboxItemAttribute_t243705872 * get_None_3() const { return ___None_3; }
	inline ToolboxItemAttribute_t243705872 ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(ToolboxItemAttribute_t243705872 * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((&___None_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLBOXITEMATTRIBUTE_T243705872_H
#ifndef NAMEVALUECOLLECTION_T407452768_H
#define NAMEVALUECOLLECTION_T407452768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t407452768  : public NameObjectCollectionBase_t2091847364
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_t1281789340* ____all_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_t1281789340* ____allKeys_11;

public:
	inline static int32_t get_offset_of__all_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t407452768, ____all_10)); }
	inline StringU5BU5D_t1281789340* get__all_10() const { return ____all_10; }
	inline StringU5BU5D_t1281789340** get_address_of__all_10() { return &____all_10; }
	inline void set__all_10(StringU5BU5D_t1281789340* value)
	{
		____all_10 = value;
		Il2CppCodeGenWriteBarrier((&____all_10), value);
	}

	inline static int32_t get_offset_of__allKeys_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t407452768, ____allKeys_11)); }
	inline StringU5BU5D_t1281789340* get__allKeys_11() const { return ____allKeys_11; }
	inline StringU5BU5D_t1281789340** get_address_of__allKeys_11() { return &____allKeys_11; }
	inline void set__allKeys_11(StringU5BU5D_t1281789340* value)
	{
		____allKeys_11 = value;
		Il2CppCodeGenWriteBarrier((&____allKeys_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T407452768_H
#ifndef ROOTDESIGNERSERIALIZERATTRIBUTE_T3074689342_H
#define ROOTDESIGNERSERIALIZERATTRIBUTE_T3074689342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
struct  RootDesignerSerializerAttribute_t3074689342  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::reloadable
	bool ___reloadable_0;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::serializerTypeName
	String_t* ___serializerTypeName_1;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::serializerBaseTypeName
	String_t* ___serializerBaseTypeName_2;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::typeId
	String_t* ___typeId_3;

public:
	inline static int32_t get_offset_of_reloadable_0() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t3074689342, ___reloadable_0)); }
	inline bool get_reloadable_0() const { return ___reloadable_0; }
	inline bool* get_address_of_reloadable_0() { return &___reloadable_0; }
	inline void set_reloadable_0(bool value)
	{
		___reloadable_0 = value;
	}

	inline static int32_t get_offset_of_serializerTypeName_1() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t3074689342, ___serializerTypeName_1)); }
	inline String_t* get_serializerTypeName_1() const { return ___serializerTypeName_1; }
	inline String_t** get_address_of_serializerTypeName_1() { return &___serializerTypeName_1; }
	inline void set_serializerTypeName_1(String_t* value)
	{
		___serializerTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___serializerTypeName_1), value);
	}

	inline static int32_t get_offset_of_serializerBaseTypeName_2() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t3074689342, ___serializerBaseTypeName_2)); }
	inline String_t* get_serializerBaseTypeName_2() const { return ___serializerBaseTypeName_2; }
	inline String_t** get_address_of_serializerBaseTypeName_2() { return &___serializerBaseTypeName_2; }
	inline void set_serializerBaseTypeName_2(String_t* value)
	{
		___serializerBaseTypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___serializerBaseTypeName_2), value);
	}

	inline static int32_t get_offset_of_typeId_3() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t3074689342, ___typeId_3)); }
	inline String_t* get_typeId_3() const { return ___typeId_3; }
	inline String_t** get_address_of_typeId_3() { return &___typeId_3; }
	inline void set_typeId_3(String_t* value)
	{
		___typeId_3 = value;
		Il2CppCodeGenWriteBarrier((&___typeId_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROOTDESIGNERSERIALIZERATTRIBUTE_T3074689342_H
#ifndef PARENTHESIZEPROPERTYNAMEATTRIBUTE_T878408981_H
#define PARENTHESIZEPROPERTYNAMEATTRIBUTE_T878408981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ParenthesizePropertyNameAttribute
struct  ParenthesizePropertyNameAttribute_t878408981  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.ParenthesizePropertyNameAttribute::needParenthesis
	bool ___needParenthesis_1;

public:
	inline static int32_t get_offset_of_needParenthesis_1() { return static_cast<int32_t>(offsetof(ParenthesizePropertyNameAttribute_t878408981, ___needParenthesis_1)); }
	inline bool get_needParenthesis_1() const { return ___needParenthesis_1; }
	inline bool* get_address_of_needParenthesis_1() { return &___needParenthesis_1; }
	inline void set_needParenthesis_1(bool value)
	{
		___needParenthesis_1 = value;
	}
};

struct ParenthesizePropertyNameAttribute_t878408981_StaticFields
{
public:
	// System.ComponentModel.ParenthesizePropertyNameAttribute System.ComponentModel.ParenthesizePropertyNameAttribute::Default
	ParenthesizePropertyNameAttribute_t878408981 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ParenthesizePropertyNameAttribute_t878408981_StaticFields, ___Default_0)); }
	inline ParenthesizePropertyNameAttribute_t878408981 * get_Default_0() const { return ___Default_0; }
	inline ParenthesizePropertyNameAttribute_t878408981 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ParenthesizePropertyNameAttribute_t878408981 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARENTHESIZEPROPERTYNAMEATTRIBUTE_T878408981_H
#ifndef CASESENSITIVESTRINGDICTIONARY_T553067329_H
#define CASESENSITIVESTRINGDICTIONARY_T553067329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.CaseSensitiveStringDictionary
struct  CaseSensitiveStringDictionary_t553067329  : public StringDictionary_t120437468
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASESENSITIVESTRINGDICTIONARY_T553067329_H
#ifndef BITVECTOR32_T3253088880_H
#define BITVECTOR32_T3253088880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.BitVector32
struct  BitVector32_t3253088880 
{
public:
	// System.UInt32 System.Collections.Specialized.BitVector32::data
	uint32_t ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(BitVector32_t3253088880, ___data_0)); }
	inline uint32_t get_data_0() const { return ___data_0; }
	inline uint32_t* get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(uint32_t value)
	{
		___data_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITVECTOR32_T3253088880_H
#ifndef WARNINGEXCEPTION_T463254787_H
#define WARNINGEXCEPTION_T463254787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WarningException
struct  WarningException_t463254787  : public SystemException_t176217640
{
public:
	// System.String System.ComponentModel.WarningException::helpUrl
	String_t* ___helpUrl_17;
	// System.String System.ComponentModel.WarningException::helpTopic
	String_t* ___helpTopic_18;

public:
	inline static int32_t get_offset_of_helpUrl_17() { return static_cast<int32_t>(offsetof(WarningException_t463254787, ___helpUrl_17)); }
	inline String_t* get_helpUrl_17() const { return ___helpUrl_17; }
	inline String_t** get_address_of_helpUrl_17() { return &___helpUrl_17; }
	inline void set_helpUrl_17(String_t* value)
	{
		___helpUrl_17 = value;
		Il2CppCodeGenWriteBarrier((&___helpUrl_17), value);
	}

	inline static int32_t get_offset_of_helpTopic_18() { return static_cast<int32_t>(offsetof(WarningException_t463254787, ___helpTopic_18)); }
	inline String_t* get_helpTopic_18() const { return ___helpTopic_18; }
	inline String_t** get_address_of_helpTopic_18() { return &___helpTopic_18; }
	inline void set_helpTopic_18(String_t* value)
	{
		___helpTopic_18 = value;
		Il2CppCodeGenWriteBarrier((&___helpTopic_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WARNINGEXCEPTION_T463254787_H
#ifndef HASHTABLE_T1853889766_H
#define HASHTABLE_T1853889766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t1853889766  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_t876121385* ___buckets_10;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_11;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_12;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_13;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_20;

public:
	inline static int32_t get_offset_of_buckets_10() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___buckets_10)); }
	inline bucketU5BU5D_t876121385* get_buckets_10() const { return ___buckets_10; }
	inline bucketU5BU5D_t876121385** get_address_of_buckets_10() { return &___buckets_10; }
	inline void set_buckets_10(bucketU5BU5D_t876121385* value)
	{
		___buckets_10 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_10), value);
	}

	inline static int32_t get_offset_of_count_11() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___count_11)); }
	inline int32_t get_count_11() const { return ___count_11; }
	inline int32_t* get_address_of_count_11() { return &___count_11; }
	inline void set_count_11(int32_t value)
	{
		___count_11 = value;
	}

	inline static int32_t get_offset_of_occupancy_12() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___occupancy_12)); }
	inline int32_t get_occupancy_12() const { return ___occupancy_12; }
	inline int32_t* get_address_of_occupancy_12() { return &___occupancy_12; }
	inline void set_occupancy_12(int32_t value)
	{
		___occupancy_12 = value;
	}

	inline static int32_t get_offset_of_loadsize_13() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___loadsize_13)); }
	inline int32_t get_loadsize_13() const { return ___loadsize_13; }
	inline int32_t* get_address_of_loadsize_13() { return &___loadsize_13; }
	inline void set_loadsize_13(int32_t value)
	{
		___loadsize_13 = value;
	}

	inline static int32_t get_offset_of_loadFactor_14() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___loadFactor_14)); }
	inline float get_loadFactor_14() const { return ___loadFactor_14; }
	inline float* get_address_of_loadFactor_14() { return &___loadFactor_14; }
	inline void set_loadFactor_14(float value)
	{
		___loadFactor_14 = value;
	}

	inline static int32_t get_offset_of_version_15() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___version_15)); }
	inline int32_t get_version_15() const { return ___version_15; }
	inline int32_t* get_address_of_version_15() { return &___version_15; }
	inline void set_version_15(int32_t value)
	{
		___version_15 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_16() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___isWriterInProgress_16)); }
	inline bool get_isWriterInProgress_16() const { return ___isWriterInProgress_16; }
	inline bool* get_address_of_isWriterInProgress_16() { return &___isWriterInProgress_16; }
	inline void set_isWriterInProgress_16(bool value)
	{
		___isWriterInProgress_16 = value;
	}

	inline static int32_t get_offset_of_keys_17() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___keys_17)); }
	inline RuntimeObject* get_keys_17() const { return ___keys_17; }
	inline RuntimeObject** get_address_of_keys_17() { return &___keys_17; }
	inline void set_keys_17(RuntimeObject* value)
	{
		___keys_17 = value;
		Il2CppCodeGenWriteBarrier((&___keys_17), value);
	}

	inline static int32_t get_offset_of_values_18() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___values_18)); }
	inline RuntimeObject* get_values_18() const { return ___values_18; }
	inline RuntimeObject** get_address_of_values_18() { return &___values_18; }
	inline void set_values_18(RuntimeObject* value)
	{
		___values_18 = value;
		Il2CppCodeGenWriteBarrier((&___values_18), value);
	}

	inline static int32_t get_offset_of__keycomparer_19() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ____keycomparer_19)); }
	inline RuntimeObject* get__keycomparer_19() const { return ____keycomparer_19; }
	inline RuntimeObject** get_address_of__keycomparer_19() { return &____keycomparer_19; }
	inline void set__keycomparer_19(RuntimeObject* value)
	{
		____keycomparer_19 = value;
		Il2CppCodeGenWriteBarrier((&____keycomparer_19), value);
	}

	inline static int32_t get_offset_of__syncRoot_20() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ____syncRoot_20)); }
	inline RuntimeObject * get__syncRoot_20() const { return ____syncRoot_20; }
	inline RuntimeObject ** get_address_of__syncRoot_20() { return &____syncRoot_20; }
	inline void set__syncRoot_20(RuntimeObject * value)
	{
		____syncRoot_20 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T1853889766_H
#ifndef TYPECONVERTER_T2249118273_H
#define TYPECONVERTER_T2249118273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2249118273  : public RuntimeObject
{
public:

public:
};

struct TypeConverter_t2249118273_StaticFields
{
public:
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;

public:
	inline static int32_t get_offset_of_useCompatibleTypeConversion_1() { return static_cast<int32_t>(offsetof(TypeConverter_t2249118273_StaticFields, ___useCompatibleTypeConversion_1)); }
	inline bool get_useCompatibleTypeConversion_1() const { return ___useCompatibleTypeConversion_1; }
	inline bool* get_address_of_useCompatibleTypeConversion_1() { return &___useCompatibleTypeConversion_1; }
	inline void set_useCompatibleTypeConversion_1(bool value)
	{
		___useCompatibleTypeConversion_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2249118273_H
#ifndef REFRESHPROPERTIES_T2310254728_H
#define REFRESHPROPERTIES_T2310254728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshProperties
struct  RefreshProperties_t2310254728 
{
public:
	// System.Int32 System.ComponentModel.RefreshProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RefreshProperties_t2310254728, ___value___2)); }
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
#endif // REFRESHPROPERTIES_T2310254728_H
#ifndef EXTERNALEXCEPTION_T3544951457_H
#define EXTERNALEXCEPTION_T3544951457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t3544951457  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T3544951457_H
#ifndef WATCHERCHANGETYPES_T673177441_H
#define WATCHERCHANGETYPES_T673177441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.WatcherChangeTypes
struct  WatcherChangeTypes_t673177441 
{
public:
	// System.Int32 System.IO.WatcherChangeTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WatcherChangeTypes_t673177441, ___value___2)); }
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
#endif // WATCHERCHANGETYPES_T673177441_H
#ifndef NOTIFYFILTERS_T3825601669_H
#define NOTIFYFILTERS_T3825601669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.NotifyFilters
struct  NotifyFilters_t3825601669 
{
public:
	// System.Int32 System.IO.NotifyFilters::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotifyFilters_t3825601669, ___value___2)); }
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
#endif // NOTIFYFILTERS_T3825601669_H
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

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

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
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
struct Delegate_t1188392813_marshaled_pinvoke
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
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
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
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef WEAKREFERENCE_T1334886716_H
#define WEAKREFERENCE_T1334886716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t1334886716  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3351438187  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___gcHandle_1)); }
	inline GCHandle_t3351438187  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3351438187 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3351438187  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T1334886716_H
#ifndef FILEATTRIBUTES_T3417205536_H
#define FILEATTRIBUTES_T3417205536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAttributes
struct  FileAttributes_t3417205536 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t3417205536, ___value___2)); }
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
#endif // FILEATTRIBUTES_T3417205536_H
#ifndef SRCATEGORYATTRIBUTE_T2604373322_H
#define SRCATEGORYATTRIBUTE_T2604373322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SRCategoryAttribute
struct  SRCategoryAttribute_t2604373322  : public CategoryAttribute_t39585132
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SRCATEGORYATTRIBUTE_T2604373322_H
#ifndef PROPERTYTABSCOPE_T3421563254_H
#define PROPERTYTABSCOPE_T3421563254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyTabScope
struct  PropertyTabScope_t3421563254 
{
public:
	// System.Int32 System.ComponentModel.PropertyTabScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyTabScope_t3421563254, ___value___2)); }
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
#endif // PROPERTYTABSCOPE_T3421563254_H
#ifndef FAMCONNECTION_T1678998633_H
#define FAMCONNECTION_T1678998633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FAMConnection
struct  FAMConnection_t1678998633 
{
public:
	// System.Int32 System.IO.FAMConnection::FD
	int32_t ___FD_0;
	// System.IntPtr System.IO.FAMConnection::opaque
	intptr_t ___opaque_1;

public:
	inline static int32_t get_offset_of_FD_0() { return static_cast<int32_t>(offsetof(FAMConnection_t1678998633, ___FD_0)); }
	inline int32_t get_FD_0() const { return ___FD_0; }
	inline int32_t* get_address_of_FD_0() { return &___FD_0; }
	inline void set_FD_0(int32_t value)
	{
		___FD_0 = value;
	}

	inline static int32_t get_offset_of_opaque_1() { return static_cast<int32_t>(offsetof(FAMConnection_t1678998633, ___opaque_1)); }
	inline intptr_t get_opaque_1() const { return ___opaque_1; }
	inline intptr_t* get_address_of_opaque_1() { return &___opaque_1; }
	inline void set_opaque_1(intptr_t value)
	{
		___opaque_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FAMCONNECTION_T1678998633_H
#ifndef FILEACTION_T3839877343_H
#define FILEACTION_T3839877343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAction
struct  FileAction_t3839877343 
{
public:
	// System.Int32 System.IO.FileAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAction_t3839877343, ___value___2)); }
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
#endif // FILEACTION_T3839877343_H
#ifndef FAMDATA_T1817296356_H
#define FAMDATA_T1817296356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FAMData
struct  FAMData_t1817296356  : public RuntimeObject
{
public:
	// System.IO.FileSystemWatcher System.IO.FAMData::FSW
	FileSystemWatcher_t416760199 * ___FSW_0;
	// System.String System.IO.FAMData::Directory
	String_t* ___Directory_1;
	// System.String System.IO.FAMData::FileMask
	String_t* ___FileMask_2;
	// System.Boolean System.IO.FAMData::IncludeSubdirs
	bool ___IncludeSubdirs_3;
	// System.Boolean System.IO.FAMData::Enabled
	bool ___Enabled_4;
	// System.IO.FAMRequest System.IO.FAMData::Request
	FAMRequest_t3578860103  ___Request_5;
	// System.Collections.Hashtable System.IO.FAMData::SubDirs
	Hashtable_t1853889766 * ___SubDirs_6;

public:
	inline static int32_t get_offset_of_FSW_0() { return static_cast<int32_t>(offsetof(FAMData_t1817296356, ___FSW_0)); }
	inline FileSystemWatcher_t416760199 * get_FSW_0() const { return ___FSW_0; }
	inline FileSystemWatcher_t416760199 ** get_address_of_FSW_0() { return &___FSW_0; }
	inline void set_FSW_0(FileSystemWatcher_t416760199 * value)
	{
		___FSW_0 = value;
		Il2CppCodeGenWriteBarrier((&___FSW_0), value);
	}

	inline static int32_t get_offset_of_Directory_1() { return static_cast<int32_t>(offsetof(FAMData_t1817296356, ___Directory_1)); }
	inline String_t* get_Directory_1() const { return ___Directory_1; }
	inline String_t** get_address_of_Directory_1() { return &___Directory_1; }
	inline void set_Directory_1(String_t* value)
	{
		___Directory_1 = value;
		Il2CppCodeGenWriteBarrier((&___Directory_1), value);
	}

	inline static int32_t get_offset_of_FileMask_2() { return static_cast<int32_t>(offsetof(FAMData_t1817296356, ___FileMask_2)); }
	inline String_t* get_FileMask_2() const { return ___FileMask_2; }
	inline String_t** get_address_of_FileMask_2() { return &___FileMask_2; }
	inline void set_FileMask_2(String_t* value)
	{
		___FileMask_2 = value;
		Il2CppCodeGenWriteBarrier((&___FileMask_2), value);
	}

	inline static int32_t get_offset_of_IncludeSubdirs_3() { return static_cast<int32_t>(offsetof(FAMData_t1817296356, ___IncludeSubdirs_3)); }
	inline bool get_IncludeSubdirs_3() const { return ___IncludeSubdirs_3; }
	inline bool* get_address_of_IncludeSubdirs_3() { return &___IncludeSubdirs_3; }
	inline void set_IncludeSubdirs_3(bool value)
	{
		___IncludeSubdirs_3 = value;
	}

	inline static int32_t get_offset_of_Enabled_4() { return static_cast<int32_t>(offsetof(FAMData_t1817296356, ___Enabled_4)); }
	inline bool get_Enabled_4() const { return ___Enabled_4; }
	inline bool* get_address_of_Enabled_4() { return &___Enabled_4; }
	inline void set_Enabled_4(bool value)
	{
		___Enabled_4 = value;
	}

	inline static int32_t get_offset_of_Request_5() { return static_cast<int32_t>(offsetof(FAMData_t1817296356, ___Request_5)); }
	inline FAMRequest_t3578860103  get_Request_5() const { return ___Request_5; }
	inline FAMRequest_t3578860103 * get_address_of_Request_5() { return &___Request_5; }
	inline void set_Request_5(FAMRequest_t3578860103  value)
	{
		___Request_5 = value;
	}

	inline static int32_t get_offset_of_SubDirs_6() { return static_cast<int32_t>(offsetof(FAMData_t1817296356, ___SubDirs_6)); }
	inline Hashtable_t1853889766 * get_SubDirs_6() const { return ___SubDirs_6; }
	inline Hashtable_t1853889766 ** get_address_of_SubDirs_6() { return &___SubDirs_6; }
	inline void set_SubDirs_6(Hashtable_t1853889766 * value)
	{
		___SubDirs_6 = value;
		Il2CppCodeGenWriteBarrier((&___SubDirs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FAMDATA_T1817296356_H
#ifndef FAMCODES_T1537683418_H
#define FAMCODES_T1537683418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FAMCodes
struct  FAMCodes_t1537683418 
{
public:
	// System.Int32 System.IO.FAMCodes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FAMCodes_t1537683418, ___value___2)); }
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
#endif // FAMCODES_T1537683418_H
#ifndef EVENTTYPE_T2132206657_H
#define EVENTTYPE_T2132206657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileSystemWatcher/EventType
struct  EventType_t2132206657 
{
public:
	// System.Int32 System.IO.FileSystemWatcher/EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_t2132206657, ___value___2)); }
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
#endif // EVENTTYPE_T2132206657_H
#ifndef INHERITANCELEVEL_T3095109434_H
#define INHERITANCELEVEL_T3095109434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InheritanceLevel
struct  InheritanceLevel_t3095109434 
{
public:
	// System.Int32 System.ComponentModel.InheritanceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InheritanceLevel_t3095109434, ___value___2)); }
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
#endif // INHERITANCELEVEL_T3095109434_H
#ifndef INOTIFYMASK_T3323194736_H
#define INOTIFYMASK_T3323194736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.InotifyMask
struct  InotifyMask_t3323194736 
{
public:
	// System.UInt32 System.IO.InotifyMask::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InotifyMask_t3323194736, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INOTIFYMASK_T3323194736_H
#ifndef DEFAULTWATCHERDATA_T3310779826_H
#define DEFAULTWATCHERDATA_T3310779826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.DefaultWatcherData
struct  DefaultWatcherData_t3310779826  : public RuntimeObject
{
public:
	// System.IO.FileSystemWatcher System.IO.DefaultWatcherData::FSW
	FileSystemWatcher_t416760199 * ___FSW_0;
	// System.String System.IO.DefaultWatcherData::Directory
	String_t* ___Directory_1;
	// System.String System.IO.DefaultWatcherData::FileMask
	String_t* ___FileMask_2;
	// System.Boolean System.IO.DefaultWatcherData::IncludeSubdirs
	bool ___IncludeSubdirs_3;
	// System.Boolean System.IO.DefaultWatcherData::Enabled
	bool ___Enabled_4;
	// System.Boolean System.IO.DefaultWatcherData::NoWildcards
	bool ___NoWildcards_5;
	// System.DateTime System.IO.DefaultWatcherData::DisabledTime
	DateTime_t3738529785  ___DisabledTime_6;
	// System.Object System.IO.DefaultWatcherData::FilesLock
	RuntimeObject * ___FilesLock_7;
	// System.Collections.Hashtable System.IO.DefaultWatcherData::Files
	Hashtable_t1853889766 * ___Files_8;

public:
	inline static int32_t get_offset_of_FSW_0() { return static_cast<int32_t>(offsetof(DefaultWatcherData_t3310779826, ___FSW_0)); }
	inline FileSystemWatcher_t416760199 * get_FSW_0() const { return ___FSW_0; }
	inline FileSystemWatcher_t416760199 ** get_address_of_FSW_0() { return &___FSW_0; }
	inline void set_FSW_0(FileSystemWatcher_t416760199 * value)
	{
		___FSW_0 = value;
		Il2CppCodeGenWriteBarrier((&___FSW_0), value);
	}

	inline static int32_t get_offset_of_Directory_1() { return static_cast<int32_t>(offsetof(DefaultWatcherData_t3310779826, ___Directory_1)); }
	inline String_t* get_Directory_1() const { return ___Directory_1; }
	inline String_t** get_address_of_Directory_1() { return &___Directory_1; }
	inline void set_Directory_1(String_t* value)
	{
		___Directory_1 = value;
		Il2CppCodeGenWriteBarrier((&___Directory_1), value);
	}

	inline static int32_t get_offset_of_FileMask_2() { return static_cast<int32_t>(offsetof(DefaultWatcherData_t3310779826, ___FileMask_2)); }
	inline String_t* get_FileMask_2() const { return ___FileMask_2; }
	inline String_t** get_address_of_FileMask_2() { return &___FileMask_2; }
	inline void set_FileMask_2(String_t* value)
	{
		___FileMask_2 = value;
		Il2CppCodeGenWriteBarrier((&___FileMask_2), value);
	}

	inline static int32_t get_offset_of_IncludeSubdirs_3() { return static_cast<int32_t>(offsetof(DefaultWatcherData_t3310779826, ___IncludeSubdirs_3)); }
	inline bool get_IncludeSubdirs_3() const { return ___IncludeSubdirs_3; }
	inline bool* get_address_of_IncludeSubdirs_3() { return &___IncludeSubdirs_3; }
	inline void set_IncludeSubdirs_3(bool value)
	{
		___IncludeSubdirs_3 = value;
	}

	inline static int32_t get_offset_of_Enabled_4() { return static_cast<int32_t>(offsetof(DefaultWatcherData_t3310779826, ___Enabled_4)); }
	inline bool get_Enabled_4() const { return ___Enabled_4; }
	inline bool* get_address_of_Enabled_4() { return &___Enabled_4; }
	inline void set_Enabled_4(bool value)
	{
		___Enabled_4 = value;
	}

	inline static int32_t get_offset_of_NoWildcards_5() { return static_cast<int32_t>(offsetof(DefaultWatcherData_t3310779826, ___NoWildcards_5)); }
	inline bool get_NoWildcards_5() const { return ___NoWildcards_5; }
	inline bool* get_address_of_NoWildcards_5() { return &___NoWildcards_5; }
	inline void set_NoWildcards_5(bool value)
	{
		___NoWildcards_5 = value;
	}

	inline static int32_t get_offset_of_DisabledTime_6() { return static_cast<int32_t>(offsetof(DefaultWatcherData_t3310779826, ___DisabledTime_6)); }
	inline DateTime_t3738529785  get_DisabledTime_6() const { return ___DisabledTime_6; }
	inline DateTime_t3738529785 * get_address_of_DisabledTime_6() { return &___DisabledTime_6; }
	inline void set_DisabledTime_6(DateTime_t3738529785  value)
	{
		___DisabledTime_6 = value;
	}

	inline static int32_t get_offset_of_FilesLock_7() { return static_cast<int32_t>(offsetof(DefaultWatcherData_t3310779826, ___FilesLock_7)); }
	inline RuntimeObject * get_FilesLock_7() const { return ___FilesLock_7; }
	inline RuntimeObject ** get_address_of_FilesLock_7() { return &___FilesLock_7; }
	inline void set_FilesLock_7(RuntimeObject * value)
	{
		___FilesLock_7 = value;
		Il2CppCodeGenWriteBarrier((&___FilesLock_7), value);
	}

	inline static int32_t get_offset_of_Files_8() { return static_cast<int32_t>(offsetof(DefaultWatcherData_t3310779826, ___Files_8)); }
	inline Hashtable_t1853889766 * get_Files_8() const { return ___Files_8; }
	inline Hashtable_t1853889766 ** get_address_of_Files_8() { return &___Files_8; }
	inline void set_Files_8(Hashtable_t1853889766 * value)
	{
		___Files_8 = value;
		Il2CppCodeGenWriteBarrier((&___Files_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTWATCHERDATA_T3310779826_H
#ifndef IODESCRIPTIONATTRIBUTE_T2336130459_H
#define IODESCRIPTIONATTRIBUTE_T2336130459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.IODescriptionAttribute
struct  IODescriptionAttribute_t2336130459  : public DescriptionAttribute_t874390736
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IODESCRIPTIONATTRIBUTE_T2336130459_H
#ifndef MULTICASTDELEGATE_T157516450_H
#define MULTICASTDELEGATE_T157516450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t157516450  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t157516450, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t157516450_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t157516450_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T157516450_H
#ifndef EQUALITYWEAKREFERENCE_T1997354963_H
#define EQUALITYWEAKREFERENCE_T1997354963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakHashtable/EqualityWeakReference
struct  EqualityWeakReference_t1997354963  : public WeakReference_t1334886716
{
public:
	// System.Int32 System.ComponentModel.WeakHashtable/EqualityWeakReference::_hashCode
	int32_t ____hashCode_2;

public:
	inline static int32_t get_offset_of__hashCode_2() { return static_cast<int32_t>(offsetof(EqualityWeakReference_t1997354963, ____hashCode_2)); }
	inline int32_t get__hashCode_2() const { return ____hashCode_2; }
	inline int32_t* get_address_of__hashCode_2() { return &____hashCode_2; }
	inline void set__hashCode_2(int32_t value)
	{
		____hashCode_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYWEAKREFERENCE_T1997354963_H
#ifndef WAITFORCHANGEDRESULT_T3377826936_H
#define WAITFORCHANGEDRESULT_T3377826936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.WaitForChangedResult
struct  WaitForChangedResult_t3377826936 
{
public:
	// System.IO.WatcherChangeTypes System.IO.WaitForChangedResult::changeType
	int32_t ___changeType_0;
	// System.String System.IO.WaitForChangedResult::name
	String_t* ___name_1;
	// System.String System.IO.WaitForChangedResult::oldName
	String_t* ___oldName_2;
	// System.Boolean System.IO.WaitForChangedResult::timedOut
	bool ___timedOut_3;

public:
	inline static int32_t get_offset_of_changeType_0() { return static_cast<int32_t>(offsetof(WaitForChangedResult_t3377826936, ___changeType_0)); }
	inline int32_t get_changeType_0() const { return ___changeType_0; }
	inline int32_t* get_address_of_changeType_0() { return &___changeType_0; }
	inline void set_changeType_0(int32_t value)
	{
		___changeType_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(WaitForChangedResult_t3377826936, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_oldName_2() { return static_cast<int32_t>(offsetof(WaitForChangedResult_t3377826936, ___oldName_2)); }
	inline String_t* get_oldName_2() const { return ___oldName_2; }
	inline String_t** get_address_of_oldName_2() { return &___oldName_2; }
	inline void set_oldName_2(String_t* value)
	{
		___oldName_2 = value;
		Il2CppCodeGenWriteBarrier((&___oldName_2), value);
	}

	inline static int32_t get_offset_of_timedOut_3() { return static_cast<int32_t>(offsetof(WaitForChangedResult_t3377826936, ___timedOut_3)); }
	inline bool get_timedOut_3() const { return ___timedOut_3; }
	inline bool* get_address_of_timedOut_3() { return &___timedOut_3; }
	inline void set_timedOut_3(bool value)
	{
		___timedOut_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.IO.WaitForChangedResult
struct WaitForChangedResult_t3377826936_marshaled_pinvoke
{
	int32_t ___changeType_0;
	char* ___name_1;
	char* ___oldName_2;
	int32_t ___timedOut_3;
};
// Native definition for COM marshalling of System.IO.WaitForChangedResult
struct WaitForChangedResult_t3377826936_marshaled_com
{
	int32_t ___changeType_0;
	Il2CppChar* ___name_1;
	Il2CppChar* ___oldName_2;
	int32_t ___timedOut_3;
};
#endif // WAITFORCHANGEDRESULT_T3377826936_H
#ifndef INHERITANCEATTRIBUTE_T3667880172_H
#define INHERITANCEATTRIBUTE_T3667880172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InheritanceAttribute
struct  InheritanceAttribute_t3667880172  : public Attribute_t861562559
{
public:
	// System.ComponentModel.InheritanceLevel System.ComponentModel.InheritanceAttribute::inheritanceLevel
	int32_t ___inheritanceLevel_0;

public:
	inline static int32_t get_offset_of_inheritanceLevel_0() { return static_cast<int32_t>(offsetof(InheritanceAttribute_t3667880172, ___inheritanceLevel_0)); }
	inline int32_t get_inheritanceLevel_0() const { return ___inheritanceLevel_0; }
	inline int32_t* get_address_of_inheritanceLevel_0() { return &___inheritanceLevel_0; }
	inline void set_inheritanceLevel_0(int32_t value)
	{
		___inheritanceLevel_0 = value;
	}
};

struct InheritanceAttribute_t3667880172_StaticFields
{
public:
	// System.ComponentModel.InheritanceAttribute System.ComponentModel.InheritanceAttribute::Inherited
	InheritanceAttribute_t3667880172 * ___Inherited_1;
	// System.ComponentModel.InheritanceAttribute System.ComponentModel.InheritanceAttribute::InheritedReadOnly
	InheritanceAttribute_t3667880172 * ___InheritedReadOnly_2;
	// System.ComponentModel.InheritanceAttribute System.ComponentModel.InheritanceAttribute::NotInherited
	InheritanceAttribute_t3667880172 * ___NotInherited_3;
	// System.ComponentModel.InheritanceAttribute System.ComponentModel.InheritanceAttribute::Default
	InheritanceAttribute_t3667880172 * ___Default_4;

public:
	inline static int32_t get_offset_of_Inherited_1() { return static_cast<int32_t>(offsetof(InheritanceAttribute_t3667880172_StaticFields, ___Inherited_1)); }
	inline InheritanceAttribute_t3667880172 * get_Inherited_1() const { return ___Inherited_1; }
	inline InheritanceAttribute_t3667880172 ** get_address_of_Inherited_1() { return &___Inherited_1; }
	inline void set_Inherited_1(InheritanceAttribute_t3667880172 * value)
	{
		___Inherited_1 = value;
		Il2CppCodeGenWriteBarrier((&___Inherited_1), value);
	}

	inline static int32_t get_offset_of_InheritedReadOnly_2() { return static_cast<int32_t>(offsetof(InheritanceAttribute_t3667880172_StaticFields, ___InheritedReadOnly_2)); }
	inline InheritanceAttribute_t3667880172 * get_InheritedReadOnly_2() const { return ___InheritedReadOnly_2; }
	inline InheritanceAttribute_t3667880172 ** get_address_of_InheritedReadOnly_2() { return &___InheritedReadOnly_2; }
	inline void set_InheritedReadOnly_2(InheritanceAttribute_t3667880172 * value)
	{
		___InheritedReadOnly_2 = value;
		Il2CppCodeGenWriteBarrier((&___InheritedReadOnly_2), value);
	}

	inline static int32_t get_offset_of_NotInherited_3() { return static_cast<int32_t>(offsetof(InheritanceAttribute_t3667880172_StaticFields, ___NotInherited_3)); }
	inline InheritanceAttribute_t3667880172 * get_NotInherited_3() const { return ___NotInherited_3; }
	inline InheritanceAttribute_t3667880172 ** get_address_of_NotInherited_3() { return &___NotInherited_3; }
	inline void set_NotInherited_3(InheritanceAttribute_t3667880172 * value)
	{
		___NotInherited_3 = value;
		Il2CppCodeGenWriteBarrier((&___NotInherited_3), value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(InheritanceAttribute_t3667880172_StaticFields, ___Default_4)); }
	inline InheritanceAttribute_t3667880172 * get_Default_4() const { return ___Default_4; }
	inline InheritanceAttribute_t3667880172 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(InheritanceAttribute_t3667880172 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INHERITANCEATTRIBUTE_T3667880172_H
#ifndef CHECKOUTEXCEPTION_T1433212273_H
#define CHECKOUTEXCEPTION_T1433212273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.CheckoutException
struct  CheckoutException_t1433212273  : public ExternalException_t3544951457
{
public:

public:
};

struct CheckoutException_t1433212273_StaticFields
{
public:
	// System.ComponentModel.Design.CheckoutException System.ComponentModel.Design.CheckoutException::Canceled
	CheckoutException_t1433212273 * ___Canceled_17;

public:
	inline static int32_t get_offset_of_Canceled_17() { return static_cast<int32_t>(offsetof(CheckoutException_t1433212273_StaticFields, ___Canceled_17)); }
	inline CheckoutException_t1433212273 * get_Canceled_17() const { return ___Canceled_17; }
	inline CheckoutException_t1433212273 ** get_address_of_Canceled_17() { return &___Canceled_17; }
	inline void set_Canceled_17(CheckoutException_t1433212273 * value)
	{
		___Canceled_17 = value;
		Il2CppCodeGenWriteBarrier((&___Canceled_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHECKOUTEXCEPTION_T1433212273_H
#ifndef FILEDATA_T355659623_H
#define FILEDATA_T355659623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileData
struct  FileData_t355659623  : public RuntimeObject
{
public:
	// System.String System.IO.FileData::Directory
	String_t* ___Directory_0;
	// System.IO.FileAttributes System.IO.FileData::Attributes
	int32_t ___Attributes_1;
	// System.Boolean System.IO.FileData::NotExists
	bool ___NotExists_2;
	// System.DateTime System.IO.FileData::CreationTime
	DateTime_t3738529785  ___CreationTime_3;
	// System.DateTime System.IO.FileData::LastWriteTime
	DateTime_t3738529785  ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_Directory_0() { return static_cast<int32_t>(offsetof(FileData_t355659623, ___Directory_0)); }
	inline String_t* get_Directory_0() const { return ___Directory_0; }
	inline String_t** get_address_of_Directory_0() { return &___Directory_0; }
	inline void set_Directory_0(String_t* value)
	{
		___Directory_0 = value;
		Il2CppCodeGenWriteBarrier((&___Directory_0), value);
	}

	inline static int32_t get_offset_of_Attributes_1() { return static_cast<int32_t>(offsetof(FileData_t355659623, ___Attributes_1)); }
	inline int32_t get_Attributes_1() const { return ___Attributes_1; }
	inline int32_t* get_address_of_Attributes_1() { return &___Attributes_1; }
	inline void set_Attributes_1(int32_t value)
	{
		___Attributes_1 = value;
	}

	inline static int32_t get_offset_of_NotExists_2() { return static_cast<int32_t>(offsetof(FileData_t355659623, ___NotExists_2)); }
	inline bool get_NotExists_2() const { return ___NotExists_2; }
	inline bool* get_address_of_NotExists_2() { return &___NotExists_2; }
	inline void set_NotExists_2(bool value)
	{
		___NotExists_2 = value;
	}

	inline static int32_t get_offset_of_CreationTime_3() { return static_cast<int32_t>(offsetof(FileData_t355659623, ___CreationTime_3)); }
	inline DateTime_t3738529785  get_CreationTime_3() const { return ___CreationTime_3; }
	inline DateTime_t3738529785 * get_address_of_CreationTime_3() { return &___CreationTime_3; }
	inline void set_CreationTime_3(DateTime_t3738529785  value)
	{
		___CreationTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(FileData_t355659623, ___LastWriteTime_4)); }
	inline DateTime_t3738529785  get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline DateTime_t3738529785 * get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(DateTime_t3738529785  value)
	{
		___LastWriteTime_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEDATA_T355659623_H
#ifndef WIN32EXCEPTION_T3234146298_H
#define WIN32EXCEPTION_T3234146298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Win32Exception
struct  Win32Exception_t3234146298  : public ExternalException_t3544951457
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_t3234146298, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32EXCEPTION_T3234146298_H
#ifndef FILESYSTEMEVENTARGS_T1603777841_H
#define FILESYSTEMEVENTARGS_T1603777841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileSystemEventArgs
struct  FileSystemEventArgs_t1603777841  : public EventArgs_t3591816995
{
public:
	// System.IO.WatcherChangeTypes System.IO.FileSystemEventArgs::changeType
	int32_t ___changeType_1;
	// System.String System.IO.FileSystemEventArgs::directory
	String_t* ___directory_2;
	// System.String System.IO.FileSystemEventArgs::name
	String_t* ___name_3;

public:
	inline static int32_t get_offset_of_changeType_1() { return static_cast<int32_t>(offsetof(FileSystemEventArgs_t1603777841, ___changeType_1)); }
	inline int32_t get_changeType_1() const { return ___changeType_1; }
	inline int32_t* get_address_of_changeType_1() { return &___changeType_1; }
	inline void set_changeType_1(int32_t value)
	{
		___changeType_1 = value;
	}

	inline static int32_t get_offset_of_directory_2() { return static_cast<int32_t>(offsetof(FileSystemEventArgs_t1603777841, ___directory_2)); }
	inline String_t* get_directory_2() const { return ___directory_2; }
	inline String_t** get_address_of_directory_2() { return &___directory_2; }
	inline void set_directory_2(String_t* value)
	{
		___directory_2 = value;
		Il2CppCodeGenWriteBarrier((&___directory_2), value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FileSystemEventArgs_t1603777841, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESYSTEMEVENTARGS_T1603777841_H
#ifndef INOTIFYEVENT_T2637353984_H
#define INOTIFYEVENT_T2637353984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.InotifyEvent
struct  InotifyEvent_t2637353984 
{
public:
	// System.Int32 System.IO.InotifyEvent::WatchDescriptor
	int32_t ___WatchDescriptor_0;
	// System.IO.InotifyMask System.IO.InotifyEvent::Mask
	uint32_t ___Mask_1;
	// System.String System.IO.InotifyEvent::Name
	String_t* ___Name_2;

public:
	inline static int32_t get_offset_of_WatchDescriptor_0() { return static_cast<int32_t>(offsetof(InotifyEvent_t2637353984, ___WatchDescriptor_0)); }
	inline int32_t get_WatchDescriptor_0() const { return ___WatchDescriptor_0; }
	inline int32_t* get_address_of_WatchDescriptor_0() { return &___WatchDescriptor_0; }
	inline void set_WatchDescriptor_0(int32_t value)
	{
		___WatchDescriptor_0 = value;
	}

	inline static int32_t get_offset_of_Mask_1() { return static_cast<int32_t>(offsetof(InotifyEvent_t2637353984, ___Mask_1)); }
	inline uint32_t get_Mask_1() const { return ___Mask_1; }
	inline uint32_t* get_address_of_Mask_1() { return &___Mask_1; }
	inline void set_Mask_1(uint32_t value)
	{
		___Mask_1 = value;
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(InotifyEvent_t2637353984, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___Name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.IO.InotifyEvent
struct InotifyEvent_t2637353984_marshaled_pinvoke
{
	int32_t ___WatchDescriptor_0;
	uint32_t ___Mask_1;
	char* ___Name_2;
};
// Native definition for COM marshalling of System.IO.InotifyEvent
struct InotifyEvent_t2637353984_marshaled_com
{
	int32_t ___WatchDescriptor_0;
	uint32_t ___Mask_1;
	Il2CppChar* ___Name_2;
};
#endif // INOTIFYEVENT_T2637353984_H
#ifndef REFRESHPROPERTIESATTRIBUTE_T2078493172_H
#define REFRESHPROPERTIESATTRIBUTE_T2078493172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshPropertiesAttribute
struct  RefreshPropertiesAttribute_t2078493172  : public Attribute_t861562559
{
public:
	// System.ComponentModel.RefreshProperties System.ComponentModel.RefreshPropertiesAttribute::refresh
	int32_t ___refresh_3;

public:
	inline static int32_t get_offset_of_refresh_3() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t2078493172, ___refresh_3)); }
	inline int32_t get_refresh_3() const { return ___refresh_3; }
	inline int32_t* get_address_of_refresh_3() { return &___refresh_3; }
	inline void set_refresh_3(int32_t value)
	{
		___refresh_3 = value;
	}
};

struct RefreshPropertiesAttribute_t2078493172_StaticFields
{
public:
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::All
	RefreshPropertiesAttribute_t2078493172 * ___All_0;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Repaint
	RefreshPropertiesAttribute_t2078493172 * ___Repaint_1;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Default
	RefreshPropertiesAttribute_t2078493172 * ___Default_2;

public:
	inline static int32_t get_offset_of_All_0() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t2078493172_StaticFields, ___All_0)); }
	inline RefreshPropertiesAttribute_t2078493172 * get_All_0() const { return ___All_0; }
	inline RefreshPropertiesAttribute_t2078493172 ** get_address_of_All_0() { return &___All_0; }
	inline void set_All_0(RefreshPropertiesAttribute_t2078493172 * value)
	{
		___All_0 = value;
		Il2CppCodeGenWriteBarrier((&___All_0), value);
	}

	inline static int32_t get_offset_of_Repaint_1() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t2078493172_StaticFields, ___Repaint_1)); }
	inline RefreshPropertiesAttribute_t2078493172 * get_Repaint_1() const { return ___Repaint_1; }
	inline RefreshPropertiesAttribute_t2078493172 ** get_address_of_Repaint_1() { return &___Repaint_1; }
	inline void set_Repaint_1(RefreshPropertiesAttribute_t2078493172 * value)
	{
		___Repaint_1 = value;
		Il2CppCodeGenWriteBarrier((&___Repaint_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t2078493172_StaticFields, ___Default_2)); }
	inline RefreshPropertiesAttribute_t2078493172 * get_Default_2() const { return ___Default_2; }
	inline RefreshPropertiesAttribute_t2078493172 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(RefreshPropertiesAttribute_t2078493172 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHPROPERTIESATTRIBUTE_T2078493172_H
#ifndef BASENUMBERCONVERTER_T312147029_H
#define BASENUMBERCONVERTER_T312147029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t312147029  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENUMBERCONVERTER_T312147029_H
#ifndef FAMWATCHER_T3228827479_H
#define FAMWATCHER_T3228827479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FAMWatcher
struct  FAMWatcher_t3228827479  : public RuntimeObject
{
public:

public:
};

struct FAMWatcher_t3228827479_StaticFields
{
public:
	// System.Boolean System.IO.FAMWatcher::failed
	bool ___failed_0;
	// System.IO.FAMWatcher System.IO.FAMWatcher::instance
	FAMWatcher_t3228827479 * ___instance_1;
	// System.Collections.Hashtable System.IO.FAMWatcher::watches
	Hashtable_t1853889766 * ___watches_2;
	// System.Collections.Hashtable System.IO.FAMWatcher::requests
	Hashtable_t1853889766 * ___requests_3;
	// System.IO.FAMConnection System.IO.FAMWatcher::conn
	FAMConnection_t1678998633  ___conn_4;
	// System.Threading.Thread System.IO.FAMWatcher::thread
	Thread_t2300836069 * ___thread_5;
	// System.Boolean System.IO.FAMWatcher::stop
	bool ___stop_6;
	// System.Boolean System.IO.FAMWatcher::use_gamin
	bool ___use_gamin_7;

public:
	inline static int32_t get_offset_of_failed_0() { return static_cast<int32_t>(offsetof(FAMWatcher_t3228827479_StaticFields, ___failed_0)); }
	inline bool get_failed_0() const { return ___failed_0; }
	inline bool* get_address_of_failed_0() { return &___failed_0; }
	inline void set_failed_0(bool value)
	{
		___failed_0 = value;
	}

	inline static int32_t get_offset_of_instance_1() { return static_cast<int32_t>(offsetof(FAMWatcher_t3228827479_StaticFields, ___instance_1)); }
	inline FAMWatcher_t3228827479 * get_instance_1() const { return ___instance_1; }
	inline FAMWatcher_t3228827479 ** get_address_of_instance_1() { return &___instance_1; }
	inline void set_instance_1(FAMWatcher_t3228827479 * value)
	{
		___instance_1 = value;
		Il2CppCodeGenWriteBarrier((&___instance_1), value);
	}

	inline static int32_t get_offset_of_watches_2() { return static_cast<int32_t>(offsetof(FAMWatcher_t3228827479_StaticFields, ___watches_2)); }
	inline Hashtable_t1853889766 * get_watches_2() const { return ___watches_2; }
	inline Hashtable_t1853889766 ** get_address_of_watches_2() { return &___watches_2; }
	inline void set_watches_2(Hashtable_t1853889766 * value)
	{
		___watches_2 = value;
		Il2CppCodeGenWriteBarrier((&___watches_2), value);
	}

	inline static int32_t get_offset_of_requests_3() { return static_cast<int32_t>(offsetof(FAMWatcher_t3228827479_StaticFields, ___requests_3)); }
	inline Hashtable_t1853889766 * get_requests_3() const { return ___requests_3; }
	inline Hashtable_t1853889766 ** get_address_of_requests_3() { return &___requests_3; }
	inline void set_requests_3(Hashtable_t1853889766 * value)
	{
		___requests_3 = value;
		Il2CppCodeGenWriteBarrier((&___requests_3), value);
	}

	inline static int32_t get_offset_of_conn_4() { return static_cast<int32_t>(offsetof(FAMWatcher_t3228827479_StaticFields, ___conn_4)); }
	inline FAMConnection_t1678998633  get_conn_4() const { return ___conn_4; }
	inline FAMConnection_t1678998633 * get_address_of_conn_4() { return &___conn_4; }
	inline void set_conn_4(FAMConnection_t1678998633  value)
	{
		___conn_4 = value;
	}

	inline static int32_t get_offset_of_thread_5() { return static_cast<int32_t>(offsetof(FAMWatcher_t3228827479_StaticFields, ___thread_5)); }
	inline Thread_t2300836069 * get_thread_5() const { return ___thread_5; }
	inline Thread_t2300836069 ** get_address_of_thread_5() { return &___thread_5; }
	inline void set_thread_5(Thread_t2300836069 * value)
	{
		___thread_5 = value;
		Il2CppCodeGenWriteBarrier((&___thread_5), value);
	}

	inline static int32_t get_offset_of_stop_6() { return static_cast<int32_t>(offsetof(FAMWatcher_t3228827479_StaticFields, ___stop_6)); }
	inline bool get_stop_6() const { return ___stop_6; }
	inline bool* get_address_of_stop_6() { return &___stop_6; }
	inline void set_stop_6(bool value)
	{
		___stop_6 = value;
	}

	inline static int32_t get_offset_of_use_gamin_7() { return static_cast<int32_t>(offsetof(FAMWatcher_t3228827479_StaticFields, ___use_gamin_7)); }
	inline bool get_use_gamin_7() const { return ___use_gamin_7; }
	inline bool* get_address_of_use_gamin_7() { return &___use_gamin_7; }
	inline void set_use_gamin_7(bool value)
	{
		___use_gamin_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FAMWATCHER_T3228827479_H
#ifndef TYPELISTCONVERTER_T2201570135_H
#define TYPELISTCONVERTER_T2201570135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeListConverter
struct  TypeListConverter_t2201570135  : public TypeConverter_t2249118273
{
public:
	// System.Type[] System.ComponentModel.TypeListConverter::types
	TypeU5BU5D_t3940880105* ___types_2;
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.TypeListConverter::values
	StandardValuesCollection_t2184948248 * ___values_3;

public:
	inline static int32_t get_offset_of_types_2() { return static_cast<int32_t>(offsetof(TypeListConverter_t2201570135, ___types_2)); }
	inline TypeU5BU5D_t3940880105* get_types_2() const { return ___types_2; }
	inline TypeU5BU5D_t3940880105** get_address_of_types_2() { return &___types_2; }
	inline void set_types_2(TypeU5BU5D_t3940880105* value)
	{
		___types_2 = value;
		Il2CppCodeGenWriteBarrier((&___types_2), value);
	}

	inline static int32_t get_offset_of_values_3() { return static_cast<int32_t>(offsetof(TypeListConverter_t2201570135, ___values_3)); }
	inline StandardValuesCollection_t2184948248 * get_values_3() const { return ___values_3; }
	inline StandardValuesCollection_t2184948248 ** get_address_of_values_3() { return &___values_3; }
	inline void set_values_3(StandardValuesCollection_t2184948248 * value)
	{
		___values_3 = value;
		Il2CppCodeGenWriteBarrier((&___values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELISTCONVERTER_T2201570135_H
#ifndef WEAKHASHTABLE_T3533205710_H
#define WEAKHASHTABLE_T3533205710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakHashtable
struct  WeakHashtable_t3533205710  : public Hashtable_t1853889766
{
public:
	// System.Int64 System.ComponentModel.WeakHashtable::_lastGlobalMem
	int64_t ____lastGlobalMem_22;
	// System.Int32 System.ComponentModel.WeakHashtable::_lastHashCount
	int32_t ____lastHashCount_23;

public:
	inline static int32_t get_offset_of__lastGlobalMem_22() { return static_cast<int32_t>(offsetof(WeakHashtable_t3533205710, ____lastGlobalMem_22)); }
	inline int64_t get__lastGlobalMem_22() const { return ____lastGlobalMem_22; }
	inline int64_t* get_address_of__lastGlobalMem_22() { return &____lastGlobalMem_22; }
	inline void set__lastGlobalMem_22(int64_t value)
	{
		____lastGlobalMem_22 = value;
	}

	inline static int32_t get_offset_of__lastHashCount_23() { return static_cast<int32_t>(offsetof(WeakHashtable_t3533205710, ____lastHashCount_23)); }
	inline int32_t get__lastHashCount_23() const { return ____lastHashCount_23; }
	inline int32_t* get_address_of__lastHashCount_23() { return &____lastHashCount_23; }
	inline void set__lastHashCount_23(int32_t value)
	{
		____lastHashCount_23 = value;
	}
};

struct WeakHashtable_t3533205710_StaticFields
{
public:
	// System.Collections.IEqualityComparer System.ComponentModel.WeakHashtable::_comparer
	RuntimeObject* ____comparer_21;

public:
	inline static int32_t get_offset_of__comparer_21() { return static_cast<int32_t>(offsetof(WeakHashtable_t3533205710_StaticFields, ____comparer_21)); }
	inline RuntimeObject* get__comparer_21() const { return ____comparer_21; }
	inline RuntimeObject** get_address_of__comparer_21() { return &____comparer_21; }
	inline void set__comparer_21(RuntimeObject* value)
	{
		____comparer_21 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKHASHTABLE_T3533205710_H
#ifndef FILESYSTEMWATCHER_T416760199_H
#define FILESYSTEMWATCHER_T416760199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileSystemWatcher
struct  FileSystemWatcher_t416760199  : public Component_t3620823400
{
public:
	// System.Boolean System.IO.FileSystemWatcher::enableRaisingEvents
	bool ___enableRaisingEvents_4;
	// System.String System.IO.FileSystemWatcher::filter
	String_t* ___filter_5;
	// System.Boolean System.IO.FileSystemWatcher::includeSubdirectories
	bool ___includeSubdirectories_6;
	// System.Int32 System.IO.FileSystemWatcher::internalBufferSize
	int32_t ___internalBufferSize_7;
	// System.IO.NotifyFilters System.IO.FileSystemWatcher::notifyFilter
	int32_t ___notifyFilter_8;
	// System.String System.IO.FileSystemWatcher::path
	String_t* ___path_9;
	// System.String System.IO.FileSystemWatcher::fullpath
	String_t* ___fullpath_10;
	// System.ComponentModel.ISynchronizeInvoke System.IO.FileSystemWatcher::synchronizingObject
	RuntimeObject* ___synchronizingObject_11;
	// System.IO.WaitForChangedResult System.IO.FileSystemWatcher::lastData
	WaitForChangedResult_t3377826936  ___lastData_12;
	// System.Boolean System.IO.FileSystemWatcher::waiting
	bool ___waiting_13;
	// System.IO.SearchPattern2 System.IO.FileSystemWatcher::pattern
	SearchPattern2_t2824637351 * ___pattern_14;
	// System.Boolean System.IO.FileSystemWatcher::disposed
	bool ___disposed_15;
	// System.String System.IO.FileSystemWatcher::mangledFilter
	String_t* ___mangledFilter_16;
	// System.IO.FileSystemEventHandler System.IO.FileSystemWatcher::Changed
	FileSystemEventHandler_t1806121106 * ___Changed_19;
	// System.IO.FileSystemEventHandler System.IO.FileSystemWatcher::Created
	FileSystemEventHandler_t1806121106 * ___Created_20;
	// System.IO.FileSystemEventHandler System.IO.FileSystemWatcher::Deleted
	FileSystemEventHandler_t1806121106 * ___Deleted_21;
	// System.IO.ErrorEventHandler System.IO.FileSystemWatcher::Error
	ErrorEventHandler_t2621677363 * ___Error_22;
	// System.IO.RenamedEventHandler System.IO.FileSystemWatcher::Renamed
	RenamedEventHandler_t3047461033 * ___Renamed_23;

public:
	inline static int32_t get_offset_of_enableRaisingEvents_4() { return static_cast<int32_t>(offsetof(FileSystemWatcher_t416760199, ___enableRaisingEvents_4)); }
	inline bool get_enableRaisingEvents_4() const { return ___enableRaisingEvents_4; }
	inline bool* get_address_of_enableRaisingEvents_4() { return &___enableRaisingEvents_4; }
	inline void set_enableRaisingEvents_4(bool value)
	{
		___enableRaisingEvents_4 = value;
	}

	inline static int32_t get_offset_of_filter_5() { return static_cast<int32_t>(offsetof(FileSystemWatcher_t416760199, ___filter_5)); }
	inline String_t* get_filter_5() const { return ___filter_5; }
	inline String_t** get_address_of_filter_5() { return &___filter_5; }
	inline void set_filter_5(String_t* value)
	{
		___filter_5 = value;
		Il2CppCodeGenWriteBarrier((&___filter_5), value);
	}

	inline static int32_t get_offset_of_includeSubdirectories_6() { return static_cast<int32_t>(offsetof(FileSystemWatcher_t416760199, ___includeSubdirectories_6)); }
	inline bool get_includeSubdirectories_6() const { return ___includeSubdirectories_6; }
	inline bool* get_address_of_includeSubdirectories_6() { return &___includeSubdirectories_6; }
	inline void set_includeSubdirectories_6(bool value)
	{
		___includeSubdirectories_6 = value;
	}

	inline static int32_t get_offset_of_internalBufferSize_7() { return static_cast<int32_t>(offsetof(FileSystemWatcher_t416760199, ___internalBufferSize_7)); }
	inline int32_t get_internalBufferSize_7() const { return ___internalBufferSize_7; }
	inline int32_t* get_address_of_internalBufferSize_7() { return &___internalBufferSize_7; }
	inline void set_internalBufferSize_7(int32_t value)
	{
		___internalBufferSize_7 = value;
	}

	inline static int32_t get_offset_of_notifyFilter_8() { return static_cast<int32_t>(offsetof(FileSystemWatcher_t416760199, ___notifyFilter_8)); }
	inline int32_t get_notifyFilter_8() const { return ___notifyFilter_8; }
	inline int32_t* get_address_of_notifyFilter_8() { return &___notifyFilter_8; }
	inline void set_notifyFilter_8(int32_t value)
	{
		___notifyFilter_8 = value;
	}

	inline static int32_t get_offset_of_path_9() { return static_cast<int32_t>(offsetof(FileSystemWatcher_t416760199, ___path_9)); }
	inline String_t* get_path_9() const { return ___path_9; }
	inline String_t** get_address_of_path_9() { return &___path_9; }
	inline void set_path_9(String_t* value)
	{
		___path_9 = value;
		Il2CppCodeGenWriteBarrier((&___path_9), value);
	}

	inline static int32_t get_offset_of_fullpath_10() { return static_cast<int32_t>(offsetof(FileSystemWatcher_t416760199, ___fullpath_10)); }
	inline String_t* get_fullpath_10() const { return ___fullpath_10; }
	inline String_t** get_address_of_fullpath_10() { return &___fullpath_10; }
	inline void set_fullpath_10(String_t* value)
	{
		___fullpath_10 = value;
		Il2CppCodeGenWriteBarrier((&___fullpath_10), value);
	}

	inline static int32_t get_offset_of_synchronizingObject_11() { return static_cast<int32_t>(offsetof(FileSystemWatcher_t416760199, ___synchronizingObject_11)); }
	inline RuntimeObject* get_synchronizingObject_11() const { return ___synchronizingObject_11; }
	inline RuntimeObject** get_address_of_synchronizingObject_11() { return &___synchronizingObject_11; }
	inline void set_synchronizingObject_11(RuntimeObject* value)
	{
		___synchronizingObject_11 = value;
		Il2CppCodeGenWriteBarrier((&___synchronizingObject_11), value);
	}

	inline static int32_t get_offset_of_lastData_12() { return static_cast<int32_t>(offsetof(FileSystemWatcher_t416760199, ___lastData_12)); }
	inline WaitForChangedResult_t3377826936  get_lastData_12() const { return ___lastData_12; }
	inline WaitForChangedResult_t3377826936 * get_address_of_lastData_12() { return &___lastData_12; }
	inline void set_lastData_12(WaitForChangedResult_t3377826936  value)
	{
		___lastData_12 = value;
	}

	inline static int32_t get_offset_of_waiting_13() { return static_cast<int32_t>(offsetof(FileSystemWatcher_t416760199, ___waiting_13)); }
	inline bool get_waiting_13() const { return ___waiting_13; }
	inline bool* get_address_of_waiting_13() { return &___waiting_13; }
	inline void set_waiting_13(bool value)
	{
		___waiting_13 = value;
	}

	inline static int32_t get_offset_of_pattern_14() { return static_cast<int32_t>(offsetof(FileSystemWatcher_t416760199, ___pattern_14)); }
	inline SearchPattern2_t2824637351 * get_pattern_14() const { return ___pattern_14; }
	inline SearchPattern2_t2824637351 ** get_address_of_pattern_14() { return &___pattern_14; }
	inline void set_pattern_14(SearchPattern2_t2824637351 * value)
	{
		___pattern_14 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_14), value);
	}

	inline static int32_t get_offset_of_disposed_15() { return static_cast<int32_t>(offsetof(FileSystemWatcher_t416760199, ___disposed_15)); }
	inline bool get_disposed_15() const { return ___disposed_15; }
	inline bool* get_address_of_disposed_15() { return &___disposed_15; }
	inline void set_disposed_15(bool value)
	{
		___disposed_15 = value;
	}

	inline static int32_t get_offset_of_mangledFilter_16() { return static_cast<int32_t>(offsetof(FileSystemWatcher_t416760199, ___mangledFilter_16)); }
	inline String_t* get_mangledFilter_16() const { return ___mangledFilter_16; }
	inline String_t** get_address_of_mangledFilter_16() { return &___mangledFilter_16; }
	inline void set_mangledFilter_16(String_t* value)
	{
		___mangledFilter_16 = value;
		Il2CppCodeGenWriteBarrier((&___mangledFilter_16), value);
	}

	inline static int32_t get_offset_of_Changed_19() { return static_cast<int32_t>(offsetof(FileSystemWatcher_t416760199, ___Changed_19)); }
	inline FileSystemEventHandler_t1806121106 * get_Changed_19() const { return ___Changed_19; }
	inline FileSystemEventHandler_t1806121106 ** get_address_of_Changed_19() { return &___Changed_19; }
	inline void set_Changed_19(FileSystemEventHandler_t1806121106 * value)
	{
		___Changed_19 = value;
		Il2CppCodeGenWriteBarrier((&___Changed_19), value);
	}

	inline static int32_t get_offset_of_Created_20() { return static_cast<int32_t>(offsetof(FileSystemWatcher_t416760199, ___Created_20)); }
	inline FileSystemEventHandler_t1806121106 * get_Created_20() const { return ___Created_20; }
	inline FileSystemEventHandler_t1806121106 ** get_address_of_Created_20() { return &___Created_20; }
	inline void set_Created_20(FileSystemEventHandler_t1806121106 * value)
	{
		___Created_20 = value;
		Il2CppCodeGenWriteBarrier((&___Created_20), value);
	}

	inline static int32_t get_offset_of_Deleted_21() { return static_cast<int32_t>(offsetof(FileSystemWatcher_t416760199, ___Deleted_21)); }
	inline FileSystemEventHandler_t1806121106 * get_Deleted_21() const { return ___Deleted_21; }
	inline FileSystemEventHandler_t1806121106 ** get_address_of_Deleted_21() { return &___Deleted_21; }
	inline void set_Deleted_21(FileSystemEventHandler_t1806121106 * value)
	{
		___Deleted_21 = value;
		Il2CppCodeGenWriteBarrier((&___Deleted_21), value);
	}

	inline static int32_t get_offset_of_Error_22() { return static_cast<int32_t>(offsetof(FileSystemWatcher_t416760199, ___Error_22)); }
	inline ErrorEventHandler_t2621677363 * get_Error_22() const { return ___Error_22; }
	inline ErrorEventHandler_t2621677363 ** get_address_of_Error_22() { return &___Error_22; }
	inline void set_Error_22(ErrorEventHandler_t2621677363 * value)
	{
		___Error_22 = value;
		Il2CppCodeGenWriteBarrier((&___Error_22), value);
	}

	inline static int32_t get_offset_of_Renamed_23() { return static_cast<int32_t>(offsetof(FileSystemWatcher_t416760199, ___Renamed_23)); }
	inline RenamedEventHandler_t3047461033 * get_Renamed_23() const { return ___Renamed_23; }
	inline RenamedEventHandler_t3047461033 ** get_address_of_Renamed_23() { return &___Renamed_23; }
	inline void set_Renamed_23(RenamedEventHandler_t3047461033 * value)
	{
		___Renamed_23 = value;
		Il2CppCodeGenWriteBarrier((&___Renamed_23), value);
	}
};

struct FileSystemWatcher_t416760199_StaticFields
{
public:
	// System.IO.IFileWatcher System.IO.FileSystemWatcher::watcher
	RuntimeObject* ___watcher_17;
	// System.Object System.IO.FileSystemWatcher::lockobj
	RuntimeObject * ___lockobj_18;

public:
	inline static int32_t get_offset_of_watcher_17() { return static_cast<int32_t>(offsetof(FileSystemWatcher_t416760199_StaticFields, ___watcher_17)); }
	inline RuntimeObject* get_watcher_17() const { return ___watcher_17; }
	inline RuntimeObject** get_address_of_watcher_17() { return &___watcher_17; }
	inline void set_watcher_17(RuntimeObject* value)
	{
		___watcher_17 = value;
		Il2CppCodeGenWriteBarrier((&___watcher_17), value);
	}

	inline static int32_t get_offset_of_lockobj_18() { return static_cast<int32_t>(offsetof(FileSystemWatcher_t416760199_StaticFields, ___lockobj_18)); }
	inline RuntimeObject * get_lockobj_18() const { return ___lockobj_18; }
	inline RuntimeObject ** get_address_of_lockobj_18() { return &___lockobj_18; }
	inline void set_lockobj_18(RuntimeObject * value)
	{
		___lockobj_18 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESYSTEMWATCHER_T416760199_H
#ifndef UINT64CONVERTER_T4189949036_H
#define UINT64CONVERTER_T4189949036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt64Converter
struct  UInt64Converter_t4189949036  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64CONVERTER_T4189949036_H
#ifndef UINT32CONVERTER_T3472493373_H
#define UINT32CONVERTER_T3472493373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt32Converter
struct  UInt32Converter_t3472493373  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32CONVERTER_T3472493373_H
#ifndef UINT16CONVERTER_T819459975_H
#define UINT16CONVERTER_T819459975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt16Converter
struct  UInt16Converter_t819459975  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16CONVERTER_T819459975_H
#ifndef ERROREVENTHANDLER_T2621677363_H
#define ERROREVENTHANDLER_T2621677363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.ErrorEventHandler
struct  ErrorEventHandler_t2621677363  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERROREVENTHANDLER_T2621677363_H
#ifndef FILESYSTEMEVENTHANDLER_T1806121106_H
#define FILESYSTEMEVENTHANDLER_T1806121106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileSystemEventHandler
struct  FileSystemEventHandler_t1806121106  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESYSTEMEVENTHANDLER_T1806121106_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2400 = { sizeof (TypeDescriptorComObject_t50518439), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2401 = { sizeof (TypeDescriptorInterface_t3054885090), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2402 = { sizeof (TypeListConverter_t2201570135), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2402[2] = 
{
	TypeListConverter_t2201570135::get_offset_of_types_2(),
	TypeListConverter_t2201570135::get_offset_of_values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2403 = { sizeof (UInt16Converter_t819459975), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2404 = { sizeof (UInt32Converter_t3472493373), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2405 = { sizeof (UInt64Converter_t4189949036), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2406 = { sizeof (WarningException_t463254787), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2406[2] = 
{
	WarningException_t463254787::get_offset_of_helpUrl_17(),
	WarningException_t463254787::get_offset_of_helpTopic_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2407 = { sizeof (Win32Exception_t3234146298), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2407[1] = 
{
	Win32Exception_t3234146298::get_offset_of_nativeErrorCode_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2408 = { sizeof (BaseNumberConverter_t312147029), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2409 = { sizeof (InheritanceAttribute_t3667880172), -1, sizeof(InheritanceAttribute_t3667880172_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2409[5] = 
{
	InheritanceAttribute_t3667880172::get_offset_of_inheritanceLevel_0(),
	InheritanceAttribute_t3667880172_StaticFields::get_offset_of_Inherited_1(),
	InheritanceAttribute_t3667880172_StaticFields::get_offset_of_InheritedReadOnly_2(),
	InheritanceAttribute_t3667880172_StaticFields::get_offset_of_NotInherited_3(),
	InheritanceAttribute_t3667880172_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2410 = { sizeof (InheritanceLevel_t3095109434)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2410[4] = 
{
	InheritanceLevel_t3095109434::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2411 = { sizeof (NotifyParentPropertyAttribute_t1405421815), -1, sizeof(NotifyParentPropertyAttribute_t1405421815_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2411[4] = 
{
	NotifyParentPropertyAttribute_t1405421815_StaticFields::get_offset_of_Yes_0(),
	NotifyParentPropertyAttribute_t1405421815_StaticFields::get_offset_of_No_1(),
	NotifyParentPropertyAttribute_t1405421815_StaticFields::get_offset_of_Default_2(),
	NotifyParentPropertyAttribute_t1405421815::get_offset_of_notifyParent_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2412 = { sizeof (ParenthesizePropertyNameAttribute_t878408981), -1, sizeof(ParenthesizePropertyNameAttribute_t878408981_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2412[2] = 
{
	ParenthesizePropertyNameAttribute_t878408981_StaticFields::get_offset_of_Default_0(),
	ParenthesizePropertyNameAttribute_t878408981::get_offset_of_needParenthesis_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2413 = { sizeof (PropertyTabAttribute_t2227247962), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2413[3] = 
{
	PropertyTabAttribute_t2227247962::get_offset_of_tabScopes_0(),
	PropertyTabAttribute_t2227247962::get_offset_of_tabClasses_1(),
	PropertyTabAttribute_t2227247962::get_offset_of_tabClassNames_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2414 = { sizeof (PropertyTabScope_t3421563254)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2414[5] = 
{
	PropertyTabScope_t3421563254::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2415 = { sizeof (RefreshProperties_t2310254728)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2415[4] = 
{
	RefreshProperties_t2310254728::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2416 = { sizeof (RefreshPropertiesAttribute_t2078493172), -1, sizeof(RefreshPropertiesAttribute_t2078493172_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2416[4] = 
{
	RefreshPropertiesAttribute_t2078493172_StaticFields::get_offset_of_All_0(),
	RefreshPropertiesAttribute_t2078493172_StaticFields::get_offset_of_Repaint_1(),
	RefreshPropertiesAttribute_t2078493172_StaticFields::get_offset_of_Default_2(),
	RefreshPropertiesAttribute_t2078493172::get_offset_of_refresh_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2417 = { sizeof (ToolboxItemAttribute_t243705872), -1, sizeof(ToolboxItemAttribute_t243705872_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2417[4] = 
{
	ToolboxItemAttribute_t243705872::get_offset_of_toolboxItemType_0(),
	ToolboxItemAttribute_t243705872::get_offset_of_toolboxItemTypeName_1(),
	ToolboxItemAttribute_t243705872_StaticFields::get_offset_of_Default_2(),
	ToolboxItemAttribute_t243705872_StaticFields::get_offset_of_None_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2418 = { sizeof (WeakHashtable_t3533205710), -1, sizeof(WeakHashtable_t3533205710_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2418[3] = 
{
	WeakHashtable_t3533205710_StaticFields::get_offset_of__comparer_21(),
	WeakHashtable_t3533205710::get_offset_of__lastGlobalMem_22(),
	WeakHashtable_t3533205710::get_offset_of__lastHashCount_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2419 = { sizeof (WeakKeyComparer_t448163292), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2420 = { sizeof (EqualityWeakReference_t1997354963), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2420[1] = 
{
	EqualityWeakReference_t1997354963::get_offset_of__hashCode_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2421 = { sizeof (SRCategoryAttribute_t2604373322), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2422 = { sizeof (CheckoutException_t1433212273), -1, sizeof(CheckoutException_t1433212273_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2422[1] = 
{
	CheckoutException_t1433212273_StaticFields::get_offset_of_Canceled_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2423 = { sizeof (DesigntimeLicenseContext_t2427359527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2423[1] = 
{
	DesigntimeLicenseContext_t2427359527::get_offset_of_savedLicenseKeys_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2424 = { sizeof (RuntimeLicenseContext_t1578118062), -1, sizeof(RuntimeLicenseContext_t1578118062_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2424[2] = 
{
	RuntimeLicenseContext_t1578118062_StaticFields::get_offset_of_RuntimeLicenseContextSwitch_0(),
	RuntimeLicenseContext_t1578118062::get_offset_of_savedLicenseKeys_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2425 = { sizeof (DesigntimeLicenseContextSerializer_t377857600), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2426 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2427 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2428 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2429 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2430 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2431 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2432 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2433 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2434 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2435 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2436 = { sizeof (DesignerSerializerAttribute_t1570548024), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2436[3] = 
{
	DesignerSerializerAttribute_t1570548024::get_offset_of_serializerTypeName_0(),
	DesignerSerializerAttribute_t1570548024::get_offset_of_serializerBaseTypeName_1(),
	DesignerSerializerAttribute_t1570548024::get_offset_of_typeId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2437 = { sizeof (InstanceDescriptor_t657473484), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2437[3] = 
{
	InstanceDescriptor_t657473484::get_offset_of_member_0(),
	InstanceDescriptor_t657473484::get_offset_of_arguments_1(),
	InstanceDescriptor_t657473484::get_offset_of_isComplete_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2438 = { sizeof (RootDesignerSerializerAttribute_t3074689342), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2438[4] = 
{
	RootDesignerSerializerAttribute_t3074689342::get_offset_of_reloadable_0(),
	RootDesignerSerializerAttribute_t3074689342::get_offset_of_serializerTypeName_1(),
	RootDesignerSerializerAttribute_t3074689342::get_offset_of_serializerBaseTypeName_2(),
	RootDesignerSerializerAttribute_t3074689342::get_offset_of_typeId_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2439 = { sizeof (BitVector32_t3253088880)+ sizeof (RuntimeObject), sizeof(BitVector32_t3253088880 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2439[1] = 
{
	BitVector32_t3253088880::get_offset_of_data_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2440 = { sizeof (CaseSensitiveStringDictionary_t553067329), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2441 = { sizeof (HybridDictionary_t4070033136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2441[3] = 
{
	HybridDictionary_t4070033136::get_offset_of_list_0(),
	HybridDictionary_t4070033136::get_offset_of_hashtable_1(),
	HybridDictionary_t4070033136::get_offset_of_caseInsensitive_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2442 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2443 = { sizeof (ListDictionary_t1624492310), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2443[5] = 
{
	ListDictionary_t1624492310::get_offset_of_head_0(),
	ListDictionary_t1624492310::get_offset_of_version_1(),
	ListDictionary_t1624492310::get_offset_of_count_2(),
	ListDictionary_t1624492310::get_offset_of_comparer_3(),
	ListDictionary_t1624492310::get_offset_of__syncRoot_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2444 = { sizeof (NodeEnumerator_t3248827953), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2444[4] = 
{
	NodeEnumerator_t3248827953::get_offset_of_list_0(),
	NodeEnumerator_t3248827953::get_offset_of_current_1(),
	NodeEnumerator_t3248827953::get_offset_of_version_2(),
	NodeEnumerator_t3248827953::get_offset_of_start_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2445 = { sizeof (NodeKeyValueCollection_t1279341543), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2445[2] = 
{
	NodeKeyValueCollection_t1279341543::get_offset_of_list_0(),
	NodeKeyValueCollection_t1279341543::get_offset_of_isKeys_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2446 = { sizeof (NodeKeyValueEnumerator_t642906510), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2446[5] = 
{
	NodeKeyValueEnumerator_t642906510::get_offset_of_list_0(),
	NodeKeyValueEnumerator_t642906510::get_offset_of_current_1(),
	NodeKeyValueEnumerator_t642906510::get_offset_of_version_2(),
	NodeKeyValueEnumerator_t642906510::get_offset_of_isKeys_3(),
	NodeKeyValueEnumerator_t642906510::get_offset_of_start_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2447 = { sizeof (DictionaryNode_t417719465), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2447[3] = 
{
	DictionaryNode_t417719465::get_offset_of_key_0(),
	DictionaryNode_t417719465::get_offset_of_value_1(),
	DictionaryNode_t417719465::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2448 = { sizeof (NameObjectCollectionBase_t2091847364), -1, sizeof(NameObjectCollectionBase_t2091847364_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2448[10] = 
{
	NameObjectCollectionBase_t2091847364::get_offset_of__readOnly_0(),
	NameObjectCollectionBase_t2091847364::get_offset_of__entriesArray_1(),
	NameObjectCollectionBase_t2091847364::get_offset_of__keyComparer_2(),
	NameObjectCollectionBase_t2091847364::get_offset_of__entriesTable_3(),
	NameObjectCollectionBase_t2091847364::get_offset_of__nullKeyEntry_4(),
	NameObjectCollectionBase_t2091847364::get_offset_of__keys_5(),
	NameObjectCollectionBase_t2091847364::get_offset_of__serializationInfo_6(),
	NameObjectCollectionBase_t2091847364::get_offset_of__version_7(),
	NameObjectCollectionBase_t2091847364::get_offset_of__syncRoot_8(),
	NameObjectCollectionBase_t2091847364_StaticFields::get_offset_of_defaultComparer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2449 = { sizeof (NameObjectEntry_t4224248211), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2449[2] = 
{
	NameObjectEntry_t4224248211::get_offset_of_Key_0(),
	NameObjectEntry_t4224248211::get_offset_of_Value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2450 = { sizeof (NameObjectKeysEnumerator_t3824388371), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2450[3] = 
{
	NameObjectKeysEnumerator_t3824388371::get_offset_of__pos_0(),
	NameObjectKeysEnumerator_t3824388371::get_offset_of__coll_1(),
	NameObjectKeysEnumerator_t3824388371::get_offset_of__version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2451 = { sizeof (KeysCollection_t1318642398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2451[1] = 
{
	KeysCollection_t1318642398::get_offset_of__coll_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2452 = { sizeof (CompatibleComparer_t4154576053), -1, sizeof(CompatibleComparer_t4154576053_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2452[4] = 
{
	CompatibleComparer_t4154576053::get_offset_of__comparer_0(),
	CompatibleComparer_t4154576053_StaticFields::get_offset_of_defaultComparer_1(),
	CompatibleComparer_t4154576053::get_offset_of__hcp_2(),
	CompatibleComparer_t4154576053_StaticFields::get_offset_of_defaultHashProvider_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2453 = { sizeof (NameValueCollection_t407452768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2453[2] = 
{
	NameValueCollection_t407452768::get_offset_of__all_10(),
	NameValueCollection_t407452768::get_offset_of__allKeys_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2454 = { sizeof (OrderedDictionary_t2617496293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2454[7] = 
{
	OrderedDictionary_t2617496293::get_offset_of__objectsArray_0(),
	OrderedDictionary_t2617496293::get_offset_of__objectsTable_1(),
	OrderedDictionary_t2617496293::get_offset_of__initialCapacity_2(),
	OrderedDictionary_t2617496293::get_offset_of__comparer_3(),
	OrderedDictionary_t2617496293::get_offset_of__readOnly_4(),
	OrderedDictionary_t2617496293::get_offset_of__syncRoot_5(),
	OrderedDictionary_t2617496293::get_offset_of__siInfo_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2455 = { sizeof (OrderedDictionaryEnumerator_t1215437281), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2455[2] = 
{
	OrderedDictionaryEnumerator_t1215437281::get_offset_of__objectReturnType_0(),
	OrderedDictionaryEnumerator_t1215437281::get_offset_of_arrayEnumerator_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2456 = { sizeof (OrderedDictionaryKeyValueCollection_t1788601968), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2456[2] = 
{
	OrderedDictionaryKeyValueCollection_t1788601968::get_offset_of__objects_0(),
	OrderedDictionaryKeyValueCollection_t1788601968::get_offset_of_isKeys_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2457 = { sizeof (StringCollection_t167406615), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2457[1] = 
{
	StringCollection_t167406615::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2458 = { sizeof (StringDictionary_t120437468), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2458[1] = 
{
	StringDictionary_t120437468::get_offset_of_contents_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2459 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2460 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2461 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2462 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2463 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2464 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2465 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2466 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2466[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2467 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2467[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2468 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2468[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2469 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2469[11] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2470 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2470[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2471 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2471[10] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2472 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2472[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2473 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2473[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2474 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2474[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2475 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2475[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2476 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2476[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2477 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2477[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2478 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2478[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2479 = { sizeof (DefaultWatcherData_t3310779826), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2479[9] = 
{
	DefaultWatcherData_t3310779826::get_offset_of_FSW_0(),
	DefaultWatcherData_t3310779826::get_offset_of_Directory_1(),
	DefaultWatcherData_t3310779826::get_offset_of_FileMask_2(),
	DefaultWatcherData_t3310779826::get_offset_of_IncludeSubdirs_3(),
	DefaultWatcherData_t3310779826::get_offset_of_Enabled_4(),
	DefaultWatcherData_t3310779826::get_offset_of_NoWildcards_5(),
	DefaultWatcherData_t3310779826::get_offset_of_DisabledTime_6(),
	DefaultWatcherData_t3310779826::get_offset_of_FilesLock_7(),
	DefaultWatcherData_t3310779826::get_offset_of_Files_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2480 = { sizeof (FileData_t355659623), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2480[5] = 
{
	FileData_t355659623::get_offset_of_Directory_0(),
	FileData_t355659623::get_offset_of_Attributes_1(),
	FileData_t355659623::get_offset_of_NotExists_2(),
	FileData_t355659623::get_offset_of_CreationTime_3(),
	FileData_t355659623::get_offset_of_LastWriteTime_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2481 = { sizeof (DefaultWatcher_t2229106420), -1, sizeof(DefaultWatcher_t2229106420_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2481[4] = 
{
	DefaultWatcher_t2229106420_StaticFields::get_offset_of_instance_0(),
	DefaultWatcher_t2229106420_StaticFields::get_offset_of_thread_1(),
	DefaultWatcher_t2229106420_StaticFields::get_offset_of_watches_2(),
	DefaultWatcher_t2229106420_StaticFields::get_offset_of_NoStringsArray_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2482 = { sizeof (ErrorEventArgs_t1584858912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2482[1] = 
{
	ErrorEventArgs_t1584858912::get_offset_of_exception_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2483 = { sizeof (ErrorEventHandler_t2621677363), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2484 = { sizeof (FAMConnection_t1678998633)+ sizeof (RuntimeObject), sizeof(FAMConnection_t1678998633 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2484[2] = 
{
	FAMConnection_t1678998633::get_offset_of_FD_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FAMConnection_t1678998633::get_offset_of_opaque_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2485 = { sizeof (FAMRequest_t3578860103)+ sizeof (RuntimeObject), sizeof(FAMRequest_t3578860103 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2485[1] = 
{
	FAMRequest_t3578860103::get_offset_of_ReqNum_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2486 = { sizeof (FAMCodes_t1537683418)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2486[10] = 
{
	FAMCodes_t1537683418::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2487 = { sizeof (FAMData_t1817296356), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2487[7] = 
{
	FAMData_t1817296356::get_offset_of_FSW_0(),
	FAMData_t1817296356::get_offset_of_Directory_1(),
	FAMData_t1817296356::get_offset_of_FileMask_2(),
	FAMData_t1817296356::get_offset_of_IncludeSubdirs_3(),
	FAMData_t1817296356::get_offset_of_Enabled_4(),
	FAMData_t1817296356::get_offset_of_Request_5(),
	FAMData_t1817296356::get_offset_of_SubDirs_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2488 = { sizeof (FAMWatcher_t3228827479), -1, sizeof(FAMWatcher_t3228827479_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2488[8] = 
{
	FAMWatcher_t3228827479_StaticFields::get_offset_of_failed_0(),
	FAMWatcher_t3228827479_StaticFields::get_offset_of_instance_1(),
	FAMWatcher_t3228827479_StaticFields::get_offset_of_watches_2(),
	FAMWatcher_t3228827479_StaticFields::get_offset_of_requests_3(),
	FAMWatcher_t3228827479_StaticFields::get_offset_of_conn_4(),
	FAMWatcher_t3228827479_StaticFields::get_offset_of_thread_5(),
	FAMWatcher_t3228827479_StaticFields::get_offset_of_stop_6(),
	FAMWatcher_t3228827479_StaticFields::get_offset_of_use_gamin_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2489 = { sizeof (FileAction_t3839877343)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2489[6] = 
{
	FileAction_t3839877343::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2490 = { sizeof (FileSystemEventArgs_t1603777841), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2490[3] = 
{
	FileSystemEventArgs_t1603777841::get_offset_of_changeType_1(),
	FileSystemEventArgs_t1603777841::get_offset_of_directory_2(),
	FileSystemEventArgs_t1603777841::get_offset_of_name_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2491 = { sizeof (FileSystemEventHandler_t1806121106), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2492 = { sizeof (FileSystemWatcher_t416760199), -1, sizeof(FileSystemWatcher_t416760199_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2492[20] = 
{
	FileSystemWatcher_t416760199::get_offset_of_enableRaisingEvents_4(),
	FileSystemWatcher_t416760199::get_offset_of_filter_5(),
	FileSystemWatcher_t416760199::get_offset_of_includeSubdirectories_6(),
	FileSystemWatcher_t416760199::get_offset_of_internalBufferSize_7(),
	FileSystemWatcher_t416760199::get_offset_of_notifyFilter_8(),
	FileSystemWatcher_t416760199::get_offset_of_path_9(),
	FileSystemWatcher_t416760199::get_offset_of_fullpath_10(),
	FileSystemWatcher_t416760199::get_offset_of_synchronizingObject_11(),
	FileSystemWatcher_t416760199::get_offset_of_lastData_12(),
	FileSystemWatcher_t416760199::get_offset_of_waiting_13(),
	FileSystemWatcher_t416760199::get_offset_of_pattern_14(),
	FileSystemWatcher_t416760199::get_offset_of_disposed_15(),
	FileSystemWatcher_t416760199::get_offset_of_mangledFilter_16(),
	FileSystemWatcher_t416760199_StaticFields::get_offset_of_watcher_17(),
	FileSystemWatcher_t416760199_StaticFields::get_offset_of_lockobj_18(),
	FileSystemWatcher_t416760199::get_offset_of_Changed_19(),
	FileSystemWatcher_t416760199::get_offset_of_Created_20(),
	FileSystemWatcher_t416760199::get_offset_of_Deleted_21(),
	FileSystemWatcher_t416760199::get_offset_of_Error_22(),
	FileSystemWatcher_t416760199::get_offset_of_Renamed_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2493 = { sizeof (EventType_t2132206657)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2493[4] = 
{
	EventType_t2132206657::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2494 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2495 = { sizeof (IODescriptionAttribute_t2336130459), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2496 = { sizeof (InotifyMask_t3323194736)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2496[22] = 
{
	InotifyMask_t3323194736::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2497 = { sizeof (InotifyEvent_t2637353984)+ sizeof (RuntimeObject), sizeof(InotifyEvent_t2637353984_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2497[3] = 
{
	InotifyEvent_t2637353984::get_offset_of_WatchDescriptor_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InotifyEvent_t2637353984::get_offset_of_Mask_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InotifyEvent_t2637353984::get_offset_of_Name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2498 = { sizeof (ParentInotifyData_t1149622319), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2498[4] = 
{
	ParentInotifyData_t1149622319::get_offset_of_IncludeSubdirs_0(),
	ParentInotifyData_t1149622319::get_offset_of_Enabled_1(),
	ParentInotifyData_t1149622319::get_offset_of_children_2(),
	ParentInotifyData_t1149622319::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2499 = { sizeof (InotifyData_t2533354870), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2499[3] = 
{
	InotifyData_t2533354870::get_offset_of_FSW_0(),
	InotifyData_t2533354870::get_offset_of_Directory_1(),
	InotifyData_t2533354870::get_offset_of_Watch_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
