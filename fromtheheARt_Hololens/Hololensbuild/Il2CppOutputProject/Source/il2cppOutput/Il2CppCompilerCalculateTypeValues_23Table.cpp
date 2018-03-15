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

// System.ComponentModel.ISite
struct ISite_t4006303512;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1108123056;
// System.Attribute[]
struct AttributeU5BU5D_t1575011174;
// System.Collections.ICollection
struct ICollection_t3904884886;
// System.ComponentModel.Design.ITypeDescriptorFilterService
struct ITypeDescriptorFilterService_t2751835844;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t1654759486;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.ComponentModel.IComNativeDescriptorHandler
struct IComNativeDescriptorHandler_t2651755546;
// System.Type
struct Type_t;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t4221220734;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t2278158832;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4164928659;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2249118273;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.ComponentModel.PropertyDescriptor[]
struct PropertyDescriptorU5BU5D_t2649761905;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.ComponentModel.WeakHashtable
struct WeakHashtable_t3533205710;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Diagnostics.BooleanSwitch
struct BooleanSwitch_t440064918;
// System.Guid[]
struct GuidU5BU5D_t545550574;
// System.ComponentModel.RefreshEventHandler
struct RefreshEventHandler_t3637242902;
// System.String
struct String_t;
// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor
struct EmptyCustomTypeDescriptor_t4007109994;
// System.ComponentModel.IComponent
struct IComponent_t2320218252;
// System.ComponentModel.NestedContainer
struct NestedContainer_t119127665;
// System.ComponentModel.ISite[]
struct ISiteU5BU5D_t2726343049;
// System.ComponentModel.ComponentCollection
struct ComponentCollection_t1445440302;
// System.ComponentModel.ContainerFilterService
struct ContainerFilterService_t3995528664;
// System.ComponentModel.LicenseContext
struct LicenseContext_t2141136407;
// System.ComponentModel.Design.DesigntimeLicenseContext
struct DesigntimeLicenseContext_t2427359527;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.ComponentModel.ReferenceConverter
struct ReferenceConverter_t1811933861;
// System.Void
struct Void_t1185182177;
// System.ComponentModel.TypeDescriptor/TypeDescriptionNode
struct TypeDescriptionNode_t3022060204;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t3232077895;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Exception
struct Exception_t1436737249;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Text.StringBuilder
struct StringBuilder_t1712802186;
// System.Collections.Generic.List`1<System.ComponentModel.MaskedTextProvider/CharDescriptor>
struct List_1_t3806199219;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Diagnostics.TraceSwitch
struct TraceSwitch_t3738701686;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t88602298;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t3244362832;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t3313059048;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.ComponentModel.ProgressChangedEventArgs
struct ProgressChangedEventArgs_t3227452477;
// System.ComponentModel.RunWorkerCompletedEventArgs
struct RunWorkerCompletedEventArgs_t4030028402;
// System.ComponentModel.RefreshEventArgs
struct RefreshEventArgs_t9288056;
// System.ComponentModel.PropertyChangingEventArgs
struct PropertyChangingEventArgs_t2067745136;
// System.ComponentModel.ListChangedEventArgs
struct ListChangedEventArgs_t1328006001;

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
#ifndef MARSHALBYVALUECOMPONENT_T828052580_H
#define MARSHALBYVALUECOMPONENT_T828052580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t828052580  : public RuntimeObject
{
public:
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::site
	RuntimeObject* ___site_1;
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::events
	EventHandlerList_t1108123056 * ___events_2;

public:
	inline static int32_t get_offset_of_site_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t828052580, ___site_1)); }
	inline RuntimeObject* get_site_1() const { return ___site_1; }
	inline RuntimeObject** get_address_of_site_1() { return &___site_1; }
	inline void set_site_1(RuntimeObject* value)
	{
		___site_1 = value;
		Il2CppCodeGenWriteBarrier((&___site_1), value);
	}

	inline static int32_t get_offset_of_events_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t828052580, ___events_2)); }
	inline EventHandlerList_t1108123056 * get_events_2() const { return ___events_2; }
	inline EventHandlerList_t1108123056 ** get_address_of_events_2() { return &___events_2; }
	inline void set_events_2(EventHandlerList_t1108123056 * value)
	{
		___events_2 = value;
		Il2CppCodeGenWriteBarrier((&___events_2), value);
	}
};

struct MarshalByValueComponent_t828052580_StaticFields
{
public:
	// System.Object System.ComponentModel.MarshalByValueComponent::EventDisposed
	RuntimeObject * ___EventDisposed_0;

public:
	inline static int32_t get_offset_of_EventDisposed_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t828052580_StaticFields, ___EventDisposed_0)); }
	inline RuntimeObject * get_EventDisposed_0() const { return ___EventDisposed_0; }
	inline RuntimeObject ** get_address_of_EventDisposed_0() { return &___EventDisposed_0; }
	inline void set_EventDisposed_0(RuntimeObject * value)
	{
		___EventDisposed_0 = value;
		Il2CppCodeGenWriteBarrier((&___EventDisposed_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYVALUECOMPONENT_T828052580_H
#ifndef MEMBERDESCRIPTORCOMPARER_T457940793_H
#define MEMBERDESCRIPTORCOMPARER_T457940793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/MemberDescriptorComparer
struct  MemberDescriptorComparer_t457940793  : public RuntimeObject
{
public:

public:
};

struct MemberDescriptorComparer_t457940793_StaticFields
{
public:
	// System.ComponentModel.TypeDescriptor/MemberDescriptorComparer System.ComponentModel.TypeDescriptor/MemberDescriptorComparer::Instance
	MemberDescriptorComparer_t457940793 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(MemberDescriptorComparer_t457940793_StaticFields, ___Instance_0)); }
	inline MemberDescriptorComparer_t457940793 * get_Instance_0() const { return ___Instance_0; }
	inline MemberDescriptorComparer_t457940793 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(MemberDescriptorComparer_t457940793 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTORCOMPARER_T457940793_H
#ifndef ATTRIBUTEFILTERCACHEITEM_T1568965748_H
#define ATTRIBUTEFILTERCACHEITEM_T1568965748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/AttributeFilterCacheItem
struct  AttributeFilterCacheItem_t1568965748  : public RuntimeObject
{
public:
	// System.Attribute[] System.ComponentModel.TypeDescriptor/AttributeFilterCacheItem::_filter
	AttributeU5BU5D_t1575011174* ____filter_0;
	// System.Collections.ICollection System.ComponentModel.TypeDescriptor/AttributeFilterCacheItem::FilteredMembers
	RuntimeObject* ___FilteredMembers_1;

public:
	inline static int32_t get_offset_of__filter_0() { return static_cast<int32_t>(offsetof(AttributeFilterCacheItem_t1568965748, ____filter_0)); }
	inline AttributeU5BU5D_t1575011174* get__filter_0() const { return ____filter_0; }
	inline AttributeU5BU5D_t1575011174** get_address_of__filter_0() { return &____filter_0; }
	inline void set__filter_0(AttributeU5BU5D_t1575011174* value)
	{
		____filter_0 = value;
		Il2CppCodeGenWriteBarrier((&____filter_0), value);
	}

	inline static int32_t get_offset_of_FilteredMembers_1() { return static_cast<int32_t>(offsetof(AttributeFilterCacheItem_t1568965748, ___FilteredMembers_1)); }
	inline RuntimeObject* get_FilteredMembers_1() const { return ___FilteredMembers_1; }
	inline RuntimeObject** get_address_of_FilteredMembers_1() { return &___FilteredMembers_1; }
	inline void set_FilteredMembers_1(RuntimeObject* value)
	{
		___FilteredMembers_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilteredMembers_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEFILTERCACHEITEM_T1568965748_H
#ifndef FILTERCACHEITEM_T1189670310_H
#define FILTERCACHEITEM_T1189670310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/FilterCacheItem
struct  FilterCacheItem_t1189670310  : public RuntimeObject
{
public:
	// System.ComponentModel.Design.ITypeDescriptorFilterService System.ComponentModel.TypeDescriptor/FilterCacheItem::_filterService
	RuntimeObject* ____filterService_0;
	// System.Collections.ICollection System.ComponentModel.TypeDescriptor/FilterCacheItem::FilteredMembers
	RuntimeObject* ___FilteredMembers_1;

public:
	inline static int32_t get_offset_of__filterService_0() { return static_cast<int32_t>(offsetof(FilterCacheItem_t1189670310, ____filterService_0)); }
	inline RuntimeObject* get__filterService_0() const { return ____filterService_0; }
	inline RuntimeObject** get_address_of__filterService_0() { return &____filterService_0; }
	inline void set__filterService_0(RuntimeObject* value)
	{
		____filterService_0 = value;
		Il2CppCodeGenWriteBarrier((&____filterService_0), value);
	}

	inline static int32_t get_offset_of_FilteredMembers_1() { return static_cast<int32_t>(offsetof(FilterCacheItem_t1189670310, ___FilteredMembers_1)); }
	inline RuntimeObject* get_FilteredMembers_1() const { return ___FilteredMembers_1; }
	inline RuntimeObject** get_address_of_FilteredMembers_1() { return &___FilteredMembers_1; }
	inline void set_FilteredMembers_1(RuntimeObject* value)
	{
		___FilteredMembers_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilteredMembers_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILTERCACHEITEM_T1189670310_H
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
#ifndef MERGEDTYPEDESCRIPTOR_T3526482283_H
#define MERGEDTYPEDESCRIPTOR_T3526482283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/MergedTypeDescriptor
struct  MergedTypeDescriptor_t3526482283  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/MergedTypeDescriptor::_primary
	RuntimeObject* ____primary_0;
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/MergedTypeDescriptor::_secondary
	RuntimeObject* ____secondary_1;

public:
	inline static int32_t get_offset_of__primary_0() { return static_cast<int32_t>(offsetof(MergedTypeDescriptor_t3526482283, ____primary_0)); }
	inline RuntimeObject* get__primary_0() const { return ____primary_0; }
	inline RuntimeObject** get_address_of__primary_0() { return &____primary_0; }
	inline void set__primary_0(RuntimeObject* value)
	{
		____primary_0 = value;
		Il2CppCodeGenWriteBarrier((&____primary_0), value);
	}

	inline static int32_t get_offset_of__secondary_1() { return static_cast<int32_t>(offsetof(MergedTypeDescriptor_t3526482283, ____secondary_1)); }
	inline RuntimeObject* get__secondary_1() const { return ____secondary_1; }
	inline RuntimeObject** get_address_of__secondary_1() { return &____secondary_1; }
	inline void set__secondary_1(RuntimeObject* value)
	{
		____secondary_1 = value;
		Il2CppCodeGenWriteBarrier((&____secondary_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGEDTYPEDESCRIPTOR_T3526482283_H
#ifndef LISTSORTDESCRIPTIONCOLLECTION_T2955388176_H
#define LISTSORTDESCRIPTIONCOLLECTION_T2955388176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDescriptionCollection
struct  ListSortDescriptionCollection_t2955388176  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.ListSortDescriptionCollection::sorts
	ArrayList_t2718874744 * ___sorts_0;

public:
	inline static int32_t get_offset_of_sorts_0() { return static_cast<int32_t>(offsetof(ListSortDescriptionCollection_t2955388176, ___sorts_0)); }
	inline ArrayList_t2718874744 * get_sorts_0() const { return ___sorts_0; }
	inline ArrayList_t2718874744 ** get_address_of_sorts_0() { return &___sorts_0; }
	inline void set_sorts_0(ArrayList_t2718874744 * value)
	{
		___sorts_0 = value;
		Il2CppCodeGenWriteBarrier((&___sorts_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTSORTDESCRIPTIONCOLLECTION_T2955388176_H
#ifndef COMNATIVETYPEDESCRIPTOR_T2703964002_H
#define COMNATIVETYPEDESCRIPTOR_T2703964002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/ComNativeDescriptionProvider/ComNativeTypeDescriptor
struct  ComNativeTypeDescriptor_t2703964002  : public RuntimeObject
{
public:
	// System.ComponentModel.IComNativeDescriptorHandler System.ComponentModel.TypeDescriptor/ComNativeDescriptionProvider/ComNativeTypeDescriptor::_handler
	RuntimeObject* ____handler_0;
	// System.Object System.ComponentModel.TypeDescriptor/ComNativeDescriptionProvider/ComNativeTypeDescriptor::_instance
	RuntimeObject * ____instance_1;

public:
	inline static int32_t get_offset_of__handler_0() { return static_cast<int32_t>(offsetof(ComNativeTypeDescriptor_t2703964002, ____handler_0)); }
	inline RuntimeObject* get__handler_0() const { return ____handler_0; }
	inline RuntimeObject** get_address_of__handler_0() { return &____handler_0; }
	inline void set__handler_0(RuntimeObject* value)
	{
		____handler_0 = value;
		Il2CppCodeGenWriteBarrier((&____handler_0), value);
	}

	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(ComNativeTypeDescriptor_t2703964002, ____instance_1)); }
	inline RuntimeObject * get__instance_1() const { return ____instance_1; }
	inline RuntimeObject ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(RuntimeObject * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((&____instance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMNATIVETYPEDESCRIPTOR_T2703964002_H
#ifndef REFLECTEDTYPEDATA_T1775264331_H
#define REFLECTEDTYPEDATA_T1775264331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData
struct  ReflectedTypeData_t1775264331  : public RuntimeObject
{
public:
	// System.Type System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_type
	Type_t * ____type_0;
	// System.ComponentModel.AttributeCollection System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_attributes
	AttributeCollection_t4221220734 * ____attributes_1;
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_events
	EventDescriptorCollection_t2278158832 * ____events_2;
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_properties
	PropertyDescriptorCollection_t4164928659 * ____properties_3;
	// System.ComponentModel.TypeConverter System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_converter
	TypeConverter_t2249118273 * ____converter_4;
	// System.Object[] System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_editors
	ObjectU5BU5D_t2843939325* ____editors_5;
	// System.Type[] System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_editorTypes
	TypeU5BU5D_t3940880105* ____editorTypes_6;
	// System.Int32 System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_editorCount
	int32_t ____editorCount_7;

public:
	inline static int32_t get_offset_of__type_0() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t1775264331, ____type_0)); }
	inline Type_t * get__type_0() const { return ____type_0; }
	inline Type_t ** get_address_of__type_0() { return &____type_0; }
	inline void set__type_0(Type_t * value)
	{
		____type_0 = value;
		Il2CppCodeGenWriteBarrier((&____type_0), value);
	}

	inline static int32_t get_offset_of__attributes_1() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t1775264331, ____attributes_1)); }
	inline AttributeCollection_t4221220734 * get__attributes_1() const { return ____attributes_1; }
	inline AttributeCollection_t4221220734 ** get_address_of__attributes_1() { return &____attributes_1; }
	inline void set__attributes_1(AttributeCollection_t4221220734 * value)
	{
		____attributes_1 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_1), value);
	}

	inline static int32_t get_offset_of__events_2() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t1775264331, ____events_2)); }
	inline EventDescriptorCollection_t2278158832 * get__events_2() const { return ____events_2; }
	inline EventDescriptorCollection_t2278158832 ** get_address_of__events_2() { return &____events_2; }
	inline void set__events_2(EventDescriptorCollection_t2278158832 * value)
	{
		____events_2 = value;
		Il2CppCodeGenWriteBarrier((&____events_2), value);
	}

	inline static int32_t get_offset_of__properties_3() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t1775264331, ____properties_3)); }
	inline PropertyDescriptorCollection_t4164928659 * get__properties_3() const { return ____properties_3; }
	inline PropertyDescriptorCollection_t4164928659 ** get_address_of__properties_3() { return &____properties_3; }
	inline void set__properties_3(PropertyDescriptorCollection_t4164928659 * value)
	{
		____properties_3 = value;
		Il2CppCodeGenWriteBarrier((&____properties_3), value);
	}

	inline static int32_t get_offset_of__converter_4() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t1775264331, ____converter_4)); }
	inline TypeConverter_t2249118273 * get__converter_4() const { return ____converter_4; }
	inline TypeConverter_t2249118273 ** get_address_of__converter_4() { return &____converter_4; }
	inline void set__converter_4(TypeConverter_t2249118273 * value)
	{
		____converter_4 = value;
		Il2CppCodeGenWriteBarrier((&____converter_4), value);
	}

	inline static int32_t get_offset_of__editors_5() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t1775264331, ____editors_5)); }
	inline ObjectU5BU5D_t2843939325* get__editors_5() const { return ____editors_5; }
	inline ObjectU5BU5D_t2843939325** get_address_of__editors_5() { return &____editors_5; }
	inline void set__editors_5(ObjectU5BU5D_t2843939325* value)
	{
		____editors_5 = value;
		Il2CppCodeGenWriteBarrier((&____editors_5), value);
	}

	inline static int32_t get_offset_of__editorTypes_6() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t1775264331, ____editorTypes_6)); }
	inline TypeU5BU5D_t3940880105* get__editorTypes_6() const { return ____editorTypes_6; }
	inline TypeU5BU5D_t3940880105** get_address_of__editorTypes_6() { return &____editorTypes_6; }
	inline void set__editorTypes_6(TypeU5BU5D_t3940880105* value)
	{
		____editorTypes_6 = value;
		Il2CppCodeGenWriteBarrier((&____editorTypes_6), value);
	}

	inline static int32_t get_offset_of__editorCount_7() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t1775264331, ____editorCount_7)); }
	inline int32_t get__editorCount_7() const { return ____editorCount_7; }
	inline int32_t* get_address_of__editorCount_7() { return &____editorCount_7; }
	inline void set__editorCount_7(int32_t value)
	{
		____editorCount_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTEDTYPEDATA_T1775264331_H
#ifndef SYNTAXCHECK_T4070995323_H
#define SYNTAXCHECK_T4070995323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SyntaxCheck
struct  SyntaxCheck_t4070995323  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNTAXCHECK_T4070995323_H
#ifndef PROPERTYDESCRIPTORENUMERATOR_T2627442857_H
#define PROPERTYDESCRIPTORENUMERATOR_T2627442857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator
struct  PropertyDescriptorEnumerator_t2627442857  : public RuntimeObject
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::owner
	PropertyDescriptorCollection_t4164928659 * ___owner_0;
	// System.Int32 System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorEnumerator_t2627442857, ___owner_0)); }
	inline PropertyDescriptorCollection_t4164928659 * get_owner_0() const { return ___owner_0; }
	inline PropertyDescriptorCollection_t4164928659 ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(PropertyDescriptorCollection_t4164928659 * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier((&___owner_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorEnumerator_t2627442857, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTORENUMERATOR_T2627442857_H
#ifndef PROPERTYDESCRIPTORCOLLECTION_T4164928659_H
#define PROPERTYDESCRIPTORCOLLECTION_T4164928659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptorCollection
struct  PropertyDescriptorCollection_t4164928659  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.ComponentModel.PropertyDescriptorCollection::cachedFoundProperties
	RuntimeObject* ___cachedFoundProperties_1;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::cachedIgnoreCase
	bool ___cachedIgnoreCase_2;
	// System.ComponentModel.PropertyDescriptor[] System.ComponentModel.PropertyDescriptorCollection::properties
	PropertyDescriptorU5BU5D_t2649761905* ___properties_3;
	// System.Int32 System.ComponentModel.PropertyDescriptorCollection::propCount
	int32_t ___propCount_4;
	// System.String[] System.ComponentModel.PropertyDescriptorCollection::namedSort
	StringU5BU5D_t1281789340* ___namedSort_5;
	// System.Collections.IComparer System.ComponentModel.PropertyDescriptorCollection::comparer
	RuntimeObject* ___comparer_6;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::propsOwned
	bool ___propsOwned_7;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::needSort
	bool ___needSort_8;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::readOnly
	bool ___readOnly_9;

public:
	inline static int32_t get_offset_of_cachedFoundProperties_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t4164928659, ___cachedFoundProperties_1)); }
	inline RuntimeObject* get_cachedFoundProperties_1() const { return ___cachedFoundProperties_1; }
	inline RuntimeObject** get_address_of_cachedFoundProperties_1() { return &___cachedFoundProperties_1; }
	inline void set_cachedFoundProperties_1(RuntimeObject* value)
	{
		___cachedFoundProperties_1 = value;
		Il2CppCodeGenWriteBarrier((&___cachedFoundProperties_1), value);
	}

	inline static int32_t get_offset_of_cachedIgnoreCase_2() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t4164928659, ___cachedIgnoreCase_2)); }
	inline bool get_cachedIgnoreCase_2() const { return ___cachedIgnoreCase_2; }
	inline bool* get_address_of_cachedIgnoreCase_2() { return &___cachedIgnoreCase_2; }
	inline void set_cachedIgnoreCase_2(bool value)
	{
		___cachedIgnoreCase_2 = value;
	}

	inline static int32_t get_offset_of_properties_3() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t4164928659, ___properties_3)); }
	inline PropertyDescriptorU5BU5D_t2649761905* get_properties_3() const { return ___properties_3; }
	inline PropertyDescriptorU5BU5D_t2649761905** get_address_of_properties_3() { return &___properties_3; }
	inline void set_properties_3(PropertyDescriptorU5BU5D_t2649761905* value)
	{
		___properties_3 = value;
		Il2CppCodeGenWriteBarrier((&___properties_3), value);
	}

	inline static int32_t get_offset_of_propCount_4() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t4164928659, ___propCount_4)); }
	inline int32_t get_propCount_4() const { return ___propCount_4; }
	inline int32_t* get_address_of_propCount_4() { return &___propCount_4; }
	inline void set_propCount_4(int32_t value)
	{
		___propCount_4 = value;
	}

	inline static int32_t get_offset_of_namedSort_5() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t4164928659, ___namedSort_5)); }
	inline StringU5BU5D_t1281789340* get_namedSort_5() const { return ___namedSort_5; }
	inline StringU5BU5D_t1281789340** get_address_of_namedSort_5() { return &___namedSort_5; }
	inline void set_namedSort_5(StringU5BU5D_t1281789340* value)
	{
		___namedSort_5 = value;
		Il2CppCodeGenWriteBarrier((&___namedSort_5), value);
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t4164928659, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_propsOwned_7() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t4164928659, ___propsOwned_7)); }
	inline bool get_propsOwned_7() const { return ___propsOwned_7; }
	inline bool* get_address_of_propsOwned_7() { return &___propsOwned_7; }
	inline void set_propsOwned_7(bool value)
	{
		___propsOwned_7 = value;
	}

	inline static int32_t get_offset_of_needSort_8() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t4164928659, ___needSort_8)); }
	inline bool get_needSort_8() const { return ___needSort_8; }
	inline bool* get_address_of_needSort_8() { return &___needSort_8; }
	inline void set_needSort_8(bool value)
	{
		___needSort_8 = value;
	}

	inline static int32_t get_offset_of_readOnly_9() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t4164928659, ___readOnly_9)); }
	inline bool get_readOnly_9() const { return ___readOnly_9; }
	inline bool* get_address_of_readOnly_9() { return &___readOnly_9; }
	inline void set_readOnly_9(bool value)
	{
		___readOnly_9 = value;
	}
};

