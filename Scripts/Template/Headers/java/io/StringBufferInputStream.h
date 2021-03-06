//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/StringBufferInputStream.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaIoStringBufferInputStream_INCLUDE_ALL")
#ifdef JavaIoStringBufferInputStream_RESTRICT
#define JavaIoStringBufferInputStream_INCLUDE_ALL 0
#else
#define JavaIoStringBufferInputStream_INCLUDE_ALL 1
#endif
#undef JavaIoStringBufferInputStream_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoStringBufferInputStream_) && (JavaIoStringBufferInputStream_INCLUDE_ALL || defined(JavaIoStringBufferInputStream_INCLUDE))
#define JavaIoStringBufferInputStream_

#define JavaIoInputStream_RESTRICT 1
#define JavaIoInputStream_INCLUDE 1
#include "../../java/io/InputStream.h"

@class IOSByteArray;

/*!
 @brief A specialized <code>InputStream</code> that reads bytes from a <code>String</code> in
 a sequential manner.
 */
__attribute__((deprecated))
@interface JavaIoStringBufferInputStream : JavaIoInputStream {
 @public
  /*!
   @brief The source string containing the data to read.
   */
  NSString *buffer_;
  /*!
   @brief The total number of characters in the source string.
   */
  jint count_;
  /*!
   @brief The current position within the source string.
   */
  jint pos_;
}

#pragma mark Public

/*!
 @brief Construct a new <code>StringBufferInputStream</code> with <code>str</code> as
 source.
 The size of the stream is set to the <code>length()</code> of the
 string.
 @param str
 the source string for this stream.
 @throws NullPointerException
 if <code>str</code> is <code>null</code>.
 */
- (instancetype)initWithNSString:(NSString *)str;

- (jint)available;

/*!
 @brief Reads a single byte from the source string and returns it as an integer
 in the range from 0 to 255.
 Returns -1 if the end of the source string
 has been reached.
 @return the byte read or -1 if the end of the source string has been
 reached.
 */
- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

/*!
 @brief Resets this stream to the beginning of the source string.
 */
- (void)reset;

/*!
 @brief Skips <code>charCount</code> characters in the source string.
 It does nothing and
 returns 0 if <code>charCount</code> is negative. Less than <code>charCount</code> characters are
 skipped if the end of the source string is reached before the operation
 completes.
 @return the number of characters actually skipped.
 */
- (jlong)skipWithLong:(jlong)charCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoStringBufferInputStream)

J2OBJC_FIELD_SETTER(JavaIoStringBufferInputStream, buffer_, NSString *)

FOUNDATION_EXPORT void JavaIoStringBufferInputStream_initWithNSString_(JavaIoStringBufferInputStream *self, NSString *str);

FOUNDATION_EXPORT JavaIoStringBufferInputStream *new_JavaIoStringBufferInputStream_initWithNSString_(NSString *str) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoStringBufferInputStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaIoStringBufferInputStream_INCLUDE_ALL")
