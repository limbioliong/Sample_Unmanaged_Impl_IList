// MyStringList.cpp : Implementation of CMyStringList

#include "stdafx.h"
#include "MyStringList.h"


// CMyStringList

STDMETHODIMP CMyStringList::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IMyStringList,
		&__uuidof(IList)  // Must include this.
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}
