//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/UndeclaredThrowableException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaLangReflectUndeclaredThrowableException_INCLUDE_ALL")
#ifdef JavaLangReflectUndeclaredThrowableException_RESTRICT
#define JavaLangReflectUndeclaredThrowableException_INCLUDE_ALL 0
#else
#define JavaLangReflectUndeclaredThrowableException_INCLUDE_ALL 1
#endif
#undef JavaLangReflectUndeclaredThrowableException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangReflectUndeclaredThrowableException_) && (JavaLangReflectUndeclaredThrowableException_INCLUDE_ALL || defined(JavaLangReflectUndeclaredThrowableException_INCLUDE))
#define JavaLangReflectUndeclaredThrowableException_

#define JavaLangRuntimeException_RESTRICT 1
#define JavaLangRuntimeException_INCLUDE 1
#include "../../../java/lang/RuntimeException.h"

@class JavaLangThrowable;

/*!
 @brief This class provides a wrapper for an undeclared, checked exception thrown by
 an InvocationHandler.
 - seealso: java.lang.reflect.InvocationHandler#invoke
 */
@interface JavaLangReflectUndeclaredThrowableException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a new <code>UndeclaredThrowableException</code> instance with the
 undeclared, checked exception that occurred.
 @param exception
 the undeclared, checked exception that occurred
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)exception;

/*!
 @brief Constructs a new <code>UndeclaredThrowableException</code> instance with the
 undeclared, checked exception that occurred and a message.
 @param detailMessage
 the detail message for the exception
 @param exception
 the undeclared, checked exception that occurred
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)exception
                             withNSString:(NSString *)detailMessage;

/*!
 @brief Returns the undeclared, checked exception that occurred, which may be
 <code>null</code>.
 @return the undeclared, checked exception that occurred
 */
- (JavaLangThrowable *)getCause;

/*!
 @brief Returns the undeclared, checked exception that occurred, which may be
 <code>null</code>.
 @return the undeclared, checked exception that occurred
 */
- (JavaLangThrowable *)getUndeclaredThrowable;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectUndeclaredThrowableException)

FOUNDATION_EXPORT void JavaLangReflectUndeclaredThrowableException_initWithJavaLangThrowable_(JavaLangReflectUndeclaredThrowableException *self, JavaLangThrowable *exception);

FOUNDATION_EXPORT JavaLangReflectUndeclaredThrowableException *new_JavaLangReflectUndeclaredThrowableException_initWithJavaLangThrowable_(JavaLangThrowable *exception) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangReflectUndeclaredThrowableException_initWithJavaLangThrowable_withNSString_(JavaLangReflectUndeclaredThrowableException *self, JavaLangThrowable *exception, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangReflectUndeclaredThrowableException *new_JavaLangReflectUndeclaredThrowableException_initWithJavaLangThrowable_withNSString_(JavaLangThrowable *exception, NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectUndeclaredThrowableException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaLangReflectUndeclaredThrowableException_INCLUDE_ALL")
