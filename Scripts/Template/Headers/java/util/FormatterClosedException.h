//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/FormatterClosedException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaUtilFormatterClosedException_INCLUDE_ALL")
#ifdef JavaUtilFormatterClosedException_RESTRICT
#define JavaUtilFormatterClosedException_INCLUDE_ALL 0
#else
#define JavaUtilFormatterClosedException_INCLUDE_ALL 1
#endif
#undef JavaUtilFormatterClosedException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilFormatterClosedException_) && (JavaUtilFormatterClosedException_INCLUDE_ALL || defined(JavaUtilFormatterClosedException_INCLUDE))
#define JavaUtilFormatterClosedException_

#define JavaLangIllegalStateException_RESTRICT 1
#define JavaLangIllegalStateException_INCLUDE 1
#include "../../java/lang/IllegalStateException.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "../../java/io/Serializable.h"

/*!
 @brief A <code>FormatterClosedException</code> will be thrown if the formatter has been
 closed.
 - seealso: java.lang.RuntimeException
 */
@interface JavaUtilFormatterClosedException : JavaLangIllegalStateException < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a new <code>FormatterClosedException</code> with the stack trace
 filled in.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFormatterClosedException)

FOUNDATION_EXPORT void JavaUtilFormatterClosedException_init(JavaUtilFormatterClosedException *self);

FOUNDATION_EXPORT JavaUtilFormatterClosedException *new_JavaUtilFormatterClosedException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFormatterClosedException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilFormatterClosedException_INCLUDE_ALL")