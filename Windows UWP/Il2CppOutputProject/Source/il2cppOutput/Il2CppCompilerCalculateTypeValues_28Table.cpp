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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t1713852332;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1624492310;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t417719465;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t2091847364;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1318642398;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t4224248211;
// System.Configuration.Configuration
struct Configuration_t2529364143;
// System.Configuration.ConfigurationElement/SaveContext
struct SaveContext_t3075152201;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t446763386;
// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t4066281341;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3590861854;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t2852175726;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t2786897858;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t1151641153;
// System.Configuration.ElementInformation
struct ElementInformation_t2651568025;
// System.Configuration.ElementMap
struct ElementMap_t2160633803;
// System.Configuration.IConfigurationSectionHandler
struct IConfigurationSectionHandler_t3614337894;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t687896682;
// System.Configuration.SectionInformation
struct SectionInformation_t2821611020;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Net.Cache.RequestCache
struct RequestCache_t3669488992;
// System.Net.Cache.RequestCacheValidator
struct RequestCacheValidator_t587568667;
// System.Net.IWebProxy
struct IWebProxy_t688979836;
// System.Net.NetworkInformation.IPAddressCollection
struct IPAddressCollection_t2315030214;
// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t3964383369;
// System.Net.NetworkInformation.NetworkInterfaceFactory
struct NetworkInterfaceFactory_t1756522298;
// System.Net.NetworkInformation.UnixNetworkInterface
struct UnixNetworkInterface_t2401762829;
// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics
struct Win32IPv4InterfaceStatistics_t3096671123;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t3301955079;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.RegularExpressions.Regex
struct Regex_t3657309853;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Void
struct Void_t1185182177;




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
#ifndef CONFIGURATIONELEMENT_T3318566633_H
#define CONFIGURATIONELEMENT_T3318566633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElement
struct  ConfigurationElement_t3318566633  : public RuntimeObject
{
public:
	// System.String System.Configuration.ConfigurationElement::rawXml
	String_t* ___rawXml_0;
	// System.Boolean System.Configuration.ConfigurationElement::modified
	bool ___modified_1;
	// System.Configuration.ElementMap System.Configuration.ConfigurationElement::map
	ElementMap_t2160633803 * ___map_2;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::keyProps
	ConfigurationPropertyCollection_t2852175726 * ___keyProps_3;
	// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::defaultCollection
	ConfigurationElementCollection_t446763386 * ___defaultCollection_4;
	// System.Boolean System.Configuration.ConfigurationElement::readOnly
	bool ___readOnly_5;
	// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::elementInfo
	ElementInformation_t2651568025 * ___elementInfo_6;
	// System.Configuration.Configuration System.Configuration.ConfigurationElement::_configuration
	Configuration_t2529364143 * ____configuration_7;
	// System.Boolean System.Configuration.ConfigurationElement::elementPresent
	bool ___elementPresent_8;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllAttributesExcept
	ConfigurationLockCollection_t4066281341 * ___lockAllAttributesExcept_9;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllElementsExcept
	ConfigurationLockCollection_t4066281341 * ___lockAllElementsExcept_10;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAttributes
	ConfigurationLockCollection_t4066281341 * ___lockAttributes_11;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockElements
	ConfigurationLockCollection_t4066281341 * ___lockElements_12;
	// System.Boolean System.Configuration.ConfigurationElement::lockItem
	bool ___lockItem_13;
	// System.Configuration.ConfigurationElement/SaveContext System.Configuration.ConfigurationElement::saveContext
	SaveContext_t3075152201 * ___saveContext_14;

public:
	inline static int32_t get_offset_of_rawXml_0() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___rawXml_0)); }
	inline String_t* get_rawXml_0() const { return ___rawXml_0; }
	inline String_t** get_address_of_rawXml_0() { return &___rawXml_0; }
	inline void set_rawXml_0(String_t* value)
	{
		___rawXml_0 = value;
		Il2CppCodeGenWriteBarrier((&___rawXml_0), value);
	}

	inline static int32_t get_offset_of_modified_1() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___modified_1)); }
	inline bool get_modified_1() const { return ___modified_1; }
	inline bool* get_address_of_modified_1() { return &___modified_1; }
	inline void set_modified_1(bool value)
	{
		___modified_1 = value;
	}

	inline static int32_t get_offset_of_map_2() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___map_2)); }
	inline ElementMap_t2160633803 * get_map_2() const { return ___map_2; }
	inline ElementMap_t2160633803 ** get_address_of_map_2() { return &___map_2; }
	inline void set_map_2(ElementMap_t2160633803 * value)
	{
		___map_2 = value;
		Il2CppCodeGenWriteBarrier((&___map_2), value);
	}

	inline static int32_t get_offset_of_keyProps_3() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___keyProps_3)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_keyProps_3() const { return ___keyProps_3; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_keyProps_3() { return &___keyProps_3; }
	inline void set_keyProps_3(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___keyProps_3 = value;
		Il2CppCodeGenWriteBarrier((&___keyProps_3), value);
	}

	inline static int32_t get_offset_of_defaultCollection_4() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___defaultCollection_4)); }
	inline ConfigurationElementCollection_t446763386 * get_defaultCollection_4() const { return ___defaultCollection_4; }
	inline ConfigurationElementCollection_t446763386 ** get_address_of_defaultCollection_4() { return &___defaultCollection_4; }
	inline void set_defaultCollection_4(ConfigurationElementCollection_t446763386 * value)
	{
		___defaultCollection_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCollection_4), value);
	}

	inline static int32_t get_offset_of_readOnly_5() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___readOnly_5)); }
	inline bool get_readOnly_5() const { return ___readOnly_5; }
	inline bool* get_address_of_readOnly_5() { return &___readOnly_5; }
	inline void set_readOnly_5(bool value)
	{
		___readOnly_5 = value;
	}

	inline static int32_t get_offset_of_elementInfo_6() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___elementInfo_6)); }
	inline ElementInformation_t2651568025 * get_elementInfo_6() const { return ___elementInfo_6; }
	inline ElementInformation_t2651568025 ** get_address_of_elementInfo_6() { return &___elementInfo_6; }
	inline void set_elementInfo_6(ElementInformation_t2651568025 * value)
	{
		___elementInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___elementInfo_6), value);
	}

	inline static int32_t get_offset_of__configuration_7() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ____configuration_7)); }
	inline Configuration_t2529364143 * get__configuration_7() const { return ____configuration_7; }
	inline Configuration_t2529364143 ** get_address_of__configuration_7() { return &____configuration_7; }
	inline void set__configuration_7(Configuration_t2529364143 * value)
	{
		____configuration_7 = value;
		Il2CppCodeGenWriteBarrier((&____configuration_7), value);
	}

	inline static int32_t get_offset_of_elementPresent_8() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___elementPresent_8)); }
	inline bool get_elementPresent_8() const { return ___elementPresent_8; }
	inline bool* get_address_of_elementPresent_8() { return &___elementPresent_8; }
	inline void set_elementPresent_8(bool value)
	{
		___elementPresent_8 = value;
	}

	inline static int32_t get_offset_of_lockAllAttributesExcept_9() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockAllAttributesExcept_9)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockAllAttributesExcept_9() const { return ___lockAllAttributesExcept_9; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockAllAttributesExcept_9() { return &___lockAllAttributesExcept_9; }
	inline void set_lockAllAttributesExcept_9(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockAllAttributesExcept_9 = value;
		Il2CppCodeGenWriteBarrier((&___lockAllAttributesExcept_9), value);
	}

	inline static int32_t get_offset_of_lockAllElementsExcept_10() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockAllElementsExcept_10)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockAllElementsExcept_10() const { return ___lockAllElementsExcept_10; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockAllElementsExcept_10() { return &___lockAllElementsExcept_10; }
	inline void set_lockAllElementsExcept_10(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockAllElementsExcept_10 = value;
		Il2CppCodeGenWriteBarrier((&___lockAllElementsExcept_10), value);
	}

	inline static int32_t get_offset_of_lockAttributes_11() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockAttributes_11)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockAttributes_11() const { return ___lockAttributes_11; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockAttributes_11() { return &___lockAttributes_11; }
	inline void set_lockAttributes_11(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockAttributes_11 = value;
		Il2CppCodeGenWriteBarrier((&___lockAttributes_11), value);
	}

	inline static int32_t get_offset_of_lockElements_12() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockElements_12)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockElements_12() const { return ___lockElements_12; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockElements_12() { return &___lockElements_12; }
	inline void set_lockElements_12(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockElements_12 = value;
		Il2CppCodeGenWriteBarrier((&___lockElements_12), value);
	}

	inline static int32_t get_offset_of_lockItem_13() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockItem_13)); }
	inline bool get_lockItem_13() const { return ___lockItem_13; }
	inline bool* get_address_of_lockItem_13() { return &___lockItem_13; }
	inline void set_lockItem_13(bool value)
	{
		___lockItem_13 = value;
	}

	inline static int32_t get_offset_of_saveContext_14() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___saveContext_14)); }
	inline SaveContext_t3075152201 * get_saveContext_14() const { return ___saveContext_14; }
	inline SaveContext_t3075152201 ** get_address_of_saveContext_14() { return &___saveContext_14; }
	inline void set_saveContext_14(SaveContext_t3075152201 * value)
	{
		___saveContext_14 = value;
		Il2CppCodeGenWriteBarrier((&___saveContext_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONELEMENT_T3318566633_H
#ifndef CONFIGURATIONSECTIONGROUP_T4179402520_H
#define CONFIGURATIONSECTIONGROUP_T4179402520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSectionGroup
struct  ConfigurationSectionGroup_t4179402520  : public RuntimeObject
{
public:
	// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::sections
	ConfigurationSectionCollection_t2786897858 * ___sections_0;
	// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::groups
	ConfigurationSectionGroupCollection_t1151641153 * ___groups_1;
	// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::config
	Configuration_t2529364143 * ___config_2;
	// System.Configuration.SectionGroupInfo System.Configuration.ConfigurationSectionGroup::group
	SectionGroupInfo_t687896682 * ___group_3;
	// System.Boolean System.Configuration.ConfigurationSectionGroup::initialized
	bool ___initialized_4;

public:
	inline static int32_t get_offset_of_sections_0() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___sections_0)); }
	inline ConfigurationSectionCollection_t2786897858 * get_sections_0() const { return ___sections_0; }
	inline ConfigurationSectionCollection_t2786897858 ** get_address_of_sections_0() { return &___sections_0; }
	inline void set_sections_0(ConfigurationSectionCollection_t2786897858 * value)
	{
		___sections_0 = value;
		Il2CppCodeGenWriteBarrier((&___sections_0), value);
	}

	inline static int32_t get_offset_of_groups_1() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___groups_1)); }
	inline ConfigurationSectionGroupCollection_t1151641153 * get_groups_1() const { return ___groups_1; }
	inline ConfigurationSectionGroupCollection_t1151641153 ** get_address_of_groups_1() { return &___groups_1; }
	inline void set_groups_1(ConfigurationSectionGroupCollection_t1151641153 * value)
	{
		___groups_1 = value;
		Il2CppCodeGenWriteBarrier((&___groups_1), value);
	}

	inline static int32_t get_offset_of_config_2() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___config_2)); }
	inline Configuration_t2529364143 * get_config_2() const { return ___config_2; }
	inline Configuration_t2529364143 ** get_address_of_config_2() { return &___config_2; }
	inline void set_config_2(Configuration_t2529364143 * value)
	{
		___config_2 = value;
		Il2CppCodeGenWriteBarrier((&___config_2), value);
	}

	inline static int32_t get_offset_of_group_3() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___group_3)); }
	inline SectionGroupInfo_t687896682 * get_group_3() const { return ___group_3; }
	inline SectionGroupInfo_t687896682 ** get_address_of_group_3() { return &___group_3; }
	inline void set_group_3(SectionGroupInfo_t687896682 * value)
	{
		___group_3 = value;
		Il2CppCodeGenWriteBarrier((&___group_3), value);
	}

	inline static int32_t get_offset_of_initialized_4() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___initialized_4)); }
	inline bool get_initialized_4() const { return ___initialized_4; }
	inline bool* get_address_of_initialized_4() { return &___initialized_4; }
	inline void set_initialized_4(bool value)
	{
		___initialized_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONSECTIONGROUP_T4179402520_H
#ifndef REQUESTCACHE_T3669488992_H
#define REQUESTCACHE_T3669488992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCache
struct  RequestCache_t3669488992  : public RuntimeObject
{
public:

public:
};

struct RequestCache_t3669488992_StaticFields
{
public:
	// System.Char[] System.Net.Cache.RequestCache::LineSplits
	CharU5BU5D_t3528271667* ___LineSplits_0;

public:
	inline static int32_t get_offset_of_LineSplits_0() { return static_cast<int32_t>(offsetof(RequestCache_t3669488992_StaticFields, ___LineSplits_0)); }
	inline CharU5BU5D_t3528271667* get_LineSplits_0() const { return ___LineSplits_0; }
	inline CharU5BU5D_t3528271667** get_address_of_LineSplits_0() { return &___LineSplits_0; }
	inline void set_LineSplits_0(CharU5BU5D_t3528271667* value)
	{
		___LineSplits_0 = value;
		Il2CppCodeGenWriteBarrier((&___LineSplits_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHE_T3669488992_H
#ifndef REQUESTCACHEBINDING_T2614858269_H
#define REQUESTCACHEBINDING_T2614858269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheBinding
struct  RequestCacheBinding_t2614858269  : public RuntimeObject
{
public:
	// System.Net.Cache.RequestCache System.Net.Cache.RequestCacheBinding::m_RequestCache
	RequestCache_t3669488992 * ___m_RequestCache_0;
	// System.Net.Cache.RequestCacheValidator System.Net.Cache.RequestCacheBinding::m_CacheValidator
	RequestCacheValidator_t587568667 * ___m_CacheValidator_1;

public:
	inline static int32_t get_offset_of_m_RequestCache_0() { return static_cast<int32_t>(offsetof(RequestCacheBinding_t2614858269, ___m_RequestCache_0)); }
	inline RequestCache_t3669488992 * get_m_RequestCache_0() const { return ___m_RequestCache_0; }
	inline RequestCache_t3669488992 ** get_address_of_m_RequestCache_0() { return &___m_RequestCache_0; }
	inline void set_m_RequestCache_0(RequestCache_t3669488992 * value)
	{
		___m_RequestCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_RequestCache_0), value);
	}

	inline static int32_t get_offset_of_m_CacheValidator_1() { return static_cast<int32_t>(offsetof(RequestCacheBinding_t2614858269, ___m_CacheValidator_1)); }
	inline RequestCacheValidator_t587568667 * get_m_CacheValidator_1() const { return ___m_CacheValidator_1; }
	inline RequestCacheValidator_t587568667 ** get_address_of_m_CacheValidator_1() { return &___m_CacheValidator_1; }
	inline void set_m_CacheValidator_1(RequestCacheValidator_t587568667 * value)
	{
		___m_CacheValidator_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_CacheValidator_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEBINDING_T2614858269_H
#ifndef REQUESTCACHEPROTOCOL_T3614465628_H
#define REQUESTCACHEPROTOCOL_T3614465628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheProtocol
struct  RequestCacheProtocol_t3614465628  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEPROTOCOL_T3614465628_H
#ifndef REQUESTCACHEVALIDATOR_T587568667_H
#define REQUESTCACHEVALIDATOR_T587568667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheValidator
struct  RequestCacheValidator_t587568667  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEVALIDATOR_T587568667_H
#ifndef CONNECTIONMANAGEMENTDATA_T2003128658_H
#define CONNECTIONMANAGEMENTDATA_T2003128658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementData
struct  ConnectionManagementData_t2003128658  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Net.Configuration.ConnectionManagementData::data
	Hashtable_t1853889766 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ConnectionManagementData_t2003128658, ___data_0)); }
	inline Hashtable_t1853889766 * get_data_0() const { return ___data_0; }
	inline Hashtable_t1853889766 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(Hashtable_t1853889766 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTDATA_T2003128658_H
#ifndef DEFAULTPROXYSECTIONINTERNAL_T3889414525_H
#define DEFAULTPROXYSECTIONINTERNAL_T3889414525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.DefaultProxySectionInternal
struct  DefaultProxySectionInternal_t3889414525  : public RuntimeObject
{
public:
	// System.Net.IWebProxy System.Net.Configuration.DefaultProxySectionInternal::webProxy
	RuntimeObject* ___webProxy_0;

public:
	inline static int32_t get_offset_of_webProxy_0() { return static_cast<int32_t>(offsetof(DefaultProxySectionInternal_t3889414525, ___webProxy_0)); }
	inline RuntimeObject* get_webProxy_0() const { return ___webProxy_0; }
	inline RuntimeObject** get_address_of_webProxy_0() { return &___webProxy_0; }
	inline void set_webProxy_0(RuntimeObject* value)
	{
		___webProxy_0 = value;
		Il2CppCodeGenWriteBarrier((&___webProxy_0), value);
	}
};

struct DefaultProxySectionInternal_t3889414525_StaticFields
{
public:
	// System.Object System.Net.Configuration.DefaultProxySectionInternal::classSyncObject
	RuntimeObject * ___classSyncObject_1;

public:
	inline static int32_t get_offset_of_classSyncObject_1() { return static_cast<int32_t>(offsetof(DefaultProxySectionInternal_t3889414525_StaticFields, ___classSyncObject_1)); }
	inline RuntimeObject * get_classSyncObject_1() const { return ___classSyncObject_1; }
	inline RuntimeObject ** get_address_of_classSyncObject_1() { return &___classSyncObject_1; }
	inline void set_classSyncObject_1(RuntimeObject * value)
	{
		___classSyncObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___classSyncObject_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROXYSECTIONINTERNAL_T3889414525_H
#ifndef IPGLOBALPROPERTIES_T3113415935_H
#define IPGLOBALPROPERTIES_T3113415935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPGlobalProperties
struct  IPGlobalProperties_t3113415935  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPGLOBALPROPERTIES_T3113415935_H
#ifndef IPINTERFACEPROPERTIES_T3964383369_H
#define IPINTERFACEPROPERTIES_T3964383369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPInterfaceProperties
struct  IPInterfaceProperties_t3964383369  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPINTERFACEPROPERTIES_T3964383369_H
#ifndef IPV4INTERFACESTATISTICS_T3249312820_H
#define IPV4INTERFACESTATISTICS_T3249312820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPv4InterfaceStatistics
struct  IPv4InterfaceStatistics_t3249312820  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPV4INTERFACESTATISTICS_T3249312820_H
#ifndef NETWORKINTERFACE_T271883373_H
#define NETWORKINTERFACE_T271883373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterface
struct  NetworkInterface_t271883373  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINTERFACE_T271883373_H
#ifndef NETWORKINTERFACEFACTORY_T1756522298_H
#define NETWORKINTERFACEFACTORY_T1756522298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceFactory
struct  NetworkInterfaceFactory_t1756522298  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINTERFACEFACTORY_T1756522298_H
#ifndef SYSTEMNETWORKINTERFACE_T699244148_H
#define SYSTEMNETWORKINTERFACE_T699244148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.SystemNetworkInterface
struct  SystemNetworkInterface_t699244148  : public RuntimeObject
{
public:

public:
};

struct SystemNetworkInterface_t699244148_StaticFields
{
public:
	// System.Net.NetworkInformation.NetworkInterfaceFactory System.Net.NetworkInformation.SystemNetworkInterface::nif
	NetworkInterfaceFactory_t1756522298 * ___nif_0;

public:
	inline static int32_t get_offset_of_nif_0() { return static_cast<int32_t>(offsetof(SystemNetworkInterface_t699244148_StaticFields, ___nif_0)); }
	inline NetworkInterfaceFactory_t1756522298 * get_nif_0() const { return ___nif_0; }
	inline NetworkInterfaceFactory_t1756522298 ** get_address_of_nif_0() { return &___nif_0; }
	inline void set_nif_0(NetworkInterfaceFactory_t1756522298 * value)
	{
		___nif_0 = value;
		Il2CppCodeGenWriteBarrier((&___nif_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMNETWORKINTERFACE_T699244148_H
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
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_t4116647657* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_t4116647657* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_t4116647657* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
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
#ifndef CONFIGURATIONELEMENTCOLLECTION_T446763386_H
#define CONFIGURATIONELEMENTCOLLECTION_T446763386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElementCollection
struct  ConfigurationElementCollection_t446763386  : public ConfigurationElement_t3318566633
{
public:
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::list
	ArrayList_t2718874744 * ___list_15;
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::removed
	ArrayList_t2718874744 * ___removed_16;
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::inherited
	ArrayList_t2718874744 * ___inherited_17;
	// System.Boolean System.Configuration.ConfigurationElementCollection::emitClear
	bool ___emitClear_18;
	// System.Boolean System.Configuration.ConfigurationElementCollection::modified
	bool ___modified_19;
	// System.Collections.IComparer System.Configuration.ConfigurationElementCollection::comparer
	RuntimeObject* ___comparer_20;
	// System.Int32 System.Configuration.ConfigurationElementCollection::inheritedLimitIndex
	int32_t ___inheritedLimitIndex_21;
	// System.String System.Configuration.ConfigurationElementCollection::addElementName
	String_t* ___addElementName_22;
	// System.String System.Configuration.ConfigurationElementCollection::clearElementName
	String_t* ___clearElementName_23;
	// System.String System.Configuration.ConfigurationElementCollection::removeElementName
	String_t* ___removeElementName_24;

public:
	inline static int32_t get_offset_of_list_15() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___list_15)); }
	inline ArrayList_t2718874744 * get_list_15() const { return ___list_15; }
	inline ArrayList_t2718874744 ** get_address_of_list_15() { return &___list_15; }
	inline void set_list_15(ArrayList_t2718874744 * value)
	{
		___list_15 = value;
		Il2CppCodeGenWriteBarrier((&___list_15), value);
	}

	inline static int32_t get_offset_of_removed_16() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___removed_16)); }
	inline ArrayList_t2718874744 * get_removed_16() const { return ___removed_16; }
	inline ArrayList_t2718874744 ** get_address_of_removed_16() { return &___removed_16; }
	inline void set_removed_16(ArrayList_t2718874744 * value)
	{
		___removed_16 = value;
		Il2CppCodeGenWriteBarrier((&___removed_16), value);
	}

	inline static int32_t get_offset_of_inherited_17() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___inherited_17)); }
	inline ArrayList_t2718874744 * get_inherited_17() const { return ___inherited_17; }
	inline ArrayList_t2718874744 ** get_address_of_inherited_17() { return &___inherited_17; }
	inline void set_inherited_17(ArrayList_t2718874744 * value)
	{
		___inherited_17 = value;
		Il2CppCodeGenWriteBarrier((&___inherited_17), value);
	}

	inline static int32_t get_offset_of_emitClear_18() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___emitClear_18)); }
	inline bool get_emitClear_18() const { return ___emitClear_18; }
	inline bool* get_address_of_emitClear_18() { return &___emitClear_18; }
	inline void set_emitClear_18(bool value)
	{
		___emitClear_18 = value;
	}

	inline static int32_t get_offset_of_modified_19() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___modified_19)); }
	inline bool get_modified_19() const { return ___modified_19; }
	inline bool* get_address_of_modified_19() { return &___modified_19; }
	inline void set_modified_19(bool value)
	{
		___modified_19 = value;
	}

	inline static int32_t get_offset_of_comparer_20() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___comparer_20)); }
	inline RuntimeObject* get_comparer_20() const { return ___comparer_20; }
	inline RuntimeObject** get_address_of_comparer_20() { return &___comparer_20; }
	inline void set_comparer_20(RuntimeObject* value)
	{
		___comparer_20 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_20), value);
	}

	inline static int32_t get_offset_of_inheritedLimitIndex_21() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___inheritedLimitIndex_21)); }
	inline int32_t get_inheritedLimitIndex_21() const { return ___inheritedLimitIndex_21; }
	inline int32_t* get_address_of_inheritedLimitIndex_21() { return &___inheritedLimitIndex_21; }
	inline void set_inheritedLimitIndex_21(int32_t value)
	{
		___inheritedLimitIndex_21 = value;
	}

	inline static int32_t get_offset_of_addElementName_22() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___addElementName_22)); }
	inline String_t* get_addElementName_22() const { return ___addElementName_22; }
	inline String_t** get_address_of_addElementName_22() { return &___addElementName_22; }
	inline void set_addElementName_22(String_t* value)
	{
		___addElementName_22 = value;
		Il2CppCodeGenWriteBarrier((&___addElementName_22), value);
	}

	inline static int32_t get_offset_of_clearElementName_23() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___clearElementName_23)); }
	inline String_t* get_clearElementName_23() const { return ___clearElementName_23; }
	inline String_t** get_address_of_clearElementName_23() { return &___clearElementName_23; }
	inline void set_clearElementName_23(String_t* value)
	{
		___clearElementName_23 = value;
		Il2CppCodeGenWriteBarrier((&___clearElementName_23), value);
	}

	inline static int32_t get_offset_of_removeElementName_24() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___removeElementName_24)); }
	inline String_t* get_removeElementName_24() const { return ___removeElementName_24; }
	inline String_t** get_address_of_removeElementName_24() { return &___removeElementName_24; }
	inline void set_removeElementName_24(String_t* value)
	{
		___removeElementName_24 = value;
		Il2CppCodeGenWriteBarrier((&___removeElementName_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONELEMENTCOLLECTION_T446763386_H
#ifndef CONFIGURATIONSECTION_T3156163955_H
#define CONFIGURATIONSECTION_T3156163955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSection
struct  ConfigurationSection_t3156163955  : public ConfigurationElement_t3318566633
{
public:
	// System.Configuration.SectionInformation System.Configuration.ConfigurationSection::sectionInformation
	SectionInformation_t2821611020 * ___sectionInformation_15;
	// System.Configuration.IConfigurationSectionHandler System.Configuration.ConfigurationSection::section_handler
	RuntimeObject* ___section_handler_16;
	// System.String System.Configuration.ConfigurationSection::externalDataXml
	String_t* ___externalDataXml_17;
	// System.Object System.Configuration.ConfigurationSection::_configContext
	RuntimeObject * ____configContext_18;

public:
	inline static int32_t get_offset_of_sectionInformation_15() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___sectionInformation_15)); }
	inline SectionInformation_t2821611020 * get_sectionInformation_15() const { return ___sectionInformation_15; }
	inline SectionInformation_t2821611020 ** get_address_of_sectionInformation_15() { return &___sectionInformation_15; }
	inline void set_sectionInformation_15(SectionInformation_t2821611020 * value)
	{
		___sectionInformation_15 = value;
		Il2CppCodeGenWriteBarrier((&___sectionInformation_15), value);
	}

	inline static int32_t get_offset_of_section_handler_16() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___section_handler_16)); }
	inline RuntimeObject* get_section_handler_16() const { return ___section_handler_16; }
	inline RuntimeObject** get_address_of_section_handler_16() { return &___section_handler_16; }
	inline void set_section_handler_16(RuntimeObject* value)
	{
		___section_handler_16 = value;
		Il2CppCodeGenWriteBarrier((&___section_handler_16), value);
	}

	inline static int32_t get_offset_of_externalDataXml_17() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___externalDataXml_17)); }
	inline String_t* get_externalDataXml_17() const { return ___externalDataXml_17; }
	inline String_t** get_address_of_externalDataXml_17() { return &___externalDataXml_17; }
	inline void set_externalDataXml_17(String_t* value)
	{
		___externalDataXml_17 = value;
		Il2CppCodeGenWriteBarrier((&___externalDataXml_17), value);
	}

	inline static int32_t get_offset_of__configContext_18() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ____configContext_18)); }
	inline RuntimeObject * get__configContext_18() const { return ____configContext_18; }
	inline RuntimeObject ** get_address_of__configContext_18() { return &____configContext_18; }
	inline void set__configContext_18(RuntimeObject * value)
	{
		____configContext_18 = value;
		Il2CppCodeGenWriteBarrier((&____configContext_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONSECTION_T3156163955_H
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
#ifndef AUTHENTICATIONMODULEELEMENT_T2289740666_H
#define AUTHENTICATIONMODULEELEMENT_T2289740666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.AuthenticationModuleElement
struct  AuthenticationModuleElement_t2289740666  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct AuthenticationModuleElement_t2289740666_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.AuthenticationModuleElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.AuthenticationModuleElement::typeProp
	ConfigurationProperty_t3590861854 * ___typeProp_16;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(AuthenticationModuleElement_t2289740666_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_typeProp_16() { return static_cast<int32_t>(offsetof(AuthenticationModuleElement_t2289740666_StaticFields, ___typeProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_typeProp_16() const { return ___typeProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_typeProp_16() { return &___typeProp_16; }
	inline void set_typeProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___typeProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___typeProp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONMODULEELEMENT_T2289740666_H
#ifndef BYPASSELEMENT_T2358616601_H
#define BYPASSELEMENT_T2358616601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.BypassElement
struct  BypassElement_t2358616601  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct BypassElement_t2358616601_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.BypassElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.BypassElement::addressProp
	ConfigurationProperty_t3590861854 * ___addressProp_16;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(BypassElement_t2358616601_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_addressProp_16() { return static_cast<int32_t>(offsetof(BypassElement_t2358616601_StaticFields, ___addressProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_addressProp_16() const { return ___addressProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_addressProp_16() { return &___addressProp_16; }
	inline void set_addressProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___addressProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___addressProp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYPASSELEMENT_T2358616601_H
#ifndef CONNECTIONMANAGEMENTELEMENT_T3857438253_H
#define CONNECTIONMANAGEMENTELEMENT_T3857438253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementElement
struct  ConnectionManagementElement_t3857438253  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct ConnectionManagementElement_t3857438253_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementElement::addressProp
	ConfigurationProperty_t3590861854 * ___addressProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementElement::maxConnectionProp
	ConfigurationProperty_t3590861854 * ___maxConnectionProp_17;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t3857438253_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_addressProp_16() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t3857438253_StaticFields, ___addressProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_addressProp_16() const { return ___addressProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_addressProp_16() { return &___addressProp_16; }
	inline void set_addressProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___addressProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___addressProp_16), value);
	}

	inline static int32_t get_offset_of_maxConnectionProp_17() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t3857438253_StaticFields, ___maxConnectionProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_maxConnectionProp_17() const { return ___maxConnectionProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maxConnectionProp_17() { return &___maxConnectionProp_17; }
	inline void set_maxConnectionProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___maxConnectionProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___maxConnectionProp_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTELEMENT_T3857438253_H
#ifndef HTTPWEBREQUESTELEMENT_T2801692355_H
#define HTTPWEBREQUESTELEMENT_T2801692355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.HttpWebRequestElement
struct  HttpWebRequestElement_t2801692355  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct HttpWebRequestElement_t2801692355_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumErrorResponseLengthProp
	ConfigurationProperty_t3590861854 * ___maximumErrorResponseLengthProp_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumResponseHeadersLengthProp
	ConfigurationProperty_t3590861854 * ___maximumResponseHeadersLengthProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumUnauthorizedUploadLengthProp
	ConfigurationProperty_t3590861854 * ___maximumUnauthorizedUploadLengthProp_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::useUnsafeHeaderParsingProp
	ConfigurationProperty_t3590861854 * ___useUnsafeHeaderParsingProp_18;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpWebRequestElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_19;

public:
	inline static int32_t get_offset_of_maximumErrorResponseLengthProp_15() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___maximumErrorResponseLengthProp_15)); }
	inline ConfigurationProperty_t3590861854 * get_maximumErrorResponseLengthProp_15() const { return ___maximumErrorResponseLengthProp_15; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maximumErrorResponseLengthProp_15() { return &___maximumErrorResponseLengthProp_15; }
	inline void set_maximumErrorResponseLengthProp_15(ConfigurationProperty_t3590861854 * value)
	{
		___maximumErrorResponseLengthProp_15 = value;
		Il2CppCodeGenWriteBarrier((&___maximumErrorResponseLengthProp_15), value);
	}

	inline static int32_t get_offset_of_maximumResponseHeadersLengthProp_16() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___maximumResponseHeadersLengthProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_maximumResponseHeadersLengthProp_16() const { return ___maximumResponseHeadersLengthProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maximumResponseHeadersLengthProp_16() { return &___maximumResponseHeadersLengthProp_16; }
	inline void set_maximumResponseHeadersLengthProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___maximumResponseHeadersLengthProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___maximumResponseHeadersLengthProp_16), value);
	}

	inline static int32_t get_offset_of_maximumUnauthorizedUploadLengthProp_17() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___maximumUnauthorizedUploadLengthProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_maximumUnauthorizedUploadLengthProp_17() const { return ___maximumUnauthorizedUploadLengthProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maximumUnauthorizedUploadLengthProp_17() { return &___maximumUnauthorizedUploadLengthProp_17; }
	inline void set_maximumUnauthorizedUploadLengthProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___maximumUnauthorizedUploadLengthProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___maximumUnauthorizedUploadLengthProp_17), value);
	}

	inline static int32_t get_offset_of_useUnsafeHeaderParsingProp_18() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___useUnsafeHeaderParsingProp_18)); }
	inline ConfigurationProperty_t3590861854 * get_useUnsafeHeaderParsingProp_18() const { return ___useUnsafeHeaderParsingProp_18; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_useUnsafeHeaderParsingProp_18() { return &___useUnsafeHeaderParsingProp_18; }
	inline void set_useUnsafeHeaderParsingProp_18(ConfigurationProperty_t3590861854 * value)
	{
		___useUnsafeHeaderParsingProp_18 = value;
		Il2CppCodeGenWriteBarrier((&___useUnsafeHeaderParsingProp_18), value);
	}

	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPWEBREQUESTELEMENT_T2801692355_H
#ifndef IPV6ELEMENT_T180053194_H
#define IPV6ELEMENT_T180053194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.Ipv6Element
struct  Ipv6Element_t180053194  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct Ipv6Element_t180053194_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.Ipv6Element::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.Ipv6Element::enabledProp
	ConfigurationProperty_t3590861854 * ___enabledProp_16;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(Ipv6Element_t180053194_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_enabledProp_16() { return static_cast<int32_t>(offsetof(Ipv6Element_t180053194_StaticFields, ___enabledProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_enabledProp_16() const { return ___enabledProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_enabledProp_16() { return &___enabledProp_16; }
	inline void set_enabledProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___enabledProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___enabledProp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPV6ELEMENT_T180053194_H
#ifndef MODULEELEMENT_T3252950656_H
#define MODULEELEMENT_T3252950656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ModuleElement
struct  ModuleElement_t3252950656  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct ModuleElement_t3252950656_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ModuleElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ModuleElement::typeProp
	ConfigurationProperty_t3590861854 * ___typeProp_16;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(ModuleElement_t3252950656_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_typeProp_16() { return static_cast<int32_t>(offsetof(ModuleElement_t3252950656_StaticFields, ___typeProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_typeProp_16() const { return ___typeProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_typeProp_16() { return &___typeProp_16; }
	inline void set_typeProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___typeProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___typeProp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULEELEMENT_T3252950656_H
#ifndef NETSECTIONGROUP_T3270122580_H
#define NETSECTIONGROUP_T3270122580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.NetSectionGroup
struct  NetSectionGroup_t3270122580  : public ConfigurationSectionGroup_t4179402520
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETSECTIONGROUP_T3270122580_H
#ifndef PERFORMANCECOUNTERSELEMENT_T4093363992_H
#define PERFORMANCECOUNTERSELEMENT_T4093363992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.PerformanceCountersElement
struct  PerformanceCountersElement_t4093363992  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct PerformanceCountersElement_t4093363992_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.PerformanceCountersElement::enabledProp
	ConfigurationProperty_t3590861854 * ___enabledProp_15;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_16;

public:
	inline static int32_t get_offset_of_enabledProp_15() { return static_cast<int32_t>(offsetof(PerformanceCountersElement_t4093363992_StaticFields, ___enabledProp_15)); }
	inline ConfigurationProperty_t3590861854 * get_enabledProp_15() const { return ___enabledProp_15; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_enabledProp_15() { return &___enabledProp_15; }
	inline void set_enabledProp_15(ConfigurationProperty_t3590861854 * value)
	{
		___enabledProp_15 = value;
		Il2CppCodeGenWriteBarrier((&___enabledProp_15), value);
	}

	inline static int32_t get_offset_of_properties_16() { return static_cast<int32_t>(offsetof(PerformanceCountersElement_t4093363992_StaticFields, ___properties_16)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_16() const { return ___properties_16; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_16() { return &___properties_16; }
	inline void set_properties_16(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_16 = value;
		Il2CppCodeGenWriteBarrier((&___properties_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFORMANCECOUNTERSELEMENT_T4093363992_H
#ifndef PROXYELEMENT_T3214064751_H
#define PROXYELEMENT_T3214064751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement
struct  ProxyElement_t3214064751  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct ProxyElement_t3214064751_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ProxyElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::autoDetectProp
	ConfigurationProperty_t3590861854 * ___autoDetectProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::bypassOnLocalProp
	ConfigurationProperty_t3590861854 * ___bypassOnLocalProp_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::proxyAddressProp
	ConfigurationProperty_t3590861854 * ___proxyAddressProp_18;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::scriptLocationProp
	ConfigurationProperty_t3590861854 * ___scriptLocationProp_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::useSystemDefaultProp
	ConfigurationProperty_t3590861854 * ___useSystemDefaultProp_20;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_autoDetectProp_16() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___autoDetectProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_autoDetectProp_16() const { return ___autoDetectProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_autoDetectProp_16() { return &___autoDetectProp_16; }
	inline void set_autoDetectProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___autoDetectProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___autoDetectProp_16), value);
	}

	inline static int32_t get_offset_of_bypassOnLocalProp_17() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___bypassOnLocalProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_bypassOnLocalProp_17() const { return ___bypassOnLocalProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_bypassOnLocalProp_17() { return &___bypassOnLocalProp_17; }
	inline void set_bypassOnLocalProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___bypassOnLocalProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___bypassOnLocalProp_17), value);
	}

	inline static int32_t get_offset_of_proxyAddressProp_18() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___proxyAddressProp_18)); }
	inline ConfigurationProperty_t3590861854 * get_proxyAddressProp_18() const { return ___proxyAddressProp_18; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_proxyAddressProp_18() { return &___proxyAddressProp_18; }
	inline void set_proxyAddressProp_18(ConfigurationProperty_t3590861854 * value)
	{
		___proxyAddressProp_18 = value;
		Il2CppCodeGenWriteBarrier((&___proxyAddressProp_18), value);
	}

	inline static int32_t get_offset_of_scriptLocationProp_19() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___scriptLocationProp_19)); }
	inline ConfigurationProperty_t3590861854 * get_scriptLocationProp_19() const { return ___scriptLocationProp_19; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_scriptLocationProp_19() { return &___scriptLocationProp_19; }
	inline void set_scriptLocationProp_19(ConfigurationProperty_t3590861854 * value)
	{
		___scriptLocationProp_19 = value;
		Il2CppCodeGenWriteBarrier((&___scriptLocationProp_19), value);
	}

	inline static int32_t get_offset_of_useSystemDefaultProp_20() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___useSystemDefaultProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_useSystemDefaultProp_20() const { return ___useSystemDefaultProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_useSystemDefaultProp_20() { return &___useSystemDefaultProp_20; }
	inline void set_useSystemDefaultProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___useSystemDefaultProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___useSystemDefaultProp_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROXYELEMENT_T3214064751_H
#ifndef SERVICEPOINTMANAGERELEMENT_T2768640361_H
#define SERVICEPOINTMANAGERELEMENT_T2768640361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ServicePointManagerElement
struct  ServicePointManagerElement_t2768640361  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct ServicePointManagerElement_t2768640361_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ServicePointManagerElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::checkCertificateNameProp
	ConfigurationProperty_t3590861854 * ___checkCertificateNameProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::checkCertificateRevocationListProp
	ConfigurationProperty_t3590861854 * ___checkCertificateRevocationListProp_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::dnsRefreshTimeoutProp
	ConfigurationProperty_t3590861854 * ___dnsRefreshTimeoutProp_18;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::enableDnsRoundRobinProp
	ConfigurationProperty_t3590861854 * ___enableDnsRoundRobinProp_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::expect100ContinueProp
	ConfigurationProperty_t3590861854 * ___expect100ContinueProp_20;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::useNagleAlgorithmProp
	ConfigurationProperty_t3590861854 * ___useNagleAlgorithmProp_21;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_checkCertificateNameProp_16() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___checkCertificateNameProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_checkCertificateNameProp_16() const { return ___checkCertificateNameProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_checkCertificateNameProp_16() { return &___checkCertificateNameProp_16; }
	inline void set_checkCertificateNameProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___checkCertificateNameProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___checkCertificateNameProp_16), value);
	}

	inline static int32_t get_offset_of_checkCertificateRevocationListProp_17() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___checkCertificateRevocationListProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_checkCertificateRevocationListProp_17() const { return ___checkCertificateRevocationListProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_checkCertificateRevocationListProp_17() { return &___checkCertificateRevocationListProp_17; }
	inline void set_checkCertificateRevocationListProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___checkCertificateRevocationListProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___checkCertificateRevocationListProp_17), value);
	}

	inline static int32_t get_offset_of_dnsRefreshTimeoutProp_18() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___dnsRefreshTimeoutProp_18)); }
	inline ConfigurationProperty_t3590861854 * get_dnsRefreshTimeoutProp_18() const { return ___dnsRefreshTimeoutProp_18; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_dnsRefreshTimeoutProp_18() { return &___dnsRefreshTimeoutProp_18; }
	inline void set_dnsRefreshTimeoutProp_18(ConfigurationProperty_t3590861854 * value)
	{
		___dnsRefreshTimeoutProp_18 = value;
		Il2CppCodeGenWriteBarrier((&___dnsRefreshTimeoutProp_18), value);
	}

	inline static int32_t get_offset_of_enableDnsRoundRobinProp_19() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___enableDnsRoundRobinProp_19)); }
	inline ConfigurationProperty_t3590861854 * get_enableDnsRoundRobinProp_19() const { return ___enableDnsRoundRobinProp_19; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_enableDnsRoundRobinProp_19() { return &___enableDnsRoundRobinProp_19; }
	inline void set_enableDnsRoundRobinProp_19(ConfigurationProperty_t3590861854 * value)
	{
		___enableDnsRoundRobinProp_19 = value;
		Il2CppCodeGenWriteBarrier((&___enableDnsRoundRobinProp_19), value);
	}

	inline static int32_t get_offset_of_expect100ContinueProp_20() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___expect100ContinueProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_expect100ContinueProp_20() const { return ___expect100ContinueProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_expect100ContinueProp_20() { return &___expect100ContinueProp_20; }
	inline void set_expect100ContinueProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___expect100ContinueProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___expect100ContinueProp_20), value);
	}

	inline static int32_t get_offset_of_useNagleAlgorithmProp_21() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___useNagleAlgorithmProp_21)); }
	inline ConfigurationProperty_t3590861854 * get_useNagleAlgorithmProp_21() const { return ___useNagleAlgorithmProp_21; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_useNagleAlgorithmProp_21() { return &___useNagleAlgorithmProp_21; }
	inline void set_useNagleAlgorithmProp_21(ConfigurationProperty_t3590861854 * value)
	{
		___useNagleAlgorithmProp_21 = value;
		Il2CppCodeGenWriteBarrier((&___useNagleAlgorithmProp_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVICEPOINTMANAGERELEMENT_T2768640361_H
#ifndef SOCKETELEMENT_T3329874080_H
#define SOCKETELEMENT_T3329874080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.SocketElement
struct  SocketElement_t3329874080  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct SocketElement_t3329874080_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SocketElement::alwaysUseCompletionPortsForAcceptProp
	ConfigurationProperty_t3590861854 * ___alwaysUseCompletionPortsForAcceptProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SocketElement::alwaysUseCompletionPortsForConnectProp
	ConfigurationProperty_t3590861854 * ___alwaysUseCompletionPortsForConnectProp_17;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(SocketElement_t3329874080_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_alwaysUseCompletionPortsForAcceptProp_16() { return static_cast<int32_t>(offsetof(SocketElement_t3329874080_StaticFields, ___alwaysUseCompletionPortsForAcceptProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_alwaysUseCompletionPortsForAcceptProp_16() const { return ___alwaysUseCompletionPortsForAcceptProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_alwaysUseCompletionPortsForAcceptProp_16() { return &___alwaysUseCompletionPortsForAcceptProp_16; }
	inline void set_alwaysUseCompletionPortsForAcceptProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___alwaysUseCompletionPortsForAcceptProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___alwaysUseCompletionPortsForAcceptProp_16), value);
	}

	inline static int32_t get_offset_of_alwaysUseCompletionPortsForConnectProp_17() { return static_cast<int32_t>(offsetof(SocketElement_t3329874080_StaticFields, ___alwaysUseCompletionPortsForConnectProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_alwaysUseCompletionPortsForConnectProp_17() const { return ___alwaysUseCompletionPortsForConnectProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_alwaysUseCompletionPortsForConnectProp_17() { return &___alwaysUseCompletionPortsForConnectProp_17; }
	inline void set_alwaysUseCompletionPortsForConnectProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___alwaysUseCompletionPortsForConnectProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___alwaysUseCompletionPortsForConnectProp_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETELEMENT_T3329874080_H
#ifndef WEBPROXYSCRIPTELEMENT_T477406598_H
#define WEBPROXYSCRIPTELEMENT_T477406598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebProxyScriptElement
struct  WebProxyScriptElement_t477406598  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct WebProxyScriptElement_t477406598_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebProxyScriptElement::downloadTimeoutProp
	ConfigurationProperty_t3590861854 * ___downloadTimeoutProp_15;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebProxyScriptElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_16;

public:
	inline static int32_t get_offset_of_downloadTimeoutProp_15() { return static_cast<int32_t>(offsetof(WebProxyScriptElement_t477406598_StaticFields, ___downloadTimeoutProp_15)); }
	inline ConfigurationProperty_t3590861854 * get_downloadTimeoutProp_15() const { return ___downloadTimeoutProp_15; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_downloadTimeoutProp_15() { return &___downloadTimeoutProp_15; }
	inline void set_downloadTimeoutProp_15(ConfigurationProperty_t3590861854 * value)
	{
		___downloadTimeoutProp_15 = value;
		Il2CppCodeGenWriteBarrier((&___downloadTimeoutProp_15), value);
	}

	inline static int32_t get_offset_of_properties_16() { return static_cast<int32_t>(offsetof(WebProxyScriptElement_t477406598_StaticFields, ___properties_16)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_16() const { return ___properties_16; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_16() { return &___properties_16; }
	inline void set_properties_16(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_16 = value;
		Il2CppCodeGenWriteBarrier((&___properties_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBPROXYSCRIPTELEMENT_T477406598_H
#ifndef WEBREQUESTMODULEELEMENT_T1406085120_H
#define WEBREQUESTMODULEELEMENT_T1406085120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebRequestModuleElement
struct  WebRequestModuleElement_t1406085120  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct WebRequestModuleElement_t1406085120_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModuleElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModuleElement::prefixProp
	ConfigurationProperty_t3590861854 * ___prefixProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModuleElement::typeProp
	ConfigurationProperty_t3590861854 * ___typeProp_17;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t1406085120_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_prefixProp_16() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t1406085120_StaticFields, ___prefixProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_prefixProp_16() const { return ___prefixProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_prefixProp_16() { return &___prefixProp_16; }
	inline void set_prefixProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___prefixProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___prefixProp_16), value);
	}

	inline static int32_t get_offset_of_typeProp_17() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t1406085120_StaticFields, ___typeProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_typeProp_17() const { return ___typeProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_typeProp_17() { return &___typeProp_17; }
	inline void set_typeProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___typeProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___typeProp_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTMODULEELEMENT_T1406085120_H
#ifndef ALIGNMENTUNION_T208902285_H
#define ALIGNMENTUNION_T208902285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.AlignmentUnion
struct  AlignmentUnion_t208902285 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Net.NetworkInformation.AlignmentUnion::Alignment
			uint64_t ___Alignment_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Alignment_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Net.NetworkInformation.AlignmentUnion::Length
			int32_t ___Length_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Length_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IfIndex_2_OffsetPadding[4];
			// System.Int32 System.Net.NetworkInformation.AlignmentUnion::IfIndex
			int32_t ___IfIndex_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___IfIndex_2_OffsetPadding_forAlignmentOnly[4];
			int32_t ___IfIndex_2_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Alignment_0() { return static_cast<int32_t>(offsetof(AlignmentUnion_t208902285, ___Alignment_0)); }
	inline uint64_t get_Alignment_0() const { return ___Alignment_0; }
	inline uint64_t* get_address_of_Alignment_0() { return &___Alignment_0; }
	inline void set_Alignment_0(uint64_t value)
	{
		___Alignment_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(AlignmentUnion_t208902285, ___Length_1)); }
	inline int32_t get_Length_1() const { return ___Length_1; }
	inline int32_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int32_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_IfIndex_2() { return static_cast<int32_t>(offsetof(AlignmentUnion_t208902285, ___IfIndex_2)); }
	inline int32_t get_IfIndex_2() const { return ___IfIndex_2; }
	inline int32_t* get_address_of_IfIndex_2() { return &___IfIndex_2; }
	inline void set_IfIndex_2(int32_t value)
	{
		___IfIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALIGNMENTUNION_T208902285_H
#ifndef COMMONUNIXIPGLOBALPROPERTIES_T1338606518_H
#define COMMONUNIXIPGLOBALPROPERTIES_T1338606518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.CommonUnixIPGlobalProperties
struct  CommonUnixIPGlobalProperties_t1338606518  : public IPGlobalProperties_t3113415935
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMONUNIXIPGLOBALPROPERTIES_T1338606518_H
#ifndef SOCKADDR_T371844119_H
#define SOCKADDR_T371844119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr
struct  sockaddr_t371844119 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr::sa_len
	uint8_t ___sa_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr::sa_family
	uint8_t ___sa_family_1;

public:
	inline static int32_t get_offset_of_sa_len_0() { return static_cast<int32_t>(offsetof(sockaddr_t371844119, ___sa_len_0)); }
	inline uint8_t get_sa_len_0() const { return ___sa_len_0; }
	inline uint8_t* get_address_of_sa_len_0() { return &___sa_len_0; }
	inline void set_sa_len_0(uint8_t value)
	{
		___sa_len_0 = value;
	}

	inline static int32_t get_offset_of_sa_family_1() { return static_cast<int32_t>(offsetof(sockaddr_t371844119, ___sa_family_1)); }
	inline uint8_t get_sa_family_1() const { return ___sa_family_1; }
	inline uint8_t* get_address_of_sa_family_1() { return &___sa_family_1; }
	inline void set_sa_family_1(uint8_t value)
	{
		___sa_family_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKADDR_T371844119_H
#ifndef SOCKADDR_DL_T1317779094_H
#define SOCKADDR_DL_T1317779094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
struct  sockaddr_dl_t1317779094 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_len
	uint8_t ___sdl_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_family
	uint8_t ___sdl_family_1;
	// System.UInt16 System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_index
	uint16_t ___sdl_index_2;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_type
	uint8_t ___sdl_type_3;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_nlen
	uint8_t ___sdl_nlen_4;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_alen
	uint8_t ___sdl_alen_5;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_slen
	uint8_t ___sdl_slen_6;
	// System.Byte[] System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_data
	ByteU5BU5D_t4116647657* ___sdl_data_7;

public:
	inline static int32_t get_offset_of_sdl_len_0() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_len_0)); }
	inline uint8_t get_sdl_len_0() const { return ___sdl_len_0; }
	inline uint8_t* get_address_of_sdl_len_0() { return &___sdl_len_0; }
	inline void set_sdl_len_0(uint8_t value)
	{
		___sdl_len_0 = value;
	}

	inline static int32_t get_offset_of_sdl_family_1() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_family_1)); }
	inline uint8_t get_sdl_family_1() const { return ___sdl_family_1; }
	inline uint8_t* get_address_of_sdl_family_1() { return &___sdl_family_1; }
	inline void set_sdl_family_1(uint8_t value)
	{
		___sdl_family_1 = value;
	}

	inline static int32_t get_offset_of_sdl_index_2() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_index_2)); }
	inline uint16_t get_sdl_index_2() const { return ___sdl_index_2; }
	inline uint16_t* get_address_of_sdl_index_2() { return &___sdl_index_2; }
	inline void set_sdl_index_2(uint16_t value)
	{
		___sdl_index_2 = value;
	}

	inline static int32_t get_offset_of_sdl_type_3() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_type_3)); }
	inline uint8_t get_sdl_type_3() const { return ___sdl_type_3; }
	inline uint8_t* get_address_of_sdl_type_3() { return &___sdl_type_3; }
	inline void set_sdl_type_3(uint8_t value)
	{
		___sdl_type_3 = value;
	}

	inline static int32_t get_offset_of_sdl_nlen_4() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_nlen_4)); }
	inline uint8_t get_sdl_nlen_4() const { return ___sdl_nlen_4; }
	inline uint8_t* get_address_of_sdl_nlen_4() { return &___sdl_nlen_4; }
	inline void set_sdl_nlen_4(uint8_t value)
	{
		___sdl_nlen_4 = value;
	}

	inline static int32_t get_offset_of_sdl_alen_5() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_alen_5)); }
	inline uint8_t get_sdl_alen_5() const { return ___sdl_alen_5; }
	inline uint8_t* get_address_of_sdl_alen_5() { return &___sdl_alen_5; }
	inline void set_sdl_alen_5(uint8_t value)
	{
		___sdl_alen_5 = value;
	}

	inline static int32_t get_offset_of_sdl_slen_6() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_slen_6)); }
	inline uint8_t get_sdl_slen_6() const { return ___sdl_slen_6; }
	inline uint8_t* get_address_of_sdl_slen_6() { return &___sdl_slen_6; }
	inline void set_sdl_slen_6(uint8_t value)
	{
		___sdl_slen_6 = value;
	}

	inline static int32_t get_offset_of_sdl_data_7() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_data_7)); }
	inline ByteU5BU5D_t4116647657* get_sdl_data_7() const { return ___sdl_data_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_sdl_data_7() { return &___sdl_data_7; }
	inline void set_sdl_data_7(ByteU5BU5D_t4116647657* value)
	{
		___sdl_data_7 = value;
		Il2CppCodeGenWriteBarrier((&___sdl_data_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
struct sockaddr_dl_t1317779094_marshaled_pinvoke
{
	uint8_t ___sdl_len_0;
	uint8_t ___sdl_family_1;
	uint16_t ___sdl_index_2;
	uint8_t ___sdl_type_3;
	uint8_t ___sdl_nlen_4;
	uint8_t ___sdl_alen_5;
	uint8_t ___sdl_slen_6;
	uint8_t* ___sdl_data_7;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
struct sockaddr_dl_t1317779094_marshaled_com
{
	uint8_t ___sdl_len_0;
	uint8_t ___sdl_family_1;
	uint16_t ___sdl_index_2;
	uint8_t ___sdl_type_3;
	uint8_t ___sdl_nlen_4;
	uint8_t ___sdl_alen_5;
	uint8_t ___sdl_slen_6;
	uint8_t* ___sdl_data_7;
};
#endif // SOCKADDR_DL_T1317779094_H
#ifndef SOCKADDR_IN_T1317910171_H
#define SOCKADDR_IN_T1317910171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr_in
struct  sockaddr_in_t1317910171 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_len
	uint8_t ___sin_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_family
	uint8_t ___sin_family_1;
	// System.UInt16 System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_port
	uint16_t ___sin_port_2;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_addr
	uint32_t ___sin_addr_3;

public:
	inline static int32_t get_offset_of_sin_len_0() { return static_cast<int32_t>(offsetof(sockaddr_in_t1317910171, ___sin_len_0)); }
	inline uint8_t get_sin_len_0() const { return ___sin_len_0; }
	inline uint8_t* get_address_of_sin_len_0() { return &___sin_len_0; }
	inline void set_sin_len_0(uint8_t value)
	{
		___sin_len_0 = value;
	}

	inline static int32_t get_offset_of_sin_family_1() { return static_cast<int32_t>(offsetof(sockaddr_in_t1317910171, ___sin_family_1)); }
	inline uint8_t get_sin_family_1() const { return ___sin_family_1; }
	inline uint8_t* get_address_of_sin_family_1() { return &___sin_family_1; }
	inline void set_sin_family_1(uint8_t value)
	{
		___sin_family_1 = value;
	}

	inline static int32_t get_offset_of_sin_port_2() { return static_cast<int32_t>(offsetof(sockaddr_in_t1317910171, ___sin_port_2)); }
	inline uint16_t get_sin_port_2() const { return ___sin_port_2; }
	inline uint16_t* get_address_of_sin_port_2() { return &___sin_port_2; }
	inline void set_sin_port_2(uint16_t value)
	{
		___sin_port_2 = value;
	}

	inline static int32_t get_offset_of_sin_addr_3() { return static_cast<int32_t>(offsetof(sockaddr_in_t1317910171, ___sin_addr_3)); }
	inline uint32_t get_sin_addr_3() const { return ___sin_addr_3; }
	inline uint32_t* get_address_of_sin_addr_3() { return &___sin_addr_3; }
	inline void set_sin_addr_3(uint32_t value)
	{
		___sin_addr_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKADDR_IN_T1317910171_H
#ifndef UNIXNETWORKINTERFACEAPI_T1061423219_H
#define UNIXNETWORKINTERFACEAPI_T1061423219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceFactory/UnixNetworkInterfaceAPI
struct  UnixNetworkInterfaceAPI_t1061423219  : public NetworkInterfaceFactory_t1756522298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXNETWORKINTERFACEAPI_T1061423219_H
#ifndef WIN32NETWORKINTERFACEAPI_T912414909_H
#define WIN32NETWORKINTERFACEAPI_T912414909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceFactory/Win32NetworkInterfaceAPI
struct  Win32NetworkInterfaceAPI_t912414909  : public NetworkInterfaceFactory_t1756522298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32NETWORKINTERFACEAPI_T912414909_H
#ifndef WIN32IPGLOBALPROPERTIES_T3375126358_H
#define WIN32IPGLOBALPROPERTIES_T3375126358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPGlobalProperties
struct  Win32IPGlobalProperties_t3375126358  : public IPGlobalProperties_t3113415935
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32IPGLOBALPROPERTIES_T3375126358_H
#ifndef WIN32LENGTHFLAGSUNION_T1383639798_H
#define WIN32LENGTHFLAGSUNION_T1383639798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32LengthFlagsUnion
struct  Win32LengthFlagsUnion_t1383639798 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Win32LengthFlagsUnion::Length
	uint32_t ___Length_0;
	// System.UInt32 System.Net.NetworkInformation.Win32LengthFlagsUnion::Flags
	uint32_t ___Flags_1;

public:
	inline static int32_t get_offset_of_Length_0() { return static_cast<int32_t>(offsetof(Win32LengthFlagsUnion_t1383639798, ___Length_0)); }
	inline uint32_t get_Length_0() const { return ___Length_0; }
	inline uint32_t* get_address_of_Length_0() { return &___Length_0; }
	inline void set_Length_0(uint32_t value)
	{
		___Length_0 = value;
	}

	inline static int32_t get_offset_of_Flags_1() { return static_cast<int32_t>(offsetof(Win32LengthFlagsUnion_t1383639798, ___Flags_1)); }
	inline uint32_t get_Flags_1() const { return ___Flags_1; }
	inline uint32_t* get_address_of_Flags_1() { return &___Flags_1; }
	inline void set_Flags_1(uint32_t value)
	{
		___Flags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32LENGTHFLAGSUNION_T1383639798_H
#ifndef SOCKADDR_IN_T2786965223_H
#define SOCKADDR_IN_T2786965223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.sockaddr_in
struct  sockaddr_in_t2786965223 
{
public:
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in::sin_family
	uint16_t ___sin_family_0;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in::sin_port
	uint16_t ___sin_port_1;
	// System.UInt32 System.Net.NetworkInformation.sockaddr_in::sin_addr
	uint32_t ___sin_addr_2;

public:
	inline static int32_t get_offset_of_sin_family_0() { return static_cast<int32_t>(offsetof(sockaddr_in_t2786965223, ___sin_family_0)); }
	inline uint16_t get_sin_family_0() const { return ___sin_family_0; }
	inline uint16_t* get_address_of_sin_family_0() { return &___sin_family_0; }
	inline void set_sin_family_0(uint16_t value)
	{
		___sin_family_0 = value;
	}

	inline static int32_t get_offset_of_sin_port_1() { return static_cast<int32_t>(offsetof(sockaddr_in_t2786965223, ___sin_port_1)); }
	inline uint16_t get_sin_port_1() const { return ___sin_port_1; }
	inline uint16_t* get_address_of_sin_port_1() { return &___sin_port_1; }
	inline void set_sin_port_1(uint16_t value)
	{
		___sin_port_1 = value;
	}

	inline static int32_t get_offset_of_sin_addr_2() { return static_cast<int32_t>(offsetof(sockaddr_in_t2786965223, ___sin_addr_2)); }
	inline uint32_t get_sin_addr_2() const { return ___sin_addr_2; }
	inline uint32_t* get_address_of_sin_addr_2() { return &___sin_addr_2; }
	inline void set_sin_addr_2(uint32_t value)
	{
		___sin_addr_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKADDR_IN_T2786965223_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef REQUESTCACHELEVEL_T1509648360_H
#define REQUESTCACHELEVEL_T1509648360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheLevel
struct  RequestCacheLevel_t1509648360 
{
public:
	// System.Int32 System.Net.Cache.RequestCacheLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RequestCacheLevel_t1509648360, ___value___2)); }
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
#endif // REQUESTCACHELEVEL_T1509648360_H
#ifndef AUTHENTICATIONMODULEELEMENTCOLLECTION_T1161221431_H
#define AUTHENTICATIONMODULEELEMENTCOLLECTION_T1161221431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.AuthenticationModuleElementCollection
struct  AuthenticationModuleElementCollection_t1161221431  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONMODULEELEMENTCOLLECTION_T1161221431_H
#ifndef AUTHENTICATIONMODULESSECTION_T1083221556_H
#define AUTHENTICATIONMODULESSECTION_T1083221556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.AuthenticationModulesSection
struct  AuthenticationModulesSection_t1083221556  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct AuthenticationModulesSection_t1083221556_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.AuthenticationModulesSection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.AuthenticationModulesSection::authenticationModulesProp
	ConfigurationProperty_t3590861854 * ___authenticationModulesProp_20;

public:
	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(AuthenticationModulesSection_t1083221556_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}

	inline static int32_t get_offset_of_authenticationModulesProp_20() { return static_cast<int32_t>(offsetof(AuthenticationModulesSection_t1083221556_StaticFields, ___authenticationModulesProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_authenticationModulesProp_20() const { return ___authenticationModulesProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_authenticationModulesProp_20() { return &___authenticationModulesProp_20; }
	inline void set_authenticationModulesProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___authenticationModulesProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___authenticationModulesProp_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONMODULESSECTION_T1083221556_H
#ifndef BYPASSELEMENTCOLLECTION_T47326401_H
#define BYPASSELEMENTCOLLECTION_T47326401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.BypassElementCollection
struct  BypassElementCollection_t47326401  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYPASSELEMENTCOLLECTION_T47326401_H
#ifndef CONNECTIONMANAGEMENTELEMENTCOLLECTION_T3860227195_H
#define CONNECTIONMANAGEMENTELEMENTCOLLECTION_T3860227195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementElementCollection
struct  ConnectionManagementElementCollection_t3860227195  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTELEMENTCOLLECTION_T3860227195_H
#ifndef CONNECTIONMANAGEMENTSECTION_T1603642748_H
#define CONNECTIONMANAGEMENTSECTION_T1603642748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementSection
struct  ConnectionManagementSection_t1603642748  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct ConnectionManagementSection_t1603642748_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementSection::connectionManagementProp
	ConfigurationProperty_t3590861854 * ___connectionManagementProp_19;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_20;

public:
	inline static int32_t get_offset_of_connectionManagementProp_19() { return static_cast<int32_t>(offsetof(ConnectionManagementSection_t1603642748_StaticFields, ___connectionManagementProp_19)); }
	inline ConfigurationProperty_t3590861854 * get_connectionManagementProp_19() const { return ___connectionManagementProp_19; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_connectionManagementProp_19() { return &___connectionManagementProp_19; }
	inline void set_connectionManagementProp_19(ConfigurationProperty_t3590861854 * value)
	{
		___connectionManagementProp_19 = value;
		Il2CppCodeGenWriteBarrier((&___connectionManagementProp_19), value);
	}

	inline static int32_t get_offset_of_properties_20() { return static_cast<int32_t>(offsetof(ConnectionManagementSection_t1603642748_StaticFields, ___properties_20)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_20() const { return ___properties_20; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_20() { return &___properties_20; }
	inline void set_properties_20(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_20 = value;
		Il2CppCodeGenWriteBarrier((&___properties_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTSECTION_T1603642748_H
#ifndef DEFAULTPROXYSECTION_T4167594595_H
#define DEFAULTPROXYSECTION_T4167594595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.DefaultProxySection
struct  DefaultProxySection_t4167594595  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct DefaultProxySection_t4167594595_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::bypassListProp
	ConfigurationProperty_t3590861854 * ___bypassListProp_20;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::enabledProp
	ConfigurationProperty_t3590861854 * ___enabledProp_21;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::moduleProp
	ConfigurationProperty_t3590861854 * ___moduleProp_22;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::proxyProp
	ConfigurationProperty_t3590861854 * ___proxyProp_23;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::useDefaultCredentialsProp
	ConfigurationProperty_t3590861854 * ___useDefaultCredentialsProp_24;

public:
	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}

	inline static int32_t get_offset_of_bypassListProp_20() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___bypassListProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_bypassListProp_20() const { return ___bypassListProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_bypassListProp_20() { return &___bypassListProp_20; }
	inline void set_bypassListProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___bypassListProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___bypassListProp_20), value);
	}

	inline static int32_t get_offset_of_enabledProp_21() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___enabledProp_21)); }
	inline ConfigurationProperty_t3590861854 * get_enabledProp_21() const { return ___enabledProp_21; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_enabledProp_21() { return &___enabledProp_21; }
	inline void set_enabledProp_21(ConfigurationProperty_t3590861854 * value)
	{
		___enabledProp_21 = value;
		Il2CppCodeGenWriteBarrier((&___enabledProp_21), value);
	}

	inline static int32_t get_offset_of_moduleProp_22() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___moduleProp_22)); }
	inline ConfigurationProperty_t3590861854 * get_moduleProp_22() const { return ___moduleProp_22; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_moduleProp_22() { return &___moduleProp_22; }
	inline void set_moduleProp_22(ConfigurationProperty_t3590861854 * value)
	{
		___moduleProp_22 = value;
		Il2CppCodeGenWriteBarrier((&___moduleProp_22), value);
	}

	inline static int32_t get_offset_of_proxyProp_23() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___proxyProp_23)); }
	inline ConfigurationProperty_t3590861854 * get_proxyProp_23() const { return ___proxyProp_23; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_proxyProp_23() { return &___proxyProp_23; }
	inline void set_proxyProp_23(ConfigurationProperty_t3590861854 * value)
	{
		___proxyProp_23 = value;
		Il2CppCodeGenWriteBarrier((&___proxyProp_23), value);
	}

	inline static int32_t get_offset_of_useDefaultCredentialsProp_24() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___useDefaultCredentialsProp_24)); }
	inline ConfigurationProperty_t3590861854 * get_useDefaultCredentialsProp_24() const { return ___useDefaultCredentialsProp_24; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_useDefaultCredentialsProp_24() { return &___useDefaultCredentialsProp_24; }
	inline void set_useDefaultCredentialsProp_24(ConfigurationProperty_t3590861854 * value)
	{
		___useDefaultCredentialsProp_24 = value;
		Il2CppCodeGenWriteBarrier((&___useDefaultCredentialsProp_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROXYSECTION_T4167594595_H
#ifndef AUTODETECTVALUES_T1649618618_H
#define AUTODETECTVALUES_T1649618618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement/AutoDetectValues
struct  AutoDetectValues_t1649618618 
{
public:
	// System.Int32 System.Net.Configuration.ProxyElement/AutoDetectValues::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoDetectValues_t1649618618, ___value___2)); }
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
#endif // AUTODETECTVALUES_T1649618618_H
#ifndef BYPASSONLOCALVALUES_T945670496_H
#define BYPASSONLOCALVALUES_T945670496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement/BypassOnLocalValues
struct  BypassOnLocalValues_t945670496 
{
public:
	// System.Int32 System.Net.Configuration.ProxyElement/BypassOnLocalValues::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BypassOnLocalValues_t945670496, ___value___2)); }
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
#endif // BYPASSONLOCALVALUES_T945670496_H
#ifndef USESYSTEMDEFAULTVALUES_T2711047072_H
#define USESYSTEMDEFAULTVALUES_T2711047072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement/UseSystemDefaultValues
struct  UseSystemDefaultValues_t2711047072 
{
public:
	// System.Int32 System.Net.Configuration.ProxyElement/UseSystemDefaultValues::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UseSystemDefaultValues_t2711047072, ___value___2)); }
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
#endif // USESYSTEMDEFAULTVALUES_T2711047072_H
#ifndef SETTINGSSECTION_T1259474535_H
#define SETTINGSSECTION_T1259474535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.SettingsSection
struct  SettingsSection_t1259474535  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct SettingsSection_t1259474535_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::httpWebRequestProp
	ConfigurationProperty_t3590861854 * ___httpWebRequestProp_20;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::ipv6Prop
	ConfigurationProperty_t3590861854 * ___ipv6Prop_21;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::performanceCountersProp
	ConfigurationProperty_t3590861854 * ___performanceCountersProp_22;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::servicePointManagerProp
	ConfigurationProperty_t3590861854 * ___servicePointManagerProp_23;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::webProxyScriptProp
	ConfigurationProperty_t3590861854 * ___webProxyScriptProp_24;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::socketProp
	ConfigurationProperty_t3590861854 * ___socketProp_25;

public:
	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}

	inline static int32_t get_offset_of_httpWebRequestProp_20() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___httpWebRequestProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_httpWebRequestProp_20() const { return ___httpWebRequestProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_httpWebRequestProp_20() { return &___httpWebRequestProp_20; }
	inline void set_httpWebRequestProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___httpWebRequestProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___httpWebRequestProp_20), value);
	}

	inline static int32_t get_offset_of_ipv6Prop_21() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___ipv6Prop_21)); }
	inline ConfigurationProperty_t3590861854 * get_ipv6Prop_21() const { return ___ipv6Prop_21; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_ipv6Prop_21() { return &___ipv6Prop_21; }
	inline void set_ipv6Prop_21(ConfigurationProperty_t3590861854 * value)
	{
		___ipv6Prop_21 = value;
		Il2CppCodeGenWriteBarrier((&___ipv6Prop_21), value);
	}

	inline static int32_t get_offset_of_performanceCountersProp_22() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___performanceCountersProp_22)); }
	inline ConfigurationProperty_t3590861854 * get_performanceCountersProp_22() const { return ___performanceCountersProp_22; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_performanceCountersProp_22() { return &___performanceCountersProp_22; }
	inline void set_performanceCountersProp_22(ConfigurationProperty_t3590861854 * value)
	{
		___performanceCountersProp_22 = value;
		Il2CppCodeGenWriteBarrier((&___performanceCountersProp_22), value);
	}

	inline static int32_t get_offset_of_servicePointManagerProp_23() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___servicePointManagerProp_23)); }
	inline ConfigurationProperty_t3590861854 * get_servicePointManagerProp_23() const { return ___servicePointManagerProp_23; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_servicePointManagerProp_23() { return &___servicePointManagerProp_23; }
	inline void set_servicePointManagerProp_23(ConfigurationProperty_t3590861854 * value)
	{
		___servicePointManagerProp_23 = value;
		Il2CppCodeGenWriteBarrier((&___servicePointManagerProp_23), value);
	}

	inline static int32_t get_offset_of_webProxyScriptProp_24() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___webProxyScriptProp_24)); }
	inline ConfigurationProperty_t3590861854 * get_webProxyScriptProp_24() const { return ___webProxyScriptProp_24; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_webProxyScriptProp_24() { return &___webProxyScriptProp_24; }
	inline void set_webProxyScriptProp_24(ConfigurationProperty_t3590861854 * value)
	{
		___webProxyScriptProp_24 = value;
		Il2CppCodeGenWriteBarrier((&___webProxyScriptProp_24), value);
	}

	inline static int32_t get_offset_of_socketProp_25() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___socketProp_25)); }
	inline ConfigurationProperty_t3590861854 * get_socketProp_25() const { return ___socketProp_25; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_socketProp_25() { return &___socketProp_25; }
	inline void set_socketProp_25(ConfigurationProperty_t3590861854 * value)
	{
		___socketProp_25 = value;
		Il2CppCodeGenWriteBarrier((&___socketProp_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGSSECTION_T1259474535_H
#ifndef WEBREQUESTMODULEELEMENTCOLLECTION_T925190782_H
#define WEBREQUESTMODULEELEMENTCOLLECTION_T925190782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebRequestModuleElementCollection
struct  WebRequestModuleElementCollection_t925190782  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTMODULEELEMENTCOLLECTION_T925190782_H
#ifndef WEBREQUESTMODULESSECTION_T4132732301_H
#define WEBREQUESTMODULESSECTION_T4132732301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebRequestModulesSection
struct  WebRequestModulesSection_t4132732301  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct WebRequestModulesSection_t4132732301_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModulesSection::webRequestModulesProp
	ConfigurationProperty_t3590861854 * ___webRequestModulesProp_20;

public:
	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(WebRequestModulesSection_t4132732301_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}

	inline static int32_t get_offset_of_webRequestModulesProp_20() { return static_cast<int32_t>(offsetof(WebRequestModulesSection_t4132732301_StaticFields, ___webRequestModulesProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_webRequestModulesProp_20() const { return ___webRequestModulesProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_webRequestModulesProp_20() { return &___webRequestModulesProp_20; }
	inline void set_webRequestModulesProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___webRequestModulesProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___webRequestModulesProp_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTMODULESSECTION_T4132732301_H
#ifndef LINUXARPHARDWARE_T827080684_H
#define LINUXARPHARDWARE_T827080684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxArpHardware
struct  LinuxArpHardware_t827080684 
{
public:
	// System.Int32 System.Net.NetworkInformation.LinuxArpHardware::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LinuxArpHardware_t827080684, ___value___2)); }
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
#endif // LINUXARPHARDWARE_T827080684_H
#ifndef MACOSARPHARDWARE_T4198534184_H
#define MACOSARPHARDWARE_T4198534184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsArpHardware
struct  MacOsArpHardware_t4198534184 
{
public:
	// System.Int32 System.Net.NetworkInformation.MacOsArpHardware::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MacOsArpHardware_t4198534184, ___value___2)); }
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
#endif // MACOSARPHARDWARE_T4198534184_H
#ifndef IFADDRS_T2169824096_H
#define IFADDRS_T2169824096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.ifaddrs
struct  ifaddrs_t2169824096 
{
public:
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_next
	intptr_t ___ifa_next_0;
	// System.String System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_name
	String_t* ___ifa_name_1;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_flags
	uint32_t ___ifa_flags_2;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_addr
	intptr_t ___ifa_addr_3;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_netmask
	intptr_t ___ifa_netmask_4;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_dstaddr
	intptr_t ___ifa_dstaddr_5;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_data
	intptr_t ___ifa_data_6;

public:
	inline static int32_t get_offset_of_ifa_next_0() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_next_0)); }
	inline intptr_t get_ifa_next_0() const { return ___ifa_next_0; }
	inline intptr_t* get_address_of_ifa_next_0() { return &___ifa_next_0; }
	inline void set_ifa_next_0(intptr_t value)
	{
		___ifa_next_0 = value;
	}

	inline static int32_t get_offset_of_ifa_name_1() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_name_1)); }
	inline String_t* get_ifa_name_1() const { return ___ifa_name_1; }
	inline String_t** get_address_of_ifa_name_1() { return &___ifa_name_1; }
	inline void set_ifa_name_1(String_t* value)
	{
		___ifa_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___ifa_name_1), value);
	}

	inline static int32_t get_offset_of_ifa_flags_2() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_flags_2)); }
	inline uint32_t get_ifa_flags_2() const { return ___ifa_flags_2; }
	inline uint32_t* get_address_of_ifa_flags_2() { return &___ifa_flags_2; }
	inline void set_ifa_flags_2(uint32_t value)
	{
		___ifa_flags_2 = value;
	}

	inline static int32_t get_offset_of_ifa_addr_3() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_addr_3)); }
	inline intptr_t get_ifa_addr_3() const { return ___ifa_addr_3; }
	inline intptr_t* get_address_of_ifa_addr_3() { return &___ifa_addr_3; }
	inline void set_ifa_addr_3(intptr_t value)
	{
		___ifa_addr_3 = value;
	}

	inline static int32_t get_offset_of_ifa_netmask_4() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_netmask_4)); }
	inline intptr_t get_ifa_netmask_4() const { return ___ifa_netmask_4; }
	inline intptr_t* get_address_of_ifa_netmask_4() { return &___ifa_netmask_4; }
	inline void set_ifa_netmask_4(intptr_t value)
	{
		___ifa_netmask_4 = value;
	}

	inline static int32_t get_offset_of_ifa_dstaddr_5() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_dstaddr_5)); }
	inline intptr_t get_ifa_dstaddr_5() const { return ___ifa_dstaddr_5; }
	inline intptr_t* get_address_of_ifa_dstaddr_5() { return &___ifa_dstaddr_5; }
	inline void set_ifa_dstaddr_5(intptr_t value)
	{
		___ifa_dstaddr_5 = value;
	}

	inline static int32_t get_offset_of_ifa_data_6() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_data_6)); }
	inline intptr_t get_ifa_data_6() const { return ___ifa_data_6; }
	inline intptr_t* get_address_of_ifa_data_6() { return &___ifa_data_6; }
	inline void set_ifa_data_6(intptr_t value)
	{
		___ifa_data_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.ifaddrs
struct ifaddrs_t2169824096_marshaled_pinvoke
{
	intptr_t ___ifa_next_0;
	char* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	intptr_t ___ifa_dstaddr_5;
	intptr_t ___ifa_data_6;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.ifaddrs
struct ifaddrs_t2169824096_marshaled_com
{
	intptr_t ___ifa_next_0;
	Il2CppChar* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	intptr_t ___ifa_dstaddr_5;
	intptr_t ___ifa_data_6;
};
#endif // IFADDRS_T2169824096_H
#ifndef IN6_ADDR_T1417766092_H
#define IN6_ADDR_T1417766092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.in6_addr
struct  in6_addr_t1417766092 
{
public:
	// System.Byte[] System.Net.NetworkInformation.MacOsStructs.in6_addr::u6_addr8
	ByteU5BU5D_t4116647657* ___u6_addr8_0;

public:
	inline static int32_t get_offset_of_u6_addr8_0() { return static_cast<int32_t>(offsetof(in6_addr_t1417766092, ___u6_addr8_0)); }
	inline ByteU5BU5D_t4116647657* get_u6_addr8_0() const { return ___u6_addr8_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_u6_addr8_0() { return &___u6_addr8_0; }
	inline void set_u6_addr8_0(ByteU5BU5D_t4116647657* value)
	{
		___u6_addr8_0 = value;
		Il2CppCodeGenWriteBarrier((&___u6_addr8_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.in6_addr
struct in6_addr_t1417766092_marshaled_pinvoke
{
	uint8_t ___u6_addr8_0[16];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.in6_addr
struct in6_addr_t1417766092_marshaled_com
{
	uint8_t ___u6_addr8_0[16];
};
#endif // IN6_ADDR_T1417766092_H
#ifndef NETBIOSNODETYPE_T3568904212_H
#define NETBIOSNODETYPE_T3568904212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetBiosNodeType
struct  NetBiosNodeType_t3568904212 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetBiosNodeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetBiosNodeType_t3568904212, ___value___2)); }
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
#endif // NETBIOSNODETYPE_T3568904212_H
#ifndef LINUXNETWORKINTERFACEAPI_T1157390748_H
#define LINUXNETWORKINTERFACEAPI_T1157390748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceFactory/LinuxNetworkInterfaceAPI
struct  LinuxNetworkInterfaceAPI_t1157390748  : public UnixNetworkInterfaceAPI_t1061423219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINUXNETWORKINTERFACEAPI_T1157390748_H
#ifndef MACOSNETWORKINTERFACEAPI_T1249733612_H
#define MACOSNETWORKINTERFACEAPI_T1249733612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceFactory/MacOsNetworkInterfaceAPI
struct  MacOsNetworkInterfaceAPI_t1249733612  : public UnixNetworkInterfaceAPI_t1061423219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACOSNETWORKINTERFACEAPI_T1249733612_H
#ifndef NETWORKINTERFACETYPE_T616418749_H
#define NETWORKINTERFACETYPE_T616418749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceType
struct  NetworkInterfaceType_t616418749 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInterfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkInterfaceType_t616418749, ___value___2)); }
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
#endif // NETWORKINTERFACETYPE_T616418749_H
#ifndef OPERATIONALSTATUS_T2709089529_H
#define OPERATIONALSTATUS_T2709089529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.OperationalStatus
struct  OperationalStatus_t2709089529 
{
public:
	// System.Int32 System.Net.NetworkInformation.OperationalStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OperationalStatus_t2709089529, ___value___2)); }
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
#endif // OPERATIONALSTATUS_T2709089529_H
#ifndef UNIXIPGLOBALPROPERTIES_T1460024316_H
#define UNIXIPGLOBALPROPERTIES_T1460024316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnixIPGlobalProperties
struct  UnixIPGlobalProperties_t1460024316  : public CommonUnixIPGlobalProperties_t1338606518
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXIPGLOBALPROPERTIES_T1460024316_H
#ifndef UNIXIPINTERFACEPROPERTIES_T1296234392_H
#define UNIXIPINTERFACEPROPERTIES_T1296234392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnixIPInterfaceProperties
struct  UnixIPInterfaceProperties_t1296234392  : public IPInterfaceProperties_t3964383369
{
public:
	// System.Net.NetworkInformation.UnixNetworkInterface System.Net.NetworkInformation.UnixIPInterfaceProperties::iface
	UnixNetworkInterface_t2401762829 * ___iface_0;
	// System.Collections.Generic.List`1<System.Net.IPAddress> System.Net.NetworkInformation.UnixIPInterfaceProperties::addresses
	List_1_t1713852332 * ___addresses_1;
	// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::dns_servers
	IPAddressCollection_t2315030214 * ___dns_servers_2;
	// System.String System.Net.NetworkInformation.UnixIPInterfaceProperties::dns_suffix
	String_t* ___dns_suffix_5;
	// System.DateTime System.Net.NetworkInformation.UnixIPInterfaceProperties::last_parse
	DateTime_t3738529785  ___last_parse_6;

public:
	inline static int32_t get_offset_of_iface_0() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___iface_0)); }
	inline UnixNetworkInterface_t2401762829 * get_iface_0() const { return ___iface_0; }
	inline UnixNetworkInterface_t2401762829 ** get_address_of_iface_0() { return &___iface_0; }
	inline void set_iface_0(UnixNetworkInterface_t2401762829 * value)
	{
		___iface_0 = value;
		Il2CppCodeGenWriteBarrier((&___iface_0), value);
	}

	inline static int32_t get_offset_of_addresses_1() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___addresses_1)); }
	inline List_1_t1713852332 * get_addresses_1() const { return ___addresses_1; }
	inline List_1_t1713852332 ** get_address_of_addresses_1() { return &___addresses_1; }
	inline void set_addresses_1(List_1_t1713852332 * value)
	{
		___addresses_1 = value;
		Il2CppCodeGenWriteBarrier((&___addresses_1), value);
	}

	inline static int32_t get_offset_of_dns_servers_2() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___dns_servers_2)); }
	inline IPAddressCollection_t2315030214 * get_dns_servers_2() const { return ___dns_servers_2; }
	inline IPAddressCollection_t2315030214 ** get_address_of_dns_servers_2() { return &___dns_servers_2; }
	inline void set_dns_servers_2(IPAddressCollection_t2315030214 * value)
	{
		___dns_servers_2 = value;
		Il2CppCodeGenWriteBarrier((&___dns_servers_2), value);
	}

	inline static int32_t get_offset_of_dns_suffix_5() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___dns_suffix_5)); }
	inline String_t* get_dns_suffix_5() const { return ___dns_suffix_5; }
	inline String_t** get_address_of_dns_suffix_5() { return &___dns_suffix_5; }
	inline void set_dns_suffix_5(String_t* value)
	{
		___dns_suffix_5 = value;
		Il2CppCodeGenWriteBarrier((&___dns_suffix_5), value);
	}

	inline static int32_t get_offset_of_last_parse_6() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___last_parse_6)); }
	inline DateTime_t3738529785  get_last_parse_6() const { return ___last_parse_6; }
	inline DateTime_t3738529785 * get_address_of_last_parse_6() { return &___last_parse_6; }
	inline void set_last_parse_6(DateTime_t3738529785  value)
	{
		___last_parse_6 = value;
	}
};

