//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/FileLockInterruptionException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaNioChannelsFileLockInterruptionException_INCLUDE_ALL")
#ifdef JavaNioChannelsFileLockInterruptionException_RESTRICT
#define JavaNioChannelsFileLockInterruptionException_INCLUDE_ALL 0
#else
#define JavaNioChannelsFileLockInterruptionException_INCLUDE_ALL 1
#endif
#undef JavaNioChannelsFileLockInterruptionException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsFileLockInterruptionException_) && (JavaNioChannelsFileLockInterruptionException_INCLUDE_ALL || defined(JavaNioChannelsFileLockInterruptionException_INCLUDE))
#define JavaNioChannelsFileLockInterruptionException_

#define JavaIoIOException_RESTRICT 1
#define JavaIoIOException_INCLUDE 1
#include "../../../java/io/IOException.h"

/*!
 @brief A <code>FileLockInterruptionException</code> is thrown when a thread is
 interrupted while waiting to acquire a file lock.
 <p>
 Note that the thread will also be in the 'interrupted' state.
 */
@interface JavaNioChannelsFileLockInterruptionException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs a <code>FileLockInterruptionException</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsFileLockInterruptionException)

FOUNDATION_EXPORT void JavaNioChannelsFileLockInterruptionException_init(JavaNioChannelsFileLockInterruptionException *self);

FOUNDATION_EXPORT JavaNioChannelsFileLockInterruptionException *new_JavaNioChannelsFileLockInterruptionException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsFileLockInterruptionException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaNioChannelsFileLockInterruptionException_INCLUDE_ALL")