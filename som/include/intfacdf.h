
/*
 * This file was generated by the SOM Compiler.
 * FileName: intfacdf.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

#ifndef SOM_InterfaceDef_h
#define SOM_InterfaceDef_h


/*
 * Passthru lines: File: "C.h", "before"
 */

    #include <somtcnst.h>
    #include <somir.h>
    #include <operatdf.h>
    #include <attribdf.h>


#include <som.h>

/*
 * -- This emitter treats Method Tokens as Thunks by default.
 * -- Use the sc modifier "nothunks" to change this default
 */
#undef somresolve_
#define somresolve_(obj,mToken) ((somMethodProc*)((void)obj, mToken))

/*
 * Define the class name as an object type
 */
#ifndef InterfaceDef
#define InterfaceDef SOMObject
#endif
/*
 *  This interface is used to access information associated with
 *  interfaces defined in an IDL file.
 * 
 *  See CORBA 1.1, 7.5.4, p.134
 */
#include <containd.h>
#include <containr.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef Container
    #define Container SOMObject
#endif /* Container */
struct OperationDef_OperationDescription;
#ifndef _IDL_SEQUENCE_OperationDef_OperationDescription_defined
#define _IDL_SEQUENCE_OperationDef_OperationDescription_defined
typedef struct {
    unsigned long _maximum;
    unsigned long _length;
    struct OperationDef_OperationDescription *_buffer;
} _IDL_SEQUENCE_OperationDef_OperationDescription;
#endif /* _IDL_SEQUENCE_OperationDef_OperationDescription_defined */ 
struct AttributeDef_AttributeDescription;
#ifndef _IDL_SEQUENCE_AttributeDef_AttributeDescription_defined
#define _IDL_SEQUENCE_AttributeDef_AttributeDescription_defined
typedef struct {
    unsigned long _maximum;
    unsigned long _length;
    struct AttributeDef_AttributeDescription *_buffer;
} _IDL_SEQUENCE_AttributeDef_AttributeDescription;
#endif /* _IDL_SEQUENCE_AttributeDef_AttributeDescription_defined */ 
typedef
struct InterfaceDef_FullInterfaceDescription {
Identifier name;
RepositoryId id;
RepositoryId defined_in;
_IDL_SEQUENCE_OperationDef_OperationDescription operation;
_IDL_SEQUENCE_AttributeDef_AttributeDescription attributes;
} InterfaceDef_FullInterfaceDescription;
typedef
struct InterfaceDef_InterfaceDescription {
Identifier name;
RepositoryId id;
RepositoryId defined_in;
} InterfaceDef_InterfaceDescription;
/*
 *  The inherited describe method returns an instance of this
 *  (InterfaceDescription) structure in the "value" member of the
 *  Description structure defined in the Contained interface.
 *  The inherited describe_contents method in the Container
 *  interface returns a sequence of these Description structures
 *  each carrying a reference to an InterfaceDescription structure
 *  in its "value" member.
 */

#ifndef _IDL_SEQUENCE_string_defined
#define _IDL_SEQUENCE_string_defined
typedef struct {
    unsigned long _maximum;
    unsigned long _length;
    string *_buffer;
} _IDL_SEQUENCE_string;
#endif /* _IDL_SEQUENCE_string_defined */ 

#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD__IDL_SEQUENCE_OperationDescription
    #ifdef _IDL_SEQUENCE_OperationDescription
        #undef _IDL_SEQUENCE_OperationDescription
        #define SOMTGD__IDL_SEQUENCE_OperationDescription 1
    #else
        #define _IDL_SEQUENCE_OperationDescription _IDL_SEQUENCE_OperationDef_OperationDescription
    #endif /* _IDL_SEQUENCE_OperationDescription */
#endif /* SOMTGD__IDL_SEQUENCE_OperationDescription */
#ifndef SOMTGD__IDL_SEQUENCE_AttributeDescription
    #ifdef _IDL_SEQUENCE_AttributeDescription
        #undef _IDL_SEQUENCE_AttributeDescription
        #define SOMTGD__IDL_SEQUENCE_AttributeDescription 1
    #else
        #define _IDL_SEQUENCE_AttributeDescription _IDL_SEQUENCE_AttributeDef_AttributeDescription
    #endif /* _IDL_SEQUENCE_AttributeDescription */
