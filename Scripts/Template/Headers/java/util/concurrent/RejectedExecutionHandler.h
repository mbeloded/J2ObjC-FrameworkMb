//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/RejectedExecutionHandler.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaUtilConcurrentRejectedExecutionHandler_INCLUDE_ALL")
#ifdef JavaUtilConcurrentRejectedExecutionHandler_RESTRICT
#define JavaUtilConcurrentRejectedExecutionHandler_INCLUDE_ALL 0
#else
#define JavaUtilConcurrentRejectedExecutionHandler_INCLUDE_ALL 1
#endif
#undef JavaUtilConcurrentRejectedExecutionHandler_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentRejectedExecutionHandler_) && (JavaUtilConcurrentRejectedExecutionHandler_INCLUDE_ALL || defined(JavaUtilConcurrentRejectedExecutionHandler_INCLUDE))
#define JavaUtilConcurrentRejectedExecutionHandler_

@class JavaUtilConcurrentThreadPoolExecutor;
@protocol JavaLangRunnable;

/*!
 @brief A handler for tasks that cannot be executed by a <code>ThreadPoolExecutor</code>.
 @since 1.5
 @author Doug Lea
 */
@protocol JavaUtilConcurrentRejectedExecutionHandler < NSObject, JavaObject >

/*!
 @brief Method that may be invoked by a <code>ThreadPoolExecutor</code> when
 <code>execute</code> cannot accept a
 task.
 This may occur when no more threads or queue slots are
 available because their bounds would be exceeded, or upon
 shutdown of the Executor.
 <p>In the absence of other alternatives, the method may throw
 an unchecked <code>RejectedExecutionException</code>, which will be
 propagated to the caller of <code>execute</code>.
 @param r the runnable task requested to be executed
 @param executor the executor attempting to execute this task
 @throws RejectedExecutionException if there is no remedy
 */
- (void)rejectedExecutionWithJavaLangRunnable:(id<JavaLangRunnable>)r
     withJavaUtilConcurrentThreadPoolExecutor:(JavaUtilConcurrentThreadPoolExecutor *)executor;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentRejectedExecutionHandler)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentRejectedExecutionHandler)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilConcurrentRejectedExecutionHandler_INCLUDE_ALL")
