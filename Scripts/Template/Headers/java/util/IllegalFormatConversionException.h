//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/IllegalFormatConversionException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaUtilIllegalFormatConversionException_INCLUDE_ALL")
#ifdef JavaUtilIllegalFormatConversionException_RESTRICT
#define JavaUtilIllegalFormatConversionException_INCLUDE_ALL 0
#else
#define JavaUtilIllegalFormatConversionException_INCLUDE_ALL 1
#endif
#undef JavaUtilIllegalFormatConversionException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilIllegalFormatConversionException_) && (JavaUtilIllegalFormatConversionException_INCLUDE_ALL || defined(JavaUtilIllegalFormatConversionException_INCLUDE))
#define JavaUtilIllegalFormatConversionException_

#define JavaUtilIllegalFormatException_RESTRICT 1
#define JavaUtilIllegalFormatException_INCLUDE 1
#include "../../java/util/IllegalFormatException.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "../../java/io/Serializable.h"

@class IOSClass;

/*!
 @brief An <code>IllegalFormatConversionException</code> will be thrown when the parameter
 is incompatible with the corresponding format specifier.
 - seealso: java.lang.RuntimeException
 @since 1.5
 */
@interface JavaUtilIllegalFormatConversionException : JavaUtilIllegalFormatException < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a new <code>IllegalFormatConversionException</code> with the class
 of the mismatched conversion and corresponding parameter.
 @param c
 the class of the mismatched conversion.
 @param arg
 the corresponding parameter.
 */
- (instancetype)initWithChar:(jchar)c
                withIOSClass:(IOSClass *)arg;

/*!
 @brief Returns the class of the mismatched parameter.
 @return the class of the mismatched parameter.
 */
- (IOSClass *)getArgumentClass;

/*!
 @brief Returns the incompatible conversion.
 @return the incompatible conversion.
 */
- (jchar)getConversion;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilIllegalFormatConversionException)

FOUNDATION_EXPORT void JavaUtilIllegalFormatConversionException_initWithChar_withIOSClass_(JavaUtilIllegalFormatConversionException *self, jchar c, IOSClass *arg);

FOUNDATION_EXPORT JavaUtilIllegalFormatConversionException *new_JavaUtilIllegalFormatConversionException_initWithChar_withIOSClass_(jchar c, IOSClass *arg) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilIllegalFormatConversionException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilIllegalFormatConversionException_INCLUDE_ALL")
