//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/Executors.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaUtilConcurrentExecutors_INCLUDE_ALL")
#ifdef JavaUtilConcurrentExecutors_RESTRICT
#define JavaUtilConcurrentExecutors_INCLUDE_ALL 0
#else
#define JavaUtilConcurrentExecutors_INCLUDE_ALL 1
#endif
#undef JavaUtilConcurrentExecutors_RESTRICT
#ifdef JavaUtilConcurrentExecutors_DelegatedScheduledExecutorService_INCLUDE
#define JavaUtilConcurrentExecutors_DelegatedExecutorService_INCLUDE 1
#endif
#ifdef JavaUtilConcurrentExecutors_FinalizableDelegatedExecutorService_INCLUDE
#define JavaUtilConcurrentExecutors_DelegatedExecutorService_INCLUDE 1
#endif
#ifdef JavaUtilConcurrentExecutors_PrivilegedThreadFactory_INCLUDE
#define JavaUtilConcurrentExecutors_DefaultThreadFactory_INCLUDE 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentExecutors_) && (JavaUtilConcurrentExecutors_INCLUDE_ALL || defined(JavaUtilConcurrentExecutors_INCLUDE))
#define JavaUtilConcurrentExecutors_

@protocol JavaLangRunnable;
@protocol JavaSecurityPrivilegedAction;
@protocol JavaSecurityPrivilegedExceptionAction;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentExecutorService;
@protocol JavaUtilConcurrentScheduledExecutorService;
@protocol JavaUtilConcurrentThreadFactory;

/*!
 @brief Factory and utility methods for <code>Executor</code>, <code>ExecutorService</code>
 , <code>ScheduledExecutorService</code>, <code>ThreadFactory</code>
 , and <code>Callable</code> classes defined in this
 package.
 This class supports the following kinds of methods:
 <ul>
 <li> Methods that create and return an <code>ExecutorService</code>
 set up with commonly useful configuration settings.
 <li> Methods that create and return a <code>ScheduledExecutorService</code>
 set up with commonly useful configuration settings.
 <li> Methods that create and return a "wrapped" ExecutorService, that
 disables reconfiguration by making implementation-specific methods
 inaccessible.
 <li> Methods that create and return a <code>ThreadFactory</code>
 that sets newly created threads to a known state.
 <li> Methods that create and return a <code>Callable</code>
 out of other closure-like forms, so they can be used
 in execution methods requiring <code>Callable</code>.
 </ul>
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentExecutors : NSObject

#pragma mark Public

/*!
 @brief Returns a <code>Callable</code> object that, when
 called, runs the given privileged action and returns its result.
 @param action the privileged action to run
 @return a callable object
 @throws NullPointerException if action null
 */
+ (id<JavaUtilConcurrentCallable>)callableWithJavaSecurityPrivilegedAction:(id<JavaSecurityPrivilegedAction>)action;

/*!
 @brief Returns a <code>Callable</code> object that, when
 called, runs the given privileged exception action and returns
 its result.
 @param action the privileged exception action to run
 @return a callable object
 @throws NullPointerException if action null
 */
+ (id<JavaUtilConcurrentCallable>)callableWithJavaSecurityPrivilegedExceptionAction:(id<JavaSecurityPrivilegedExceptionAction>)action;

/*!
 @brief Returns a <code>Callable</code> object that, when
 called, runs the given task and returns <code>null</code>.
 @param task the task to run
 @return a callable object
 @throws NullPointerException if task null
 */
+ (id<JavaUtilConcurrentCallable>)callableWithJavaLangRunnable:(id<JavaLangRunnable>)task;

/*!
 @brief Returns a <code>Callable</code> object that, when
 called, runs the given task and returns the given result.
 This
 can be useful when applying methods requiring a
 <code>Callable</code> to an otherwise resultless action.
 @param task the task to run
 @param result the result to return
 @return a callable object
 @throws NullPointerException if task null
 */
+ (id<JavaUtilConcurrentCallable>)callableWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                        withId:(id)result;

