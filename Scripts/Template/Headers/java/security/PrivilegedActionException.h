//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/PrivilegedActionException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaSecurityPrivilegedActionException_INCLUDE_ALL")
#ifdef JavaSecurityPrivilegedActionException_RESTRICT
#define JavaSecurityPrivilegedActionException_INCLUDE_ALL 0
#else
#define JavaSecurityPrivilegedActionException_INCLUDE_ALL 1
#endif
#undef JavaSecurityPrivilegedActionException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityPrivilegedActionException_) && (JavaSecurityPrivilegedActionException_INCLUDE_ALL || defined(JavaSecurityPrivilegedActionException_INCLUDE))
#define JavaSecurityPrivilegedActionException_

#define JavaLangException_RESTRICT 1
#define JavaLangException_INCLUDE 1
#include "../../java/lang/Exception.h"

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaSecurityPrivilegedActionException : JavaLangException

#pragma mark Public

- (instancetype)initWithJavaLangException:(JavaLangException *)ex;

- (JavaLangException *)getException;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityPrivilegedActionException)

FOUNDATION_EXPORT void JavaSecurityPrivilegedActionException_initWithJavaLangException_(JavaSecurityPrivilegedActionException *self, JavaLangException *ex);

FOUNDATION_EXPORT JavaSecurityPrivilegedActionException *new_JavaSecurityPrivilegedActionException_initWithJavaLangException_(JavaLangException *ex) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityPrivilegedActionException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSecurityPrivilegedActionException_INCLUDE_ALL")