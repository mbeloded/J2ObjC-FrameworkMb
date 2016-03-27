//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/PermissionCollection.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaSecurityPermissionCollection_INCLUDE_ALL")
#ifdef JavaSecurityPermissionCollection_RESTRICT
#define JavaSecurityPermissionCollection_INCLUDE_ALL 0
#else
#define JavaSecurityPermissionCollection_INCLUDE_ALL 1
#endif
#undef JavaSecurityPermissionCollection_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityPermissionCollection_) && (JavaSecurityPermissionCollection_INCLUDE_ALL || defined(JavaSecurityPermissionCollection_INCLUDE))
#define JavaSecurityPermissionCollection_

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "../../java/io/Serializable.h"

@class JavaSecurityPermission;
@protocol JavaUtilEnumeration;

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaSecurityPermissionCollection : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (void)addWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

- (id<JavaUtilEnumeration>)elements;

- (jboolean)impliesWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

- (jboolean)isReadOnly;

- (void)setReadOnly;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityPermissionCollection)

FOUNDATION_EXPORT void JavaSecurityPermissionCollection_init(JavaSecurityPermissionCollection *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityPermissionCollection)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSecurityPermissionCollection_INCLUDE_ALL")