/*!
 @brief Returns a default thread factory used to create new threads.
 This factory creates all new threads used by an Executor in the
 same <code>ThreadGroup</code>. Each new
 thread is created as a non-daemon thread with priority set to
 the smaller of <code>Thread.NORM_PRIORITY</code> and the maximum
 priority permitted in the thread group.  New threads have names
 accessible via <code>Thread.getName</code> of
 <em>pool-N-thread-M</em>, where <em>N</em> is the sequence
 number of this factory, and <em>M</em> is the sequence number
 of the thread created by this factory.
 @return a thread factory
 */
+ (id<JavaUtilConcurrentThreadFactory>)defaultThreadFactory;

/*!
 @brief Creates a thread pool that creates new threads as needed, but
 will reuse previously constructed threads when they are
 available.
 These pools will typically improve the performance
 of programs that execute many short-lived asynchronous tasks.
 Calls to <code>execute</code> will reuse previously constructed
 threads if available. If no existing thread is available, a new
 thread will be created and added to the pool. Threads that have
 not been used for sixty seconds are terminated and removed from
 the cache. Thus, a pool that remains idle for long enough will
 not consume any resources. Note that pools with similar
 properties but different details (for example, timeout parameters)
 may be created using <code>ThreadPoolExecutor</code> constructors.
 @return the newly created thread pool
 */
+ (id<JavaUtilConcurrentExecutorService>)newCachedThreadPool OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a thread pool that creates new threads as needed, but
 will reuse previously constructed threads when they are
 available, and uses the provided
 ThreadFactory to create new threads when needed.
 @param threadFactory the factory to use when creating new threads
 @return the newly created thread pool
 @throws NullPointerException if threadFactory is null
 */
+ (id<JavaUtilConcurrentExecutorService>)newCachedThreadPoolWithJavaUtilConcurrentThreadFactory:(id<JavaUtilConcurrentThreadFactory>)threadFactory OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a thread pool that reuses a fixed number of threads
 operating off a shared unbounded queue.
 At any point, at most
 <code>nThreads</code> threads will be active processing tasks.
 If additional tasks are submitted when all threads are active,
 they will wait in the queue until a thread is available.
 If any thread terminates due to a failure during execution
 prior to shutdown, a new one will take its place if needed to
 execute subsequent tasks.  The threads in the pool will exist
 until it is explicitly <code>shutdown</code>.
 @param nThreads the number of threads in the pool
 @return the newly created thread pool
 @throws IllegalArgumentException if <code>nThreads <= 0</code>
 */
+ (id<JavaUtilConcurrentExecutorService>)newFixedThreadPoolWithInt:(jint)nThreads OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a thread pool that reuses a fixed number of threads
 operating off a shared unbounded queue, using the provided
 ThreadFactory to create new threads when needed.
 At any point,
 at most <code>nThreads</code> threads will be active processing
 tasks.  If additional tasks are submitted when all threads are
 active, they will wait in the queue until a thread is
 available.  If any thread terminates due to a failure during
 execution prior to shutdown, a new one will take its place if
 needed to execute subsequent tasks.  The threads in the pool will
 exist until it is explicitly <code>shutdown</code>
 .
 @param nThreads the number of threads in the pool
 @param threadFactory the factory to use when creating new threads
 @return the newly created thread pool
 @throws NullPointerException if threadFactory is null
 @throws IllegalArgumentException if <code>nThreads <= 0</code>
 */
+ (id<JavaUtilConcurrentExecutorService>)newFixedThreadPoolWithInt:(jint)nThreads
                               withJavaUtilConcurrentThreadFactory:(id<JavaUtilConcurrentThreadFactory>)threadFactory OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a thread pool that can schedule commands to run after a
 given delay, or to execute periodically.
 @param corePoolSize the number of threads to keep in the pool,
 even if they are idle
 @return a newly created scheduled thread pool
 @throws IllegalArgumentException if <code>corePoolSize < 0</code>
 */
