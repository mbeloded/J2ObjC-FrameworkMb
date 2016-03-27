//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/SSLEngine.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaxNetSslSSLEngine_INCLUDE_ALL")
#ifdef JavaxNetSslSSLEngine_RESTRICT
#define JavaxNetSslSSLEngine_INCLUDE_ALL 0
#else
#define JavaxNetSslSSLEngine_INCLUDE_ALL 1
#endif
#undef JavaxNetSslSSLEngine_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxNetSslSSLEngine_) && (JavaxNetSslSSLEngine_INCLUDE_ALL || defined(JavaxNetSslSSLEngine_INCLUDE))
#define JavaxNetSslSSLEngine_

@class IOSObjectArray;
@class JavaNioByteBuffer;
@class JavaxNetSslSSLEngineResult;
@class JavaxNetSslSSLEngineResult_HandshakeStatus;
@class JavaxNetSslSSLParameters;
@protocol JavaLangRunnable;
@protocol JavaxNetSslSSLSession;

/*!
 @brief The abstract implementation of secure communications using SSL, TLS, or other
 protocols.
 It includes the setup, handshake, and encrypt/decrypt
 functionality needed to create a secure connection.
 <h3>Default configuration</h3>
 <p><code>SSLEngine</code> instances obtained from default <code>SSLContext</code> are configured as
 follows:
 <h4>Protocols</h4>
 <table>
 <thead>
 <tr>
 <th>Protocol</th>
 <th>Supported (API Levels)</th>
 <th>Enabled by default (API Levels)</th>
 </tr>
 </thead>
 <tbody>
 <tr>
 <td>SSLv3</td>
 <td>1+</td>
 <td>1+</td>
 </tr>
 <tr>
 <td>TLSv1</td>
 <td>1+</td>
 <td>1+</td>
 </tr>
 <tr>
 <td>TLSv1.1</td>
 <td>20+</td>
 <td>20+</td>
 </tr>
 <tr>
 <td>TLSv1.2</td>
 <td>20+</td>
 <td>20+</td>
 </tr>
 </tbody>
 </table>
 <h4>Cipher suites</h4>
 <!-- STOPSHIP: Update this table to reflect the removal of DSS cipher suites. -->
 <table>
 <thead>
 <tr>
 <th>Cipher suite</th>
 <th>Supported (API Levels)</th>
 <th>Enabled by default (API Levels)</th>
 </tr>
 </thead>
 <tbody>
 <tr>
 <td>SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA</td>
 <td>9+</td>
 <td>9-19</td>
 </tr>
 <tr>
 <td>SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA</td>
 <td>9+</td>
 <td>9-19</td>
 </tr>
 <tr>
 <td>SSL_DHE_DSS_WITH_DES_CBC_SHA</td>
 <td>9+</td>
 <td>9-19</td>
 </tr>
 <tr>
 <td>SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA</td>
 <td>9+</td>
 <td>9-19</td>
 </tr>
 <tr>
 <td>SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA</td>
 <td>9+</td>
 <td>9-19</td>
 </tr>
 <tr>
 <td>SSL_DHE_RSA_WITH_DES_CBC_SHA</td>
 <td>9+</td>
 <td>9-19</td>
 </tr>
 <tr>
 <td>SSL_DH_anon_EXPORT_WITH_DES40_CBC_SHA</td>
 <td>9+</td>
 <td></td>
 </tr>
 <tr>
 <td>SSL_DH_anon_EXPORT_WITH_RC4_40_MD5</td>
 <td>9+</td>
 <td></td>
 </tr>
 <tr>
 <td>SSL_DH_anon_WITH_3DES_EDE_CBC_SHA</td>
 <td>9+</td>
 <td></td>
 </tr>
 <tr>
 <td>SSL_DH_anon_WITH_DES_CBC_SHA</td>
 <td>9+</td>
 <td></td>
 </tr>
 <tr>
 <td>SSL_DH_anon_WITH_RC4_128_MD5</td>
 <td>9+</td>
 <td></td>
 </tr>
 <tr>
 <td>SSL_RSA_EXPORT_WITH_DES40_CBC_SHA</td>
 <td>9+</td>
 <td>9-19</td>
 </tr>
 <tr>
 <td>SSL_RSA_EXPORT_WITH_RC4_40_MD5</td>
 <td>9+</td>
 <td>9-19</td>
 </tr>
 <tr>
 <td>SSL_RSA_WITH_3DES_EDE_CBC_SHA</td>
 <td>9+</td>
 <td>9-19</td>
 </tr>
 <tr>
 <td>SSL_RSA_WITH_DES_CBC_SHA</td>
 <td>9+</td>
 <td>9-19</td>
 </tr>
 <tr>
 <td>SSL_RSA_WITH_NULL_MD5</td>
 <td>9+</td>
 <td></td>
 </tr>
 <tr>
 <td>SSL_RSA_WITH_NULL_SHA</td>
 <td>9+</td>
 <td></td>
 </tr>
 <tr>
 <td>SSL_RSA_WITH_RC4_128_MD5</td>
 <td>9+</td>
 <td>9-19</td>
 </tr>
 <tr>
 <td>SSL_RSA_WITH_RC4_128_SHA</td>
 <td>9+</td>
 <td>9+</td>
 </tr>
 <tr>
 <td>TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA</td>
 <td>1-8</td>
 <td>1-8</td>
 </tr>
 <tr>
 <td>TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA</td>
 <td>1-8</td>
 <td>1-8</td>
 </tr>
 <tr>
 <td>TLS_DHE_DSS_WITH_AES_128_CBC_SHA</td>
 <td>9+</td>
 <td>9+</td>
 </tr>
 <tr>
 <td>TLS_DHE_DSS_WITH_AES_128_CBC_SHA256</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_DHE_DSS_WITH_AES_128_GCM_SHA256</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_DHE_DSS_WITH_AES_256_CBC_SHA</td>
 <td>9+</td>
 <td>20+</td>
 </tr>
 <tr>
 <td>TLS_DHE_DSS_WITH_AES_256_CBC_SHA256</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_DHE_DSS_WITH_AES_256_GCM_SHA384</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_DHE_DSS_WITH_DES_CBC_SHA</td>
 <td>1-8</td>
 <td>1-8</td>
 </tr>
 <tr>
 <td>TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA</td>
 <td>1-8</td>
 <td>1-8</td>
 </tr>
 <tr>
 <td>TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA</td>
 <td>1-8</td>
 <td>1-8</td>
 </tr>
 <tr>
 <td>TLS_DHE_RSA_WITH_AES_128_CBC_SHA</td>
 <td>9+</td>
 <td>9+</td>
 </tr>
 <tr>
 <td>TLS_DHE_RSA_WITH_AES_128_CBC_SHA256</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_DHE_RSA_WITH_AES_128_GCM_SHA256</td>
 <td>20+</td>
 <td>20+</td>
 </tr>
 <tr>
 <td>TLS_DHE_RSA_WITH_AES_256_CBC_SHA</td>
 <td>9+</td>
 <td>20+</td>
 </tr>
 <tr>
 <td>TLS_DHE_RSA_WITH_AES_256_CBC_SHA256</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_DHE_RSA_WITH_AES_256_GCM_SHA384</td>
 <td>20+</td>
 <td>20+</td>
 </tr>
 <tr>
 <td>TLS_DHE_RSA_WITH_DES_CBC_SHA</td>
 <td>1-8</td>
 <td>1-8</td>
 </tr>
 <tr>
 <td>TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA</td>
 <td>1-8</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA</td>
 <td>1-8</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_DH_DSS_WITH_DES_CBC_SHA</td>
 <td>1-8</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA</td>
 <td>1-8</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA</td>
 <td>1-8</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_DH_RSA_WITH_DES_CBC_SHA</td>
 <td>1-8</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA</td>
 <td>1-8</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_DH_anon_WITH_3DES_EDE_CBC_SHA</td>
 <td>1-8</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_DH_anon_WITH_AES_128_CBC_SHA</td>
 <td>9+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_DH_anon_WITH_AES_128_CBC_SHA256</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_DH_anon_WITH_AES_128_GCM_SHA256</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_DH_anon_WITH_AES_256_CBC_SHA</td>
 <td>9+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_DH_anon_WITH_AES_256_CBC_SHA256</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_DH_anon_WITH_AES_256_GCM_SHA384</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_DH_anon_WITH_DES_CBC_SHA</td>
 <td>1-8</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA</td>
 <td>20+</td>
 <td>20+</td>
 </tr>
 <tr>
 <td>TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256</td>
 <td>20+</td>
 <td>20+</td>
 </tr>
 <tr>
 <td>TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA</td>
 <td>20+</td>
 <td>20+</td>
 </tr>
 <tr>
 <td>TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384</td>
 <td>20+</td>
 <td>20+</td>
 </tr>
 <tr>
 <td>TLS_ECDHE_ECDSA_WITH_NULL_SHA</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDHE_ECDSA_WITH_RC4_128_SHA</td>
 <td>20+</td>
 <td>20+</td>
 </tr>
 <tr>
 <td>TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA</td>
 <td>20+</td>
 <td>20+</td>
 </tr>
 <tr>
 <td>TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256</td>
 <td>20+</td>
 <td>20+</td>
 </tr>
 <tr>
 <td>TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA</td>
 <td>20+</td>
 <td>20+</td>
 </tr>
 <tr>
 <td>TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384</td>
 <td>20+</td>
 <td>20+</td>
 </tr>
 <tr>
 <td>TLS_ECDHE_RSA_WITH_NULL_SHA</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDHE_RSA_WITH_RC4_128_SHA</td>
 <td>20+</td>
 <td>20+</td>
 </tr>
 <tr>
 <td>TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_ECDSA_WITH_NULL_SHA</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_ECDSA_WITH_RC4_128_SHA</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_RSA_WITH_AES_128_CBC_SHA</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_RSA_WITH_AES_256_CBC_SHA</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_RSA_WITH_NULL_SHA</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_RSA_WITH_RC4_128_SHA</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_anon_WITH_AES_128_CBC_SHA</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_anon_WITH_AES_256_CBC_SHA</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_anon_WITH_NULL_SHA</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDH_anon_WITH_RC4_128_SHA</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_EMPTY_RENEGOTIATION_INFO_SCSV</td>
 <td>20+</td>
 <td>20+</td>
 </tr>
 <tr>
 <td>TLS_FALLBACK_SCSV</td>
 <td>21+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA</td>
 <td>21+</td>
 <td>21+</td>
 </tr>
 <tr>
 <td>TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA</td>
 <td>21+</td>
 <td>21+</td>
 </tr>
 <tr>
 <td>TLS_NULL_WITH_NULL_NULL</td>
 <td>1-8</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_PSK_WITH_3DES_EDE_CBC_SHA</td>
 <td>21+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_PSK_WITH_AES_128_CBC_SHA</td>
 <td>21+</td>
 <td>21+</td>
 </tr>
 <tr>
 <td>TLS_PSK_WITH_AES_256_CBC_SHA</td>
 <td>21+</td>
 <td>21+</td>
 </tr>
 <tr>
 <td>TLS_PSK_WITH_RC4_128_SHA</td>
 <td>21+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_RSA_EXPORT_WITH_DES40_CBC_SHA</td>
 <td>1-8</td>
 <td>1-8</td>
 </tr>
 <tr>
 <td>TLS_RSA_WITH_3DES_EDE_CBC_SHA</td>
 <td>1-8</td>
 <td>1-8</td>
 </tr>
 <tr>
 <td>TLS_RSA_WITH_AES_128_CBC_SHA</td>
 <td>9+</td>
 <td>9+</td>
 </tr>
 <tr>
 <td>TLS_RSA_WITH_AES_128_CBC_SHA256</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_RSA_WITH_AES_128_GCM_SHA256</td>
 <td>20+</td>
 <td>20+</td>
 </tr>
 <tr>
 <td>TLS_RSA_WITH_AES_256_CBC_SHA</td>
 <td>9+</td>
 <td>20+</td>
 </tr>
 <tr>
 <td>TLS_RSA_WITH_AES_256_CBC_SHA256</td>
 <td>20+</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_RSA_WITH_AES_256_GCM_SHA384</td>
 <td>20+</td>
 <td>20+</td>
 </tr>
 <tr>
 <td>TLS_RSA_WITH_DES_CBC_SHA</td>
 <td>1-8</td>
 <td>1-8</td>
 </tr>
 <tr>
 <td>TLS_RSA_WITH_NULL_MD5</td>
 <td>1-8</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_RSA_WITH_NULL_SHA</td>
 <td>1-8</td>
 <td></td>
 </tr>
 <tr>
 <td>TLS_RSA_WITH_NULL_SHA256</td>
 <td>20+</td>
 <td></td>
 </tr>
 </tbody>
 </table>
 <p><em>NOTE</em>: PSK cipher suites are enabled by default only if the <code>SSLContext</code> through
 which the engine was created has been initialized with a <code>PSKKeyManager</code>.
 @since 1.5
 */
