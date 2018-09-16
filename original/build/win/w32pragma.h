/* @(#)build/win:$Id$ */

/*************************************************************************
 * Copyright (C) 1995-2002, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

#ifndef ROOT_w32pragma
#define ROOT_w32pragma

/*************************************************************************
 *                                                                       *
 * w32pragma                                                             *
 *                                                                       *
 * Pragmas and defines for MSVC                                          *
 *                                                                       *
 *************************************************************************/

// Added by DK
/*************************************************************************/
//#include "root_first_include.h"

#ifndef __root_first_include_h__
#define __root_first_include_h__
#ifdef _WIN32

#ifdef _MSC_VER

#ifdef _M_AMD64
#include <intrin.h>
#pragma intrinsic(__stosb)
#else
#endif // #ifdef _M_AMD64

#endif // #ifdef _MSC_VER

#include <Winsock2.h>
#include <WS2tcpip.h>
#include <Windows.h>
#include <DbgHelp.h>

#endif // #ifdef _WIN32

#ifdef OUT
#undef OUT
#endif
#define OUT (CHAR_MAX + 1) /* a non-character value */

#endif  // #ifndef __root_first_include_h__
/*************************************************************************/
// end Added by DK



#ifdef _WIN32

/* Disable warning about truncated symboles (usually coming from stl) */
#pragma warning (disable: 4786)
/* Disable warning about inconsistent dll linkage (dllexport assumed) */
#pragma warning (disable: 4273)
/* "no suitable definition provided for explicit template instantiation"*/
#pragma warning (disable: 4661)
/* "deprecated, use ISO C++ conformant name" */
#pragma warning (disable: 4996)
/* "new behavior: elements default initialized" */
#pragma warning (disable: 4351)
/* local static not thread safe */
#pragma warning (disable: 4640)
/*forcing int to bool (performance warning) */
#pragma warning (disable: 4800)
/* truncation from double to float */
#pragma warning (disable: 4305)
/* signed unsigned mismatch */
#pragma warning (disable: 4018)
/* truncation of constant value */
#pragma warning (disable: 4309)
/* check op precedence for error */
#pragma warning (disable: 4554)
/* qualifier applied to reference type; ignored */
#pragma warning (disable: 4181)
/* /GS can not buffer overrun protect parameters and locals: function not optimized */
#pragma warning (disable: 4748)
/* function(): resolved overload was found by argument-dependent lookup */
#pragma warning (disable: 4675)
/* X needs to have dll-interface to be used by clients of class Y */
#pragma warning (disable: 4251)
/* decorated name length exceeded, name was truncated */
#pragma warning (disable: 4503)

/* function is hidden */
#pragma warning (3: 4266)
/* loop control variable is used outside the for-loop scope */
#pragma warning (3: 4289)

#ifndef WIN32
#define WIN32 1
#endif
#define _WINDOWS 1
#ifndef WINVER
#define WINVER 0x0500
#endif
#define CRTAPI1 _cdecl 
#define CRTAPI2 _cdecl
#define _X86_ 1 
// #define _DLL  - used to be explicitly defined, 
// but it's implicitely defined via /MD(d)
#define G__REDIRECTIO 1
#define G__SHAREDLIB 1
#define G__UNIX 1
#define G__ROOT 1
#define G__WIN32 1

#if (_MSC_VER >= 1310)
#  define G__NEWSTDHEADER 1
#endif

#if (_MSC_VER >= 1400)
#define _CRT_SECURE_NO_DEPRECATE 1
#define _USE_ATTRIBUTES_FOR_SAL 0
#endif

#endif // _WIN32

#endif // defined ROOT_w32pragma
