//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/beans/src/main/java/java/beans/IntrospectionException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaBeansIntrospectionException_INCLUDE_ALL")
#ifdef JavaBeansIntrospectionException_RESTRICT
#define JavaBeansIntrospectionException_INCLUDE_ALL 0
#else
#define JavaBeansIntrospectionException_INCLUDE_ALL 1
#endif
#undef JavaBeansIntrospectionException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaBeansIntrospectionException_) && (JavaBeansIntrospectionException_INCLUDE_ALL || defined(JavaBeansIntrospectionException_INCLUDE))
#define JavaBeansIntrospectionException_

#define JavaLangException_RESTRICT 1
#define JavaLangException_INCLUDE 1
#include "../../java/lang/Exception.h"

@interface JavaBeansIntrospectionException : JavaLangException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaBeansIntrospectionException)

FOUNDATION_EXPORT void JavaBeansIntrospectionException_initWithNSString_(JavaBeansIntrospectionException *self, NSString *message);

FOUNDATION_EXPORT JavaBeansIntrospectionException *new_JavaBeansIntrospectionException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaBeansIntrospectionException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaBeansIntrospectionException_INCLUDE_ALL")