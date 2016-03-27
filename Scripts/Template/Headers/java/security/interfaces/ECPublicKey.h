//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/interfaces/ECPublicKey.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaSecurityInterfacesECPublicKey_INCLUDE_ALL")
#ifdef JavaSecurityInterfacesECPublicKey_RESTRICT
#define JavaSecurityInterfacesECPublicKey_INCLUDE_ALL 0
#else
#define JavaSecurityInterfacesECPublicKey_INCLUDE_ALL 1
#endif
#undef JavaSecurityInterfacesECPublicKey_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityInterfacesECPublicKey_) && (JavaSecurityInterfacesECPublicKey_INCLUDE_ALL || defined(JavaSecurityInterfacesECPublicKey_INCLUDE))
#define JavaSecurityInterfacesECPublicKey_

#define JavaSecurityPublicKey_RESTRICT 1
#define JavaSecurityPublicKey_INCLUDE 1
#include "../../../java/security/PublicKey.h"

#define JavaSecurityInterfacesECKey_RESTRICT 1
#define JavaSecurityInterfacesECKey_INCLUDE 1
#include "../../../java/security/interfaces/ECKey.h"

@class JavaSecuritySpecECPoint;

/*!
 @brief The interface for an Elliptic Curve (EC) public key.
 */
@protocol JavaSecurityInterfacesECPublicKey < JavaSecurityPublicKey, JavaSecurityInterfacesECKey, NSObject, JavaObject >

/*!
 @brief Returns the public point <code>W</code> on an elliptic curve (EC).
 @return the public point <code>W</code> on an elliptic curve (EC).
 */
- (JavaSecuritySpecECPoint *)getW;

@end

@interface JavaSecurityInterfacesECPublicKey : NSObject

+ (jlong)serialVersionUID;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInterfacesECPublicKey)

/*!
 @brief The serial version identifier.
 */
inline jlong JavaSecurityInterfacesECPublicKey_get_serialVersionUID();
#define JavaSecurityInterfacesECPublicKey_serialVersionUID -3314988629879632826LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaSecurityInterfacesECPublicKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInterfacesECPublicKey)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSecurityInterfacesECPublicKey_INCLUDE_ALL")
