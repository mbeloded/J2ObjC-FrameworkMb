//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/InstantiationException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaLangInstantiationException_INCLUDE_ALL")
#ifdef JavaLangInstantiationException_RESTRICT
#define JavaLangInstantiationException_INCLUDE_ALL 0
#else
#define JavaLangInstantiationException_INCLUDE_ALL 1
#endif
#undef JavaLangInstantiationException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangInstantiationException_) && (JavaLangInstantiationException_INCLUDE_ALL || defined(JavaLangInstantiationException_INCLUDE))
#define JavaLangInstantiationException_

#define JavaLangReflectiveOperationException_RESTRICT 1
#define JavaLangReflectiveOperationException_INCLUDE 1
#include "../../java/lang/ReflectiveOperationException.h"

@class IOSClass;

/*!
 @brief Thrown when a program attempts to access a constructor which is not
 accessible from the location where the reference is made.
 */
@interface JavaLangInstantiationException : JavaLangReflectiveOperationException

#pragma mark Public

/*!
 @brief Constructs a new <code>InstantiationException</code> that includes the current
 stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>InstantiationException</code> with the current stack
 trace and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

#pragma mark Package-Private

/*!
 @brief Constructs a new <code>InstantiationException</code> with the current stack
 trace and the class that caused this exception.
 @param clazz
 the class that can not be instantiated.
 */
- (instancetype)initWithIOSClass:(IOSClass *)clazz;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangInstantiationException)

FOUNDATION_EXPORT void JavaLangInstantiationException_init(JavaLangInstantiationException *self);

FOUNDATION_EXPORT JavaLangInstantiationException *new_JavaLangInstantiationException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangInstantiationException_initWithNSString_(JavaLangInstantiationException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangInstantiationException *new_JavaLangInstantiationException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangInstantiationException_initWithIOSClass_(JavaLangInstantiationException *self, IOSClass *clazz);

FOUNDATION_EXPORT JavaLangInstantiationException *new_JavaLangInstantiationException_initWithIOSClass_(IOSClass *clazz) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangInstantiationException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaLangInstantiationException_INCLUDE_ALL")