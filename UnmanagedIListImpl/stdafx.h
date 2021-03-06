// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#pragma once

#ifndef STRICT
#define STRICT
#endif

#include "targetver.h"

#define _ATL_APARTMENT_THREADED

#define _ATL_NO_AUTOMATIC_NAMESPACE

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// some CString constructors will be explicit


#define ATL_NO_ASSERT_ON_DESTROY_NONEXISTENT_WINDOW

#include "resource.h"
#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>

// We #include <vector> in order to use the STL vector templated class.
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// We have #import the types declared in mscorlib. 
#import "mscorlib.tlb" raw_interfaces_only  rename("_Module", "___Module") rename("ReportEvent", "_ReportEvent") \
rename("IList", "_IList") rename("_Array", "__Array") rename("ICollection", "_ICollection") rename("IEnumerable", "_IEnumerable")

using namespace mscorlib;

#include <corerror.h>

void MySetErrorInfo(LPCWSTR lpszDescription, LPCWSTR lpszSource);
