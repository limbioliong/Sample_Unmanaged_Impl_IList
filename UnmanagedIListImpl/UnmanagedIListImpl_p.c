

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for UnmanagedIListImpl.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "UnmanagedIListImpl_i.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   1                                 
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _UnmanagedIListImpl_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } UnmanagedIListImpl_MIDL_TYPE_FORMAT_STRING;

typedef struct _UnmanagedIListImpl_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } UnmanagedIListImpl_MIDL_PROC_FORMAT_STRING;

typedef struct _UnmanagedIListImpl_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } UnmanagedIListImpl_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const UnmanagedIListImpl_MIDL_TYPE_FORMAT_STRING UnmanagedIListImpl__MIDL_TypeFormatString;
extern const UnmanagedIListImpl_MIDL_PROC_FORMAT_STRING UnmanagedIListImpl__MIDL_ProcFormatString;
extern const UnmanagedIListImpl_MIDL_EXPR_FORMAT_STRING UnmanagedIListImpl__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMyStringList_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMyStringList_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMyObjectList_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMyObjectList_ProxyInfo;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const UnmanagedIListImpl_MIDL_PROC_FORMAT_STRING UnmanagedIListImpl__MIDL_ProcFormatString =
    {
        0,
        {

			0x0
        }
    };

static const UnmanagedIListImpl_MIDL_TYPE_FORMAT_STRING UnmanagedIListImpl__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IMyStringList, ver. 0.0,
   GUID={0x94383d87,0x200e,0x4fd0,{0x8e,0x93,0x4a,0xd9,0xd2,0x18,0x8c,0x8d}} */

#pragma code_seg(".orpc")
static const unsigned short IMyStringList_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IMyStringList_ProxyInfo =
    {
    &Object_StubDesc,
    UnmanagedIListImpl__MIDL_ProcFormatString.Format,
    &IMyStringList_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMyStringList_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    UnmanagedIListImpl__MIDL_ProcFormatString.Format,
    &IMyStringList_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IMyStringListProxyVtbl = 
{
    0,
    &IID_IMyStringList,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IMyStringList_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IMyStringListStubVtbl =
{
    &IID_IMyStringList,
    &IMyStringList_ServerInfo,
    7,
    &IMyStringList_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IMyObjectList, ver. 0.0,
   GUID={0xbdd1639b,0x1ef3,0x40ac,{0x87,0x04,0x20,0xa9,0x63,0x10,0x1e,0x01}} */

#pragma code_seg(".orpc")
static const unsigned short IMyObjectList_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IMyObjectList_ProxyInfo =
    {
    &Object_StubDesc,
    UnmanagedIListImpl__MIDL_ProcFormatString.Format,
    &IMyObjectList_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMyObjectList_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    UnmanagedIListImpl__MIDL_ProcFormatString.Format,
    &IMyObjectList_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IMyObjectListProxyVtbl = 
{
    0,
    &IID_IMyObjectList,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IMyObjectList_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IMyObjectListStubVtbl =
{
    &IID_IMyObjectList,
    &IMyObjectList_ServerInfo,
    7,
    &IMyObjectList_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    UnmanagedIListImpl__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _UnmanagedIListImpl_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IMyStringListProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMyObjectListProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _UnmanagedIListImpl_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IMyStringListStubVtbl,
    ( CInterfaceStubVtbl *) &_IMyObjectListStubVtbl,
    0
};

PCInterfaceName const _UnmanagedIListImpl_InterfaceNamesList[] = 
{
    "IMyStringList",
    "IMyObjectList",
    0
};

const IID *  const _UnmanagedIListImpl_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _UnmanagedIListImpl_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _UnmanagedIListImpl, pIID, n)

int __stdcall _UnmanagedIListImpl_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _UnmanagedIListImpl, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _UnmanagedIListImpl, 2, *pIndex )
    
}

const ExtendedProxyFileInfo UnmanagedIListImpl_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _UnmanagedIListImpl_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _UnmanagedIListImpl_StubVtblList,
    (const PCInterfaceName * ) & _UnmanagedIListImpl_InterfaceNamesList,
    (const IID ** ) & _UnmanagedIListImpl_BaseIIDList,
    & _UnmanagedIListImpl_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

