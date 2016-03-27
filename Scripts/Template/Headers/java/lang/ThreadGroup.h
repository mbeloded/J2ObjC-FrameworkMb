//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni-kernel/src/main/java/java/lang/ThreadGroup.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaLangThreadGroup_INCLUDE_ALL")
#ifdef JavaLangThreadGroup_RESTRICT
#define JavaLangThreadGroup_INCLUDE_ALL 0
#else
#define JavaLangThreadGroup_INCLUDE_ALL 1
#endif
#undef JavaLangThreadGroup_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangThreadGroup_) && (JavaLangThreadGroup_INCLUDE_ALL || defined(JavaLangThreadGroup_INCLUDE))
#define JavaLangThreadGroup_

#define JavaLangThread_RESTRICT 1
#define JavaLangThread_UncaughtExceptionHandler_INCLUDE 1
#include "../../java/lang/Thread.h"

@class IOSObjectArray;
@class JavaLangThread;
@class JavaLangThrowable;

/*!
 @brief A <code>ThreadGroup</code> is a means of organizing <code>Thread</code>s into a
 hierarchical structure.
 A <code>ThreadGroup</code> can contain zero or more
 <code>Thread</code>s and zero or more other <code>ThreadGroup</code>s. Each <code>Thread</code>
  and each <code>ThreadGroup</code> (except the root group) has a unique
 parent <code>ThreadGroup</code>. The result is a tree whose inner nodes are
 <code>ThreadGroup</code>s and whose leaf nodes are <code>Threads</code>. The unique
 root of the tree is a <code>ThreadGroup</code> that is created at VM startup and
 has the name "system". The benefit of using <code>ThreadGroup</code>s, in addition
 to the mere housekeeping aspect, is that all <code>Thread</code>s in a <code>ThreadGroup</code>
  can be manipulated together, that is, the <code>ThreadGroup</code>
 has methods that delegate to all its all <code>Thread</code>s.
 - seealso: Thread
 - seealso: SecurityManager
 */
@interface JavaLangThreadGroup : NSObject < JavaLangThread_UncaughtExceptionHandler > {
 @public
  JavaLangThreadGroup *parent_;
  jint numThreads_;
  jint numGroups_;
}

#pragma mark Public

/*!
 @brief Constructs a new ThreadGroup with the name provided.
 The new ThreadGroup
 will be child of the ThreadGroup to which the
 <code>Thread.currentThread()</code> belongs.
 @param name Name for the ThreadGroup being created
 @throws SecurityException if <code>checkAccess()</code> for the parent
 group fails with a SecurityException
 - seealso: java.lang.Thread#currentThread
 */
- (instancetype)initWithNSString:(NSString *)name;

/*!
 @brief Constructs a new ThreadGroup with the name provided, as child of the
 ThreadGroup <code>parent</code>
 @param parent Parent ThreadGroup
 @param name Name for the ThreadGroup being created
 @throws NullPointerException if <code>parent</code> is
 <code>null</code>
 @throws SecurityException if <code>checkAccess()</code> for the parent
 group fails with a SecurityException
 @throws IllegalThreadStateException if <code>parent</code> has been
 destroyed already
 */
- (instancetype)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)parent
                               withNSString:(NSString *)name;

/*!
 @brief Returns the number of Threads which are children of the receiver,
 directly or indirectly and are running.
 @return the number of children Threads
 */
- (jint)activeCount;

/*!
 @brief Returns the number of ThreadGroups which are children of the receiver,
 directly or indirectly.
 @return the number of children ThreadGroups
 */
- (jint)activeGroupCount;

/*!
 @brief Checks the accessibility of the ThreadGroup from the perspective of the
 caller.
 If there is a SecurityManager installed, calls
 <code>checkAccess</code> with the receiver as a parameter, otherwise does
 nothing.
 */
- (void)checkAccess;

/*!
 @brief Destroys the receiver and recursively all its subgroups.
 It is only legal
 to destroy a ThreadGroup that has no Threads in it.
 @throws IllegalThreadStateException if the receiver or any of its
 subgroups has been destroyed already or if it still contains
 threads.
 @throws SecurityException if <code>this.checkAccess()</code> fails with
 a SecurityException
 */
- (void)destroy;

/*!
 @brief Iterates over all active threads in this group (and its sub-groups) and
 stores the threads in the given array.
 Returns when the array is full or
 no more threads remain, whichever happens first.
 @param threads the array into which the Threads will be copied
 @return the number of Threads that were copied
 */
- (jint)enumerateWithJavaLangThreadArray:(IOSObjectArray *)threads;

/*!
 @brief Iterates over all active threads in this group (and, optionally, its
 sub-groups) and stores the threads in the given array.
 Returns when the
 array is full or no more threads remain, whichever happens first.
 @param threads the array into which the Threads will be copied
 @param recurse indicates whether Threads in subgroups should be
 recursively copied as well
 @return the number of Threads that were copied
 */
- (jint)enumerateWithJavaLangThreadArray:(IOSObjectArray *)threads
                             withBoolean:(jboolean)recurse;

/*!
 @brief Iterates over all thread groups in this group (and its sub-groups) and
 and stores the groups in the given array.
 Returns when the array is full
 or no more groups remain, whichever happens first.
 @param groups the array into which the ThreadGroups will be copied
 @return the number of ThreadGroups that were copied
 */
