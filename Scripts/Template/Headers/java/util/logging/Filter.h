//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/logging/Filter.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaUtilLoggingFilter_INCLUDE_ALL")
#ifdef JavaUtilLoggingFilter_RESTRICT
#define JavaUtilLoggingFilter_INCLUDE_ALL 0
#else
#define JavaUtilLoggingFilter_INCLUDE_ALL 1
#endif
#undef JavaUtilLoggingFilter_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilLoggingFilter_) && (JavaUtilLoggingFilter_INCLUDE_ALL || defined(JavaUtilLoggingFilter_INCLUDE))
#define JavaUtilLoggingFilter_

@class JavaUtilLoggingLogRecord;

/*!
 @brief A <code>Filter</code> provides a mechanism for exercising fine-grained control
 over which records get logged.
 */
@protocol JavaUtilLoggingFilter < NSObject, JavaObject >

/*!
 @brief Checks <code>record</code> to determine if it should be logged.
 @param record
 the <code>LogRecord</code> to be checked.
 @return <code>true</code> if the supplied log record needs to be logged,
 <code>false</code> otherwise.
 */
- (jboolean)isLoggableWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLoggingFilter)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingFilter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilLoggingFilter_INCLUDE_ALL")