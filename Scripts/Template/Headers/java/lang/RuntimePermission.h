//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/RuntimePermission.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaLangRuntimePermission_INCLUDE_ALL")
#ifdef JavaLangRuntimePermission_RESTRICT
#define JavaLangRuntimePermission_INCLUDE_ALL 0
#else
#define JavaLangRuntimePermission_INCLUDE_ALL 1
#endif
#undef JavaLangRuntimePermission_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangRuntimePermission_) && (JavaLangRuntimePermission_INCLUDE_ALL || defined(JavaLangRuntimePermission_INCLUDE))
#define JavaLangRuntimePermission_

#define JavaSecurityBasicPermission_RESTRICT 1
#define JavaSecurityBasicPermission_INCLUDE 1
#include "../../java/security/BasicPermission.h"

@class JavaSecurityPermission;

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaLangRuntimePermission : JavaSecurityBasicPermission

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)permissionName;

- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)actions;

- (NSString *)getActions;

- (jboolean)impliesWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangRuntimePermission)

FOUNDATION_EXPORT void JavaLangRuntimePermission_initWithNSString_(JavaLangRuntimePermission *self, NSString *permissionName);

FOUNDATION_EXPORT JavaLangRuntimePermission *new_JavaLangRuntimePermission_initWithNSString_(NSString *permissionName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangRuntimePermission_initWithNSString_withNSString_(JavaLangRuntimePermission *self, NSString *name, NSString *actions);

FOUNDATION_EXPORT JavaLangRuntimePermission *new_JavaLangRuntimePermission_initWithNSString_withNSString_(NSString *name, NSString *actions) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRuntimePermission)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaLangRuntimePermission_INCLUDE_ALL")