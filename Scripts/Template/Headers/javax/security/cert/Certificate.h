//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/security/cert/Certificate.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaxSecurityCertCertificate_INCLUDE_ALL")
#ifdef JavaxSecurityCertCertificate_RESTRICT
#define JavaxSecurityCertCertificate_INCLUDE_ALL 0
#else
#define JavaxSecurityCertCertificate_INCLUDE_ALL 1
#endif
#undef JavaxSecurityCertCertificate_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxSecurityCertCertificate_) && (JavaxSecurityCertCertificate_INCLUDE_ALL || defined(JavaxSecurityCertCertificate_INCLUDE))
#define JavaxSecurityCertCertificate_

@class IOSByteArray;
@protocol JavaSecurityPublicKey;

/*!
 @brief Abstract class to represent identity certificates.
 It represents a way to
 verify the binding of a Principal and its public key. Examples are X.509,
 PGP, and SDSI.
 <p>
 Note: This package is provided only for compatibility reasons.
 It contains a simplified version of the java.security.cert package that was
 previously used by JSSE (Java SSL package). All applications that do not have
 to be compatible with older versions of JSSE (that is before Java SDK 1.5)
 should only use java.security.cert.
 */
@interface JavaxSecurityCertCertificate : NSObject

#pragma mark Public

/*!
 @brief Creates a new <code>Certificate</code>.
 */
- (instancetype)init;

/*!
 @brief Compares the argument to this Certificate.
 If both have the same bytes
 they are assumed to be equal.
 @param obj
 the <code>Certificate</code> to compare with this object
 @return <code>true</code> if <code>obj</code> is the same as this
 <code>Certificate</code>, <code>false</code> otherwise
 - seealso: #hashCode
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the encoded representation for this certificate.
 @return the encoded representation for this certificate.
 @throws CertificateEncodingException
 if encoding fails.
 */
- (IOSByteArray *)getEncoded;

/*!
 @brief Returns the public key corresponding to this certificate.
 @return the public key corresponding to this certificate.
 */
- (id<JavaSecurityPublicKey>)getPublicKey;

/*!
 @brief Returns an integer hash code for the receiver.
 Any two objects which
 return <code>true</code> when passed to <code>equals</code> must answer
 the same value for this method.
 @return the receiver's hash
 - seealso: #equals
 */
- (NSUInteger)hash;

/*!
 @brief Returns a string containing a concise, human-readable description of the
 receiver.
 @return a printable representation for the receiver.
 */
- (NSString *)description;

/*!
 @brief Verifies that this certificate was signed with the given public key.
 @param key
 public key for which verification should be performed.
 @throws CertificateException
 if encoding errors are detected
 @throws NoSuchAlgorithmException
 if an unsupported algorithm is detected
 @throws InvalidKeyException
 if an invalid key is detected
 @throws NoSuchProviderException
 if there is no default provider
 @throws SignatureException
 if signature errors are detected
 */
- (void)verifyWithJavaSecurityPublicKey:(id<JavaSecurityPublicKey>)key;

/*!
 @brief Verifies that this certificate was signed with the given public key.
 Uses
 the signature algorithm given by the provider.
 @param key
 public key for which verification should be performed.
 @param sigProvider
 the name of the signature provider.
 @throws CertificateException
 if encoding errors are detected
 @throws NoSuchAlgorithmException
 if an unsupported algorithm is detected
 @throws InvalidKeyException
 if an invalid key is detected
 @throws NoSuchProviderException
 if the specified provider does not exists.
 @throws SignatureException
 if signature errors are detected
 */
- (void)verifyWithJavaSecurityPublicKey:(id<JavaSecurityPublicKey>)key
                           withNSString:(NSString *)sigProvider;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityCertCertificate)

FOUNDATION_EXPORT void JavaxSecurityCertCertificate_init(JavaxSecurityCertCertificate *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityCertCertificate)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaxSecurityCertCertificate_INCLUDE_ALL")
