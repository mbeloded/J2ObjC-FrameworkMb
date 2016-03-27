//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/PriorityQueue.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaUtilPriorityQueue_INCLUDE_ALL")
#ifdef JavaUtilPriorityQueue_RESTRICT
#define JavaUtilPriorityQueue_INCLUDE_ALL 0
#else
#define JavaUtilPriorityQueue_INCLUDE_ALL 1
#endif
#undef JavaUtilPriorityQueue_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilPriorityQueue_) && (JavaUtilPriorityQueue_INCLUDE_ALL || defined(JavaUtilPriorityQueue_INCLUDE))
#define JavaUtilPriorityQueue_

#define JavaUtilAbstractQueue_RESTRICT 1
#define JavaUtilAbstractQueue_INCLUDE 1
#include "../../java/util/AbstractQueue.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "../../java/io/Serializable.h"

@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilSortedSet;

/*!
 @brief A PriorityQueue holds elements on a priority heap, which orders the elements
 according to their natural order or according to the comparator specified at
 construction time.
 If the queue uses natural ordering, only elements that are
 comparable are permitted to be inserted into the queue.
 <p>
 The least element of the specified ordering is the first retrieved with
 <code>poll()</code> and the greatest element is the last.
 <p>
 A PriorityQueue is not synchronized. If multiple threads will have to access
 it concurrently, use the <code>java.util.concurrent.PriorityBlockingQueue</code>.
 */
@interface JavaUtilPriorityQueue : JavaUtilAbstractQueue < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a priority queue with an initial capacity of 11 and natural
 ordering.
 */
- (instancetype)init;

/*!
 @brief Constructs a priority queue that contains the elements of a collection.
 The constructed priority queue has the initial capacity of 110% of the
 size of the collection. The queue uses natural ordering to order its
 elements.
 @param c
 the collection whose elements will be added to the priority
 queue to be constructed.
 @throws ClassCastException
 if any of the elements in the collection are not comparable.
 @throws NullPointerException
 if any of the elements in the collection are null.
 */
- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Constructs a priority queue with the specified capacity and natural
 ordering.
 @param initialCapacity
 the specified capacity.
 @throws IllegalArgumentException
 if the initialCapacity is less than 1.
 */
- (instancetype)initWithInt:(jint)initialCapacity;

/*!
 @brief Constructs a priority queue with the specified capacity and comparator.
 @param initialCapacity
 the specified capacity.
 @param comparator
 the specified comparator. If it is null, the natural ordering
 will be used.
 @throws IllegalArgumentException
 if the initialCapacity is less than 1.
 */
- (instancetype)initWithInt:(jint)initialCapacity
     withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

/*!
 @brief Constructs a priority queue that contains the elements of another
 priority queue.
 The constructed priority queue has the initial capacity
 of 110% of the specified one. Both priority queues have the same
 comparator.
 @param c
 the priority queue whose elements will be added to the
 priority queue to be constructed.
 */
- (instancetype)initWithJavaUtilPriorityQueue:(JavaUtilPriorityQueue *)c;

/*!
 @brief Constructs a priority queue that contains the elements of a sorted set.
 The constructed priority queue has the initial capacity of 110% of the
 size of the sorted set. The priority queue will have the same comparator
 as the sorted set.
 @param c
 the sorted set whose elements will be added to the priority
 queue to be constructed.
 */
- (instancetype)initWithJavaUtilSortedSet:(id<JavaUtilSortedSet>)c;

/*!
 @brief Adds the specified object to the priority queue.
 @param o
 the object to be added.
 @return always true.
 @throws ClassCastException
 if the element cannot be compared with the elements in the
 priority queue using the ordering of the priority queue.
 @throws NullPointerException
 if <code>o</code> is <code>null</code>.
 */
- (jboolean)addWithId:(id)o;

/*!
 @brief Removes all the elements of the priority queue.
 */
- (void)clear;

/*!
 @brief Gets the comparator of the priority queue.
 @return the comparator of the priority queue or null if the natural
 ordering is used.
 */
- (id<JavaUtilComparator>)comparator;

/*!
 @brief Gets the iterator of the priority queue, which will not return elements
 in any specified ordering.
 @return the iterator of the priority queue.
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Inserts the element to the priority queue.
 @param o
 the element to add to the priority queue.
 @return always true
 @throws ClassCastException
 if the element cannot be compared with the elements in the
 priority queue using the ordering of the priority queue.
 @throws NullPointerException
 if <code>o</code> is <code>null</code>.
 */
- (jboolean)offerWithId:(id)o;

/*!
 @brief Gets but does not remove the head of the queue.
 @return the head of the queue or null if the queue is empty.
 */
- (id)peek;

/*!
 @brief Gets and removes the head of the queue.
 @return the head of the queue or null if the queue is empty.
 */
- (id)poll;

/*!
 @brief Removes the specified object from the priority queue.
 @param o
 the object to be removed.
 @return true if the object was in the priority queue, false if the object
 was not in the priority queue.
 */
- (jboolean)removeWithId:(id)o;

/*!
 @brief Gets the size of the priority queue.
 If the size of the queue is greater
 than the Integer.MAX, then it returns Integer.MAX.
 @return the size of the priority queue.
 */
- (jint)size;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilPriorityQueue)

FOUNDATION_EXPORT void JavaUtilPriorityQueue_init(JavaUtilPriorityQueue *self);

FOUNDATION_EXPORT JavaUtilPriorityQueue *new_JavaUtilPriorityQueue_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilPriorityQueue_initWithInt_(JavaUtilPriorityQueue *self, jint initialCapacity);

FOUNDATION_EXPORT JavaUtilPriorityQueue *new_JavaUtilPriorityQueue_initWithInt_(jint initialCapacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilPriorityQueue_initWithInt_withJavaUtilComparator_(JavaUtilPriorityQueue *self, jint initialCapacity, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT JavaUtilPriorityQueue *new_JavaUtilPriorityQueue_initWithInt_withJavaUtilComparator_(jint initialCapacity, id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilPriorityQueue_initWithJavaUtilCollection_(JavaUtilPriorityQueue *self, id<JavaUtilCollection> c);

FOUNDATION_EXPORT JavaUtilPriorityQueue *new_JavaUtilPriorityQueue_initWithJavaUtilCollection_(id<JavaUtilCollection> c) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilPriorityQueue_initWithJavaUtilPriorityQueue_(JavaUtilPriorityQueue *self, JavaUtilPriorityQueue *c);

FOUNDATION_EXPORT JavaUtilPriorityQueue *new_JavaUtilPriorityQueue_initWithJavaUtilPriorityQueue_(JavaUtilPriorityQueue *c) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilPriorityQueue_initWithJavaUtilSortedSet_(JavaUtilPriorityQueue *self, id<JavaUtilSortedSet> c);

FOUNDATION_EXPORT JavaUtilPriorityQueue *new_JavaUtilPriorityQueue_initWithJavaUtilSortedSet_(id<JavaUtilSortedSet> c) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilPriorityQueue)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilPriorityQueue_INCLUDE_ALL")
