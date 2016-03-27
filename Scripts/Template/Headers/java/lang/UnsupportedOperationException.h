//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/UnsupportedOperationException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaLangUnsupportedOperationException_INCLUDE_ALL")
#ifdef JavaLangUnsupportedOperationException_RESTRICT
#define JavaLangUnsupportedOperationException_INCLUDE_ALL 0
#else
#define JavaLangUnsupportedOperationException_INCLUDE_ALL 1
#endif
#undef JavaLangUnsupportedOperationException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangUnsupportedOperationException_) && (JavaLangUnsupportedOperationException_INCLUDE_ALL || defined(JavaLangUnsupportedOperationException_INCLUDE))
#define JavaLangUnsupportedOperationException_

#define JavaLangRuntimeException_RESTRICT 1
#define JavaLangRuntimeException_INCLUDE 1
#include "../../java/lang/RuntimeException.h"

@class JavaLangThrowable;

/*!
 @brief Thrown when an unsupported operation is attempted.
 */
@interface JavaLangUnsupportedOperationException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a new <code>UnsupportedOperationException</code> that includes the
 current stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>UnsupportedOperationException</code> with the current
 stack trace and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

/*!
 @brief Constructs a new <code>UnsupportedOperationException</code> with the current
 stack trace, the specified detail message and the specified cause.
 @param message
 the detail message for this exception.
 @param cause
 the optional cause of this exception, may be <code>null</code>.
 @since 1.5
 */
- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a new <code>UnsupportedOperationException</code> with the current
 stack trace and the specified cause.
 @param cause
 the optional cause of this exception, may be <code>null</code>.
 @since 1.5
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangUnsupportedOperationException)

FOUNDATION_EXPORT void JavaLangUnsupportedOperationException_init(JavaLangUnsupportedOperationException *self);

FOUNDATION_EXPORT JavaLangUnsupportedOperationException *new_JavaLangUnsupportedOperationException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangUnsupportedOperationException_initWithNSString_(JavaLangUnsupportedOperationException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangUnsupportedOperationException *new_JavaLangUnsupportedOperationException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangUnsupportedOperationException_initWithNSString_withJavaLangThrowable_(JavaLangUnsupportedOperationException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangUnsupportedOperationException *new_JavaLangUnsupportedOperationException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangUnsupportedOperationException_initWithJavaLangThrowable_(JavaLangUnsupportedOperationException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangUnsupportedOperationException *new_JavaLangUnsupportedOperationException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangUnsupportedOperationException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaLangUnsupportedOperationException_INCLUDE_ALL")