@interface JavaxNetSslSSLEngine : NSObject

#pragma mark Public

/*!
 @brief Initiates a handshake on this engine.
 <p>
 Calling this method is not needed for the initial handshake: it will be
 called by <code>wrap</code> or <code>unwrap</code> if the initial handshake has not
 been started yet.
 @throws SSLException
 if starting the handshake fails.
 @throws IllegalStateException
 if the engine does not have all the needed settings (e.g.
 client/server mode not set).
 */
- (void)beginHandshake;

/*!
 @brief Notifies this engine instance that no more inbound network data will be
 sent to this engine.
 @throws SSLException
 if this engine did not receive a needed protocol specific
 close notification message from the peer.
 */
- (void)closeInbound;

/*!
 @brief Notifies this engine instance that no more outbound application data will
 be sent to this engine.
 */
- (void)closeOutbound;

/*!
 @brief Returns a delegate task for this engine instance.
 Some engine operations
 may require the results of blocking or long running operations, and the
 <code>SSLEngineResult</code> instances returned by this engine may indicate
 that a delegated task result is needed. In this case the
 <code>run</code> method of the returned <code>Runnable</code>
 delegated task must be called.
 @return a delegate task, or <code>null</code> if none are available.
 */
- (id<JavaLangRunnable>)getDelegatedTask;

