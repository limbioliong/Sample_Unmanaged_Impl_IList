

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __UnmanagedIListImpl_i_h__
#define __UnmanagedIListImpl_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMyStringList_FWD_DEFINED__
#define __IMyStringList_FWD_DEFINED__
typedef interface IMyStringList IMyStringList;

#endif 	/* __IMyStringList_FWD_DEFINED__ */


#ifndef __IMyObjectList_FWD_DEFINED__
#define __IMyObjectList_FWD_DEFINED__
typedef interface IMyObjectList IMyObjectList;

#endif 	/* __IMyObjectList_FWD_DEFINED__ */


#ifndef ___Array_FWD_DEFINED__
#define ___Array_FWD_DEFINED__
typedef interface _Array _Array;

#endif 	/* ___Array_FWD_DEFINED__ */


#ifndef __ICollection_FWD_DEFINED__
#define __ICollection_FWD_DEFINED__
typedef interface ICollection ICollection;

#endif 	/* __ICollection_FWD_DEFINED__ */


#ifndef __IEnumerable_FWD_DEFINED__
#define __IEnumerable_FWD_DEFINED__
typedef interface IEnumerable IEnumerable;

#endif 	/* __IEnumerable_FWD_DEFINED__ */


#ifndef __IList_FWD_DEFINED__
#define __IList_FWD_DEFINED__
typedef interface IList IList;

#endif 	/* __IList_FWD_DEFINED__ */


#ifndef __MyStringList_FWD_DEFINED__
#define __MyStringList_FWD_DEFINED__

#ifdef __cplusplus
typedef class MyStringList MyStringList;
#else
typedef struct MyStringList MyStringList;
#endif /* __cplusplus */

#endif 	/* __MyStringList_FWD_DEFINED__ */


#ifndef __MyObjectList_FWD_DEFINED__
#define __MyObjectList_FWD_DEFINED__

#ifdef __cplusplus
typedef class MyObjectList MyObjectList;
#else
typedef struct MyObjectList MyObjectList;
#endif /* __cplusplus */

#endif 	/* __MyObjectList_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IMyStringList_INTERFACE_DEFINED__
#define __IMyStringList_INTERFACE_DEFINED__