+ (id<JavaUtilConcurrentScheduledExecutorService>)newScheduledThreadPoolWithInt:(jint)corePoolSize OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a thread pool that can schedule commands to run after a
 given delay, or to execute periodically.
 @param corePoolSize the number of threads to keep in the pool,
 even if they are idle
 @param threadFactory the factory to use when the executor
 creates a new thread
 @return a newly created scheduled thread pool
 @throws IllegalArgumentException if <code>corePoolSize < 0</code>
 @throws NullPointerException if threadFactory is null
 */
+ (id<JavaUtilConcurrentScheduledExecutorService>)newScheduledThreadPoolWithInt:(jint)corePoolSize
                                            withJavaUtilConcurrentThreadFactory:(id<JavaUtilConcurrentThreadFactory>)threadFactory OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an Executor that uses a single worker thread operating
 off an unbounded queue.
 (Note however that if this single
 thread terminates due to a failure during execution prior to
 shutdown, a new one will take its place if needed to execute
 subsequent tasks.)  Tasks are guaranteed to execute
 sequentially, and no more than one task will be active at any
 given time. Unlike the otherwise equivalent
 <code>newFixedThreadPool(1)</code> the returned executor is
 guaranteed not to be reconfigurable to use additional threads.
 @return the newly created single-threaded Executor
 */
+ (id<JavaUtilConcurrentExecutorService>)newSingleThreadExecutor OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an Executor that uses a single worker thread operating
 off an unbounded queue, and uses the provided ThreadFactory to
 create a new thread when needed.
 Unlike the otherwise
 equivalent <code>newFixedThreadPool(1, threadFactory)</code> the
 returned executor is guaranteed not to be reconfigurable to use
 additional threads.
 @param threadFactory the factory to use when creating new
 threads
 @return the newly created single-threaded Executor
 @throws NullPointerException if threadFactory is null
 */
+ (id<JavaUtilConcurrentExecutorService>)newSingleThreadExecutorWithJavaUtilConcurrentThreadFactory:(id<JavaUtilConcurrentThreadFactory>)threadFactory OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a single-threaded executor that can schedule commands
 to run after a given delay, or to execute periodically.
 (Note however that if this single
 thread terminates due to a failure during execution prior to
 shutdown, a new one will take its place if needed to execute
 subsequent tasks.)  Tasks are guaranteed to execute
 sequentially, and no more than one task will be active at any
 given time. Unlike the otherwise equivalent
 <code>newScheduledThreadPool(1)</code> the returned executor is
 guaranteed not to be reconfigurable to use additional threads.
 @return the newly created scheduled executor
 */
+ (id<JavaUtilConcurrentScheduledExecutorService>)newSingleThreadScheduledExecutor OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a single-threaded executor that can schedule commands
 to run after a given delay, or to execute periodically.
 (Note
 however that if this single thread terminates due to a failure
 during execution prior to shutdown, a new one will take its
 place if needed to execute subsequent tasks.)  Tasks are
 guaranteed to execute sequentially, and no more than one task
 will be active at any given time. Unlike the otherwise
 equivalent <code>newScheduledThreadPool(1, threadFactory)</code>
 the returned executor is guaranteed not to be reconfigurable to
 use additional threads.
 @param threadFactory the factory to use when creating new
 threads
 @return a newly created scheduled executor
 @throws NullPointerException if threadFactory is null
 */
+ (id<JavaUtilConcurrentScheduledExecutorService>)newSingleThreadScheduledExecutorWithJavaUtilConcurrentThreadFactory:(id<JavaUtilConcurrentThreadFactory>)threadFactory OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a work-stealing thread pool using all
 <code>available processors</code>
 as its target parallelism level.
 @return the newly created thread pool
 @since 1.8
 */
