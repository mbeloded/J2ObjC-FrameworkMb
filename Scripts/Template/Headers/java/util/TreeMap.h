//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/TreeMap.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaUtilTreeMap_INCLUDE_ALL")
#ifdef JavaUtilTreeMap_RESTRICT
#define JavaUtilTreeMap_INCLUDE_ALL 0
#else
#define JavaUtilTreeMap_INCLUDE_ALL 1
#endif
#undef JavaUtilTreeMap_RESTRICT
#ifdef JavaUtilTreeMap_AscendingSubMap_INCLUDE
#define JavaUtilTreeMap_NavigableSubMap_INCLUDE 1
#endif
#ifdef JavaUtilTreeMap_DescendingSubMap_INCLUDE
#define JavaUtilTreeMap_NavigableSubMap_INCLUDE 1
#endif
#ifdef JavaUtilTreeMap_BoundedMap_BoundedIterator_INCLUDE
#define JavaUtilTreeMap_MapIterator_INCLUDE 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilTreeMap_) && (JavaUtilTreeMap_INCLUDE_ALL || defined(JavaUtilTreeMap_INCLUDE))
#define JavaUtilTreeMap_

#define JavaUtilAbstractMap_RESTRICT 1
#define JavaUtilAbstractMap_INCLUDE 1
#include "../../java/util/AbstractMap.h"

#define JavaUtilSortedMap_RESTRICT 1
#define JavaUtilSortedMap_INCLUDE 1
#include "../../java/util/SortedMap.h"

#define JavaUtilNavigableMap_RESTRICT 1
#define JavaUtilNavigableMap_INCLUDE 1
#include "../../java/util/NavigableMap.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "../../java/io/Serializable.h"

@class JavaUtilTreeMap_Node;
@class JavaUtilTreeMap_Relation;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;
@protocol JavaUtilNavigableSet;
@protocol JavaUtilSet;

/*!
 @brief A map whose entries are sorted by their keys.
 All optional operations such as
 <code>put</code> and <code>remove</code> are supported.
 <p>This map sorts keys using either a user-supplied comparator or the key's
 natural order:
 <ul>
 <li>User supplied comparators must be able to compare any pair of keys in
 this map. If a user-supplied comparator is in use, it will be returned
 by <code>comparator</code>.
 <li>If no user-supplied comparator is supplied, keys will be sorted by
 their natural order. Keys must be <i>mutually comparable</i>: they must
 implement <code>Comparable</code> and <code>compareTo()</code>
  must be able to compare each key with any other key in
 this map. In this case <code>comparator</code> will return null.
 </ul>
 With either a comparator or a natural ordering, comparisons should be
 <i>consistent with equals</i>. An ordering is consistent with equals if for
 every pair of keys <code>a</code> and <code>b</code>, <code>a.equals(b)</code> if and only
 if <code>compare(a, b) == 0</code>.
 <p>When the ordering is not consistent with equals the behavior of this
 class is well defined but does not honor the contract specified by <code>Map</code>
 . Consider a tree map of case-insensitive strings, an ordering that is
 not consistent with equals: 
@code
     TreeMap<String, String> map = new TreeMap<String, String>(String.CASE_INSENSITIVE_ORDER);
   map.put("a", "android");
   // The Map API specifies that the next line should print "null" because
   // "a".equals("A") is false and there is no mapping for upper case "A".
   // But the case insensitive ordering says compare("a", "A") == 0. TreeMap
   // uses only comparators/comparable on keys and so this prints "android".
   System.out.println(map.get("A"));
 
@endcode
 @since 1.2
 */
@interface JavaUtilTreeMap : JavaUtilAbstractMap < JavaUtilSortedMap, JavaUtilNavigableMap, NSCopying, JavaIoSerializable > {
 @public
  id<JavaUtilComparator> comparator_;
  JavaUtilTreeMap_Node *root_;
  jint size_;
  jint modCount_;
}

#pragma mark Public

/*!
 @brief Create a natural order, empty tree map whose keys must be mutually
 comparable and non-null.
 */
- (instancetype)init;

/*!
 @brief Create a tree map ordered by <code>comparator</code>.
 This map's keys may only
 be null if <code>comparator</code> permits.
 @param comparator the comparator to order elements with, or <code>null</code> to use the natural
 ordering.
 */
- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

/*!
 @brief Create a natural order tree map populated with the key/value pairs of
 <code>copyFrom</code>.
 This map's keys must be mutually comparable and
 non-null.
 <p>Even if <code>copyFrom</code> is a <code>SortedMap</code>, the constructed map
 <strong>will not</strong> use <code>copyFrom</code>'s ordering. This
 constructor always creates a naturally-ordered map. Because the <code>TreeMap</code>
  constructor overloads are ambiguous, prefer to construct a map
 and populate it in two steps: 
@code
     TreeMap<String, Integer> customOrderedMap
       = new TreeMap<String, Integer>(copyFrom.comparator());
   customOrderedMap.putAll(copyFrom);
 
@endcode
 */
- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)copyFrom;

/*!
 @brief Create a tree map with the ordering and key/value pairs of <code>copyFrom</code>
 .
 This map's keys may only be null if the <code>copyFrom</code>'s
 ordering permits.
 <p>The constructed map <strong>will always use</strong> <code>copyFrom</code>
 's ordering. Because the <code>TreeMap</code> constructor overloads
 are ambiguous, prefer to construct a map and populate it in two steps:
 @code
     TreeMap<String, Integer> customOrderedMap
       = new TreeMap<String, Integer>(copyFrom.comparator());
   customOrderedMap.putAll(copyFrom);
 
@endcode
 */
- (instancetype)initWithJavaUtilSortedMap:(id<JavaUtilSortedMap>)copyFrom;

