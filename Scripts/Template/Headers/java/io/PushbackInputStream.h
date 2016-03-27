//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/PushbackInputStream.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaIoPushbackInputStream_INCLUDE_ALL")
#ifdef JavaIoPushbackInputStream_RESTRICT
#define JavaIoPushbackInputStream_INCLUDE_ALL 0
#else
#define JavaIoPushbackInputStream_INCLUDE_ALL 1
#endif
#undef JavaIoPushbackInputStream_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoPushbackInputStream_) && (JavaIoPushbackInputStream_INCLUDE_ALL || defined(JavaIoPushbackInputStream_INCLUDE))
#define JavaIoPushbackInputStream_

#define JavaIoFilterInputStream_RESTRICT 1
#define JavaIoFilterInputStream_INCLUDE 1
#include "../../java/io/FilterInputStream.h"

@class IOSByteArray;
@class JavaIoInputStream;

/*!
 @brief Wraps an existing <code>InputStream</code> and adds functionality to "push back"
 bytes that have been read, so that they can be read again.
 Parsers may find
 this useful. The number of bytes which may be pushed back can be specified
 during construction. If the buffer of pushed back bytes is empty, bytes are
 read from the underlying input stream.
 */
@interface JavaIoPushbackInputStream : JavaIoFilterInputStream {
 @public
  /*!
   @brief The buffer that contains pushed-back bytes.
   */
  IOSByteArray *buf_;
  /*!
   @brief The current position within <code>buf</code>.
   A value equal to
 <code>buf.length</code> indicates that no bytes are available. A value of 0
 indicates that the buffer is full.
   */
  jint pos_;
}

#pragma mark Public

/*!
 @brief Constructs a new <code>PushbackInputStream</code> with the specified input
 stream as source.
 The size of the pushback buffer is set to the default
 value of 1 byte.
 <p><strong>Warning:</strong> passing a null source creates an invalid
 <code>PushbackInputStream</code>. All read operations on such a stream will
 fail.
 @param inArg
 the source input stream.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

/*!
 @brief Constructs a new <code>PushbackInputStream</code> with <code>in</code> as source
 input stream.
 The size of the pushback buffer is set to <code>size</code>.
 <p><strong>Warning:</strong> passing a null source creates an invalid
 <code>PushbackInputStream</code>. All read operations on such a stream will
 fail.
 @param inArg
 the source input stream.
 @param size
 the size of the pushback buffer.
 @throws IllegalArgumentException
 if <code>size</code> is negative.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                                  withInt:(jint)size;

- (jint)available;

/*!
 @brief Closes this stream.
 This implementation closes the source stream
 and releases the pushback buffer.
 @throws IOException
 if an error occurs while closing this stream.
 */
- (void)close;

/*!
 @brief Marks the current position in this stream.
 Setting a mark is not
 supported in this class; this implementation does nothing.
 @param readlimit
 the number of bytes that can be read from this stream before
 the mark is invalidated; this parameter is ignored.
 */
- (void)markWithInt:(jint)readlimit;

/*!
 @brief Indicates whether this stream supports the <code>mark(int)</code> and
 <code>reset()</code> methods.
 <code>PushbackInputStream</code> does not support
 them, so it returns <code>false</code>.
 @return always <code>false</code>.
 - seealso: #mark(int)
 - seealso: #reset()
 */
- (jboolean)markSupported;

/*!
 @brief Reads a single byte from this stream and returns it as an integer in the
 range from 0 to 255.
 If the pushback buffer does not contain any
 available bytes then a byte from the source input stream is returned.
 Blocks until one byte has been read, the end of the source stream is
 detected or an exception is thrown.
 @return the byte read or -1 if the end of the source stream has been
 reached.
 @throws IOException
 if this stream is closed or an I/O error occurs while reading
 from this stream.
 */
- (jint)read;

/*!
 @brief Reads up to <code>byteCount</code> bytes from this stream and stores them in
 the byte array <code>buffer</code> starting at <code>byteOffset</code>.
 Bytes are read
 from the pushback buffer first, then from the source stream if more bytes
 are required. Blocks until <code>byteCount</code> bytes have been read, the end of
 the source stream is detected or an exception is thrown. Returns the number of bytes read,
 or -1 if the end of the source stream has been reached.
 @throws IndexOutOfBoundsException
 if <code>byteOffset < 0 || byteCount < 0 || byteOffset + byteCount > buffer.length</code>.
 @throws IOException
 if this stream is closed or another I/O error occurs while
 reading from this stream.
 @throws NullPointerException
 if <code>buffer == null</code>.
 */
- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

/*!
 @brief Resets this stream to the last marked position.
 Resetting the stream is
 not supported in this class; this implementation always throws an
 <code>IOException</code>.
 @throws IOException
 if this method is called.
 */
- (void)reset;

/*!
 @brief Skips <code>byteCount</code> bytes in this stream.
 This implementation skips bytes
 in the pushback buffer first and then in the source stream if necessary.
 @return the number of bytes actually skipped.
 @throws IOException
 if this stream is closed or another I/O error occurs.
 */
- (jlong)skipWithLong:(jlong)byteCount;

/*!
 @brief Pushes all the bytes in <code>buffer</code> back to this stream.
 The bytes are
 pushed back in such a way that the next byte read from this stream is
 buffer[0], then buffer[1] and so on.
 <p>
 If this stream's internal pushback buffer cannot store the entire
 contents of <code>buffer</code>, an <code>IOException</code> is thrown. Parts of
 <code>buffer</code> may have already been copied to the pushback buffer when
 the exception is thrown.
 @param buffer
 the buffer containing the bytes to push back to this stream.
 @throws IOException
 if the free space in the internal pushback buffer is not
 sufficient to store the contents of <code>buffer</code>.
 */
- (void)unreadWithByteArray:(IOSByteArray *)buffer;

/*!
 @brief Pushes a subset of the bytes in <code>buffer</code> back to this stream.
 The
 subset is defined by the start position <code>offset</code> within
 <code>buffer</code> and the number of bytes specified by <code>length</code>. The
 bytes are pushed back in such a way that the next byte read from this
 stream is <code>buffer[offset]</code>, then <code>buffer[1]</code> and so on.
 <p>
 If this stream's internal pushback buffer cannot store the selected
 subset of <code>buffer</code>, an <code>IOException</code> is thrown. Parts of
 <code>buffer</code> may have already been copied to the pushback buffer when
 the exception is thrown.
 @param buffer
 the buffer containing the bytes to push back to this stream.
 @param offset
 the index of the first byte in <code>buffer</code> to push back.
 @param length
 the number of bytes to push back.
 @throws IndexOutOfBoundsException
 if <code>offset < 0</code> or <code>length < 0</code>, or if
 <code>offset + length</code> is greater than the length of
 <code>buffer</code>.
 @throws IOException
 if the free space in the internal pushback buffer is not
 sufficient to store the selected contents of <code>buffer</code>.
 */
- (void)unreadWithByteArray:(IOSByteArray *)buffer
                    withInt:(jint)offset
                    withInt:(jint)length;

/*!
 @brief Pushes the specified byte <code>oneByte</code> back to this stream.
 Only the
 least significant byte of the integer <code>oneByte</code> is pushed back.
 This is done in such a way that the next byte read from this stream is
 <code>(byte) oneByte</code>.
 <p>
 If this stream's internal pushback buffer cannot store the byte, an
 <code>IOException</code> is thrown.
 @param oneByte
 the byte to push back to this stream.
 @throws IOException
 if this stream is closed or the internal pushback buffer is
 full.
 */
- (void)unreadWithInt:(jint)oneByte;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoPushbackInputStream)

J2OBJC_FIELD_SETTER(JavaIoPushbackInputStream, buf_, IOSByteArray *)

FOUNDATION_EXPORT void JavaIoPushbackInputStream_initWithJavaIoInputStream_(JavaIoPushbackInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT JavaIoPushbackInputStream *new_JavaIoPushbackInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoPushbackInputStream_initWithJavaIoInputStream_withInt_(JavaIoPushbackInputStream *self, JavaIoInputStream *inArg, jint size);

FOUNDATION_EXPORT JavaIoPushbackInputStream *new_JavaIoPushbackInputStream_initWithJavaIoInputStream_withInt_(JavaIoInputStream *inArg, jint size) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoPushbackInputStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaIoPushbackInputStream_INCLUDE_ALL")
