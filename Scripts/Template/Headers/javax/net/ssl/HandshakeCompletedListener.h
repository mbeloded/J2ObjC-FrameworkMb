//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/HandshakeCompletedListener.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaxNetSslHandshakeCompletedListener_INCLUDE_ALL")
#ifdef JavaxNetSslHandshakeCompletedListener_RESTRICT
#define JavaxNetSslHandshakeCompletedListener_INCLUDE_ALL 0
#else
#define JavaxNetSslHandshakeCompletedListener_INCLUDE_ALL 1
#endif
#undef JavaxNetSslHandshakeCompletedListener_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxNetSslHandshakeCompletedListener_) && (JavaxNetSslHandshakeCompletedListener_INCLUDE_ALL || defined(JavaxNetSslHandshakeCompletedListener_INCLUDE))
#define JavaxNetSslHandshakeCompletedListener_

#define JavaUtilEventListener_RESTRICT 1
#define JavaUtilEventListener_INCLUDE 1
#include "../../../java/util/EventListener.h"

@class JavaxNetSslHandshakeCompletedEvent;

/*!
 @brief The listener to be implemented to receive event notifications on completion
 of SSL handshake on an SSL connection.
 */
@protocol JavaxNetSslHandshakeCompletedListener < JavaUtilEventListener, NSObject, JavaObject >

/*!
 @brief The callback method that is invoked when a SSL handshake is completed.
 @param event
 the information on the completed SSL handshake event.
 */
- (void)handshakeCompletedWithJavaxNetSslHandshakeCompletedEvent:(JavaxNetSslHandshakeCompletedEvent *)event;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslHandshakeCompletedListener)

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslHandshakeCompletedListener)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaxNetSslHandshakeCompletedListener_INCLUDE_ALL")