+ (id<JavaUtilConcurrentExecutorService>)newWorkStealingPool OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a thread pool that maintains enough threads to support
 the given parallelism level, and may use multiple queues to
 reduce contention.
 The parallelism level corresponds to the
 maximum number of threads actively engaged in, or available to
 engage in, task processing. The actual number of threads may
 grow and shrink dynamically. A work-stealing pool makes no
 guarantees about the order in which submitted tasks are
 executed.
 @param parallelism the targeted parallelism level
 @return the newly created thread pool
 @throws IllegalArgumentException if <code>parallelism <= 0</code>
 @since 1.8
 */
+ (id<JavaUtilConcurrentExecutorService>)newWorkStealingPoolWithInt:(jint)parallelism OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Legacy security code; do not use.
 */
+ (id<JavaUtilConcurrentCallable>)privilegedCallableWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable;

/*!
 @brief Legacy security code; do not use.
 */
+ (id<JavaUtilConcurrentCallable>)privilegedCallableUsingCurrentClassLoaderWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable;

/*!
 @brief Legacy security code; do not use.
 */
+ (id<JavaUtilConcurrentThreadFactory>)privilegedThreadFactory;

/*!
 @brief Returns an object that delegates all defined <code>ExecutorService</code>
  methods to the given executor, but not any
 other methods that might otherwise be accessible using
 casts.
 This provides a way to safely "freeze" configuration and
 disallow tuning of a given concrete implementation.
 @param executor the underlying implementation
 @return an <code>ExecutorService</code> instance
 @throws NullPointerException if executor null
 */
+ (id<JavaUtilConcurrentExecutorService>)unconfigurableExecutorServiceWithJavaUtilConcurrentExecutorService:(id<JavaUtilConcurrentExecutorService>)executor;

/*!
 @brief Returns an object that delegates all defined <code>ScheduledExecutorService</code>
  methods to the given executor, but
 not any other methods that might otherwise be accessible using
 casts.
 This provides a way to safely "freeze" configuration and
 disallow tuning of a given concrete implementation.
 @param executor the underlying implementation
 @return a <code>ScheduledExecutorService</code> instance
 @throws NullPointerException if executor null
 */
+ (id<JavaUtilConcurrentScheduledExecutorService>)unconfigurableScheduledExecutorServiceWithJavaUtilConcurrentScheduledExecutorService:(id<JavaUtilConcurrentScheduledExecutorService>)executor;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentExecutors)

FOUNDATION_EXPORT id<JavaUtilConcurrentExecutorService> JavaUtilConcurrentExecutors_newFixedThreadPoolWithInt_(jint nThreads);

FOUNDATION_EXPORT id<JavaUtilConcurrentExecutorService> JavaUtilConcurrentExecutors_newWorkStealingPoolWithInt_(jint parallelism);

FOUNDATION_EXPORT id<JavaUtilConcurrentExecutorService> JavaUtilConcurrentExecutors_newWorkStealingPool();

FOUNDATION_EXPORT id<JavaUtilConcurrentExecutorService> JavaUtilConcurrentExecutors_newFixedThreadPoolWithInt_withJavaUtilConcurrentThreadFactory_(jint nThreads, id<JavaUtilConcurrentThreadFactory> threadFactory);

FOUNDATION_EXPORT id<JavaUtilConcurrentExecutorService> JavaUtilConcurrentExecutors_newSingleThreadExecutor();

FOUNDATION_EXPORT id<JavaUtilConcurrentExecutorService> JavaUtilConcurrentExecutors_newSingleThreadExecutorWithJavaUtilConcurrentThreadFactory_(id<JavaUtilConcurrentThreadFactory> threadFactory);

FOUNDATION_EXPORT id<JavaUtilConcurrentExecutorService> JavaUtilConcurrentExecutors_newCachedThreadPool();

FOUNDATION_EXPORT id<JavaUtilConcurrentExecutorService> JavaUtilConcurrentExecutors_newCachedThreadPoolWithJavaUtilConcurrentThreadFactory_(id<JavaUtilConcurrentThreadFactory> threadFactory);

