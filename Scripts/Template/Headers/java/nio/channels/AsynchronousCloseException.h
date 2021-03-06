//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/AsynchronousCloseException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaNioChannelsAsynchronousCloseException_INCLUDE_ALL")
#ifdef JavaNioChannelsAsynchronousCloseException_RESTRICT
#define JavaNioChannelsAsynchronousCloseException_INCLUDE_ALL 0
#else
#define JavaNioChannelsAsynchronousCloseException_INCLUDE_ALL 1
#endif
#undef JavaNioChannelsAsynchronousCloseException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsAsynchronousCloseException_) && (JavaNioChannelsAsynchronousCloseException_INCLUDE_ALL || defined(JavaNioChannelsAsynchronousCloseException_INCLUDE))
#define JavaNioChannelsAsynchronousCloseException_

#define JavaNioChannelsClosedChannelException_RESTRICT 1
#define JavaNioChannelsClosedChannelException_INCLUDE 1
#include "../../../java/nio/channels/ClosedChannelException.h"

/*!
 @brief An <code>AsynchronousCloseException</code> is thrown when the underlying channel
 for an I/O operation is closed by another thread.
 */
@interface JavaNioChannelsAsynchronousCloseException : JavaNioChannelsClosedChannelException

#pragma mark Public

/*!
 @brief Constructs an <code>AsynchronousCloseException</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsAsynchronousCloseException)

FOUNDATION_EXPORT void JavaNioChannelsAsynchronousCloseException_init(JavaNioChannelsAsynchronousCloseException *self);

FOUNDATION_EXPORT JavaNioChannelsAsynchronousCloseException *new_JavaNioChannelsAsynchronousCloseException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsAsynchronousCloseException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaNioChannelsAsynchronousCloseException_INCLUDE_ALL")
