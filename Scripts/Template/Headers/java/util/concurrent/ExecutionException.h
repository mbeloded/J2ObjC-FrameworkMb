//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/ExecutionException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaUtilConcurrentExecutionException_INCLUDE_ALL")
#ifdef JavaUtilConcurrentExecutionException_RESTRICT
#define JavaUtilConcurrentExecutionException_INCLUDE_ALL 0
#else
#define JavaUtilConcurrentExecutionException_INCLUDE_ALL 1
#endif
#undef JavaUtilConcurrentExecutionException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentExecutionException_) && (JavaUtilConcurrentExecutionException_INCLUDE_ALL || defined(JavaUtilConcurrentExecutionException_INCLUDE))
#define JavaUtilConcurrentExecutionException_

#define JavaLangException_RESTRICT 1
#define JavaLangException_INCLUDE 1
#include "../../../java/lang/Exception.h"

@class JavaLangThrowable;

/*!
 @brief Exception thrown when attempting to retrieve the result of a task
 that aborted by throwing an exception.
 This exception can be
 inspected using the <code>getCause()</code> method.
 - seealso: Future
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentExecutionException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs an <code>ExecutionException</code> with the specified detail
 message and cause.
 @param message the detail message
 @param cause the cause (which is saved for later retrieval by the
 <code>getCause()</code> method)
 */
- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs an <code>ExecutionException</code> with the specified cause.
 The detail message is set to <code>(cause == null ? null :
 cause.toString())</code>
  (which typically contains the class and
 detail message of <code>cause</code>).
 @param cause the cause (which is saved for later retrieval by the
 <code>getCause()</code> method)
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

#pragma mark Protected

/*!
 @brief Constructs an <code>ExecutionException</code> with no detail message.
 The cause is not initialized, and may subsequently be
 initialized by a call to <code>initCause</code>.
 */
- (instancetype)init;

/*!
 @brief Constructs an <code>ExecutionException</code> with the specified detail
 message.
 The cause is not initialized, and may subsequently be
 initialized by a call to <code>initCause</code>.
 @param message the detail message
 */
- (instancetype)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentExecutionException)

FOUNDATION_EXPORT void JavaUtilConcurrentExecutionException_init(JavaUtilConcurrentExecutionException *self);

FOUNDATION_EXPORT JavaUtilConcurrentExecutionException *new_JavaUtilConcurrentExecutionException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentExecutionException_initWithNSString_(JavaUtilConcurrentExecutionException *self, NSString *message);

FOUNDATION_EXPORT JavaUtilConcurrentExecutionException *new_JavaUtilConcurrentExecutionException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentExecutionException_initWithNSString_withJavaLangThrowable_(JavaUtilConcurrentExecutionException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaUtilConcurrentExecutionException *new_JavaUtilConcurrentExecutionException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentExecutionException_initWithJavaLangThrowable_(JavaUtilConcurrentExecutionException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaUtilConcurrentExecutionException *new_JavaUtilConcurrentExecutionException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentExecutionException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilConcurrentExecutionException_INCLUDE_ALL")