FOUNDATION_EXPORT id<JavaUtilConcurrentScheduledExecutorService> JavaUtilConcurrentExecutors_newSingleThreadScheduledExecutor();

FOUNDATION_EXPORT id<JavaUtilConcurrentScheduledExecutorService> JavaUtilConcurrentExecutors_newSingleThreadScheduledExecutorWithJavaUtilConcurrentThreadFactory_(id<JavaUtilConcurrentThreadFactory> threadFactory);

FOUNDATION_EXPORT id<JavaUtilConcurrentScheduledExecutorService> JavaUtilConcurrentExecutors_newScheduledThreadPoolWithInt_(jint corePoolSize);

FOUNDATION_EXPORT id<JavaUtilConcurrentScheduledExecutorService> JavaUtilConcurrentExecutors_newScheduledThreadPoolWithInt_withJavaUtilConcurrentThreadFactory_(jint corePoolSize, id<JavaUtilConcurrentThreadFactory> threadFactory);

FOUNDATION_EXPORT id<JavaUtilConcurrentExecutorService> JavaUtilConcurrentExecutors_unconfigurableExecutorServiceWithJavaUtilConcurrentExecutorService_(id<JavaUtilConcurrentExecutorService> executor);

FOUNDATION_EXPORT id<JavaUtilConcurrentScheduledExecutorService> JavaUtilConcurrentExecutors_unconfigurableScheduledExecutorServiceWithJavaUtilConcurrentScheduledExecutorService_(id<JavaUtilConcurrentScheduledExecutorService> executor);

FOUNDATION_EXPORT id<JavaUtilConcurrentThreadFactory> JavaUtilConcurrentExecutors_defaultThreadFactory();

FOUNDATION_EXPORT id<JavaUtilConcurrentThreadFactory> JavaUtilConcurrentExecutors_privilegedThreadFactory();

FOUNDATION_EXPORT id<JavaUtilConcurrentCallable> JavaUtilConcurrentExecutors_callableWithJavaLangRunnable_withId_(id<JavaLangRunnable> task, id result);

FOUNDATION_EXPORT id<JavaUtilConcurrentCallable> JavaUtilConcurrentExecutors_callableWithJavaLangRunnable_(id<JavaLangRunnable> task);

FOUNDATION_EXPORT id<JavaUtilConcurrentCallable> JavaUtilConcurrentExecutors_callableWithJavaSecurityPrivilegedAction_(id<JavaSecurityPrivilegedAction> action);

FOUNDATION_EXPORT id<JavaUtilConcurrentCallable> JavaUtilConcurrentExecutors_callableWithJavaSecurityPrivilegedExceptionAction_(id<JavaSecurityPrivilegedExceptionAction> action);

FOUNDATION_EXPORT id<JavaUtilConcurrentCallable> JavaUtilConcurrentExecutors_privilegedCallableWithJavaUtilConcurrentCallable_(id<JavaUtilConcurrentCallable> callable);

FOUNDATION_EXPORT id<JavaUtilConcurrentCallable> JavaUtilConcurrentExecutors_privilegedCallableUsingCurrentClassLoaderWithJavaUtilConcurrentCallable_(id<JavaUtilConcurrentCallable> callable);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentExecutors)

#endif

#if !defined (JavaUtilConcurrentExecutors_RunnableAdapter_) && (JavaUtilConcurrentExecutors_INCLUDE_ALL || defined(JavaUtilConcurrentExecutors_RunnableAdapter_INCLUDE))
#define JavaUtilConcurrentExecutors_RunnableAdapter_

#define JavaUtilConcurrentCallable_RESTRICT 1
#define JavaUtilConcurrentCallable_INCLUDE 1
#include "../../../java/util/concurrent/Callable.h"

@protocol JavaLangRunnable;

/*!
 @brief A callable that runs given task and returns given result
 */
@interface JavaUtilConcurrentExecutors_RunnableAdapter : NSObject < JavaUtilConcurrentCallable > {
 @public
  id<JavaLangRunnable> task_;
  id result_;
}