struct PropertyDescriptorCollection_t4164928659_StaticFields
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Empty
	PropertyDescriptorCollection_t4164928659 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t4164928659_StaticFields, ___Empty_0)); }
	inline PropertyDescriptorCollection_t4164928659 * get_Empty_0() const { return ___Empty_0; }
	inline PropertyDescriptorCollection_t4164928659 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(PropertyDescriptorCollection_t4164928659 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTORCOLLECTION_T4164928659_H
#ifndef STANDARDVALUESCOLLECTION_T2184948248_H
#define STANDARDVALUESCOLLECTION_T2184948248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter/StandardValuesCollection
struct  StandardValuesCollection_t2184948248  : public RuntimeObject
{
public:
	// System.Collections.ICollection System.ComponentModel.TypeConverter/StandardValuesCollection::values
	RuntimeObject* ___values_0;
	// System.Array System.ComponentModel.TypeConverter/StandardValuesCollection::valueArray
	RuntimeArray * ___valueArray_1;

public:
	inline static int32_t get_offset_of_values_0() { return static_cast<int32_t>(offsetof(StandardValuesCollection_t2184948248, ___values_0)); }
	inline RuntimeObject* get_values_0() const { return ___values_0; }
	inline RuntimeObject** get_address_of_values_0() { return &___values_0; }
	inline void set_values_0(RuntimeObject* value)
	{
		___values_0 = value;
		Il2CppCodeGenWriteBarrier((&___values_0), value);
	}

	inline static int32_t get_offset_of_valueArray_1() { return static_cast<int32_t>(offsetof(StandardValuesCollection_t2184948248, ___valueArray_1)); }
	inline RuntimeArray * get_valueArray_1() const { return ___valueArray_1; }
	inline RuntimeArray ** get_address_of_valueArray_1() { return &___valueArray_1; }
	inline void set_valueArray_1(RuntimeArray * value)
	{
		___valueArray_1 = value;
		Il2CppCodeGenWriteBarrier((&___valueArray_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDARDVALUESCOLLECTION_T2184948248_H
#ifndef TYPEDESCRIPTOR_T3066613587_H
#define TYPEDESCRIPTOR_T3066613587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor
struct  TypeDescriptor_t3066613587  : public RuntimeObject
{
public:

public:
};

struct TypeDescriptor_t3066613587_StaticFields
{
public:
	// System.ComponentModel.WeakHashtable System.ComponentModel.TypeDescriptor::_providerTable
	WeakHashtable_t3533205710 * ____providerTable_0;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::_providerTypeTable
	Hashtable_t1853889766 * ____providerTypeTable_1;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeDescriptor::_defaultProviders
	Hashtable_t1853889766 * ____defaultProviders_2;
	// System.ComponentModel.WeakHashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeDescriptor::_associationTable
	WeakHashtable_t3533205710 * ____associationTable_3;
	// System.Int32 System.ComponentModel.TypeDescriptor::_metadataVersion
	int32_t ____metadataVersion_4;
	// System.Int32 System.ComponentModel.TypeDescriptor::_collisionIndex
	int32_t ____collisionIndex_5;
	// System.Diagnostics.BooleanSwitch System.ComponentModel.TypeDescriptor::TraceDescriptor
	BooleanSwitch_t440064918 * ___TraceDescriptor_6;
	// System.Guid[] System.ComponentModel.TypeDescriptor::_pipelineInitializeKeys
	GuidU5BU5D_t545550574* ____pipelineInitializeKeys_10;
	// System.Guid[] System.ComponentModel.TypeDescriptor::_pipelineMergeKeys
	GuidU5BU5D_t545550574* ____pipelineMergeKeys_11;
	// System.Guid[] System.ComponentModel.TypeDescriptor::_pipelineFilterKeys
	GuidU5BU5D_t545550574* ____pipelineFilterKeys_12;
	// System.Guid[] System.ComponentModel.TypeDescriptor::_pipelineAttributeFilterKeys
	GuidU5BU5D_t545550574* ____pipelineAttributeFilterKeys_13;
	// System.Object System.ComponentModel.TypeDescriptor::_internalSyncObject
	RuntimeObject * ____internalSyncObject_14;
	// System.ComponentModel.RefreshEventHandler System.ComponentModel.TypeDescriptor::Refreshed
	RefreshEventHandler_t3637242902 * ___Refreshed_15;

public:
	inline static int32_t get_offset_of__providerTable_0() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____providerTable_0)); }
	inline WeakHashtable_t3533205710 * get__providerTable_0() const { return ____providerTable_0; }
	inline WeakHashtable_t3533205710 ** get_address_of__providerTable_0() { return &____providerTable_0; }
	inline void set__providerTable_0(WeakHashtable_t3533205710 * value)
	{
		____providerTable_0 = value;
		Il2CppCodeGenWriteBarrier((&____providerTable_0), value);
	}

	inline static int32_t get_offset_of__providerTypeTable_1() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____providerTypeTable_1)); }
	inline Hashtable_t1853889766 * get__providerTypeTable_1() const { return ____providerTypeTable_1; }
	inline Hashtable_t1853889766 ** get_address_of__providerTypeTable_1() { return &____providerTypeTable_1; }
	inline void set__providerTypeTable_1(Hashtable_t1853889766 * value)
	{
		____providerTypeTable_1 = value;
		Il2CppCodeGenWriteBarrier((&____providerTypeTable_1), value);
	}

	inline static int32_t get_offset_of__defaultProviders_2() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____defaultProviders_2)); }
	inline Hashtable_t1853889766 * get__defaultProviders_2() const { return ____defaultProviders_2; }
	inline Hashtable_t1853889766 ** get_address_of__defaultProviders_2() { return &____defaultProviders_2; }
	inline void set__defaultProviders_2(Hashtable_t1853889766 * value)
	{
		____defaultProviders_2 = value;
		Il2CppCodeGenWriteBarrier((&____defaultProviders_2), value);
	}

	inline static int32_t get_offset_of__associationTable_3() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____associationTable_3)); }
	inline WeakHashtable_t3533205710 * get__associationTable_3() const { return ____associationTable_3; }
	inline WeakHashtable_t3533205710 ** get_address_of__associationTable_3() { return &____associationTable_3; }
	inline void set__associationTable_3(WeakHashtable_t3533205710 * value)
	{
		____associationTable_3 = value;
		Il2CppCodeGenWriteBarrier((&____associationTable_3), value);
	}

	inline static int32_t get_offset_of__metadataVersion_4() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____metadataVersion_4)); }
	inline int32_t get__metadataVersion_4() const { return ____metadataVersion_4; }
	inline int32_t* get_address_of__metadataVersion_4() { return &____metadataVersion_4; }
	inline void set__metadataVersion_4(int32_t value)
	{
		____metadataVersion_4 = value;
	}

	inline static int32_t get_offset_of__collisionIndex_5() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____collisionIndex_5)); }
	inline int32_t get__collisionIndex_5() const { return ____collisionIndex_5; }
	inline int32_t* get_address_of__collisionIndex_5() { return &____collisionIndex_5; }
	inline void set__collisionIndex_5(int32_t value)
	{
		____collisionIndex_5 = value;
	}

	inline static int32_t get_offset_of_TraceDescriptor_6() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___TraceDescriptor_6)); }
	inline BooleanSwitch_t440064918 * get_TraceDescriptor_6() const { return ___TraceDescriptor_6; }
	inline BooleanSwitch_t440064918 ** get_address_of_TraceDescriptor_6() { return &___TraceDescriptor_6; }
	inline void set_TraceDescriptor_6(BooleanSwitch_t440064918 * value)
	{
		___TraceDescriptor_6 = value;
		Il2CppCodeGenWriteBarrier((&___TraceDescriptor_6), value);
	}

	inline static int32_t get_offset_of__pipelineInitializeKeys_10() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____pipelineInitializeKeys_10)); }
	inline GuidU5BU5D_t545550574* get__pipelineInitializeKeys_10() const { return ____pipelineInitializeKeys_10; }
	inline GuidU5BU5D_t545550574** get_address_of__pipelineInitializeKeys_10() { return &____pipelineInitializeKeys_10; }
	inline void set__pipelineInitializeKeys_10(GuidU5BU5D_t545550574* value)
	{
		____pipelineInitializeKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&____pipelineInitializeKeys_10), value);
	}

	inline static int32_t get_offset_of__pipelineMergeKeys_11() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____pipelineMergeKeys_11)); }
	inline GuidU5BU5D_t545550574* get__pipelineMergeKeys_11() const { return ____pipelineMergeKeys_11; }
	inline GuidU5BU5D_t545550574** get_address_of__pipelineMergeKeys_11() { return &____pipelineMergeKeys_11; }
	inline void set__pipelineMergeKeys_11(GuidU5BU5D_t545550574* value)
	{
		____pipelineMergeKeys_11 = value;
		Il2CppCodeGenWriteBarrier((&____pipelineMergeKeys_11), value);
	}

	inline static int32_t get_offset_of__pipelineFilterKeys_12() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____pipelineFilterKeys_12)); }
	inline GuidU5BU5D_t545550574* get__pipelineFilterKeys_12() const { return ____pipelineFilterKeys_12; }
	inline GuidU5BU5D_t545550574** get_address_of__pipelineFilterKeys_12() { return &____pipelineFilterKeys_12; }
	inline void set__pipelineFilterKeys_12(GuidU5BU5D_t545550574* value)
	{
		____pipelineFilterKeys_12 = value;
		Il2CppCodeGenWriteBarrier((&____pipelineFilterKeys_12), value);
	}

	inline static int32_t get_offset_of__pipelineAttributeFilterKeys_13() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____pipelineAttributeFilterKeys_13)); }
	inline GuidU5BU5D_t545550574* get__pipelineAttributeFilterKeys_13() const { return ____pipelineAttributeFilterKeys_13; }
	inline GuidU5BU5D_t545550574** get_address_of__pipelineAttributeFilterKeys_13() { return &____pipelineAttributeFilterKeys_13; }
	inline void set__pipelineAttributeFilterKeys_13(GuidU5BU5D_t545550574* value)
	{
		____pipelineAttributeFilterKeys_13 = value;
		Il2CppCodeGenWriteBarrier((&____pipelineAttributeFilterKeys_13), value);
	}

	inline static int32_t get_offset_of__internalSyncObject_14() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____internalSyncObject_14)); }
	inline RuntimeObject * get__internalSyncObject_14() const { return ____internalSyncObject_14; }
	inline RuntimeObject ** get_address_of__internalSyncObject_14() { return &____internalSyncObject_14; }
	inline void set__internalSyncObject_14(RuntimeObject * value)
	{
		____internalSyncObject_14 = value;
		Il2CppCodeGenWriteBarrier((&____internalSyncObject_14), value);
	}

	inline static int32_t get_offset_of_Refreshed_15() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___Refreshed_15)); }
	inline RefreshEventHandler_t3637242902 * get_Refreshed_15() const { return ___Refreshed_15; }
	inline RefreshEventHandler_t3637242902 ** get_address_of_Refreshed_15() { return &___Refreshed_15; }
	inline void set_Refreshed_15(RefreshEventHandler_t3637242902 * value)
	{
		___Refreshed_15 = value;
		Il2CppCodeGenWriteBarrier((&___Refreshed_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTOR_T3066613587_H
#ifndef MEMBERDESCRIPTOR_T3815403747_H
#define MEMBERDESCRIPTOR_T3815403747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t3815403747  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.String System.ComponentModel.MemberDescriptor::displayName
	String_t* ___displayName_1;
	// System.Int32 System.ComponentModel.MemberDescriptor::nameHash
	int32_t ___nameHash_2;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attributeCollection
	AttributeCollection_t4221220734 * ___attributeCollection_3;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attributes
	AttributeU5BU5D_t1575011174* ___attributes_4;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::originalAttributes
	AttributeU5BU5D_t1575011174* ___originalAttributes_5;
	// System.Boolean System.ComponentModel.MemberDescriptor::attributesFiltered
	bool ___attributesFiltered_6;
	// System.Boolean System.ComponentModel.MemberDescriptor::attributesFilled
	bool ___attributesFilled_7;
	// System.Int32 System.ComponentModel.MemberDescriptor::metadataVersion
	int32_t ___metadataVersion_8;
	// System.String System.ComponentModel.MemberDescriptor::category
	String_t* ___category_9;
	// System.String System.ComponentModel.MemberDescriptor::description
	String_t* ___description_10;
	// System.Object System.ComponentModel.MemberDescriptor::lockCookie
	RuntimeObject * ___lockCookie_11;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_displayName_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___displayName_1)); }
	inline String_t* get_displayName_1() const { return ___displayName_1; }
	inline String_t** get_address_of_displayName_1() { return &___displayName_1; }
	inline void set_displayName_1(String_t* value)
	{
		___displayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___displayName_1), value);
	}

	inline static int32_t get_offset_of_nameHash_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___nameHash_2)); }
	inline int32_t get_nameHash_2() const { return ___nameHash_2; }
	inline int32_t* get_address_of_nameHash_2() { return &___nameHash_2; }
	inline void set_nameHash_2(int32_t value)
	{
		___nameHash_2 = value;
	}

	inline static int32_t get_offset_of_attributeCollection_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___attributeCollection_3)); }
	inline AttributeCollection_t4221220734 * get_attributeCollection_3() const { return ___attributeCollection_3; }
	inline AttributeCollection_t4221220734 ** get_address_of_attributeCollection_3() { return &___attributeCollection_3; }
	inline void set_attributeCollection_3(AttributeCollection_t4221220734 * value)
	{
		___attributeCollection_3 = value;
		Il2CppCodeGenWriteBarrier((&___attributeCollection_3), value);
	}

	inline static int32_t get_offset_of_attributes_4() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___attributes_4)); }
	inline AttributeU5BU5D_t1575011174* get_attributes_4() const { return ___attributes_4; }
	inline AttributeU5BU5D_t1575011174** get_address_of_attributes_4() { return &___attributes_4; }
	inline void set_attributes_4(AttributeU5BU5D_t1575011174* value)
	{
		___attributes_4 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_4), value);
	}

	inline static int32_t get_offset_of_originalAttributes_5() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___originalAttributes_5)); }
	inline AttributeU5BU5D_t1575011174* get_originalAttributes_5() const { return ___originalAttributes_5; }
	inline AttributeU5BU5D_t1575011174** get_address_of_originalAttributes_5() { return &___originalAttributes_5; }
	inline void set_originalAttributes_5(AttributeU5BU5D_t1575011174* value)
	{
		___originalAttributes_5 = value;
		Il2CppCodeGenWriteBarrier((&___originalAttributes_5), value);
	}

	inline static int32_t get_offset_of_attributesFiltered_6() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___attributesFiltered_6)); }
	inline bool get_attributesFiltered_6() const { return ___attributesFiltered_6; }
	inline bool* get_address_of_attributesFiltered_6() { return &___attributesFiltered_6; }
	inline void set_attributesFiltered_6(bool value)
	{
		___attributesFiltered_6 = value;
	}

	inline static int32_t get_offset_of_attributesFilled_7() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___attributesFilled_7)); }
	inline bool get_attributesFilled_7() const { return ___attributesFilled_7; }
	inline bool* get_address_of_attributesFilled_7() { return &___attributesFilled_7; }
	inline void set_attributesFilled_7(bool value)
	{
		___attributesFilled_7 = value;
	}

	inline static int32_t get_offset_of_metadataVersion_8() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___metadataVersion_8)); }
	inline int32_t get_metadataVersion_8() const { return ___metadataVersion_8; }
	inline int32_t* get_address_of_metadataVersion_8() { return &___metadataVersion_8; }
	inline void set_metadataVersion_8(int32_t value)
	{
		___metadataVersion_8 = value;
	}

	inline static int32_t get_offset_of_category_9() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___category_9)); }
	inline String_t* get_category_9() const { return ___category_9; }
	inline String_t** get_address_of_category_9() { return &___category_9; }
	inline void set_category_9(String_t* value)
	{
		___category_9 = value;
		Il2CppCodeGenWriteBarrier((&___category_9), value);
	}

	inline static int32_t get_offset_of_description_10() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___description_10)); }
	inline String_t* get_description_10() const { return ___description_10; }
	inline String_t** get_address_of_description_10() { return &___description_10; }
	inline void set_description_10(String_t* value)
	{
		___description_10 = value;
		Il2CppCodeGenWriteBarrier((&___description_10), value);
	}

	inline static int32_t get_offset_of_lockCookie_11() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___lockCookie_11)); }
	inline RuntimeObject * get_lockCookie_11() const { return ___lockCookie_11; }
	inline RuntimeObject ** get_address_of_lockCookie_11() { return &___lockCookie_11; }
	inline void set_lockCookie_11(RuntimeObject * value)
	{
		___lockCookie_11 = value;
		Il2CppCodeGenWriteBarrier((&___lockCookie_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTOR_T3815403747_H
#ifndef TYPEDESCRIPTIONPROVIDER_T3232077895_H
#define TYPEDESCRIPTIONPROVIDER_T3232077895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider
struct  TypeDescriptionProvider_t3232077895  : public RuntimeObject
{
public:
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptionProvider::_parent
	TypeDescriptionProvider_t3232077895 * ____parent_0;
	// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::_emptyDescriptor
	EmptyCustomTypeDescriptor_t4007109994 * ____emptyDescriptor_1;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t3232077895, ____parent_0)); }
	inline TypeDescriptionProvider_t3232077895 * get__parent_0() const { return ____parent_0; }
	inline TypeDescriptionProvider_t3232077895 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(TypeDescriptionProvider_t3232077895 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}

	inline static int32_t get_offset_of__emptyDescriptor_1() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t3232077895, ____emptyDescriptor_1)); }
	inline EmptyCustomTypeDescriptor_t4007109994 * get__emptyDescriptor_1() const { return ____emptyDescriptor_1; }
	inline EmptyCustomTypeDescriptor_t4007109994 ** get_address_of__emptyDescriptor_1() { return &____emptyDescriptor_1; }
	inline void set__emptyDescriptor_1(EmptyCustomTypeDescriptor_t4007109994 * value)
	{
		____emptyDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((&____emptyDescriptor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONPROVIDER_T3232077895_H
#ifndef SITE_T751657764_H
#define SITE_T751657764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NestedContainer/Site
struct  Site_t751657764  : public RuntimeObject
{
public:
	// System.ComponentModel.IComponent System.ComponentModel.NestedContainer/Site::component
	RuntimeObject* ___component_0;
	// System.ComponentModel.NestedContainer System.ComponentModel.NestedContainer/Site::container
	NestedContainer_t119127665 * ___container_1;
	// System.String System.ComponentModel.NestedContainer/Site::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_component_0() { return static_cast<int32_t>(offsetof(Site_t751657764, ___component_0)); }
	inline RuntimeObject* get_component_0() const { return ___component_0; }
	inline RuntimeObject** get_address_of_component_0() { return &___component_0; }
	inline void set_component_0(RuntimeObject* value)
	{
		___component_0 = value;
		Il2CppCodeGenWriteBarrier((&___component_0), value);
	}

	inline static int32_t get_offset_of_container_1() { return static_cast<int32_t>(offsetof(Site_t751657764, ___container_1)); }
	inline NestedContainer_t119127665 * get_container_1() const { return ___container_1; }
	inline NestedContainer_t119127665 ** get_address_of_container_1() { return &___container_1; }
	inline void set_container_1(NestedContainer_t119127665 * value)
	{
		___container_1 = value;
		Il2CppCodeGenWriteBarrier((&___container_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(Site_t751657764, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SITE_T751657764_H
#ifndef CONTAINER_T1808277744_H
#define CONTAINER_T1808277744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Container
struct  Container_t1808277744  : public RuntimeObject
{
public:
	// System.ComponentModel.ISite[] System.ComponentModel.Container::sites
	ISiteU5BU5D_t2726343049* ___sites_0;
	// System.Int32 System.ComponentModel.Container::siteCount
	int32_t ___siteCount_1;
	// System.ComponentModel.ComponentCollection System.ComponentModel.Container::components
	ComponentCollection_t1445440302 * ___components_2;
	// System.ComponentModel.ContainerFilterService System.ComponentModel.Container::filter
	ContainerFilterService_t3995528664 * ___filter_3;
	// System.Boolean System.ComponentModel.Container::checkedFilter
	bool ___checkedFilter_4;
	// System.Object System.ComponentModel.Container::syncObj
	RuntimeObject * ___syncObj_5;

public:
	inline static int32_t get_offset_of_sites_0() { return static_cast<int32_t>(offsetof(Container_t1808277744, ___sites_0)); }
	inline ISiteU5BU5D_t2726343049* get_sites_0() const { return ___sites_0; }
	inline ISiteU5BU5D_t2726343049** get_address_of_sites_0() { return &___sites_0; }
	inline void set_sites_0(ISiteU5BU5D_t2726343049* value)
	{
		___sites_0 = value;
		Il2CppCodeGenWriteBarrier((&___sites_0), value);
	}

	inline static int32_t get_offset_of_siteCount_1() { return static_cast<int32_t>(offsetof(Container_t1808277744, ___siteCount_1)); }
	inline int32_t get_siteCount_1() const { return ___siteCount_1; }
	inline int32_t* get_address_of_siteCount_1() { return &___siteCount_1; }
	inline void set_siteCount_1(int32_t value)
	{
		___siteCount_1 = value;
	}

	inline static int32_t get_offset_of_components_2() { return static_cast<int32_t>(offsetof(Container_t1808277744, ___components_2)); }
	inline ComponentCollection_t1445440302 * get_components_2() const { return ___components_2; }
	inline ComponentCollection_t1445440302 ** get_address_of_components_2() { return &___components_2; }
	inline void set_components_2(ComponentCollection_t1445440302 * value)
	{
		___components_2 = value;
		Il2CppCodeGenWriteBarrier((&___components_2), value);
	}

	inline static int32_t get_offset_of_filter_3() { return static_cast<int32_t>(offsetof(Container_t1808277744, ___filter_3)); }
	inline ContainerFilterService_t3995528664 * get_filter_3() const { return ___filter_3; }
	inline ContainerFilterService_t3995528664 ** get_address_of_filter_3() { return &___filter_3; }
	inline void set_filter_3(ContainerFilterService_t3995528664 * value)
	{
		___filter_3 = value;
		Il2CppCodeGenWriteBarrier((&___filter_3), value);
	}

	inline static int32_t get_offset_of_checkedFilter_4() { return static_cast<int32_t>(offsetof(Container_t1808277744, ___checkedFilter_4)); }
	inline bool get_checkedFilter_4() const { return ___checkedFilter_4; }
	inline bool* get_address_of_checkedFilter_4() { return &___checkedFilter_4; }
	inline void set_checkedFilter_4(bool value)
	{
		___checkedFilter_4 = value;
	}

	inline static int32_t get_offset_of_syncObj_5() { return static_cast<int32_t>(offsetof(Container_t1808277744, ___syncObj_5)); }
	inline RuntimeObject * get_syncObj_5() const { return ___syncObj_5; }
	inline RuntimeObject ** get_address_of_syncObj_5() { return &___syncObj_5; }
	inline void set_syncObj_5(RuntimeObject * value)
	{
		___syncObj_5 = value;
		Il2CppCodeGenWriteBarrier((&___syncObj_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTAINER_T1808277744_H
#ifndef LICENSE_T2258946041_H
#define LICENSE_T2258946041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.License
struct  License_t2258946041  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSE_T2258946041_H
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
#ifndef INSTANCECREATIONEDITOR_T238900532_H
#define INSTANCECREATIONEDITOR_T238900532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InstanceCreationEditor
struct  InstanceCreationEditor_t238900532  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCECREATIONEDITOR_T238900532_H
#ifndef INTSECURITY_T1973073266_H
#define INTSECURITY_T1973073266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.IntSecurity
struct  IntSecurity_t1973073266  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTSECURITY_T1973073266_H
#ifndef CUSTOMTYPEDESCRIPTOR_T3093649079_H
#define CUSTOMTYPEDESCRIPTOR_T3093649079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CustomTypeDescriptor
struct  CustomTypeDescriptor_t3093649079  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.CustomTypeDescriptor::_parent
	RuntimeObject* ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(CustomTypeDescriptor_t3093649079, ____parent_0)); }
	inline RuntimeObject* get__parent_0() const { return ____parent_0; }
	inline RuntimeObject** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RuntimeObject* value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMTYPEDESCRIPTOR_T3093649079_H
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
#ifndef LICENSEMANAGER_T19983147_H
#define LICENSEMANAGER_T19983147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseManager
struct  LicenseManager_t19983147  : public RuntimeObject
{
public:

public:
};

struct LicenseManager_t19983147_StaticFields
{
public:
	// System.Object System.ComponentModel.LicenseManager::selfLock
	RuntimeObject * ___selfLock_0;
	// System.ComponentModel.LicenseContext modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.LicenseManager::context
	LicenseContext_t2141136407 * ___context_1;
	// System.Object System.ComponentModel.LicenseManager::contextLockHolder
	RuntimeObject * ___contextLockHolder_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.LicenseManager::providers
	Hashtable_t1853889766 * ___providers_3;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.LicenseManager::providerInstances
	Hashtable_t1853889766 * ___providerInstances_4;
	// System.Object System.ComponentModel.LicenseManager::internalSyncObject
	RuntimeObject * ___internalSyncObject_5;

public:
	inline static int32_t get_offset_of_selfLock_0() { return static_cast<int32_t>(offsetof(LicenseManager_t19983147_StaticFields, ___selfLock_0)); }
	inline RuntimeObject * get_selfLock_0() const { return ___selfLock_0; }
	inline RuntimeObject ** get_address_of_selfLock_0() { return &___selfLock_0; }
	inline void set_selfLock_0(RuntimeObject * value)
	{
		___selfLock_0 = value;
		Il2CppCodeGenWriteBarrier((&___selfLock_0), value);
	}

	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(LicenseManager_t19983147_StaticFields, ___context_1)); }
	inline LicenseContext_t2141136407 * get_context_1() const { return ___context_1; }
	inline LicenseContext_t2141136407 ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(LicenseContext_t2141136407 * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((&___context_1), value);
	}

	inline static int32_t get_offset_of_contextLockHolder_2() { return static_cast<int32_t>(offsetof(LicenseManager_t19983147_StaticFields, ___contextLockHolder_2)); }
	inline RuntimeObject * get_contextLockHolder_2() const { return ___contextLockHolder_2; }
	inline RuntimeObject ** get_address_of_contextLockHolder_2() { return &___contextLockHolder_2; }
	inline void set_contextLockHolder_2(RuntimeObject * value)
	{
		___contextLockHolder_2 = value;
		Il2CppCodeGenWriteBarrier((&___contextLockHolder_2), value);
	}

	inline static int32_t get_offset_of_providers_3() { return static_cast<int32_t>(offsetof(LicenseManager_t19983147_StaticFields, ___providers_3)); }
	inline Hashtable_t1853889766 * get_providers_3() const { return ___providers_3; }
	inline Hashtable_t1853889766 ** get_address_of_providers_3() { return &___providers_3; }
	inline void set_providers_3(Hashtable_t1853889766 * value)
	{
		___providers_3 = value;
		Il2CppCodeGenWriteBarrier((&___providers_3), value);
	}

	inline static int32_t get_offset_of_providerInstances_4() { return static_cast<int32_t>(offsetof(LicenseManager_t19983147_StaticFields, ___providerInstances_4)); }
	inline Hashtable_t1853889766 * get_providerInstances_4() const { return ___providerInstances_4; }
	inline Hashtable_t1853889766 ** get_address_of_providerInstances_4() { return &___providerInstances_4; }
	inline void set_providerInstances_4(Hashtable_t1853889766 * value)
	{
		___providerInstances_4 = value;
		Il2CppCodeGenWriteBarrier((&___providerInstances_4), value);
	}

	inline static int32_t get_offset_of_internalSyncObject_5() { return static_cast<int32_t>(offsetof(LicenseManager_t19983147_StaticFields, ___internalSyncObject_5)); }
	inline RuntimeObject * get_internalSyncObject_5() const { return ___internalSyncObject_5; }
	inline RuntimeObject ** get_address_of_internalSyncObject_5() { return &___internalSyncObject_5; }
	inline void set_internalSyncObject_5(RuntimeObject * value)
	{
		___internalSyncObject_5 = value;
		Il2CppCodeGenWriteBarrier((&___internalSyncObject_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEMANAGER_T19983147_H
#ifndef LICENSEPROVIDER_T1830579869_H
#define LICENSEPROVIDER_T1830579869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseProvider
struct  LicenseProvider_t1830579869  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEPROVIDER_T1830579869_H
#ifndef LICENSEINTEROPHELPER_T4104616646_H
#define LICENSEINTEROPHELPER_T4104616646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseManager/LicenseInteropHelper
struct  LicenseInteropHelper_t4104616646  : public RuntimeObject
{
public:
	// System.ComponentModel.Design.DesigntimeLicenseContext System.ComponentModel.LicenseManager/LicenseInteropHelper::helperContext
	DesigntimeLicenseContext_t2427359527 * ___helperContext_4;
	// System.ComponentModel.LicenseContext System.ComponentModel.LicenseManager/LicenseInteropHelper::savedLicenseContext
	LicenseContext_t2141136407 * ___savedLicenseContext_5;
	// System.Type System.ComponentModel.LicenseManager/LicenseInteropHelper::savedType
	Type_t * ___savedType_6;

public:
	inline static int32_t get_offset_of_helperContext_4() { return static_cast<int32_t>(offsetof(LicenseInteropHelper_t4104616646, ___helperContext_4)); }
	inline DesigntimeLicenseContext_t2427359527 * get_helperContext_4() const { return ___helperContext_4; }
	inline DesigntimeLicenseContext_t2427359527 ** get_address_of_helperContext_4() { return &___helperContext_4; }
	inline void set_helperContext_4(DesigntimeLicenseContext_t2427359527 * value)
	{
		___helperContext_4 = value;
		Il2CppCodeGenWriteBarrier((&___helperContext_4), value);
	}

	inline static int32_t get_offset_of_savedLicenseContext_5() { return static_cast<int32_t>(offsetof(LicenseInteropHelper_t4104616646, ___savedLicenseContext_5)); }
	inline LicenseContext_t2141136407 * get_savedLicenseContext_5() const { return ___savedLicenseContext_5; }
	inline LicenseContext_t2141136407 ** get_address_of_savedLicenseContext_5() { return &___savedLicenseContext_5; }
	inline void set_savedLicenseContext_5(LicenseContext_t2141136407 * value)
	{
		___savedLicenseContext_5 = value;
		Il2CppCodeGenWriteBarrier((&___savedLicenseContext_5), value);
	}

	inline static int32_t get_offset_of_savedType_6() { return static_cast<int32_t>(offsetof(LicenseInteropHelper_t4104616646, ___savedType_6)); }
	inline Type_t * get_savedType_6() const { return ___savedType_6; }
	inline Type_t ** get_address_of_savedType_6() { return &___savedType_6; }
	inline void set_savedType_6(Type_t * value)
	{
		___savedType_6 = value;
		Il2CppCodeGenWriteBarrier((&___savedType_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEINTEROPHELPER_T4104616646_H
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
#ifndef REFERENCECOMPARER_T1826665674_H
#define REFERENCECOMPARER_T1826665674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter/ReferenceComparer
struct  ReferenceComparer_t1826665674  : public RuntimeObject
{
public:
	// System.ComponentModel.ReferenceConverter System.ComponentModel.ReferenceConverter/ReferenceComparer::converter
	ReferenceConverter_t1811933861 * ___converter_0;

public:
	inline static int32_t get_offset_of_converter_0() { return static_cast<int32_t>(offsetof(ReferenceComparer_t1826665674, ___converter_0)); }
	inline ReferenceConverter_t1811933861 * get_converter_0() const { return ___converter_0; }
	inline ReferenceConverter_t1811933861 ** get_address_of_converter_0() { return &___converter_0; }
	inline void set_converter_0(ReferenceConverter_t1811933861 * value)
	{
		___converter_0 = value;
		Il2CppCodeGenWriteBarrier((&___converter_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECOMPARER_T1826665674_H
#ifndef RECOMMENDEDASCONFIGURABLEATTRIBUTE_T279829077_H
#define RECOMMENDEDASCONFIGURABLEATTRIBUTE_T279829077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RecommendedAsConfigurableAttribute
struct  RecommendedAsConfigurableAttribute_t279829077  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.RecommendedAsConfigurableAttribute::recommendedAsConfigurable
	bool ___recommendedAsConfigurable_0;

public:
	inline static int32_t get_offset_of_recommendedAsConfigurable_0() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t279829077, ___recommendedAsConfigurable_0)); }
	inline bool get_recommendedAsConfigurable_0() const { return ___recommendedAsConfigurable_0; }
	inline bool* get_address_of_recommendedAsConfigurable_0() { return &___recommendedAsConfigurable_0; }
	inline void set_recommendedAsConfigurable_0(bool value)
	{
		___recommendedAsConfigurable_0 = value;
	}
};

struct RecommendedAsConfigurableAttribute_t279829077_StaticFields
{
public:
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::No
	RecommendedAsConfigurableAttribute_t279829077 * ___No_1;
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::Yes
	RecommendedAsConfigurableAttribute_t279829077 * ___Yes_2;
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::Default
	RecommendedAsConfigurableAttribute_t279829077 * ___Default_3;

public:
	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t279829077_StaticFields, ___No_1)); }
	inline RecommendedAsConfigurableAttribute_t279829077 * get_No_1() const { return ___No_1; }
	inline RecommendedAsConfigurableAttribute_t279829077 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(RecommendedAsConfigurableAttribute_t279829077 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t279829077_StaticFields, ___Yes_2)); }
	inline RecommendedAsConfigurableAttribute_t279829077 * get_Yes_2() const { return ___Yes_2; }
	inline RecommendedAsConfigurableAttribute_t279829077 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(RecommendedAsConfigurableAttribute_t279829077 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t279829077_StaticFields, ___Default_3)); }
	inline RecommendedAsConfigurableAttribute_t279829077 * get_Default_3() const { return ___Default_3; }
	inline RecommendedAsConfigurableAttribute_t279829077 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(RecommendedAsConfigurableAttribute_t279829077 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOMMENDEDASCONFIGURABLEATTRIBUTE_T279829077_H
#ifndef TYPECONVERTERATTRIBUTE_T3271584429_H
#define TYPECONVERTERATTRIBUTE_T3271584429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverterAttribute
struct  TypeConverterAttribute_t3271584429  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.TypeConverterAttribute::typeName
	String_t* ___typeName_0;

public:
	inline static int32_t get_offset_of_typeName_0() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t3271584429, ___typeName_0)); }
	inline String_t* get_typeName_0() const { return ___typeName_0; }
	inline String_t** get_address_of_typeName_0() { return &___typeName_0; }
	inline void set_typeName_0(String_t* value)
	{
		___typeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___typeName_0), value);
	}
};

struct TypeConverterAttribute_t3271584429_StaticFields
{
public:
	// System.ComponentModel.TypeConverterAttribute System.ComponentModel.TypeConverterAttribute::Default
	TypeConverterAttribute_t3271584429 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t3271584429_StaticFields, ___Default_1)); }
	inline TypeConverterAttribute_t3271584429 * get_Default_1() const { return ___Default_1; }
	inline TypeConverterAttribute_t3271584429 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(TypeConverterAttribute_t3271584429 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTERATTRIBUTE_T3271584429_H
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
#ifndef EMPTYCUSTOMTYPEDESCRIPTOR_T4007109994_H
#define EMPTYCUSTOMTYPEDESCRIPTOR_T4007109994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor
struct  EmptyCustomTypeDescriptor_t4007109994  : public CustomTypeDescriptor_t3093649079
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYCUSTOMTYPEDESCRIPTOR_T4007109994_H
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
#ifndef RUNINSTALLERATTRIBUTE_T4293401849_H
#define RUNINSTALLERATTRIBUTE_T4293401849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RunInstallerAttribute
struct  RunInstallerAttribute_t4293401849  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.RunInstallerAttribute::runInstaller
	bool ___runInstaller_0;

public:
	inline static int32_t get_offset_of_runInstaller_0() { return static_cast<int32_t>(offsetof(RunInstallerAttribute_t4293401849, ___runInstaller_0)); }
	inline bool get_runInstaller_0() const { return ___runInstaller_0; }
	inline bool* get_address_of_runInstaller_0() { return &___runInstaller_0; }
	inline void set_runInstaller_0(bool value)
	{
		___runInstaller_0 = value;
	}
};

struct RunInstallerAttribute_t4293401849_StaticFields
{
public:
	// System.ComponentModel.RunInstallerAttribute System.ComponentModel.RunInstallerAttribute::Yes
	RunInstallerAttribute_t4293401849 * ___Yes_1;
	// System.ComponentModel.RunInstallerAttribute System.ComponentModel.RunInstallerAttribute::No
	RunInstallerAttribute_t4293401849 * ___No_2;
	// System.ComponentModel.RunInstallerAttribute System.ComponentModel.RunInstallerAttribute::Default
	RunInstallerAttribute_t4293401849 * ___Default_3;

public:
	inline static int32_t get_offset_of_Yes_1() { return static_cast<int32_t>(offsetof(RunInstallerAttribute_t4293401849_StaticFields, ___Yes_1)); }
	inline RunInstallerAttribute_t4293401849 * get_Yes_1() const { return ___Yes_1; }
	inline RunInstallerAttribute_t4293401849 ** get_address_of_Yes_1() { return &___Yes_1; }
	inline void set_Yes_1(RunInstallerAttribute_t4293401849 * value)
	{
		___Yes_1 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(RunInstallerAttribute_t4293401849_StaticFields, ___No_2)); }
	inline RunInstallerAttribute_t4293401849 * get_No_2() const { return ___No_2; }
	inline RunInstallerAttribute_t4293401849 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(RunInstallerAttribute_t4293401849 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(RunInstallerAttribute_t4293401849_StaticFields, ___Default_3)); }
	inline RunInstallerAttribute_t4293401849 * get_Default_3() const { return ___Default_3; }
	inline RunInstallerAttribute_t4293401849 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(RunInstallerAttribute_t4293401849 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNINSTALLERATTRIBUTE_T4293401849_H
#ifndef SETTINGSBINDABLEATTRIBUTE_T3884869596_H
#define SETTINGSBINDABLEATTRIBUTE_T3884869596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SettingsBindableAttribute
struct  SettingsBindableAttribute_t3884869596  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.SettingsBindableAttribute::_bindable
	bool ____bindable_2;

public:
	inline static int32_t get_offset_of__bindable_2() { return static_cast<int32_t>(offsetof(SettingsBindableAttribute_t3884869596, ____bindable_2)); }
	inline bool get__bindable_2() const { return ____bindable_2; }
	inline bool* get_address_of__bindable_2() { return &____bindable_2; }
	inline void set__bindable_2(bool value)
	{
		____bindable_2 = value;
	}
};

struct SettingsBindableAttribute_t3884869596_StaticFields
{
public:
	// System.ComponentModel.SettingsBindableAttribute System.ComponentModel.SettingsBindableAttribute::Yes
	SettingsBindableAttribute_t3884869596 * ___Yes_0;
	// System.ComponentModel.SettingsBindableAttribute System.ComponentModel.SettingsBindableAttribute::No
	SettingsBindableAttribute_t3884869596 * ___No_1;

public:
	inline static int32_t get_offset_of_Yes_0() { return static_cast<int32_t>(offsetof(SettingsBindableAttribute_t3884869596_StaticFields, ___Yes_0)); }
	inline SettingsBindableAttribute_t3884869596 * get_Yes_0() const { return ___Yes_0; }
	inline SettingsBindableAttribute_t3884869596 ** get_address_of_Yes_0() { return &___Yes_0; }
	inline void set_Yes_0(SettingsBindableAttribute_t3884869596 * value)
	{
		___Yes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(SettingsBindableAttribute_t3884869596_StaticFields, ___No_1)); }
	inline SettingsBindableAttribute_t3884869596 * get_No_1() const { return ___No_1; }
	inline SettingsBindableAttribute_t3884869596 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(SettingsBindableAttribute_t3884869596 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGSBINDABLEATTRIBUTE_T3884869596_H
#ifndef IMMUTABLEOBJECTATTRIBUTE_T2959712128_H
#define IMMUTABLEOBJECTATTRIBUTE_T2959712128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ImmutableObjectAttribute
struct  ImmutableObjectAttribute_t2959712128  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.ImmutableObjectAttribute::immutable
	bool ___immutable_3;

public:
	inline static int32_t get_offset_of_immutable_3() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t2959712128, ___immutable_3)); }
	inline bool get_immutable_3() const { return ___immutable_3; }
	inline bool* get_address_of_immutable_3() { return &___immutable_3; }
	inline void set_immutable_3(bool value)
	{
		___immutable_3 = value;
	}
};

