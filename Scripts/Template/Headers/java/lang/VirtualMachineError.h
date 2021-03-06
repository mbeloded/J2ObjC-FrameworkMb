//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/VirtualMachineError.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaLangVirtualMachineError_INCLUDE_ALL")
#ifdef JavaLangVirtualMachineError_RESTRICT
#define JavaLangVirtualMachineError_INCLUDE_ALL 0
#else
#define JavaLangVirtualMachineError_INCLUDE_ALL 1
#endif
#undef JavaLangVirtualMachineError_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangVirtualMachineError_) && (JavaLangVirtualMachineError_INCLUDE_ALL || defined(JavaLangVirtualMachineError_INCLUDE))
#define JavaLangVirtualMachineError_

#define JavaLangError_RESTRICT 1
#define JavaLangError_INCLUDE 1
#include "../../java/lang/Error.h"

/*!
 @brief <code>VirtualMachineError</code> is the superclass of all error classes that occur
 during the operation of the VM.
 - seealso: Error
 */
@interface JavaLangVirtualMachineError : JavaLangError

#pragma mark Public

/*!
 @brief Constructs a new <code>VirtualMachineError</code> that includes the current
 stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>VirtualMachineError</code> with the current stack trace
 and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangVirtualMachineError)

FOUNDATION_EXPORT void JavaLangVirtualMachineError_init(JavaLangVirtualMachineError *self);

FOUNDATION_EXPORT void JavaLangVirtualMachineError_initWithNSString_(JavaLangVirtualMachineError *self, NSString *detailMessage);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangVirtualMachineError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaLangVirtualMachineError_INCLUDE_ALL")
