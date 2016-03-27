//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/FilenameFilter.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaIoFilenameFilter_INCLUDE_ALL")
#ifdef JavaIoFilenameFilter_RESTRICT
#define JavaIoFilenameFilter_INCLUDE_ALL 0
#else
#define JavaIoFilenameFilter_INCLUDE_ALL 1
#endif
#undef JavaIoFilenameFilter_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoFilenameFilter_) && (JavaIoFilenameFilter_INCLUDE_ALL || defined(JavaIoFilenameFilter_INCLUDE))
#define JavaIoFilenameFilter_

@class JavaIoFile;

/*!
 @brief An interface for filtering <code>File</code> objects based on their names
 or the directory they reside in.
 - seealso: File
 - seealso: File#list(FilenameFilter)
 */
@protocol JavaIoFilenameFilter < NSObject, JavaObject >

/*!
 @brief Indicates if a specific filename matches this filter.
 @param dir
 the directory in which the <code>filename</code> was found.
 @param filename
 the name of the file in <code>dir</code> to test.
 @return <code>true</code> if the filename matches the filter
 and can be included in the list, <code>false</code>
 otherwise.
 */
- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)dir
                    withNSString:(NSString *)filename;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFilenameFilter)

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFilenameFilter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaIoFilenameFilter_INCLUDE_ALL")