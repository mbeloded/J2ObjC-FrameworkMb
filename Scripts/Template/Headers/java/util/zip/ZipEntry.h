//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/ZipEntry.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaUtilZipZipEntry_INCLUDE_ALL")
#ifdef JavaUtilZipZipEntry_RESTRICT
#define JavaUtilZipZipEntry_INCLUDE_ALL 0
#else
#define JavaUtilZipZipEntry_INCLUDE_ALL 1
#endif
#undef JavaUtilZipZipEntry_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilZipZipEntry_) && (JavaUtilZipZipEntry_INCLUDE_ALL || defined(JavaUtilZipZipEntry_INCLUDE))
#define JavaUtilZipZipEntry_

#define JavaUtilZipZipConstants_RESTRICT 1
#define JavaUtilZipZipConstants_INCLUDE 1
#include "../../../java/util/zip/ZipConstants.h"

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaNioCharsetCharset;

/*!
 @brief An entry within a zip file.
 An entry has attributes such as its name (which is actually a path) and the uncompressed size
 of the corresponding data. An entry does not contain the data itself, but can be used as a key
 with <code>ZipFile.getInputStream</code>. The class documentation for <code>ZipInputStream</code> and
 <code>ZipOutputStream</code> shows how <code>ZipEntry</code> is used in conjunction with those two classes.
 */
@interface JavaUtilZipZipEntry : NSObject < JavaUtilZipZipConstants, NSCopying > {
 @public
  NSString *name_;
  NSString *comment_;
  jlong crc_;
  jlong compressedSize_;
  jlong size_;
  jint compressionMethod_;
  jint time_;
  jint modDate_;
  IOSByteArray *extra_;
  jlong localHeaderRelOffset_;
  jlong dataOffset_;
}

+ (jint)DEFLATED;

+ (jint)STORED;

#pragma mark Public

/*!
 @brief Constructs a new <code>ZipEntry</code> with the specified name.
 The name is actually a path,
 and may contain <code>/</code> characters.
 @throws IllegalArgumentException
 if the name length is outside the range (> 0xFFFF).
 */
- (instancetype)initWithNSString:(NSString *)name;

/*!
 @brief Constructs a new <code>ZipEntry</code> using the values obtained from <code>ze</code>
 .
 @param ze
 the <code>ZipEntry</code> from which to obtain values.
 */
- (instancetype)initWithJavaUtilZipZipEntry:(JavaUtilZipZipEntry *)ze;

/*!
 @brief Returns a deep copy of this zip entry.
 */
- (id)clone;

/*!
 @brief Returns the comment for this <code>ZipEntry</code>, or <code>null</code> if there is no comment.
 If we're reading a zip file using <code>ZipInputStream</code>, the comment is not available.
 */
- (NSString *)getComment;

/*!
 @brief Gets the compressed size of this <code>ZipEntry</code>.
 @return the compressed size, or -1 if the compressed size has not been
 set.
 */
- (jlong)getCompressedSize;

/*!
 @brief Gets the checksum for this <code>ZipEntry</code>.
 @return the checksum, or -1 if the checksum has not been set.
 */
- (jlong)getCrc;

/*!
  
 */
- (jlong)getDataOffset;

/*!
 @brief Gets the extra information for this <code>ZipEntry</code>.
 @return a byte array containing the extra information, or <code>null</code> if
 there is none.
 */
- (IOSByteArray *)getExtra;

/*!
 @brief Gets the compression method for this <code>ZipEntry</code>.
 @return the compression method, either <code>DEFLATED</code>, <code>STORED</code>
 or -1 if the compression method has not been set.
 */
- (jint)getMethod;

/*!
 @brief Gets the name of this <code>ZipEntry</code>.
 <p><em>Security note:</em> Entry names can represent relative paths. <code>foo/../bar</code> or
 <code>../bar/baz</code>, for example. If the entry name is being used to construct a filename
 or as a path component, it must be validated or sanitized to ensure that files are not
 written outside of the intended destination directory.
 @return the entry name.
 */
- (NSString *)getName;

/*!
 @brief Gets the uncompressed size of this <code>ZipEntry</code>.
 @return the uncompressed size, or <code>-1</code> if the size has not been
 set.
 */
- (jlong)getSize;

/*!
 @brief Gets the last modification time of this <code>ZipEntry</code>.
 @return the last modification time as the number of milliseconds since
 Jan. 1, 1970.
 */
- (jlong)getTime;

/*!
 @brief Returns the hash code for this <code>ZipEntry</code>.
 @return the hash code of the entry.
 */
- (NSUInteger)hash;

/*!
 @brief Determine whether or not this <code>ZipEntry</code> is a directory.
 @return <code>true</code> when this <code>ZipEntry</code> is a directory, <code>false</code>
  otherwise.
 */
- (jboolean)isDirectory;

/*!
 @brief Sets the comment for this <code>ZipEntry</code>.
 @throws IllegalArgumentException if the comment is >= 64 Ki UTF-8 bytes.
 */
- (void)setCommentWithNSString:(NSString *)comment;

/*!
 @brief Sets the compressed size for this <code>ZipEntry</code>.
 @param value
 the compressed size (in bytes).
 */
- (void)setCompressedSizeWithLong:(jlong)value;

/*!
 @brief Sets the checksum for this <code>ZipEntry</code>.
 @param value
 the checksum for this entry.
 @throws IllegalArgumentException
 if <code>value</code> is < 0 or > 0xFFFFFFFFL.
 */
