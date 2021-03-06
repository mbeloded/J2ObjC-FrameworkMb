//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/interfaces/RSAPrivateCrtKey.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaSecurityInterfacesRSAPrivateCrtKey_INCLUDE_ALL")
#ifdef JavaSecurityInterfacesRSAPrivateCrtKey_RESTRICT
#define JavaSecurityInterfacesRSAPrivateCrtKey_INCLUDE_ALL 0
#else
#define JavaSecurityInterfacesRSAPrivateCrtKey_INCLUDE_ALL 1
#endif
#undef JavaSecurityInterfacesRSAPrivateCrtKey_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityInterfacesRSAPrivateCrtKey_) && (JavaSecurityInterfacesRSAPrivateCrtKey_INCLUDE_ALL || defined(JavaSecurityInterfacesRSAPrivateCrtKey_INCLUDE))
#define JavaSecurityInterfacesRSAPrivateCrtKey_

#define JavaSecurityInterfacesRSAPrivateKey_RESTRICT 1
#define JavaSecurityInterfacesRSAPrivateKey_INCLUDE 1
#include "../../../java/security/interfaces/RSAPrivateKey.h"

@class JavaMathBigInteger;

/*!
 @brief The interface for a PKCS#1 RSA private key using CRT information values.
 */
@protocol JavaSecurityInterfacesRSAPrivateCrtKey < JavaSecurityInterfacesRSAPrivateKey, NSObject, JavaObject >

/*!
 @brief Returns the CRT coefficient, <code>q^-1 mod p</code>.
 @return the CRT coefficient.
 */
- (JavaMathBigInteger *)getCrtCoefficient;

/*!
 @brief Returns the prime factor <code>p</code> of <code>n</code>.
 @return the prime factor <code>p</code> of <code>n</code>.
 */
- (JavaMathBigInteger *)getPrimeP;

/*!
 @brief Returns the prime factor <code>q</code> of <code>n</code>.
 @return the prime factor <code>q</code> of <code>n</code>.
 */
- (JavaMathBigInteger *)getPrimeQ;

/*!
 @brief Returns the CRT exponent of the primet <code>p</code>.
 @return the CRT exponent of the prime <code>p</code>.
 */
- (JavaMathBigInteger *)getPrimeExponentP;

/*!
 @brief Returns the CRT exponent of the prime <code>q</code>.
 @return the CRT exponent of the prime <code>q</code>.
 */
- (JavaMathBigInteger *)getPrimeExponentQ;

/*!
 @brief Returns the public exponent <code>e</code>.
 @return the public exponent <code>e</code>.
 */
- (JavaMathBigInteger *)getPublicExponent;

@end

@interface JavaSecurityInterfacesRSAPrivateCrtKey : NSObject

+ (jlong)serialVersionUID;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInterfacesRSAPrivateCrtKey)

/*!
 @brief The serial version identifier.
 */
inline jlong JavaSecurityInterfacesRSAPrivateCrtKey_get_serialVersionUID();
#define JavaSecurityInterfacesRSAPrivateCrtKey_serialVersionUID -5682214253527700368LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaSecurityInterfacesRSAPrivateCrtKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInterfacesRSAPrivateCrtKey)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSecurityInterfacesRSAPrivateCrtKey_INCLUDE_ALL")
