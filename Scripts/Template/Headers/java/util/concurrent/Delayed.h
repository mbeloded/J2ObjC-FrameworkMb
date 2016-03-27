//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/Delayed.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaUtilConcurrentDelayed_INCLUDE_ALL")
#ifdef JavaUtilConcurrentDelayed_RESTRICT
#define JavaUtilConcurrentDelayed_INCLUDE_ALL 0
#else
#define JavaUtilConcurrentDelayed_INCLUDE_ALL 1
#endif
#undef JavaUtilConcurrentDelayed_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentDelayed_) && (JavaUtilConcurrentDelayed_INCLUDE_ALL || defined(JavaUtilConcurrentDelayed_INCLUDE))
#define JavaUtilConcurrentDelayed_

#define JavaLangComparable_RESTRICT 1
#define JavaLangComparable_INCLUDE 1
#include "../../../java/lang/Comparable.h"

@class JavaUtilConcurrentTimeUnit;

/*!
 @brief A mix-in style interface for marking objects that should be
 acted upon after a given delay.
 <p>An implementation of this interface must define a
 <code>compareTo</code> method that provides an ordering consistent with
 its <code>getDelay</code> method.
 @since 1.5
 @author Doug Lea
 */
@protocol JavaUtilConcurrentDelayed < JavaLangComparable, NSObject, JavaObject >

/*!
 @brief Returns the remaining delay associated with this object, in the
 given time unit.
 @param unit the time unit
 @return the remaining delay; zero or negative values indicate
 that the delay has already elapsed
 */
- (jlong)getDelayWithJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentDelayed)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentDelayed)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilConcurrentDelayed_INCLUDE_ALL")