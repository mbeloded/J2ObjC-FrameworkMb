//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/InternalError.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaLangInternalError_INCLUDE_ALL")
#ifdef JavaLangInternalError_RESTRICT
#define JavaLangInternalError_INCLUDE_ALL 0
#else
#define JavaLangInternalError_INCLUDE_ALL 1
#endif
#undef JavaLangInternalError_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangInternalError_) && (JavaLangInternalError_INCLUDE_ALL || defined(JavaLangInternalError_INCLUDE))
#define JavaLangInternalError_

#define JavaLangVirtualMachineError_RESTRICT 1
#define JavaLangVirtualMachineError_INCLUDE 1
#include "../../java/lang/VirtualMachineError.h"

/*!
 @brief Thrown when the VM notices that it has gotten into an undefined state.
 */
@interface JavaLangInternalError : JavaLangVirtualMachineError

#pragma mark Public

/*!
 @brief Constructs a new <code>InternalError</code> that includes the current stack
 trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>InternalError</code> with the current stack trace and
 the specified detail message.
 @param detailMessage
 the detail message for this error.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangInternalError)

FOUNDATION_EXPORT void JavaLangInternalError_init(JavaLangInternalError *self);

FOUNDATION_EXPORT JavaLangInternalError *new_JavaLangInternalError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangInternalError_initWithNSString_(JavaLangInternalError *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangInternalError *new_JavaLangInternalError_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangInternalError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaLangInternalError_INCLUDE_ALL")