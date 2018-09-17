//
// file		:	root_first_include.h
// created	:	2018 Sep 16
//

#ifndef __root_first_include_h__
#define __root_first_include_h__

#include "root_warning_disable.h"

#ifndef WIN32
//#define WIN32
#endif

//#if __FILE__ == MCWinEH.cpp
//#endif

#ifndef _IGNORE_WINNT_DEFINATIONS_
#define _IGNORE_WINNT_DEFINATIONS_
#endif

#ifndef NOMINMAX
#define NOMINMAX
#endif

#ifdef _WIN32

#ifdef _MSC_VER


#ifndef _NOT_USE_WIN

#ifdef _M_AMD64
//#include <intrin.h>
//#pragma intrinsic(__stosb)
#else
#endif // #ifdef _M_AMD64

#endif // #ifdef _MSC_VER

//#include <Winsock2.h>
//#include <WS2tcpip.h>
//#include <Windows.h>
//#include <DbgHelp.h>

#endif // #ifndef _NOT_USE_WIN

#endif // #ifdef _WIN32

#if 0
#ifdef OUT
#undef OUT
#endif
#define OUT (CHAR_MAX + 1) /* a non-character value */
#endif

#endif // #ifndef __root_first_include_h__