struct ImmutableObjectAttribute_t2959712128_StaticFields
{
public:
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::Yes
	ImmutableObjectAttribute_t2959712128 * ___Yes_0;
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::No
	ImmutableObjectAttribute_t2959712128 * ___No_1;
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::Default
	ImmutableObjectAttribute_t2959712128 * ___Default_2;

public:
	inline static int32_t get_offset_of_Yes_0() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t2959712128_StaticFields, ___Yes_0)); }
	inline ImmutableObjectAttribute_t2959712128 * get_Yes_0() const { return ___Yes_0; }
	inline ImmutableObjectAttribute_t2959712128 ** get_address_of_Yes_0() { return &___Yes_0; }
	inline void set_Yes_0(ImmutableObjectAttribute_t2959712128 * value)
	{
		___Yes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t2959712128_StaticFields, ___No_1)); }
	inline ImmutableObjectAttribute_t2959712128 * get_No_1() const { return ___No_1; }
	inline ImmutableObjectAttribute_t2959712128 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ImmutableObjectAttribute_t2959712128 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t2959712128_StaticFields, ___Default_2)); }
	inline ImmutableObjectAttribute_t2959712128 * get_Default_2() const { return ___Default_2; }
	inline ImmutableObjectAttribute_t2959712128 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(ImmutableObjectAttribute_t2959712128 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMMUTABLEOBJECTATTRIBUTE_T2959712128_H
#ifndef REFRESHEVENTARGS_T9288056_H
#define REFRESHEVENTARGS_T9288056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshEventArgs
struct  RefreshEventArgs_t9288056  : public EventArgs_t3591816995
{
public:
	// System.Object System.ComponentModel.RefreshEventArgs::componentChanged
	RuntimeObject * ___componentChanged_1;
	// System.Type System.ComponentModel.RefreshEventArgs::typeChanged
	Type_t * ___typeChanged_2;

public:
	inline static int32_t get_offset_of_componentChanged_1() { return static_cast<int32_t>(offsetof(RefreshEventArgs_t9288056, ___componentChanged_1)); }
	inline RuntimeObject * get_componentChanged_1() const { return ___componentChanged_1; }
	inline RuntimeObject ** get_address_of_componentChanged_1() { return &___componentChanged_1; }
	inline void set_componentChanged_1(RuntimeObject * value)
	{
		___componentChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___componentChanged_1), value);
	}

	inline static int32_t get_offset_of_typeChanged_2() { return static_cast<int32_t>(offsetof(RefreshEventArgs_t9288056, ___typeChanged_2)); }
	inline Type_t * get_typeChanged_2() const { return ___typeChanged_2; }
	inline Type_t ** get_address_of_typeChanged_2() { return &___typeChanged_2; }
	inline void set_typeChanged_2(Type_t * value)
	{
		___typeChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___typeChanged_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHEVENTARGS_T9288056_H
#ifndef DEFAULTEXTENDEDTYPEDESCRIPTOR_T1757997412_H
#define DEFAULTEXTENDEDTYPEDESCRIPTOR_T1757997412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor
struct  DefaultExtendedTypeDescriptor_t1757997412 
{
public:
	// System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::_node
	TypeDescriptionNode_t3022060204 * ____node_0;
	// System.Object System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::_instance
	RuntimeObject * ____instance_1;

public:
	inline static int32_t get_offset_of__node_0() { return static_cast<int32_t>(offsetof(DefaultExtendedTypeDescriptor_t1757997412, ____node_0)); }
	inline TypeDescriptionNode_t3022060204 * get__node_0() const { return ____node_0; }
	inline TypeDescriptionNode_t3022060204 ** get_address_of__node_0() { return &____node_0; }
	inline void set__node_0(TypeDescriptionNode_t3022060204 * value)
	{
		____node_0 = value;
		Il2CppCodeGenWriteBarrier((&____node_0), value);
	}

	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(DefaultExtendedTypeDescriptor_t1757997412, ____instance_1)); }
	inline RuntimeObject * get__instance_1() const { return ____instance_1; }
	inline RuntimeObject ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(RuntimeObject * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((&____instance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor
struct DefaultExtendedTypeDescriptor_t1757997412_marshaled_pinvoke
{
	TypeDescriptionNode_t3022060204 * ____node_0;
	Il2CppIUnknown* ____instance_1;
};
// Native definition for COM marshalling of System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor
struct DefaultExtendedTypeDescriptor_t1757997412_marshaled_com
{
	TypeDescriptionNode_t3022060204 * ____node_0;
	Il2CppIUnknown* ____instance_1;
};
#endif // DEFAULTEXTENDEDTYPEDESCRIPTOR_T1757997412_H
#ifndef TYPEDESCRIPTIONNODE_T3022060204_H
#define TYPEDESCRIPTIONNODE_T3022060204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/TypeDescriptionNode
struct  TypeDescriptionNode_t3022060204  : public TypeDescriptionProvider_t3232077895
{
public:
	// System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor/TypeDescriptionNode::Next
	TypeDescriptionNode_t3022060204 * ___Next_2;
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor/TypeDescriptionNode::Provider
	TypeDescriptionProvider_t3232077895 * ___Provider_3;

public:
	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(TypeDescriptionNode_t3022060204, ___Next_2)); }
	inline TypeDescriptionNode_t3022060204 * get_Next_2() const { return ___Next_2; }
	inline TypeDescriptionNode_t3022060204 ** get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(TypeDescriptionNode_t3022060204 * value)
	{
		___Next_2 = value;
		Il2CppCodeGenWriteBarrier((&___Next_2), value);
	}

	inline static int32_t get_offset_of_Provider_3() { return static_cast<int32_t>(offsetof(TypeDescriptionNode_t3022060204, ___Provider_3)); }
	inline TypeDescriptionProvider_t3232077895 * get_Provider_3() const { return ___Provider_3; }
	inline TypeDescriptionProvider_t3232077895 ** get_address_of_Provider_3() { return &___Provider_3; }
	inline void set_Provider_3(TypeDescriptionProvider_t3232077895 * value)
	{
		___Provider_3 = value;
		Il2CppCodeGenWriteBarrier((&___Provider_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONNODE_T3022060204_H
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
#ifndef DEFAULTTYPEDESCRIPTOR_T4148937846_H
#define DEFAULTTYPEDESCRIPTOR_T4148937846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
struct  DefaultTypeDescriptor_t4148937846 
{
public:
	// System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::_node
	TypeDescriptionNode_t3022060204 * ____node_0;
	// System.Type System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::_objectType
	Type_t * ____objectType_1;
	// System.Object System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::_instance
	RuntimeObject * ____instance_2;

public:
	inline static int32_t get_offset_of__node_0() { return static_cast<int32_t>(offsetof(DefaultTypeDescriptor_t4148937846, ____node_0)); }
	inline TypeDescriptionNode_t3022060204 * get__node_0() const { return ____node_0; }
	inline TypeDescriptionNode_t3022060204 ** get_address_of__node_0() { return &____node_0; }
	inline void set__node_0(TypeDescriptionNode_t3022060204 * value)
	{
		____node_0 = value;
		Il2CppCodeGenWriteBarrier((&____node_0), value);
	}

	inline static int32_t get_offset_of__objectType_1() { return static_cast<int32_t>(offsetof(DefaultTypeDescriptor_t4148937846, ____objectType_1)); }
	inline Type_t * get__objectType_1() const { return ____objectType_1; }
	inline Type_t ** get_address_of__objectType_1() { return &____objectType_1; }
	inline void set__objectType_1(Type_t * value)
	{
		____objectType_1 = value;
		Il2CppCodeGenWriteBarrier((&____objectType_1), value);
	}

	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(DefaultTypeDescriptor_t4148937846, ____instance_2)); }
	inline RuntimeObject * get__instance_2() const { return ____instance_2; }
	inline RuntimeObject ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(RuntimeObject * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier((&____instance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
struct DefaultTypeDescriptor_t4148937846_marshaled_pinvoke
{
	TypeDescriptionNode_t3022060204 * ____node_0;
	Type_t * ____objectType_1;
	Il2CppIUnknown* ____instance_2;
};
// Native definition for COM marshalling of System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
struct DefaultTypeDescriptor_t4148937846_marshaled_com
{
	TypeDescriptionNode_t3022060204 * ____node_0;
	Type_t * ____objectType_1;
	Il2CppIUnknown* ____instance_2;
};
#endif // DEFAULTTYPEDESCRIPTOR_T4148937846_H
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
#ifndef ASYNCCOMPLETEDEVENTARGS_T1863481821_H
#define ASYNCCOMPLETEDEVENTARGS_T1863481821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncCompletedEventArgs
struct  AsyncCompletedEventArgs_t1863481821  : public EventArgs_t3591816995
{
public:
	// System.Exception System.ComponentModel.AsyncCompletedEventArgs::error
	Exception_t1436737249 * ___error_1;
	// System.Boolean System.ComponentModel.AsyncCompletedEventArgs::cancelled
	bool ___cancelled_2;
	// System.Object System.ComponentModel.AsyncCompletedEventArgs::userState
	RuntimeObject * ___userState_3;

public:
	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t1863481821, ___error_1)); }
	inline Exception_t1436737249 * get_error_1() const { return ___error_1; }
	inline Exception_t1436737249 ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(Exception_t1436737249 * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((&___error_1), value);
	}

	inline static int32_t get_offset_of_cancelled_2() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t1863481821, ___cancelled_2)); }
	inline bool get_cancelled_2() const { return ___cancelled_2; }
	inline bool* get_address_of_cancelled_2() { return &___cancelled_2; }
	inline void set_cancelled_2(bool value)
	{
		___cancelled_2 = value;
	}

	inline static int32_t get_offset_of_userState_3() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t1863481821, ___userState_3)); }
	inline RuntimeObject * get_userState_3() const { return ___userState_3; }
	inline RuntimeObject ** get_address_of_userState_3() { return &___userState_3; }
	inline void set_userState_3(RuntimeObject * value)
	{
		___userState_3 = value;
		Il2CppCodeGenWriteBarrier((&___userState_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCOMPLETEDEVENTARGS_T1863481821_H
#ifndef ATTRIBUTEPROVIDER_T1593068408_H
#define ATTRIBUTEPROVIDER_T1593068408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/AttributeProvider
struct  AttributeProvider_t1593068408  : public TypeDescriptionProvider_t3232077895
{
public:
	// System.Attribute[] System.ComponentModel.TypeDescriptor/AttributeProvider::_attrs
	AttributeU5BU5D_t1575011174* ____attrs_2;

public:
	inline static int32_t get_offset_of__attrs_2() { return static_cast<int32_t>(offsetof(AttributeProvider_t1593068408, ____attrs_2)); }
	inline AttributeU5BU5D_t1575011174* get__attrs_2() const { return ____attrs_2; }
	inline AttributeU5BU5D_t1575011174** get_address_of__attrs_2() { return &____attrs_2; }
	inline void set__attrs_2(AttributeU5BU5D_t1575011174* value)
	{
		____attrs_2 = value;
		Il2CppCodeGenWriteBarrier((&____attrs_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEPROVIDER_T1593068408_H
#ifndef TYPEDESCRIPTIONPROVIDERATTRIBUTE_T2619663527_H
#define TYPEDESCRIPTIONPROVIDERATTRIBUTE_T2619663527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProviderAttribute
struct  TypeDescriptionProviderAttribute_t2619663527  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.TypeDescriptionProviderAttribute::_typeName
	String_t* ____typeName_0;

public:
	inline static int32_t get_offset_of__typeName_0() { return static_cast<int32_t>(offsetof(TypeDescriptionProviderAttribute_t2619663527, ____typeName_0)); }
	inline String_t* get__typeName_0() const { return ____typeName_0; }
	inline String_t** get_address_of__typeName_0() { return &____typeName_0; }
	inline void set__typeName_0(String_t* value)
	{
		____typeName_0 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONPROVIDERATTRIBUTE_T2619663527_H
#ifndef ATTRIBUTETYPEDESCRIPTOR_T708701339_H
#define ATTRIBUTETYPEDESCRIPTOR_T708701339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/AttributeProvider/AttributeTypeDescriptor
struct  AttributeTypeDescriptor_t708701339  : public CustomTypeDescriptor_t3093649079
{
public:
	// System.Attribute[] System.ComponentModel.TypeDescriptor/AttributeProvider/AttributeTypeDescriptor::_attributeArray
	AttributeU5BU5D_t1575011174* ____attributeArray_1;

public:
	inline static int32_t get_offset_of__attributeArray_1() { return static_cast<int32_t>(offsetof(AttributeTypeDescriptor_t708701339, ____attributeArray_1)); }
	inline AttributeU5BU5D_t1575011174* get__attributeArray_1() const { return ____attributeArray_1; }
	inline AttributeU5BU5D_t1575011174** get_address_of__attributeArray_1() { return &____attributeArray_1; }
	inline void set__attributeArray_1(AttributeU5BU5D_t1575011174* value)
	{
		____attributeArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____attributeArray_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETYPEDESCRIPTOR_T708701339_H
#ifndef EVENTDESCRIPTOR_T88602298_H
#define EVENTDESCRIPTOR_T88602298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptor
struct  EventDescriptor_t88602298  : public MemberDescriptor_t3815403747
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTOR_T88602298_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_4;
	// System.Int16 System.Guid::_b
	int16_t ____b_5;
	// System.Int16 System.Guid::_c
	int16_t ____c_6;
	// System.Byte System.Guid::_d
	uint8_t ____d_7;
	// System.Byte System.Guid::_e
	uint8_t ____e_8;
	// System.Byte System.Guid::_f
	uint8_t ____f_9;
	// System.Byte System.Guid::_g
	uint8_t ____g_10;
	// System.Byte System.Guid::_h
	uint8_t ____h_11;
	// System.Byte System.Guid::_i
	uint8_t ____i_12;
	// System.Byte System.Guid::_j
	uint8_t ____j_13;
	// System.Byte System.Guid::_k
	uint8_t ____k_14;

public:
	inline static int32_t get_offset_of__a_4() { return static_cast<int32_t>(offsetof(Guid_t, ____a_4)); }
	inline int32_t get__a_4() const { return ____a_4; }
	inline int32_t* get_address_of__a_4() { return &____a_4; }
	inline void set__a_4(int32_t value)
	{
		____a_4 = value;
	}

	inline static int32_t get_offset_of__b_5() { return static_cast<int32_t>(offsetof(Guid_t, ____b_5)); }
	inline int16_t get__b_5() const { return ____b_5; }
	inline int16_t* get_address_of__b_5() { return &____b_5; }
	inline void set__b_5(int16_t value)
	{
		____b_5 = value;
	}

	inline static int32_t get_offset_of__c_6() { return static_cast<int32_t>(offsetof(Guid_t, ____c_6)); }
	inline int16_t get__c_6() const { return ____c_6; }
	inline int16_t* get_address_of__c_6() { return &____c_6; }
	inline void set__c_6(int16_t value)
	{
		____c_6 = value;
	}

	inline static int32_t get_offset_of__d_7() { return static_cast<int32_t>(offsetof(Guid_t, ____d_7)); }
	inline uint8_t get__d_7() const { return ____d_7; }
	inline uint8_t* get_address_of__d_7() { return &____d_7; }
	inline void set__d_7(uint8_t value)
	{
		____d_7 = value;
	}

	inline static int32_t get_offset_of__e_8() { return static_cast<int32_t>(offsetof(Guid_t, ____e_8)); }
	inline uint8_t get__e_8() const { return ____e_8; }
	inline uint8_t* get_address_of__e_8() { return &____e_8; }
	inline void set__e_8(uint8_t value)
	{
		____e_8 = value;
	}

	inline static int32_t get_offset_of__f_9() { return static_cast<int32_t>(offsetof(Guid_t, ____f_9)); }
	inline uint8_t get__f_9() const { return ____f_9; }
	inline uint8_t* get_address_of__f_9() { return &____f_9; }
	inline void set__f_9(uint8_t value)
	{
		____f_9 = value;
	}

	inline static int32_t get_offset_of__g_10() { return static_cast<int32_t>(offsetof(Guid_t, ____g_10)); }
	inline uint8_t get__g_10() const { return ____g_10; }
	inline uint8_t* get_address_of__g_10() { return &____g_10; }
	inline void set__g_10(uint8_t value)
	{
		____g_10 = value;
	}

	inline static int32_t get_offset_of__h_11() { return static_cast<int32_t>(offsetof(Guid_t, ____h_11)); }
	inline uint8_t get__h_11() const { return ____h_11; }
	inline uint8_t* get_address_of__h_11() { return &____h_11; }
	inline void set__h_11(uint8_t value)
	{
		____h_11 = value;
	}

	inline static int32_t get_offset_of__i_12() { return static_cast<int32_t>(offsetof(Guid_t, ____i_12)); }
	inline uint8_t get__i_12() const { return ____i_12; }
	inline uint8_t* get_address_of__i_12() { return &____i_12; }
	inline void set__i_12(uint8_t value)
	{
		____i_12 = value;
	}

	inline static int32_t get_offset_of__j_13() { return static_cast<int32_t>(offsetof(Guid_t, ____j_13)); }
	inline uint8_t get__j_13() const { return ____j_13; }
	inline uint8_t* get_address_of__j_13() { return &____j_13; }
	inline void set__j_13(uint8_t value)
	{
		____j_13 = value;
	}

	inline static int32_t get_offset_of__k_14() { return static_cast<int32_t>(offsetof(Guid_t, ____k_14)); }
	inline uint8_t get__k_14() const { return ____k_14; }
	inline uint8_t* get_address_of__k_14() { return &____k_14; }
	inline void set__k_14(uint8_t value)
	{
		____k_14 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_1;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_2;
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_3;

public:
	inline static int32_t get_offset_of__rngAccess_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_0)); }
	inline RuntimeObject * get__rngAccess_0() const { return ____rngAccess_0; }
	inline RuntimeObject ** get_address_of__rngAccess_0() { return &____rngAccess_0; }
	inline void set__rngAccess_0(RuntimeObject * value)
	{
		____rngAccess_0 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_0), value);
	}

	inline static int32_t get_offset_of__rng_1() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_1)); }
	inline RandomNumberGenerator_t386037858 * get__rng_1() const { return ____rng_1; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_1() { return &____rng_1; }
	inline void set__rng_1(RandomNumberGenerator_t386037858 * value)
	{
		____rng_1 = value;
		Il2CppCodeGenWriteBarrier((&____rng_1), value);
	}

	inline static int32_t get_offset_of__fastRng_2() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_2)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_2() const { return ____fastRng_2; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_2() { return &____fastRng_2; }
	inline void set__fastRng_2(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_2 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_2), value);
	}

	inline static int32_t get_offset_of_Empty_3() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_3)); }
	inline Guid_t  get_Empty_3() const { return ___Empty_3; }
	inline Guid_t * get_address_of_Empty_3() { return &___Empty_3; }
	inline void set_Empty_3(Guid_t  value)
	{
		___Empty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef COMNATIVEDESCRIPTIONPROVIDER_T1510127230_H
#define COMNATIVEDESCRIPTIONPROVIDER_T1510127230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/ComNativeDescriptionProvider
struct  ComNativeDescriptionProvider_t1510127230  : public TypeDescriptionProvider_t3232077895
{
public:
	// System.ComponentModel.IComNativeDescriptorHandler System.ComponentModel.TypeDescriptor/ComNativeDescriptionProvider::_handler
	RuntimeObject* ____handler_2;

public:
	inline static int32_t get_offset_of__handler_2() { return static_cast<int32_t>(offsetof(ComNativeDescriptionProvider_t1510127230, ____handler_2)); }
	inline RuntimeObject* get__handler_2() const { return ____handler_2; }
	inline RuntimeObject** get_address_of__handler_2() { return &____handler_2; }
	inline void set__handler_2(RuntimeObject* value)
	{
		____handler_2 = value;
		Il2CppCodeGenWriteBarrier((&____handler_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMNATIVEDESCRIPTIONPROVIDER_T1510127230_H
#ifndef NESTEDCONTAINER_T119127665_H
#define NESTEDCONTAINER_T119127665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NestedContainer
struct  NestedContainer_t119127665  : public Container_t1808277744
{
public:
	// System.ComponentModel.IComponent System.ComponentModel.NestedContainer::_owner
	RuntimeObject* ____owner_6;

public:
	inline static int32_t get_offset_of__owner_6() { return static_cast<int32_t>(offsetof(NestedContainer_t119127665, ____owner_6)); }
	inline RuntimeObject* get__owner_6() const { return ____owner_6; }
	inline RuntimeObject** get_address_of__owner_6() { return &____owner_6; }
	inline void set__owner_6(RuntimeObject* value)
	{
		____owner_6 = value;
		Il2CppCodeGenWriteBarrier((&____owner_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NESTEDCONTAINER_T119127665_H
#ifndef MERGABLEPROPERTYATTRIBUTE_T476798118_H
#define MERGABLEPROPERTYATTRIBUTE_T476798118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MergablePropertyAttribute
struct  MergablePropertyAttribute_t476798118  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.MergablePropertyAttribute::allowMerge
	bool ___allowMerge_3;

public:
	inline static int32_t get_offset_of_allowMerge_3() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t476798118, ___allowMerge_3)); }
	inline bool get_allowMerge_3() const { return ___allowMerge_3; }
	inline bool* get_address_of_allowMerge_3() { return &___allowMerge_3; }
	inline void set_allowMerge_3(bool value)
	{
		___allowMerge_3 = value;
	}
};

struct MergablePropertyAttribute_t476798118_StaticFields
{
public:
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Yes
	MergablePropertyAttribute_t476798118 * ___Yes_0;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::No
	MergablePropertyAttribute_t476798118 * ___No_1;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Default
	MergablePropertyAttribute_t476798118 * ___Default_2;

public:
	inline static int32_t get_offset_of_Yes_0() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t476798118_StaticFields, ___Yes_0)); }
	inline MergablePropertyAttribute_t476798118 * get_Yes_0() const { return ___Yes_0; }
	inline MergablePropertyAttribute_t476798118 ** get_address_of_Yes_0() { return &___Yes_0; }
	inline void set_Yes_0(MergablePropertyAttribute_t476798118 * value)
	{
		___Yes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t476798118_StaticFields, ___No_1)); }
	inline MergablePropertyAttribute_t476798118 * get_No_1() const { return ___No_1; }
	inline MergablePropertyAttribute_t476798118 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(MergablePropertyAttribute_t476798118 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t476798118_StaticFields, ___Default_2)); }
	inline MergablePropertyAttribute_t476798118 * get_Default_2() const { return ___Default_2; }
	inline MergablePropertyAttribute_t476798118 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(MergablePropertyAttribute_t476798118 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGABLEPROPERTYATTRIBUTE_T476798118_H
#ifndef INITIALIZATIONEVENTATTRIBUTE_T1076550734_H
#define INITIALIZATIONEVENTATTRIBUTE_T1076550734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InitializationEventAttribute
struct  InitializationEventAttribute_t1076550734  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.InitializationEventAttribute::eventName
	String_t* ___eventName_0;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(InitializationEventAttribute_t1076550734, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITIALIZATIONEVENTATTRIBUTE_T1076550734_H
#ifndef PROPERTYCHANGEDEVENTARGS_T3313059048_H
#define PROPERTYCHANGEDEVENTARGS_T3313059048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangedEventArgs
struct  PropertyChangedEventArgs_t3313059048  : public EventArgs_t3591816995
{
public:
	// System.String System.ComponentModel.PropertyChangedEventArgs::propertyName
	String_t* ___propertyName_1;

public:
	inline static int32_t get_offset_of_propertyName_1() { return static_cast<int32_t>(offsetof(PropertyChangedEventArgs_t3313059048, ___propertyName_1)); }
	inline String_t* get_propertyName_1() const { return ___propertyName_1; }
	inline String_t** get_address_of_propertyName_1() { return &___propertyName_1; }
	inline void set_propertyName_1(String_t* value)
	{
		___propertyName_1 = value;
		Il2CppCodeGenWriteBarrier((&___propertyName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGEDEVENTARGS_T3313059048_H
#ifndef PROGRESSCHANGEDEVENTARGS_T3227452477_H
#define PROGRESSCHANGEDEVENTARGS_T3227452477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ProgressChangedEventArgs
struct  ProgressChangedEventArgs_t3227452477  : public EventArgs_t3591816995
{
public:
	// System.Int32 System.ComponentModel.ProgressChangedEventArgs::progressPercentage
	int32_t ___progressPercentage_1;
	// System.Object System.ComponentModel.ProgressChangedEventArgs::userState
	RuntimeObject * ___userState_2;

public:
	inline static int32_t get_offset_of_progressPercentage_1() { return static_cast<int32_t>(offsetof(ProgressChangedEventArgs_t3227452477, ___progressPercentage_1)); }
	inline int32_t get_progressPercentage_1() const { return ___progressPercentage_1; }
	inline int32_t* get_address_of_progressPercentage_1() { return &___progressPercentage_1; }
	inline void set_progressPercentage_1(int32_t value)
	{
		___progressPercentage_1 = value;
	}

	inline static int32_t get_offset_of_userState_2() { return static_cast<int32_t>(offsetof(ProgressChangedEventArgs_t3227452477, ___userState_2)); }
	inline RuntimeObject * get_userState_2() const { return ___userState_2; }
	inline RuntimeObject ** get_address_of_userState_2() { return &___userState_2; }
	inline void set_userState_2(RuntimeObject * value)
	{
		___userState_2 = value;
		Il2CppCodeGenWriteBarrier((&___userState_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROGRESSCHANGEDEVENTARGS_T3227452477_H
#ifndef PASSWORDPROPERTYTEXTATTRIBUTE_T4966400_H
#define PASSWORDPROPERTYTEXTATTRIBUTE_T4966400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PasswordPropertyTextAttribute
struct  PasswordPropertyTextAttribute_t4966400  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.PasswordPropertyTextAttribute::_password
	bool ____password_3;

public:
	inline static int32_t get_offset_of__password_3() { return static_cast<int32_t>(offsetof(PasswordPropertyTextAttribute_t4966400, ____password_3)); }
	inline bool get__password_3() const { return ____password_3; }
	inline bool* get_address_of__password_3() { return &____password_3; }
	inline void set__password_3(bool value)
	{
		____password_3 = value;
	}
};

struct PasswordPropertyTextAttribute_t4966400_StaticFields
{
public:
	// System.ComponentModel.PasswordPropertyTextAttribute System.ComponentModel.PasswordPropertyTextAttribute::Yes
	PasswordPropertyTextAttribute_t4966400 * ___Yes_0;
	// System.ComponentModel.PasswordPropertyTextAttribute System.ComponentModel.PasswordPropertyTextAttribute::No
	PasswordPropertyTextAttribute_t4966400 * ___No_1;
	// System.ComponentModel.PasswordPropertyTextAttribute System.ComponentModel.PasswordPropertyTextAttribute::Default
	PasswordPropertyTextAttribute_t4966400 * ___Default_2;

public:
	inline static int32_t get_offset_of_Yes_0() { return static_cast<int32_t>(offsetof(PasswordPropertyTextAttribute_t4966400_StaticFields, ___Yes_0)); }
	inline PasswordPropertyTextAttribute_t4966400 * get_Yes_0() const { return ___Yes_0; }
	inline PasswordPropertyTextAttribute_t4966400 ** get_address_of_Yes_0() { return &___Yes_0; }
	inline void set_Yes_0(PasswordPropertyTextAttribute_t4966400 * value)
	{
		___Yes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(PasswordPropertyTextAttribute_t4966400_StaticFields, ___No_1)); }
	inline PasswordPropertyTextAttribute_t4966400 * get_No_1() const { return ___No_1; }
	inline PasswordPropertyTextAttribute_t4966400 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(PasswordPropertyTextAttribute_t4966400 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(PasswordPropertyTextAttribute_t4966400_StaticFields, ___Default_2)); }
	inline PasswordPropertyTextAttribute_t4966400 * get_Default_2() const { return ___Default_2; }
	inline PasswordPropertyTextAttribute_t4966400 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(PasswordPropertyTextAttribute_t4966400 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PASSWORDPROPERTYTEXTATTRIBUTE_T4966400_H
#ifndef LOOKUPBINDINGPROPERTIESATTRIBUTE_T2365213483_H
#define LOOKUPBINDINGPROPERTIESATTRIBUTE_T2365213483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LookupBindingPropertiesAttribute
struct  LookupBindingPropertiesAttribute_t2365213483  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.LookupBindingPropertiesAttribute::dataSource
	String_t* ___dataSource_0;
	// System.String System.ComponentModel.LookupBindingPropertiesAttribute::displayMember
	String_t* ___displayMember_1;
	// System.String System.ComponentModel.LookupBindingPropertiesAttribute::valueMember
	String_t* ___valueMember_2;
	// System.String System.ComponentModel.LookupBindingPropertiesAttribute::lookupMember
	String_t* ___lookupMember_3;

public:
	inline static int32_t get_offset_of_dataSource_0() { return static_cast<int32_t>(offsetof(LookupBindingPropertiesAttribute_t2365213483, ___dataSource_0)); }
	inline String_t* get_dataSource_0() const { return ___dataSource_0; }
	inline String_t** get_address_of_dataSource_0() { return &___dataSource_0; }
	inline void set_dataSource_0(String_t* value)
	{
		___dataSource_0 = value;
		Il2CppCodeGenWriteBarrier((&___dataSource_0), value);
	}

	inline static int32_t get_offset_of_displayMember_1() { return static_cast<int32_t>(offsetof(LookupBindingPropertiesAttribute_t2365213483, ___displayMember_1)); }
	inline String_t* get_displayMember_1() const { return ___displayMember_1; }
	inline String_t** get_address_of_displayMember_1() { return &___displayMember_1; }
	inline void set_displayMember_1(String_t* value)
	{
		___displayMember_1 = value;
		Il2CppCodeGenWriteBarrier((&___displayMember_1), value);
	}

	inline static int32_t get_offset_of_valueMember_2() { return static_cast<int32_t>(offsetof(LookupBindingPropertiesAttribute_t2365213483, ___valueMember_2)); }
	inline String_t* get_valueMember_2() const { return ___valueMember_2; }
	inline String_t** get_address_of_valueMember_2() { return &___valueMember_2; }
	inline void set_valueMember_2(String_t* value)
	{
		___valueMember_2 = value;
		Il2CppCodeGenWriteBarrier((&___valueMember_2), value);
	}

	inline static int32_t get_offset_of_lookupMember_3() { return static_cast<int32_t>(offsetof(LookupBindingPropertiesAttribute_t2365213483, ___lookupMember_3)); }
	inline String_t* get_lookupMember_3() const { return ___lookupMember_3; }
	inline String_t** get_address_of_lookupMember_3() { return &___lookupMember_3; }
	inline void set_lookupMember_3(String_t* value)
	{
		___lookupMember_3 = value;
		Il2CppCodeGenWriteBarrier((&___lookupMember_3), value);
	}
};

struct LookupBindingPropertiesAttribute_t2365213483_StaticFields
{
public:
	// System.ComponentModel.LookupBindingPropertiesAttribute System.ComponentModel.LookupBindingPropertiesAttribute::Default
	LookupBindingPropertiesAttribute_t2365213483 * ___Default_4;

public:
	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(LookupBindingPropertiesAttribute_t2365213483_StaticFields, ___Default_4)); }
	inline LookupBindingPropertiesAttribute_t2365213483 * get_Default_4() const { return ___Default_4; }
	inline LookupBindingPropertiesAttribute_t2365213483 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(LookupBindingPropertiesAttribute_t2365213483 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOOKUPBINDINGPROPERTIESATTRIBUTE_T2365213483_H
#ifndef LICFILELICENSE_T2279240837_H
#define LICFILELICENSE_T2279240837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicFileLicenseProvider/LicFileLicense
struct  LicFileLicense_t2279240837  : public License_t2258946041
{
public:
	// System.String System.ComponentModel.LicFileLicenseProvider/LicFileLicense::key
	String_t* ___key_0;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(LicFileLicense_t2279240837, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICFILELICENSE_T2279240837_H
#ifndef LICFILELICENSEPROVIDER_T3520472243_H
#define LICFILELICENSEPROVIDER_T3520472243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicFileLicenseProvider
struct  LicFileLicenseProvider_t3520472243  : public LicenseProvider_t1830579869
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICFILELICENSEPROVIDER_T3520472243_H
#ifndef INSTALLERTYPEATTRIBUTE_T3233088727_H
#define INSTALLERTYPEATTRIBUTE_T3233088727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InstallerTypeAttribute
struct  InstallerTypeAttribute_t3233088727  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.InstallerTypeAttribute::_typeName
	String_t* ____typeName_0;

public:
	inline static int32_t get_offset_of__typeName_0() { return static_cast<int32_t>(offsetof(InstallerTypeAttribute_t3233088727, ____typeName_0)); }
	inline String_t* get__typeName_0() const { return ____typeName_0; }
	inline String_t** get_address_of__typeName_0() { return &____typeName_0; }
	inline void set__typeName_0(String_t* value)
	{
		____typeName_0 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTALLERTYPEATTRIBUTE_T3233088727_H
#ifndef LOCALIZABLEATTRIBUTE_T3478561129_H
#define LOCALIZABLEATTRIBUTE_T3478561129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LocalizableAttribute
struct  LocalizableAttribute_t3478561129  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.LocalizableAttribute::isLocalizable
	bool ___isLocalizable_0;

public:
	inline static int32_t get_offset_of_isLocalizable_0() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t3478561129, ___isLocalizable_0)); }
	inline bool get_isLocalizable_0() const { return ___isLocalizable_0; }
	inline bool* get_address_of_isLocalizable_0() { return &___isLocalizable_0; }
	inline void set_isLocalizable_0(bool value)
	{
		___isLocalizable_0 = value;
	}
};

struct LocalizableAttribute_t3478561129_StaticFields
{
public:
	// System.ComponentModel.LocalizableAttribute System.ComponentModel.LocalizableAttribute::Yes
	LocalizableAttribute_t3478561129 * ___Yes_1;
	// System.ComponentModel.LocalizableAttribute System.ComponentModel.LocalizableAttribute::No
	LocalizableAttribute_t3478561129 * ___No_2;
	// System.ComponentModel.LocalizableAttribute System.ComponentModel.LocalizableAttribute::Default
	LocalizableAttribute_t3478561129 * ___Default_3;

public:
	inline static int32_t get_offset_of_Yes_1() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t3478561129_StaticFields, ___Yes_1)); }
	inline LocalizableAttribute_t3478561129 * get_Yes_1() const { return ___Yes_1; }
	inline LocalizableAttribute_t3478561129 ** get_address_of_Yes_1() { return &___Yes_1; }
	inline void set_Yes_1(LocalizableAttribute_t3478561129 * value)
	{
		___Yes_1 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t3478561129_StaticFields, ___No_2)); }
	inline LocalizableAttribute_t3478561129 * get_No_2() const { return ___No_2; }
	inline LocalizableAttribute_t3478561129 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(LocalizableAttribute_t3478561129 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t3478561129_StaticFields, ___Default_3)); }
	inline LocalizableAttribute_t3478561129 * get_Default_3() const { return ___Default_3; }
	inline LocalizableAttribute_t3478561129 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(LocalizableAttribute_t3478561129 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALIZABLEATTRIBUTE_T3478561129_H
#ifndef LISTBINDABLEATTRIBUTE_T2461184386_H
#define LISTBINDABLEATTRIBUTE_T2461184386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListBindableAttribute
struct  ListBindableAttribute_t2461184386  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.ListBindableAttribute::listBindable
	bool ___listBindable_3;
	// System.Boolean System.ComponentModel.ListBindableAttribute::isDefault
	bool ___isDefault_4;

public:
	inline static int32_t get_offset_of_listBindable_3() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t2461184386, ___listBindable_3)); }
	inline bool get_listBindable_3() const { return ___listBindable_3; }
	inline bool* get_address_of_listBindable_3() { return &___listBindable_3; }
	inline void set_listBindable_3(bool value)
	{
		___listBindable_3 = value;
	}

	inline static int32_t get_offset_of_isDefault_4() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t2461184386, ___isDefault_4)); }
	inline bool get_isDefault_4() const { return ___isDefault_4; }
	inline bool* get_address_of_isDefault_4() { return &___isDefault_4; }
	inline void set_isDefault_4(bool value)
	{
		___isDefault_4 = value;
	}
};

