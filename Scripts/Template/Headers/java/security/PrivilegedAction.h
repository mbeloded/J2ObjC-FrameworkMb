//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/PrivilegedAction.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaSecurityPrivilegedAction_INCLUDE_ALL")
#ifdef JavaSecurityPrivilegedAction_RESTRICT
#define JavaSecurityPrivilegedAction_INCLUDE_ALL 0
#else
#define JavaSecurityPrivilegedAction_INCLUDE_ALL 1
#endif
#undef JavaSecurityPrivilegedAction_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityPrivilegedAction_) && (JavaSecurityPrivilegedAction_INCLUDE_ALL || defined(JavaSecurityPrivilegedAction_INCLUDE))
#define JavaSecurityPrivilegedAction_

/*!
 @brief Legacy security code; do not use.
 */
@protocol JavaSecurityPrivilegedAction < NSObject, JavaObject >

- (id)run;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityPrivilegedAction)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityPrivilegedAction)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSecurityPrivilegedAction_INCLUDE_ALL")
