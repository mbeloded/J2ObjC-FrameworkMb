//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/CancellationException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaUtilConcurrentCancellationException_INCLUDE_ALL")
#ifdef JavaUtilConcurrentCancellationException_RESTRICT
#define JavaUtilConcurrentCancellationException_INCLUDE_ALL 0
#else
#define JavaUtilConcurrentCancellationException_INCLUDE_ALL 1
#endif
#undef JavaUtilConcurrentCancellationException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentCancellationException_) && (JavaUtilConcurrentCancellationException_INCLUDE_ALL || defined(JavaUtilConcurrentCancellationException_INCLUDE))
#define JavaUtilConcurrentCancellationException_

#define JavaLangIllegalStateException_RESTRICT 1
#define JavaLangIllegalStateException_INCLUDE 1
#include "../../../java/lang/IllegalStateException.h"

/*!
 @brief Exception indicating that the result of a value-producing task,
 such as a <code>FutureTask</code>, cannot be retrieved because the task
 was cancelled.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentCancellationException : JavaLangIllegalStateException

#pragma mark Public

/*!
 @brief Constructs a <code>CancellationException</code> with no detail message.
 */
- (instancetype)init;

/*!
 @brief Constructs a <code>CancellationException</code> with the specified detail
 message.
 @param message the detail message
 */
- (instancetype)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentCancellationException)

FOUNDATION_EXPORT void JavaUtilConcurrentCancellationException_init(JavaUtilConcurrentCancellationException *self);

FOUNDATION_EXPORT JavaUtilConcurrentCancellationException *new_JavaUtilConcurrentCancellationException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentCancellationException_initWithNSString_(JavaUtilConcurrentCancellationException *self, NSString *message);

FOUNDATION_EXPORT JavaUtilConcurrentCancellationException *new_JavaUtilConcurrentCancellationException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentCancellationException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilConcurrentCancellationException_INCLUDE_ALL")