struct ListBindableAttribute_t2461184386_StaticFields
{
public:
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Yes
	ListBindableAttribute_t2461184386 * ___Yes_0;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::No
	ListBindableAttribute_t2461184386 * ___No_1;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Default
	ListBindableAttribute_t2461184386 * ___Default_2;

public:
	inline static int32_t get_offset_of_Yes_0() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t2461184386_StaticFields, ___Yes_0)); }
	inline ListBindableAttribute_t2461184386 * get_Yes_0() const { return ___Yes_0; }
	inline ListBindableAttribute_t2461184386 ** get_address_of_Yes_0() { return &___Yes_0; }
	inline void set_Yes_0(ListBindableAttribute_t2461184386 * value)
	{
		___Yes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t2461184386_StaticFields, ___No_1)); }
	inline ListBindableAttribute_t2461184386 * get_No_1() const { return ___No_1; }
	inline ListBindableAttribute_t2461184386 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ListBindableAttribute_t2461184386 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t2461184386_StaticFields, ___Default_2)); }
	inline ListBindableAttribute_t2461184386 * get_Default_2() const { return ___Default_2; }
	inline ListBindableAttribute_t2461184386 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(ListBindableAttribute_t2461184386 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTBINDABLEATTRIBUTE_T2461184386_H
#ifndef LICENSEPROVIDERATTRIBUTE_T1257937162_H
#define LICENSEPROVIDERATTRIBUTE_T1257937162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseProviderAttribute
struct  LicenseProviderAttribute_t1257937162  : public Attribute_t861562559
{
public:
	// System.Type System.ComponentModel.LicenseProviderAttribute::licenseProviderType
	Type_t * ___licenseProviderType_1;
	// System.String System.ComponentModel.LicenseProviderAttribute::licenseProviderName
	String_t* ___licenseProviderName_2;

public:
	inline static int32_t get_offset_of_licenseProviderType_1() { return static_cast<int32_t>(offsetof(LicenseProviderAttribute_t1257937162, ___licenseProviderType_1)); }
	inline Type_t * get_licenseProviderType_1() const { return ___licenseProviderType_1; }
	inline Type_t ** get_address_of_licenseProviderType_1() { return &___licenseProviderType_1; }
	inline void set_licenseProviderType_1(Type_t * value)
	{
		___licenseProviderType_1 = value;
		Il2CppCodeGenWriteBarrier((&___licenseProviderType_1), value);
	}

	inline static int32_t get_offset_of_licenseProviderName_2() { return static_cast<int32_t>(offsetof(LicenseProviderAttribute_t1257937162, ___licenseProviderName_2)); }
	inline String_t* get_licenseProviderName_2() const { return ___licenseProviderName_2; }
	inline String_t** get_address_of_licenseProviderName_2() { return &___licenseProviderName_2; }
	inline void set_licenseProviderName_2(String_t* value)
	{
		___licenseProviderName_2 = value;
		Il2CppCodeGenWriteBarrier((&___licenseProviderName_2), value);
	}
};

struct LicenseProviderAttribute_t1257937162_StaticFields
{
public:
	// System.ComponentModel.LicenseProviderAttribute System.ComponentModel.LicenseProviderAttribute::Default
	LicenseProviderAttribute_t1257937162 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LicenseProviderAttribute_t1257937162_StaticFields, ___Default_0)); }
	inline LicenseProviderAttribute_t1257937162 * get_Default_0() const { return ___Default_0; }
	inline LicenseProviderAttribute_t1257937162 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LicenseProviderAttribute_t1257937162 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEPROVIDERATTRIBUTE_T1257937162_H