/*!
 @brief Returns the SSL cipher suite names that are enabled in this engine
 instance.
 @return the SSL cipher suite names that are enabled in this engine
 instance.
 */
- (IOSObjectArray *)getEnabledCipherSuites;

/*!
 @brief Returns the protocol version names that are enabled in this engine
 instance.
 @return the protocol version names that are enabled in this engine
 instance.
 */
- (IOSObjectArray *)getEnabledProtocols;

/*!
 @brief Returns whether new SSL sessions may be established by this engine.
 @return <code>true</code> if new session may be established, <code>false</code> if
 existing sessions must be reused.
 */
- (jboolean)getEnableSessionCreation;

/*!
 @brief Returns the status of the handshake of this engine instance.
 @return the status of the handshake of this engine instance.
 */
- (JavaxNetSslSSLEngineResult_HandshakeStatus *)getHandshakeStatus;

/*!
 @brief Returns whether this engine instance will require client authentication.
 @return <code>true</code> if this engine will require client authentication,
 <code>false</code> if no client authentication is needed.
 */
- (jboolean)getNeedClientAuth;

/*!
 @brief Returns the name of the peer host.
 @return the name of the peer host, or <code>null</code> if none is available.
 */
- (NSString *)getPeerHost;

/*!
 @brief Returns the port number of the peer host.
 @return the port number of the peer host, or <code>-1</code> is none is
 available.
 */
