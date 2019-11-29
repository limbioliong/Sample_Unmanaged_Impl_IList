// MyStringList.h : Declaration of the CMyStringList

#pragma once
#include "resource.h"       // main symbols



#include "UnmanagedIListImpl_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

// CMyStringList

class ATL_NO_VTABLE CMyStringList :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMyStringList, &CLSID_MyStringList>,
	public ISupportErrorInfo,
	public IDispatchImpl<IMyStringList, &IID_IMyStringList, &LIBID_UnmanagedIListImplLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IDispatchImpl<IList, &__uuidof(IList), &__uuidof(__mscorlib), 2, 4>,
	public IDispatchImpl<IEnumerable, &__uuidof(IEnumerable), &__uuidof(__mscorlib), 1, 0>,
	public IEnumVARIANT
{
public:
	CMyStringList() : 
		m_iElementsFetched(0)
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CMyStringList)
	COM_INTERFACE_ENTRY(IMyStringList)
	//COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IList)
	COM_INTERFACE_ENTRY(IEnumerable)
	COM_INTERFACE_ENTRY(IEnumVARIANT)
	COM_INTERFACE_ENTRY2(IDispatch, IList)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
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

	virtual HRESULT __stdcall get_Item
	(
		/*[in]*/ long index,
		/*[out,retval]*/ VARIANT * pRetVal
	)
	{
		if ((index < 0) || (index > (long)(myStringList.size())))
		{
			// See :
			// ArgumentOutOfRangeException Class
			// https://docs.microsoft.com/en-us/dotnet/api/system.argumentoutofrangeexception?view=netframework-4.8
			//
			MySetErrorInfo("The Index is Out of Range");

			// #include <corerror.h> in order to use COR_E_ARGUMENTOUTOFRANGE.
			return COR_E_ARGUMENTOUTOFRANGE;
		}

		USES_CONVERSION;

		VariantInit(pRetVal);

		string str = myStringList[index];
		V_VT(pRetVal) = VT_BSTR;
		V_BSTR(pRetVal) = ::SysAllocString(A2W(str.c_str()));

		return S_OK;
	}

	virtual HRESULT __stdcall putref_Item
	(
		/*[in]*/ long index,
		/*[in]*/ VARIANT pRetVal
	)
	{
		if ((index < 0) || (index > (long)(myStringList.size())))
		{
			// See :
			// ArgumentOutOfRangeException Class
			// https://docs.microsoft.com/en-us/dotnet/api/system.argumentoutofrangeexception?view=netframework-4.8
			//
			MySetErrorInfo("The Index is Out of Range");

			// #include <corerror.h> in order to use COR_E_ARGUMENTOUTOFRANGE.
			return COR_E_ARGUMENTOUTOFRANGE;
		}

		USES_CONVERSION;

		string strValue(W2A(V_BSTR(&pRetVal)));
		myStringList[index] = strValue;

		return S_OK;
	}

	virtual HRESULT __stdcall Add
	(
		/*[in]*/ VARIANT value,
		/*[out,retval]*/ long * pRetVal
	)
	{
		USES_CONVERSION;

		size_t size = myStringList.size();

		string str(W2A(V_BSTR(&value)));
		myStringList.push_back(str);

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

		string strValue(W2A(V_BSTR(&value)));

		vector<string>::iterator theIterator = find(myStringList.begin(), myStringList.end(), strValue);

		if (theIterator != myStringList.end())
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
		myStringList.clear();

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

		string strValue(W2A(V_BSTR(&value)));

		int i = 0;

		// For info on C++ Lambda Expressions, see :
		// Lambda Expressions in C++
		// https://docs.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=vs-2019
		//
		vector<string>::iterator theIterator = find_if
		(
			myStringList.begin(), 
			myStringList.end(), 
			[strValue, &i](string& str)
			{
				if (str == strValue)
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

		if (theIterator != myStringList.end())
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

		if ((index < 0) || (index > (long)(myStringList.size())))
		{
			// See :
			// ArgumentOutOfRangeException Class
			// https://docs.microsoft.com/en-us/dotnet/api/system.argumentoutofrangeexception?view=netframework-4.8
			//
			MySetErrorInfo("The Index is Out of Range");

			// #include <corerror.h> in order to use COR_E_ARGUMENTOUTOFRANGE.
			return COR_E_ARGUMENTOUTOFRANGE;
		}

		long l = 0;
		string strValue(W2A(V_BSTR(&value)));
		vector<string>::iterator theIterator;

		for
		(
			theIterator = myStringList.begin();
			theIterator != myStringList.end();
			theIterator++, l++
		)
		{
			if (l == index)
			{
				break;
			}
		}

		myStringList.insert(theIterator, strValue);

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
		if ((index < 0) || (index > (long)(myStringList.size())))
		{
			// See :
			// ArgumentOutOfRangeException Class
			// https://docs.microsoft.com/en-us/dotnet/api/system.argumentoutofrangeexception?view=netframework-4.8
			//
			MySetErrorInfo("The Index is Out of Range");

			// #include <corerror.h> in order to use COR_E_ARGUMENTOUTOFRANGE.
			return COR_E_ARGUMENTOUTOFRANGE;
		}

		long l = 0;
		vector<string>::iterator theIterator;

		for
		(
			theIterator = myStringList.begin();
			theIterator != myStringList.end();
			theIterator++, l++
		)
		{
			if (l == index)
			{
				break;
			}
		}

		myStringList.erase(theIterator);

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

		if (m_iElementsFetched >= (ULONG)(myStringList.size()))
		{
			// Reset m_iElementsFetched to 0
			// so that we can start again.
			m_iElementsFetched = 0;
			return S_FALSE;
		}

		ULONG i = 0;
		for (i = 0; i < celt; i++)
		{
			if (m_iElementsFetched + i >= myStringList.size())
			{
				break;
			}

			VariantInit(&(rgVar[i]));
			V_VT(&(rgVar[i])) = VT_BSTR;
			V_BSTR(&(rgVar[i])) = ::SysAllocString(A2W(myStringList[m_iElementsFetched + i].c_str()));
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

		if (m_iElementsFetched + celt >= myStringList.size())
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

		HRESULT hrRetTemp = CMyStringList::CreateInstance(ppEnum);

		if (SUCCEEDED(hrRetTemp))
		{
			CMyStringList* pCMyStringList = static_cast<CMyStringList*>(*ppEnum);
			pCMyStringList->myStringList = myStringList;
			pCMyStringList->m_iElementsFetched = m_iElementsFetched;
			return S_OK;
		}
		else
		{
			return E_OUTOFMEMORY;
		}		
	}

private:
	vector<string> myStringList;
	ULONG m_iElementsFetched;

	void MySetErrorInfo(LPCTSTR lpszDescription)
	{
		USES_CONVERSION;

		// See :
		// How to: Map HRESULTs and Exceptions
		// https://docs.microsoft.com/en-us/dotnet/framework/interop/how-to-map-hresults-and-exceptions
		//
		ICreateErrorInfoPtr spICreateErrorInfo = NULL;
		IErrorInfoPtr spIErrorInfo = NULL;

		HRESULT hrRetTemp = CreateErrorInfo(&spICreateErrorInfo);

		if (SUCCEEDED(hrRetTemp))
		{
			spICreateErrorInfo->SetDescription(::SysAllocString(A2W(lpszDescription)));
			spICreateErrorInfo->SetSource(::SysAllocString(L"UnmanagedIListImpl.MyStringList"));
			hrRetTemp = spICreateErrorInfo->QueryInterface(IID_IErrorInfo, (void**)&spIErrorInfo);

			if (SUCCEEDED(hrRetTemp))
			{
				SetErrorInfo(0, spIErrorInfo);
			}
		}
	}
};

OBJECT_ENTRY_AUTO(__uuidof(MyStringList), CMyStringList)
