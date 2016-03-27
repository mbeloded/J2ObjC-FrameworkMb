//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/CodeSource.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaSecurityCodeSource_INCLUDE_ALL")
#ifdef JavaSecurityCodeSource_RESTRICT
#define JavaSecurityCodeSource_INCLUDE_ALL 0
#else
#define JavaSecurityCodeSource_INCLUDE_ALL 1
#endif
#undef JavaSecurityCodeSource_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityCodeSource_) && (JavaSecurityCodeSource_INCLUDE_ALL || defined(JavaSecurityCodeSource_INCLUDE))
#define JavaSecurityCodeSource_

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "../../java/io/Serializable.h"

@class IOSObjectArray;
@class JavaNetURL;

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaSecurityCodeSource : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (IOSObjectArray *)getCodeSigners;

- (JavaNetURL *)getLocation;

- (IOSObjectArray *)getObjects;

- (jboolean)impliesWithJavaSecurityCodeSource:(JavaSecurityCodeSource *)cs;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCodeSource)

FOUNDATION_EXPORT void JavaSecurityCodeSource_init(JavaSecurityCodeSource *self);

FOUNDATION_EXPORT JavaSecurityCodeSource *new_JavaSecurityCodeSource_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCodeSource)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSecurityCodeSource_INCLUDE_ALL")