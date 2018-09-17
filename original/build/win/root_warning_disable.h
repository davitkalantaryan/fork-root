
// root_warning_disable.h

//
// file		:	root_warning_disable.h
// created	:	2018 Sep 17
//

#ifndef __root_warning_disable_h__
#define __root_warning_disable_h__

#ifdef _MSC_VER

#pragma warning(disable : 4267)
#pragma warning(disable : 4311) // tinterpreter.h(325): warning C4311: 'type cast': pointer truncation from 'void *' to 'Long_t'
#pragma warning (disable:4302)// tinterpreter.h(325): warning C4302: 'type cast': truncation from 'void *' to 'Long_t'
#pragma warning (disable:4312)// trootnew.cpp(1603): warning C4312: 'type cast': conversion from 'Long_t' to 'TCanvas *' of greater size
#pragma warning( \
   disable : 4312) // \inliner.h(78): warning C4266: 'bool llvm::Pass::doInitialization(llvm::Module &)': no override
                   // available for virtual member function from base 'llvm::Pass'; function is hidden
#pragma warning(disable : 4146) // mathextras.h(372): warning C4146: unary minus operator applied to unsigned type,
                                // result still unsigned

#elif defined(_GCC_)
#endif


#endif // #ifndef __root_warning_disable_h__

