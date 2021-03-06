//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/FormatFlagsConversionMismatchException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaUtilFormatFlagsConversionMismatchException_INCLUDE_ALL")
#ifdef JavaUtilFormatFlagsConversionMismatchException_RESTRICT
#define JavaUtilFormatFlagsConversionMismatchException_INCLUDE_ALL 0
#else
#define JavaUtilFormatFlagsConversionMismatchException_INCLUDE_ALL 1
#endif
#undef JavaUtilFormatFlagsConversionMismatchException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilFormatFlagsConversionMismatchException_) && (JavaUtilFormatFlagsConversionMismatchException_INCLUDE_ALL || defined(JavaUtilFormatFlagsConversionMismatchException_INCLUDE))
#define JavaUtilFormatFlagsConversionMismatchException_

#define JavaUtilIllegalFormatException_RESTRICT 1
#define JavaUtilIllegalFormatException_INCLUDE 1
#include "../../java/util/IllegalFormatException.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "../../java/io/Serializable.h"

/*!
 @brief A <code>FormatFlagsConversionMismatchException</code> will be thrown if a
 conversion and the flags are incompatible.
 - seealso: java.lang.RuntimeException
 */
@interface JavaUtilFormatFlagsConversionMismatchException : JavaUtilIllegalFormatException < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a new <code>FormatFlagsConversionMismatchException</code> with the
 flags and conversion specified.
 @param f
 the flags.
 @param c
 the conversion.
 */
- (instancetype)initWithNSString:(NSString *)f
                        withChar:(jchar)c;

/*!
 @brief Returns the incompatible conversion.
 @return the incompatible conversion.
 */
- (jchar)getConversion;

/*!
 @brief Returns the incompatible format flag.
 @return the incompatible format flag.
 */
- (NSString *)getFlags;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFormatFlagsConversionMismatchException)

FOUNDATION_EXPORT void JavaUtilFormatFlagsConversionMismatchException_initWithNSString_withChar_(JavaUtilFormatFlagsConversionMismatchException *self, NSString *f, jchar c);

FOUNDATION_EXPORT JavaUtilFormatFlagsConversionMismatchException *new_JavaUtilFormatFlagsConversionMismatchException_initWithNSString_withChar_(NSString *f, jchar c) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFormatFlagsConversionMismatchException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilFormatFlagsConversionMismatchException_INCLUDE_ALL")