#pragma mark Public

- (id)call;

#pragma mark Package-Private

- (instancetype)initWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                  withId:(id)result;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentExecutors_RunnableAdapter)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentExecutors_RunnableAdapter, task_, id<JavaLangRunnable>)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExecutors_RunnableAdapter, result_, id)

FOUNDATION_EXPORT void JavaUtilConcurrentExecutors_RunnableAdapter_initWithJavaLangRunnable_withId_(JavaUtilConcurrentExecutors_RunnableAdapter *self, id<JavaLangRunnable> task, id result);

FOUNDATION_EXPORT JavaUtilConcurrentExecutors_RunnableAdapter *new_JavaUtilConcurrentExecutors_RunnableAdapter_initWithJavaLangRunnable_withId_(id<JavaLangRunnable> task, id result) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentExecutors_RunnableAdapter)

#endif

#if !defined (JavaUtilConcurrentExecutors_PrivilegedCallableUsingCurrentClassLoader_) && (JavaUtilConcurrentExecutors_INCLUDE_ALL || defined(JavaUtilConcurrentExecutors_PrivilegedCallableUsingCurrentClassLoader_INCLUDE))
#define JavaUtilConcurrentExecutors_PrivilegedCallableUsingCurrentClassLoader_

#define JavaUtilConcurrentCallable_RESTRICT 1
#define JavaUtilConcurrentCallable_INCLUDE 1
#include "../../../java/util/concurrent/Callable.h"

/*!
 @brief A callable that runs under established access control settings and
 current ClassLoader
 */
@interface JavaUtilConcurrentExecutors_PrivilegedCallableUsingCurrentClassLoader : NSObject < JavaUtilConcurrentCallable >

#pragma mark Public

- (id)call;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentExecutors_PrivilegedCallableUsingCurrentClassLoader)

FOUNDATION_EXPORT void JavaUtilConcurrentExecutors_PrivilegedCallableUsingCurrentClassLoader_initWithJavaUtilConcurrentCallable_(JavaUtilConcurrentExecutors_PrivilegedCallableUsingCurrentClassLoader *self, id<JavaUtilConcurrentCallable> task);

FOUNDATION_EXPORT JavaUtilConcurrentExecutors_PrivilegedCallableUsingCurrentClassLoader *new_JavaUtilConcurrentExecutors_PrivilegedCallableUsingCurrentClassLoader_initWithJavaUtilConcurrentCallable_(id<JavaUtilConcurrentCallable> task) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentExecutors_PrivilegedCallableUsingCurrentClassLoader)

#endif

#if !defined (JavaUtilConcurrentExecutors_DefaultThreadFactory_) && (JavaUtilConcurrentExecutors_INCLUDE_ALL || defined(JavaUtilConcurrentExecutors_DefaultThreadFactory_INCLUDE))
#define JavaUtilConcurrentExecutors_DefaultThreadFactory_

#define JavaUtilConcurrentThreadFactory_RESTRICT 1
#define JavaUtilConcurrentThreadFactory_INCLUDE 1
#include "../../../java/util/concurrent/ThreadFactory.h"

@class JavaLangThread;
@protocol JavaLangRunnable;

/*!
 @brief The default thread factory
 */
@interface JavaUtilConcurrentExecutors_DefaultThreadFactory : NSObject < JavaUtilConcurrentThreadFactory >

#pragma mark Public

- (JavaLangThread *)newThreadWithJavaLangRunnable:(id<JavaLangRunnable>)r OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentExecutors_DefaultThreadFactory)

FOUNDATION_EXPORT void JavaUtilConcurrentExecutors_DefaultThreadFactory_init(JavaUtilConcurrentExecutors_DefaultThreadFactory *self);

FOUNDATION_EXPORT JavaUtilConcurrentExecutors_DefaultThreadFactory *new_JavaUtilConcurrentExecutors_DefaultThreadFactory_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentExecutors_DefaultThreadFactory)

#endif

