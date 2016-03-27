//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/Reader.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaIoReader_INCLUDE_ALL")
#ifdef JavaIoReader_RESTRICT
#define JavaIoReader_INCLUDE_ALL 0
#else
#define JavaIoReader_INCLUDE_ALL 1
#endif
#undef JavaIoReader_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoReader_) && (JavaIoReader_INCLUDE_ALL || defined(JavaIoReader_INCLUDE))
#define JavaIoReader_

#define JavaLangReadable_RESTRICT 1
#define JavaLangReadable_INCLUDE 1
#include "../../java/lang/Readable.h"

#define JavaIoCloseable_RESTRICT 1
#define JavaIoCloseable_INCLUDE 1
#include "../../java/io/Closeable.h"

@class IOSCharArray;
@class JavaNioCharBuffer;

/*!
 @brief The base class for all readers.
 A reader is a means of reading data from a
 source in a character-wise manner. Some readers also support marking a
 position in the input and returning to this position later.
 <p>
 This abstract class does not provide a fully working implementation, so it
 needs to be subclassed, and at least the <code>read(char[],int,int)</code> and
 <code>close()</code> methods needs to be overridden. Overriding some of the
 non-abstract methods is also often advised, since it might result in higher
 efficiency.
 <p>
 Many specialized readers for purposes like reading from a file already exist
 in this package.
 - seealso: Writer
 */
@interface JavaIoReader : NSObject < JavaLangReadable, JavaIoCloseable > {
 @public
  /*!
   @brief The object used to synchronize access to the reader.
   */
  id lock_;
}

#pragma mark Public

/*!
 @brief Closes this reader.
 Implementations of this method should free any
 resources associated with the reader.
 @throws IOException
 if an error occurs while closing this reader.
 */
- (void)close;

/*!
 @brief Sets a mark position in this reader.
 The parameter <code>readLimit</code>
 indicates how many characters can be read before the mark is invalidated.
 Calling <code>reset()</code> will reposition the reader back to the marked
 position if <code>readLimit</code> has not been surpassed.
 <p>
 This default implementation simply throws an <code>IOException</code>;
 subclasses must provide their own implementation.
 @param readLimit
 the number of characters that can be read before the mark is
 invalidated.
 @throws IllegalArgumentException
 if <code>readLimit < 0</code>.
 @throws IOException
 if an error occurs while setting a mark in this reader.
 - seealso: #markSupported()
 - seealso: #reset()
 */
- (void)markWithInt:(jint)readLimit;

/*!
 @brief Indicates whether this reader supports the <code>mark()</code> and
 <code>reset()</code> methods.
 This default implementation returns
 <code>false</code>.
 @return always <code>false</code>.
 */
- (jboolean)markSupported;

/*!
 @brief Reads a single character from this reader and returns it as an integer
 with the two higher-order bytes set to 0.
 Returns -1 if the end of the
 reader has been reached.
 @return the character read or -1 if the end of the reader has been
 reached.
 @throws IOException
 if this reader is closed or some other I/O error occurs.
 */
- (jint)read;

/*!
 @brief Reads characters from this reader and stores them in the character array
 <code>buffer</code> starting at offset 0.
 Returns the number of characters
 actually read or -1 if the end of the reader has been reached.
 @throws IOException
 if this reader is closed or some other I/O error occurs.
 */
- (jint)readWithCharArray:(IOSCharArray *)buffer;

/*!
 @brief Reads up to <code>count</code> characters from this reader and stores them
 at <code>offset</code> in the character array <code>buffer</code>.
 Returns the number
 of characters actually read or -1 if the end of the reader has been
 reached.
 @throws IOException
 if this reader is closed or some other I/O error occurs.
 */
- (jint)readWithCharArray:(IOSCharArray *)buffer
                  withInt:(jint)offset
                  withInt:(jint)count;

/*!
 @brief Reads characters and puts them into the <code>target</code> character buffer.
 @param target
 the destination character buffer.
 @return the number of characters put into <code>target</code> or -1 if the end
 of this reader has been reached before a character has been read.
 @throws IOException
 if any I/O error occurs while reading from this reader.
 @throws NullPointerException
 if <code>target</code> is <code>null</code>.
 @throws ReadOnlyBufferException
 if <code>target</code> is read-only.
 */
- (jint)readWithJavaNioCharBuffer:(JavaNioCharBuffer *)target;

/*!
 @brief Indicates whether this reader is ready to be read without blocking.
 Returns <code>true</code> if this reader will not block when <code>read</code> is
 called, <code>false</code> if unknown or blocking will occur. This default
 implementation always returns <code>false</code>.
 @return always <code>false</code>.
 @throws IOException
 if this reader is closed or some other I/O error occurs.
 - seealso: #read()
 - seealso: #read(char[])
 - seealso: #read(char[],int,int)
 */
- (jboolean)ready;

/*!
 @brief Resets this reader's position to the last <code>mark()</code> location.
 Invocations of <code>read()</code> and <code>skip()</code> will occur from this new
 location. If this reader has not been marked, the behavior of
 <code>reset()</code> is implementation specific. This default
 implementation throws an <code>IOException</code>.
 @throws IOException
 always thrown in this default implementation.
 - seealso: #mark(int)
 - seealso: #markSupported()
 */
- (void)reset;

/*!
 @brief Skips <code>charCount</code> characters in this reader.
 Subsequent calls of
 <code>read</code> methods will not return these characters unless <code>reset</code>
  is used. This method may perform multiple reads to read <code>charCount</code>
  characters.
 @return the number of characters actually skipped.
 @throws IllegalArgumentException
 if <code>charCount < 0</code>.
 @throws IOException
 if this reader is closed or some other I/O error occurs.
 - seealso: #mark(int)
 - seealso: #markSupported()
 - seealso: #reset()
 */
- (jlong)skipWithLong:(jlong)charCount;

#pragma mark Protected

/*!
 @brief Constructs a new <code>Reader</code> with a lock object to synchronize
 critical sections.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>Reader</code> with <code>lock</code> used to synchronize
 critical sections.
 @param lock
 the <code>Object</code> used to synchronize critical sections.
 @throws NullPointerException
 if <code>lock</code> is <code>null</code>.
 */
- (instancetype)initWithId:(id)lock;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoReader)

J2OBJC_FIELD_SETTER(JavaIoReader, lock_, id)

FOUNDATION_EXPORT void JavaIoReader_init(JavaIoReader *self);

FOUNDATION_EXPORT void JavaIoReader_initWithId_(JavaIoReader *self, id lock);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoReader)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaIoReader_INCLUDE_ALL")