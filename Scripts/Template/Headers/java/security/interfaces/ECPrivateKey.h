//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/interfaces/ECPrivateKey.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaSecurityInterfacesECPrivateKey_INCLUDE_ALL")
#ifdef JavaSecurityInterfacesECPrivateKey_RESTRICT
#define JavaSecurityInterfacesECPrivateKey_INCLUDE_ALL 0
#else
#define JavaSecurityInterfacesECPrivateKey_INCLUDE_ALL 1
#endif
#undef JavaSecurityInterfacesECPrivateKey_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityInterfacesECPrivateKey_) && (JavaSecurityInterfacesECPrivateKey_INCLUDE_ALL || defined(JavaSecurityInterfacesECPrivateKey_INCLUDE))
#define JavaSecurityInterfacesECPrivateKey_

#define JavaSecurityPrivateKey_RESTRICT 1
#define JavaSecurityPrivateKey_INCLUDE 1
#include "../../../java/security/PrivateKey.h"

#define JavaSecurityInterfacesECKey_RESTRICT 1
#define JavaSecurityInterfacesECKey_INCLUDE 1
#include "../../../java/security/interfaces/ECKey.h"

@class JavaMathBigInteger;

/*!
 @brief The interface for an Elliptic Curve (EC) private key.
 */
@protocol JavaSecurityInterfacesECPrivateKey < JavaSecurityPrivateKey, JavaSecurityInterfacesECKey, NSObject, JavaObject >

/*!
 @brief Returns the private value <code>S</code>.
 @return the private value <code>S</code>.
 */
- (JavaMathBigInteger *)getS;

@end

@interface JavaSecurityInterfacesECPrivateKey : NSObject

+ (jlong)serialVersionUID;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInterfacesECPrivateKey)

/*!
 @brief The serial version identifier.
 */
inline jlong JavaSecurityInterfacesECPrivateKey_get_serialVersionUID();
#define JavaSecurityInterfacesECPrivateKey_serialVersionUID -7896394956925609184LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaSecurityInterfacesECPrivateKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInterfacesECPrivateKey)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSecurityInterfacesECPrivateKey_INCLUDE_ALL")