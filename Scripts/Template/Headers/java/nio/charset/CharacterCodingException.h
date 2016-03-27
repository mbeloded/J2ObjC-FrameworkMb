//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/charset/CharacterCodingException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaNioCharsetCharacterCodingException_INCLUDE_ALL")
#ifdef JavaNioCharsetCharacterCodingException_RESTRICT
#define JavaNioCharsetCharacterCodingException_INCLUDE_ALL 0
#else
#define JavaNioCharsetCharacterCodingException_INCLUDE_ALL 1
#endif
#undef JavaNioCharsetCharacterCodingException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioCharsetCharacterCodingException_) && (JavaNioCharsetCharacterCodingException_INCLUDE_ALL || defined(JavaNioCharsetCharacterCodingException_INCLUDE))
#define JavaNioCharsetCharacterCodingException_

#define JavaIoIOException_RESTRICT 1
#define JavaIoIOException_INCLUDE 1
#include "../../../java/io/IOException.h"

/*!
 @brief A <code>CharacterCodingException</code> is thrown when an encoding or decoding
 error occurs.
 */
@interface JavaNioCharsetCharacterCodingException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs a new <code>CharacterCodingException</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioCharsetCharacterCodingException)

FOUNDATION_EXPORT void JavaNioCharsetCharacterCodingException_init(JavaNioCharsetCharacterCodingException *self);

FOUNDATION_EXPORT JavaNioCharsetCharacterCodingException *new_JavaNioCharsetCharacterCodingException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharsetCharacterCodingException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaNioCharsetCharacterCodingException_INCLUDE_ALL")