- (id<JavaUtilMap_Entry>)ceilingEntryWithId:(id)key;

- (id)ceilingKeyWithId:(id)key;

- (void)clear;

- (id)clone;

- (id<JavaUtilComparator>)comparator;

- (jboolean)containsKeyWithId:(id)key;

- (id<JavaUtilNavigableSet>)descendingKeySet;

- (id<JavaUtilNavigableMap>)descendingMap;

- (id<JavaUtilSet>)entrySet;

- (id<JavaUtilMap_Entry>)firstEntry;

- (id)firstKey;

- (id<JavaUtilMap_Entry>)floorEntryWithId:(id)key;

- (id)floorKeyWithId:(id)key;

- (id)getWithId:(id)key;

- (id<JavaUtilSortedMap>)headMapWithId:(id)toExclusive;

- (id<JavaUtilNavigableMap>)headMapWithId:(id)to
                              withBoolean:(jboolean)inclusive;

- (id<JavaUtilMap_Entry>)higherEntryWithId:(id)key;

- (id)higherKeyWithId:(id)key;

- (jboolean)isEmpty;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilMap_Entry>)lastEntry;

- (id)lastKey;

- (id<JavaUtilMap_Entry>)lowerEntryWithId:(id)key;

- (id)lowerKeyWithId:(id)key;

- (id<JavaUtilNavigableSet>)navigableKeySet;

- (id<JavaUtilMap_Entry>)pollFirstEntry;

- (id<JavaUtilMap_Entry>)pollLastEntry;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)removeWithId:(id)key;

- (jint)size;

- (id<JavaUtilNavigableMap>)subMapWithId:(id)from
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)to
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilSortedMap>)subMapWithId:(id)fromInclusive
                               withId:(id)toExclusive;

- (id<JavaUtilSortedMap>)tailMapWithId:(id)fromInclusive;

- (id<JavaUtilNavigableMap>)tailMapWithId:(id)from
                              withBoolean:(jboolean)inclusive;

- (id<JavaUtilCollection>)values;

#pragma mark Package-Private

/*!
 @brief Returns the number of elements in the iteration.
 */
+ (jint)countWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

/*!
 @brief Returns the node at or adjacent to the given key, creating it if requested.
 @throws ClassCastException if <code>key</code> and the tree's keys aren't mutually comparable.
 */
- (JavaUtilTreeMap_Node *)findWithId:(id)key
        withJavaUtilTreeMap_Relation:(JavaUtilTreeMap_Relation *)relation;

/*!
 @brief Returns this map's entry that has the same key and value as <code>entry</code>
 , or null if this map has no such entry.
 <p>This method uses the comparator for key equality rather than <code>equals</code>
 . If this map's comparator isn't consistent with equals (such as
 <code>String.CASE_INSENSITIVE_ORDER</code>), then <code>remove()</code> and <code>contains()</code>
  will violate the collections API.
 */
- (JavaUtilTreeMap_Node *)findByEntryWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)entry_;

- (JavaUtilTreeMap_Node *)findByObjectWithId:(id)key;

- (id)putInternalWithId:(id)key
                 withId:(id)value;

/*!
 @brief Removes <code>node</code> from this tree, rearranging the tree's structure as
 necessary.
 */
- (void)removeInternalWithJavaUtilTreeMap_Node:(JavaUtilTreeMap_Node *)node;

- (JavaUtilTreeMap_Node *)removeInternalByKeyWithId:(id)key;

@end

J2OBJC_STATIC_INIT(JavaUtilTreeMap)

J2OBJC_FIELD_SETTER(JavaUtilTreeMap, comparator_, id<JavaUtilComparator>)
J2OBJC_FIELD_SETTER(JavaUtilTreeMap, root_, JavaUtilTreeMap_Node *)

FOUNDATION_EXPORT void JavaUtilTreeMap_init(JavaUtilTreeMap *self);

FOUNDATION_EXPORT JavaUtilTreeMap *new_JavaUtilTreeMap_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilTreeMap_initWithJavaUtilMap_(JavaUtilTreeMap *self, id<JavaUtilMap> copyFrom);

FOUNDATION_EXPORT JavaUtilTreeMap *new_JavaUtilTreeMap_initWithJavaUtilMap_(id<JavaUtilMap> copyFrom) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilTreeMap_initWithJavaUtilComparator_(JavaUtilTreeMap *self, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT JavaUtilTreeMap *new_JavaUtilTreeMap_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilTreeMap_initWithJavaUtilSortedMap_(JavaUtilTreeMap *self, id<JavaUtilSortedMap> copyFrom);

FOUNDATION_EXPORT JavaUtilTreeMap *new_JavaUtilTreeMap_initWithJavaUtilSortedMap_(id<JavaUtilSortedMap> copyFrom) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT jint JavaUtilTreeMap_countWithJavaUtilIterator_(id<JavaUtilIterator> iterator);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTreeMap)

#endif

#if !defined (JavaUtilTreeMap_Relation_) && (JavaUtilTreeMap_INCLUDE_ALL || defined(JavaUtilTreeMap_Relation_INCLUDE))
#define JavaUtilTreeMap_Relation_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "../../java/lang/Enum.h"

typedef NS_ENUM(NSUInteger, JavaUtilTreeMap_Relation_Enum) {
  JavaUtilTreeMap_Relation_Enum_LOWER = 0,
  JavaUtilTreeMap_Relation_Enum_FLOOR = 1,
  JavaUtilTreeMap_Relation_Enum_EQUAL = 2,
  JavaUtilTreeMap_Relation_Enum_CREATE = 3,
  JavaUtilTreeMap_Relation_Enum_CEILING = 4,
  JavaUtilTreeMap_Relation_Enum_HIGHER = 5,
};