#if !defined (JavaUtilConcurrentExecutors_PrivilegedThreadFactory_) && (JavaUtilConcurrentExecutors_INCLUDE_ALL || defined(JavaUtilConcurrentExecutors_PrivilegedThreadFactory_INCLUDE))
#define JavaUtilConcurrentExecutors_PrivilegedThreadFactory_

@class JavaLangThread;
@protocol JavaLangRunnable;

/*!
 @brief Thread factory capturing access control context and class loader
 */
@interface JavaUtilConcurrentExecutors_PrivilegedThreadFactory : JavaUtilConcurrentExecutors_DefaultThreadFactory

#pragma mark Public

- (JavaLangThread *)newThreadWithJavaLangRunnable:(id<JavaLangRunnable>)r OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentExecutors_PrivilegedThreadFactory)

FOUNDATION_EXPORT void JavaUtilConcurrentExecutors_PrivilegedThreadFactory_init(JavaUtilConcurrentExecutors_PrivilegedThreadFactory *self);

FOUNDATION_EXPORT JavaUtilConcurrentExecutors_PrivilegedThreadFactory *new_JavaUtilConcurrentExecutors_PrivilegedThreadFactory_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentExecutors_PrivilegedThreadFactory)

#endif

#if !defined (JavaUtilConcurrentExecutors_DelegatedExecutorService_) && (JavaUtilConcurrentExecutors_INCLUDE_ALL || defined(JavaUtilConcurrentExecutors_DelegatedExecutorService_INCLUDE))
#define JavaUtilConcurrentExecutors_DelegatedExecutorService_

#define JavaUtilConcurrentAbstractExecutorService_RESTRICT 1
#define JavaUtilConcurrentAbstractExecutorService_INCLUDE 1
#include "../../../java/util/concurrent/AbstractExecutorService.h"

@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentExecutorService;
@protocol JavaUtilConcurrentFuture;
@protocol JavaUtilList;

/*!
 @brief A wrapper class that exposes only the ExecutorService methods
 of an ExecutorService implementation.
 */
@interface JavaUtilConcurrentExecutors_DelegatedExecutorService : JavaUtilConcurrentAbstractExecutorService

#pragma mark Public

- (jboolean)awaitTerminationWithLong:(jlong)timeout
      withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (void)executeWithJavaLangRunnable:(id<JavaLangRunnable>)command;

- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection>)tasks;

- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection>)tasks
                                           withLong:(jlong)timeout
                     withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id)invokeAnyWithJavaUtilCollection:(id<JavaUtilCollection>)tasks;

- (id)invokeAnyWithJavaUtilCollection:(id<JavaUtilCollection>)tasks
                             withLong:(jlong)timeout
       withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (jboolean)isShutdown;

- (jboolean)isTerminated;

- (void)shutdown;

- (id<JavaUtilList>)shutdownNow;

- (id<JavaUtilConcurrentFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;

- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task;

- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                    withId:(id)result;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilConcurrentExecutorService:(id<JavaUtilConcurrentExecutorService>)executor;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentExecutors_DelegatedExecutorService)

FOUNDATION_EXPORT void JavaUtilConcurrentExecutors_DelegatedExecutorService_initWithJavaUtilConcurrentExecutorService_(JavaUtilConcurrentExecutors_DelegatedExecutorService *self, id<JavaUtilConcurrentExecutorService> executor);

FOUNDATION_EXPORT JavaUtilConcurrentExecutors_DelegatedExecutorService *new_JavaUtilConcurrentExecutors_DelegatedExecutorService_initWithJavaUtilConcurrentExecutorService_(id<JavaUtilConcurrentExecutorService> executor) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentExecutors_DelegatedExecutorService)

#endif

#if !defined (JavaUtilConcurrentExecutors_FinalizableDelegatedExecutorService_) && (JavaUtilConcurrentExecutors_INCLUDE_ALL || defined(JavaUtilConcurrentExecutors_FinalizableDelegatedExecutorService_INCLUDE))
#define JavaUtilConcurrentExecutors_FinalizableDelegatedExecutorService_

