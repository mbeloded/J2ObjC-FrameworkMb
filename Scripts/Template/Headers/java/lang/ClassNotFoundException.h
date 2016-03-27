//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ClassNotFoundException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaLangClassNotFoundException_INCLUDE_ALL")
#ifdef JavaLangClassNotFoundException_RESTRICT
#define JavaLangClassNotFoundException_INCLUDE_ALL 0
#else
#define JavaLangClassNotFoundException_INCLUDE_ALL 1
#endif
#undef JavaLangClassNotFoundException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangClassNotFoundException_) && (JavaLangClassNotFoundException_INCLUDE_ALL || defined(JavaLangClassNotFoundException_INCLUDE))
#define JavaLangClassNotFoundException_

#define JavaLangReflectiveOperationException_RESTRICT 1
#define JavaLangReflectiveOperationException_INCLUDE 1
#include "../../java/lang/ReflectiveOperationException.h"

@class JavaLangThrowable;

/*!
 @brief Thrown when a class loader is unable to find a class.
 */
@interface JavaLangClassNotFoundException : JavaLangReflectiveOperationException

#pragma mark Public

/*!
 @brief Constructs a new <code>ClassNotFoundException</code> that includes the current
 stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>ClassNotFoundException</code> with the current stack
 trace and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

/*!
 @brief Constructs a new <code>ClassNotFoundException</code> with the current stack
 trace, the specified detail message and the exception that occurred when
 loading the class.
 @param detailMessage
 the detail message for this exception.
 @param exception
 the exception which occurred while loading the class.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangThrowable:(JavaLangThrowable *)exception;

/*!
 @brief Returns the cause of this Throwable, or <code>null</code> if there is no
 cause.
 @return Throwable the receiver's cause.
 */
- (JavaLangThrowable *)getCause;

/*!
 @brief Returns the exception which occurred when loading the class.
 @return Throwable the exception which occurred while loading the class.
 */
- (JavaLangThrowable *)getException;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangClassNotFoundException)

FOUNDATION_EXPORT void JavaLangClassNotFoundException_init(JavaLangClassNotFoundException *self);

FOUNDATION_EXPORT JavaLangClassNotFoundException *new_JavaLangClassNotFoundException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangClassNotFoundException_initWithNSString_(JavaLangClassNotFoundException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangClassNotFoundException *new_JavaLangClassNotFoundException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangClassNotFoundException_initWithNSString_withJavaLangThrowable_(JavaLangClassNotFoundException *self, NSString *detailMessage, JavaLangThrowable *exception);

FOUNDATION_EXPORT JavaLangClassNotFoundException *new_JavaLangClassNotFoundException_initWithNSString_withJavaLangThrowable_(NSString *detailMessage, JavaLangThrowable *exception) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangClassNotFoundException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaLangClassNotFoundException_INCLUDE_ALL")