@interface JavaUtilTreeMap_Relation : JavaLangEnum < NSCopying >

+ (JavaUtilTreeMap_Relation *)LOWER;

+ (JavaUtilTreeMap_Relation *)FLOOR;

+ (JavaUtilTreeMap_Relation *)EQUAL;

+ (JavaUtilTreeMap_Relation *)CREATE;

+ (JavaUtilTreeMap_Relation *)CEILING;

+ (JavaUtilTreeMap_Relation *)HIGHER;

#pragma mark Package-Private

/*!
 @brief Returns a possibly-flipped relation for use in descending views.
 @param ascending false to flip; true to return this.
 */
- (JavaUtilTreeMap_Relation *)forOrderWithBoolean:(jboolean)ascending;

+ (IOSObjectArray *)values;

+ (JavaUtilTreeMap_Relation *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;
- (JavaUtilTreeMap_Relation_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaUtilTreeMap_Relation)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaUtilTreeMap_Relation *JavaUtilTreeMap_Relation_values_[];

inline JavaUtilTreeMap_Relation *JavaUtilTreeMap_Relation_get_LOWER();
J2OBJC_ENUM_CONSTANT(JavaUtilTreeMap_Relation, LOWER)

inline JavaUtilTreeMap_Relation *JavaUtilTreeMap_Relation_get_FLOOR();
J2OBJC_ENUM_CONSTANT(JavaUtilTreeMap_Relation, FLOOR)

inline JavaUtilTreeMap_Relation *JavaUtilTreeMap_Relation_get_EQUAL();
J2OBJC_ENUM_CONSTANT(JavaUtilTreeMap_Relation, EQUAL)

inline JavaUtilTreeMap_Relation *JavaUtilTreeMap_Relation_get_CREATE();
J2OBJC_ENUM_CONSTANT(JavaUtilTreeMap_Relation, CREATE)

inline JavaUtilTreeMap_Relation *JavaUtilTreeMap_Relation_get_CEILING();
J2OBJC_ENUM_CONSTANT(JavaUtilTreeMap_Relation, CEILING)

inline JavaUtilTreeMap_Relation *JavaUtilTreeMap_Relation_get_HIGHER();
J2OBJC_ENUM_CONSTANT(JavaUtilTreeMap_Relation, HIGHER)

FOUNDATION_EXPORT IOSObjectArray *JavaUtilTreeMap_Relation_values();

FOUNDATION_EXPORT JavaUtilTreeMap_Relation *JavaUtilTreeMap_Relation_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaUtilTreeMap_Relation *JavaUtilTreeMap_Relation_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTreeMap_Relation)

#endif

#if !defined (JavaUtilTreeMap_Node_) && (JavaUtilTreeMap_INCLUDE_ALL || defined(JavaUtilTreeMap_Node_INCLUDE))
#define JavaUtilTreeMap_Node_

#define JavaUtilMap_RESTRICT 1
#define JavaUtilMap_Entry_INCLUDE 1
#include "../../java/util/Map.h"

@interface JavaUtilTreeMap_Node : NSObject < JavaUtilMap_Entry > {
 @public
  __weak JavaUtilTreeMap_Node *parent_;
  JavaUtilTreeMap_Node *left_;
  JavaUtilTreeMap_Node *right_;
  id key_;
  id value_;
  jint height_;
}

#pragma mark Public

- (jboolean)isEqual:(id)o;

/*!
 @brief Returns the first node in this subtree.
 */
- (JavaUtilTreeMap_Node *)first;

- (id)getKey;

- (id)getValue;

- (NSUInteger)hash;

/*!
 @brief Returns the last node in this subtree.
 */
- (JavaUtilTreeMap_Node *)last;

/*!
 @brief Returns the previous node in an inorder traversal, or null if this is
 the first node in the tree.
 */
- (JavaUtilTreeMap_Node *)prev;

- (id)setValueWithId:(id)value;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilTreeMap_Node:(JavaUtilTreeMap_Node *)parent
                                      withId:(id)key;

- (JavaUtilTreeMap_Node *)copy__WithJavaUtilTreeMap_Node:(JavaUtilTreeMap_Node *)parent OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns the next node in an inorder traversal, or null if this is the
 last node in the tree.
 */
- (JavaUtilTreeMap_Node *)next;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTreeMap_Node)

J2OBJC_FIELD_SETTER(JavaUtilTreeMap_Node, left_, JavaUtilTreeMap_Node *)
J2OBJC_FIELD_SETTER(JavaUtilTreeMap_Node, right_, JavaUtilTreeMap_Node *)
J2OBJC_FIELD_SETTER(JavaUtilTreeMap_Node, key_, id)
J2OBJC_FIELD_SETTER(JavaUtilTreeMap_Node, value_, id)

FOUNDATION_EXPORT void JavaUtilTreeMap_Node_initWithJavaUtilTreeMap_Node_withId_(JavaUtilTreeMap_Node *self, JavaUtilTreeMap_Node *parent, id key);

FOUNDATION_EXPORT JavaUtilTreeMap_Node *new_JavaUtilTreeMap_Node_initWithJavaUtilTreeMap_Node_withId_(JavaUtilTreeMap_Node *parent, id key) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTreeMap_Node)

#endif

#if !defined (JavaUtilTreeMap_MapIterator_) && (JavaUtilTreeMap_INCLUDE_ALL || defined(JavaUtilTreeMap_MapIterator_INCLUDE))
#define JavaUtilTreeMap_MapIterator_

#define JavaUtilIterator_RESTRICT 1
#define JavaUtilIterator_INCLUDE 1
#include "../../java/util/Iterator.h"