#ifndef PROVIDEPROPERTYATTRIBUTE_T26263718_H
#define PROVIDEPROPERTYATTRIBUTE_T26263718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ProvidePropertyAttribute
struct  ProvidePropertyAttribute_t26263718  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.ProvidePropertyAttribute::propertyName
	String_t* ___propertyName_0;
	// System.String System.ComponentModel.ProvidePropertyAttribute::receiverTypeName
	String_t* ___receiverTypeName_1;

public:
	inline static int32_t get_offset_of_propertyName_0() { return static_cast<int32_t>(offsetof(ProvidePropertyAttribute_t26263718, ___propertyName_0)); }
	inline String_t* get_propertyName_0() const { return ___propertyName_0; }
	inline String_t** get_address_of_propertyName_0() { return &___propertyName_0; }
	inline void set_propertyName_0(String_t* value)
	{
		___propertyName_0 = value;
		Il2CppCodeGenWriteBarrier((&___propertyName_0), value);
	}

	inline static int32_t get_offset_of_receiverTypeName_1() { return static_cast<int32_t>(offsetof(ProvidePropertyAttribute_t26263718, ___receiverTypeName_1)); }
	inline String_t* get_receiverTypeName_1() const { return ___receiverTypeName_1; }
	inline String_t** get_address_of_receiverTypeName_1() { return &___receiverTypeName_1; }
	inline void set_receiverTypeName_1(String_t* value)
	{
		___receiverTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___receiverTypeName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROVIDEPROPERTYATTRIBUTE_T26263718_H
#ifndef PROPERTYDESCRIPTOR_T3244362832_H
#define PROPERTYDESCRIPTOR_T3244362832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t3244362832  : public MemberDescriptor_t3815403747
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t2249118273 * ___converter_12;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::valueChangedHandlers
	Hashtable_t1853889766 * ___valueChangedHandlers_13;
	// System.Object[] System.ComponentModel.PropertyDescriptor::editors
	ObjectU5BU5D_t2843939325* ___editors_14;
	// System.Type[] System.ComponentModel.PropertyDescriptor::editorTypes
	TypeU5BU5D_t3940880105* ___editorTypes_15;
	// System.Int32 System.ComponentModel.PropertyDescriptor::editorCount
	int32_t ___editorCount_16;

public:
	inline static int32_t get_offset_of_converter_12() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3244362832, ___converter_12)); }
	inline TypeConverter_t2249118273 * get_converter_12() const { return ___converter_12; }
	inline TypeConverter_t2249118273 ** get_address_of_converter_12() { return &___converter_12; }
	inline void set_converter_12(TypeConverter_t2249118273 * value)
	{
		___converter_12 = value;
		Il2CppCodeGenWriteBarrier((&___converter_12), value);
	}

	inline static int32_t get_offset_of_valueChangedHandlers_13() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3244362832, ___valueChangedHandlers_13)); }
	inline Hashtable_t1853889766 * get_valueChangedHandlers_13() const { return ___valueChangedHandlers_13; }
	inline Hashtable_t1853889766 ** get_address_of_valueChangedHandlers_13() { return &___valueChangedHandlers_13; }
	inline void set_valueChangedHandlers_13(Hashtable_t1853889766 * value)
	{
		___valueChangedHandlers_13 = value;
		Il2CppCodeGenWriteBarrier((&___valueChangedHandlers_13), value);
	}

	inline static int32_t get_offset_of_editors_14() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3244362832, ___editors_14)); }
	inline ObjectU5BU5D_t2843939325* get_editors_14() const { return ___editors_14; }
	inline ObjectU5BU5D_t2843939325** get_address_of_editors_14() { return &___editors_14; }
	inline void set_editors_14(ObjectU5BU5D_t2843939325* value)
	{
		___editors_14 = value;
		Il2CppCodeGenWriteBarrier((&___editors_14), value);
	}

	inline static int32_t get_offset_of_editorTypes_15() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3244362832, ___editorTypes_15)); }
	inline TypeU5BU5D_t3940880105* get_editorTypes_15() const { return ___editorTypes_15; }
	inline TypeU5BU5D_t3940880105** get_address_of_editorTypes_15() { return &___editorTypes_15; }
	inline void set_editorTypes_15(TypeU5BU5D_t3940880105* value)
	{
		___editorTypes_15 = value;
		Il2CppCodeGenWriteBarrier((&___editorTypes_15), value);
	}

	inline static int32_t get_offset_of_editorCount_16() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3244362832, ___editorCount_16)); }
	inline int32_t get_editorCount_16() const { return ___editorCount_16; }
	inline int32_t* get_address_of_editorCount_16() { return &___editorCount_16; }
	inline void set_editorCount_16(int32_t value)
	{
		___editorCount_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T3244362832_H
#ifndef PROPERTYCHANGINGEVENTARGS_T2067745136_H
#define PROPERTYCHANGINGEVENTARGS_T2067745136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangingEventArgs
struct  PropertyChangingEventArgs_t2067745136  : public EventArgs_t3591816995
{
public:
	// System.String System.ComponentModel.PropertyChangingEventArgs::propertyName
	String_t* ___propertyName_1;

public:
	inline static int32_t get_offset_of_propertyName_1() { return static_cast<int32_t>(offsetof(PropertyChangingEventArgs_t2067745136, ___propertyName_1)); }
	inline String_t* get_propertyName_1() const { return ___propertyName_1; }
	inline String_t** get_address_of_propertyName_1() { return &___propertyName_1; }
	inline void set_propertyName_1(String_t* value)
	{
		___propertyName_1 = value;
		Il2CppCodeGenWriteBarrier((&___propertyName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGINGEVENTARGS_T2067745136_H
#ifndef READONLYATTRIBUTE_T1907441566_H
#define READONLYATTRIBUTE_T1907441566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReadOnlyAttribute
struct  ReadOnlyAttribute_t1907441566  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.ReadOnlyAttribute::isReadOnly
	bool ___isReadOnly_0;

public:
	inline static int32_t get_offset_of_isReadOnly_0() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1907441566, ___isReadOnly_0)); }
	inline bool get_isReadOnly_0() const { return ___isReadOnly_0; }
	inline bool* get_address_of_isReadOnly_0() { return &___isReadOnly_0; }
	inline void set_isReadOnly_0(bool value)
	{
		___isReadOnly_0 = value;
	}
};

struct ReadOnlyAttribute_t1907441566_StaticFields
{
public:
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Yes
	ReadOnlyAttribute_t1907441566 * ___Yes_1;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::No
	ReadOnlyAttribute_t1907441566 * ___No_2;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Default
	ReadOnlyAttribute_t1907441566 * ___Default_3;

public:
	inline static int32_t get_offset_of_Yes_1() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1907441566_StaticFields, ___Yes_1)); }
	inline ReadOnlyAttribute_t1907441566 * get_Yes_1() const { return ___Yes_1; }
	inline ReadOnlyAttribute_t1907441566 ** get_address_of_Yes_1() { return &___Yes_1; }
	inline void set_Yes_1(ReadOnlyAttribute_t1907441566 * value)
	{
		___Yes_1 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1907441566_StaticFields, ___No_2)); }
	inline ReadOnlyAttribute_t1907441566 * get_No_2() const { return ___No_2; }
	inline ReadOnlyAttribute_t1907441566 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(ReadOnlyAttribute_t1907441566 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1907441566_StaticFields, ___Default_3)); }
	inline ReadOnlyAttribute_t1907441566 * get_Default_3() const { return ___Default_3; }
	inline ReadOnlyAttribute_t1907441566 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(ReadOnlyAttribute_t1907441566 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T1907441566_H
#ifndef LISTSORTDIRECTION_T852779204_H
#define LISTSORTDIRECTION_T852779204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDirection
struct  ListSortDirection_t852779204 
{
public:
	// System.Int32 System.ComponentModel.ListSortDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ListSortDirection_t852779204, ___value___2)); }
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
#endif // LISTSORTDIRECTION_T852779204_H
#ifndef MASKEDTEXTRESULTHINT_T3918028412_H
#define MASKEDTEXTRESULTHINT_T3918028412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MaskedTextResultHint
struct  MaskedTextResultHint_t3918028412 
{
public:
	// System.Int32 System.ComponentModel.MaskedTextResultHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MaskedTextResultHint_t3918028412, ___value___2)); }
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
#endif // MASKEDTEXTRESULTHINT_T3918028412_H
#ifndef CASECONVERSION_T3435856749_H
#define CASECONVERSION_T3435856749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MaskedTextProvider/CaseConversion
struct  CaseConversion_t3435856749 
{
public:
	// System.Int32 System.ComponentModel.MaskedTextProvider/CaseConversion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CaseConversion_t3435856749, ___value___2)); }
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
#endif // CASECONVERSION_T3435856749_H
#ifndef CHARTYPE_T2940487520_H
#define CHARTYPE_T2940487520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MaskedTextProvider/CharType
struct  CharType_t2940487520 
{
public:
	// System.Int32 System.ComponentModel.MaskedTextProvider/CharType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharType_t2940487520, ___value___2)); }
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
#endif // CHARTYPE_T2940487520_H
#ifndef MASKEDTEXTPROVIDER_T3775648146_H
#define MASKEDTEXTPROVIDER_T3775648146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MaskedTextProvider
struct  MaskedTextProvider_t3775648146  : public RuntimeObject
{
public:
	// System.Collections.Specialized.BitVector32 System.ComponentModel.MaskedTextProvider::flagState
	BitVector32_t3253088880  ___flagState_18;
	// System.Globalization.CultureInfo System.ComponentModel.MaskedTextProvider::culture
	CultureInfo_t4157843068 * ___culture_19;
	// System.Text.StringBuilder System.ComponentModel.MaskedTextProvider::testString
	StringBuilder_t1712802186 * ___testString_20;
	// System.Int32 System.ComponentModel.MaskedTextProvider::assignedCharCount
	int32_t ___assignedCharCount_21;
	// System.Int32 System.ComponentModel.MaskedTextProvider::requiredCharCount
	int32_t ___requiredCharCount_22;
	// System.Int32 System.ComponentModel.MaskedTextProvider::requiredEditChars
	int32_t ___requiredEditChars_23;
	// System.Int32 System.ComponentModel.MaskedTextProvider::optionalEditChars
	int32_t ___optionalEditChars_24;
	// System.String System.ComponentModel.MaskedTextProvider::mask
	String_t* ___mask_25;
	// System.Char System.ComponentModel.MaskedTextProvider::passwordChar
	Il2CppChar ___passwordChar_26;
	// System.Char System.ComponentModel.MaskedTextProvider::promptChar
	Il2CppChar ___promptChar_27;
	// System.Collections.Generic.List`1<System.ComponentModel.MaskedTextProvider/CharDescriptor> System.ComponentModel.MaskedTextProvider::stringDescriptor
	List_1_t3806199219 * ___stringDescriptor_28;

public:
	inline static int32_t get_offset_of_flagState_18() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___flagState_18)); }
	inline BitVector32_t3253088880  get_flagState_18() const { return ___flagState_18; }
	inline BitVector32_t3253088880 * get_address_of_flagState_18() { return &___flagState_18; }
	inline void set_flagState_18(BitVector32_t3253088880  value)
	{
		___flagState_18 = value;
	}

	inline static int32_t get_offset_of_culture_19() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___culture_19)); }
	inline CultureInfo_t4157843068 * get_culture_19() const { return ___culture_19; }
	inline CultureInfo_t4157843068 ** get_address_of_culture_19() { return &___culture_19; }
	inline void set_culture_19(CultureInfo_t4157843068 * value)
	{
		___culture_19 = value;
		Il2CppCodeGenWriteBarrier((&___culture_19), value);
	}

	inline static int32_t get_offset_of_testString_20() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___testString_20)); }
	inline StringBuilder_t1712802186 * get_testString_20() const { return ___testString_20; }
	inline StringBuilder_t1712802186 ** get_address_of_testString_20() { return &___testString_20; }
	inline void set_testString_20(StringBuilder_t1712802186 * value)
	{
		___testString_20 = value;
		Il2CppCodeGenWriteBarrier((&___testString_20), value);
	}

	inline static int32_t get_offset_of_assignedCharCount_21() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___assignedCharCount_21)); }
	inline int32_t get_assignedCharCount_21() const { return ___assignedCharCount_21; }
	inline int32_t* get_address_of_assignedCharCount_21() { return &___assignedCharCount_21; }
	inline void set_assignedCharCount_21(int32_t value)
	{
		___assignedCharCount_21 = value;
	}

	inline static int32_t get_offset_of_requiredCharCount_22() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___requiredCharCount_22)); }
	inline int32_t get_requiredCharCount_22() const { return ___requiredCharCount_22; }
	inline int32_t* get_address_of_requiredCharCount_22() { return &___requiredCharCount_22; }
	inline void set_requiredCharCount_22(int32_t value)
	{
		___requiredCharCount_22 = value;
	}

	inline static int32_t get_offset_of_requiredEditChars_23() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___requiredEditChars_23)); }
	inline int32_t get_requiredEditChars_23() const { return ___requiredEditChars_23; }
	inline int32_t* get_address_of_requiredEditChars_23() { return &___requiredEditChars_23; }
	inline void set_requiredEditChars_23(int32_t value)
	{
		___requiredEditChars_23 = value;
	}

	inline static int32_t get_offset_of_optionalEditChars_24() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___optionalEditChars_24)); }
	inline int32_t get_optionalEditChars_24() const { return ___optionalEditChars_24; }
	inline int32_t* get_address_of_optionalEditChars_24() { return &___optionalEditChars_24; }
	inline void set_optionalEditChars_24(int32_t value)
	{
		___optionalEditChars_24 = value;
	}

	inline static int32_t get_offset_of_mask_25() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___mask_25)); }
	inline String_t* get_mask_25() const { return ___mask_25; }
	inline String_t** get_address_of_mask_25() { return &___mask_25; }
	inline void set_mask_25(String_t* value)
	{
		___mask_25 = value;
		Il2CppCodeGenWriteBarrier((&___mask_25), value);
	}

	inline static int32_t get_offset_of_passwordChar_26() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___passwordChar_26)); }
	inline Il2CppChar get_passwordChar_26() const { return ___passwordChar_26; }
	inline Il2CppChar* get_address_of_passwordChar_26() { return &___passwordChar_26; }
	inline void set_passwordChar_26(Il2CppChar value)
	{
		___passwordChar_26 = value;
	}

	inline static int32_t get_offset_of_promptChar_27() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___promptChar_27)); }
	inline Il2CppChar get_promptChar_27() const { return ___promptChar_27; }
	inline Il2CppChar* get_address_of_promptChar_27() { return &___promptChar_27; }
	inline void set_promptChar_27(Il2CppChar value)
	{
		___promptChar_27 = value;
	}

	inline static int32_t get_offset_of_stringDescriptor_28() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146, ___stringDescriptor_28)); }
	inline List_1_t3806199219 * get_stringDescriptor_28() const { return ___stringDescriptor_28; }
	inline List_1_t3806199219 ** get_address_of_stringDescriptor_28() { return &___stringDescriptor_28; }
	inline void set_stringDescriptor_28(List_1_t3806199219 * value)
	{
		___stringDescriptor_28 = value;
		Il2CppCodeGenWriteBarrier((&___stringDescriptor_28), value);
	}
};

struct MaskedTextProvider_t3775648146_StaticFields
{
public:
	// System.Int32 System.ComponentModel.MaskedTextProvider::ASCII_ONLY
	int32_t ___ASCII_ONLY_10;
	// System.Int32 System.ComponentModel.MaskedTextProvider::ALLOW_PROMPT_AS_INPUT
	int32_t ___ALLOW_PROMPT_AS_INPUT_11;
	// System.Int32 System.ComponentModel.MaskedTextProvider::INCLUDE_PROMPT
	int32_t ___INCLUDE_PROMPT_12;
	// System.Int32 System.ComponentModel.MaskedTextProvider::INCLUDE_LITERALS
	int32_t ___INCLUDE_LITERALS_13;
	// System.Int32 System.ComponentModel.MaskedTextProvider::RESET_ON_PROMPT
	int32_t ___RESET_ON_PROMPT_14;
	// System.Int32 System.ComponentModel.MaskedTextProvider::RESET_ON_LITERALS
	int32_t ___RESET_ON_LITERALS_15;
	// System.Int32 System.ComponentModel.MaskedTextProvider::SKIP_SPACE
	int32_t ___SKIP_SPACE_16;
	// System.Type System.ComponentModel.MaskedTextProvider::maskTextProviderType
	Type_t * ___maskTextProviderType_17;

public:
	inline static int32_t get_offset_of_ASCII_ONLY_10() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146_StaticFields, ___ASCII_ONLY_10)); }
	inline int32_t get_ASCII_ONLY_10() const { return ___ASCII_ONLY_10; }
	inline int32_t* get_address_of_ASCII_ONLY_10() { return &___ASCII_ONLY_10; }
	inline void set_ASCII_ONLY_10(int32_t value)
	{
		___ASCII_ONLY_10 = value;
	}

	inline static int32_t get_offset_of_ALLOW_PROMPT_AS_INPUT_11() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146_StaticFields, ___ALLOW_PROMPT_AS_INPUT_11)); }
	inline int32_t get_ALLOW_PROMPT_AS_INPUT_11() const { return ___ALLOW_PROMPT_AS_INPUT_11; }
	inline int32_t* get_address_of_ALLOW_PROMPT_AS_INPUT_11() { return &___ALLOW_PROMPT_AS_INPUT_11; }
	inline void set_ALLOW_PROMPT_AS_INPUT_11(int32_t value)
	{
		___ALLOW_PROMPT_AS_INPUT_11 = value;
	}

	inline static int32_t get_offset_of_INCLUDE_PROMPT_12() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146_StaticFields, ___INCLUDE_PROMPT_12)); }
	inline int32_t get_INCLUDE_PROMPT_12() const { return ___INCLUDE_PROMPT_12; }
	inline int32_t* get_address_of_INCLUDE_PROMPT_12() { return &___INCLUDE_PROMPT_12; }
	inline void set_INCLUDE_PROMPT_12(int32_t value)
	{
		___INCLUDE_PROMPT_12 = value;
	}

	inline static int32_t get_offset_of_INCLUDE_LITERALS_13() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146_StaticFields, ___INCLUDE_LITERALS_13)); }
	inline int32_t get_INCLUDE_LITERALS_13() const { return ___INCLUDE_LITERALS_13; }
	inline int32_t* get_address_of_INCLUDE_LITERALS_13() { return &___INCLUDE_LITERALS_13; }
	inline void set_INCLUDE_LITERALS_13(int32_t value)
	{
		___INCLUDE_LITERALS_13 = value;
	}

	inline static int32_t get_offset_of_RESET_ON_PROMPT_14() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146_StaticFields, ___RESET_ON_PROMPT_14)); }
	inline int32_t get_RESET_ON_PROMPT_14() const { return ___RESET_ON_PROMPT_14; }
	inline int32_t* get_address_of_RESET_ON_PROMPT_14() { return &___RESET_ON_PROMPT_14; }
	inline void set_RESET_ON_PROMPT_14(int32_t value)
	{
		___RESET_ON_PROMPT_14 = value;
	}

	inline static int32_t get_offset_of_RESET_ON_LITERALS_15() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146_StaticFields, ___RESET_ON_LITERALS_15)); }
	inline int32_t get_RESET_ON_LITERALS_15() const { return ___RESET_ON_LITERALS_15; }
	inline int32_t* get_address_of_RESET_ON_LITERALS_15() { return &___RESET_ON_LITERALS_15; }
	inline void set_RESET_ON_LITERALS_15(int32_t value)
	{
		___RESET_ON_LITERALS_15 = value;
	}

	inline static int32_t get_offset_of_SKIP_SPACE_16() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146_StaticFields, ___SKIP_SPACE_16)); }
	inline int32_t get_SKIP_SPACE_16() const { return ___SKIP_SPACE_16; }
	inline int32_t* get_address_of_SKIP_SPACE_16() { return &___SKIP_SPACE_16; }
	inline void set_SKIP_SPACE_16(int32_t value)
	{
		___SKIP_SPACE_16 = value;
	}

	inline static int32_t get_offset_of_maskTextProviderType_17() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t3775648146_StaticFields, ___maskTextProviderType_17)); }
	inline Type_t * get_maskTextProviderType_17() const { return ___maskTextProviderType_17; }
	inline Type_t ** get_address_of_maskTextProviderType_17() { return &___maskTextProviderType_17; }
	inline void set_maskTextProviderType_17(Type_t * value)
	{
		___maskTextProviderType_17 = value;
		Il2CppCodeGenWriteBarrier((&___maskTextProviderType_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKEDTEXTPROVIDER_T3775648146_H
#ifndef REFLECTEVENTDESCRIPTOR_T849369318_H
#define REFLECTEVENTDESCRIPTOR_T849369318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectEventDescriptor
struct  ReflectEventDescriptor_t849369318  : public EventDescriptor_t88602298
{
public:
	// System.Type System.ComponentModel.ReflectEventDescriptor::type
	Type_t * ___type_12;
	// System.Type System.ComponentModel.ReflectEventDescriptor::componentClass
	Type_t * ___componentClass_13;
	// System.Reflection.MethodInfo System.ComponentModel.ReflectEventDescriptor::addMethod
	MethodInfo_t * ___addMethod_14;
	// System.Reflection.MethodInfo System.ComponentModel.ReflectEventDescriptor::removeMethod
	MethodInfo_t * ___removeMethod_15;
	// System.Reflection.EventInfo System.ComponentModel.ReflectEventDescriptor::realEvent
	EventInfo_t * ___realEvent_16;
	// System.Boolean System.ComponentModel.ReflectEventDescriptor::filledMethods
	bool ___filledMethods_17;

public:
	inline static int32_t get_offset_of_type_12() { return static_cast<int32_t>(offsetof(ReflectEventDescriptor_t849369318, ___type_12)); }
	inline Type_t * get_type_12() const { return ___type_12; }
	inline Type_t ** get_address_of_type_12() { return &___type_12; }
	inline void set_type_12(Type_t * value)
	{
		___type_12 = value;
		Il2CppCodeGenWriteBarrier((&___type_12), value);
	}

	inline static int32_t get_offset_of_componentClass_13() { return static_cast<int32_t>(offsetof(ReflectEventDescriptor_t849369318, ___componentClass_13)); }
	inline Type_t * get_componentClass_13() const { return ___componentClass_13; }
	inline Type_t ** get_address_of_componentClass_13() { return &___componentClass_13; }
	inline void set_componentClass_13(Type_t * value)
	{
		___componentClass_13 = value;
		Il2CppCodeGenWriteBarrier((&___componentClass_13), value);
	}

	inline static int32_t get_offset_of_addMethod_14() { return static_cast<int32_t>(offsetof(ReflectEventDescriptor_t849369318, ___addMethod_14)); }
	inline MethodInfo_t * get_addMethod_14() const { return ___addMethod_14; }
	inline MethodInfo_t ** get_address_of_addMethod_14() { return &___addMethod_14; }
	inline void set_addMethod_14(MethodInfo_t * value)
	{
		___addMethod_14 = value;
		Il2CppCodeGenWriteBarrier((&___addMethod_14), value);
	}

	inline static int32_t get_offset_of_removeMethod_15() { return static_cast<int32_t>(offsetof(ReflectEventDescriptor_t849369318, ___removeMethod_15)); }
	inline MethodInfo_t * get_removeMethod_15() const { return ___removeMethod_15; }
	inline MethodInfo_t ** get_address_of_removeMethod_15() { return &___removeMethod_15; }
	inline void set_removeMethod_15(MethodInfo_t * value)
	{
		___removeMethod_15 = value;
		Il2CppCodeGenWriteBarrier((&___removeMethod_15), value);
	}

	inline static int32_t get_offset_of_realEvent_16() { return static_cast<int32_t>(offsetof(ReflectEventDescriptor_t849369318, ___realEvent_16)); }
	inline EventInfo_t * get_realEvent_16() const { return ___realEvent_16; }
	inline EventInfo_t ** get_address_of_realEvent_16() { return &___realEvent_16; }
	inline void set_realEvent_16(EventInfo_t * value)
	{
		___realEvent_16 = value;
		Il2CppCodeGenWriteBarrier((&___realEvent_16), value);
	}

	inline static int32_t get_offset_of_filledMethods_17() { return static_cast<int32_t>(offsetof(ReflectEventDescriptor_t849369318, ___filledMethods_17)); }
	inline bool get_filledMethods_17() const { return ___filledMethods_17; }
	inline bool* get_address_of_filledMethods_17() { return &___filledMethods_17; }
	inline void set_filledMethods_17(bool value)
	{
		___filledMethods_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTEVENTDESCRIPTOR_T849369318_H
#ifndef LICENSEEXCEPTION_T2803495799_H
#define LICENSEEXCEPTION_T2803495799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseException
struct  LicenseException_t2803495799  : public SystemException_t176217640
{
public:
	// System.Type System.ComponentModel.LicenseException::type
	Type_t * ___type_17;
	// System.Object System.ComponentModel.LicenseException::instance
	RuntimeObject * ___instance_18;

public:
	inline static int32_t get_offset_of_type_17() { return static_cast<int32_t>(offsetof(LicenseException_t2803495799, ___type_17)); }
	inline Type_t * get_type_17() const { return ___type_17; }
	inline Type_t ** get_address_of_type_17() { return &___type_17; }
	inline void set_type_17(Type_t * value)
	{
		___type_17 = value;
		Il2CppCodeGenWriteBarrier((&___type_17), value);
	}

	inline static int32_t get_offset_of_instance_18() { return static_cast<int32_t>(offsetof(LicenseException_t2803495799, ___instance_18)); }
	inline RuntimeObject * get_instance_18() const { return ___instance_18; }
	inline RuntimeObject ** get_address_of_instance_18() { return &___instance_18; }
	inline void set_instance_18(RuntimeObject * value)
	{
		___instance_18 = value;
		Il2CppCodeGenWriteBarrier((&___instance_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEEXCEPTION_T2803495799_H
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
#ifndef LICENSEUSAGEMODE_T830309198_H
#define LICENSEUSAGEMODE_T830309198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseUsageMode
struct  LicenseUsageMode_t830309198 
{
public:
	// System.Int32 System.ComponentModel.LicenseUsageMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LicenseUsageMode_t830309198, ___value___2)); }
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
#endif // LICENSEUSAGEMODE_T830309198_H
#ifndef LISTCHANGEDTYPE_T2971046703_H
#define LISTCHANGEDTYPE_T2971046703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListChangedType
struct  ListChangedType_t2971046703 
{
public:
	// System.Int32 System.ComponentModel.ListChangedType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ListChangedType_t2971046703, ___value___2)); }
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
#endif // LISTCHANGEDTYPE_T2971046703_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___m_paramName_17)); }
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
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef REFLECTPROPERTYDESCRIPTOR_T3323763468_H
#define REFLECTPROPERTYDESCRIPTOR_T3323763468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectPropertyDescriptor
struct  ReflectPropertyDescriptor_t3323763468  : public PropertyDescriptor_t3244362832
{
public:
	// System.Collections.Specialized.BitVector32 System.ComponentModel.ReflectPropertyDescriptor::state
	BitVector32_t3253088880  ___state_31;
	// System.Type System.ComponentModel.ReflectPropertyDescriptor::componentClass
	Type_t * ___componentClass_32;
	// System.Type System.ComponentModel.ReflectPropertyDescriptor::type
	Type_t * ___type_33;
	// System.Object System.ComponentModel.ReflectPropertyDescriptor::defaultValue
	RuntimeObject * ___defaultValue_34;
	// System.Object System.ComponentModel.ReflectPropertyDescriptor::ambientValue
	RuntimeObject * ___ambientValue_35;
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectPropertyDescriptor::propInfo
	PropertyInfo_t * ___propInfo_36;
	// System.Reflection.MethodInfo System.ComponentModel.ReflectPropertyDescriptor::getMethod
	MethodInfo_t * ___getMethod_37;
	// System.Reflection.MethodInfo System.ComponentModel.ReflectPropertyDescriptor::setMethod
	MethodInfo_t * ___setMethod_38;
	// System.Reflection.MethodInfo System.ComponentModel.ReflectPropertyDescriptor::shouldSerializeMethod
	MethodInfo_t * ___shouldSerializeMethod_39;
	// System.Reflection.MethodInfo System.ComponentModel.ReflectPropertyDescriptor::resetMethod
	MethodInfo_t * ___resetMethod_40;
	// System.ComponentModel.EventDescriptor System.ComponentModel.ReflectPropertyDescriptor::realChangedEvent
	EventDescriptor_t88602298 * ___realChangedEvent_41;
	// System.ComponentModel.EventDescriptor System.ComponentModel.ReflectPropertyDescriptor::realIPropChangedEvent
	EventDescriptor_t88602298 * ___realIPropChangedEvent_42;
	// System.Type System.ComponentModel.ReflectPropertyDescriptor::receiverType
	Type_t * ___receiverType_43;

public:
	inline static int32_t get_offset_of_state_31() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468, ___state_31)); }
	inline BitVector32_t3253088880  get_state_31() const { return ___state_31; }
	inline BitVector32_t3253088880 * get_address_of_state_31() { return &___state_31; }
	inline void set_state_31(BitVector32_t3253088880  value)
	{
		___state_31 = value;
	}

	inline static int32_t get_offset_of_componentClass_32() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468, ___componentClass_32)); }
	inline Type_t * get_componentClass_32() const { return ___componentClass_32; }
	inline Type_t ** get_address_of_componentClass_32() { return &___componentClass_32; }
	inline void set_componentClass_32(Type_t * value)
	{
		___componentClass_32 = value;
		Il2CppCodeGenWriteBarrier((&___componentClass_32), value);
	}

	inline static int32_t get_offset_of_type_33() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468, ___type_33)); }
	inline Type_t * get_type_33() const { return ___type_33; }
	inline Type_t ** get_address_of_type_33() { return &___type_33; }
	inline void set_type_33(Type_t * value)
	{
		___type_33 = value;
		Il2CppCodeGenWriteBarrier((&___type_33), value);
	}

	inline static int32_t get_offset_of_defaultValue_34() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468, ___defaultValue_34)); }
	inline RuntimeObject * get_defaultValue_34() const { return ___defaultValue_34; }
	inline RuntimeObject ** get_address_of_defaultValue_34() { return &___defaultValue_34; }
	inline void set_defaultValue_34(RuntimeObject * value)
	{
		___defaultValue_34 = value;
		Il2CppCodeGenWriteBarrier((&___defaultValue_34), value);
	}

	inline static int32_t get_offset_of_ambientValue_35() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468, ___ambientValue_35)); }
	inline RuntimeObject * get_ambientValue_35() const { return ___ambientValue_35; }
	inline RuntimeObject ** get_address_of_ambientValue_35() { return &___ambientValue_35; }
	inline void set_ambientValue_35(RuntimeObject * value)
	{
		___ambientValue_35 = value;
		Il2CppCodeGenWriteBarrier((&___ambientValue_35), value);
	}

	inline static int32_t get_offset_of_propInfo_36() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468, ___propInfo_36)); }
	inline PropertyInfo_t * get_propInfo_36() const { return ___propInfo_36; }
	inline PropertyInfo_t ** get_address_of_propInfo_36() { return &___propInfo_36; }
	inline void set_propInfo_36(PropertyInfo_t * value)
	{
		___propInfo_36 = value;
		Il2CppCodeGenWriteBarrier((&___propInfo_36), value);
	}

	inline static int32_t get_offset_of_getMethod_37() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468, ___getMethod_37)); }
	inline MethodInfo_t * get_getMethod_37() const { return ___getMethod_37; }
	inline MethodInfo_t ** get_address_of_getMethod_37() { return &___getMethod_37; }
	inline void set_getMethod_37(MethodInfo_t * value)
	{
		___getMethod_37 = value;
		Il2CppCodeGenWriteBarrier((&___getMethod_37), value);
	}

	inline static int32_t get_offset_of_setMethod_38() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468, ___setMethod_38)); }
	inline MethodInfo_t * get_setMethod_38() const { return ___setMethod_38; }
	inline MethodInfo_t ** get_address_of_setMethod_38() { return &___setMethod_38; }
	inline void set_setMethod_38(MethodInfo_t * value)
	{
		___setMethod_38 = value;
		Il2CppCodeGenWriteBarrier((&___setMethod_38), value);
	}

	inline static int32_t get_offset_of_shouldSerializeMethod_39() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468, ___shouldSerializeMethod_39)); }
	inline MethodInfo_t * get_shouldSerializeMethod_39() const { return ___shouldSerializeMethod_39; }
	inline MethodInfo_t ** get_address_of_shouldSerializeMethod_39() { return &___shouldSerializeMethod_39; }
	inline void set_shouldSerializeMethod_39(MethodInfo_t * value)
	{
		___shouldSerializeMethod_39 = value;
		Il2CppCodeGenWriteBarrier((&___shouldSerializeMethod_39), value);
	}

	inline static int32_t get_offset_of_resetMethod_40() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468, ___resetMethod_40)); }
	inline MethodInfo_t * get_resetMethod_40() const { return ___resetMethod_40; }
	inline MethodInfo_t ** get_address_of_resetMethod_40() { return &___resetMethod_40; }
	inline void set_resetMethod_40(MethodInfo_t * value)
	{
		___resetMethod_40 = value;
		Il2CppCodeGenWriteBarrier((&___resetMethod_40), value);
	}

	inline static int32_t get_offset_of_realChangedEvent_41() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468, ___realChangedEvent_41)); }
	inline EventDescriptor_t88602298 * get_realChangedEvent_41() const { return ___realChangedEvent_41; }
	inline EventDescriptor_t88602298 ** get_address_of_realChangedEvent_41() { return &___realChangedEvent_41; }
	inline void set_realChangedEvent_41(EventDescriptor_t88602298 * value)
	{
		___realChangedEvent_41 = value;
		Il2CppCodeGenWriteBarrier((&___realChangedEvent_41), value);
	}

	inline static int32_t get_offset_of_realIPropChangedEvent_42() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468, ___realIPropChangedEvent_42)); }
	inline EventDescriptor_t88602298 * get_realIPropChangedEvent_42() const { return ___realIPropChangedEvent_42; }
	inline EventDescriptor_t88602298 ** get_address_of_realIPropChangedEvent_42() { return &___realIPropChangedEvent_42; }
	inline void set_realIPropChangedEvent_42(EventDescriptor_t88602298 * value)
	{
		___realIPropChangedEvent_42 = value;
		Il2CppCodeGenWriteBarrier((&___realIPropChangedEvent_42), value);
	}

	inline static int32_t get_offset_of_receiverType_43() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468, ___receiverType_43)); }
	inline Type_t * get_receiverType_43() const { return ___receiverType_43; }
	inline Type_t ** get_address_of_receiverType_43() { return &___receiverType_43; }
	inline void set_receiverType_43(Type_t * value)
	{
		___receiverType_43 = value;
		Il2CppCodeGenWriteBarrier((&___receiverType_43), value);
	}
};

