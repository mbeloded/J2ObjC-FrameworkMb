//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/jar/JarInputStream.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaUtilJarJarInputStream_INCLUDE_ALL")
#ifdef JavaUtilJarJarInputStream_RESTRICT
#define JavaUtilJarJarInputStream_INCLUDE_ALL 0
#else
#define JavaUtilJarJarInputStream_INCLUDE_ALL 1
#endif
#undef JavaUtilJarJarInputStream_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilJarJarInputStream_) && (JavaUtilJarJarInputStream_INCLUDE_ALL || defined(JavaUtilJarJarInputStream_INCLUDE))
#define JavaUtilJarJarInputStream_

#define JavaUtilZipZipInputStream_RESTRICT 1
#define JavaUtilZipZipInputStream_INCLUDE 1
#include "../../../java/util/zip/ZipInputStream.h"

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaUtilJarJarEntry;
@class JavaUtilJarManifest;
@class JavaUtilZipZipEntry;

/*!
 @brief The input stream from which the JAR file to be read may be fetched.
 It is
 used like the <code>ZipInputStream</code>.
 - seealso: ZipInputStream
 */
@interface JavaUtilJarJarInputStream : JavaUtilZipZipInputStream

#pragma mark Public

/*!
 @brief Constructs a new <code>JarInputStream</code> from an input stream.
 @param stream
 the input stream containing the JAR file.
 @throws IOException
 If an error occurs reading entries from the input stream.
 - seealso: ZipInputStream#ZipInputStream(InputStream)
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)stream;

/*!
 @brief Constructs a new <code>JarInputStream</code> from an input stream.
 @param stream
 the input stream containing the JAR file.
 @param verify
 if the file should be verified with a <code>JarVerifier</code>.
 @throws IOException
 If an error occurs reading entries from the input stream.
 - seealso: ZipInputStream#ZipInputStream(InputStream)
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)stream
                              withBoolean:(jboolean)verify;

- (void)closeEntry;

/*!
 @brief Returns the <code>Manifest</code> object associated with this <code>JarInputStream</code>
  or <code>null</code> if no manifest entry exists.
 @return the MANIFEST specifying the contents of the JAR file.
 */
- (JavaUtilJarManifest *)getManifest;

/*!
 @brief Returns the next <code>ZipEntry</code> contained in this stream or <code>null</code>
  if no more entries are present.
 @return the next extracted ZIP entry.
 @throws IOException
 if an error occurs while reading the entry.
 */
- (JavaUtilZipZipEntry *)getNextEntry;

/*!
 @brief Returns the next <code>JarEntry</code> contained in this stream or <code>null</code>
  if no more entries are present.
 @return the next JAR entry.
 @throws IOException
 if an error occurs while reading the entry.
 */
- (JavaUtilJarJarEntry *)getNextJarEntry;

/*!
 @brief Reads up to <code>byteCount</code> bytes of decompressed data and stores it in
 <code>buffer</code> starting at <code>byteOffset</code>.
 Returns the number of uncompressed bytes read.
 @throws IOException
 if an IOException occurs.
 */
- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

#pragma mark Protected

- (JavaUtilZipZipEntry *)createZipEntryWithNSString:(NSString *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilJarJarInputStream)

FOUNDATION_EXPORT void JavaUtilJarJarInputStream_initWithJavaIoInputStream_withBoolean_(JavaUtilJarJarInputStream *self, JavaIoInputStream *stream, jboolean verify);

FOUNDATION_EXPORT JavaUtilJarJarInputStream *new_JavaUtilJarJarInputStream_initWithJavaIoInputStream_withBoolean_(JavaIoInputStream *stream, jboolean verify) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilJarJarInputStream_initWithJavaIoInputStream_(JavaUtilJarJarInputStream *self, JavaIoInputStream *stream);

FOUNDATION_EXPORT JavaUtilJarJarInputStream *new_JavaUtilJarJarInputStream_initWithJavaIoInputStream_(JavaIoInputStream *stream) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilJarJarInputStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilJarJarInputStream_INCLUDE_ALL")
