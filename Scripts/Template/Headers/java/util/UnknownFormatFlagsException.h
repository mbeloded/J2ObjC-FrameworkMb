//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/UnknownFormatFlagsException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaUtilUnknownFormatFlagsException_INCLUDE_ALL")
#ifdef JavaUtilUnknownFormatFlagsException_RESTRICT
#define JavaUtilUnknownFormatFlagsException_INCLUDE_ALL 0
#else
#define JavaUtilUnknownFormatFlagsException_INCLUDE_ALL 1
#endif
#undef JavaUtilUnknownFormatFlagsException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilUnknownFormatFlagsException_) && (JavaUtilUnknownFormatFlagsException_INCLUDE_ALL || defined(JavaUtilUnknownFormatFlagsException_INCLUDE))
#define JavaUtilUnknownFormatFlagsException_

#define JavaUtilIllegalFormatException_RESTRICT 1
#define JavaUtilIllegalFormatException_INCLUDE 1
#include "../../java/util/IllegalFormatException.h"

/*!
 @brief An <code>UnknownFormatFlagsException</code> will be thrown if there is
 an unknown flag.
 - seealso: java.lang.RuntimeException
 */
@interface JavaUtilUnknownFormatFlagsException : JavaUtilIllegalFormatException

#pragma mark Public

/*!
 @brief Constructs a new <code>UnknownFormatFlagsException</code> with the specified
 flags.
 @param f
 the specified flags.
 */
- (instancetype)initWithNSString:(NSString *)f;

/*!
 @brief Returns the flags associated with the exception.
 @return the flags associated with the exception.
 */
- (NSString *)getFlags;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilUnknownFormatFlagsException)

FOUNDATION_EXPORT void JavaUtilUnknownFormatFlagsException_initWithNSString_(JavaUtilUnknownFormatFlagsException *self, NSString *f);

FOUNDATION_EXPORT JavaUtilUnknownFormatFlagsException *new_JavaUtilUnknownFormatFlagsException_initWithNSString_(NSString *f) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilUnknownFormatFlagsException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilUnknownFormatFlagsException_INCLUDE_ALL")