#endif /* SOMTGD__IDL_SEQUENCE_AttributeDescription */
#ifndef SOMTGD_FullInterfaceDescription
    #ifdef FullInterfaceDescription
        #undef FullInterfaceDescription
        #define SOMTGD_FullInterfaceDescription 1
    #else
        #define FullInterfaceDescription InterfaceDef_FullInterfaceDescription
    #endif /* FullInterfaceDescription */
#endif /* SOMTGD_FullInterfaceDescription */
#ifndef SOMTGD_InterfaceDescription
    #ifdef InterfaceDescription
        #undef InterfaceDescription
        #define SOMTGD_InterfaceDescription 1
    #else
        #define InterfaceDescription InterfaceDef_InterfaceDescription
    #endif /* InterfaceDescription */
#endif /* SOMTGD_InterfaceDescription */
#endif /* SOM_DONT_USE_SHORT_NAMES */

/*
 * End of bindings for IDL types.
 */

#define InterfaceDef_MajorVersion 2
#define InterfaceDef_MinorVersion 3

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define InterfaceDefNewClass c
#pragma linkage(c, system)
#define InterfaceDefClassData d
#define InterfaceDefCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define InterfaceDef_classObj InterfaceDefClassData.classObject
#define _InterfaceDef InterfaceDef_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK InterfaceDefNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(InterfaceDefNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct InterfaceDefClassDataStructure {
	SOMClass *classObject;
	somMToken describe_interface;
	somMToken _get_base_interfaces;
	somMToken _set_base_interfaces;
	somMToken _get_instanceData;
	somMToken _set_instanceData;
} SOMDLINK InterfaceDefClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct InterfaceDefCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK InterfaceDefCClassData;

/*
 * New and Renew macros for InterfaceDef
 */
#define InterfaceDefNew() \
   ( _InterfaceDef ? \
	_somNew(_InterfaceDef) \
	: ( InterfaceDefNewClass(\
		InterfaceDef_MajorVersion, \
		InterfaceDef_MinorVersion),\
	   _somNew(_InterfaceDef)))
#define InterfaceDefRenew(buf) \
   ( _InterfaceDef ? \
	_somRenew(_InterfaceDef, buf) \
	: ( InterfaceDefNewClass(\
		InterfaceDef_MajorVersion, \
		InterfaceDef_MinorVersion),\
	   _somRenew(_InterfaceDef, buf)))

/*
 * Override method: somDefaultInit
 */
#define InterfaceDef_somDefaultInit(somSelf,ctrl) \
	SOMObject_somDefaultInit(somSelf,ctrl)

/*
 * Override method: somDestruct
 */
#define InterfaceDef_somDestruct(somSelf,doFree,ctrl) \
	SOMObject_somDestruct(somSelf,doFree,ctrl)

/*
 * Override method: somDumpSelf
 */
#define InterfaceDef_somDumpSelf(somSelf,level) \
	SOMObject_somDumpSelf(somSelf,level)

/*
 * Override method: somDumpSelfInt
 */
#define InterfaceDef_somDumpSelfInt(somSelf,level) \
	SOMObject_somDumpSelfInt(somSelf,level)

/*
 * Override method: within
 */
#define InterfaceDef_within(somSelf,ev) \
	Contained_within(somSelf,ev)

/*
 * Override method: describe
 */
#define InterfaceDef_describe(somSelf,ev) \
	Contained_describe(somSelf,ev)

/*
 * New Method: _get_base_interfaces
 */
typedef _IDL_SEQUENCE_string   SOMLINK somTP_InterfaceDef__get_base_interfaces(InterfaceDef *somSelf, Environment *ev);
#pragma linkage(somTP_InterfaceDef__get_base_interfaces, system)
typedef somTP_InterfaceDef__get_base_interfaces *somTD_InterfaceDef__get_base_interfaces;
/*
 *  The sequence of RepositoryIds for all of the interfaces that the
 *  receiving interface inherits.  Do not free the buffer,
 *  its storage is still owned by the InterfaceDef object.
 */
#define somMD_InterfaceDef__get_base_interfaces "::InterfaceDef::_get_base_interfaces"
#define InterfaceDef__get_base_interfaces(somSelf,ev) \
    (SOM_Resolve(somSelf, InterfaceDef, _get_base_interfaces) \
	(somSelf,ev))
#ifndef SOMGD_get_base_interfaces
    #if (defined(_get_base_interfaces) || defined(__get_base_interfaces))
        #undef _get_base_interfaces
        #undef __get_base_interfaces
        #define SOMGD_get_base_interfaces 1
    #else
        #define __get_base_interfaces InterfaceDef__get_base_interfaces
    #endif /* __get_base_interfaces */