struct UnixIPInterfaceProperties_t1296234392_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex System.Net.NetworkInformation.UnixIPInterfaceProperties::ns
	Regex_t3657309853 * ___ns_3;
	// System.Text.RegularExpressions.Regex System.Net.NetworkInformation.UnixIPInterfaceProperties::search
	Regex_t3657309853 * ___search_4;

public:
	inline static int32_t get_offset_of_ns_3() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392_StaticFields, ___ns_3)); }
	inline Regex_t3657309853 * get_ns_3() const { return ___ns_3; }
	inline Regex_t3657309853 ** get_address_of_ns_3() { return &___ns_3; }
	inline void set_ns_3(Regex_t3657309853 * value)
	{
		___ns_3 = value;
		Il2CppCodeGenWriteBarrier((&___ns_3), value);
	}

	inline static int32_t get_offset_of_search_4() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392_StaticFields, ___search_4)); }
	inline Regex_t3657309853 * get_search_4() const { return ___search_4; }
	inline Regex_t3657309853 ** get_address_of_search_4() { return &___search_4; }
	inline void set_search_4(Regex_t3657309853 * value)
	{
		___search_4 = value;
		Il2CppCodeGenWriteBarrier((&___search_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXIPINTERFACEPROPERTIES_T1296234392_H
#ifndef WIN32_IP_ADDR_STRING_T1213417184_H
#define WIN32_IP_ADDR_STRING_T1213417184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct  Win32_IP_ADDR_STRING_t1213417184 
{
public:
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADDR_STRING::Next
	intptr_t ___Next_0;
	// System.String System.Net.NetworkInformation.Win32_IP_ADDR_STRING::IpAddress
	String_t* ___IpAddress_1;
	// System.String System.Net.NetworkInformation.Win32_IP_ADDR_STRING::IpMask
	String_t* ___IpMask_2;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADDR_STRING::Context
	uint32_t ___Context_3;

public:
	inline static int32_t get_offset_of_Next_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___Next_0)); }
	inline intptr_t get_Next_0() const { return ___Next_0; }
	inline intptr_t* get_address_of_Next_0() { return &___Next_0; }
	inline void set_Next_0(intptr_t value)
	{
		___Next_0 = value;
	}

	inline static int32_t get_offset_of_IpAddress_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___IpAddress_1)); }
	inline String_t* get_IpAddress_1() const { return ___IpAddress_1; }
	inline String_t** get_address_of_IpAddress_1() { return &___IpAddress_1; }
	inline void set_IpAddress_1(String_t* value)
	{
		___IpAddress_1 = value;
		Il2CppCodeGenWriteBarrier((&___IpAddress_1), value);
	}

	inline static int32_t get_offset_of_IpMask_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___IpMask_2)); }
	inline String_t* get_IpMask_2() const { return ___IpMask_2; }
	inline String_t** get_address_of_IpMask_2() { return &___IpMask_2; }
	inline void set_IpMask_2(String_t* value)
	{
		___IpMask_2 = value;
		Il2CppCodeGenWriteBarrier((&___IpMask_2), value);
	}

	inline static int32_t get_offset_of_Context_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___Context_3)); }
	inline uint32_t get_Context_3() const { return ___Context_3; }
	inline uint32_t* get_address_of_Context_3() { return &___Context_3; }
	inline void set_Context_3(uint32_t value)
	{
		___Context_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke
{
	intptr_t ___Next_0;
	char ___IpAddress_1[16];
	char ___IpMask_2[16];
	uint32_t ___Context_3;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct Win32_IP_ADDR_STRING_t1213417184_marshaled_com
{
	intptr_t ___Next_0;
	char ___IpAddress_1[16];
	char ___IpMask_2[16];
	uint32_t ___Context_3;
};
#endif // WIN32_IP_ADDR_STRING_T1213417184_H
#ifndef WIN32_SOCKADDR_T2504501424_H
#define WIN32_SOCKADDR_T2504501424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_SOCKADDR
struct  Win32_SOCKADDR_t2504501424 
{
public:
	// System.UInt16 System.Net.NetworkInformation.Win32_SOCKADDR::AddressFamily
	uint16_t ___AddressFamily_0;
	// System.Byte[] System.Net.NetworkInformation.Win32_SOCKADDR::AddressData
	ByteU5BU5D_t4116647657* ___AddressData_1;

public:
	inline static int32_t get_offset_of_AddressFamily_0() { return static_cast<int32_t>(offsetof(Win32_SOCKADDR_t2504501424, ___AddressFamily_0)); }
	inline uint16_t get_AddressFamily_0() const { return ___AddressFamily_0; }
	inline uint16_t* get_address_of_AddressFamily_0() { return &___AddressFamily_0; }
	inline void set_AddressFamily_0(uint16_t value)
	{
		___AddressFamily_0 = value;
	}

	inline static int32_t get_offset_of_AddressData_1() { return static_cast<int32_t>(offsetof(Win32_SOCKADDR_t2504501424, ___AddressData_1)); }
	inline ByteU5BU5D_t4116647657* get_AddressData_1() const { return ___AddressData_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_AddressData_1() { return &___AddressData_1; }
	inline void set_AddressData_1(ByteU5BU5D_t4116647657* value)
	{
		___AddressData_1 = value;
		Il2CppCodeGenWriteBarrier((&___AddressData_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_SOCKADDR
struct Win32_SOCKADDR_t2504501424_marshaled_pinvoke
{
	uint16_t ___AddressFamily_0;
	uint8_t ___AddressData_1[28];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_SOCKADDR
struct Win32_SOCKADDR_t2504501424_marshaled_com
{
	uint16_t ___AddressFamily_0;
	uint8_t ___AddressData_1[28];
};
#endif // WIN32_SOCKADDR_T2504501424_H
#ifndef WIN32_SOCKET_ADDRESS_T1936753419_H
#define WIN32_SOCKET_ADDRESS_T1936753419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_SOCKET_ADDRESS
struct  Win32_SOCKET_ADDRESS_t1936753419 
{
public:
	// System.IntPtr System.Net.NetworkInformation.Win32_SOCKET_ADDRESS::Sockaddr
	intptr_t ___Sockaddr_0;
	// System.Int32 System.Net.NetworkInformation.Win32_SOCKET_ADDRESS::SockaddrLength
	int32_t ___SockaddrLength_1;

public:
	inline static int32_t get_offset_of_Sockaddr_0() { return static_cast<int32_t>(offsetof(Win32_SOCKET_ADDRESS_t1936753419, ___Sockaddr_0)); }
	inline intptr_t get_Sockaddr_0() const { return ___Sockaddr_0; }
	inline intptr_t* get_address_of_Sockaddr_0() { return &___Sockaddr_0; }
	inline void set_Sockaddr_0(intptr_t value)
	{
		___Sockaddr_0 = value;
	}

	inline static int32_t get_offset_of_SockaddrLength_1() { return static_cast<int32_t>(offsetof(Win32_SOCKET_ADDRESS_t1936753419, ___SockaddrLength_1)); }
	inline int32_t get_SockaddrLength_1() const { return ___SockaddrLength_1; }
	inline int32_t* get_address_of_SockaddrLength_1() { return &___SockaddrLength_1; }
	inline void set_SockaddrLength_1(int32_t value)
	{
		___SockaddrLength_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_SOCKET_ADDRESS_T1936753419_H
#ifndef IFA_IFU_T1794893192_H
#define IFA_IFU_T1794893192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.ifa_ifu
struct  ifa_ifu_t1794893192 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr System.Net.NetworkInformation.ifa_ifu::ifu_broadaddr
			intptr_t ___ifu_broadaddr_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___ifu_broadaddr_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr System.Net.NetworkInformation.ifa_ifu::ifu_dstaddr
			intptr_t ___ifu_dstaddr_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___ifu_dstaddr_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_ifu_broadaddr_0() { return static_cast<int32_t>(offsetof(ifa_ifu_t1794893192, ___ifu_broadaddr_0)); }
	inline intptr_t get_ifu_broadaddr_0() const { return ___ifu_broadaddr_0; }
	inline intptr_t* get_address_of_ifu_broadaddr_0() { return &___ifu_broadaddr_0; }
	inline void set_ifu_broadaddr_0(intptr_t value)
	{
		___ifu_broadaddr_0 = value;
	}

	inline static int32_t get_offset_of_ifu_dstaddr_1() { return static_cast<int32_t>(offsetof(ifa_ifu_t1794893192, ___ifu_dstaddr_1)); }
	inline intptr_t get_ifu_dstaddr_1() const { return ___ifu_dstaddr_1; }
	inline intptr_t* get_address_of_ifu_dstaddr_1() { return &___ifu_dstaddr_1; }
	inline void set_ifu_dstaddr_1(intptr_t value)
	{
		___ifu_dstaddr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IFA_IFU_T1794893192_H
#ifndef IN6_ADDR_T3611791508_H
#define IN6_ADDR_T3611791508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.in6_addr
struct  in6_addr_t3611791508 
{
public:
	// System.Byte[] System.Net.NetworkInformation.in6_addr::u6_addr8
	ByteU5BU5D_t4116647657* ___u6_addr8_0;

public:
	inline static int32_t get_offset_of_u6_addr8_0() { return static_cast<int32_t>(offsetof(in6_addr_t3611791508, ___u6_addr8_0)); }
	inline ByteU5BU5D_t4116647657* get_u6_addr8_0() const { return ___u6_addr8_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_u6_addr8_0() { return &___u6_addr8_0; }
	inline void set_u6_addr8_0(ByteU5BU5D_t4116647657* value)
	{
		___u6_addr8_0 = value;
		Il2CppCodeGenWriteBarrier((&___u6_addr8_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.in6_addr
struct in6_addr_t3611791508_marshaled_pinvoke
{
	uint8_t ___u6_addr8_0[16];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.in6_addr
struct in6_addr_t3611791508_marshaled_com
{
	uint8_t ___u6_addr8_0[16];
};
#endif // IN6_ADDR_T3611791508_H
#ifndef SOCKADDR_LL_T3978606313_H
#define SOCKADDR_LL_T3978606313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.sockaddr_ll
struct  sockaddr_ll_t3978606313 
{
public:
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_family
	uint16_t ___sll_family_0;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_protocol
	uint16_t ___sll_protocol_1;
	// System.Int32 System.Net.NetworkInformation.sockaddr_ll::sll_ifindex
	int32_t ___sll_ifindex_2;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_hatype
	uint16_t ___sll_hatype_3;
	// System.Byte System.Net.NetworkInformation.sockaddr_ll::sll_pkttype
	uint8_t ___sll_pkttype_4;
	// System.Byte System.Net.NetworkInformation.sockaddr_ll::sll_halen
	uint8_t ___sll_halen_5;
	// System.Byte[] System.Net.NetworkInformation.sockaddr_ll::sll_addr
	ByteU5BU5D_t4116647657* ___sll_addr_6;

public:
	inline static int32_t get_offset_of_sll_family_0() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_family_0)); }
	inline uint16_t get_sll_family_0() const { return ___sll_family_0; }
	inline uint16_t* get_address_of_sll_family_0() { return &___sll_family_0; }
	inline void set_sll_family_0(uint16_t value)
	{
		___sll_family_0 = value;
	}

	inline static int32_t get_offset_of_sll_protocol_1() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_protocol_1)); }
	inline uint16_t get_sll_protocol_1() const { return ___sll_protocol_1; }
	inline uint16_t* get_address_of_sll_protocol_1() { return &___sll_protocol_1; }
	inline void set_sll_protocol_1(uint16_t value)
	{
		___sll_protocol_1 = value;
	}

	inline static int32_t get_offset_of_sll_ifindex_2() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_ifindex_2)); }
	inline int32_t get_sll_ifindex_2() const { return ___sll_ifindex_2; }
	inline int32_t* get_address_of_sll_ifindex_2() { return &___sll_ifindex_2; }
	inline void set_sll_ifindex_2(int32_t value)
	{
		___sll_ifindex_2 = value;
	}

	inline static int32_t get_offset_of_sll_hatype_3() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_hatype_3)); }
	inline uint16_t get_sll_hatype_3() const { return ___sll_hatype_3; }
	inline uint16_t* get_address_of_sll_hatype_3() { return &___sll_hatype_3; }
	inline void set_sll_hatype_3(uint16_t value)
	{
		___sll_hatype_3 = value;
	}

	inline static int32_t get_offset_of_sll_pkttype_4() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_pkttype_4)); }
	inline uint8_t get_sll_pkttype_4() const { return ___sll_pkttype_4; }
	inline uint8_t* get_address_of_sll_pkttype_4() { return &___sll_pkttype_4; }
	inline void set_sll_pkttype_4(uint8_t value)
	{
		___sll_pkttype_4 = value;
	}

	inline static int32_t get_offset_of_sll_halen_5() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_halen_5)); }
	inline uint8_t get_sll_halen_5() const { return ___sll_halen_5; }
	inline uint8_t* get_address_of_sll_halen_5() { return &___sll_halen_5; }
	inline void set_sll_halen_5(uint8_t value)
	{
		___sll_halen_5 = value;
	}

	inline static int32_t get_offset_of_sll_addr_6() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_addr_6)); }
	inline ByteU5BU5D_t4116647657* get_sll_addr_6() const { return ___sll_addr_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_sll_addr_6() { return &___sll_addr_6; }
	inline void set_sll_addr_6(ByteU5BU5D_t4116647657* value)
	{
		___sll_addr_6 = value;
		Il2CppCodeGenWriteBarrier((&___sll_addr_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.sockaddr_ll
struct sockaddr_ll_t3978606313_marshaled_pinvoke
{
	uint16_t ___sll_family_0;
	uint16_t ___sll_protocol_1;
	int32_t ___sll_ifindex_2;
	uint16_t ___sll_hatype_3;
	uint8_t ___sll_pkttype_4;
	uint8_t ___sll_halen_5;
	uint8_t ___sll_addr_6[8];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.sockaddr_ll
struct sockaddr_ll_t3978606313_marshaled_com
{
	uint16_t ___sll_family_0;
	uint16_t ___sll_protocol_1;
	int32_t ___sll_ifindex_2;
	uint16_t ___sll_hatype_3;
	uint8_t ___sll_pkttype_4;
	uint8_t ___sll_halen_5;
	uint8_t ___sll_addr_6[8];
};
#endif // SOCKADDR_LL_T3978606313_H
#ifndef IPPROTECTIONLEVEL_T4099140720_H
#define IPPROTECTIONLEVEL_T4099140720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.IPProtectionLevel
struct  IPProtectionLevel_t4099140720 
{
public:
	// System.Int32 System.Net.Sockets.IPProtectionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IPProtectionLevel_t4099140720, ___value___2)); }
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
#endif // IPPROTECTIONLEVEL_T4099140720_H
#ifndef REQUESTCACHEPOLICY_T2923596909_H
#define REQUESTCACHEPOLICY_T2923596909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCachePolicy
struct  RequestCachePolicy_t2923596909  : public RuntimeObject
{
public:
	// System.Net.Cache.RequestCacheLevel System.Net.Cache.RequestCachePolicy::m_Level
	int32_t ___m_Level_0;

public:
	inline static int32_t get_offset_of_m_Level_0() { return static_cast<int32_t>(offsetof(RequestCachePolicy_t2923596909, ___m_Level_0)); }
	inline int32_t get_m_Level_0() const { return ___m_Level_0; }
	inline int32_t* get_address_of_m_Level_0() { return &___m_Level_0; }
	inline void set_m_Level_0(int32_t value)
	{
		___m_Level_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEPOLICY_T2923596909_H
#ifndef SETTINGSSECTIONINTERNAL_T781171337_H
#define SETTINGSSECTIONINTERNAL_T781171337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.SettingsSectionInternal
struct  SettingsSectionInternal_t781171337  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Configuration.SettingsSectionInternal::HttpListenerUnescapeRequestUrl
	bool ___HttpListenerUnescapeRequestUrl_1;
	// System.Net.Sockets.IPProtectionLevel System.Net.Configuration.SettingsSectionInternal::IPProtectionLevel
	int32_t ___IPProtectionLevel_2;

public:
	inline static int32_t get_offset_of_HttpListenerUnescapeRequestUrl_1() { return static_cast<int32_t>(offsetof(SettingsSectionInternal_t781171337, ___HttpListenerUnescapeRequestUrl_1)); }
	inline bool get_HttpListenerUnescapeRequestUrl_1() const { return ___HttpListenerUnescapeRequestUrl_1; }
	inline bool* get_address_of_HttpListenerUnescapeRequestUrl_1() { return &___HttpListenerUnescapeRequestUrl_1; }
	inline void set_HttpListenerUnescapeRequestUrl_1(bool value)
	{
		___HttpListenerUnescapeRequestUrl_1 = value;
	}

	inline static int32_t get_offset_of_IPProtectionLevel_2() { return static_cast<int32_t>(offsetof(SettingsSectionInternal_t781171337, ___IPProtectionLevel_2)); }
	inline int32_t get_IPProtectionLevel_2() const { return ___IPProtectionLevel_2; }
	inline int32_t* get_address_of_IPProtectionLevel_2() { return &___IPProtectionLevel_2; }
	inline void set_IPProtectionLevel_2(int32_t value)
	{
		___IPProtectionLevel_2 = value;
	}
};

struct SettingsSectionInternal_t781171337_StaticFields
{
public:
	// System.Net.Configuration.SettingsSectionInternal System.Net.Configuration.SettingsSectionInternal::instance
	SettingsSectionInternal_t781171337 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(SettingsSectionInternal_t781171337_StaticFields, ___instance_0)); }
	inline SettingsSectionInternal_t781171337 * get_instance_0() const { return ___instance_0; }
	inline SettingsSectionInternal_t781171337 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(SettingsSectionInternal_t781171337 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGSSECTIONINTERNAL_T781171337_H
#ifndef LINUXIPINTERFACEPROPERTIES_T458874081_H
#define LINUXIPINTERFACEPROPERTIES_T458874081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxIPInterfaceProperties
struct  LinuxIPInterfaceProperties_t458874081  : public UnixIPInterfaceProperties_t1296234392
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINUXIPINTERFACEPROPERTIES_T458874081_H
#ifndef MACOSIPINTERFACEPROPERTIES_T1282553291_H
#define MACOSIPINTERFACEPROPERTIES_T1282553291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsIPInterfaceProperties
struct  MacOsIPInterfaceProperties_t1282553291  : public UnixIPInterfaceProperties_t1296234392
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACOSIPINTERFACEPROPERTIES_T1282553291_H
#ifndef SOCKADDR_IN6_T2080844659_H
#define SOCKADDR_IN6_T2080844659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
struct  sockaddr_in6_t2080844659 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_len
	uint8_t ___sin6_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_family
	uint8_t ___sin6_family_1;
	// System.UInt16 System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_port
	uint16_t ___sin6_port_2;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_flowinfo
	uint32_t ___sin6_flowinfo_3;
	// System.Net.NetworkInformation.MacOsStructs.in6_addr System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_addr
	in6_addr_t1417766092  ___sin6_addr_4;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_scope_id
	uint32_t ___sin6_scope_id_5;

public:
	inline static int32_t get_offset_of_sin6_len_0() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_len_0)); }
	inline uint8_t get_sin6_len_0() const { return ___sin6_len_0; }
	inline uint8_t* get_address_of_sin6_len_0() { return &___sin6_len_0; }
	inline void set_sin6_len_0(uint8_t value)
	{
		___sin6_len_0 = value;
	}

	inline static int32_t get_offset_of_sin6_family_1() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_family_1)); }
	inline uint8_t get_sin6_family_1() const { return ___sin6_family_1; }
	inline uint8_t* get_address_of_sin6_family_1() { return &___sin6_family_1; }
	inline void set_sin6_family_1(uint8_t value)
	{
		___sin6_family_1 = value;
	}

	inline static int32_t get_offset_of_sin6_port_2() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_port_2)); }
	inline uint16_t get_sin6_port_2() const { return ___sin6_port_2; }
	inline uint16_t* get_address_of_sin6_port_2() { return &___sin6_port_2; }
	inline void set_sin6_port_2(uint16_t value)
	{
		___sin6_port_2 = value;
	}

	inline static int32_t get_offset_of_sin6_flowinfo_3() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_flowinfo_3)); }
	inline uint32_t get_sin6_flowinfo_3() const { return ___sin6_flowinfo_3; }
	inline uint32_t* get_address_of_sin6_flowinfo_3() { return &___sin6_flowinfo_3; }
	inline void set_sin6_flowinfo_3(uint32_t value)
	{
		___sin6_flowinfo_3 = value;
	}

	inline static int32_t get_offset_of_sin6_addr_4() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_addr_4)); }
	inline in6_addr_t1417766092  get_sin6_addr_4() const { return ___sin6_addr_4; }
	inline in6_addr_t1417766092 * get_address_of_sin6_addr_4() { return &___sin6_addr_4; }
	inline void set_sin6_addr_4(in6_addr_t1417766092  value)
	{
		___sin6_addr_4 = value;
	}

	inline static int32_t get_offset_of_sin6_scope_id_5() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_scope_id_5)); }
	inline uint32_t get_sin6_scope_id_5() const { return ___sin6_scope_id_5; }
	inline uint32_t* get_address_of_sin6_scope_id_5() { return &___sin6_scope_id_5; }
	inline void set_sin6_scope_id_5(uint32_t value)
	{
		___sin6_scope_id_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
struct sockaddr_in6_t2080844659_marshaled_pinvoke
{
	uint8_t ___sin6_len_0;
	uint8_t ___sin6_family_1;
	uint16_t ___sin6_port_2;
	uint32_t ___sin6_flowinfo_3;
	in6_addr_t1417766092_marshaled_pinvoke ___sin6_addr_4;
	uint32_t ___sin6_scope_id_5;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
struct sockaddr_in6_t2080844659_marshaled_com
{
	uint8_t ___sin6_len_0;
	uint8_t ___sin6_family_1;
	uint16_t ___sin6_port_2;
	uint32_t ___sin6_flowinfo_3;
	in6_addr_t1417766092_marshaled_com ___sin6_addr_4;
	uint32_t ___sin6_scope_id_5;
};
#endif // SOCKADDR_IN6_T2080844659_H
#ifndef MIBIPGLOBALPROPERTIES_T3015477361_H
#define MIBIPGLOBALPROPERTIES_T3015477361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MibIPGlobalProperties
struct  MibIPGlobalProperties_t3015477361  : public UnixIPGlobalProperties_t1460024316
{
public:
	// System.String System.Net.NetworkInformation.MibIPGlobalProperties::StatisticsFile
	String_t* ___StatisticsFile_0;
	// System.String System.Net.NetworkInformation.MibIPGlobalProperties::StatisticsFileIPv6
	String_t* ___StatisticsFileIPv6_1;
	// System.String System.Net.NetworkInformation.MibIPGlobalProperties::TcpFile
	String_t* ___TcpFile_2;
	// System.String System.Net.NetworkInformation.MibIPGlobalProperties::Tcp6File
	String_t* ___Tcp6File_3;
	// System.String System.Net.NetworkInformation.MibIPGlobalProperties::UdpFile
	String_t* ___UdpFile_4;
	// System.String System.Net.NetworkInformation.MibIPGlobalProperties::Udp6File
	String_t* ___Udp6File_5;

public:
	inline static int32_t get_offset_of_StatisticsFile_0() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361, ___StatisticsFile_0)); }
	inline String_t* get_StatisticsFile_0() const { return ___StatisticsFile_0; }
	inline String_t** get_address_of_StatisticsFile_0() { return &___StatisticsFile_0; }
	inline void set_StatisticsFile_0(String_t* value)
	{
		___StatisticsFile_0 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticsFile_0), value);
	}

	inline static int32_t get_offset_of_StatisticsFileIPv6_1() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361, ___StatisticsFileIPv6_1)); }
	inline String_t* get_StatisticsFileIPv6_1() const { return ___StatisticsFileIPv6_1; }
	inline String_t** get_address_of_StatisticsFileIPv6_1() { return &___StatisticsFileIPv6_1; }
	inline void set_StatisticsFileIPv6_1(String_t* value)
	{
		___StatisticsFileIPv6_1 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticsFileIPv6_1), value);
	}

	inline static int32_t get_offset_of_TcpFile_2() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361, ___TcpFile_2)); }
	inline String_t* get_TcpFile_2() const { return ___TcpFile_2; }
	inline String_t** get_address_of_TcpFile_2() { return &___TcpFile_2; }
	inline void set_TcpFile_2(String_t* value)
	{
		___TcpFile_2 = value;
		Il2CppCodeGenWriteBarrier((&___TcpFile_2), value);
	}

	inline static int32_t get_offset_of_Tcp6File_3() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361, ___Tcp6File_3)); }
	inline String_t* get_Tcp6File_3() const { return ___Tcp6File_3; }
	inline String_t** get_address_of_Tcp6File_3() { return &___Tcp6File_3; }
	inline void set_Tcp6File_3(String_t* value)
	{
		___Tcp6File_3 = value;
		Il2CppCodeGenWriteBarrier((&___Tcp6File_3), value);
	}

	inline static int32_t get_offset_of_UdpFile_4() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361, ___UdpFile_4)); }
	inline String_t* get_UdpFile_4() const { return ___UdpFile_4; }
	inline String_t** get_address_of_UdpFile_4() { return &___UdpFile_4; }
	inline void set_UdpFile_4(String_t* value)
	{
		___UdpFile_4 = value;
		Il2CppCodeGenWriteBarrier((&___UdpFile_4), value);
	}

	inline static int32_t get_offset_of_Udp6File_5() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361, ___Udp6File_5)); }
	inline String_t* get_Udp6File_5() const { return ___Udp6File_5; }
	inline String_t** get_address_of_Udp6File_5() { return &___Udp6File_5; }
	inline void set_Udp6File_5(String_t* value)
	{
		___Udp6File_5 = value;
		Il2CppCodeGenWriteBarrier((&___Udp6File_5), value);
	}
};