- (jint)enumerateWithJavaLangThreadGroupArray:(IOSObjectArray *)groups;

/*!
 @brief Iterates over all thread groups in this group (and, optionally, its
 sub-groups) and stores the groups in the given array.
 Returns when
 the array is full or no more groups remain, whichever happens first.
 @param groups the array into which the ThreadGroups will be copied
 @param recurse indicates whether ThreadGroups in subgroups should be
 recursively copied as well or not
 @return the number of ThreadGroups that were copied
 */
- (jint)enumerateWithJavaLangThreadGroupArray:(IOSObjectArray *)groups
                                  withBoolean:(jboolean)recurse;

/*!
 @brief Returns the maximum allowed priority for a Thread in the receiver.
 @return the maximum priority
 - seealso: #setMaxPriority
 */
- (jint)getMaxPriority;

/*!
 @brief Returns the name of the receiver.
 @return the receiver's name
 */
- (NSString *)getName;

/*!
 @brief Returns the receiver's parent ThreadGroup.
 It can be <code>null</code>  if the
 receiver is the the root ThreadGroup.
 @return the parent ThreadGroup
 */
- (JavaLangThreadGroup *)getParent;

/*!
 @brief Checks whether the receiver has already been destroyed.
 @return true if (and only if) the receiver has already been destroyed
 - seealso: #destroy
 */
- (jboolean)isDestroyed;

/*!
 @brief Outputs to <code>System.out</code> a text representation of the
 hierarchy of Threads and ThreadGroups in the receiver (and recursively).
 Proper indentation is done to suggest the nesting of groups inside groups
 and threads inside groups.
 */
- (void)list;

/*!
 @brief Checks whether the receiver is a direct or indirect parent group of a
 given ThreadGroup.
 @param g the potential child ThreadGroup
 @return true if (and only if) the receiver is parent of <code>g</code>
 */
- (jboolean)parentOfWithJavaLangThreadGroup:(JavaLangThreadGroup *)g;

/*!
 @brief Configures the maximum allowed priority for a Thread in the receiver and
 recursively in all its subgroups.
 One can never change the maximum priority of a ThreadGroup to be higher
 than it was. Such an attempt will not result in an exception, it will
 simply leave the ThreadGroup with its current maximum priority.
 @param newMax the new maximum priority to be set
 @throws SecurityException if <code>checkAccess()</code> fails with a
 SecurityException
 @throws IllegalArgumentException if the new priority is greater than
 Thread.MAX_PRIORITY or less than Thread.MIN_PRIORITY
 - seealso: #getMaxPriority
 */
- (void)setMaxPriorityWithInt:(jint)newMax;

/*!
 @brief Returns a string containing a concise, human-readable description of the
 receiver.
 @return a printable representation of the ThreadGroup
 */
- (NSString *)description;

/*!
 @brief Handles uncaught exceptions.
 Any uncaught exception in any Thread
 is forwarded (by the VM) to the Thread's ThreadGroup by sending this
 message (uncaughtException). This allows users to define custom
 ThreadGroup classes and custom behavior for when a Thread has an
 uncaughtException or when it does (ThreadDeath).
 @param t the Thread that terminated with an uncaught exception
 @param e the uncaught exception itself
 - seealso: ThreadDeath
 */
- (void)uncaughtExceptionWithJavaLangThread:(JavaLangThread *)t
                      withJavaLangThrowable:(JavaLangThrowable *)e;

#pragma mark Package-Private

/*!
 @brief Initialize the "main" ThreadGroup
 */
- (instancetype)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)parent;

/*!
 @brief Adds a Thread to the receiver.
 This should only be visible to class
 java.lang.Thread, and should only be called when a new Thread is created
 and initialized by the constructor.
 @param thread Thread to add to the receiver
 @throws IllegalThreadStateException if the receiver has been destroyed
 already
 - seealso: #remove(java.lang.Thread)
 */
- (void)addWithJavaLangThread:(JavaLangThread *)thread;

/*!
 @brief Removes a Thread from the receiver.
 This should only be visible to class
 java.lang.Thread, and should only be called when a Thread dies.
 @param thread Thread to remove from the receiver
 - seealso: #add(Thread)
 */
- (void)removeWithJavaLangThread:(JavaLangThread *)thread;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangThreadGroup)

J2OBJC_FIELD_SETTER(JavaLangThreadGroup, parent_, JavaLangThreadGroup *)

FOUNDATION_EXPORT void JavaLangThreadGroup_initWithNSString_(JavaLangThreadGroup *self, NSString *name);

FOUNDATION_EXPORT JavaLangThreadGroup *new_JavaLangThreadGroup_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangThreadGroup_initWithJavaLangThreadGroup_withNSString_(JavaLangThreadGroup *self, JavaLangThreadGroup *parent, NSString *name);

FOUNDATION_EXPORT JavaLangThreadGroup *new_JavaLangThreadGroup_initWithJavaLangThreadGroup_withNSString_(JavaLangThreadGroup *parent, NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangThreadGroup_initWithJavaLangThreadGroup_(JavaLangThreadGroup *self, JavaLangThreadGroup *parent);

FOUNDATION_EXPORT JavaLangThreadGroup *new_JavaLangThreadGroup_initWithJavaLangThreadGroup_(JavaLangThreadGroup *parent) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThreadGroup)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaLangThreadGroup_INCLUDE_ALL")