@class JavaUtilTreeMap;
@class JavaUtilTreeMap_Node;

/*!
 @brief Walk the nodes of the tree left-to-right or right-to-left.
 Note that in
 descending iterations, <code>next</code> will return the previous node.
 */
@interface JavaUtilTreeMap_MapIterator : NSObject < JavaUtilIterator > {
 @public
  JavaUtilTreeMap_Node *next_;
  JavaUtilTreeMap_Node *last_;
  jint expectedModCount_;
}

#pragma mark Public

- (jboolean)hasNext;

- (void)remove;

#pragma mark Protected

- (JavaUtilTreeMap_Node *)stepBackward;

- (JavaUtilTreeMap_Node *)stepForward;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilTreeMap:(JavaUtilTreeMap *)outer$
               withJavaUtilTreeMap_Node:(JavaUtilTreeMap_Node *)next;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTreeMap_MapIterator)

J2OBJC_FIELD_SETTER(JavaUtilTreeMap_MapIterator, next_, JavaUtilTreeMap_Node *)
J2OBJC_FIELD_SETTER(JavaUtilTreeMap_MapIterator, last_, JavaUtilTreeMap_Node *)

FOUNDATION_EXPORT void JavaUtilTreeMap_MapIterator_initWithJavaUtilTreeMap_withJavaUtilTreeMap_Node_(JavaUtilTreeMap_MapIterator *self, JavaUtilTreeMap *outer$, JavaUtilTreeMap_Node *next);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTreeMap_MapIterator)

#endif

#if !defined (JavaUtilTreeMap_EntrySet_) && (JavaUtilTreeMap_INCLUDE_ALL || defined(JavaUtilTreeMap_EntrySet_INCLUDE))
#define JavaUtilTreeMap_EntrySet_

#define JavaUtilAbstractSet_RESTRICT 1
#define JavaUtilAbstractSet_INCLUDE 1
#include "../../java/util/AbstractSet.h"

@class JavaUtilTreeMap;
@protocol JavaUtilIterator;

@interface JavaUtilTreeMap_EntrySet : JavaUtilAbstractSet

#pragma mark Public

- (void)clear;

- (jboolean)containsWithId:(id)o;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)o;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilTreeMap:(JavaUtilTreeMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTreeMap_EntrySet)

FOUNDATION_EXPORT void JavaUtilTreeMap_EntrySet_initWithJavaUtilTreeMap_(JavaUtilTreeMap_EntrySet *self, JavaUtilTreeMap *outer$);

FOUNDATION_EXPORT JavaUtilTreeMap_EntrySet *new_JavaUtilTreeMap_EntrySet_initWithJavaUtilTreeMap_(JavaUtilTreeMap *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTreeMap_EntrySet)

#endif

#if !defined (JavaUtilTreeMap_KeySet_) && (JavaUtilTreeMap_INCLUDE_ALL || defined(JavaUtilTreeMap_KeySet_INCLUDE))
#define JavaUtilTreeMap_KeySet_

#define JavaUtilAbstractSet_RESTRICT 1
#define JavaUtilAbstractSet_INCLUDE 1
#include "../../java/util/AbstractSet.h"

#define JavaUtilNavigableSet_RESTRICT 1
#define JavaUtilNavigableSet_INCLUDE 1
#include "../../java/util/NavigableSet.h"

@class JavaUtilTreeMap;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilSortedSet;

@interface JavaUtilTreeMap_KeySet : JavaUtilAbstractSet < JavaUtilNavigableSet >

#pragma mark Public

- (id)ceilingWithId:(id)key;

- (void)clear;

- (id<JavaUtilComparator>)comparator;

- (jboolean)containsWithId:(id)o;

- (id<JavaUtilIterator>)descendingIterator;

- (id<JavaUtilNavigableSet>)descendingSet;

- (id)first;

- (id)floorWithId:(id)key;

- (id<JavaUtilSortedSet>)headSetWithId:(id)toExclusive;

- (id<JavaUtilNavigableSet>)headSetWithId:(id)to
                              withBoolean:(jboolean)inclusive;

- (id)higherWithId:(id)key;

- (id<JavaUtilIterator>)iterator;

- (id)last;

- (id)lowerWithId:(id)key;

- (id)pollFirst;

- (id)pollLast;

- (jboolean)removeWithId:(id)key;

- (jint)size;

- (id<JavaUtilNavigableSet>)subSetWithId:(id)from
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)to
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilSortedSet>)subSetWithId:(id)fromInclusive
                               withId:(id)toExclusive;

- (id<JavaUtilSortedSet>)tailSetWithId:(id)fromInclusive;

- (id<JavaUtilNavigableSet>)tailSetWithId:(id)from
                              withBoolean:(jboolean)inclusive;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilTreeMap:(JavaUtilTreeMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTreeMap_KeySet)

FOUNDATION_EXPORT void JavaUtilTreeMap_KeySet_initWithJavaUtilTreeMap_(JavaUtilTreeMap_KeySet *self, JavaUtilTreeMap *outer$);

FOUNDATION_EXPORT JavaUtilTreeMap_KeySet *new_JavaUtilTreeMap_KeySet_initWithJavaUtilTreeMap_(JavaUtilTreeMap *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTreeMap_KeySet)

#endif

#if !defined (JavaUtilTreeMap_ValuesCollection_) && (JavaUtilTreeMap_INCLUDE_ALL || defined(JavaUtilTreeMap_ValuesCollection_INCLUDE))
#define JavaUtilTreeMap_ValuesCollection_

#define JavaUtilAbstractCollection_RESTRICT 1
#define JavaUtilAbstractCollection_INCLUDE 1
#include "../../java/util/AbstractCollection.h"

@class JavaUtilTreeMap;
@protocol JavaUtilIterator;