struct MibIPGlobalProperties_t3015477361_StaticFields
{
public:
	// System.Char[] System.Net.NetworkInformation.MibIPGlobalProperties::wsChars
	CharU5BU5D_t3528271667* ___wsChars_6;

public:
	inline static int32_t get_offset_of_wsChars_6() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361_StaticFields, ___wsChars_6)); }
	inline CharU5BU5D_t3528271667* get_wsChars_6() const { return ___wsChars_6; }
	inline CharU5BU5D_t3528271667** get_address_of_wsChars_6() { return &___wsChars_6; }
	inline void set_wsChars_6(CharU5BU5D_t3528271667* value)
	{
		___wsChars_6 = value;
		Il2CppCodeGenWriteBarrier((&___wsChars_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIBIPGLOBALPROPERTIES_T3015477361_H
#ifndef UNIXNETWORKINTERFACE_T2401762829_H
#define UNIXNETWORKINTERFACE_T2401762829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnixNetworkInterface
struct  UnixNetworkInterface_t2401762829  : public NetworkInterface_t271883373
{
public:
	// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.UnixNetworkInterface::ipproperties
	IPInterfaceProperties_t3964383369 * ___ipproperties_0;
	// System.String System.Net.NetworkInformation.UnixNetworkInterface::name
	String_t* ___name_1;
	// System.Collections.Generic.List`1<System.Net.IPAddress> System.Net.NetworkInformation.UnixNetworkInterface::addresses
	List_1_t1713852332 * ___addresses_2;
	// System.Byte[] System.Net.NetworkInformation.UnixNetworkInterface::macAddress
	ByteU5BU5D_t4116647657* ___macAddress_3;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.UnixNetworkInterface::type
	int32_t ___type_4;

public:
	inline static int32_t get_offset_of_ipproperties_0() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___ipproperties_0)); }
	inline IPInterfaceProperties_t3964383369 * get_ipproperties_0() const { return ___ipproperties_0; }
	inline IPInterfaceProperties_t3964383369 ** get_address_of_ipproperties_0() { return &___ipproperties_0; }
	inline void set_ipproperties_0(IPInterfaceProperties_t3964383369 * value)
	{
		___ipproperties_0 = value;
		Il2CppCodeGenWriteBarrier((&___ipproperties_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_addresses_2() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___addresses_2)); }
	inline List_1_t1713852332 * get_addresses_2() const { return ___addresses_2; }
	inline List_1_t1713852332 ** get_address_of_addresses_2() { return &___addresses_2; }
	inline void set_addresses_2(List_1_t1713852332 * value)
	{
		___addresses_2 = value;
		Il2CppCodeGenWriteBarrier((&___addresses_2), value);
	}

	inline static int32_t get_offset_of_macAddress_3() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___macAddress_3)); }
	inline ByteU5BU5D_t4116647657* get_macAddress_3() const { return ___macAddress_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_macAddress_3() { return &___macAddress_3; }
	inline void set_macAddress_3(ByteU5BU5D_t4116647657* value)
	{
		___macAddress_3 = value;
		Il2CppCodeGenWriteBarrier((&___macAddress_3), value);
	}

	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___type_4)); }
	inline int32_t get_type_4() const { return ___type_4; }
	inline int32_t* get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(int32_t value)
	{
		___type_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXNETWORKINTERFACE_T2401762829_H
#ifndef WIN32_FIXED_INFO_T1299345856_H
#define WIN32_FIXED_INFO_T1299345856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_FIXED_INFO
struct  Win32_FIXED_INFO_t1299345856 
{
public:
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::HostName
	String_t* ___HostName_0;
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::DomainName
	String_t* ___DomainName_1;
	// System.IntPtr System.Net.NetworkInformation.Win32_FIXED_INFO::CurrentDnsServer
	intptr_t ___CurrentDnsServer_2;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_FIXED_INFO::DnsServerList
	Win32_IP_ADDR_STRING_t1213417184  ___DnsServerList_3;
	// System.Net.NetworkInformation.NetBiosNodeType System.Net.NetworkInformation.Win32_FIXED_INFO::NodeType
	int32_t ___NodeType_4;
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::ScopeId
	String_t* ___ScopeId_5;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableRouting
	uint32_t ___EnableRouting_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableProxy
	uint32_t ___EnableProxy_7;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableDns
	uint32_t ___EnableDns_8;

public:
	inline static int32_t get_offset_of_HostName_0() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___HostName_0)); }
	inline String_t* get_HostName_0() const { return ___HostName_0; }
	inline String_t** get_address_of_HostName_0() { return &___HostName_0; }
	inline void set_HostName_0(String_t* value)
	{
		___HostName_0 = value;
		Il2CppCodeGenWriteBarrier((&___HostName_0), value);
	}

	inline static int32_t get_offset_of_DomainName_1() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___DomainName_1)); }
	inline String_t* get_DomainName_1() const { return ___DomainName_1; }
	inline String_t** get_address_of_DomainName_1() { return &___DomainName_1; }
	inline void set_DomainName_1(String_t* value)
	{
		___DomainName_1 = value;
		Il2CppCodeGenWriteBarrier((&___DomainName_1), value);
	}

	inline static int32_t get_offset_of_CurrentDnsServer_2() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___CurrentDnsServer_2)); }
	inline intptr_t get_CurrentDnsServer_2() const { return ___CurrentDnsServer_2; }
	inline intptr_t* get_address_of_CurrentDnsServer_2() { return &___CurrentDnsServer_2; }
	inline void set_CurrentDnsServer_2(intptr_t value)
	{
		___CurrentDnsServer_2 = value;
	}

	inline static int32_t get_offset_of_DnsServerList_3() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___DnsServerList_3)); }
	inline Win32_IP_ADDR_STRING_t1213417184  get_DnsServerList_3() const { return ___DnsServerList_3; }
	inline Win32_IP_ADDR_STRING_t1213417184 * get_address_of_DnsServerList_3() { return &___DnsServerList_3; }
	inline void set_DnsServerList_3(Win32_IP_ADDR_STRING_t1213417184  value)
	{
		___DnsServerList_3 = value;
	}

	inline static int32_t get_offset_of_NodeType_4() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___NodeType_4)); }
	inline int32_t get_NodeType_4() const { return ___NodeType_4; }
	inline int32_t* get_address_of_NodeType_4() { return &___NodeType_4; }
	inline void set_NodeType_4(int32_t value)
	{
		___NodeType_4 = value;
	}

	inline static int32_t get_offset_of_ScopeId_5() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___ScopeId_5)); }
	inline String_t* get_ScopeId_5() const { return ___ScopeId_5; }
	inline String_t** get_address_of_ScopeId_5() { return &___ScopeId_5; }
	inline void set_ScopeId_5(String_t* value)
	{
		___ScopeId_5 = value;
		Il2CppCodeGenWriteBarrier((&___ScopeId_5), value);
	}

	inline static int32_t get_offset_of_EnableRouting_6() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___EnableRouting_6)); }
	inline uint32_t get_EnableRouting_6() const { return ___EnableRouting_6; }
	inline uint32_t* get_address_of_EnableRouting_6() { return &___EnableRouting_6; }
	inline void set_EnableRouting_6(uint32_t value)
	{
		___EnableRouting_6 = value;
	}

	inline static int32_t get_offset_of_EnableProxy_7() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___EnableProxy_7)); }
	inline uint32_t get_EnableProxy_7() const { return ___EnableProxy_7; }
	inline uint32_t* get_address_of_EnableProxy_7() { return &___EnableProxy_7; }
	inline void set_EnableProxy_7(uint32_t value)
	{
		___EnableProxy_7 = value;
	}

	inline static int32_t get_offset_of_EnableDns_8() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___EnableDns_8)); }
	inline uint32_t get_EnableDns_8() const { return ___EnableDns_8; }
	inline uint32_t* get_address_of_EnableDns_8() { return &___EnableDns_8; }
	inline void set_EnableDns_8(uint32_t value)
	{
		___EnableDns_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t1299345856_marshaled_pinvoke
{
	char ___HostName_0[132];
	char ___DomainName_1[132];
	intptr_t ___CurrentDnsServer_2;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke ___DnsServerList_3;
	int32_t ___NodeType_4;
	char ___ScopeId_5[260];
	uint32_t ___EnableRouting_6;
	uint32_t ___EnableProxy_7;
	uint32_t ___EnableDns_8;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t1299345856_marshaled_com
{
	char ___HostName_0[132];
	char ___DomainName_1[132];
	intptr_t ___CurrentDnsServer_2;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_com ___DnsServerList_3;
	int32_t ___NodeType_4;
	char ___ScopeId_5[260];
	uint32_t ___EnableRouting_6;
	uint32_t ___EnableProxy_7;
	uint32_t ___EnableDns_8;
};
#endif // WIN32_FIXED_INFO_T1299345856_H
#ifndef WIN32_IP_ADAPTER_ADDRESSES_T3463526328_H
#define WIN32_IP_ADAPTER_ADDRESSES_T3463526328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct  Win32_IP_ADAPTER_ADDRESSES_t3463526328 
{
public:
	// System.Net.NetworkInformation.AlignmentUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Alignment
	AlignmentUnion_t208902285  ___Alignment_0;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Next
	intptr_t ___Next_1;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::AdapterName
	String_t* ___AdapterName_2;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstUnicastAddress
	intptr_t ___FirstUnicastAddress_3;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstAnycastAddress
	intptr_t ___FirstAnycastAddress_4;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstMulticastAddress
	intptr_t ___FirstMulticastAddress_5;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstDnsServerAddress
	intptr_t ___FirstDnsServerAddress_6;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::DnsSuffix
	String_t* ___DnsSuffix_7;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Description
	String_t* ___Description_8;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FriendlyName
	String_t* ___FriendlyName_9;
	// System.Byte[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddress
	ByteU5BU5D_t4116647657* ___PhysicalAddress_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddressLength
	uint32_t ___PhysicalAddressLength_11;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Flags
	uint32_t ___Flags_12;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Mtu
	uint32_t ___Mtu_13;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::IfType
	int32_t ___IfType_14;
	// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::OperStatus
	int32_t ___OperStatus_15;
	// System.Int32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Ipv6IfIndex
	int32_t ___Ipv6IfIndex_16;
	// System.UInt32[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::ZoneIndices
	UInt32U5BU5D_t2770800703* ___ZoneIndices_17;

public:
	inline static int32_t get_offset_of_Alignment_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Alignment_0)); }
	inline AlignmentUnion_t208902285  get_Alignment_0() const { return ___Alignment_0; }
	inline AlignmentUnion_t208902285 * get_address_of_Alignment_0() { return &___Alignment_0; }
	inline void set_Alignment_0(AlignmentUnion_t208902285  value)
	{
		___Alignment_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Next_1)); }
	inline intptr_t get_Next_1() const { return ___Next_1; }
	inline intptr_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(intptr_t value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_AdapterName_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___AdapterName_2)); }
	inline String_t* get_AdapterName_2() const { return ___AdapterName_2; }
	inline String_t** get_address_of_AdapterName_2() { return &___AdapterName_2; }
	inline void set_AdapterName_2(String_t* value)
	{
		___AdapterName_2 = value;
		Il2CppCodeGenWriteBarrier((&___AdapterName_2), value);
	}

	inline static int32_t get_offset_of_FirstUnicastAddress_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstUnicastAddress_3)); }
	inline intptr_t get_FirstUnicastAddress_3() const { return ___FirstUnicastAddress_3; }
	inline intptr_t* get_address_of_FirstUnicastAddress_3() { return &___FirstUnicastAddress_3; }
	inline void set_FirstUnicastAddress_3(intptr_t value)
	{
		___FirstUnicastAddress_3 = value;
	}

	inline static int32_t get_offset_of_FirstAnycastAddress_4() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstAnycastAddress_4)); }
	inline intptr_t get_FirstAnycastAddress_4() const { return ___FirstAnycastAddress_4; }
	inline intptr_t* get_address_of_FirstAnycastAddress_4() { return &___FirstAnycastAddress_4; }
	inline void set_FirstAnycastAddress_4(intptr_t value)
	{
		___FirstAnycastAddress_4 = value;
	}

	inline static int32_t get_offset_of_FirstMulticastAddress_5() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstMulticastAddress_5)); }
	inline intptr_t get_FirstMulticastAddress_5() const { return ___FirstMulticastAddress_5; }
	inline intptr_t* get_address_of_FirstMulticastAddress_5() { return &___FirstMulticastAddress_5; }
	inline void set_FirstMulticastAddress_5(intptr_t value)
	{
		___FirstMulticastAddress_5 = value;
	}

	inline static int32_t get_offset_of_FirstDnsServerAddress_6() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstDnsServerAddress_6)); }
	inline intptr_t get_FirstDnsServerAddress_6() const { return ___FirstDnsServerAddress_6; }
	inline intptr_t* get_address_of_FirstDnsServerAddress_6() { return &___FirstDnsServerAddress_6; }
	inline void set_FirstDnsServerAddress_6(intptr_t value)
	{
		___FirstDnsServerAddress_6 = value;
	}

	inline static int32_t get_offset_of_DnsSuffix_7() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___DnsSuffix_7)); }
	inline String_t* get_DnsSuffix_7() const { return ___DnsSuffix_7; }
	inline String_t** get_address_of_DnsSuffix_7() { return &___DnsSuffix_7; }
	inline void set_DnsSuffix_7(String_t* value)
	{
		___DnsSuffix_7 = value;
		Il2CppCodeGenWriteBarrier((&___DnsSuffix_7), value);
	}

	inline static int32_t get_offset_of_Description_8() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Description_8)); }
	inline String_t* get_Description_8() const { return ___Description_8; }
	inline String_t** get_address_of_Description_8() { return &___Description_8; }
	inline void set_Description_8(String_t* value)
	{
		___Description_8 = value;
		Il2CppCodeGenWriteBarrier((&___Description_8), value);
	}

	inline static int32_t get_offset_of_FriendlyName_9() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FriendlyName_9)); }
	inline String_t* get_FriendlyName_9() const { return ___FriendlyName_9; }
	inline String_t** get_address_of_FriendlyName_9() { return &___FriendlyName_9; }
	inline void set_FriendlyName_9(String_t* value)
	{
		___FriendlyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___FriendlyName_9), value);
	}

	inline static int32_t get_offset_of_PhysicalAddress_10() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___PhysicalAddress_10)); }
	inline ByteU5BU5D_t4116647657* get_PhysicalAddress_10() const { return ___PhysicalAddress_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_PhysicalAddress_10() { return &___PhysicalAddress_10; }
	inline void set_PhysicalAddress_10(ByteU5BU5D_t4116647657* value)
	{
		___PhysicalAddress_10 = value;
		Il2CppCodeGenWriteBarrier((&___PhysicalAddress_10), value);
	}

	inline static int32_t get_offset_of_PhysicalAddressLength_11() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___PhysicalAddressLength_11)); }
	inline uint32_t get_PhysicalAddressLength_11() const { return ___PhysicalAddressLength_11; }
	inline uint32_t* get_address_of_PhysicalAddressLength_11() { return &___PhysicalAddressLength_11; }
	inline void set_PhysicalAddressLength_11(uint32_t value)
	{
		___PhysicalAddressLength_11 = value;
	}

	inline static int32_t get_offset_of_Flags_12() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Flags_12)); }
	inline uint32_t get_Flags_12() const { return ___Flags_12; }
	inline uint32_t* get_address_of_Flags_12() { return &___Flags_12; }
	inline void set_Flags_12(uint32_t value)
	{
		___Flags_12 = value;
	}

	inline static int32_t get_offset_of_Mtu_13() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Mtu_13)); }
	inline uint32_t get_Mtu_13() const { return ___Mtu_13; }
	inline uint32_t* get_address_of_Mtu_13() { return &___Mtu_13; }
	inline void set_Mtu_13(uint32_t value)
	{
		___Mtu_13 = value;
	}

	inline static int32_t get_offset_of_IfType_14() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___IfType_14)); }
	inline int32_t get_IfType_14() const { return ___IfType_14; }
	inline int32_t* get_address_of_IfType_14() { return &___IfType_14; }
	inline void set_IfType_14(int32_t value)
	{
		___IfType_14 = value;
	}

	inline static int32_t get_offset_of_OperStatus_15() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___OperStatus_15)); }
	inline int32_t get_OperStatus_15() const { return ___OperStatus_15; }
	inline int32_t* get_address_of_OperStatus_15() { return &___OperStatus_15; }
	inline void set_OperStatus_15(int32_t value)
	{
		___OperStatus_15 = value;
	}

	inline static int32_t get_offset_of_Ipv6IfIndex_16() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Ipv6IfIndex_16)); }
	inline int32_t get_Ipv6IfIndex_16() const { return ___Ipv6IfIndex_16; }
	inline int32_t* get_address_of_Ipv6IfIndex_16() { return &___Ipv6IfIndex_16; }
	inline void set_Ipv6IfIndex_16(int32_t value)
	{
		___Ipv6IfIndex_16 = value;
	}

	inline static int32_t get_offset_of_ZoneIndices_17() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___ZoneIndices_17)); }
	inline UInt32U5BU5D_t2770800703* get_ZoneIndices_17() const { return ___ZoneIndices_17; }
	inline UInt32U5BU5D_t2770800703** get_address_of_ZoneIndices_17() { return &___ZoneIndices_17; }
	inline void set_ZoneIndices_17(UInt32U5BU5D_t2770800703* value)
	{
		___ZoneIndices_17 = value;
		Il2CppCodeGenWriteBarrier((&___ZoneIndices_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t3463526328_marshaled_pinvoke
{
	AlignmentUnion_t208902285  ___Alignment_0;
	intptr_t ___Next_1;
	char* ___AdapterName_2;
	intptr_t ___FirstUnicastAddress_3;
	intptr_t ___FirstAnycastAddress_4;
	intptr_t ___FirstMulticastAddress_5;
	intptr_t ___FirstDnsServerAddress_6;
	Il2CppChar* ___DnsSuffix_7;
	Il2CppChar* ___Description_8;
	Il2CppChar* ___FriendlyName_9;
	uint8_t ___PhysicalAddress_10[8];
	uint32_t ___PhysicalAddressLength_11;
	uint32_t ___Flags_12;
	uint32_t ___Mtu_13;
	int32_t ___IfType_14;
	int32_t ___OperStatus_15;
	int32_t ___Ipv6IfIndex_16;
	uint32_t ___ZoneIndices_17[64];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t3463526328_marshaled_com
{
	AlignmentUnion_t208902285  ___Alignment_0;
	intptr_t ___Next_1;
	char* ___AdapterName_2;
	intptr_t ___FirstUnicastAddress_3;
	intptr_t ___FirstAnycastAddress_4;
	intptr_t ___FirstMulticastAddress_5;
	intptr_t ___FirstDnsServerAddress_6;
	Il2CppChar* ___DnsSuffix_7;
	Il2CppChar* ___Description_8;
	Il2CppChar* ___FriendlyName_9;
	uint8_t ___PhysicalAddress_10[8];
	uint32_t ___PhysicalAddressLength_11;
	uint32_t ___Flags_12;
	uint32_t ___Mtu_13;
	int32_t ___IfType_14;
	int32_t ___OperStatus_15;
	int32_t ___Ipv6IfIndex_16;
	uint32_t ___ZoneIndices_17[64];
};
#endif // WIN32_IP_ADAPTER_ADDRESSES_T3463526328_H
#ifndef WIN32_IP_ADAPTER_DNS_SERVER_ADDRESS_T3053140100_H
#define WIN32_IP_ADAPTER_DNS_SERVER_ADDRESS_T3053140100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_DNS_SERVER_ADDRESS
struct  Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100 
{
public:
	// System.Net.NetworkInformation.Win32LengthFlagsUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_DNS_SERVER_ADDRESS::LengthFlags
	Win32LengthFlagsUnion_t1383639798  ___LengthFlags_0;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_DNS_SERVER_ADDRESS::Next
	intptr_t ___Next_1;
	// System.Net.NetworkInformation.Win32_SOCKET_ADDRESS System.Net.NetworkInformation.Win32_IP_ADAPTER_DNS_SERVER_ADDRESS::Address
	Win32_SOCKET_ADDRESS_t1936753419  ___Address_2;

public:
	inline static int32_t get_offset_of_LengthFlags_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100, ___LengthFlags_0)); }
	inline Win32LengthFlagsUnion_t1383639798  get_LengthFlags_0() const { return ___LengthFlags_0; }
	inline Win32LengthFlagsUnion_t1383639798 * get_address_of_LengthFlags_0() { return &___LengthFlags_0; }
	inline void set_LengthFlags_0(Win32LengthFlagsUnion_t1383639798  value)
	{
		___LengthFlags_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100, ___Next_1)); }
	inline intptr_t get_Next_1() const { return ___Next_1; }
	inline intptr_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(intptr_t value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100, ___Address_2)); }
	inline Win32_SOCKET_ADDRESS_t1936753419  get_Address_2() const { return ___Address_2; }
	inline Win32_SOCKET_ADDRESS_t1936753419 * get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(Win32_SOCKET_ADDRESS_t1936753419  value)
	{
		___Address_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_IP_ADAPTER_DNS_SERVER_ADDRESS_T3053140100_H
#ifndef WIN32_MIB_IFROW_T851471770_H
#define WIN32_MIB_IFROW_T851471770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIB_IFROW
struct  Win32_MIB_IFROW_t851471770 
{
public:
	// System.Char[] System.Net.NetworkInformation.Win32_MIB_IFROW::Name
	CharU5BU5D_t3528271667* ___Name_0;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::Index
	int32_t ___Index_1;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32_MIB_IFROW::Type
	int32_t ___Type_2;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::Mtu
	int32_t ___Mtu_3;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::Speed
	uint32_t ___Speed_4;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::PhysAddrLen
	int32_t ___PhysAddrLen_5;
	// System.Byte[] System.Net.NetworkInformation.Win32_MIB_IFROW::PhysAddr
	ByteU5BU5D_t4116647657* ___PhysAddr_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::AdminStatus
	uint32_t ___AdminStatus_7;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::OperStatus
	uint32_t ___OperStatus_8;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::LastChange
	uint32_t ___LastChange_9;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InOctets
	int32_t ___InOctets_10;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InUcastPkts
	int32_t ___InUcastPkts_11;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InNUcastPkts
	int32_t ___InNUcastPkts_12;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InDiscards
	int32_t ___InDiscards_13;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InErrors
	int32_t ___InErrors_14;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InUnknownProtos
	int32_t ___InUnknownProtos_15;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutOctets
	int32_t ___OutOctets_16;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutUcastPkts
	int32_t ___OutUcastPkts_17;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutNUcastPkts
	int32_t ___OutNUcastPkts_18;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutDiscards
	int32_t ___OutDiscards_19;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutErrors
	int32_t ___OutErrors_20;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutQLen
	int32_t ___OutQLen_21;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::DescrLen
	int32_t ___DescrLen_22;
	// System.Byte[] System.Net.NetworkInformation.Win32_MIB_IFROW::Descr
	ByteU5BU5D_t4116647657* ___Descr_23;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Name_0)); }
	inline CharU5BU5D_t3528271667* get_Name_0() const { return ___Name_0; }
	inline CharU5BU5D_t3528271667** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(CharU5BU5D_t3528271667* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Index_1() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Index_1)); }
	inline int32_t get_Index_1() const { return ___Index_1; }
	inline int32_t* get_address_of_Index_1() { return &___Index_1; }
	inline void set_Index_1(int32_t value)
	{
		___Index_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Type_2)); }
	inline int32_t get_Type_2() const { return ___Type_2; }
	inline int32_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(int32_t value)
	{
		___Type_2 = value;
	}

	inline static int32_t get_offset_of_Mtu_3() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Mtu_3)); }
	inline int32_t get_Mtu_3() const { return ___Mtu_3; }
	inline int32_t* get_address_of_Mtu_3() { return &___Mtu_3; }
	inline void set_Mtu_3(int32_t value)
	{
		___Mtu_3 = value;
	}

	inline static int32_t get_offset_of_Speed_4() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Speed_4)); }
	inline uint32_t get_Speed_4() const { return ___Speed_4; }
	inline uint32_t* get_address_of_Speed_4() { return &___Speed_4; }
	inline void set_Speed_4(uint32_t value)
	{
		___Speed_4 = value;
	}

	inline static int32_t get_offset_of_PhysAddrLen_5() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___PhysAddrLen_5)); }
	inline int32_t get_PhysAddrLen_5() const { return ___PhysAddrLen_5; }
	inline int32_t* get_address_of_PhysAddrLen_5() { return &___PhysAddrLen_5; }
	inline void set_PhysAddrLen_5(int32_t value)
	{
		___PhysAddrLen_5 = value;
	}

	inline static int32_t get_offset_of_PhysAddr_6() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___PhysAddr_6)); }
	inline ByteU5BU5D_t4116647657* get_PhysAddr_6() const { return ___PhysAddr_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_PhysAddr_6() { return &___PhysAddr_6; }
	inline void set_PhysAddr_6(ByteU5BU5D_t4116647657* value)
	{
		___PhysAddr_6 = value;
		Il2CppCodeGenWriteBarrier((&___PhysAddr_6), value);
	}

	inline static int32_t get_offset_of_AdminStatus_7() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___AdminStatus_7)); }
	inline uint32_t get_AdminStatus_7() const { return ___AdminStatus_7; }
	inline uint32_t* get_address_of_AdminStatus_7() { return &___AdminStatus_7; }
	inline void set_AdminStatus_7(uint32_t value)
	{
		___AdminStatus_7 = value;
	}

	inline static int32_t get_offset_of_OperStatus_8() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OperStatus_8)); }
	inline uint32_t get_OperStatus_8() const { return ___OperStatus_8; }
	inline uint32_t* get_address_of_OperStatus_8() { return &___OperStatus_8; }
	inline void set_OperStatus_8(uint32_t value)
	{
		___OperStatus_8 = value;
	}

	inline static int32_t get_offset_of_LastChange_9() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___LastChange_9)); }
	inline uint32_t get_LastChange_9() const { return ___LastChange_9; }
	inline uint32_t* get_address_of_LastChange_9() { return &___LastChange_9; }
	inline void set_LastChange_9(uint32_t value)
	{
		___LastChange_9 = value;
	}

	inline static int32_t get_offset_of_InOctets_10() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InOctets_10)); }
	inline int32_t get_InOctets_10() const { return ___InOctets_10; }
	inline int32_t* get_address_of_InOctets_10() { return &___InOctets_10; }
	inline void set_InOctets_10(int32_t value)
	{
		___InOctets_10 = value;
	}

	inline static int32_t get_offset_of_InUcastPkts_11() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InUcastPkts_11)); }
	inline int32_t get_InUcastPkts_11() const { return ___InUcastPkts_11; }
	inline int32_t* get_address_of_InUcastPkts_11() { return &___InUcastPkts_11; }
	inline void set_InUcastPkts_11(int32_t value)
	{
		___InUcastPkts_11 = value;
	}

	inline static int32_t get_offset_of_InNUcastPkts_12() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InNUcastPkts_12)); }
	inline int32_t get_InNUcastPkts_12() const { return ___InNUcastPkts_12; }
	inline int32_t* get_address_of_InNUcastPkts_12() { return &___InNUcastPkts_12; }
	inline void set_InNUcastPkts_12(int32_t value)
	{
		___InNUcastPkts_12 = value;
	}

	inline static int32_t get_offset_of_InDiscards_13() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InDiscards_13)); }
	inline int32_t get_InDiscards_13() const { return ___InDiscards_13; }
	inline int32_t* get_address_of_InDiscards_13() { return &___InDiscards_13; }
	inline void set_InDiscards_13(int32_t value)
	{
		___InDiscards_13 = value;
	}

	inline static int32_t get_offset_of_InErrors_14() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InErrors_14)); }
	inline int32_t get_InErrors_14() const { return ___InErrors_14; }
	inline int32_t* get_address_of_InErrors_14() { return &___InErrors_14; }
	inline void set_InErrors_14(int32_t value)
	{
		___InErrors_14 = value;
	}

	inline static int32_t get_offset_of_InUnknownProtos_15() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InUnknownProtos_15)); }
	inline int32_t get_InUnknownProtos_15() const { return ___InUnknownProtos_15; }
	inline int32_t* get_address_of_InUnknownProtos_15() { return &___InUnknownProtos_15; }
	inline void set_InUnknownProtos_15(int32_t value)
	{
		___InUnknownProtos_15 = value;
	}

	inline static int32_t get_offset_of_OutOctets_16() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutOctets_16)); }
	inline int32_t get_OutOctets_16() const { return ___OutOctets_16; }
	inline int32_t* get_address_of_OutOctets_16() { return &___OutOctets_16; }
	inline void set_OutOctets_16(int32_t value)
	{
		___OutOctets_16 = value;
	}

	inline static int32_t get_offset_of_OutUcastPkts_17() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutUcastPkts_17)); }
	inline int32_t get_OutUcastPkts_17() const { return ___OutUcastPkts_17; }
	inline int32_t* get_address_of_OutUcastPkts_17() { return &___OutUcastPkts_17; }
	inline void set_OutUcastPkts_17(int32_t value)
	{
		___OutUcastPkts_17 = value;
	}

	inline static int32_t get_offset_of_OutNUcastPkts_18() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutNUcastPkts_18)); }
	inline int32_t get_OutNUcastPkts_18() const { return ___OutNUcastPkts_18; }
	inline int32_t* get_address_of_OutNUcastPkts_18() { return &___OutNUcastPkts_18; }
	inline void set_OutNUcastPkts_18(int32_t value)
	{
		___OutNUcastPkts_18 = value;
	}

	inline static int32_t get_offset_of_OutDiscards_19() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutDiscards_19)); }
	inline int32_t get_OutDiscards_19() const { return ___OutDiscards_19; }
	inline int32_t* get_address_of_OutDiscards_19() { return &___OutDiscards_19; }
	inline void set_OutDiscards_19(int32_t value)
	{
		___OutDiscards_19 = value;
	}

	inline static int32_t get_offset_of_OutErrors_20() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutErrors_20)); }
	inline int32_t get_OutErrors_20() const { return ___OutErrors_20; }
	inline int32_t* get_address_of_OutErrors_20() { return &___OutErrors_20; }
	inline void set_OutErrors_20(int32_t value)
	{
		___OutErrors_20 = value;
	}

	inline static int32_t get_offset_of_OutQLen_21() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutQLen_21)); }
	inline int32_t get_OutQLen_21() const { return ___OutQLen_21; }
	inline int32_t* get_address_of_OutQLen_21() { return &___OutQLen_21; }
	inline void set_OutQLen_21(int32_t value)
	{
		___OutQLen_21 = value;
	}

	inline static int32_t get_offset_of_DescrLen_22() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___DescrLen_22)); }
	inline int32_t get_DescrLen_22() const { return ___DescrLen_22; }
	inline int32_t* get_address_of_DescrLen_22() { return &___DescrLen_22; }
	inline void set_DescrLen_22(int32_t value)
	{
		___DescrLen_22 = value;
	}

	inline static int32_t get_offset_of_Descr_23() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Descr_23)); }
	inline ByteU5BU5D_t4116647657* get_Descr_23() const { return ___Descr_23; }
	inline ByteU5BU5D_t4116647657** get_address_of_Descr_23() { return &___Descr_23; }
	inline void set_Descr_23(ByteU5BU5D_t4116647657* value)
	{
		___Descr_23 = value;
		Il2CppCodeGenWriteBarrier((&___Descr_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_MIB_IFROW
struct Win32_MIB_IFROW_t851471770_marshaled_pinvoke
{
	uint8_t ___Name_0[512];
	int32_t ___Index_1;
	int32_t ___Type_2;
	int32_t ___Mtu_3;
	uint32_t ___Speed_4;
	int32_t ___PhysAddrLen_5;
	uint8_t ___PhysAddr_6[8];
	uint32_t ___AdminStatus_7;
	uint32_t ___OperStatus_8;
	uint32_t ___LastChange_9;
	int32_t ___InOctets_10;
	int32_t ___InUcastPkts_11;
	int32_t ___InNUcastPkts_12;
	int32_t ___InDiscards_13;
	int32_t ___InErrors_14;
	int32_t ___InUnknownProtos_15;
	int32_t ___OutOctets_16;
	int32_t ___OutUcastPkts_17;
	int32_t ___OutNUcastPkts_18;
	int32_t ___OutDiscards_19;
	int32_t ___OutErrors_20;
	int32_t ___OutQLen_21;
	int32_t ___DescrLen_22;
	uint8_t ___Descr_23[256];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_MIB_IFROW
struct Win32_MIB_IFROW_t851471770_marshaled_com
{
	uint8_t ___Name_0[512];
	int32_t ___Index_1;
	int32_t ___Type_2;
	int32_t ___Mtu_3;
	uint32_t ___Speed_4;
	int32_t ___PhysAddrLen_5;
	uint8_t ___PhysAddr_6[8];
	uint32_t ___AdminStatus_7;
	uint32_t ___OperStatus_8;
	uint32_t ___LastChange_9;
	int32_t ___InOctets_10;
	int32_t ___InUcastPkts_11;
	int32_t ___InNUcastPkts_12;
	int32_t ___InDiscards_13;
	int32_t ___InErrors_14;
	int32_t ___InUnknownProtos_15;
	int32_t ___OutOctets_16;
	int32_t ___OutUcastPkts_17;
	int32_t ___OutNUcastPkts_18;
	int32_t ___OutDiscards_19;
	int32_t ___OutErrors_20;
	int32_t ___OutQLen_21;
	int32_t ___DescrLen_22;
	uint8_t ___Descr_23[256];
};
#endif // WIN32_MIB_IFROW_T851471770_H
#ifndef IFADDRS_T271199369_H
#define IFADDRS_T271199369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.ifaddrs
struct  ifaddrs_t271199369 
{
public:
	// System.IntPtr System.Net.NetworkInformation.ifaddrs::ifa_next
	intptr_t ___ifa_next_0;
	// System.String System.Net.NetworkInformation.ifaddrs::ifa_name
	String_t* ___ifa_name_1;
	// System.UInt32 System.Net.NetworkInformation.ifaddrs::ifa_flags
	uint32_t ___ifa_flags_2;
	// System.IntPtr System.Net.NetworkInformation.ifaddrs::ifa_addr
	intptr_t ___ifa_addr_3;
	// System.IntPtr System.Net.NetworkInformation.ifaddrs::ifa_netmask
	intptr_t ___ifa_netmask_4;
	// System.Net.NetworkInformation.ifa_ifu System.Net.NetworkInformation.ifaddrs::ifa_ifu
	ifa_ifu_t1794893192  ___ifa_ifu_5;
	// System.IntPtr System.Net.NetworkInformation.ifaddrs::ifa_data
	intptr_t ___ifa_data_6;

public:
	inline static int32_t get_offset_of_ifa_next_0() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_next_0)); }
	inline intptr_t get_ifa_next_0() const { return ___ifa_next_0; }
	inline intptr_t* get_address_of_ifa_next_0() { return &___ifa_next_0; }
	inline void set_ifa_next_0(intptr_t value)
	{
		___ifa_next_0 = value;
	}

	inline static int32_t get_offset_of_ifa_name_1() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_name_1)); }
	inline String_t* get_ifa_name_1() const { return ___ifa_name_1; }
	inline String_t** get_address_of_ifa_name_1() { return &___ifa_name_1; }
	inline void set_ifa_name_1(String_t* value)
	{
		___ifa_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___ifa_name_1), value);
	}

	inline static int32_t get_offset_of_ifa_flags_2() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_flags_2)); }
	inline uint32_t get_ifa_flags_2() const { return ___ifa_flags_2; }
	inline uint32_t* get_address_of_ifa_flags_2() { return &___ifa_flags_2; }
	inline void set_ifa_flags_2(uint32_t value)
	{
		___ifa_flags_2 = value;
	}

	inline static int32_t get_offset_of_ifa_addr_3() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_addr_3)); }
	inline intptr_t get_ifa_addr_3() const { return ___ifa_addr_3; }
	inline intptr_t* get_address_of_ifa_addr_3() { return &___ifa_addr_3; }
	inline void set_ifa_addr_3(intptr_t value)
	{
		___ifa_addr_3 = value;
	}

	inline static int32_t get_offset_of_ifa_netmask_4() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_netmask_4)); }
	inline intptr_t get_ifa_netmask_4() const { return ___ifa_netmask_4; }
	inline intptr_t* get_address_of_ifa_netmask_4() { return &___ifa_netmask_4; }
	inline void set_ifa_netmask_4(intptr_t value)
	{
		___ifa_netmask_4 = value;
	}

	inline static int32_t get_offset_of_ifa_ifu_5() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_ifu_5)); }
	inline ifa_ifu_t1794893192  get_ifa_ifu_5() const { return ___ifa_ifu_5; }
	inline ifa_ifu_t1794893192 * get_address_of_ifa_ifu_5() { return &___ifa_ifu_5; }
	inline void set_ifa_ifu_5(ifa_ifu_t1794893192  value)
	{
		___ifa_ifu_5 = value;
	}

	inline static int32_t get_offset_of_ifa_data_6() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_data_6)); }
	inline intptr_t get_ifa_data_6() const { return ___ifa_data_6; }
	inline intptr_t* get_address_of_ifa_data_6() { return &___ifa_data_6; }
	inline void set_ifa_data_6(intptr_t value)
	{
		___ifa_data_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.ifaddrs
struct ifaddrs_t271199369_marshaled_pinvoke
{
	intptr_t ___ifa_next_0;
	char* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	ifa_ifu_t1794893192  ___ifa_ifu_5;
	intptr_t ___ifa_data_6;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.ifaddrs
struct ifaddrs_t271199369_marshaled_com
{
	intptr_t ___ifa_next_0;
	Il2CppChar* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	ifa_ifu_t1794893192  ___ifa_ifu_5;
	intptr_t ___ifa_data_6;
};
#endif // IFADDRS_T271199369_H
#ifndef SOCKADDR_IN6_T2790242023_H
#define SOCKADDR_IN6_T2790242023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.sockaddr_in6
struct  sockaddr_in6_t2790242023 
{
public:
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in6::sin6_family
	uint16_t ___sin6_family_0;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in6::sin6_port
	uint16_t ___sin6_port_1;
	// System.UInt32 System.Net.NetworkInformation.sockaddr_in6::sin6_flowinfo
	uint32_t ___sin6_flowinfo_2;
	// System.Net.NetworkInformation.in6_addr System.Net.NetworkInformation.sockaddr_in6::sin6_addr
	in6_addr_t3611791508  ___sin6_addr_3;
	// System.UInt32 System.Net.NetworkInformation.sockaddr_in6::sin6_scope_id
	uint32_t ___sin6_scope_id_4;

public:
	inline static int32_t get_offset_of_sin6_family_0() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2790242023, ___sin6_family_0)); }
	inline uint16_t get_sin6_family_0() const { return ___sin6_family_0; }
	inline uint16_t* get_address_of_sin6_family_0() { return &___sin6_family_0; }
	inline void set_sin6_family_0(uint16_t value)
	{
		___sin6_family_0 = value;
	}

	inline static int32_t get_offset_of_sin6_port_1() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2790242023, ___sin6_port_1)); }
	inline uint16_t get_sin6_port_1() const { return ___sin6_port_1; }
	inline uint16_t* get_address_of_sin6_port_1() { return &___sin6_port_1; }
	inline void set_sin6_port_1(uint16_t value)
	{
		___sin6_port_1 = value;
	}

	inline static int32_t get_offset_of_sin6_flowinfo_2() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2790242023, ___sin6_flowinfo_2)); }
	inline uint32_t get_sin6_flowinfo_2() const { return ___sin6_flowinfo_2; }
	inline uint32_t* get_address_of_sin6_flowinfo_2() { return &___sin6_flowinfo_2; }
	inline void set_sin6_flowinfo_2(uint32_t value)
	{
		___sin6_flowinfo_2 = value;
	}

	inline static int32_t get_offset_of_sin6_addr_3() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2790242023, ___sin6_addr_3)); }
	inline in6_addr_t3611791508  get_sin6_addr_3() const { return ___sin6_addr_3; }
	inline in6_addr_t3611791508 * get_address_of_sin6_addr_3() { return &___sin6_addr_3; }
	inline void set_sin6_addr_3(in6_addr_t3611791508  value)
	{
		___sin6_addr_3 = value;
	}

	inline static int32_t get_offset_of_sin6_scope_id_4() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2790242023, ___sin6_scope_id_4)); }
	inline uint32_t get_sin6_scope_id_4() const { return ___sin6_scope_id_4; }
	inline uint32_t* get_address_of_sin6_scope_id_4() { return &___sin6_scope_id_4; }
	inline void set_sin6_scope_id_4(uint32_t value)
	{
		___sin6_scope_id_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.sockaddr_in6
struct sockaddr_in6_t2790242023_marshaled_pinvoke
{
	uint16_t ___sin6_family_0;
	uint16_t ___sin6_port_1;
	uint32_t ___sin6_flowinfo_2;
	in6_addr_t3611791508_marshaled_pinvoke ___sin6_addr_3;
	uint32_t ___sin6_scope_id_4;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.sockaddr_in6
struct sockaddr_in6_t2790242023_marshaled_com
{
	uint16_t ___sin6_family_0;
	uint16_t ___sin6_port_1;
	uint32_t ___sin6_flowinfo_2;
	in6_addr_t3611791508_marshaled_com ___sin6_addr_3;
	uint32_t ___sin6_scope_id_4;
};
#endif // SOCKADDR_IN6_T2790242023_H
#ifndef LINUXNETWORKINTERFACE_T4095034716_H
#define LINUXNETWORKINTERFACE_T4095034716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxNetworkInterface
struct  LinuxNetworkInterface_t4095034716  : public UnixNetworkInterface_t2401762829
{
public:
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_path
	String_t* ___iface_path_5;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_operstate_path
	String_t* ___iface_operstate_path_6;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_flags_path
	String_t* ___iface_flags_path_7;

public:
	inline static int32_t get_offset_of_iface_path_5() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t4095034716, ___iface_path_5)); }
	inline String_t* get_iface_path_5() const { return ___iface_path_5; }
	inline String_t** get_address_of_iface_path_5() { return &___iface_path_5; }
	inline void set_iface_path_5(String_t* value)
	{
		___iface_path_5 = value;
		Il2CppCodeGenWriteBarrier((&___iface_path_5), value);
	}

	inline static int32_t get_offset_of_iface_operstate_path_6() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t4095034716, ___iface_operstate_path_6)); }
	inline String_t* get_iface_operstate_path_6() const { return ___iface_operstate_path_6; }
	inline String_t** get_address_of_iface_operstate_path_6() { return &___iface_operstate_path_6; }
	inline void set_iface_operstate_path_6(String_t* value)
	{
		___iface_operstate_path_6 = value;
		Il2CppCodeGenWriteBarrier((&___iface_operstate_path_6), value);
	}

	inline static int32_t get_offset_of_iface_flags_path_7() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t4095034716, ___iface_flags_path_7)); }
	inline String_t* get_iface_flags_path_7() const { return ___iface_flags_path_7; }
	inline String_t** get_address_of_iface_flags_path_7() { return &___iface_flags_path_7; }
	inline void set_iface_flags_path_7(String_t* value)
	{
		___iface_flags_path_7 = value;
		Il2CppCodeGenWriteBarrier((&___iface_flags_path_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINUXNETWORKINTERFACE_T4095034716_H
#ifndef MACOSNETWORKINTERFACE_T3969281182_H
#define MACOSNETWORKINTERFACE_T3969281182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsNetworkInterface
struct  MacOsNetworkInterface_t3969281182  : public UnixNetworkInterface_t2401762829
{
public:
	// System.UInt32 System.Net.NetworkInformation.MacOsNetworkInterface::_ifa_flags
	uint32_t ____ifa_flags_5;

public:
	inline static int32_t get_offset_of__ifa_flags_5() { return static_cast<int32_t>(offsetof(MacOsNetworkInterface_t3969281182, ____ifa_flags_5)); }
	inline uint32_t get__ifa_flags_5() const { return ____ifa_flags_5; }
	inline uint32_t* get_address_of__ifa_flags_5() { return &____ifa_flags_5; }
	inline void set__ifa_flags_5(uint32_t value)
	{
		____ifa_flags_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACOSNETWORKINTERFACE_T3969281182_H
#ifndef WIN32IPINTERFACEPROPERTIES2_T4152818631_H
#define WIN32IPINTERFACEPROPERTIES2_T4152818631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPInterfaceProperties2
struct  Win32IPInterfaceProperties2_t4152818631  : public IPInterfaceProperties_t3964383369
{
public:
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES System.Net.NetworkInformation.Win32IPInterfaceProperties2::addr
	Win32_IP_ADAPTER_ADDRESSES_t3463526328  ___addr_0;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPInterfaceProperties2::mib4
	Win32_MIB_IFROW_t851471770  ___mib4_1;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPInterfaceProperties2::mib6
	Win32_MIB_IFROW_t851471770  ___mib6_2;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(Win32IPInterfaceProperties2_t4152818631, ___addr_0)); }
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328  get_addr_0() const { return ___addr_0; }
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328 * get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(Win32_IP_ADAPTER_ADDRESSES_t3463526328  value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_mib4_1() { return static_cast<int32_t>(offsetof(Win32IPInterfaceProperties2_t4152818631, ___mib4_1)); }
	inline Win32_MIB_IFROW_t851471770  get_mib4_1() const { return ___mib4_1; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_mib4_1() { return &___mib4_1; }
	inline void set_mib4_1(Win32_MIB_IFROW_t851471770  value)
	{
		___mib4_1 = value;
	}

	inline static int32_t get_offset_of_mib6_2() { return static_cast<int32_t>(offsetof(Win32IPInterfaceProperties2_t4152818631, ___mib6_2)); }
	inline Win32_MIB_IFROW_t851471770  get_mib6_2() const { return ___mib6_2; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_mib6_2() { return &___mib6_2; }
	inline void set_mib6_2(Win32_MIB_IFROW_t851471770  value)
	{
		___mib6_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32IPINTERFACEPROPERTIES2_T4152818631_H
#ifndef WIN32IPV4INTERFACESTATISTICS_T3096671123_H
#define WIN32IPV4INTERFACESTATISTICS_T3096671123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics
struct  Win32IPv4InterfaceStatistics_t3096671123  : public IPv4InterfaceStatistics_t3249312820
{
public:
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPv4InterfaceStatistics::info
	Win32_MIB_IFROW_t851471770  ___info_0;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(Win32IPv4InterfaceStatistics_t3096671123, ___info_0)); }
	inline Win32_MIB_IFROW_t851471770  get_info_0() const { return ___info_0; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(Win32_MIB_IFROW_t851471770  value)
	{
		___info_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32IPV4INTERFACESTATISTICS_T3096671123_H
#ifndef WIN32NETWORKINTERFACE_T3922465985_H
#define WIN32NETWORKINTERFACE_T3922465985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32NetworkInterface
struct  Win32NetworkInterface_t3922465985  : public RuntimeObject
{
public:

public:
};

struct Win32NetworkInterface_t3922465985_StaticFields
{
public:
	// System.Net.NetworkInformation.Win32_FIXED_INFO System.Net.NetworkInformation.Win32NetworkInterface::fixedInfo
	Win32_FIXED_INFO_t1299345856  ___fixedInfo_0;
	// System.Boolean System.Net.NetworkInformation.Win32NetworkInterface::initialized
	bool ___initialized_1;

public:
	inline static int32_t get_offset_of_fixedInfo_0() { return static_cast<int32_t>(offsetof(Win32NetworkInterface_t3922465985_StaticFields, ___fixedInfo_0)); }
	inline Win32_FIXED_INFO_t1299345856  get_fixedInfo_0() const { return ___fixedInfo_0; }
	inline Win32_FIXED_INFO_t1299345856 * get_address_of_fixedInfo_0() { return &___fixedInfo_0; }
	inline void set_fixedInfo_0(Win32_FIXED_INFO_t1299345856  value)
	{
		___fixedInfo_0 = value;
	}

	inline static int32_t get_offset_of_initialized_1() { return static_cast<int32_t>(offsetof(Win32NetworkInterface_t3922465985_StaticFields, ___initialized_1)); }
	inline bool get_initialized_1() const { return ___initialized_1; }
	inline bool* get_address_of_initialized_1() { return &___initialized_1; }
	inline void set_initialized_1(bool value)
	{
		___initialized_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32NETWORKINTERFACE_T3922465985_H
#ifndef WIN32NETWORKINTERFACE2_T2303857857_H
#define WIN32NETWORKINTERFACE2_T2303857857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32NetworkInterface2
struct  Win32NetworkInterface2_t2303857857  : public NetworkInterface_t271883373
{
public:
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES System.Net.NetworkInformation.Win32NetworkInterface2::addr
	Win32_IP_ADAPTER_ADDRESSES_t3463526328  ___addr_0;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32NetworkInterface2::mib4
	Win32_MIB_IFROW_t851471770  ___mib4_1;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32NetworkInterface2::mib6
	Win32_MIB_IFROW_t851471770  ___mib6_2;
	// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics System.Net.NetworkInformation.Win32NetworkInterface2::ip4stats
	Win32IPv4InterfaceStatistics_t3096671123 * ___ip4stats_3;
	// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.Win32NetworkInterface2::ip_if_props
	IPInterfaceProperties_t3964383369 * ___ip_if_props_4;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t2303857857, ___addr_0)); }
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328  get_addr_0() const { return ___addr_0; }
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328 * get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(Win32_IP_ADAPTER_ADDRESSES_t3463526328  value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_mib4_1() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t2303857857, ___mib4_1)); }
	inline Win32_MIB_IFROW_t851471770  get_mib4_1() const { return ___mib4_1; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_mib4_1() { return &___mib4_1; }
	inline void set_mib4_1(Win32_MIB_IFROW_t851471770  value)
	{
		___mib4_1 = value;
	}

	inline static int32_t get_offset_of_mib6_2() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t2303857857, ___mib6_2)); }
	inline Win32_MIB_IFROW_t851471770  get_mib6_2() const { return ___mib6_2; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_mib6_2() { return &___mib6_2; }
	inline void set_mib6_2(Win32_MIB_IFROW_t851471770  value)
	{
		___mib6_2 = value;
	}

	inline static int32_t get_offset_of_ip4stats_3() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t2303857857, ___ip4stats_3)); }
	inline Win32IPv4InterfaceStatistics_t3096671123 * get_ip4stats_3() const { return ___ip4stats_3; }
	inline Win32IPv4InterfaceStatistics_t3096671123 ** get_address_of_ip4stats_3() { return &___ip4stats_3; }
	inline void set_ip4stats_3(Win32IPv4InterfaceStatistics_t3096671123 * value)
	{
		___ip4stats_3 = value;
		Il2CppCodeGenWriteBarrier((&___ip4stats_3), value);
	}

	inline static int32_t get_offset_of_ip_if_props_4() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t2303857857, ___ip_if_props_4)); }
	inline IPInterfaceProperties_t3964383369 * get_ip_if_props_4() const { return ___ip_if_props_4; }
	inline IPInterfaceProperties_t3964383369 ** get_address_of_ip_if_props_4() { return &___ip_if_props_4; }
	inline void set_ip_if_props_4(IPInterfaceProperties_t3964383369 * value)
	{
		___ip_if_props_4 = value;
		Il2CppCodeGenWriteBarrier((&___ip_if_props_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32NETWORKINTERFACE2_T2303857857_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2800 = { sizeof (MibIPGlobalProperties_t3015477361), -1, sizeof(MibIPGlobalProperties_t3015477361_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2800[7] = 
{
	MibIPGlobalProperties_t3015477361::get_offset_of_StatisticsFile_0(),
	MibIPGlobalProperties_t3015477361::get_offset_of_StatisticsFileIPv6_1(),
	MibIPGlobalProperties_t3015477361::get_offset_of_TcpFile_2(),
	MibIPGlobalProperties_t3015477361::get_offset_of_Tcp6File_3(),
	MibIPGlobalProperties_t3015477361::get_offset_of_UdpFile_4(),
	MibIPGlobalProperties_t3015477361::get_offset_of_Udp6File_5(),
	MibIPGlobalProperties_t3015477361_StaticFields::get_offset_of_wsChars_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2801 = { sizeof (Win32IPGlobalProperties_t3375126358), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2802 = { sizeof (UnixIPInterfaceProperties_t1296234392), -1, sizeof(UnixIPInterfaceProperties_t1296234392_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2802[7] = 
{
	UnixIPInterfaceProperties_t1296234392::get_offset_of_iface_0(),
	UnixIPInterfaceProperties_t1296234392::get_offset_of_addresses_1(),
	UnixIPInterfaceProperties_t1296234392::get_offset_of_dns_servers_2(),
	UnixIPInterfaceProperties_t1296234392_StaticFields::get_offset_of_ns_3(),
	UnixIPInterfaceProperties_t1296234392_StaticFields::get_offset_of_search_4(),
	UnixIPInterfaceProperties_t1296234392::get_offset_of_dns_suffix_5(),
	UnixIPInterfaceProperties_t1296234392::get_offset_of_last_parse_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2803 = { sizeof (LinuxIPInterfaceProperties_t458874081), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2804 = { sizeof (MacOsIPInterfaceProperties_t1282553291), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2805 = { sizeof (Win32IPInterfaceProperties2_t4152818631), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2805[3] = 
{
	Win32IPInterfaceProperties2_t4152818631::get_offset_of_addr_0(),
	Win32IPInterfaceProperties2_t4152818631::get_offset_of_mib4_1(),
	Win32IPInterfaceProperties2_t4152818631::get_offset_of_mib6_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2806 = { sizeof (Win32IPv4InterfaceStatistics_t3096671123), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2806[1] = 
{
	Win32IPv4InterfaceStatistics_t3096671123::get_offset_of_info_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2807 = { sizeof (ifa_ifu_t1794893192)+ sizeof (RuntimeObject), sizeof(ifa_ifu_t1794893192 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2807[2] = 
{
	ifa_ifu_t1794893192::get_offset_of_ifu_broadaddr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifa_ifu_t1794893192::get_offset_of_ifu_dstaddr_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2808 = { sizeof (ifaddrs_t271199369)+ sizeof (RuntimeObject), sizeof(ifaddrs_t271199369_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2808[7] = 
{
	ifaddrs_t271199369::get_offset_of_ifa_next_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_flags_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_netmask_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_ifu_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_data_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2809 = { sizeof (sockaddr_in_t2786965223)+ sizeof (RuntimeObject), sizeof(sockaddr_in_t2786965223 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2809[3] = 
{
	sockaddr_in_t2786965223::get_offset_of_sin_family_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t2786965223::get_offset_of_sin_port_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t2786965223::get_offset_of_sin_addr_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2810 = { sizeof (sockaddr_in6_t2790242023)+ sizeof (RuntimeObject), sizeof(sockaddr_in6_t2790242023_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2810[5] = 
{
	sockaddr_in6_t2790242023::get_offset_of_sin6_family_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2790242023::get_offset_of_sin6_port_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2790242023::get_offset_of_sin6_flowinfo_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2790242023::get_offset_of_sin6_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2790242023::get_offset_of_sin6_scope_id_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2811 = { sizeof (in6_addr_t3611791508)+ sizeof (RuntimeObject), sizeof(in6_addr_t3611791508_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2811[1] = 
{
	in6_addr_t3611791508::get_offset_of_u6_addr8_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2812 = { sizeof (sockaddr_ll_t3978606313)+ sizeof (RuntimeObject), sizeof(sockaddr_ll_t3978606313_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2812[7] = 
{
	sockaddr_ll_t3978606313::get_offset_of_sll_family_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_protocol_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_ifindex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_hatype_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_pkttype_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_halen_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_addr_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2813 = { sizeof (LinuxArpHardware_t827080684)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2813[18] = 
{
	LinuxArpHardware_t827080684::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2814 = { sizeof (MacOsArpHardware_t4198534184)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2814[7] = 
{
	MacOsArpHardware_t4198534184::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2815 = { sizeof (SystemNetworkInterface_t699244148), -1, sizeof(SystemNetworkInterface_t699244148_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2815[1] = 
{
	SystemNetworkInterface_t699244148_StaticFields::get_offset_of_nif_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2816 = { sizeof (NetworkInterfaceFactory_t1756522298), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2817 = { sizeof (UnixNetworkInterfaceAPI_t1061423219), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2818 = { sizeof (MacOsNetworkInterfaceAPI_t1249733612), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2819 = { sizeof (LinuxNetworkInterfaceAPI_t1157390748), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2820 = { sizeof (Win32NetworkInterfaceAPI_t912414909), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2821 = { sizeof (UnixNetworkInterface_t2401762829), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2821[5] = 
{
	UnixNetworkInterface_t2401762829::get_offset_of_ipproperties_0(),
	UnixNetworkInterface_t2401762829::get_offset_of_name_1(),
	UnixNetworkInterface_t2401762829::get_offset_of_addresses_2(),
	UnixNetworkInterface_t2401762829::get_offset_of_macAddress_3(),
	UnixNetworkInterface_t2401762829::get_offset_of_type_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2822 = { sizeof (LinuxNetworkInterface_t4095034716), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2822[3] = 
{
	LinuxNetworkInterface_t4095034716::get_offset_of_iface_path_5(),
	LinuxNetworkInterface_t4095034716::get_offset_of_iface_operstate_path_6(),
	LinuxNetworkInterface_t4095034716::get_offset_of_iface_flags_path_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2823 = { sizeof (MacOsNetworkInterface_t3969281182), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2823[1] = 
{
	MacOsNetworkInterface_t3969281182::get_offset_of__ifa_flags_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2824 = { sizeof (Win32NetworkInterface2_t2303857857), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2824[5] = 
{
	Win32NetworkInterface2_t2303857857::get_offset_of_addr_0(),
	Win32NetworkInterface2_t2303857857::get_offset_of_mib4_1(),
	Win32NetworkInterface2_t2303857857::get_offset_of_mib6_2(),
	Win32NetworkInterface2_t2303857857::get_offset_of_ip4stats_3(),
	Win32NetworkInterface2_t2303857857::get_offset_of_ip_if_props_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2825 = { sizeof (Win32NetworkInterface_t3922465985), -1, sizeof(Win32NetworkInterface_t3922465985_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2825[2] = 
{
	Win32NetworkInterface_t3922465985_StaticFields::get_offset_of_fixedInfo_0(),
	Win32NetworkInterface_t3922465985_StaticFields::get_offset_of_initialized_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2826 = { sizeof (Win32_FIXED_INFO_t1299345856)+ sizeof (RuntimeObject), sizeof(Win32_FIXED_INFO_t1299345856_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2826[9] = 
{
	Win32_FIXED_INFO_t1299345856::get_offset_of_HostName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_FIXED_INFO_t1299345856::get_offset_of_DomainName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_FIXED_INFO_t1299345856::get_offset_of_CurrentDnsServer_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_FIXED_INFO_t1299345856::get_offset_of_DnsServerList_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_FIXED_INFO_t1299345856::get_offset_of_NodeType_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_FIXED_INFO_t1299345856::get_offset_of_ScopeId_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_FIXED_INFO_t1299345856::get_offset_of_EnableRouting_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_FIXED_INFO_t1299345856::get_offset_of_EnableProxy_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_FIXED_INFO_t1299345856::get_offset_of_EnableDns_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2827 = { sizeof (AlignmentUnion_t208902285)+ sizeof (RuntimeObject), sizeof(AlignmentUnion_t208902285 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2827[3] = 
{
	AlignmentUnion_t208902285::get_offset_of_Alignment_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AlignmentUnion_t208902285::get_offset_of_Length_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AlignmentUnion_t208902285::get_offset_of_IfIndex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2828 = { sizeof (Win32_IP_ADAPTER_ADDRESSES_t3463526328)+ sizeof (RuntimeObject), sizeof(Win32_IP_ADAPTER_ADDRESSES_t3463526328_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2828[18] = 
{
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_Alignment_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_Next_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_AdapterName_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_FirstUnicastAddress_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_FirstAnycastAddress_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_FirstMulticastAddress_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_FirstDnsServerAddress_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_DnsSuffix_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_Description_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_FriendlyName_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_PhysicalAddress_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_PhysicalAddressLength_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_Flags_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_Mtu_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_IfType_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_OperStatus_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_Ipv6IfIndex_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_ZoneIndices_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2829 = { sizeof (Win32_MIB_IFROW_t851471770)+ sizeof (RuntimeObject), sizeof(Win32_MIB_IFROW_t851471770_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2829[24] = 
{
	Win32_MIB_IFROW_t851471770::get_offset_of_Name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_Index_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_Type_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_Mtu_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_Speed_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_PhysAddrLen_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_PhysAddr_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_AdminStatus_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OperStatus_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_LastChange_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_InOctets_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_InUcastPkts_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_InNUcastPkts_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_InDiscards_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_InErrors_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_InUnknownProtos_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OutOctets_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OutUcastPkts_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OutNUcastPkts_18() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OutDiscards_19() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OutErrors_20() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OutQLen_21() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_DescrLen_22() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_Descr_23() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2830 = { sizeof (Win32_IP_ADDR_STRING_t1213417184)+ sizeof (RuntimeObject), sizeof(Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2830[4] = 
{
	Win32_IP_ADDR_STRING_t1213417184::get_offset_of_Next_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADDR_STRING_t1213417184::get_offset_of_IpAddress_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADDR_STRING_t1213417184::get_offset_of_IpMask_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADDR_STRING_t1213417184::get_offset_of_Context_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2831 = { sizeof (Win32LengthFlagsUnion_t1383639798)+ sizeof (RuntimeObject), sizeof(Win32LengthFlagsUnion_t1383639798 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2831[2] = 
{
	Win32LengthFlagsUnion_t1383639798::get_offset_of_Length_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32LengthFlagsUnion_t1383639798::get_offset_of_Flags_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2832 = { sizeof (Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100)+ sizeof (RuntimeObject), sizeof(Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2832[3] = 
{
	Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100::get_offset_of_LengthFlags_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100::get_offset_of_Next_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100::get_offset_of_Address_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2833 = { sizeof (Win32_SOCKADDR_t2504501424)+ sizeof (RuntimeObject), sizeof(Win32_SOCKADDR_t2504501424_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2833[2] = 
{
	Win32_SOCKADDR_t2504501424::get_offset_of_AddressFamily_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_SOCKADDR_t2504501424::get_offset_of_AddressData_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2834 = { sizeof (Win32_SOCKET_ADDRESS_t1936753419)+ sizeof (RuntimeObject), sizeof(Win32_SOCKET_ADDRESS_t1936753419 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2834[2] = 
{
	Win32_SOCKET_ADDRESS_t1936753419::get_offset_of_Sockaddr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_SOCKET_ADDRESS_t1936753419::get_offset_of_SockaddrLength_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2835 = { sizeof (ifaddrs_t2169824096)+ sizeof (RuntimeObject), sizeof(ifaddrs_t2169824096_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2835[7] = 
{
	ifaddrs_t2169824096::get_offset_of_ifa_next_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_flags_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_netmask_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_dstaddr_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_data_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2836 = { sizeof (sockaddr_t371844119)+ sizeof (RuntimeObject), sizeof(sockaddr_t371844119 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2836[2] = 
{
	sockaddr_t371844119::get_offset_of_sa_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_t371844119::get_offset_of_sa_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2837 = { sizeof (sockaddr_in_t1317910171)+ sizeof (RuntimeObject), sizeof(sockaddr_in_t1317910171 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2837[4] = 
{
	sockaddr_in_t1317910171::get_offset_of_sin_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t1317910171::get_offset_of_sin_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t1317910171::get_offset_of_sin_port_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t1317910171::get_offset_of_sin_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2838 = { sizeof (in6_addr_t1417766092)+ sizeof (RuntimeObject), sizeof(in6_addr_t1417766092_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2838[1] = 
{
	in6_addr_t1417766092::get_offset_of_u6_addr8_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2839 = { sizeof (sockaddr_in6_t2080844659)+ sizeof (RuntimeObject), sizeof(sockaddr_in6_t2080844659_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2839[6] = 
{
	sockaddr_in6_t2080844659::get_offset_of_sin6_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_port_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_flowinfo_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_addr_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_scope_id_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2840 = { sizeof (sockaddr_dl_t1317779094)+ sizeof (RuntimeObject), sizeof(sockaddr_dl_t1317779094_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2840[8] = 
{
	sockaddr_dl_t1317779094::get_offset_of_sdl_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_index_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_type_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_nlen_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_alen_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_slen_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_data_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2841 = { sizeof (DefaultProxySectionInternal_t3889414525), -1, sizeof(DefaultProxySectionInternal_t3889414525_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2841[2] = 
{
	DefaultProxySectionInternal_t3889414525::get_offset_of_webProxy_0(),
	DefaultProxySectionInternal_t3889414525_StaticFields::get_offset_of_classSyncObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2842 = { sizeof (SettingsSectionInternal_t781171337), -1, sizeof(SettingsSectionInternal_t781171337_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2842[3] = 
{
	SettingsSectionInternal_t781171337_StaticFields::get_offset_of_instance_0(),
	SettingsSectionInternal_t781171337::get_offset_of_HttpListenerUnescapeRequestUrl_1(),
	SettingsSectionInternal_t781171337::get_offset_of_IPProtectionLevel_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2843 = { sizeof (AuthenticationModuleElement_t2289740666), -1, sizeof(AuthenticationModuleElement_t2289740666_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2843[2] = 
{
	AuthenticationModuleElement_t2289740666_StaticFields::get_offset_of_properties_15(),
	AuthenticationModuleElement_t2289740666_StaticFields::get_offset_of_typeProp_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2844 = { sizeof (AuthenticationModuleElementCollection_t1161221431), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2845 = { sizeof (AuthenticationModulesSection_t1083221556), -1, sizeof(AuthenticationModulesSection_t1083221556_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2845[2] = 
{
	AuthenticationModulesSection_t1083221556_StaticFields::get_offset_of_properties_19(),
	AuthenticationModulesSection_t1083221556_StaticFields::get_offset_of_authenticationModulesProp_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2846 = { sizeof (BypassElement_t2358616601), -1, sizeof(BypassElement_t2358616601_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2846[2] = 
{
	BypassElement_t2358616601_StaticFields::get_offset_of_properties_15(),
	BypassElement_t2358616601_StaticFields::get_offset_of_addressProp_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2847 = { sizeof (BypassElementCollection_t47326401), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2848 = { sizeof (ConnectionManagementElement_t3857438253), -1, sizeof(ConnectionManagementElement_t3857438253_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2848[3] = 
{
	ConnectionManagementElement_t3857438253_StaticFields::get_offset_of_properties_15(),
	ConnectionManagementElement_t3857438253_StaticFields::get_offset_of_addressProp_16(),
	ConnectionManagementElement_t3857438253_StaticFields::get_offset_of_maxConnectionProp_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2849 = { sizeof (ConnectionManagementElementCollection_t3860227195), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2850 = { sizeof (ConnectionManagementData_t2003128658), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2850[1] = 
{
	ConnectionManagementData_t2003128658::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2851 = { sizeof (ConnectionManagementSection_t1603642748), -1, sizeof(ConnectionManagementSection_t1603642748_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2851[2] = 
{
	ConnectionManagementSection_t1603642748_StaticFields::get_offset_of_connectionManagementProp_19(),
	ConnectionManagementSection_t1603642748_StaticFields::get_offset_of_properties_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2852 = { sizeof (DefaultProxySection_t4167594595), -1, sizeof(DefaultProxySection_t4167594595_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2852[6] = 
{
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_properties_19(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_bypassListProp_20(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_enabledProp_21(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_moduleProp_22(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_proxyProp_23(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_useDefaultCredentialsProp_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2853 = { sizeof (HttpWebRequestElement_t2801692355), -1, sizeof(HttpWebRequestElement_t2801692355_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2853[5] = 
{
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_maximumErrorResponseLengthProp_15(),
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_maximumResponseHeadersLengthProp_16(),
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_maximumUnauthorizedUploadLengthProp_17(),
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_useUnsafeHeaderParsingProp_18(),
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_properties_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2854 = { sizeof (Ipv6Element_t180053194), -1, sizeof(Ipv6Element_t180053194_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2854[2] = 
{
	Ipv6Element_t180053194_StaticFields::get_offset_of_properties_15(),
	Ipv6Element_t180053194_StaticFields::get_offset_of_enabledProp_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2855 = { sizeof (ModuleElement_t3252950656), -1, sizeof(ModuleElement_t3252950656_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2855[2] = 
{
	ModuleElement_t3252950656_StaticFields::get_offset_of_properties_15(),
	ModuleElement_t3252950656_StaticFields::get_offset_of_typeProp_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2856 = { sizeof (NetSectionGroup_t3270122580), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2857 = { sizeof (PerformanceCountersElement_t4093363992), -1, sizeof(PerformanceCountersElement_t4093363992_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2857[2] = 
{
	PerformanceCountersElement_t4093363992_StaticFields::get_offset_of_enabledProp_15(),
	PerformanceCountersElement_t4093363992_StaticFields::get_offset_of_properties_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2858 = { sizeof (ProxyElement_t3214064751), -1, sizeof(ProxyElement_t3214064751_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2858[6] = 
{
	ProxyElement_t3214064751_StaticFields::get_offset_of_properties_15(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_autoDetectProp_16(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_bypassOnLocalProp_17(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_proxyAddressProp_18(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_scriptLocationProp_19(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_useSystemDefaultProp_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2859 = { sizeof (BypassOnLocalValues_t945670496)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2859[4] = 
{
	BypassOnLocalValues_t945670496::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2860 = { sizeof (UseSystemDefaultValues_t2711047072)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2860[4] = 
{
	UseSystemDefaultValues_t2711047072::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2861 = { sizeof (AutoDetectValues_t1649618618)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2861[4] = 
{
	AutoDetectValues_t1649618618::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2862 = { sizeof (ServicePointManagerElement_t2768640361), -1, sizeof(ServicePointManagerElement_t2768640361_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2862[7] = 
{
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_properties_15(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_checkCertificateNameProp_16(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_checkCertificateRevocationListProp_17(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_dnsRefreshTimeoutProp_18(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_enableDnsRoundRobinProp_19(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_expect100ContinueProp_20(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_useNagleAlgorithmProp_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2863 = { sizeof (SettingsSection_t1259474535), -1, sizeof(SettingsSection_t1259474535_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2863[7] = 
{
	SettingsSection_t1259474535_StaticFields::get_offset_of_properties_19(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_httpWebRequestProp_20(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_ipv6Prop_21(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_performanceCountersProp_22(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_servicePointManagerProp_23(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_webProxyScriptProp_24(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_socketProp_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2864 = { sizeof (SocketElement_t3329874080), -1, sizeof(SocketElement_t3329874080_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2864[3] = 
{
	SocketElement_t3329874080_StaticFields::get_offset_of_properties_15(),
	SocketElement_t3329874080_StaticFields::get_offset_of_alwaysUseCompletionPortsForAcceptProp_16(),
	SocketElement_t3329874080_StaticFields::get_offset_of_alwaysUseCompletionPortsForConnectProp_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2865 = { sizeof (WebProxyScriptElement_t477406598), -1, sizeof(WebProxyScriptElement_t477406598_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2865[2] = 
{
	WebProxyScriptElement_t477406598_StaticFields::get_offset_of_downloadTimeoutProp_15(),
	WebProxyScriptElement_t477406598_StaticFields::get_offset_of_properties_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2866 = { sizeof (WebRequestModuleElement_t1406085120), -1, sizeof(WebRequestModuleElement_t1406085120_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2866[3] = 
{
	WebRequestModuleElement_t1406085120_StaticFields::get_offset_of_properties_15(),
	WebRequestModuleElement_t1406085120_StaticFields::get_offset_of_prefixProp_16(),
	WebRequestModuleElement_t1406085120_StaticFields::get_offset_of_typeProp_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2867 = { sizeof (WebRequestModuleElementCollection_t925190782), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2868 = { sizeof (WebRequestModulesSection_t4132732301), -1, sizeof(WebRequestModulesSection_t4132732301_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2868[2] = 
{
	WebRequestModulesSection_t4132732301_StaticFields::get_offset_of_properties_19(),
	WebRequestModulesSection_t4132732301_StaticFields::get_offset_of_webRequestModulesProp_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2869 = { sizeof (RequestCache_t3669488992), -1, sizeof(RequestCache_t3669488992_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2869[1] = 
{
	RequestCache_t3669488992_StaticFields::get_offset_of_LineSplits_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2870 = { sizeof (RequestCacheValidator_t587568667), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2871 = { sizeof (RequestCacheBinding_t2614858269), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2871[2] = 
{
	RequestCacheBinding_t2614858269::get_offset_of_m_RequestCache_0(),
	RequestCacheBinding_t2614858269::get_offset_of_m_CacheValidator_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2872 = { sizeof (RequestCacheLevel_t1509648360)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2872[8] = 
{
	RequestCacheLevel_t1509648360::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2873 = { sizeof (RequestCachePolicy_t2923596909), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2873[1] = 
{
	RequestCachePolicy_t2923596909::get_offset_of_m_Level_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2874 = { sizeof (RequestCacheProtocol_t3614465628), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2875 = { sizeof (HybridDictionary_t4070033136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2875[3] = 
{
	HybridDictionary_t4070033136::get_offset_of_list_0(),
	HybridDictionary_t4070033136::get_offset_of_hashtable_1(),
	HybridDictionary_t4070033136::get_offset_of_caseInsensitive_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2876 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2877 = { sizeof (ListDictionary_t1624492310), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2877[5] = 
{
	ListDictionary_t1624492310::get_offset_of_head_0(),
	ListDictionary_t1624492310::get_offset_of_version_1(),
	ListDictionary_t1624492310::get_offset_of_count_2(),
	ListDictionary_t1624492310::get_offset_of_comparer_3(),
	ListDictionary_t1624492310::get_offset_of__syncRoot_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2878 = { sizeof (NodeEnumerator_t3248827953), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2878[4] = 
{
	NodeEnumerator_t3248827953::get_offset_of_list_0(),
	NodeEnumerator_t3248827953::get_offset_of_current_1(),
	NodeEnumerator_t3248827953::get_offset_of_version_2(),
	NodeEnumerator_t3248827953::get_offset_of_start_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2879 = { sizeof (NodeKeyValueCollection_t1279341543), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2879[2] = 
{
	NodeKeyValueCollection_t1279341543::get_offset_of_list_0(),
	NodeKeyValueCollection_t1279341543::get_offset_of_isKeys_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2880 = { sizeof (NodeKeyValueEnumerator_t642906510), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2880[5] = 
{
	NodeKeyValueEnumerator_t642906510::get_offset_of_list_0(),
	NodeKeyValueEnumerator_t642906510::get_offset_of_current_1(),
	NodeKeyValueEnumerator_t642906510::get_offset_of_version_2(),
	NodeKeyValueEnumerator_t642906510::get_offset_of_isKeys_3(),
	NodeKeyValueEnumerator_t642906510::get_offset_of_start_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2881 = { sizeof (DictionaryNode_t417719465), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2881[3] = 
{
	DictionaryNode_t417719465::get_offset_of_key_0(),
	DictionaryNode_t417719465::get_offset_of_value_1(),
	DictionaryNode_t417719465::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2882 = { sizeof (NameObjectCollectionBase_t2091847364), -1, sizeof(NameObjectCollectionBase_t2091847364_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2882[10] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2883 = { sizeof (NameObjectEntry_t4224248211), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2883[2] = 
{
	NameObjectEntry_t4224248211::get_offset_of_Key_0(),
	NameObjectEntry_t4224248211::get_offset_of_Value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2884 = { sizeof (NameObjectKeysEnumerator_t3824388371), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2884[3] = 
{
	NameObjectKeysEnumerator_t3824388371::get_offset_of__pos_0(),
	NameObjectKeysEnumerator_t3824388371::get_offset_of__coll_1(),
	NameObjectKeysEnumerator_t3824388371::get_offset_of__version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2885 = { sizeof (KeysCollection_t1318642398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2885[1] = 
{
	KeysCollection_t1318642398::get_offset_of__coll_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2886 = { sizeof (CompatibleComparer_t4154576053), -1, sizeof(CompatibleComparer_t4154576053_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2886[4] = 
{
	CompatibleComparer_t4154576053::get_offset_of__comparer_0(),
	CompatibleComparer_t4154576053_StaticFields::get_offset_of_defaultComparer_1(),
	CompatibleComparer_t4154576053::get_offset_of__hcp_2(),
	CompatibleComparer_t4154576053_StaticFields::get_offset_of_defaultHashProvider_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2887 = { sizeof (NameValueCollection_t407452768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2887[2] = 
{
	NameValueCollection_t407452768::get_offset_of__all_10(),
	NameValueCollection_t407452768::get_offset_of__allKeys_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2888 = { sizeof (OrderedDictionary_t2617496293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2888[7] = 
{
	OrderedDictionary_t2617496293::get_offset_of__objectsArray_0(),
	OrderedDictionary_t2617496293::get_offset_of__objectsTable_1(),
	OrderedDictionary_t2617496293::get_offset_of__initialCapacity_2(),
	OrderedDictionary_t2617496293::get_offset_of__comparer_3(),
	OrderedDictionary_t2617496293::get_offset_of__readOnly_4(),
	OrderedDictionary_t2617496293::get_offset_of__syncRoot_5(),
	OrderedDictionary_t2617496293::get_offset_of__siInfo_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2889 = { sizeof (OrderedDictionaryEnumerator_t1215437281), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2889[2] = 
{
	OrderedDictionaryEnumerator_t1215437281::get_offset_of__objectReturnType_0(),
	OrderedDictionaryEnumerator_t1215437281::get_offset_of_arrayEnumerator_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2890 = { sizeof (OrderedDictionaryKeyValueCollection_t1788601968), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2890[2] = 
{
	OrderedDictionaryKeyValueCollection_t1788601968::get_offset_of__objects_0(),
	OrderedDictionaryKeyValueCollection_t1788601968::get_offset_of_isKeys_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2891 = { sizeof (StringCollection_t167406615), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2891[1] = 
{
	StringCollection_t167406615::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2892 = { sizeof (StringDictionary_t120437468), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2892[1] = 
{
	StringDictionary_t120437468::get_offset_of_contents_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2893 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2894 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2894[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2895 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2895[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2896 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2896[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2897 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2897[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2898 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2898[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2899 = { 0, 0, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
