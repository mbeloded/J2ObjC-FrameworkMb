//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/CRC32.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaUtilZipCRC32_INCLUDE_ALL")
#ifdef JavaUtilZipCRC32_RESTRICT
#define JavaUtilZipCRC32_INCLUDE_ALL 0
#else
#define JavaUtilZipCRC32_INCLUDE_ALL 1
#endif
#undef JavaUtilZipCRC32_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilZipCRC32_) && (JavaUtilZipCRC32_INCLUDE_ALL || defined(JavaUtilZipCRC32_INCLUDE))
#define JavaUtilZipCRC32_

#define JavaUtilZipChecksum_RESTRICT 1
#define JavaUtilZipChecksum_INCLUDE 1
#include "../../../java/util/zip/Checksum.h"

@class IOSByteArray;

/*!
 @brief The CRC32 class is used to compute a CRC32 checksum from data provided as
 input value.
 See also <code>Adler32</code> which is almost as good, but cheaper.
 Ported to j2objc by Alexander Jarvis
 */
@interface JavaUtilZipCRC32 : NSObject < JavaUtilZipChecksum > {
 @public
  jlong tbytes_;
}

#pragma mark Public

- (instancetype)init;

/*!
 @brief Returns the CRC32 checksum for all input received.
 @return The checksum for this instance.
 */
- (jlong)getValue;

/*!
 @brief Resets the CRC32 checksum to it initial state.
 */
- (void)reset;

/*!
 @brief Updates this checksum with the bytes contained in buffer <code>buf</code>.
 @param buf
 the buffer holding the data to update the checksum with.
 */
- (void)updateWithByteArray:(IOSByteArray *)buf;

/*!
 @brief Update this <code>CRC32</code> checksum with the contents of <code>buf</code>,
 starting from <code>offset</code> and reading <code>byteCount</code> bytes of data.
 */
- (void)updateWithByteArray:(IOSByteArray *)buf
                    withInt:(jint)offset
                    withInt:(jint)byteCount;

/*!
 @brief Updates this checksum with the byte value provided as integer.
 @param val
 represents the byte to update the checksum.
 */
- (void)updateWithInt:(jint)val;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipCRC32)

FOUNDATION_EXPORT void JavaUtilZipCRC32_init(JavaUtilZipCRC32 *self);

FOUNDATION_EXPORT JavaUtilZipCRC32 *new_JavaUtilZipCRC32_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipCRC32)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilZipCRC32_INCLUDE_ALL")
