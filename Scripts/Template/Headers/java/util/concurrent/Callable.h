//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/Callable.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaUtilConcurrentCallable_INCLUDE_ALL")
#ifdef JavaUtilConcurrentCallable_RESTRICT
#define JavaUtilConcurrentCallable_INCLUDE_ALL 0
#else
#define JavaUtilConcurrentCallable_INCLUDE_ALL 1
#endif
#undef JavaUtilConcurrentCallable_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentCallable_) && (JavaUtilConcurrentCallable_INCLUDE_ALL || defined(JavaUtilConcurrentCallable_INCLUDE))
#define JavaUtilConcurrentCallable_

/*!
 @brief A task that returns a result and may throw an exception.
 Implementors define a single method with no arguments called
 <code>call</code>.
 <p>The <code>Callable</code> interface is similar to <code>java.lang.Runnable</code>
 , in that both are designed for classes whose
 instances are potentially executed by another thread.  A
 <code>Runnable</code>, however, does not return a result and cannot
 throw a checked exception.
 <p>The <code>Executors</code> class contains utility methods to
 convert from other common forms to <code>Callable</code> classes.
 - seealso: Executor
 @since 1.5
 @author Doug Lea
 */
@protocol JavaUtilConcurrentCallable < NSObject, JavaObject >

/*!
 @brief Computes a result, or throws an exception if unable to do so.
 @return computed result
 @throws Exception if unable to compute a result
 */
- (id)call;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentCallable)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentCallable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilConcurrentCallable_INCLUDE_ALL")