@interface JavaUtilTreeMap_ValuesCollection : JavaUtilAbstractCollection

#pragma mark Public

- (id<JavaUtilIterator>)iterator;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilTreeMap:(JavaUtilTreeMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTreeMap_ValuesCollection)

FOUNDATION_EXPORT void JavaUtilTreeMap_ValuesCollection_initWithJavaUtilTreeMap_(JavaUtilTreeMap_ValuesCollection *self, JavaUtilTreeMap *outer$);

FOUNDATION_EXPORT JavaUtilTreeMap_ValuesCollection *new_JavaUtilTreeMap_ValuesCollection_initWithJavaUtilTreeMap_(JavaUtilTreeMap *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTreeMap_ValuesCollection)

#endif

#if !defined (JavaUtilTreeMap_Bound_) && (JavaUtilTreeMap_INCLUDE_ALL || defined(JavaUtilTreeMap_Bound_INCLUDE))
#define JavaUtilTreeMap_Bound_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "../../java/lang/Enum.h"

typedef NS_ENUM(NSUInteger, JavaUtilTreeMap_Bound_Enum) {
  JavaUtilTreeMap_Bound_Enum_INCLUSIVE = 0,
  JavaUtilTreeMap_Bound_Enum_EXCLUSIVE = 1,
  JavaUtilTreeMap_Bound_Enum_NO_BOUND = 2,
};

@interface JavaUtilTreeMap_Bound : JavaLangEnum < NSCopying >

+ (JavaUtilTreeMap_Bound *)INCLUSIVE;

+ (JavaUtilTreeMap_Bound *)EXCLUSIVE;

+ (JavaUtilTreeMap_Bound *)NO_BOUND;

#pragma mark Public

- (NSString *)leftCapWithId:(id)from;

- (NSString *)rightCapWithId:(id)to;

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (JavaUtilTreeMap_Bound *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;
- (JavaUtilTreeMap_Bound_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaUtilTreeMap_Bound)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaUtilTreeMap_Bound *JavaUtilTreeMap_Bound_values_[];

inline JavaUtilTreeMap_Bound *JavaUtilTreeMap_Bound_get_INCLUSIVE();
J2OBJC_ENUM_CONSTANT(JavaUtilTreeMap_Bound, INCLUSIVE)

inline JavaUtilTreeMap_Bound *JavaUtilTreeMap_Bound_get_EXCLUSIVE();
J2OBJC_ENUM_CONSTANT(JavaUtilTreeMap_Bound, EXCLUSIVE)

inline JavaUtilTreeMap_Bound *JavaUtilTreeMap_Bound_get_NO_BOUND();
J2OBJC_ENUM_CONSTANT(JavaUtilTreeMap_Bound, NO_BOUND)

FOUNDATION_EXPORT IOSObjectArray *JavaUtilTreeMap_Bound_values();

FOUNDATION_EXPORT JavaUtilTreeMap_Bound *JavaUtilTreeMap_Bound_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaUtilTreeMap_Bound *JavaUtilTreeMap_Bound_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTreeMap_Bound)

#endif

#if !defined (JavaUtilTreeMap_BoundedMap_) && (JavaUtilTreeMap_INCLUDE_ALL || defined(JavaUtilTreeMap_BoundedMap_INCLUDE))
#define JavaUtilTreeMap_BoundedMap_

#define JavaUtilAbstractMap_RESTRICT 1
#define JavaUtilAbstractMap_INCLUDE 1
#include "../../java/util/AbstractMap.h"

#define JavaUtilNavigableMap_RESTRICT 1
#define JavaUtilNavigableMap_INCLUDE 1
#include "../../java/util/NavigableMap.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "../../java/io/Serializable.h"

@class JavaUtilTreeMap;
@class JavaUtilTreeMap_Bound;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilMap_Entry;
@protocol JavaUtilNavigableSet;
@protocol JavaUtilSet;

/*!
 @brief A map with optional limits on its range.
 */
@interface JavaUtilTreeMap_BoundedMap : JavaUtilAbstractMap < JavaUtilNavigableMap, JavaIoSerializable >

#pragma mark Public

- (id<JavaUtilMap_Entry>)ceilingEntryWithId:(id)key;

- (id)ceilingKeyWithId:(id)key;

- (id<JavaUtilComparator>)comparator;

- (jboolean)containsKeyWithId:(id)key;

- (id<JavaUtilNavigableSet>)descendingKeySet;

- (id<JavaUtilNavigableMap>)descendingMap;

- (id<JavaUtilSet>)entrySet;

- (id<JavaUtilMap_Entry>)firstEntry;

- (id)firstKey;

- (id<JavaUtilMap_Entry>)floorEntryWithId:(id)key;

- (id)floorKeyWithId:(id)key;

- (id)getWithId:(id)key;

- (id<JavaUtilNavigableMap>)headMapWithId:(id)toExclusive;

- (id<JavaUtilNavigableMap>)headMapWithId:(id)to
                              withBoolean:(jboolean)inclusive;

- (id<JavaUtilMap_Entry>)higherEntryWithId:(id)key;

- (id)higherKeyWithId:(id)key;

- (jboolean)isEmpty;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilMap_Entry>)lastEntry;

- (id)lastKey;

- (id<JavaUtilMap_Entry>)lowerEntryWithId:(id)key;

- (id)lowerKeyWithId:(id)key;

- (id<JavaUtilNavigableSet>)navigableKeySet;

- (id<JavaUtilMap_Entry>)pollFirstEntry;

- (id<JavaUtilMap_Entry>)pollLastEntry;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)removeWithId:(id)key;

- (jint)size;