- (jint)getPeerPort;

/*!
 @brief Returns the SSL session for this engine instance.
 @return the SSL session for this engine instance.
 */
- (id<JavaxNetSslSSLSession>)getSession;

/*!
 @brief Returns a new SSLParameters based on this SSLSocket's current
 cipher suites, protocols, and client authentication settings.
 @since 1.6
 */
- (JavaxNetSslSSLParameters *)getSSLParameters;

/*!
 @brief Returns the SSL cipher suite names that are supported by this engine.
 These cipher suites can be enabled using
 <code>setEnabledCipherSuites(String[])</code>.
 @return the SSL cipher suite names that are supported by this engine.
 */
- (IOSObjectArray *)getSupportedCipherSuites;

/*!
 @brief Returns the protocol names that are supported by this engine.
 These
 protocols can be enables using <code>setEnabledProtocols(String[])</code>.
 @return the protocol names that are supported by this engine.
 */
- (IOSObjectArray *)getSupportedProtocols;

/*!
 @brief Returns whether this engine is set to act in client mode when
 handshaking.
 @return <code>true</code> if the engine is set to do handshaking in client
 mode.
 */
- (jboolean)getUseClientMode;

/*!
 @brief Returns whether this engine will request client authentication.
 @return <code>true</code> if client authentication will be requested,
 <code>false</code> otherwise.
 */
