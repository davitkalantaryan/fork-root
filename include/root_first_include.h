//
// file		:	root_first_include.h
// created	:	2018 Sep 16
//

#ifndef __root_first_include_h__
#define __root_first_include_h__

#ifndef WIN32
//#define WIN32
#endif

#ifdef _WIN32

#ifdef _MSC_VER

#ifdef _M_AMD64
#include <intrin.h>  
#pragma intrinsic(__stosb)
#else
#endif   // #ifdef _M_AMD64

#endif   // #ifdef _MSC_VER

#include <Winsock2.h>
#include <WS2tcpip.h>
#include <Windows.h>
#include <DbgHelp.h>

#endif   // #ifdef _WIN32

#if 1
#ifdef OUT
#undef OUT
#endif
#define	OUT	(CHAR_MAX+1)	/* a non-character value */
#endif

#endif  // #ifndef __root_first_include_h__