#endif /* SOMGD_get_base_interfaces */

/*
 * New Method: _set_base_interfaces
 */
typedef void   SOMLINK somTP_InterfaceDef__set_base_interfaces(InterfaceDef *somSelf, Environment *ev, 
		_IDL_SEQUENCE_string* base_interfaces);
#pragma linkage(somTP_InterfaceDef__set_base_interfaces, system)
typedef somTP_InterfaceDef__set_base_interfaces *somTD_InterfaceDef__set_base_interfaces;
/*
 *  The sequence of RepositoryIds for all of the interfaces that the
 *  receiving interface inherits.  Do not free the buffer,
 *  its storage is still owned by the InterfaceDef object.
 */
#define somMD_InterfaceDef__set_base_interfaces "::InterfaceDef::_set_base_interfaces"
#define InterfaceDef__set_base_interfaces(somSelf,ev,base_interfaces) \
    (SOM_Resolve(somSelf, InterfaceDef, _set_base_interfaces) \
	(somSelf,ev,base_interfaces))
#ifndef SOMGD_set_base_interfaces
    #if (defined(_set_base_interfaces) || defined(__set_base_interfaces))
        #undef _set_base_interfaces
        #undef __set_base_interfaces
        #define SOMGD_set_base_interfaces 1
    #else
        #define __set_base_interfaces InterfaceDef__set_base_interfaces
    #endif /* __set_base_interfaces */
#endif /* SOMGD_set_base_interfaces */

/*
 * New Method: describe_interface
 */
typedef InterfaceDef_FullInterfaceDescription   SOMLINK somTP_InterfaceDef_describe_interface(InterfaceDef *somSelf, Environment *ev);
#pragma linkage(somTP_InterfaceDef_describe_interface, system)
typedef somTP_InterfaceDef_describe_interface *somTD_InterfaceDef_describe_interface;
/*
 *  Returns a description of all the operations and attributes in
 *  an interface.
 */
#define somMD_InterfaceDef_describe_interface "::InterfaceDef::describe_interface"
#define InterfaceDef_describe_interface(somSelf,ev) \
    (SOM_Resolve(somSelf, InterfaceDef, describe_interface) \
	(somSelf,ev))
#ifndef SOMGD_describe_interface
    #if (defined(_describe_interface) || defined(__describe_interface))
        #undef _describe_interface
        #undef __describe_interface
        #define SOMGD_describe_interface 1
    #else
        #define _describe_interface InterfaceDef_describe_interface
    #endif /* _describe_interface */
#endif /* SOMGD_describe_interface */

/*
 * New Method: _get_instanceData
 */
typedef TypeCode   SOMLINK somTP_InterfaceDef__get_instanceData(InterfaceDef *somSelf, Environment *ev);
#pragma linkage(somTP_InterfaceDef__get_instanceData, system)
typedef somTP_InterfaceDef__get_instanceData *somTD_InterfaceDef__get_instanceData;
/*
 *  [SOM-unique extension]
 * 
 *  The instance data members (if any) described in the SOM
 *  implementation section of the IDL source file.
 */
#define somMD_InterfaceDef__get_instanceData "::InterfaceDef::_get_instanceData"
#define InterfaceDef__get_instanceData(somSelf,ev) \
    (SOM_Resolve(somSelf, InterfaceDef, _get_instanceData) \
	(somSelf,ev))
#ifndef SOMGD_get_instanceData
    #if (defined(_get_instanceData) || defined(__get_instanceData))
        #undef _get_instanceData
        #undef __get_instanceData
        #define SOMGD_get_instanceData 1
    #else
        #define __get_instanceData InterfaceDef__get_instanceData
    #endif /* __get_instanceData */
#endif /* SOMGD_get_instanceData */

/*
 * New Method: _set_instanceData
 */
typedef void   SOMLINK somTP_InterfaceDef__set_instanceData(InterfaceDef *somSelf, Environment *ev, 
		TypeCode instanceData);
#pragma linkage(somTP_InterfaceDef__set_instanceData, system)
typedef somTP_InterfaceDef__set_instanceData *somTD_InterfaceDef__set_instanceData;
/*
 *  [SOM-unique extension]
 * 
 *  The instance data members (if any) described in the SOM
 *  implementation section of the IDL source file.
 */