/* interface IMyStringList */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMyStringList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("94383d87-200e-4fd0-8e93-4ad9d2188c8d")
    IMyStringList : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IMyStringListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMyStringList * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMyStringList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMyStringList * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMyStringList * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMyStringList * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMyStringList * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMyStringList * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IMyStringListVtbl;

    interface IMyStringList
    {
        CONST_VTBL struct IMyStringListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMyStringList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMyStringList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMyStringList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMyStringList_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMyStringList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMyStringList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMyStringList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMyStringList_INTERFACE_DEFINED__ */


#ifndef __IMyObjectList_INTERFACE_DEFINED__
#define __IMyObjectList_INTERFACE_DEFINED__

/* interface IMyObjectList */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMyObjectList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bdd1639b-1ef3-40ac-8704-20a963101e01")
    IMyObjectList : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IMyObjectListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMyObjectList * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMyObjectList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMyObjectList * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMyObjectList * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMyObjectList * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMyObjectList * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMyObjectList * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IMyObjectListVtbl;

    interface IMyObjectList
    {
        CONST_VTBL struct IMyObjectListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMyObjectList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMyObjectList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMyObjectList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMyObjectList_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMyObjectList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMyObjectList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMyObjectList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMyObjectList_INTERFACE_DEFINED__ */



#ifndef __UnmanagedIListImplLib_LIBRARY_DEFINED__
#define __UnmanagedIListImplLib_LIBRARY_DEFINED__

/* library UnmanagedIListImplLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_UnmanagedIListImplLib;

#ifndef ___Array_INTERFACE_DEFINED__
#define ___Array_INTERFACE_DEFINED__

/* interface _Array */
/* [object][custom][oleautomation][dual][hidden][uuid] */ 


EXTERN_C const IID IID__Array;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2B67CECE-71C3-36A9-A136-925CCC1935A8")
    _Array : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct _ArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _Array * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _Array * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _Array * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _Array * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _Array * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _Array * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _Array * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _ArrayVtbl;

    interface _Array
    {
        CONST_VTBL struct _ArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _Array_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _Array_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _Array_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _Array_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _Array_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _Array_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _Array_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___Array_INTERFACE_DEFINED__ */


#ifndef __ICollection_INTERFACE_DEFINED__
#define __ICollection_INTERFACE_DEFINED__

/* interface ICollection */
/* [object][custom][oleautomation][dual][version][uuid] */ 


EXTERN_C const IID IID_ICollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DE8DB6F8-D101-3A92-8D1C-E72E5F10E992")
    ICollection : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CopyTo( 
            /* [in] */ _Array *Array,
            /* [in] */ long index) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pRetVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SyncRoot( 
            /* [retval][out] */ VARIANT *pRetVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_IsSynchronized( 
            /* [retval][out] */ VARIANT_BOOL *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICollection * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CopyTo )( 
            ICollection * This,
            /* [in] */ _Array *Array,
            /* [in] */ long index);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICollection * This,
            /* [retval][out] */ long *pRetVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SyncRoot )( 
            ICollection * This,
            /* [retval][out] */ VARIANT *pRetVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsSynchronized )( 
            ICollection * This,
            /* [retval][out] */ VARIANT_BOOL *pRetVal);
        
        END_INTERFACE
    } ICollectionVtbl;

    interface ICollection
    {
        CONST_VTBL struct ICollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICollection_CopyTo(This,Array,index)	\
    ( (This)->lpVtbl -> CopyTo(This,Array,index) ) 

#define ICollection_get_Count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_Count(This,pRetVal) ) 

#define ICollection_get_SyncRoot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_SyncRoot(This,pRetVal) ) 

#define ICollection_get_IsSynchronized(This,pRetVal)	\
    ( (This)->lpVtbl -> get_IsSynchronized(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICollection_INTERFACE_DEFINED__ */


#ifndef __IEnumerable_INTERFACE_DEFINED__
#define __IEnumerable_INTERFACE_DEFINED__

/* interface IEnumerable */
/* [object][custom][oleautomation][dual][version][uuid] */ 


EXTERN_C const IID IID_IEnumerable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("496B0ABE-CDEE-11D3-88E8-00902754C43A")
    IEnumerable : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [retval][out] */ IEnumVARIANT **pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumerableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumerable * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumerable * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumerable * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEnumerable * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEnumerable * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEnumerable * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEnumerable * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IEnumerable * This,
            /* [retval][out] */ IEnumVARIANT **pRetVal);
        
        END_INTERFACE
    } IEnumerableVtbl;

    interface IEnumerable
    {
        CONST_VTBL struct IEnumerableVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumerable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumerable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumerable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumerable_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEnumerable_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEnumerable_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEnumerable_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEnumerable_GetEnumerator(This,pRetVal)	\
    ( (This)->lpVtbl -> GetEnumerator(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumerable_INTERFACE_DEFINED__ */


#ifndef __IList_INTERFACE_DEFINED__
#define __IList_INTERFACE_DEFINED__

/* interface IList */
/* [object][custom][oleautomation][dual][version][uuid] */ 


EXTERN_C const IID IID_IList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7BCFA00F-F764-3113-9140-3BBD127A96BB")
    IList : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long index,
            /* [retval][out] */ VARIANT *pRetVal) = 0;
        
        virtual /* [propputref][id] */ HRESULT STDMETHODCALLTYPE putref_Item( 
            /* [in] */ long index,
            /* [in] */ VARIANT pRetVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ VARIANT value,
            /* [retval][out] */ long *pRetVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Contains( 
            /* [in] */ VARIANT value,
            /* [retval][out] */ VARIANT_BOOL *pRetVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_IsReadOnly( 
            /* [retval][out] */ VARIANT_BOOL *pRetVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_IsFixedSize( 
            /* [retval][out] */ VARIANT_BOOL *pRetVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ VARIANT value,
            /* [retval][out] */ long *pRetVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ long index,
            /* [in] */ VARIANT value) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ VARIANT value) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RemoveAt( 
            /* [in] */ long index) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IList * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IList * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IList * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IList * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IList * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IList * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IList * This,
            /* [in] */ long index,
            /* [retval][out] */ VARIANT *pRetVal);
        
        /* [propputref][id] */ HRESULT ( STDMETHODCALLTYPE *putref_Item )( 
            IList * This,
            /* [in] */ long index,
            /* [in] */ VARIANT pRetVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IList * This,
            /* [in] */ VARIANT value,
            /* [retval][out] */ long *pRetVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Contains )( 
            IList * This,
            /* [in] */ VARIANT value,
            /* [retval][out] */ VARIANT_BOOL *pRetVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IList * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsReadOnly )( 
            IList * This,
            /* [retval][out] */ VARIANT_BOOL *pRetVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsFixedSize )( 
            IList * This,
            /* [retval][out] */ VARIANT_BOOL *pRetVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            IList * This,
            /* [in] */ VARIANT value,
            /* [retval][out] */ long *pRetVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IList * This,
            /* [in] */ long index,
            /* [in] */ VARIANT value);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IList * This,
            /* [in] */ VARIANT value);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAt )( 
            IList * This,
            /* [in] */ long index);
        
        END_INTERFACE
    } IListVtbl;

    interface IList
    {
        CONST_VTBL struct IListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IList_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IList_get_Item(This,index,pRetVal)	\
    ( (This)->lpVtbl -> get_Item(This,index,pRetVal) ) 

#define IList_putref_Item(This,index,pRetVal)	\
    ( (This)->lpVtbl -> putref_Item(This,index,pRetVal) ) 

#define IList_Add(This,value,pRetVal)	\
    ( (This)->lpVtbl -> Add(This,value,pRetVal) ) 

#define IList_Contains(This,value,pRetVal)	\
    ( (This)->lpVtbl -> Contains(This,value,pRetVal) ) 

#define IList_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IList_get_IsReadOnly(This,pRetVal)	\
    ( (This)->lpVtbl -> get_IsReadOnly(This,pRetVal) ) 

#define IList_get_IsFixedSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_IsFixedSize(This,pRetVal) ) 

#define IList_IndexOf(This,value,pRetVal)	\
    ( (This)->lpVtbl -> IndexOf(This,value,pRetVal) ) 

#define IList_Insert(This,index,value)	\
    ( (This)->lpVtbl -> Insert(This,index,value) ) 

#define IList_Remove(This,value)	\
    ( (This)->lpVtbl -> Remove(This,value) ) 

#define IList_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IList_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_MyStringList;

#ifdef __cplusplus

class DECLSPEC_UUID("690078d3-9a2c-4bb9-8213-d1fbf2e677a8")
MyStringList;
#endif

EXTERN_C const CLSID CLSID_MyObjectList;

#ifdef __cplusplus

class DECLSPEC_UUID("550cdb65-7ad2-4491-9474-21b31e29800b")
MyObjectList;
#endif
#endif /* __UnmanagedIListImplLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


