//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/SSLServerSocketFactory.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaxNetSslSSLServerSocketFactory_INCLUDE_ALL")
#ifdef JavaxNetSslSSLServerSocketFactory_RESTRICT
#define JavaxNetSslSSLServerSocketFactory_INCLUDE_ALL 0
#else
#define JavaxNetSslSSLServerSocketFactory_INCLUDE_ALL 1
#endif
#undef JavaxNetSslSSLServerSocketFactory_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxNetSslSSLServerSocketFactory_) && (JavaxNetSslSSLServerSocketFactory_INCLUDE_ALL || defined(JavaxNetSslSSLServerSocketFactory_INCLUDE))
#define JavaxNetSslSSLServerSocketFactory_

#define JavaxNetServerSocketFactory_RESTRICT 1
#define JavaxNetServerSocketFactory_INCLUDE 1
#include "../../../javax/net/ServerSocketFactory.h"

@class IOSObjectArray;

/*!
 @brief The factory for SSL server sockets.
 */
@interface JavaxNetSslSSLServerSocketFactory : JavaxNetServerSocketFactory

#pragma mark Public

/*!
 @brief Returns the default <code>SSLServerSocketFactory</code> instance.
 The default
 implementation is defined by the security property
 "ssl.ServerSocketFactory.provider".
 @return the default <code>SSLServerSocketFactory</code> instance.
 */
+ (JavaxNetServerSocketFactory *)getDefault;

/*!
 @brief Returns the names of the cipher suites that are enabled by default.
 @return the names of the cipher suites that are enabled by default
 */
- (IOSObjectArray *)getDefaultCipherSuites;

/*!
 @brief Returns the list of supported cipher suites that could be enabled for an
 SSL connection created by this factory.
 @return the list of supported cipher suites
 */
- (IOSObjectArray *)getSupportedCipherSuites;

#pragma mark Protected

/*!
 @brief Creates a new <code>SSLServerSocketFactory</code> instance.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLServerSocketFactory)

FOUNDATION_EXPORT JavaxNetServerSocketFactory *JavaxNetSslSSLServerSocketFactory_getDefault();

FOUNDATION_EXPORT void JavaxNetSslSSLServerSocketFactory_init(JavaxNetSslSSLServerSocketFactory *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLServerSocketFactory)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaxNetSslSSLServerSocketFactory_INCLUDE_ALL")