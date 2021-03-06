//===- Config.h.in --------------------------------------------------------===//
//
//                     The MCLinker Project
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

//===----------------------------------------------------------------------===//
// Hand-coded for Android build
//===----------------------------------------------------------------------===//

#ifndef MCLD_CONFIG_H
#define MCLD_CONFIG_H

#include <llvm/Config/config.h>

#ifdef LLVM_ON_UNIX
# define MCLD_ON_UNIX 1
#else
// Assume on Win32 otherwise.
# define MCLD_ON_WIN32 1
#endif

#define MCLD_VERSION "RockBull - 2.0.0"

#define MCLD_REGION_CHUNK_SIZE 32
#define MCLD_NUM_OF_INPUTS 32
#define MCLD_SECTIONS_PER_INPUT 16
#define MCLD_SYMBOLS_PER_INPUT 128
#define MCLD_RELOCATIONS_PER_INPUT 1024

#endif

