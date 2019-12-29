// MyObjectList.h : Declaration of the CMyObjectList

#pragma once
#include "resource.h"       // main symbols



#include "UnmanagedIListImpl_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CMyObjectList

class ATL_NO_VTABLE CMyObjectList :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMyObjectList, &CLSID_MyObjectList>,
	public ISupportErrorInfo,
	public IDispatchImpl<IMyObjectList, &IID_IMyObjectList, &LIBID_UnmanagedIListImplLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IDispatchImpl<IList, &__uuidof(IList), &__uuidof(__mscorlib), 2, 4>,
	public IDispatchImpl<IEnumerable, &__uuidof(IEnumerable), &__uuidof(__mscorlib), 2, 4>,
	public IDispatchImpl<ICollection, &__uuidof(ICollection), &__uuidof(__mscorlib), 2, 4>,
	public IEnumVARIANT
{
public:
	CMyObjectList() :
		m_iElementsFetched(0)
	{
	}

DECLARE_REGISTRY_RESOURCEID(107)


BEGIN_COM_MAP(CMyObjectList)
	COM_INTERFACE_ENTRY(IMyObjectList)
	//COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IList)
	COM_INTERFACE_ENTRY2(IDispatch, IList)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IEnumerable)
	COM_INTERFACE_ENTRY(ICollection)
	COM_INTERFACE_ENTRY(IEnumVARIANT)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:

	// IList Implementation.
	virtual HRESULT __stdcall get_Item
	(
		/*[in]*/ long index,
		/*[out,retval]*/ VARIANT * pRetVal
	)
	{
		if ((index < 0) || (index >= (long)(myVarList.size())))
		{
			// See :
			// ArgumentOutOfRangeException Class
			// https://docs.microsoft.com/en-us/dotnet/api/system.argumentoutofrangeexception?view=netframework-4.8
			//
			MySetErrorInfo("The Index is Out of Range", "UnmanagedIListImpl.MyObjectList");

			// #include <corerror.h> in order to use COR_E_ARGUMENTOUTOFRANGE.
			return COR_E_ARGUMENTOUTOFRANGE;
		}

		USES_CONVERSION;

		VariantInit(pRetVal);

		VARIANT& varSource = myVarList[index];

		VariantCopy(pRetVal, &varSource);

		return S_OK;
	}

	virtual HRESULT __stdcall putref_Item
	(
		/*[in]*/ long index,
		/*[in]*/ VARIANT pRetVal
	)
	{
		if ((index < 0) || (index >= (long)(myVarList.size())))
		{
			// See :
			// ArgumentOutOfRangeException Class
			// https://docs.microsoft.com/en-us/dotnet/api/system.argumentoutofrangeexception?view=netframework-4.8
			//
			MySetErrorInfo("The Index is Out of Range", "UnmanagedIListImpl.MyObjectList");

			// #include <corerror.h> in order to use COR_E_ARGUMENTOUTOFRANGE.
			return COR_E_ARGUMENTOUTOFRANGE;
		}

		myVarList[index] = pRetVal;

		return S_OK;
	}

	virtual HRESULT __stdcall Add
	(
		/*[in]*/ VARIANT value,
		/*[out,retval]*/ long * pRetVal
	)
	{
		USES_CONVERSION;

		size_t size = myVarList.size();

		myVarList.push_back(value);

		*pRetVal = size;

		return S_OK;
	}

	virtual HRESULT __stdcall Contains
	(
		/*[in]*/ VARIANT value,
		/*[out,retval]*/ VARIANT_BOOL * pRetVal
	)
	{
		USES_CONVERSION;

		vector<_variant_t>::iterator theIterator = find(myVarList.begin(), myVarList.end(), value);

		if (theIterator != myVarList.end())
		{
			*pRetVal = VARIANT_TRUE;
		}
		else
		{
			*pRetVal = VARIANT_FALSE;
		}

		return S_OK;
	}

	virtual HRESULT __stdcall Clear()
	{
		myVarList.clear();

		return S_OK;
	}

	virtual HRESULT __stdcall get_IsReadOnly
	(
		/*[out,retval]*/ VARIANT_BOOL * pRetVal
	)
	{
		*pRetVal = VARIANT_FALSE;

		return S_OK;
	}

	virtual HRESULT __stdcall get_IsFixedSize
	(
		/*[out,retval]*/ VARIANT_BOOL * pRetVal
	)
	{
		*pRetVal = VARIANT_FALSE;

		return S_OK;
	}

	virtual HRESULT __stdcall IndexOf
	(
		/*[in]*/ VARIANT value,
		/*[out,retval]*/ long * pRetVal
	)
	{
		USES_CONVERSION;

		_variant_t varValue = value;

		int i = 0;

		// For info on C++ Lambda Expressions, see :
		// Lambda Expressions in C++
		// https://docs.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=vs-2019
		//
		vector<_variant_t>::iterator theIterator = find_if
		(
			myVarList.begin(),
			myVarList.end(),
			[varValue, &i](_variant_t& var)
		{
			if (var == varValue)
			{
				return true;
			}
			else
			{
				i++;
				return false;
			}
		}
		);

		if (theIterator != myVarList.end())
		{
			*pRetVal = (long)i;
		}
		else
		{
			*pRetVal = (long)-1;
		}

		return S_OK;
	}

	virtual HRESULT __stdcall Insert
	(
		/*[in]*/ long index,
		/*[in]*/ VARIANT value
	)
	{
		USES_CONVERSION;

		// Note the MSDN documentation for IList::Insert() states that :
		// If index equals the number of items in the IList, then value is appended to the end.
		// Hence "index" can be a value equal to myVarList.size().
		if ((index < 0) || (index > (long)(myVarList.size())))
		{
			// See :
			// ArgumentOutOfRangeException Class
			// https://docs.microsoft.com/en-us/dotnet/api/system.argumentoutofrangeexception?view=netframework-4.8
			//
			MySetErrorInfo("The Index is Out of Range", "UnmanagedIListImpl.MyObjectList");

			// #include <corerror.h> in order to use COR_E_ARGUMENTOUTOFRANGE.
			return COR_E_ARGUMENTOUTOFRANGE;
		}

		long l = 0;
		vector<_variant_t>::iterator theIterator;

		for
		(
				theIterator = myVarList.begin();
				theIterator != myVarList.end();
				theIterator++, l++
		)
		{
			if (l == index)
			{
				break;
			}
		}

		myVarList.insert(theIterator, value);

		return S_OK;
	}

	virtual HRESULT __stdcall Remove
	(
		/*[in]*/ VARIANT value
	)
	{
		HRESULT hrRetTemp = S_OK;
		long index = 0;

		hrRetTemp = this->IndexOf
		(
			value,
			&index
		);

		if (SUCCEEDED(hrRetTemp))
		{
			if (index != -1)
			{
				hrRetTemp = RemoveAt(index);
			}
			// Note the following documentation in :
			// IList.Remove(Object) Method 
			// https://docs.microsoft.com/en-us/dotnet/api/system.collections.ilist.remove?view=netframework-4.8
			// If value is not in the list, the Remove(Object) method should do nothing. In particular, it should not throw an exception.
		}

		return S_OK;
	}

	virtual HRESULT __stdcall RemoveAt
	(
		/*[in]*/ long index
	)
	{
		if ((index < 0) || (index >= (long)(myVarList.size())))
		{
			// See :
			// ArgumentOutOfRangeException Class
			// https://docs.microsoft.com/en-us/dotnet/api/system.argumentoutofrangeexception?view=netframework-4.8
			//
			MySetErrorInfo("The Index is Out of Range", "UnmanagedIListImpl.MyObjectList");

			// #include <corerror.h> in order to use COR_E_ARGUMENTOUTOFRANGE.
			return COR_E_ARGUMENTOUTOFRANGE;
		}

		long l = 0;
		vector<_variant_t>::iterator theIterator;

		for
		(
			theIterator = myVarList.begin();
			theIterator != myVarList.end();
			theIterator++, l++
		)
		{
			if (l == index)
			{
				break;
			}
		}

		myVarList.erase(theIterator);

		return S_OK;
	}

	// IEnumerable impl.
	virtual HRESULT __stdcall GetEnumerator
	(
		/*[out,retval]*/ struct IEnumVARIANT * * pRetVal
	)
	{
		//*pRetVal = NULL;
		this->QueryInterface(__uuidof(IEnumVARIANT), (void**)pRetVal);

		return S_OK;
	}

	// ICollection impl.
	virtual HRESULT __stdcall CopyTo
	(
		/*[in]*/ struct _Array * Array,
		/*[in]*/ long index
	)
	{
		USES_CONVERSION;

		IDispatchPtr pDispatch = dynamic_cast<IDispatch*>(Array);
		OLECHAR * szMember = L"SetValue";
		DISPID dispid = 0;

		HRESULT hrRetTemp = pDispatch->GetIDsOfNames
		(
			IID_NULL,
			&szMember,
			1,
			LOCALE_SYSTEM_DEFAULT,
			&dispid
		);

		if (SUCCEEDED(hrRetTemp))
		{
			int i = 0;

			for (i = 0; i < (int)(myVarList.size()); i++)
			{
				VARIANTARG	vargParams[2];
				VARIANT		varObject;				 
				VARIANT		varResult;
				DISPPARAMS	dp;
				EXCEPINFO	excepinfo;
				UINT		uArgErr;

				VariantInit(&(varObject));
				VariantInit(&varResult);
				VariantInit(&(vargParams[0]));
				VariantInit(&(vargParams[1]));				

				// The last parameter for the method to call (e.g. SetValue())
				// must be "pushed in" first.
				V_VT(&(vargParams[0])) = VT_I4;
				V_I4(&(vargParams[0])) = index + i;

				VariantCopy(&varObject, &(myVarList[i]));
				V_VT(&(vargParams[1])) = VT_BYREF | VT_VARIANT;
				V_VARIANTREF(&(vargParams[1])) = &varObject;

				memset(&dp, 0, sizeof(DISPPARAMS));
				dp.cArgs = 2;
				dp.rgvarg = vargParams;

				memset(&excepinfo, 0, sizeof(EXCEPINFO));

				hrRetTemp = pDispatch->Invoke
				(
					dispid,
					IID_NULL,
					LOCALE_SYSTEM_DEFAULT,
					DISPATCH_METHOD,
					&dp,
					&varResult,
					&excepinfo,
					&uArgErr
				);

				VariantClear(&(vargParams[0]));
				VariantClear(&(vargParams[1]));
				VariantClear(&varObject);
				VariantClear(&varResult);

				if (!SUCCEEDED(hrRetTemp))
				{
					if (excepinfo.pfnDeferredFillIn != NULL)
					{
						(*(excepinfo.pfnDeferredFillIn))(&excepinfo);
					}

					// See :
					// ArgumentException Class
					// https://docs.microsoft.com/en-us/dotnet/api/system.argumentexception?view=netframework-4.8
					//
					MySetErrorInfo(W2A(excepinfo.bstrSource), W2A(excepinfo.bstrSource));

					// Note that it is the Invoke() caller's responsibility to free the BSTR
					// members of the EXCEPINFO structure. 
					// See "Inside OLE" (Kraig Brockschmidt) page 660.
					if (excepinfo.bstrSource != NULL)
					{
						::SysFreeString(excepinfo.bstrSource);
						excepinfo.bstrSource = NULL;
					}

					if (excepinfo.bstrDescription != NULL)
					{
						::SysFreeString(excepinfo.bstrDescription);
						excepinfo.bstrDescription = NULL;
					}

					if (excepinfo.bstrHelpFile != NULL)
					{
						::SysFreeString(excepinfo.bstrHelpFile);
						excepinfo.bstrHelpFile = NULL;
					}

					// #include <corerror.h> in order to use COR_E_ARGUMENT.
					return COR_E_ARGUMENT;
				}
			}
		}

		return S_OK;
	}

	virtual HRESULT __stdcall get_Count
	(
		/*[out,retval]*/ long * pRetVal
	)
	{
		*pRetVal = myVarList.size();

		return S_OK;
	}

	virtual HRESULT __stdcall get_SyncRoot
	(
		/*[out,retval]*/ VARIANT * pRetVal
	)
	{
		//Return this current object itself.
		IDispatchPtr pDispatch;

		this->QueryInterface(IID_IDispatch, (void**)&pDispatch);

		VariantInit(pRetVal);
		V_VT(pRetVal) = VT_DISPATCH;
		V_DISPATCH(pRetVal) = pDispatch.Detach();

		// We call pDispatch.Detach() so that pDispatch
		// will not perform a Release() when it goes 
		// out of scope. This is because a reference
		// count must be maintained by the caller 
		// of get_SyncRoot(). This caller will be
		// responsible for calling Release() at the 
		// appropriate time.

		// See :
		// _com_ptr_t::Detach()
		// https://docs.microsoft.com/en-us/cpp/cpp/com-ptr-t-detach?view=vs-2019

		return S_OK;
	}

	virtual HRESULT __stdcall get_IsSynchronized
	(
		/*[out,retval]*/ VARIANT_BOOL * pRetVal
	)
	{
		*pRetVal = VARIANT_TRUE;
		return S_OK;
	}

	// IEnumVARIANT impl

	virtual /* [local] */ HRESULT STDMETHODCALLTYPE Next
	(
		/* [in] */ ULONG celt,
		/* [length_is][size_is][out] */ VARIANT *rgVar,
		/* [out] */ ULONG *pCeltFetched
	)
	{
		USES_CONVERSION;

		// Initialize receiver.
		*pCeltFetched = 0;

		if (m_iElementsFetched >= (ULONG)(myVarList.size()))
		{
			// Reset m_iElementsFetched to 0
			// so that we can start again.
			m_iElementsFetched = 0;
			return S_FALSE;
		}

		ULONG i = 0;
		for (i = 0; i < celt; i++)
		{
			if (m_iElementsFetched + i >= myVarList.size())
			{
				break;
			}

			VARIANT* pVariant = (VARIANT*)::CoTaskMemAlloc(sizeof(VARIANT));
			// Note : must call VariantInit() to initialize pVariant.
			// The importance of this is documented in : 
			// VariantCopy function
			// https://docs.microsoft.com/en-us/windows/win32/api/oleauto/nf-oleauto-variantcopy
			// where the following is written :
			// "pvargDest must point to a valid initialized variant, and not simply to an uninitialized memory location".
			VariantInit(pVariant);
			VariantCopy(pVariant, &(myVarList[m_iElementsFetched + i]));

			VariantInit(&(rgVar[i]));
			V_VT(&(rgVar[i])) = VT_BYREF | VT_VARIANT;
			V_VARIANTREF(&(rgVar[i])) = pVariant;
		}

		*pCeltFetched = i;
		m_iElementsFetched += i;

		return S_OK;
	}

	virtual HRESULT STDMETHODCALLTYPE Skip
	(
		/* [in] */ ULONG celt
	)
	{
		int iTemp = celt;

		if (m_iElementsFetched + celt >= myVarList.size())
		{
			return S_FALSE;
		}
		else
		{
			m_iElementsFetched += celt;

			return S_OK;
		}
	}

	virtual HRESULT STDMETHODCALLTYPE Reset(void)
	{
		// Reset m_iElementsFetched to 0
		// so that we can start again.
		m_iElementsFetched = 0;

		return S_OK;
	}

	virtual HRESULT STDMETHODCALLTYPE Clone
	(
		/* [out] */ __RPC__deref_out_opt IEnumVARIANT **ppEnum
	)
	{
		*ppEnum = NULL;

		HRESULT hrRetTemp = CMyObjectList::CreateInstance(ppEnum);

		if (SUCCEEDED(hrRetTemp))
		{
			CMyObjectList* pCMyObjectList = static_cast<CMyObjectList*>(*ppEnum);
			pCMyObjectList->myVarList = myVarList;
			pCMyObjectList->m_iElementsFetched = m_iElementsFetched;
			return S_OK;
		}
		else
		{
			return E_OUTOFMEMORY;
		}
	}

private:
	vector<_variant_t> myVarList;
	ULONG m_iElementsFetched;


};

OBJECT_ENTRY_AUTO(__uuidof(MyObjectList), CMyObjectList)
