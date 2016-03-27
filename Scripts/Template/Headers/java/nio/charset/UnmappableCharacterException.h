//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/charset/UnmappableCharacterException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaNioCharsetUnmappableCharacterException_INCLUDE_ALL")
#ifdef JavaNioCharsetUnmappableCharacterException_RESTRICT
#define JavaNioCharsetUnmappableCharacterException_INCLUDE_ALL 0
#else
#define JavaNioCharsetUnmappableCharacterException_INCLUDE_ALL 1
#endif
#undef JavaNioCharsetUnmappableCharacterException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioCharsetUnmappableCharacterException_) && (JavaNioCharsetUnmappableCharacterException_INCLUDE_ALL || defined(JavaNioCharsetUnmappableCharacterException_INCLUDE))
#define JavaNioCharsetUnmappableCharacterException_

#define JavaNioCharsetCharacterCodingException_RESTRICT 1
#define JavaNioCharsetCharacterCodingException_INCLUDE 1
#include "../../../java/nio/charset/CharacterCodingException.h"

/*!
 @brief An <code>UnmappableCharacterException</code> is thrown when an unmappable
 character for the given charset is encountered.
 */
@interface JavaNioCharsetUnmappableCharacterException : JavaNioCharsetCharacterCodingException

#pragma mark Public

/*!
 @brief Constructs a new <code>UnmappableCharacterException</code>.
 @param length
 the length of the unmappable character.
 */
- (instancetype)initWithInt:(jint)length;

/*!
 @brief Returns the length of the unmappable character.
 */
- (jint)getInputLength;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioCharsetUnmappableCharacterException)

FOUNDATION_EXPORT void JavaNioCharsetUnmappableCharacterException_initWithInt_(JavaNioCharsetUnmappableCharacterException *self, jint length);

FOUNDATION_EXPORT JavaNioCharsetUnmappableCharacterException *new_JavaNioCharsetUnmappableCharacterException_initWithInt_(jint length) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharsetUnmappableCharacterException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaNioCharsetUnmappableCharacterException_INCLUDE_ALL")
