// stdafx.cpp : source file that includes just the standard includes
// UnmanagedIListImpl.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

void MySetErrorInfo(LPCWSTR lpszDescription, LPCWSTR lpszSource)
{
	// See :
	// How to: Map HRESULTs and Exceptions
	// https://docs.microsoft.com/en-us/dotnet/framework/interop/how-to-map-hresults-and-exceptions
	//
	ICreateErrorInfoPtr spICreateErrorInfo = NULL;
	IErrorInfoPtr spIErrorInfo = NULL;

	HRESULT hrRetTemp = CreateErrorInfo(&spICreateErrorInfo);

	if (SUCCEEDED(hrRetTemp))
	{
		spICreateErrorInfo->SetDescription(::SysAllocString(lpszDescription));
		spICreateErrorInfo->SetSource(::SysAllocString(lpszSource));
		hrRetTemp = spICreateErrorInfo->QueryInterface(IID_IErrorInfo, (void**)&spIErrorInfo);

		if (SUCCEEDED(hrRetTemp))
		{
			SetErrorInfo(0, spIErrorInfo);
		}
	}
}

