//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/KeyPairGenerator.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaSecurityKeyPairGenerator_INCLUDE_ALL")
#ifdef JavaSecurityKeyPairGenerator_RESTRICT
#define JavaSecurityKeyPairGenerator_INCLUDE_ALL 0
#else
#define JavaSecurityKeyPairGenerator_INCLUDE_ALL 1
#endif
#undef JavaSecurityKeyPairGenerator_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityKeyPairGenerator_) && (JavaSecurityKeyPairGenerator_INCLUDE_ALL || defined(JavaSecurityKeyPairGenerator_INCLUDE))
#define JavaSecurityKeyPairGenerator_

#define JavaSecurityKeyPairGeneratorSpi_RESTRICT 1
#define JavaSecurityKeyPairGeneratorSpi_INCLUDE 1
#include "../../java/security/KeyPairGeneratorSpi.h"

@class JavaSecurityKeyPair;
@class JavaSecurityProvider;
@class JavaSecuritySecureRandom;
@protocol JavaSecuritySpecAlgorithmParameterSpec;

/*!
 @brief <code>KeyPairGenerator</code> is an engine class which is capable of generating a
 private key and its related public key utilizing the algorithm it was
 initialized with.
 - seealso: KeyPairGeneratorSpi
 */
@interface JavaSecurityKeyPairGenerator : JavaSecurityKeyPairGeneratorSpi

#pragma mark Public

/*!
 @brief Computes and returns a new unique <code>KeyPair</code> each time this method
 is called.
 <p>
 This does exactly the same as <code>genKeyPair()</code>.
 @return a new unique <code>KeyPair</code> each time this method is called
 */
- (JavaSecurityKeyPair *)generateKeyPair;

/*!
 @brief Computes and returns a new unique <code>KeyPair</code> each time this method
 is called.
 <p>
 This does exactly the same as <code>generateKeyPair()</code>.
 @return a new unique <code>KeyPair</code> each time this method is called
 */
- (JavaSecurityKeyPair *)genKeyPair;

/*!
 @brief Returns the name of the algorithm of this <code>KeyPairGenerator</code>.
 @return the name of the algorithm of this <code>KeyPairGenerator</code>
 */
- (NSString *)getAlgorithm;

/*!
 @brief Returns a new instance of <code>KeyPairGenerator</code> that utilizes the
 specified algorithm.
 @param algorithm
 the name of the algorithm to use
 @return a new instance of <code>KeyPairGenerator</code> that utilizes the
 specified algorithm
 @throws NoSuchAlgorithmException if the specified algorithm is not available
 @throws NullPointerException
 if <code>algorithm</code> is <code>null</code>
 */
+ (JavaSecurityKeyPairGenerator *)getInstanceWithNSString:(NSString *)algorithm;

/*!
 @brief Returns a new instance of <code>KeyPairGenerator</code> that utilizes the
 specified algorithm from the specified provider.
 The <code>provider</code>
 supplied does not have to be registered.
 @param algorithm
 the name of the algorithm to use
 @param provider
 the provider
 @return a new instance of <code>KeyPairGenerator</code> that utilizes the
 specified algorithm from the specified provider
 @throws NoSuchAlgorithmException if the specified algorithm is not available
 @throws NullPointerException
 if <code>algorithm</code> is <code>null</code>
 @throws IllegalArgumentException if <code>provider == null</code>
 */
+ (JavaSecurityKeyPairGenerator *)getInstanceWithNSString:(NSString *)algorithm
                                 withJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Returns a new instance of <code>KeyPairGenerator</code> that utilizes the
 specified algorithm from the specified provider.
 @param algorithm
 the name of the algorithm to use
 @param provider
 the name of the provider
 @return a new instance of <code>KeyPairGenerator</code> that utilizes the
 specified algorithm from the specified provider
 @throws NoSuchAlgorithmException if the specified algorithm is not available
 @throws NoSuchProviderException if the specified provider is not available
 @throws NullPointerException
 if <code>algorithm</code> is <code>null</code>
 @throws IllegalArgumentException if <code>provider == null || provider.isEmpty()</code>
 */
+ (JavaSecurityKeyPairGenerator *)getInstanceWithNSString:(NSString *)algorithm
                                             withNSString:(NSString *)provider;

/*!
 @brief Returns the provider associated with this <code>KeyPairGenerator</code>.
 @return the provider associated with this <code>KeyPairGenerator</code>
 */
- (JavaSecurityProvider *)getProvider;

/*!
 @brief Initializes this <code>KeyPairGenerator</code> with the given <code>AlgorithmParameterSpec</code>
 .
 A default <code>SecureRandom</code> instance will be
 used.
 @param param
 the parameters to use
 @throws InvalidAlgorithmParameterException
 if the specified parameters are not supported
 */
- (void)initialize__WithJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)param OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes this <code>KeyPairGenerator</code> with the given <code>AlgorithmParameterSpec</code>
  and the given <code>SecureRandom</code>.
 @param param
 the parameters to use
 @param random
 the source of randomness
 @throws InvalidAlgorithmParameterException
 if the specified parameters are not supported
 */
- (void)initialize__WithJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)param
                                  withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes this <code>KeyPairGenerator</code> with the given key size.
 The
 default parameter set and a default <code>SecureRandom</code> instance will be
 used.
 @param keysize
 the size of the key (number of bits)
 */
- (void)initialize__WithInt:(jint)keysize OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes this <code>KeyPairGenerator</code> with the given key size and the
 given <code>SecureRandom</code>.
 The default parameter set will be used.
 @param keysize
 the key size
 @param random
 the source of randomness
 */
- (void)initialize__WithInt:(jint)keysize
withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random OBJC_METHOD_FAMILY_NONE;

#pragma mark Protected

/*!
 @brief Constructs a new instance of <code>KeyPairGenerator</code> with the name of
 the algorithm to use.
 @param algorithm
 the name of algorithm to use
 */
- (instancetype)initWithNSString:(NSString *)algorithm;

@end

J2OBJC_STATIC_INIT(JavaSecurityKeyPairGenerator)

FOUNDATION_EXPORT void JavaSecurityKeyPairGenerator_initWithNSString_(JavaSecurityKeyPairGenerator *self, NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityKeyPairGenerator *JavaSecurityKeyPairGenerator_getInstanceWithNSString_(NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityKeyPairGenerator *JavaSecurityKeyPairGenerator_getInstanceWithNSString_withNSString_(NSString *algorithm, NSString *provider);

FOUNDATION_EXPORT JavaSecurityKeyPairGenerator *JavaSecurityKeyPairGenerator_getInstanceWithNSString_withJavaSecurityProvider_(NSString *algorithm, JavaSecurityProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityKeyPairGenerator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSecurityKeyPairGenerator_INCLUDE_ALL")
