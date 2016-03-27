//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/EventListenerProxy.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaUtilEventListenerProxy_INCLUDE_ALL")
#ifdef JavaUtilEventListenerProxy_RESTRICT
#define JavaUtilEventListenerProxy_INCLUDE_ALL 0
#else
#define JavaUtilEventListenerProxy_INCLUDE_ALL 1
#endif
#undef JavaUtilEventListenerProxy_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilEventListenerProxy_) && (JavaUtilEventListenerProxy_INCLUDE_ALL || defined(JavaUtilEventListenerProxy_INCLUDE))
#define JavaUtilEventListenerProxy_

#define JavaUtilEventListener_RESTRICT 1
#define JavaUtilEventListener_INCLUDE 1
#include "../../java/util/EventListener.h"

/*!
 @brief This abstract class provides a simple wrapper for objects of type <code>EventListener</code>.
 */
@interface JavaUtilEventListenerProxy : NSObject < JavaUtilEventListener >

#pragma mark Public

/*!
 @brief Creates a new <code>EventListener</code> proxy instance.
 @param listener
 the listener wrapped by this proxy.
 */
- (instancetype)initWithJavaUtilEventListener:(id<JavaUtilEventListener>)listener;

/*!
 @brief Returns the wrapped <code>EventListener</code>.
 @return the wrapped <code>EventListener</code>.
 */
- (id<JavaUtilEventListener>)getListener;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilEventListenerProxy)

FOUNDATION_EXPORT void JavaUtilEventListenerProxy_initWithJavaUtilEventListener_(JavaUtilEventListenerProxy *self, id<JavaUtilEventListener> listener);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilEventListenerProxy)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilEventListenerProxy_INCLUDE_ALL")
