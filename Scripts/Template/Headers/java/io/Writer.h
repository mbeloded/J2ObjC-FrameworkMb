//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/Writer.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaIoWriter_INCLUDE_ALL")
#ifdef JavaIoWriter_RESTRICT
#define JavaIoWriter_INCLUDE_ALL 0
#else
#define JavaIoWriter_INCLUDE_ALL 1
#endif
#undef JavaIoWriter_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoWriter_) && (JavaIoWriter_INCLUDE_ALL || defined(JavaIoWriter_INCLUDE))
#define JavaIoWriter_

#define JavaLangAppendable_RESTRICT 1
#define JavaLangAppendable_INCLUDE 1
#include "../../java/lang/Appendable.h"

#define JavaIoCloseable_RESTRICT 1
#define JavaIoCloseable_INCLUDE 1
#include "../../java/io/Closeable.h"

#define JavaIoFlushable_RESTRICT 1
#define JavaIoFlushable_INCLUDE 1
#include "../../java/io/Flushable.h"

@class IOSCharArray;
@protocol JavaLangCharSequence;

/*!
 @brief The base class for all writers.
 A writer is a means of writing data to a
 target in a character-wise manner. Most output streams expect the
 <code>flush()</code> method to be called before closing the stream, to ensure all
 data is actually written out.
 <p>
 This abstract class does not provide a fully working implementation, so it
 needs to be subclassed, and at least the <code>write(char[],int,int)</code>,
 <code>close()</code> and <code>flush()</code> methods needs to be overridden.
 Overriding some of the non-abstract methods is also often advised, since it
 might result in higher efficiency.
 <p>
 Many specialized readers for purposes like reading from a file already exist
 in this package.
 - seealso: Reader
 */
@interface JavaIoWriter : NSObject < JavaLangAppendable, JavaIoCloseable, JavaIoFlushable > {
 @public
  /*!
   @brief The object used to synchronize access to the writer.
   */
  id lock_;
}

#pragma mark Public

/*!
 @brief Appends the character <code>c</code> to the target.
 This method works the same
 way as <code>write(int)</code>.
 @param c
 the character to append to the target stream.
 @return this writer.
 @throws IOException
 if this writer is closed or another I/O error occurs.
 */
- (JavaIoWriter *)appendWithChar:(jchar)c;

/*!
 @brief Appends the character sequence <code>csq</code> to the target.
 This method
 works the same way as <code>Writer.write(csq.toString())</code>. If <code>csq</code>
  is <code>null</code>, then the string "null" is written to the target
 stream.
 @param csq
 the character sequence appended to the target.
 @return this writer.
 @throws IOException
 if this writer is closed or another I/O error occurs.
 */
- (JavaIoWriter *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq;

/*!
 @brief Appends a subsequence of the character sequence <code>csq</code> to the
 target.
 This method works the same way as <code>Writer.writer(csq.subsequence(start, end).toString())</code>
 . If <code>csq</code>
  is <code>null</code>, then the specified subsequence of the string "null"
 will be written to the target.
 @param csq
 the character sequence appended to the target.
 @param start
 the index of the first char in the character sequence appended
 to the target.
 @param end
 the index of the character following the last character of the
 subsequence appended to the target.
 @return this writer.
 @throws IOException
 if this writer is closed or another I/O error occurs.
 @throws IndexOutOfBoundsException
 if <code>start > end</code>, <code>start < 0</code>, <code>end < 0</code> or
 either <code>start</code> or <code>end</code> are greater or equal than
 the length of <code>csq</code>.
 */
- (JavaIoWriter *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                         withInt:(jint)start
                                         withInt:(jint)end;

/*!
 @brief Closes this writer.
 Implementations of this method should free any
 resources associated with the writer.
 @throws IOException
 if an error occurs while closing this writer.
 */
- (void)close;

/*!
 @brief Flushes this writer.
 Implementations of this method should ensure that
 all buffered characters are written to the target.
 @throws IOException
 if an error occurs while flushing this writer.
 */
- (void)flush;

/*!
 @brief Writes the entire character buffer <code>buf</code> to the target.
 @param buf
 the non-null array containing characters to write.
 @throws IOException
 if this writer is closed or another I/O error occurs.
 */
- (void)writeWithCharArray:(IOSCharArray *)buf;

/*!
 @brief Writes <code>count</code> characters starting at <code>offset</code> in <code>buf</code>
 to the target.
 @param buf
 the non-null character array to write.
 @param offset
 the index of the first character in <code>buf</code> to write.
 @param count
 the maximum number of characters to write.
 @throws IndexOutOfBoundsException
 if <code>offset < 0</code> or <code>count < 0</code>, or if <code>offset + count</code>
  is greater than the size of <code>buf</code>.
 @throws IOException
 if this writer is closed or another I/O error occurs.
 */
- (void)writeWithCharArray:(IOSCharArray *)buf
                   withInt:(jint)offset
                   withInt:(jint)count;

/*!
 @brief Writes one character to the target.
 Only the two least significant bytes
 of the integer <code>oneChar</code> are written.
 @param oneChar
 the character to write to the target.
 @throws IOException
 if this writer is closed or another I/O error occurs.
 */
- (void)writeWithInt:(jint)oneChar;

/*!
 @brief Writes the characters from the specified string to the target.
 @param str
 the non-null string containing the characters to write.
 @throws IOException
 if this writer is closed or another I/O error occurs.
 */
- (void)writeWithNSString:(NSString *)str;

/*!
 @brief Writes <code>count</code> characters from <code>str</code> starting at <code>offset</code>
  to the target.
 @param str
 the non-null string containing the characters to write.
 @param offset
 the index of the first character in <code>str</code> to write.
 @param count
 the number of characters from <code>str</code> to write.
 @throws IOException
 if this writer is closed or another I/O error occurs.
 @throws IndexOutOfBoundsException
 if <code>offset < 0</code> or <code>count < 0</code>, or if <code>offset + count</code>
  is greater than the length of <code>str</code>.
 */
- (void)writeWithNSString:(NSString *)str
                  withInt:(jint)offset
                  withInt:(jint)count;

#pragma mark Protected

/*!
 @brief Constructs a new <code>Writer</code> with a lock object to synchronize
 critical sections.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>Writer</code> with <code>lock</code> used to synchronize
 critical sections.
 @param lock
 the <code>Object</code> used to synchronize critical sections.
 @throws NullPointerException
 if <code>lock</code> is <code>null</code>.
 */
- (instancetype)initWithId:(id)lock;

#pragma mark Package-Private

/*!
 @brief Returns true if this writer has encountered and suppressed an error.
 Used
 by PrintWriters as an alternative to checked exceptions.
 */
- (jboolean)checkError;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoWriter)

J2OBJC_FIELD_SETTER(JavaIoWriter, lock_, id)

FOUNDATION_EXPORT void JavaIoWriter_init(JavaIoWriter *self);

FOUNDATION_EXPORT void JavaIoWriter_initWithId_(JavaIoWriter *self, id lock);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoWriter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaIoWriter_INCLUDE_ALL")