struct ReflectPropertyDescriptor_t3323763468_StaticFields
{
public:
	// System.Type[] System.ComponentModel.ReflectPropertyDescriptor::argsNone
	TypeU5BU5D_t3940880105* ___argsNone_17;
	// System.Object System.ComponentModel.ReflectPropertyDescriptor::noValue
	RuntimeObject * ___noValue_18;
	// System.Diagnostics.TraceSwitch System.ComponentModel.ReflectPropertyDescriptor::PropDescCreateSwitch
	TraceSwitch_t3738701686 * ___PropDescCreateSwitch_19;
	// System.Diagnostics.TraceSwitch System.ComponentModel.ReflectPropertyDescriptor::PropDescUsageSwitch
	TraceSwitch_t3738701686 * ___PropDescUsageSwitch_20;
	// System.Int32 System.ComponentModel.ReflectPropertyDescriptor::BitDefaultValueQueried
	int32_t ___BitDefaultValueQueried_21;
	// System.Int32 System.ComponentModel.ReflectPropertyDescriptor::BitGetQueried
	int32_t ___BitGetQueried_22;
	// System.Int32 System.ComponentModel.ReflectPropertyDescriptor::BitSetQueried
	int32_t ___BitSetQueried_23;
	// System.Int32 System.ComponentModel.ReflectPropertyDescriptor::BitShouldSerializeQueried
	int32_t ___BitShouldSerializeQueried_24;
	// System.Int32 System.ComponentModel.ReflectPropertyDescriptor::BitResetQueried
	int32_t ___BitResetQueried_25;
	// System.Int32 System.ComponentModel.ReflectPropertyDescriptor::BitChangedQueried
	int32_t ___BitChangedQueried_26;
	// System.Int32 System.ComponentModel.ReflectPropertyDescriptor::BitIPropChangedQueried
	int32_t ___BitIPropChangedQueried_27;
	// System.Int32 System.ComponentModel.ReflectPropertyDescriptor::BitReadOnlyChecked
	int32_t ___BitReadOnlyChecked_28;
	// System.Int32 System.ComponentModel.ReflectPropertyDescriptor::BitAmbientValueQueried
	int32_t ___BitAmbientValueQueried_29;
	// System.Int32 System.ComponentModel.ReflectPropertyDescriptor::BitSetOnDemand
	int32_t ___BitSetOnDemand_30;

public:
	inline static int32_t get_offset_of_argsNone_17() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468_StaticFields, ___argsNone_17)); }
	inline TypeU5BU5D_t3940880105* get_argsNone_17() const { return ___argsNone_17; }
	inline TypeU5BU5D_t3940880105** get_address_of_argsNone_17() { return &___argsNone_17; }
	inline void set_argsNone_17(TypeU5BU5D_t3940880105* value)
	{
		___argsNone_17 = value;
		Il2CppCodeGenWriteBarrier((&___argsNone_17), value);
	}

	inline static int32_t get_offset_of_noValue_18() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468_StaticFields, ___noValue_18)); }
	inline RuntimeObject * get_noValue_18() const { return ___noValue_18; }
	inline RuntimeObject ** get_address_of_noValue_18() { return &___noValue_18; }
	inline void set_noValue_18(RuntimeObject * value)
	{
		___noValue_18 = value;
		Il2CppCodeGenWriteBarrier((&___noValue_18), value);
	}

	inline static int32_t get_offset_of_PropDescCreateSwitch_19() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468_StaticFields, ___PropDescCreateSwitch_19)); }
	inline TraceSwitch_t3738701686 * get_PropDescCreateSwitch_19() const { return ___PropDescCreateSwitch_19; }
	inline TraceSwitch_t3738701686 ** get_address_of_PropDescCreateSwitch_19() { return &___PropDescCreateSwitch_19; }
	inline void set_PropDescCreateSwitch_19(TraceSwitch_t3738701686 * value)
	{
		___PropDescCreateSwitch_19 = value;
		Il2CppCodeGenWriteBarrier((&___PropDescCreateSwitch_19), value);
	}

	inline static int32_t get_offset_of_PropDescUsageSwitch_20() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468_StaticFields, ___PropDescUsageSwitch_20)); }
	inline TraceSwitch_t3738701686 * get_PropDescUsageSwitch_20() const { return ___PropDescUsageSwitch_20; }
	inline TraceSwitch_t3738701686 ** get_address_of_PropDescUsageSwitch_20() { return &___PropDescUsageSwitch_20; }
	inline void set_PropDescUsageSwitch_20(TraceSwitch_t3738701686 * value)
	{
		___PropDescUsageSwitch_20 = value;
		Il2CppCodeGenWriteBarrier((&___PropDescUsageSwitch_20), value);
	}

	inline static int32_t get_offset_of_BitDefaultValueQueried_21() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468_StaticFields, ___BitDefaultValueQueried_21)); }
	inline int32_t get_BitDefaultValueQueried_21() const { return ___BitDefaultValueQueried_21; }
	inline int32_t* get_address_of_BitDefaultValueQueried_21() { return &___BitDefaultValueQueried_21; }
	inline void set_BitDefaultValueQueried_21(int32_t value)
	{
		___BitDefaultValueQueried_21 = value;
	}

	inline static int32_t get_offset_of_BitGetQueried_22() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468_StaticFields, ___BitGetQueried_22)); }
	inline int32_t get_BitGetQueried_22() const { return ___BitGetQueried_22; }
	inline int32_t* get_address_of_BitGetQueried_22() { return &___BitGetQueried_22; }
	inline void set_BitGetQueried_22(int32_t value)
	{
		___BitGetQueried_22 = value;
	}

	inline static int32_t get_offset_of_BitSetQueried_23() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468_StaticFields, ___BitSetQueried_23)); }
	inline int32_t get_BitSetQueried_23() const { return ___BitSetQueried_23; }
	inline int32_t* get_address_of_BitSetQueried_23() { return &___BitSetQueried_23; }
	inline void set_BitSetQueried_23(int32_t value)
	{
		___BitSetQueried_23 = value;
	}

	inline static int32_t get_offset_of_BitShouldSerializeQueried_24() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468_StaticFields, ___BitShouldSerializeQueried_24)); }
	inline int32_t get_BitShouldSerializeQueried_24() const { return ___BitShouldSerializeQueried_24; }
	inline int32_t* get_address_of_BitShouldSerializeQueried_24() { return &___BitShouldSerializeQueried_24; }
	inline void set_BitShouldSerializeQueried_24(int32_t value)
	{
		___BitShouldSerializeQueried_24 = value;
	}

	inline static int32_t get_offset_of_BitResetQueried_25() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468_StaticFields, ___BitResetQueried_25)); }
	inline int32_t get_BitResetQueried_25() const { return ___BitResetQueried_25; }
	inline int32_t* get_address_of_BitResetQueried_25() { return &___BitResetQueried_25; }
	inline void set_BitResetQueried_25(int32_t value)
	{
		___BitResetQueried_25 = value;
	}

	inline static int32_t get_offset_of_BitChangedQueried_26() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468_StaticFields, ___BitChangedQueried_26)); }
	inline int32_t get_BitChangedQueried_26() const { return ___BitChangedQueried_26; }
	inline int32_t* get_address_of_BitChangedQueried_26() { return &___BitChangedQueried_26; }
	inline void set_BitChangedQueried_26(int32_t value)
	{
		___BitChangedQueried_26 = value;
	}

	inline static int32_t get_offset_of_BitIPropChangedQueried_27() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468_StaticFields, ___BitIPropChangedQueried_27)); }
	inline int32_t get_BitIPropChangedQueried_27() const { return ___BitIPropChangedQueried_27; }
	inline int32_t* get_address_of_BitIPropChangedQueried_27() { return &___BitIPropChangedQueried_27; }
	inline void set_BitIPropChangedQueried_27(int32_t value)
	{
		___BitIPropChangedQueried_27 = value;
	}

	inline static int32_t get_offset_of_BitReadOnlyChecked_28() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468_StaticFields, ___BitReadOnlyChecked_28)); }
	inline int32_t get_BitReadOnlyChecked_28() const { return ___BitReadOnlyChecked_28; }
	inline int32_t* get_address_of_BitReadOnlyChecked_28() { return &___BitReadOnlyChecked_28; }
	inline void set_BitReadOnlyChecked_28(int32_t value)
	{
		___BitReadOnlyChecked_28 = value;
	}

	inline static int32_t get_offset_of_BitAmbientValueQueried_29() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468_StaticFields, ___BitAmbientValueQueried_29)); }
	inline int32_t get_BitAmbientValueQueried_29() const { return ___BitAmbientValueQueried_29; }
	inline int32_t* get_address_of_BitAmbientValueQueried_29() { return &___BitAmbientValueQueried_29; }
	inline void set_BitAmbientValueQueried_29(int32_t value)
	{
		___BitAmbientValueQueried_29 = value;
	}

	inline static int32_t get_offset_of_BitSetOnDemand_30() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t3323763468_StaticFields, ___BitSetOnDemand_30)); }
	inline int32_t get_BitSetOnDemand_30() const { return ___BitSetOnDemand_30; }
	inline int32_t* get_address_of_BitSetOnDemand_30() { return &___BitSetOnDemand_30; }
	inline void set_BitSetOnDemand_30(int32_t value)
	{
		___BitSetOnDemand_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTPROPERTYDESCRIPTOR_T3323763468_H
#ifndef REFLECTTYPEDESCRIPTIONPROVIDER_T2247041319_H
#define REFLECTTYPEDESCRIPTIONPROVIDER_T2247041319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectTypeDescriptionProvider
struct  ReflectTypeDescriptionProvider_t2247041319  : public TypeDescriptionProvider_t3232077895
{
public:
	// System.Collections.Hashtable System.ComponentModel.ReflectTypeDescriptionProvider::_typeData
	Hashtable_t1853889766 * ____typeData_2;

public:
	inline static int32_t get_offset_of__typeData_2() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319, ____typeData_2)); }
	inline Hashtable_t1853889766 * get__typeData_2() const { return ____typeData_2; }
	inline Hashtable_t1853889766 ** get_address_of__typeData_2() { return &____typeData_2; }
	inline void set__typeData_2(Hashtable_t1853889766 * value)
	{
		____typeData_2 = value;
		Il2CppCodeGenWriteBarrier((&____typeData_2), value);
	}
};

