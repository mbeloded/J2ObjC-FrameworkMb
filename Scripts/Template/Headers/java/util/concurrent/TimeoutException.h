//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/TimeoutException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaUtilConcurrentTimeoutException_INCLUDE_ALL")
#ifdef JavaUtilConcurrentTimeoutException_RESTRICT
#define JavaUtilConcurrentTimeoutException_INCLUDE_ALL 0
#else
#define JavaUtilConcurrentTimeoutException_INCLUDE_ALL 1
#endif
#undef JavaUtilConcurrentTimeoutException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentTimeoutException_) && (JavaUtilConcurrentTimeoutException_INCLUDE_ALL || defined(JavaUtilConcurrentTimeoutException_INCLUDE))
#define JavaUtilConcurrentTimeoutException_

#define JavaLangException_RESTRICT 1
#define JavaLangException_INCLUDE 1
#include "../../../java/lang/Exception.h"

/*!
 @brief Exception thrown when a blocking operation times out.
 Blocking
 operations for which a timeout is specified need a means to
 indicate that the timeout has occurred. For many such operations it
 is possible to return a value that indicates timeout; when that is
 not possible or desirable then <code>TimeoutException</code> should be
 declared and thrown.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentTimeoutException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs a <code>TimeoutException</code> with no specified detail
 message.
 */
- (instancetype)init;

/*!
 @brief Constructs a <code>TimeoutException</code> with the specified detail
 message.
 @param message the detail message
 */
- (instancetype)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentTimeoutException)

FOUNDATION_EXPORT void JavaUtilConcurrentTimeoutException_init(JavaUtilConcurrentTimeoutException *self);

FOUNDATION_EXPORT JavaUtilConcurrentTimeoutException *new_JavaUtilConcurrentTimeoutException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentTimeoutException_initWithNSString_(JavaUtilConcurrentTimeoutException *self, NSString *message);

FOUNDATION_EXPORT JavaUtilConcurrentTimeoutException *new_JavaUtilConcurrentTimeoutException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentTimeoutException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilConcurrentTimeoutException_INCLUDE_ALL")