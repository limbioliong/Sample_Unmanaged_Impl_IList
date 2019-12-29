// MyObjectList.cpp : Implementation of CMyObjectList

#include "stdafx.h"
#include "MyObjectList.h"


// CMyObjectList

STDMETHODIMP CMyObjectList::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IMyObjectList,
		&__uuidof(IList), 
		&__uuidof(IEnumerable),
		&__uuidof(ICollection),
		&__uuidof(IEnumVARIANT)
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}