struct ReflectTypeDescriptionProvider_t2247041319_StaticFields
{
public:
	// System.Type[] System.ComponentModel.ReflectTypeDescriptionProvider::_typeConstructor
	TypeU5BU5D_t3940880105* ____typeConstructor_3;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.ReflectTypeDescriptionProvider::_editorTables
	Hashtable_t1853889766 * ____editorTables_4;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.ReflectTypeDescriptionProvider::_intrinsicTypeConverters
	Hashtable_t1853889766 * ____intrinsicTypeConverters_5;
	// System.Object System.ComponentModel.ReflectTypeDescriptionProvider::_intrinsicReferenceKey
	RuntimeObject * ____intrinsicReferenceKey_6;
	// System.Object System.ComponentModel.ReflectTypeDescriptionProvider::_intrinsicNullableKey
	RuntimeObject * ____intrinsicNullableKey_7;
	// System.Object System.ComponentModel.ReflectTypeDescriptionProvider::_dictionaryKey
	RuntimeObject * ____dictionaryKey_8;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.ReflectTypeDescriptionProvider::_propertyCache
	Hashtable_t1853889766 * ____propertyCache_9;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.ReflectTypeDescriptionProvider::_eventCache
	Hashtable_t1853889766 * ____eventCache_10;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.ReflectTypeDescriptionProvider::_attributeCache
	Hashtable_t1853889766 * ____attributeCache_11;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.ReflectTypeDescriptionProvider::_extendedPropertyCache
	Hashtable_t1853889766 * ____extendedPropertyCache_12;
	// System.Guid System.ComponentModel.ReflectTypeDescriptionProvider::_extenderProviderKey
	Guid_t  ____extenderProviderKey_13;
	// System.Guid System.ComponentModel.ReflectTypeDescriptionProvider::_extenderPropertiesKey
	Guid_t  ____extenderPropertiesKey_14;
	// System.Guid System.ComponentModel.ReflectTypeDescriptionProvider::_extenderProviderPropertiesKey
	Guid_t  ____extenderProviderPropertiesKey_15;
	// System.Type[] System.ComponentModel.ReflectTypeDescriptionProvider::_skipInterfaceAttributeList
	TypeU5BU5D_t3940880105* ____skipInterfaceAttributeList_16;
	// System.Object System.ComponentModel.ReflectTypeDescriptionProvider::_internalSyncObject
	RuntimeObject * ____internalSyncObject_17;

public:
	inline static int32_t get_offset_of__typeConstructor_3() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____typeConstructor_3)); }
	inline TypeU5BU5D_t3940880105* get__typeConstructor_3() const { return ____typeConstructor_3; }
	inline TypeU5BU5D_t3940880105** get_address_of__typeConstructor_3() { return &____typeConstructor_3; }
	inline void set__typeConstructor_3(TypeU5BU5D_t3940880105* value)
	{
		____typeConstructor_3 = value;
		Il2CppCodeGenWriteBarrier((&____typeConstructor_3), value);
	}

	inline static int32_t get_offset_of__editorTables_4() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____editorTables_4)); }
	inline Hashtable_t1853889766 * get__editorTables_4() const { return ____editorTables_4; }
	inline Hashtable_t1853889766 ** get_address_of__editorTables_4() { return &____editorTables_4; }
	inline void set__editorTables_4(Hashtable_t1853889766 * value)
	{
		____editorTables_4 = value;
		Il2CppCodeGenWriteBarrier((&____editorTables_4), value);
	}

	inline static int32_t get_offset_of__intrinsicTypeConverters_5() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____intrinsicTypeConverters_5)); }
	inline Hashtable_t1853889766 * get__intrinsicTypeConverters_5() const { return ____intrinsicTypeConverters_5; }
	inline Hashtable_t1853889766 ** get_address_of__intrinsicTypeConverters_5() { return &____intrinsicTypeConverters_5; }
	inline void set__intrinsicTypeConverters_5(Hashtable_t1853889766 * value)
	{
		____intrinsicTypeConverters_5 = value;
		Il2CppCodeGenWriteBarrier((&____intrinsicTypeConverters_5), value);
	}

	inline static int32_t get_offset_of__intrinsicReferenceKey_6() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____intrinsicReferenceKey_6)); }
	inline RuntimeObject * get__intrinsicReferenceKey_6() const { return ____intrinsicReferenceKey_6; }
	inline RuntimeObject ** get_address_of__intrinsicReferenceKey_6() { return &____intrinsicReferenceKey_6; }
	inline void set__intrinsicReferenceKey_6(RuntimeObject * value)
	{
		____intrinsicReferenceKey_6 = value;
		Il2CppCodeGenWriteBarrier((&____intrinsicReferenceKey_6), value);
	}

	inline static int32_t get_offset_of__intrinsicNullableKey_7() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____intrinsicNullableKey_7)); }
	inline RuntimeObject * get__intrinsicNullableKey_7() const { return ____intrinsicNullableKey_7; }
	inline RuntimeObject ** get_address_of__intrinsicNullableKey_7() { return &____intrinsicNullableKey_7; }
	inline void set__intrinsicNullableKey_7(RuntimeObject * value)
	{
		____intrinsicNullableKey_7 = value;
		Il2CppCodeGenWriteBarrier((&____intrinsicNullableKey_7), value);
	}

	inline static int32_t get_offset_of__dictionaryKey_8() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____dictionaryKey_8)); }
	inline RuntimeObject * get__dictionaryKey_8() const { return ____dictionaryKey_8; }
	inline RuntimeObject ** get_address_of__dictionaryKey_8() { return &____dictionaryKey_8; }
	inline void set__dictionaryKey_8(RuntimeObject * value)
	{
		____dictionaryKey_8 = value;
		Il2CppCodeGenWriteBarrier((&____dictionaryKey_8), value);
	}

	inline static int32_t get_offset_of__propertyCache_9() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____propertyCache_9)); }
	inline Hashtable_t1853889766 * get__propertyCache_9() const { return ____propertyCache_9; }
	inline Hashtable_t1853889766 ** get_address_of__propertyCache_9() { return &____propertyCache_9; }
	inline void set__propertyCache_9(Hashtable_t1853889766 * value)
	{
		____propertyCache_9 = value;
		Il2CppCodeGenWriteBarrier((&____propertyCache_9), value);
	}

	inline static int32_t get_offset_of__eventCache_10() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____eventCache_10)); }
	inline Hashtable_t1853889766 * get__eventCache_10() const { return ____eventCache_10; }
	inline Hashtable_t1853889766 ** get_address_of__eventCache_10() { return &____eventCache_10; }
	inline void set__eventCache_10(Hashtable_t1853889766 * value)
	{
		____eventCache_10 = value;
		Il2CppCodeGenWriteBarrier((&____eventCache_10), value);
	}

	inline static int32_t get_offset_of__attributeCache_11() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____attributeCache_11)); }
	inline Hashtable_t1853889766 * get__attributeCache_11() const { return ____attributeCache_11; }
	inline Hashtable_t1853889766 ** get_address_of__attributeCache_11() { return &____attributeCache_11; }
	inline void set__attributeCache_11(Hashtable_t1853889766 * value)
	{
		____attributeCache_11 = value;
		Il2CppCodeGenWriteBarrier((&____attributeCache_11), value);
	}

	inline static int32_t get_offset_of__extendedPropertyCache_12() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____extendedPropertyCache_12)); }
	inline Hashtable_t1853889766 * get__extendedPropertyCache_12() const { return ____extendedPropertyCache_12; }
	inline Hashtable_t1853889766 ** get_address_of__extendedPropertyCache_12() { return &____extendedPropertyCache_12; }
	inline void set__extendedPropertyCache_12(Hashtable_t1853889766 * value)
	{
		____extendedPropertyCache_12 = value;
		Il2CppCodeGenWriteBarrier((&____extendedPropertyCache_12), value);
	}

	inline static int32_t get_offset_of__extenderProviderKey_13() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____extenderProviderKey_13)); }
	inline Guid_t  get__extenderProviderKey_13() const { return ____extenderProviderKey_13; }
	inline Guid_t * get_address_of__extenderProviderKey_13() { return &____extenderProviderKey_13; }
	inline void set__extenderProviderKey_13(Guid_t  value)
	{
		____extenderProviderKey_13 = value;
	}

	inline static int32_t get_offset_of__extenderPropertiesKey_14() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____extenderPropertiesKey_14)); }
	inline Guid_t  get__extenderPropertiesKey_14() const { return ____extenderPropertiesKey_14; }
	inline Guid_t * get_address_of__extenderPropertiesKey_14() { return &____extenderPropertiesKey_14; }
	inline void set__extenderPropertiesKey_14(Guid_t  value)
	{
		____extenderPropertiesKey_14 = value;
	}

	inline static int32_t get_offset_of__extenderProviderPropertiesKey_15() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____extenderProviderPropertiesKey_15)); }
	inline Guid_t  get__extenderProviderPropertiesKey_15() const { return ____extenderProviderPropertiesKey_15; }
	inline Guid_t * get_address_of__extenderProviderPropertiesKey_15() { return &____extenderProviderPropertiesKey_15; }
	inline void set__extenderProviderPropertiesKey_15(Guid_t  value)
	{
		____extenderProviderPropertiesKey_15 = value;
	}

	inline static int32_t get_offset_of__skipInterfaceAttributeList_16() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____skipInterfaceAttributeList_16)); }
	inline TypeU5BU5D_t3940880105* get__skipInterfaceAttributeList_16() const { return ____skipInterfaceAttributeList_16; }
	inline TypeU5BU5D_t3940880105** get_address_of__skipInterfaceAttributeList_16() { return &____skipInterfaceAttributeList_16; }
	inline void set__skipInterfaceAttributeList_16(TypeU5BU5D_t3940880105* value)
	{
		____skipInterfaceAttributeList_16 = value;
		Il2CppCodeGenWriteBarrier((&____skipInterfaceAttributeList_16), value);
	}

	inline static int32_t get_offset_of__internalSyncObject_17() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____internalSyncObject_17)); }
	inline RuntimeObject * get__internalSyncObject_17() const { return ____internalSyncObject_17; }
	inline RuntimeObject ** get_address_of__internalSyncObject_17() { return &____internalSyncObject_17; }
	inline void set__internalSyncObject_17(RuntimeObject * value)
	{
		____internalSyncObject_17 = value;
		Il2CppCodeGenWriteBarrier((&____internalSyncObject_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTTYPEDESCRIPTIONPROVIDER_T2247041319_H
#ifndef RUNWORKERCOMPLETEDEVENTARGS_T4030028402_H
#define RUNWORKERCOMPLETEDEVENTARGS_T4030028402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RunWorkerCompletedEventArgs
struct  RunWorkerCompletedEventArgs_t4030028402  : public AsyncCompletedEventArgs_t1863481821
{
public:
	// System.Object System.ComponentModel.RunWorkerCompletedEventArgs::result
	RuntimeObject * ___result_4;

public:
	inline static int32_t get_offset_of_result_4() { return static_cast<int32_t>(offsetof(RunWorkerCompletedEventArgs_t4030028402, ___result_4)); }
	inline RuntimeObject * get_result_4() const { return ___result_4; }
	inline RuntimeObject ** get_address_of_result_4() { return &___result_4; }
	inline void set_result_4(RuntimeObject * value)
	{
		___result_4 = value;
		Il2CppCodeGenWriteBarrier((&___result_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNWORKERCOMPLETEDEVENTARGS_T4030028402_H
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
#ifndef SIMPLEPROPERTYDESCRIPTOR_T4116423955_H
#define SIMPLEPROPERTYDESCRIPTOR_T4116423955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter/SimplePropertyDescriptor
struct  SimplePropertyDescriptor_t4116423955  : public PropertyDescriptor_t3244362832
{
public:
	// System.Type System.ComponentModel.TypeConverter/SimplePropertyDescriptor::componentType
	Type_t * ___componentType_17;
	// System.Type System.ComponentModel.TypeConverter/SimplePropertyDescriptor::propertyType
	Type_t * ___propertyType_18;

public:
	inline static int32_t get_offset_of_componentType_17() { return static_cast<int32_t>(offsetof(SimplePropertyDescriptor_t4116423955, ___componentType_17)); }
	inline Type_t * get_componentType_17() const { return ___componentType_17; }
	inline Type_t ** get_address_of_componentType_17() { return &___componentType_17; }
	inline void set_componentType_17(Type_t * value)
	{
		___componentType_17 = value;
		Il2CppCodeGenWriteBarrier((&___componentType_17), value);
	}

	inline static int32_t get_offset_of_propertyType_18() { return static_cast<int32_t>(offsetof(SimplePropertyDescriptor_t4116423955, ___propertyType_18)); }
	inline Type_t * get_propertyType_18() const { return ___propertyType_18; }
	inline Type_t ** get_address_of_propertyType_18() { return &___propertyType_18; }
	inline void set_propertyType_18(Type_t * value)
	{
		___propertyType_18 = value;
		Il2CppCodeGenWriteBarrier((&___propertyType_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEPROPERTYDESCRIPTOR_T4116423955_H
#ifndef TOOLBOXITEMFILTERTYPE_T3870514709_H
#define TOOLBOXITEMFILTERTYPE_T3870514709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ToolboxItemFilterType
struct  ToolboxItemFilterType_t3870514709 
{
public:
	// System.Int32 System.ComponentModel.ToolboxItemFilterType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToolboxItemFilterType_t3870514709, ___value___2)); }
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
#endif // TOOLBOXITEMFILTERTYPE_T3870514709_H
#ifndef TIMESPANCONVERTER_T3504031848_H
#define TIMESPANCONVERTER_T3504031848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TimeSpanConverter
struct  TimeSpanConverter_t3504031848  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANCONVERTER_T3504031848_H
#ifndef INVALIDASYNCHRONOUSSTATEEXCEPTION_T1889442469_H
#define INVALIDASYNCHRONOUSSTATEEXCEPTION_T1889442469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InvalidAsynchronousStateException
struct  InvalidAsynchronousStateException_t1889442469  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDASYNCHRONOUSSTATEEXCEPTION_T1889442469_H
#ifndef STRINGCONVERTER_T3216726494_H
#define STRINGCONVERTER_T3216726494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.StringConverter
struct  StringConverter_t3216726494  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCONVERTER_T3216726494_H
#ifndef TOOLBOXITEMFILTERATTRIBUTE_T2990581383_H
#define TOOLBOXITEMFILTERATTRIBUTE_T2990581383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ToolboxItemFilterAttribute
struct  ToolboxItemFilterAttribute_t2990581383  : public Attribute_t861562559
{
public:
	// System.ComponentModel.ToolboxItemFilterType System.ComponentModel.ToolboxItemFilterAttribute::filterType
	int32_t ___filterType_0;
	// System.String System.ComponentModel.ToolboxItemFilterAttribute::filterString
	String_t* ___filterString_1;
	// System.String System.ComponentModel.ToolboxItemFilterAttribute::typeId
	String_t* ___typeId_2;

public:
	inline static int32_t get_offset_of_filterType_0() { return static_cast<int32_t>(offsetof(ToolboxItemFilterAttribute_t2990581383, ___filterType_0)); }
	inline int32_t get_filterType_0() const { return ___filterType_0; }
	inline int32_t* get_address_of_filterType_0() { return &___filterType_0; }
	inline void set_filterType_0(int32_t value)
	{
		___filterType_0 = value;
	}

	inline static int32_t get_offset_of_filterString_1() { return static_cast<int32_t>(offsetof(ToolboxItemFilterAttribute_t2990581383, ___filterString_1)); }
	inline String_t* get_filterString_1() const { return ___filterString_1; }
	inline String_t** get_address_of_filterString_1() { return &___filterString_1; }
	inline void set_filterString_1(String_t* value)
	{
		___filterString_1 = value;
		Il2CppCodeGenWriteBarrier((&___filterString_1), value);
	}

	inline static int32_t get_offset_of_typeId_2() { return static_cast<int32_t>(offsetof(ToolboxItemFilterAttribute_t2990581383, ___typeId_2)); }
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
#endif // TOOLBOXITEMFILTERATTRIBUTE_T2990581383_H
#ifndef INVALIDENUMARGUMENTEXCEPTION_T2634129013_H
#define INVALIDENUMARGUMENTEXCEPTION_T2634129013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InvalidEnumArgumentException
struct  InvalidEnumArgumentException_t2634129013  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDENUMARGUMENTEXCEPTION_T2634129013_H
#ifndef REFERENCECONVERTER_T1811933861_H
#define REFERENCECONVERTER_T1811933861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t1811933861  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::type
	Type_t * ___type_3;

public:
	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(ReferenceConverter_t1811933861, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}
};

struct ReferenceConverter_t1811933861_StaticFields
{
public:
	// System.String System.ComponentModel.ReferenceConverter::none
	String_t* ___none_2;

public:
	inline static int32_t get_offset_of_none_2() { return static_cast<int32_t>(offsetof(ReferenceConverter_t1811933861_StaticFields, ___none_2)); }
	inline String_t* get_none_2() const { return ___none_2; }
	inline String_t** get_address_of_none_2() { return &___none_2; }
	inline void set_none_2(String_t* value)
	{
		___none_2 = value;
		Il2CppCodeGenWriteBarrier((&___none_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECONVERTER_T1811933861_H
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
#ifndef CLRLICENSECONTEXT_T1891174193_H
#define CLRLICENSECONTEXT_T1891174193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseManager/LicenseInteropHelper/CLRLicenseContext
struct  CLRLicenseContext_t1891174193  : public LicenseContext_t2141136407
{
public:
	// System.ComponentModel.LicenseUsageMode System.ComponentModel.LicenseManager/LicenseInteropHelper/CLRLicenseContext::usageMode
	int32_t ___usageMode_0;
	// System.Type System.ComponentModel.LicenseManager/LicenseInteropHelper/CLRLicenseContext::type
	Type_t * ___type_1;
	// System.String System.ComponentModel.LicenseManager/LicenseInteropHelper/CLRLicenseContext::key
	String_t* ___key_2;

public:
	inline static int32_t get_offset_of_usageMode_0() { return static_cast<int32_t>(offsetof(CLRLicenseContext_t1891174193, ___usageMode_0)); }
	inline int32_t get_usageMode_0() const { return ___usageMode_0; }
	inline int32_t* get_address_of_usageMode_0() { return &___usageMode_0; }
	inline void set_usageMode_0(int32_t value)
	{
		___usageMode_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(CLRLicenseContext_t1891174193, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(CLRLicenseContext_t1891174193, ___key_2)); }
	inline String_t* get_key_2() const { return ___key_2; }
	inline String_t** get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(String_t* value)
	{
		___key_2 = value;
		Il2CppCodeGenWriteBarrier((&___key_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLRLICENSECONTEXT_T1891174193_H
#ifndef CHARDESCRIPTOR_T2334124477_H
#define CHARDESCRIPTOR_T2334124477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MaskedTextProvider/CharDescriptor
struct  CharDescriptor_t2334124477  : public RuntimeObject
{
public:
	// System.Int32 System.ComponentModel.MaskedTextProvider/CharDescriptor::MaskPosition
	int32_t ___MaskPosition_0;
	// System.ComponentModel.MaskedTextProvider/CaseConversion System.ComponentModel.MaskedTextProvider/CharDescriptor::CaseConversion
	int32_t ___CaseConversion_1;
	// System.ComponentModel.MaskedTextProvider/CharType System.ComponentModel.MaskedTextProvider/CharDescriptor::CharType
	int32_t ___CharType_2;
	// System.Boolean System.ComponentModel.MaskedTextProvider/CharDescriptor::IsAssigned
	bool ___IsAssigned_3;

public:
	inline static int32_t get_offset_of_MaskPosition_0() { return static_cast<int32_t>(offsetof(CharDescriptor_t2334124477, ___MaskPosition_0)); }
	inline int32_t get_MaskPosition_0() const { return ___MaskPosition_0; }
	inline int32_t* get_address_of_MaskPosition_0() { return &___MaskPosition_0; }
	inline void set_MaskPosition_0(int32_t value)
	{
		___MaskPosition_0 = value;
	}

	inline static int32_t get_offset_of_CaseConversion_1() { return static_cast<int32_t>(offsetof(CharDescriptor_t2334124477, ___CaseConversion_1)); }
	inline int32_t get_CaseConversion_1() const { return ___CaseConversion_1; }
	inline int32_t* get_address_of_CaseConversion_1() { return &___CaseConversion_1; }
	inline void set_CaseConversion_1(int32_t value)
	{
		___CaseConversion_1 = value;
	}

	inline static int32_t get_offset_of_CharType_2() { return static_cast<int32_t>(offsetof(CharDescriptor_t2334124477, ___CharType_2)); }
	inline int32_t get_CharType_2() const { return ___CharType_2; }
	inline int32_t* get_address_of_CharType_2() { return &___CharType_2; }
	inline void set_CharType_2(int32_t value)
	{
		___CharType_2 = value;
	}

	inline static int32_t get_offset_of_IsAssigned_3() { return static_cast<int32_t>(offsetof(CharDescriptor_t2334124477, ___IsAssigned_3)); }
	inline bool get_IsAssigned_3() const { return ___IsAssigned_3; }
	inline bool* get_address_of_IsAssigned_3() { return &___IsAssigned_3; }
	inline void set_IsAssigned_3(bool value)
	{
		___IsAssigned_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARDESCRIPTOR_T2334124477_H
#ifndef LISTSORTDESCRIPTION_T2013348659_H
#define LISTSORTDESCRIPTION_T2013348659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDescription
struct  ListSortDescription_t2013348659  : public RuntimeObject
{
public:
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListSortDescription::property
	PropertyDescriptor_t3244362832 * ___property_0;
	// System.ComponentModel.ListSortDirection System.ComponentModel.ListSortDescription::sortDirection
	int32_t ___sortDirection_1;

public:
	inline static int32_t get_offset_of_property_0() { return static_cast<int32_t>(offsetof(ListSortDescription_t2013348659, ___property_0)); }
	inline PropertyDescriptor_t3244362832 * get_property_0() const { return ___property_0; }
	inline PropertyDescriptor_t3244362832 ** get_address_of_property_0() { return &___property_0; }
	inline void set_property_0(PropertyDescriptor_t3244362832 * value)
	{
		___property_0 = value;
		Il2CppCodeGenWriteBarrier((&___property_0), value);
	}

	inline static int32_t get_offset_of_sortDirection_1() { return static_cast<int32_t>(offsetof(ListSortDescription_t2013348659, ___sortDirection_1)); }
	inline int32_t get_sortDirection_1() const { return ___sortDirection_1; }
	inline int32_t* get_address_of_sortDirection_1() { return &___sortDirection_1; }
	inline void set_sortDirection_1(int32_t value)
	{
		___sortDirection_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTSORTDESCRIPTION_T2013348659_H
#ifndef MULTILINESTRINGCONVERTER_T1596147706_H
#define MULTILINESTRINGCONVERTER_T1596147706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MultilineStringConverter
struct  MultilineStringConverter_t1596147706  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTILINESTRINGCONVERTER_T1596147706_H
#ifndef NULLABLECONVERTER_T1985728604_H
#define NULLABLECONVERTER_T1985728604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NullableConverter
struct  NullableConverter_t1985728604  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.NullableConverter::nullableType
	Type_t * ___nullableType_2;
	// System.Type System.ComponentModel.NullableConverter::simpleType
	Type_t * ___simpleType_3;
	// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::simpleTypeConverter
	TypeConverter_t2249118273 * ___simpleTypeConverter_4;

public:
	inline static int32_t get_offset_of_nullableType_2() { return static_cast<int32_t>(offsetof(NullableConverter_t1985728604, ___nullableType_2)); }
	inline Type_t * get_nullableType_2() const { return ___nullableType_2; }
	inline Type_t ** get_address_of_nullableType_2() { return &___nullableType_2; }
	inline void set_nullableType_2(Type_t * value)
	{
		___nullableType_2 = value;
		Il2CppCodeGenWriteBarrier((&___nullableType_2), value);
	}

	inline static int32_t get_offset_of_simpleType_3() { return static_cast<int32_t>(offsetof(NullableConverter_t1985728604, ___simpleType_3)); }
	inline Type_t * get_simpleType_3() const { return ___simpleType_3; }
	inline Type_t ** get_address_of_simpleType_3() { return &___simpleType_3; }
	inline void set_simpleType_3(Type_t * value)
	{
		___simpleType_3 = value;
		Il2CppCodeGenWriteBarrier((&___simpleType_3), value);
	}

	inline static int32_t get_offset_of_simpleTypeConverter_4() { return static_cast<int32_t>(offsetof(NullableConverter_t1985728604, ___simpleTypeConverter_4)); }
	inline TypeConverter_t2249118273 * get_simpleTypeConverter_4() const { return ___simpleTypeConverter_4; }
	inline TypeConverter_t2249118273 ** get_address_of_simpleTypeConverter_4() { return &___simpleTypeConverter_4; }
	inline void set_simpleTypeConverter_4(TypeConverter_t2249118273 * value)
	{
		___simpleTypeConverter_4 = value;
		Il2CppCodeGenWriteBarrier((&___simpleTypeConverter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLECONVERTER_T1985728604_H
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
#ifndef LISTCHANGEDEVENTARGS_T1328006001_H
#define LISTCHANGEDEVENTARGS_T1328006001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListChangedEventArgs
struct  ListChangedEventArgs_t1328006001  : public EventArgs_t3591816995
{
public:
	// System.ComponentModel.ListChangedType System.ComponentModel.ListChangedEventArgs::listChangedType
	int32_t ___listChangedType_1;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::newIndex
	int32_t ___newIndex_2;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::oldIndex
	int32_t ___oldIndex_3;
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListChangedEventArgs::propDesc
	PropertyDescriptor_t3244362832 * ___propDesc_4;

public:
	inline static int32_t get_offset_of_listChangedType_1() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t1328006001, ___listChangedType_1)); }
	inline int32_t get_listChangedType_1() const { return ___listChangedType_1; }
	inline int32_t* get_address_of_listChangedType_1() { return &___listChangedType_1; }
	inline void set_listChangedType_1(int32_t value)
	{
		___listChangedType_1 = value;
	}

	inline static int32_t get_offset_of_newIndex_2() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t1328006001, ___newIndex_2)); }
	inline int32_t get_newIndex_2() const { return ___newIndex_2; }
	inline int32_t* get_address_of_newIndex_2() { return &___newIndex_2; }
	inline void set_newIndex_2(int32_t value)
	{
		___newIndex_2 = value;
	}

	inline static int32_t get_offset_of_oldIndex_3() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t1328006001, ___oldIndex_3)); }
	inline int32_t get_oldIndex_3() const { return ___oldIndex_3; }
	inline int32_t* get_address_of_oldIndex_3() { return &___oldIndex_3; }
	inline void set_oldIndex_3(int32_t value)
	{
		___oldIndex_3 = value;
	}

	inline static int32_t get_offset_of_propDesc_4() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t1328006001, ___propDesc_4)); }
	inline PropertyDescriptor_t3244362832 * get_propDesc_4() const { return ___propDesc_4; }
	inline PropertyDescriptor_t3244362832 ** get_address_of_propDesc_4() { return &___propDesc_4; }
	inline void set_propDesc_4(PropertyDescriptor_t3244362832 * value)
	{
		___propDesc_4 = value;
		Il2CppCodeGenWriteBarrier((&___propDesc_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTCHANGEDEVENTARGS_T1328006001_H
#ifndef SINGLECONVERTER_T902207630_H
#define SINGLECONVERTER_T902207630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SingleConverter
struct  SingleConverter_t902207630  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECONVERTER_T902207630_H
#ifndef PROPERTYCHANGEDEVENTHANDLER_T3836340606_H
#define PROPERTYCHANGEDEVENTHANDLER_T3836340606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangedEventHandler
struct  PropertyChangedEventHandler_t3836340606  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGEDEVENTHANDLER_T3836340606_H
#ifndef INT16CONVERTER_T1119562914_H
#define INT16CONVERTER_T1119562914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int16Converter
struct  Int16Converter_t1119562914  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16CONVERTER_T1119562914_H
#ifndef INT64CONVERTER_T1092099567_H
#define INT64CONVERTER_T1092099567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int64Converter
struct  Int64Converter_t1092099567  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64CONVERTER_T1092099567_H
#ifndef INT32CONVERTER_T677227065_H
#define INT32CONVERTER_T677227065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int32Converter
struct  Int32Converter_t677227065  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32CONVERTER_T677227065_H
#ifndef PROGRESSCHANGEDEVENTHANDLER_T1213062803_H
#define PROGRESSCHANGEDEVENTHANDLER_T1213062803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ProgressChangedEventHandler
struct  ProgressChangedEventHandler_t1213062803  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROGRESSCHANGEDEVENTHANDLER_T1213062803_H
#ifndef RUNWORKERCOMPLETEDEVENTHANDLER_T2386199656_H
#define RUNWORKERCOMPLETEDEVENTHANDLER_T2386199656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RunWorkerCompletedEventHandler
struct  RunWorkerCompletedEventHandler_t2386199656  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNWORKERCOMPLETEDEVENTHANDLER_T2386199656_H
#ifndef REFRESHEVENTHANDLER_T3637242902_H
#define REFRESHEVENTHANDLER_T3637242902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshEventHandler
struct  RefreshEventHandler_t3637242902  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHEVENTHANDLER_T3637242902_H
#ifndef SBYTECONVERTER_T2970182448_H
#define SBYTECONVERTER_T2970182448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SByteConverter
struct  SByteConverter_t2970182448  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECONVERTER_T2970182448_H
#ifndef PROPERTYCHANGINGEVENTHANDLER_T2830353497_H
#define PROPERTYCHANGINGEVENTHANDLER_T2830353497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangingEventHandler
struct  PropertyChangingEventHandler_t2830353497  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGINGEVENTHANDLER_T2830353497_H
#ifndef LISTCHANGEDEVENTHANDLER_T1703970447_H
#define LISTCHANGEDEVENTHANDLER_T1703970447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListChangedEventHandler
struct  ListChangedEventHandler_t1703970447  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTCHANGEDEVENTHANDLER_T1703970447_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2300 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2301 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2302 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2303 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2304 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2305 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2306 = { sizeof (ImmutableObjectAttribute_t2959712128), -1, sizeof(ImmutableObjectAttribute_t2959712128_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2306[4] = 
{
	ImmutableObjectAttribute_t2959712128_StaticFields::get_offset_of_Yes_0(),
	ImmutableObjectAttribute_t2959712128_StaticFields::get_offset_of_No_1(),
	ImmutableObjectAttribute_t2959712128_StaticFields::get_offset_of_Default_2(),
	ImmutableObjectAttribute_t2959712128::get_offset_of_immutable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2307 = { sizeof (InitializationEventAttribute_t1076550734), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2307[1] = 
{
	InitializationEventAttribute_t1076550734::get_offset_of_eventName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2308 = { sizeof (InstallerTypeAttribute_t3233088727), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2308[1] = 
{
	InstallerTypeAttribute_t3233088727::get_offset_of__typeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2309 = { sizeof (InstanceCreationEditor_t238900532), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2310 = { sizeof (Int16Converter_t1119562914), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2311 = { sizeof (Int32Converter_t677227065), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2312 = { sizeof (Int64Converter_t1092099567), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2313 = { sizeof (IntSecurity_t1973073266), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2314 = { sizeof (InvalidAsynchronousStateException_t1889442469), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2315 = { sizeof (InvalidEnumArgumentException_t2634129013), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2316 = { sizeof (LicFileLicenseProvider_t3520472243), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2317 = { sizeof (LicFileLicense_t2279240837), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2317[1] = 
{
	LicFileLicense_t2279240837::get_offset_of_key_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2318 = { sizeof (License_t2258946041), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2319 = { sizeof (LicenseContext_t2141136407), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2320 = { sizeof (LicenseException_t2803495799), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2320[2] = 
{
	LicenseException_t2803495799::get_offset_of_type_17(),
	LicenseException_t2803495799::get_offset_of_instance_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2321 = { sizeof (LicenseManager_t19983147), -1, sizeof(LicenseManager_t19983147_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2321[6] = 
{
	LicenseManager_t19983147_StaticFields::get_offset_of_selfLock_0(),
	LicenseManager_t19983147_StaticFields::get_offset_of_context_1(),
	LicenseManager_t19983147_StaticFields::get_offset_of_contextLockHolder_2(),
	LicenseManager_t19983147_StaticFields::get_offset_of_providers_3(),
	LicenseManager_t19983147_StaticFields::get_offset_of_providerInstances_4(),
	LicenseManager_t19983147_StaticFields::get_offset_of_internalSyncObject_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2322 = { sizeof (LicenseInteropHelper_t4104616646), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2322[7] = 
{
	0,
	0,
	0,
	0,
	LicenseInteropHelper_t4104616646::get_offset_of_helperContext_4(),
	LicenseInteropHelper_t4104616646::get_offset_of_savedLicenseContext_5(),
	LicenseInteropHelper_t4104616646::get_offset_of_savedType_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2323 = { sizeof (CLRLicenseContext_t1891174193), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2323[3] = 
{
	CLRLicenseContext_t1891174193::get_offset_of_usageMode_0(),
	CLRLicenseContext_t1891174193::get_offset_of_type_1(),
	CLRLicenseContext_t1891174193::get_offset_of_key_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2324 = { sizeof (LicenseProvider_t1830579869), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2325 = { sizeof (LicenseProviderAttribute_t1257937162), -1, sizeof(LicenseProviderAttribute_t1257937162_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2325[3] = 
{
	LicenseProviderAttribute_t1257937162_StaticFields::get_offset_of_Default_0(),
	LicenseProviderAttribute_t1257937162::get_offset_of_licenseProviderType_1(),
	LicenseProviderAttribute_t1257937162::get_offset_of_licenseProviderName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2326 = { sizeof (LicenseUsageMode_t830309198)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2326[3] = 
{
	LicenseUsageMode_t830309198::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2327 = { sizeof (ListBindableAttribute_t2461184386), -1, sizeof(ListBindableAttribute_t2461184386_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2327[5] = 
{
	ListBindableAttribute_t2461184386_StaticFields::get_offset_of_Yes_0(),
	ListBindableAttribute_t2461184386_StaticFields::get_offset_of_No_1(),
	ListBindableAttribute_t2461184386_StaticFields::get_offset_of_Default_2(),
	ListBindableAttribute_t2461184386::get_offset_of_listBindable_3(),
	ListBindableAttribute_t2461184386::get_offset_of_isDefault_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2328 = { sizeof (ListChangedEventArgs_t1328006001), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2328[4] = 
{
	ListChangedEventArgs_t1328006001::get_offset_of_listChangedType_1(),
	ListChangedEventArgs_t1328006001::get_offset_of_newIndex_2(),
	ListChangedEventArgs_t1328006001::get_offset_of_oldIndex_3(),
	ListChangedEventArgs_t1328006001::get_offset_of_propDesc_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2329 = { sizeof (ListChangedEventHandler_t1703970447), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2330 = { sizeof (ListChangedType_t2971046703)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2330[9] = 
{
	ListChangedType_t2971046703::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2331 = { sizeof (ListSortDescription_t2013348659), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2331[2] = 
{
	ListSortDescription_t2013348659::get_offset_of_property_0(),
	ListSortDescription_t2013348659::get_offset_of_sortDirection_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2332 = { sizeof (ListSortDescriptionCollection_t2955388176), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2332[1] = 
{
	ListSortDescriptionCollection_t2955388176::get_offset_of_sorts_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2333 = { sizeof (ListSortDirection_t852779204)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2333[3] = 
{
	ListSortDirection_t852779204::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2334 = { sizeof (LocalizableAttribute_t3478561129), -1, sizeof(LocalizableAttribute_t3478561129_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2334[4] = 
{
	LocalizableAttribute_t3478561129::get_offset_of_isLocalizable_0(),
	LocalizableAttribute_t3478561129_StaticFields::get_offset_of_Yes_1(),
	LocalizableAttribute_t3478561129_StaticFields::get_offset_of_No_2(),
	LocalizableAttribute_t3478561129_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2335 = { sizeof (LookupBindingPropertiesAttribute_t2365213483), -1, sizeof(LookupBindingPropertiesAttribute_t2365213483_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2335[5] = 
{
	LookupBindingPropertiesAttribute_t2365213483::get_offset_of_dataSource_0(),
	LookupBindingPropertiesAttribute_t2365213483::get_offset_of_displayMember_1(),
	LookupBindingPropertiesAttribute_t2365213483::get_offset_of_valueMember_2(),
	LookupBindingPropertiesAttribute_t2365213483::get_offset_of_lookupMember_3(),
	LookupBindingPropertiesAttribute_t2365213483_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2336 = { sizeof (MarshalByValueComponent_t828052580), -1, sizeof(MarshalByValueComponent_t828052580_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2336[3] = 
{
	MarshalByValueComponent_t828052580_StaticFields::get_offset_of_EventDisposed_0(),
	MarshalByValueComponent_t828052580::get_offset_of_site_1(),
	MarshalByValueComponent_t828052580::get_offset_of_events_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2337 = { sizeof (MaskedTextProvider_t3775648146), -1, sizeof(MaskedTextProvider_t3775648146_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2337[29] = 
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
	MaskedTextProvider_t3775648146_StaticFields::get_offset_of_ASCII_ONLY_10(),
	MaskedTextProvider_t3775648146_StaticFields::get_offset_of_ALLOW_PROMPT_AS_INPUT_11(),
	MaskedTextProvider_t3775648146_StaticFields::get_offset_of_INCLUDE_PROMPT_12(),
	MaskedTextProvider_t3775648146_StaticFields::get_offset_of_INCLUDE_LITERALS_13(),
	MaskedTextProvider_t3775648146_StaticFields::get_offset_of_RESET_ON_PROMPT_14(),
	MaskedTextProvider_t3775648146_StaticFields::get_offset_of_RESET_ON_LITERALS_15(),
	MaskedTextProvider_t3775648146_StaticFields::get_offset_of_SKIP_SPACE_16(),
	MaskedTextProvider_t3775648146_StaticFields::get_offset_of_maskTextProviderType_17(),
	MaskedTextProvider_t3775648146::get_offset_of_flagState_18(),
	MaskedTextProvider_t3775648146::get_offset_of_culture_19(),
	MaskedTextProvider_t3775648146::get_offset_of_testString_20(),
	MaskedTextProvider_t3775648146::get_offset_of_assignedCharCount_21(),
	MaskedTextProvider_t3775648146::get_offset_of_requiredCharCount_22(),
	MaskedTextProvider_t3775648146::get_offset_of_requiredEditChars_23(),
	MaskedTextProvider_t3775648146::get_offset_of_optionalEditChars_24(),
	MaskedTextProvider_t3775648146::get_offset_of_mask_25(),
	MaskedTextProvider_t3775648146::get_offset_of_passwordChar_26(),
	MaskedTextProvider_t3775648146::get_offset_of_promptChar_27(),
	MaskedTextProvider_t3775648146::get_offset_of_stringDescriptor_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2338 = { sizeof (CaseConversion_t3435856749)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2338[4] = 
{
	CaseConversion_t3435856749::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2339 = { sizeof (CharType_t2940487520)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2339[6] = 
{
	CharType_t2940487520::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2340 = { sizeof (CharDescriptor_t2334124477), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2340[4] = 
{
	CharDescriptor_t2334124477::get_offset_of_MaskPosition_0(),
	CharDescriptor_t2334124477::get_offset_of_CaseConversion_1(),
	CharDescriptor_t2334124477::get_offset_of_CharType_2(),
	CharDescriptor_t2334124477::get_offset_of_IsAssigned_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2341 = { sizeof (MaskedTextResultHint_t3918028412)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2341[16] = 
{
	MaskedTextResultHint_t3918028412::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2342 = { sizeof (MemberDescriptor_t3815403747), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2342[12] = 
{
	MemberDescriptor_t3815403747::get_offset_of_name_0(),
	MemberDescriptor_t3815403747::get_offset_of_displayName_1(),
	MemberDescriptor_t3815403747::get_offset_of_nameHash_2(),
	MemberDescriptor_t3815403747::get_offset_of_attributeCollection_3(),
	MemberDescriptor_t3815403747::get_offset_of_attributes_4(),
	MemberDescriptor_t3815403747::get_offset_of_originalAttributes_5(),
	MemberDescriptor_t3815403747::get_offset_of_attributesFiltered_6(),
	MemberDescriptor_t3815403747::get_offset_of_attributesFilled_7(),
	MemberDescriptor_t3815403747::get_offset_of_metadataVersion_8(),
	MemberDescriptor_t3815403747::get_offset_of_category_9(),
	MemberDescriptor_t3815403747::get_offset_of_description_10(),
	MemberDescriptor_t3815403747::get_offset_of_lockCookie_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2343 = { sizeof (MergablePropertyAttribute_t476798118), -1, sizeof(MergablePropertyAttribute_t476798118_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2343[4] = 
{
	MergablePropertyAttribute_t476798118_StaticFields::get_offset_of_Yes_0(),
	MergablePropertyAttribute_t476798118_StaticFields::get_offset_of_No_1(),
	MergablePropertyAttribute_t476798118_StaticFields::get_offset_of_Default_2(),
	MergablePropertyAttribute_t476798118::get_offset_of_allowMerge_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2344 = { sizeof (MultilineStringConverter_t1596147706), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2345 = { sizeof (NestedContainer_t119127665), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2345[1] = 
{
	NestedContainer_t119127665::get_offset_of__owner_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2346 = { sizeof (Site_t751657764), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2346[3] = 
{
	Site_t751657764::get_offset_of_component_0(),
	Site_t751657764::get_offset_of_container_1(),
	Site_t751657764::get_offset_of_name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2347 = { sizeof (NullableConverter_t1985728604), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2347[3] = 
{
	NullableConverter_t1985728604::get_offset_of_nullableType_2(),
	NullableConverter_t1985728604::get_offset_of_simpleType_3(),
	NullableConverter_t1985728604::get_offset_of_simpleTypeConverter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2348 = { sizeof (PasswordPropertyTextAttribute_t4966400), -1, sizeof(PasswordPropertyTextAttribute_t4966400_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2348[4] = 
{
	PasswordPropertyTextAttribute_t4966400_StaticFields::get_offset_of_Yes_0(),
	PasswordPropertyTextAttribute_t4966400_StaticFields::get_offset_of_No_1(),
	PasswordPropertyTextAttribute_t4966400_StaticFields::get_offset_of_Default_2(),
	PasswordPropertyTextAttribute_t4966400::get_offset_of__password_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2349 = { sizeof (ProgressChangedEventArgs_t3227452477), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2349[2] = 
{
	ProgressChangedEventArgs_t3227452477::get_offset_of_progressPercentage_1(),
	ProgressChangedEventArgs_t3227452477::get_offset_of_userState_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2350 = { sizeof (ProgressChangedEventHandler_t1213062803), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2351 = { sizeof (PropertyChangedEventArgs_t3313059048), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2351[1] = 
{
	PropertyChangedEventArgs_t3313059048::get_offset_of_propertyName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2352 = { sizeof (PropertyChangedEventHandler_t3836340606), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2353 = { sizeof (PropertyChangingEventArgs_t2067745136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2353[1] = 
{
	PropertyChangingEventArgs_t2067745136::get_offset_of_propertyName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2354 = { sizeof (PropertyChangingEventHandler_t2830353497), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2355 = { sizeof (PropertyDescriptor_t3244362832), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2355[5] = 
{
	PropertyDescriptor_t3244362832::get_offset_of_converter_12(),
	PropertyDescriptor_t3244362832::get_offset_of_valueChangedHandlers_13(),
	PropertyDescriptor_t3244362832::get_offset_of_editors_14(),
	PropertyDescriptor_t3244362832::get_offset_of_editorTypes_15(),
	PropertyDescriptor_t3244362832::get_offset_of_editorCount_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2356 = { sizeof (PropertyDescriptorCollection_t4164928659), -1, sizeof(PropertyDescriptorCollection_t4164928659_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2356[10] = 
{
	PropertyDescriptorCollection_t4164928659_StaticFields::get_offset_of_Empty_0(),
	PropertyDescriptorCollection_t4164928659::get_offset_of_cachedFoundProperties_1(),
	PropertyDescriptorCollection_t4164928659::get_offset_of_cachedIgnoreCase_2(),
	PropertyDescriptorCollection_t4164928659::get_offset_of_properties_3(),
	PropertyDescriptorCollection_t4164928659::get_offset_of_propCount_4(),
	PropertyDescriptorCollection_t4164928659::get_offset_of_namedSort_5(),
	PropertyDescriptorCollection_t4164928659::get_offset_of_comparer_6(),
	PropertyDescriptorCollection_t4164928659::get_offset_of_propsOwned_7(),
	PropertyDescriptorCollection_t4164928659::get_offset_of_needSort_8(),
	PropertyDescriptorCollection_t4164928659::get_offset_of_readOnly_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2357 = { sizeof (PropertyDescriptorEnumerator_t2627442857), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2357[2] = 
{
	PropertyDescriptorEnumerator_t2627442857::get_offset_of_owner_0(),
	PropertyDescriptorEnumerator_t2627442857::get_offset_of_index_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2358 = { sizeof (ProvidePropertyAttribute_t26263718), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2358[2] = 
{
	ProvidePropertyAttribute_t26263718::get_offset_of_propertyName_0(),
	ProvidePropertyAttribute_t26263718::get_offset_of_receiverTypeName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2359 = { sizeof (ReadOnlyAttribute_t1907441566), -1, sizeof(ReadOnlyAttribute_t1907441566_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2359[4] = 
{
	ReadOnlyAttribute_t1907441566::get_offset_of_isReadOnly_0(),
	ReadOnlyAttribute_t1907441566_StaticFields::get_offset_of_Yes_1(),
	ReadOnlyAttribute_t1907441566_StaticFields::get_offset_of_No_2(),
	ReadOnlyAttribute_t1907441566_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2360 = { sizeof (RecommendedAsConfigurableAttribute_t279829077), -1, sizeof(RecommendedAsConfigurableAttribute_t279829077_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2360[4] = 
{
	RecommendedAsConfigurableAttribute_t279829077::get_offset_of_recommendedAsConfigurable_0(),
	RecommendedAsConfigurableAttribute_t279829077_StaticFields::get_offset_of_No_1(),
	RecommendedAsConfigurableAttribute_t279829077_StaticFields::get_offset_of_Yes_2(),
	RecommendedAsConfigurableAttribute_t279829077_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2361 = { sizeof (ReferenceConverter_t1811933861), -1, sizeof(ReferenceConverter_t1811933861_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2361[2] = 
{
	ReferenceConverter_t1811933861_StaticFields::get_offset_of_none_2(),
	ReferenceConverter_t1811933861::get_offset_of_type_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2362 = { sizeof (ReferenceComparer_t1826665674), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2362[1] = 
{
	ReferenceComparer_t1826665674::get_offset_of_converter_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2363 = { sizeof (ReflectEventDescriptor_t849369318), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2363[6] = 
{
	ReflectEventDescriptor_t849369318::get_offset_of_type_12(),
	ReflectEventDescriptor_t849369318::get_offset_of_componentClass_13(),
	ReflectEventDescriptor_t849369318::get_offset_of_addMethod_14(),
	ReflectEventDescriptor_t849369318::get_offset_of_removeMethod_15(),
	ReflectEventDescriptor_t849369318::get_offset_of_realEvent_16(),
	ReflectEventDescriptor_t849369318::get_offset_of_filledMethods_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2364 = { sizeof (ReflectPropertyDescriptor_t3323763468), -1, sizeof(ReflectPropertyDescriptor_t3323763468_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2364[27] = 
{
	ReflectPropertyDescriptor_t3323763468_StaticFields::get_offset_of_argsNone_17(),
	ReflectPropertyDescriptor_t3323763468_StaticFields::get_offset_of_noValue_18(),
	ReflectPropertyDescriptor_t3323763468_StaticFields::get_offset_of_PropDescCreateSwitch_19(),
	ReflectPropertyDescriptor_t3323763468_StaticFields::get_offset_of_PropDescUsageSwitch_20(),
	ReflectPropertyDescriptor_t3323763468_StaticFields::get_offset_of_BitDefaultValueQueried_21(),
	ReflectPropertyDescriptor_t3323763468_StaticFields::get_offset_of_BitGetQueried_22(),
	ReflectPropertyDescriptor_t3323763468_StaticFields::get_offset_of_BitSetQueried_23(),
	ReflectPropertyDescriptor_t3323763468_StaticFields::get_offset_of_BitShouldSerializeQueried_24(),
	ReflectPropertyDescriptor_t3323763468_StaticFields::get_offset_of_BitResetQueried_25(),
	ReflectPropertyDescriptor_t3323763468_StaticFields::get_offset_of_BitChangedQueried_26(),
	ReflectPropertyDescriptor_t3323763468_StaticFields::get_offset_of_BitIPropChangedQueried_27(),
	ReflectPropertyDescriptor_t3323763468_StaticFields::get_offset_of_BitReadOnlyChecked_28(),
	ReflectPropertyDescriptor_t3323763468_StaticFields::get_offset_of_BitAmbientValueQueried_29(),
	ReflectPropertyDescriptor_t3323763468_StaticFields::get_offset_of_BitSetOnDemand_30(),
	ReflectPropertyDescriptor_t3323763468::get_offset_of_state_31(),
	ReflectPropertyDescriptor_t3323763468::get_offset_of_componentClass_32(),
	ReflectPropertyDescriptor_t3323763468::get_offset_of_type_33(),
	ReflectPropertyDescriptor_t3323763468::get_offset_of_defaultValue_34(),
	ReflectPropertyDescriptor_t3323763468::get_offset_of_ambientValue_35(),
	ReflectPropertyDescriptor_t3323763468::get_offset_of_propInfo_36(),
	ReflectPropertyDescriptor_t3323763468::get_offset_of_getMethod_37(),
	ReflectPropertyDescriptor_t3323763468::get_offset_of_setMethod_38(),
	ReflectPropertyDescriptor_t3323763468::get_offset_of_shouldSerializeMethod_39(),
	ReflectPropertyDescriptor_t3323763468::get_offset_of_resetMethod_40(),
	ReflectPropertyDescriptor_t3323763468::get_offset_of_realChangedEvent_41(),
	ReflectPropertyDescriptor_t3323763468::get_offset_of_realIPropChangedEvent_42(),
	ReflectPropertyDescriptor_t3323763468::get_offset_of_receiverType_43(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2365 = { sizeof (ReflectTypeDescriptionProvider_t2247041319), -1, sizeof(ReflectTypeDescriptionProvider_t2247041319_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2365[16] = 
{
	ReflectTypeDescriptionProvider_t2247041319::get_offset_of__typeData_2(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__typeConstructor_3(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__editorTables_4(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__intrinsicTypeConverters_5(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__intrinsicReferenceKey_6(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__intrinsicNullableKey_7(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__dictionaryKey_8(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__propertyCache_9(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__eventCache_10(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__attributeCache_11(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__extendedPropertyCache_12(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__extenderProviderKey_13(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__extenderPropertiesKey_14(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__extenderProviderPropertiesKey_15(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__skipInterfaceAttributeList_16(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__internalSyncObject_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2366 = { sizeof (ReflectedTypeData_t1775264331), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2366[8] = 
{
	ReflectedTypeData_t1775264331::get_offset_of__type_0(),
	ReflectedTypeData_t1775264331::get_offset_of__attributes_1(),
	ReflectedTypeData_t1775264331::get_offset_of__events_2(),
	ReflectedTypeData_t1775264331::get_offset_of__properties_3(),
	ReflectedTypeData_t1775264331::get_offset_of__converter_4(),
	ReflectedTypeData_t1775264331::get_offset_of__editors_5(),
	ReflectedTypeData_t1775264331::get_offset_of__editorTypes_6(),
	ReflectedTypeData_t1775264331::get_offset_of__editorCount_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2367 = { sizeof (RefreshEventArgs_t9288056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2367[2] = 
{
	RefreshEventArgs_t9288056::get_offset_of_componentChanged_1(),
	RefreshEventArgs_t9288056::get_offset_of_typeChanged_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2368 = { sizeof (RefreshEventHandler_t3637242902), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2369 = { sizeof (RunInstallerAttribute_t4293401849), -1, sizeof(RunInstallerAttribute_t4293401849_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2369[4] = 
{
	RunInstallerAttribute_t4293401849::get_offset_of_runInstaller_0(),
	RunInstallerAttribute_t4293401849_StaticFields::get_offset_of_Yes_1(),
	RunInstallerAttribute_t4293401849_StaticFields::get_offset_of_No_2(),
	RunInstallerAttribute_t4293401849_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2370 = { sizeof (RunWorkerCompletedEventArgs_t4030028402), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2370[1] = 
{
	RunWorkerCompletedEventArgs_t4030028402::get_offset_of_result_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2371 = { sizeof (RunWorkerCompletedEventHandler_t2386199656), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2372 = { sizeof (SByteConverter_t2970182448), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2373 = { sizeof (SettingsBindableAttribute_t3884869596), -1, sizeof(SettingsBindableAttribute_t3884869596_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2373[3] = 
{
	SettingsBindableAttribute_t3884869596_StaticFields::get_offset_of_Yes_0(),
	SettingsBindableAttribute_t3884869596_StaticFields::get_offset_of_No_1(),
	SettingsBindableAttribute_t3884869596::get_offset_of__bindable_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2374 = { sizeof (SingleConverter_t902207630), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2375 = { sizeof (StringConverter_t3216726494), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2376 = { sizeof (SyntaxCheck_t4070995323), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2377 = { sizeof (TimeSpanConverter_t3504031848), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2378 = { sizeof (ToolboxItemFilterAttribute_t2990581383), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2378[3] = 
{
	ToolboxItemFilterAttribute_t2990581383::get_offset_of_filterType_0(),
	ToolboxItemFilterAttribute_t2990581383::get_offset_of_filterString_1(),
	ToolboxItemFilterAttribute_t2990581383::get_offset_of_typeId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2379 = { sizeof (ToolboxItemFilterType_t3870514709)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2379[5] = 
{
	ToolboxItemFilterType_t3870514709::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2380 = { sizeof (TypeConverter_t2249118273), -1, sizeof(TypeConverter_t2249118273_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2380[2] = 
{
	0,
	TypeConverter_t2249118273_StaticFields::get_offset_of_useCompatibleTypeConversion_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2381 = { sizeof (SimplePropertyDescriptor_t4116423955), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2381[2] = 
{
	SimplePropertyDescriptor_t4116423955::get_offset_of_componentType_17(),
	SimplePropertyDescriptor_t4116423955::get_offset_of_propertyType_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2382 = { sizeof (StandardValuesCollection_t2184948248), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2382[2] = 
{
	StandardValuesCollection_t2184948248::get_offset_of_values_0(),
	StandardValuesCollection_t2184948248::get_offset_of_valueArray_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2383 = { sizeof (TypeConverterAttribute_t3271584429), -1, sizeof(TypeConverterAttribute_t3271584429_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2383[2] = 
{
	TypeConverterAttribute_t3271584429::get_offset_of_typeName_0(),
	TypeConverterAttribute_t3271584429_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2384 = { sizeof (TypeDescriptionProvider_t3232077895), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2384[2] = 
{
	TypeDescriptionProvider_t3232077895::get_offset_of__parent_0(),
	TypeDescriptionProvider_t3232077895::get_offset_of__emptyDescriptor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2385 = { sizeof (EmptyCustomTypeDescriptor_t4007109994), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2386 = { sizeof (TypeDescriptionProviderAttribute_t2619663527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2386[1] = 
{
	TypeDescriptionProviderAttribute_t2619663527::get_offset_of__typeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2387 = { sizeof (TypeDescriptor_t3066613587), -1, sizeof(TypeDescriptor_t3066613587_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2387[16] = 
{
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__providerTable_0(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__providerTypeTable_1(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__defaultProviders_2(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__associationTable_3(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__metadataVersion_4(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__collisionIndex_5(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_TraceDescriptor_6(),
	0,
	0,
	0,
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__pipelineInitializeKeys_10(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__pipelineMergeKeys_11(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__pipelineFilterKeys_12(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__pipelineAttributeFilterKeys_13(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__internalSyncObject_14(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_Refreshed_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2388 = { sizeof (AttributeProvider_t1593068408), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2388[1] = 
{
	AttributeProvider_t1593068408::get_offset_of__attrs_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2389 = { sizeof (AttributeTypeDescriptor_t708701339), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2389[1] = 
{
	AttributeTypeDescriptor_t708701339::get_offset_of__attributeArray_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2390 = { sizeof (ComNativeDescriptionProvider_t1510127230), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2390[1] = 
{
	ComNativeDescriptionProvider_t1510127230::get_offset_of__handler_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2391 = { sizeof (ComNativeTypeDescriptor_t2703964002), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2391[2] = 
{
	ComNativeTypeDescriptor_t2703964002::get_offset_of__handler_0(),
	ComNativeTypeDescriptor_t2703964002::get_offset_of__instance_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2392 = { sizeof (AttributeFilterCacheItem_t1568965748), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2392[2] = 
{
	AttributeFilterCacheItem_t1568965748::get_offset_of__filter_0(),
	AttributeFilterCacheItem_t1568965748::get_offset_of_FilteredMembers_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2393 = { sizeof (FilterCacheItem_t1189670310), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2393[2] = 
{
	FilterCacheItem_t1189670310::get_offset_of__filterService_0(),
	FilterCacheItem_t1189670310::get_offset_of_FilteredMembers_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2394 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2395 = { sizeof (MemberDescriptorComparer_t457940793), -1, sizeof(MemberDescriptorComparer_t457940793_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2395[1] = 
{
	MemberDescriptorComparer_t457940793_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2396 = { sizeof (MergedTypeDescriptor_t3526482283), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2396[2] = 
{
	MergedTypeDescriptor_t3526482283::get_offset_of__primary_0(),
	MergedTypeDescriptor_t3526482283::get_offset_of__secondary_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2397 = { sizeof (TypeDescriptionNode_t3022060204), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2397[2] = 
{
	TypeDescriptionNode_t3022060204::get_offset_of_Next_2(),
	TypeDescriptionNode_t3022060204::get_offset_of_Provider_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2398 = { sizeof (DefaultExtendedTypeDescriptor_t1757997412)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2398[2] = 
{
	DefaultExtendedTypeDescriptor_t1757997412::get_offset_of__node_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DefaultExtendedTypeDescriptor_t1757997412::get_offset_of__instance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2399 = { sizeof (DefaultTypeDescriptor_t4148937846)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2399[3] = 
{
	DefaultTypeDescriptor_t4148937846::get_offset_of__node_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DefaultTypeDescriptor_t4148937846::get_offset_of__objectType_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DefaultTypeDescriptor_t4148937846::get_offset_of__instance_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