@protocol JavaUtilConcurrentExecutorService;

@interface JavaUtilConcurrentExecutors_FinalizableDelegatedExecutorService : JavaUtilConcurrentExecutors_DelegatedExecutorService

#pragma mark Protected

- (void)dealloc;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilConcurrentExecutorService:(id<JavaUtilConcurrentExecutorService>)executor;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentExecutors_FinalizableDelegatedExecutorService)

FOUNDATION_EXPORT void JavaUtilConcurrentExecutors_FinalizableDelegatedExecutorService_initWithJavaUtilConcurrentExecutorService_(JavaUtilConcurrentExecutors_FinalizableDelegatedExecutorService *self, id<JavaUtilConcurrentExecutorService> executor);

FOUNDATION_EXPORT JavaUtilConcurrentExecutors_FinalizableDelegatedExecutorService *new_JavaUtilConcurrentExecutors_FinalizableDelegatedExecutorService_initWithJavaUtilConcurrentExecutorService_(id<JavaUtilConcurrentExecutorService> executor) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentExecutors_FinalizableDelegatedExecutorService)

#endif

#if !defined (JavaUtilConcurrentExecutors_DelegatedScheduledExecutorService_) && (JavaUtilConcurrentExecutors_INCLUDE_ALL || defined(JavaUtilConcurrentExecutors_DelegatedScheduledExecutorService_INCLUDE))
#define JavaUtilConcurrentExecutors_DelegatedScheduledExecutorService_

#define JavaUtilConcurrentScheduledExecutorService_RESTRICT 1
#define JavaUtilConcurrentScheduledExecutorService_INCLUDE 1
#include "../../../java/util/concurrent/ScheduledExecutorService.h"

@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentScheduledFuture;

/*!
 @brief A wrapper class that exposes only the ScheduledExecutorService
 methods of a ScheduledExecutorService implementation.
 */
@interface JavaUtilConcurrentExecutors_DelegatedScheduledExecutorService : JavaUtilConcurrentExecutors_DelegatedExecutorService < JavaUtilConcurrentScheduledExecutorService >

#pragma mark Public

- (id<JavaUtilConcurrentScheduledFuture>)scheduleWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable
                                                                       withLong:(jlong)delay
                                                 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id<JavaUtilConcurrentScheduledFuture>)scheduleWithJavaLangRunnable:(id<JavaLangRunnable>)command
                                                             withLong:(jlong)delay
                                       withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id<JavaUtilConcurrentScheduledFuture>)scheduleAtFixedRateWithJavaLangRunnable:(id<JavaLangRunnable>)command
                                                                        withLong:(jlong)initialDelay
                                                                        withLong:(jlong)period
                                                  withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id<JavaUtilConcurrentScheduledFuture>)scheduleWithFixedDelayWithJavaLangRunnable:(id<JavaLangRunnable>)command
                                                                           withLong:(jlong)initialDelay
                                                                           withLong:(jlong)delay
                                                     withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilConcurrentScheduledExecutorService:(id<JavaUtilConcurrentScheduledExecutorService>)executor;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentExecutors_DelegatedScheduledExecutorService)

FOUNDATION_EXPORT void JavaUtilConcurrentExecutors_DelegatedScheduledExecutorService_initWithJavaUtilConcurrentScheduledExecutorService_(JavaUtilConcurrentExecutors_DelegatedScheduledExecutorService *self, id<JavaUtilConcurrentScheduledExecutorService> executor);

FOUNDATION_EXPORT JavaUtilConcurrentExecutors_DelegatedScheduledExecutorService *new_JavaUtilConcurrentExecutors_DelegatedScheduledExecutorService_initWithJavaUtilConcurrentScheduledExecutorService_(id<JavaUtilConcurrentScheduledExecutorService> executor) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentExecutors_DelegatedScheduledExecutorService)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilConcurrentExecutors_INCLUDE_ALL")
