

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IMyStringList,0x94383d87,0x200e,0x4fd0,0x8e,0x93,0x4a,0xd9,0xd2,0x18,0x8c,0x8d);


MIDL_DEFINE_GUID(IID, IID_IMyObjectList,0xbdd1639b,0x1ef3,0x40ac,0x87,0x04,0x20,0xa9,0x63,0x10,0x1e,0x01);


MIDL_DEFINE_GUID(IID, LIBID_UnmanagedIListImplLib,0x28f19030,0x36fe,0x4bdf,0xb7,0x1a,0x1a,0xa1,0xd4,0x84,0xb3,0x80);


MIDL_DEFINE_GUID(IID, IID_IList,0x7BCFA00F,0xF764,0x3113,0x91,0x40,0x3B,0xBD,0x12,0x7A,0x96,0xBB);


MIDL_DEFINE_GUID(CLSID, CLSID_MyStringList,0x690078d3,0x9a2c,0x4bb9,0x82,0x13,0xd1,0xfb,0xf2,0xe6,0x77,0xa8);


MIDL_DEFINE_GUID(CLSID, CLSID_MyObjectList,0x550cdb65,0x7ad2,0x4491,0x94,0x74,0x21,0xb3,0x1e,0x29,0x80,0x0b);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



