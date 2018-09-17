//===- lib/MC/MCWinEH.cpp - Windows EH implementation ---------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef _IGNORE_WINNT_DEFINATIONS_
#define _IGNORE_WINNT_DEFINATIONS_
#endif

#include "llvm/MC/MCWinEH.h"
#include "llvm/ADT/StringRef.h"
#include "llvm/BinaryFormat/COFF.h"
#include "llvm/MC/MCContext.h"
#include "llvm/MC/MCObjectFileInfo.h"
#include "llvm/MC/MCSectionCOFF.h"
#include "llvm/MC/MCStreamer.h"
#include "llvm/MC/MCSymbol.h"

namespace llvm {
namespace WinEH {

UnwindEmitter::~UnwindEmitter() {}

}
}