- (id<JavaUtilNavigableMap>)subMapWithId:(id)from
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)to
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilNavigableMap>)subMapWithId:(id)fromInclusive
                                  withId:(id)toExclusive;

- (id<JavaUtilNavigableMap>)tailMapWithId:(id)fromInclusive;

- (id<JavaUtilNavigableMap>)tailMapWithId:(id)from
                              withBoolean:(jboolean)inclusive;

- (id<JavaUtilCollection>)values;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilTreeMap:(JavaUtilTreeMap *)outer$
                            withBoolean:(jboolean)ascending
                                 withId:(id)from
              withJavaUtilTreeMap_Bound:(JavaUtilTreeMap_Bound *)fromBound
                                 withId:(id)to
              withJavaUtilTreeMap_Bound:(JavaUtilTreeMap_Bound *)toBound;

- (id)writeReplace;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTreeMap_BoundedMap)

FOUNDATION_EXPORT void JavaUtilTreeMap_BoundedMap_initWithJavaUtilTreeMap_withBoolean_withId_withJavaUtilTreeMap_Bound_withId_withJavaUtilTreeMap_Bound_(JavaUtilTreeMap_BoundedMap *self, JavaUtilTreeMap *outer$, jboolean ascending, id from, JavaUtilTreeMap_Bound *fromBound, id to, JavaUtilTreeMap_Bound *toBound);

FOUNDATION_EXPORT JavaUtilTreeMap_BoundedMap *new_JavaUtilTreeMap_BoundedMap_initWithJavaUtilTreeMap_withBoolean_withId_withJavaUtilTreeMap_Bound_withId_withJavaUtilTreeMap_Bound_(JavaUtilTreeMap *outer$, jboolean ascending, id from, JavaUtilTreeMap_Bound *fromBound, id to, JavaUtilTreeMap_Bound *toBound) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTreeMap_BoundedMap)

#endif

#if !defined (JavaUtilTreeMap_BoundedMap_BoundedIterator_) && (JavaUtilTreeMap_INCLUDE_ALL || defined(JavaUtilTreeMap_BoundedMap_BoundedIterator_INCLUDE))
#define JavaUtilTreeMap_BoundedMap_BoundedIterator_

@class JavaUtilTreeMap_BoundedMap;
@class JavaUtilTreeMap_Node;

@interface JavaUtilTreeMap_BoundedMap_BoundedIterator : JavaUtilTreeMap_MapIterator

#pragma mark Protected

- (instancetype)initWithJavaUtilTreeMap_BoundedMap:(JavaUtilTreeMap_BoundedMap *)outer$
                          withJavaUtilTreeMap_Node:(JavaUtilTreeMap_Node *)next;

- (JavaUtilTreeMap_Node *)stepBackward;

- (JavaUtilTreeMap_Node *)stepForward;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTreeMap_BoundedMap_BoundedIterator)

FOUNDATION_EXPORT void JavaUtilTreeMap_BoundedMap_BoundedIterator_initWithJavaUtilTreeMap_BoundedMap_withJavaUtilTreeMap_Node_(JavaUtilTreeMap_BoundedMap_BoundedIterator *self, JavaUtilTreeMap_BoundedMap *outer$, JavaUtilTreeMap_Node *next);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTreeMap_BoundedMap_BoundedIterator)

#endif

#if !defined (JavaUtilTreeMap_BoundedMap_BoundedEntrySet_) && (JavaUtilTreeMap_INCLUDE_ALL || defined(JavaUtilTreeMap_BoundedMap_BoundedEntrySet_INCLUDE))
#define JavaUtilTreeMap_BoundedMap_BoundedEntrySet_

#define JavaUtilAbstractSet_RESTRICT 1
#define JavaUtilAbstractSet_INCLUDE 1
#include "../../java/util/AbstractSet.h"

@class JavaUtilTreeMap_BoundedMap;
@protocol JavaUtilIterator;

@interface JavaUtilTreeMap_BoundedMap_BoundedEntrySet : JavaUtilAbstractSet

#pragma mark Public

- (jboolean)containsWithId:(id)o;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)o;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilTreeMap_BoundedMap:(JavaUtilTreeMap_BoundedMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTreeMap_BoundedMap_BoundedEntrySet)

FOUNDATION_EXPORT void JavaUtilTreeMap_BoundedMap_BoundedEntrySet_initWithJavaUtilTreeMap_BoundedMap_(JavaUtilTreeMap_BoundedMap_BoundedEntrySet *self, JavaUtilTreeMap_BoundedMap *outer$);

FOUNDATION_EXPORT JavaUtilTreeMap_BoundedMap_BoundedEntrySet *new_JavaUtilTreeMap_BoundedMap_BoundedEntrySet_initWithJavaUtilTreeMap_BoundedMap_(JavaUtilTreeMap_BoundedMap *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTreeMap_BoundedMap_BoundedEntrySet)

#endif

#if !defined (JavaUtilTreeMap_BoundedMap_BoundedKeySet_) && (JavaUtilTreeMap_INCLUDE_ALL || defined(JavaUtilTreeMap_BoundedMap_BoundedKeySet_INCLUDE))
#define JavaUtilTreeMap_BoundedMap_BoundedKeySet_

#define JavaUtilAbstractSet_RESTRICT 1
#define JavaUtilAbstractSet_INCLUDE 1
#include "../../java/util/AbstractSet.h"

#define JavaUtilNavigableSet_RESTRICT 1
#define JavaUtilNavigableSet_INCLUDE 1
#include "../../java/util/NavigableSet.h"

@class JavaUtilTreeMap_BoundedMap;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilSortedSet;

@interface JavaUtilTreeMap_BoundedMap_BoundedKeySet : JavaUtilAbstractSet < JavaUtilNavigableSet >

