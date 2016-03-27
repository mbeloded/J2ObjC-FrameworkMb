//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/interfaces/RSAPublicKey.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaSecurityInterfacesRSAPublicKey_INCLUDE_ALL")
#ifdef JavaSecurityInterfacesRSAPublicKey_RESTRICT
#define JavaSecurityInterfacesRSAPublicKey_INCLUDE_ALL 0
#else
#define JavaSecurityInterfacesRSAPublicKey_INCLUDE_ALL 1
#endif
#undef JavaSecurityInterfacesRSAPublicKey_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityInterfacesRSAPublicKey_) && (JavaSecurityInterfacesRSAPublicKey_INCLUDE_ALL || defined(JavaSecurityInterfacesRSAPublicKey_INCLUDE))
#define JavaSecurityInterfacesRSAPublicKey_

#define JavaSecurityPublicKey_RESTRICT 1
#define JavaSecurityPublicKey_INCLUDE 1
#include "../../../java/security/PublicKey.h"

#define JavaSecurityInterfacesRSAKey_RESTRICT 1
#define JavaSecurityInterfacesRSAKey_INCLUDE 1
#include "../../../java/security/interfaces/RSAKey.h"

@class JavaMathBigInteger;

/*!
 @brief The interface for a PKCS#1 RSA public key.
 */
@protocol JavaSecurityInterfacesRSAPublicKey < JavaSecurityPublicKey, JavaSecurityInterfacesRSAKey, NSObject, JavaObject >

/*!
 @brief Returns the public exponent <code>e</code>.
 @return the public exponent <code>e</code>.
 */
- (JavaMathBigInteger *)getPublicExponent;

@end

@interface JavaSecurityInterfacesRSAPublicKey : NSObject

+ (jlong)serialVersionUID;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInterfacesRSAPublicKey)

/*!
 @brief The serial version identifier.
 */
inline jlong JavaSecurityInterfacesRSAPublicKey_get_serialVersionUID();
#define JavaSecurityInterfacesRSAPublicKey_serialVersionUID -8727434096241101194LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaSecurityInterfacesRSAPublicKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInterfacesRSAPublicKey)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSecurityInterfacesRSAPublicKey_INCLUDE_ALL")