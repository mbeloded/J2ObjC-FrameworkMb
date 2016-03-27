//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/PropertyPermission.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaUtilPropertyPermission_INCLUDE_ALL")
#ifdef JavaUtilPropertyPermission_RESTRICT
#define JavaUtilPropertyPermission_INCLUDE_ALL 0
#else
#define JavaUtilPropertyPermission_INCLUDE_ALL 1
#endif
#undef JavaUtilPropertyPermission_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilPropertyPermission_) && (JavaUtilPropertyPermission_INCLUDE_ALL || defined(JavaUtilPropertyPermission_INCLUDE))
#define JavaUtilPropertyPermission_

#define JavaSecurityBasicPermission_RESTRICT 1
#define JavaSecurityBasicPermission_INCLUDE 1
#include "../../java/security/BasicPermission.h"

@class JavaSecurityPermission;

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaUtilPropertyPermission : JavaSecurityBasicPermission

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)actions;

- (NSString *)getActions;

- (jboolean)impliesWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilPropertyPermission)

FOUNDATION_EXPORT void JavaUtilPropertyPermission_initWithNSString_withNSString_(JavaUtilPropertyPermission *self, NSString *name, NSString *actions);

FOUNDATION_EXPORT JavaUtilPropertyPermission *new_JavaUtilPropertyPermission_initWithNSString_withNSString_(NSString *name, NSString *actions) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilPropertyPermission)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilPropertyPermission_INCLUDE_ALL")