#pragma mark Public

- (id)ceilingWithId:(id)key;

- (id<JavaUtilComparator>)comparator;

- (jboolean)containsWithId:(id)key;

- (id<JavaUtilIterator>)descendingIterator;

- (id<JavaUtilNavigableSet>)descendingSet;

- (id)first;

- (id)floorWithId:(id)key;

- (id<JavaUtilSortedSet>)headSetWithId:(id)toExclusive;

- (id<JavaUtilNavigableSet>)headSetWithId:(id)to
                              withBoolean:(jboolean)inclusive;

- (id)higherWithId:(id)key;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (id)last;

- (id)lowerWithId:(id)key;

- (id)pollFirst;

- (id)pollLast;

- (jboolean)removeWithId:(id)key;

- (jint)size;

- (id<JavaUtilNavigableSet>)subSetWithId:(id)from
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)to
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilSortedSet>)subSetWithId:(id)fromInclusive
                               withId:(id)toExclusive;

- (id<JavaUtilSortedSet>)tailSetWithId:(id)fromInclusive;

- (id<JavaUtilNavigableSet>)tailSetWithId:(id)from
                              withBoolean:(jboolean)inclusive;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilTreeMap_BoundedMap:(JavaUtilTreeMap_BoundedMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTreeMap_BoundedMap_BoundedKeySet)

FOUNDATION_EXPORT void JavaUtilTreeMap_BoundedMap_BoundedKeySet_initWithJavaUtilTreeMap_BoundedMap_(JavaUtilTreeMap_BoundedMap_BoundedKeySet *self, JavaUtilTreeMap_BoundedMap *outer$);

FOUNDATION_EXPORT JavaUtilTreeMap_BoundedMap_BoundedKeySet *new_JavaUtilTreeMap_BoundedMap_BoundedKeySet_initWithJavaUtilTreeMap_BoundedMap_(JavaUtilTreeMap_BoundedMap *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTreeMap_BoundedMap_BoundedKeySet)

#endif

#if !defined (JavaUtilTreeMap_BoundedMap_BoundedValuesCollection_) && (JavaUtilTreeMap_INCLUDE_ALL || defined(JavaUtilTreeMap_BoundedMap_BoundedValuesCollection_INCLUDE))
#define JavaUtilTreeMap_BoundedMap_BoundedValuesCollection_

#define JavaUtilAbstractCollection_RESTRICT 1
#define JavaUtilAbstractCollection_INCLUDE 1
#include "../../java/util/AbstractCollection.h"

@class JavaUtilTreeMap_BoundedMap;
@protocol JavaUtilIterator;

@interface JavaUtilTreeMap_BoundedMap_BoundedValuesCollection : JavaUtilAbstractCollection

#pragma mark Public

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilTreeMap_BoundedMap:(JavaUtilTreeMap_BoundedMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTreeMap_BoundedMap_BoundedValuesCollection)

FOUNDATION_EXPORT void JavaUtilTreeMap_BoundedMap_BoundedValuesCollection_initWithJavaUtilTreeMap_BoundedMap_(JavaUtilTreeMap_BoundedMap_BoundedValuesCollection *self, JavaUtilTreeMap_BoundedMap *outer$);

FOUNDATION_EXPORT JavaUtilTreeMap_BoundedMap_BoundedValuesCollection *new_JavaUtilTreeMap_BoundedMap_BoundedValuesCollection_initWithJavaUtilTreeMap_BoundedMap_(JavaUtilTreeMap_BoundedMap *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTreeMap_BoundedMap_BoundedValuesCollection)

#endif

#if !defined (JavaUtilTreeMap_NavigableSubMap_) && (JavaUtilTreeMap_INCLUDE_ALL || defined(JavaUtilTreeMap_NavigableSubMap_INCLUDE))
#define JavaUtilTreeMap_NavigableSubMap_

#define JavaUtilAbstractMap_RESTRICT 1
#define JavaUtilAbstractMap_INCLUDE 1
#include "../../java/util/AbstractMap.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "../../java/io/Serializable.h"

@class JavaUtilTreeMap;
@class JavaUtilTreeMap_Bound;
@protocol JavaUtilSet;

@interface JavaUtilTreeMap_NavigableSubMap : JavaUtilAbstractMap < JavaIoSerializable > {
 @public
  JavaUtilTreeMap *m_;
  id lo_;
  id hi_;
  jboolean fromStart_;
  jboolean toEnd_;
  jboolean loInclusive_;
  jboolean hiInclusive_;
}

#pragma mark Public

- (id<JavaUtilSet>)entrySet;

#pragma mark Protected

- (id)readResolve;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilTreeMap:(JavaUtilTreeMap *)delegate
                                 withId:(id)from
              withJavaUtilTreeMap_Bound:(JavaUtilTreeMap_Bound *)fromBound
                                 withId:(id)to
              withJavaUtilTreeMap_Bound:(JavaUtilTreeMap_Bound *)toBound;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTreeMap_NavigableSubMap)

J2OBJC_FIELD_SETTER(JavaUtilTreeMap_NavigableSubMap, m_, JavaUtilTreeMap *)
J2OBJC_FIELD_SETTER(JavaUtilTreeMap_NavigableSubMap, lo_, id)
J2OBJC_FIELD_SETTER(JavaUtilTreeMap_NavigableSubMap, hi_, id)

FOUNDATION_EXPORT void JavaUtilTreeMap_NavigableSubMap_initWithJavaUtilTreeMap_withId_withJavaUtilTreeMap_Bound_withId_withJavaUtilTreeMap_Bound_(JavaUtilTreeMap_NavigableSubMap *self, JavaUtilTreeMap *delegate, id from, JavaUtilTreeMap_Bound *fromBound, id to, JavaUtilTreeMap_Bound *toBound);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTreeMap_NavigableSubMap)