- (jboolean)getWantClientAuth;

/*!
 @brief Returns whether no more inbound data will be accepted by this engine.
 @return <code>true</code> if no more inbound data will be accepted by this
 engine, <code>false</code> otherwise.
 */
- (jboolean)isInboundDone;

/*!
 @brief Returns whether no more outbound data will be produced by this engine.
 @return <code>true</code> if no more outbound data will be producted by this
 engine, <code>otherwise</code> false.
 */
- (jboolean)isOutboundDone;

/*!
 @brief Sets the SSL cipher suite names that should be enabled in this engine
 instance.
 Only cipher suites listed by <code>getSupportedCipherSuites()</code>
 are allowed.
 @param suites
 the SSL cipher suite names to be enabled.
 @throws IllegalArgumentException
 if one of the specified cipher suites is not supported, or if
 <code>suites</code> is <code>null</code>.
 */
- (void)setEnabledCipherSuitesWithNSStringArray:(IOSObjectArray *)suites;

/*!
 @brief Sets the protocol version names that should be enabled in this engine
 instance.
 Only protocols listed by <code>getSupportedProtocols()</code> are
 allowed.
 @param protocols
 the protocol version names to be enabled.
 @throws IllegalArgumentException
 if one of the protocol version names is not supported, or if
 <code>protocols</code> is <code>null</code>.
 */
- (void)setEnabledProtocolsWithNSStringArray:(IOSObjectArray *)protocols;

/*!
 @brief Sets whether new SSL sessions may be established by this engine instance.
 @param flag
 <code>true</code> if new SSL sessions may be established,
 <code>false</code> if existing SSL sessions must be reused.
 */
- (void)setEnableSessionCreationWithBoolean:(jboolean)flag;

/*!
 @brief Sets whether this engine must require client authentication.
 The client
 authentication is one of:
 <ul>
 <li>authentication required</li>
 <li>authentication requested</li>
 <li>no authentication needed</li>
 </ul>
 This method overrides the setting of <code>setWantClientAuth(boolean)</code>.
 @param need
 <code>true</code> if client authentication is required,
 <code>false</code> if no authentication is needed.
 */
- (void)setNeedClientAuthWithBoolean:(jboolean)need;

