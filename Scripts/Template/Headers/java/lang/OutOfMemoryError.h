//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/OutOfMemoryError.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaLangOutOfMemoryError_INCLUDE_ALL")
#ifdef JavaLangOutOfMemoryError_RESTRICT
#define JavaLangOutOfMemoryError_INCLUDE_ALL 0
#else
#define JavaLangOutOfMemoryError_INCLUDE_ALL 1
#endif
#undef JavaLangOutOfMemoryError_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangOutOfMemoryError_) && (JavaLangOutOfMemoryError_INCLUDE_ALL || defined(JavaLangOutOfMemoryError_INCLUDE))
#define JavaLangOutOfMemoryError_

#define JavaLangVirtualMachineError_RESTRICT 1
#define JavaLangVirtualMachineError_INCLUDE 1
#include "../../java/lang/VirtualMachineError.h"

/*!
 @brief Thrown when a request for memory is made that can not be satisfied using the
 available platform resources.
 Such a request may be made by both the running
 application or by an internal function of the VM.
 */
@interface JavaLangOutOfMemoryError : JavaLangVirtualMachineError

#pragma mark Public

/*!
 @brief Constructs a new <code>OutOfMemoryError</code> that includes the current stack
 trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>OutOfMemoryError</code> with the current stack trace
 and the specified detail message.
 @param detailMessage
 the detail message for this error.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangOutOfMemoryError)

FOUNDATION_EXPORT void JavaLangOutOfMemoryError_init(JavaLangOutOfMemoryError *self);

FOUNDATION_EXPORT JavaLangOutOfMemoryError *new_JavaLangOutOfMemoryError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangOutOfMemoryError_initWithNSString_(JavaLangOutOfMemoryError *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangOutOfMemoryError *new_JavaLangOutOfMemoryError_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangOutOfMemoryError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaLangOutOfMemoryError_INCLUDE_ALL")