#endif

#if !defined (JavaUtilTreeMap_DescendingSubMap_) && (JavaUtilTreeMap_INCLUDE_ALL || defined(JavaUtilTreeMap_DescendingSubMap_INCLUDE))
#define JavaUtilTreeMap_DescendingSubMap_

@class JavaUtilTreeMap;
@class JavaUtilTreeMap_Bound;
@protocol JavaUtilComparator;

@interface JavaUtilTreeMap_DescendingSubMap : JavaUtilTreeMap_NavigableSubMap {
 @public
  id<JavaUtilComparator> reverseComparator_;
}

#pragma mark Package-Private

- (instancetype)initWithJavaUtilTreeMap:(JavaUtilTreeMap *)delegate
                                 withId:(id)from
              withJavaUtilTreeMap_Bound:(JavaUtilTreeMap_Bound *)fromBound
                                 withId:(id)to
              withJavaUtilTreeMap_Bound:(JavaUtilTreeMap_Bound *)toBound;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTreeMap_DescendingSubMap)

J2OBJC_FIELD_SETTER(JavaUtilTreeMap_DescendingSubMap, reverseComparator_, id<JavaUtilComparator>)

FOUNDATION_EXPORT void JavaUtilTreeMap_DescendingSubMap_initWithJavaUtilTreeMap_withId_withJavaUtilTreeMap_Bound_withId_withJavaUtilTreeMap_Bound_(JavaUtilTreeMap_DescendingSubMap *self, JavaUtilTreeMap *delegate, id from, JavaUtilTreeMap_Bound *fromBound, id to, JavaUtilTreeMap_Bound *toBound);

FOUNDATION_EXPORT JavaUtilTreeMap_DescendingSubMap *new_JavaUtilTreeMap_DescendingSubMap_initWithJavaUtilTreeMap_withId_withJavaUtilTreeMap_Bound_withId_withJavaUtilTreeMap_Bound_(JavaUtilTreeMap *delegate, id from, JavaUtilTreeMap_Bound *fromBound, id to, JavaUtilTreeMap_Bound *toBound) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTreeMap_DescendingSubMap)

#endif

#if !defined (JavaUtilTreeMap_AscendingSubMap_) && (JavaUtilTreeMap_INCLUDE_ALL || defined(JavaUtilTreeMap_AscendingSubMap_INCLUDE))
#define JavaUtilTreeMap_AscendingSubMap_

@class JavaUtilTreeMap;
@class JavaUtilTreeMap_Bound;

@interface JavaUtilTreeMap_AscendingSubMap : JavaUtilTreeMap_NavigableSubMap

#pragma mark Package-Private

- (instancetype)initWithJavaUtilTreeMap:(JavaUtilTreeMap *)delegate
                                 withId:(id)from
              withJavaUtilTreeMap_Bound:(JavaUtilTreeMap_Bound *)fromBound
                                 withId:(id)to
              withJavaUtilTreeMap_Bound:(JavaUtilTreeMap_Bound *)toBound;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTreeMap_AscendingSubMap)

FOUNDATION_EXPORT void JavaUtilTreeMap_AscendingSubMap_initWithJavaUtilTreeMap_withId_withJavaUtilTreeMap_Bound_withId_withJavaUtilTreeMap_Bound_(JavaUtilTreeMap_AscendingSubMap *self, JavaUtilTreeMap *delegate, id from, JavaUtilTreeMap_Bound *fromBound, id to, JavaUtilTreeMap_Bound *toBound);

FOUNDATION_EXPORT JavaUtilTreeMap_AscendingSubMap *new_JavaUtilTreeMap_AscendingSubMap_initWithJavaUtilTreeMap_withId_withJavaUtilTreeMap_Bound_withId_withJavaUtilTreeMap_Bound_(JavaUtilTreeMap *delegate, id from, JavaUtilTreeMap_Bound *fromBound, id to, JavaUtilTreeMap_Bound *toBound) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTreeMap_AscendingSubMap)

#endif

#if !defined (JavaUtilTreeMap_SubMap_) && (JavaUtilTreeMap_INCLUDE_ALL || defined(JavaUtilTreeMap_SubMap_INCLUDE))
#define JavaUtilTreeMap_SubMap_

#define JavaUtilAbstractMap_RESTRICT 1
#define JavaUtilAbstractMap_INCLUDE 1
#include "../../java/util/AbstractMap.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "../../java/io/Serializable.h"

@class JavaUtilTreeMap;
@protocol JavaUtilSet;

@interface JavaUtilTreeMap_SubMap : JavaUtilAbstractMap < JavaIoSerializable > {
 @public
  id fromKey_;
  id toKey_;
  jboolean fromStart_;
  jboolean toEnd_;
}

#pragma mark Public

- (id<JavaUtilSet>)entrySet;

#pragma mark Protected

- (id)readResolve;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilTreeMap:(JavaUtilTreeMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTreeMap_SubMap)

J2OBJC_FIELD_SETTER(JavaUtilTreeMap_SubMap, fromKey_, id)
J2OBJC_FIELD_SETTER(JavaUtilTreeMap_SubMap, toKey_, id)

FOUNDATION_EXPORT void JavaUtilTreeMap_SubMap_initWithJavaUtilTreeMap_(JavaUtilTreeMap_SubMap *self, JavaUtilTreeMap *outer$);

FOUNDATION_EXPORT JavaUtilTreeMap_SubMap *new_JavaUtilTreeMap_SubMap_initWithJavaUtilTreeMap_(JavaUtilTreeMap *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTreeMap_SubMap)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilTreeMap_INCLUDE_ALL")