#define somMD_InterfaceDef__set_instanceData "::InterfaceDef::_set_instanceData"
#define InterfaceDef__set_instanceData(somSelf,ev,instanceData) \
    (SOM_Resolve(somSelf, InterfaceDef, _set_instanceData) \
	(somSelf,ev,instanceData))
#ifndef SOMGD_set_instanceData
    #if (defined(_set_instanceData) || defined(__set_instanceData))
        #undef _set_instanceData
        #undef __set_instanceData
        #define SOMGD_set_instanceData 1
    #else
        #define __set_instanceData InterfaceDef__set_instanceData
    #endif /* __set_instanceData */
#endif /* SOMGD_set_instanceData */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define InterfaceDef__get_name Contained__get_name
#define InterfaceDef__set_name Contained__set_name
#define InterfaceDef__get_id Contained__get_id
#define InterfaceDef__set_id Contained__set_id
#define InterfaceDef__get_defined_in Contained__get_defined_in
#define InterfaceDef__set_defined_in Contained__set_defined_in
#define InterfaceDef__get_somModifiers Contained__get_somModifiers
#define InterfaceDef__set_somModifiers Contained__set_somModifiers
#define InterfaceDef_somFree SOMObject_somFree
#define InterfaceDef_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define InterfaceDef_somDefaultAssign SOMObject_somDefaultAssign
#define InterfaceDef_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define InterfaceDef_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define InterfaceDef_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define InterfaceDef_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define InterfaceDef_somDefaultVAssign SOMObject_somDefaultVAssign
#define InterfaceDef_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define InterfaceDef_somInit SOMObject_somInit
#define InterfaceDef_somUninit SOMObject_somUninit
#define InterfaceDef_somGetClass SOMObject_somGetClass
#define InterfaceDef_somGetClassName SOMObject_somGetClassName
#define InterfaceDef_somGetSize SOMObject_somGetSize
#define InterfaceDef_somIsA SOMObject_somIsA
#define InterfaceDef_somIsInstanceOf SOMObject_somIsInstanceOf
#define InterfaceDef_somRespondsTo SOMObject_somRespondsTo
#define InterfaceDef_somDispatch SOMObject_somDispatch
#define InterfaceDef_somClassDispatch SOMObject_somClassDispatch
#define InterfaceDef_somCastObj SOMObject_somCastObj
#define InterfaceDef_somResetObj SOMObject_somResetObj
#define InterfaceDef_somDispatchV SOMObject_somDispatchV
#define InterfaceDef_somDispatchL SOMObject_somDispatchL
#define InterfaceDef_somDispatchA SOMObject_somDispatchA
#define InterfaceDef_somDispatchD SOMObject_somDispatchD
#define InterfaceDef_somPrintSelf SOMObject_somPrintSelf
#define InterfaceDef_contents Container_contents
#define InterfaceDef_lookup_name Container_lookup_name
#define InterfaceDef_describe_contents Container_describe_contents
#define InterfaceDef_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define InterfaceDef_somDefaultAssign SOMObject_somDefaultAssign
#define InterfaceDef_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define InterfaceDef_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define InterfaceDef_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define InterfaceDef_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define InterfaceDef_somDefaultVAssign SOMObject_somDefaultVAssign
#define InterfaceDef_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define InterfaceDef_somInit SOMObject_somInit
#define InterfaceDef_somFree SOMObject_somFree
#define InterfaceDef_somUninit SOMObject_somUninit
#define InterfaceDef_somGetClass SOMObject_somGetClass
#define InterfaceDef_somGetClassName SOMObject_somGetClassName
#define InterfaceDef_somGetSize SOMObject_somGetSize
#define InterfaceDef_somIsA SOMObject_somIsA
#define InterfaceDef_somIsInstanceOf SOMObject_somIsInstanceOf
#define InterfaceDef_somRespondsTo SOMObject_somRespondsTo
#define InterfaceDef_somDispatch SOMObject_somDispatch
#define InterfaceDef_somClassDispatch SOMObject_somClassDispatch
#define InterfaceDef_somCastObj SOMObject_somCastObj
#define InterfaceDef_somResetObj SOMObject_somResetObj
#define InterfaceDef_somDispatchV SOMObject_somDispatchV
#define InterfaceDef_somDispatchL SOMObject_somDispatchL
#define InterfaceDef_somDispatchA SOMObject_somDispatchA
#define InterfaceDef_somDispatchD SOMObject_somDispatchD
#define InterfaceDef_somPrintSelf SOMObject_somPrintSelf
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_InterfaceDef_h */
