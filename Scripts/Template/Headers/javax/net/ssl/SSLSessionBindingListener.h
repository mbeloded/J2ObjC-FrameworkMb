//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/SSLSessionBindingListener.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaxNetSslSSLSessionBindingListener_INCLUDE_ALL")
#ifdef JavaxNetSslSSLSessionBindingListener_RESTRICT
#define JavaxNetSslSSLSessionBindingListener_INCLUDE_ALL 0
#else
#define JavaxNetSslSSLSessionBindingListener_INCLUDE_ALL 1
#endif
#undef JavaxNetSslSSLSessionBindingListener_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxNetSslSSLSessionBindingListener_) && (JavaxNetSslSSLSessionBindingListener_INCLUDE_ALL || defined(JavaxNetSslSSLSessionBindingListener_INCLUDE))
#define JavaxNetSslSSLSessionBindingListener_

#define JavaUtilEventListener_RESTRICT 1
#define JavaUtilEventListener_INCLUDE 1
#include "../../../java/util/EventListener.h"

@class JavaxNetSslSSLSessionBindingEvent;

/*!
 @brief The interface to be implemented by any object that requires notification when
 data objects are bound to (or unbound from) an <code>SSLSession</code>.
 */
@protocol JavaxNetSslSSLSessionBindingListener < JavaUtilEventListener, NSObject, JavaObject >

/*!
 @brief Notifies this listener when a value is bound to an <code>SSLSession</code>.
 @param event
 the event data.
 */
- (void)valueBoundWithJavaxNetSslSSLSessionBindingEvent:(JavaxNetSslSSLSessionBindingEvent *)event;

/*!
 @brief Notifies this listener when a value is unbound from an <code>SSLSession</code>.
 @param event
 the event data.
 */
- (void)valueUnboundWithJavaxNetSslSSLSessionBindingEvent:(JavaxNetSslSSLSessionBindingEvent *)event;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLSessionBindingListener)

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLSessionBindingListener)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaxNetSslSSLSessionBindingListener_INCLUDE_ALL")