/*!
 @brief Sets various SSL handshake parameters based on the SSLParameter
 argument.
 Specifically, sets the SSLEngine's enabled cipher
 suites if the parameter's cipher suites are non-null. Similarly
 sets the enabled protocols. If the parameters specify the want
 or need for client authentication, those requirements are set
 on the SSLEngine, otherwise both are set to false.
 @since 1.6
 */
- (void)setSSLParametersWithJavaxNetSslSSLParameters:(JavaxNetSslSSLParameters *)p;

/*!
 @brief Sets whether this engine should act in client (or server) mode when
 handshaking.
 @param mode
 <code>true</code> if this engine should act in client mode,
 <code>false</code> if not.
 @throws IllegalArgumentException
 if this method is called after starting the initial
 handshake.
 */
- (void)setUseClientModeWithBoolean:(jboolean)mode;

/*!
 @brief Sets whether this engine should request client authentication.
 The client
 authentication is one of the following:
 <ul>
 <li>authentication required</li>
 <li>authentication requested</li>
 <li>no authentication needed</li>
 </ul>
 This method overrides the setting of <code>setNeedClientAuth(boolean)</code>.
 @param want
 <code>true</code> if client authentication should be requested,
 <code>false</code> if no authentication is needed.
 */
- (void)setWantClientAuthWithBoolean:(jboolean)want;

/*!
 @brief Decodes the incoming network data buffer into the application data
 buffer.
 If a handshake has not been started yet, it will automatically be
 started.
 @param src
 the buffer with incoming network data
 @param dst
 the destination buffer for incoming application data.
 @return the result object of this operation.
 @throws SSLException
 if a problem occurred while processing the data.
 @throws java.nio.ReadOnlyBufferException
 if one of the destination buffers is read-only.
 @throws IllegalArgumentException
 if <code>src</code> or <code>dst</code> is <code>null</code>.
 @throws IllegalStateException
 if the engine does not have all the needed settings (e.g.
 client/server mode not set).
 */
- (JavaxNetSslSSLEngineResult *)unwrapWithJavaNioByteBuffer:(JavaNioByteBuffer *)src
                                      withJavaNioByteBuffer:(JavaNioByteBuffer *)dst;

/*!
 @brief Decodes the incoming network data buffer into the application data
 buffers.
 If a handshake has not been started yet, it will automatically
 be started.
 @param src
 the buffer with incoming network data
 @param dsts
 the array of destination buffers for incoming application
 data.
 @return the result object of this operation.
 @throws SSLException
 if a problem occurred while processing the data.
 @throws java.nio.ReadOnlyBufferException
 if one of the destination buffers is read-only.
 @throws IllegalArgumentException
 if <code>src</code> or <code>dsts</code> is <code>null</code>.
 @throws IllegalStateException
 if the engine does not have all the needed settings (e.g.
 client/server mode not set).
 */
- (JavaxNetSslSSLEngineResult *)unwrapWithJavaNioByteBuffer:(JavaNioByteBuffer *)src
                                 withJavaNioByteBufferArray:(IOSObjectArray *)dsts;

/*!
 @brief Decodes the incoming network data buffer into application data buffers.
 If a handshake has not been started yet, it will automatically be
 started.
 @param src
 the buffer with incoming network data
 @param dsts
 the array of destination buffers for incoming application
 data.
 @param offset
 the offset in the array of destination buffers to which data
 is to be transferred.
 @param length
 the maximum number of destination buffers to be used.
 @return the result object of this operation.
 @throws SSLException
 if a problem occurred while processing the data.
 @throws IndexOutOfBoundsException
 if <code>length</code> is greater than
 <code>dsts.length - offset</code>.
 @throws java.nio.ReadOnlyBufferException
 if one of the destination buffers is read-only.
 @throws IllegalArgumentException
 if <code>src</code>, <code>dsts</code>, or one of the entries in
 <code>dsts</code> is <code>null</code>.
 @throws IllegalStateException
 if the engine does not have all the needed settings (e.g.
 client/server mode not set).
 */