- (void)setCrcWithLong:(jlong)value;

/*!
  
 */
- (void)setDataOffsetWithLong:(jlong)value;

/*!
 @brief Sets the extra information for this <code>ZipEntry</code>.
 @throws IllegalArgumentException if the data length >= 64 KiB.
 */
- (void)setExtraWithByteArray:(IOSByteArray *)data;

/*!
 @brief Sets the compression method for this entry to either <code>DEFLATED</code> or <code>STORED</code>.
 The default is <code>DEFLATED</code>, which will cause the size, compressed size, and CRC to be
 set automatically, and the entry's data to be compressed. If you switch to <code>STORED</code>
 note that you'll have to set the size (or compressed size; they must be the same, but it's
 okay to only set one) and CRC yourself because they must appear <i>before</i> the user data
 in the resulting zip file. See <code>setSize</code> and <code>setCrc</code>.
 @throws IllegalArgumentException
 when value is not <code>DEFLATED</code> or <code>STORED</code>.
 */
- (void)setMethodWithInt:(jint)value;

/*!
 @brief Sets the uncompressed size of this <code>ZipEntry</code>.
 @param value the uncompressed size for this entry.
 @throws IllegalArgumentException if <code>value < 0</code>.
 */
- (void)setSizeWithLong:(jlong)value;

/*!
 @brief Sets the modification time of this <code>ZipEntry</code>.
 @param value
 the modification time as the number of milliseconds since Jan.
 1, 1970.
 */
- (void)setTimeWithLong:(jlong)value;

/*!
 @brief Returns the string representation of this <code>ZipEntry</code>.
 @return the string representation of this <code>ZipEntry</code>.
 */
- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithByteArray:(IOSByteArray *)cdeHdrBuf
            withJavaIoInputStream:(JavaIoInputStream *)cdStream
        withJavaNioCharsetCharset:(JavaNioCharsetCharset *)defaultCharset
                      withBoolean:(jboolean)isZip64;

- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)comment
                        withLong:(jlong)crc
                        withLong:(jlong)compressedSize
                        withLong:(jlong)size
                         withInt:(jint)compressionMethod
                         withInt:(jint)time
                         withInt:(jint)modDate
                   withByteArray:(IOSByteArray *)extra
                        withLong:(jlong)localHeaderRelOffset
                        withLong:(jlong)dataOffset;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipZipEntry)

J2OBJC_FIELD_SETTER(JavaUtilZipZipEntry, name_, NSString *)
J2OBJC_FIELD_SETTER(JavaUtilZipZipEntry, comment_, NSString *)
J2OBJC_FIELD_SETTER(JavaUtilZipZipEntry, extra_, IOSByteArray *)

/*!
 @brief Zip entry state: Deflated.
 */
inline jint JavaUtilZipZipEntry_get_DEFLATED();
#define JavaUtilZipZipEntry_DEFLATED 8
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipZipEntry, DEFLATED, jint)

/*!
 @brief Zip entry state: Stored.
 */
inline jint JavaUtilZipZipEntry_get_STORED();
#define JavaUtilZipZipEntry_STORED 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipZipEntry, STORED, jint)

FOUNDATION_EXPORT void JavaUtilZipZipEntry_initWithNSString_withNSString_withLong_withLong_withLong_withInt_withInt_withInt_withByteArray_withLong_withLong_(JavaUtilZipZipEntry *self, NSString *name, NSString *comment, jlong crc, jlong compressedSize, jlong size, jint compressionMethod, jint time, jint modDate, IOSByteArray *extra, jlong localHeaderRelOffset, jlong dataOffset);

FOUNDATION_EXPORT JavaUtilZipZipEntry *new_JavaUtilZipZipEntry_initWithNSString_withNSString_withLong_withLong_withLong_withInt_withInt_withInt_withByteArray_withLong_withLong_(NSString *name, NSString *comment, jlong crc, jlong compressedSize, jlong size, jint compressionMethod, jint time, jint modDate, IOSByteArray *extra, jlong localHeaderRelOffset, jlong dataOffset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilZipZipEntry_initWithNSString_(JavaUtilZipZipEntry *self, NSString *name);

FOUNDATION_EXPORT JavaUtilZipZipEntry *new_JavaUtilZipZipEntry_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilZipZipEntry_initWithJavaUtilZipZipEntry_(JavaUtilZipZipEntry *self, JavaUtilZipZipEntry *ze);

FOUNDATION_EXPORT JavaUtilZipZipEntry *new_JavaUtilZipZipEntry_initWithJavaUtilZipZipEntry_(JavaUtilZipZipEntry *ze) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilZipZipEntry_initWithByteArray_withJavaIoInputStream_withJavaNioCharsetCharset_withBoolean_(JavaUtilZipZipEntry *self, IOSByteArray *cdeHdrBuf, JavaIoInputStream *cdStream, JavaNioCharsetCharset *defaultCharset, jboolean isZip64);

FOUNDATION_EXPORT JavaUtilZipZipEntry *new_JavaUtilZipZipEntry_initWithByteArray_withJavaIoInputStream_withJavaNioCharsetCharset_withBoolean_(IOSByteArray *cdeHdrBuf, JavaIoInputStream *cdStream, JavaNioCharsetCharset *defaultCharset, jboolean isZip64) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipZipEntry)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilZipZipEntry_INCLUDE_ALL")
