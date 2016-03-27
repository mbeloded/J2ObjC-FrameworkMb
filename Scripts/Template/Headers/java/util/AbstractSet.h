//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/AbstractSet.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaUtilAbstractSet_INCLUDE_ALL")
#ifdef JavaUtilAbstractSet_RESTRICT
#define JavaUtilAbstractSet_INCLUDE_ALL 0
#else
#define JavaUtilAbstractSet_INCLUDE_ALL 1
#endif
#undef JavaUtilAbstractSet_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilAbstractSet_) && (JavaUtilAbstractSet_INCLUDE_ALL || defined(JavaUtilAbstractSet_INCLUDE))
#define JavaUtilAbstractSet_

#define JavaUtilAbstractCollection_RESTRICT 1
#define JavaUtilAbstractCollection_INCLUDE 1
#include "../../java/util/AbstractCollection.h"

#define JavaUtilSet_RESTRICT 1
#define JavaUtilSet_INCLUDE 1
#include "../../java/util/Set.h"

@protocol JavaUtilCollection;

/*!
 @brief An AbstractSet is an abstract implementation of the Set interface.
 This
 implementation does not support adding. A subclass must implement the
 abstract methods iterator() and size().
 @since 1.2
 */
@interface JavaUtilAbstractSet : JavaUtilAbstractCollection < JavaUtilSet >

#pragma mark Public

/*!
 @brief Compares the specified object to this Set and returns true if they are
 equal.
 The object must be an instance of Set and contain the same
 objects.
 @param object
 the object to compare with this set.
 @return <code>true</code> if the specified object is equal to this set,
 <code>false</code> otherwise
 - seealso: #hashCode
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief Returns the hash code for this set.
 Two set which are equal must return
 the same value. This implementation calculates the hash code by adding
 each element's hash code.
 @return the hash code of this set.
 - seealso: #equals
 */
- (NSUInteger)hash;

/*!
 @brief Removes all occurrences in this collection which are contained in the
 specified collection.
 @param collection
 the collection of objects to remove.
 @return <code>true</code> if this collection was modified, <code>false</code>
 otherwise.
 @throws UnsupportedOperationException
 if removing from this collection is not supported.
 */
- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

#pragma mark Protected

/*!
 @brief Constructs a new instance of this AbstractSet.
 */
- (instancetype)init;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilAbstractSet)

FOUNDATION_EXPORT void JavaUtilAbstractSet_init(JavaUtilAbstractSet *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilAbstractSet)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilAbstractSet_INCLUDE_ALL")