- (JavaxNetSslSSLEngineResult *)unwrapWithJavaNioByteBuffer:(JavaNioByteBuffer *)src
                                 withJavaNioByteBufferArray:(IOSObjectArray *)dsts
                                                    withInt:(jint)offset
                                                    withInt:(jint)length;

/*!
 @brief Encodes the outgoing application data buffer into the network data
 buffer.
 If a handshake has not been started yet, it will automatically be
 started.
 @param src
 the source buffers of outgoing application data.
 @param dst
 the destination buffer for network data.
 @return the result object of this operation.
 @throws SSLException
 if a problem occurred while processing the data.
 @throws java.nio.ReadOnlyBufferException
 if the destination buffer is readonly.
 @throws IllegalArgumentException
 if <code>src</code> or <code>dst</code> is <code>null</code>.
 @throws IllegalStateException
 if the engine does not have all the needed settings (e.g.
 client/server mode not set).
 */
- (JavaxNetSslSSLEngineResult *)wrapWithJavaNioByteBuffer:(JavaNioByteBuffer *)src
                                    withJavaNioByteBuffer:(JavaNioByteBuffer *)dst;

/*!
 @brief Encodes the outgoing application data buffers into the network data
 buffer.
 If a handshake has not been started yet, it will automatically be
 started.
 @param srcs
 the array of source buffers of outgoing application data.
 @param dst
 the destination buffer for network data.
 @return the result object of this operation.
 @throws SSLException
 if a problem occurred while processing the data.
 @throws java.nio.ReadOnlyBufferException
 if the destination buffer is readonly.
 @throws IllegalArgumentException
 if <code>srcs</code> or <code>dst</code> is <code>null</code>.
 @throws IllegalStateException
 if the engine does not have all the needed settings (e.g.
 client/server mode not set).
 */
- (JavaxNetSslSSLEngineResult *)wrapWithJavaNioByteBufferArray:(IOSObjectArray *)srcs
                                         withJavaNioByteBuffer:(JavaNioByteBuffer *)dst;

/*!
 @brief Encodes the outgoing application data buffers into the network data
 buffer.
 If a handshake has not been started yet, it will automatically be
 started.
 @param srcs
 the array of source buffers of outgoing application data.
 @param offset
 the offset in the array of source buffers from which data is
 to be retrieved.
 @param length
 the maximum number of source buffers to be used.
 @param dst
 the destination buffer for network data.
 @return the result object of this operation.
 @throws SSLException
 if a problem occurred while processing the data.
 @throws IndexOutOfBoundsException
 if <code>length</code> is greater than
 <code>srcs.length - offset</code>.
 @throws java.nio.ReadOnlyBufferException
 if the destination buffer is readonly.
 @throws IllegalArgumentException
 if <code>srcs</code>, <code>dst</code>, or one the entries in
 <code>srcs</code> is <code>null</code>.
 @throws IllegalStateException
 if the engine does not have all the needed settings (e.g.
 client/server mode not set).
 */
- (JavaxNetSslSSLEngineResult *)wrapWithJavaNioByteBufferArray:(IOSObjectArray *)srcs
                                                       withInt:(jint)offset
                                                       withInt:(jint)length
                                         withJavaNioByteBuffer:(JavaNioByteBuffer *)dst;

#pragma mark Protected

/*!
 @brief Creates a new <code>SSLEngine</code> instance.
 */
- (instancetype)init;

/*!
 @brief Creates a new <code>SSLEngine</code> instance with the specified host and
 port.
 @param host
 the name of the host.
 @param port
 the port of the host.
 */
- (instancetype)initWithNSString:(NSString *)host
                         withInt:(jint)port;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLEngine)

FOUNDATION_EXPORT void JavaxNetSslSSLEngine_init(JavaxNetSslSSLEngine *self);

FOUNDATION_EXPORT void JavaxNetSslSSLEngine_initWithNSString_withInt_(JavaxNetSslSSLEngine *self, NSString *host, jint port);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLEngine)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaxNetSslSSLEngine_INCLUDE_ALL")
