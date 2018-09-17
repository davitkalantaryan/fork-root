//
// file		:	root_intrinsic.h
// created	:	2018 Sep 17
//

#ifndef __root_intrinsic_h__
#define __root_intrinsic_h__

#ifndef NOMINMAX
#define NOMINMAX
#endif

#include "root_warning_disable.h"

#ifdef _WIN32

#ifdef _MSC_VER

#pragma warning(disable:4267)


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

#ifndef OUT_NEWLY_DEFINED
#ifdef OUT
#undef OUT
#endif
#define OUT (CHAR_MAX + 1) /* a non-character value */
#endif

#endif // #ifndef __root_intrinsic_h__

