//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/EnumMap.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaUtilEnumMap_INCLUDE_ALL")
#ifdef JavaUtilEnumMap_RESTRICT
#define JavaUtilEnumMap_INCLUDE_ALL 0
#else
#define JavaUtilEnumMap_INCLUDE_ALL 1
#endif
#undef JavaUtilEnumMap_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilEnumMap_) && (JavaUtilEnumMap_INCLUDE_ALL || defined(JavaUtilEnumMap_INCLUDE))
#define JavaUtilEnumMap_

#define JavaUtilAbstractMap_RESTRICT 1
#define JavaUtilAbstractMap_INCLUDE 1
#include "../../java/util/AbstractMap.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "../../java/io/Serializable.h"

#define JavaUtilMap_RESTRICT 1
#define JavaUtilMap_INCLUDE 1
#include "../../java/util/Map.h"

@class IOSBooleanArray;
@class IOSClass;
@class IOSObjectArray;
@class JavaLangEnum;
@protocol JavaUtilCollection;
@protocol JavaUtilSet;

/*!
 @brief An <code>Map</code> specialized for use with <code>Enum</code> types as keys.
 */
@interface JavaUtilEnumMap : JavaUtilAbstractMap < JavaIoSerializable, NSCopying, JavaUtilMap > {
 @public
  IOSObjectArray *keys_;
  IOSObjectArray *values_;
  IOSBooleanArray *hasMapping_;
  jint enumSize_;
}

#pragma mark Public

/*!
 @brief Constructs an empty <code>EnumMap</code> using the given key type.
 @param keyType
 the class object giving the type of the keys used by this <code>EnumMap</code>.
 @throws NullPointerException
 if <code>keyType</code> is <code>null</code>.
 */
- (instancetype)initWithIOSClass:(IOSClass *)keyType;

/*!
 @brief Constructs an <code>EnumMap</code> using the same key type as the given <code>EnumMap</code> and
 initially containing the same mappings.
 @param map
 the <code>EnumMap</code> from which this <code>EnumMap</code> is initialized.
 @throws NullPointerException
 if <code>map</code> is <code>null</code>.
 */
- (instancetype)initWithJavaUtilEnumMap:(JavaUtilEnumMap *)map;

/*!
 @brief Constructs an <code>EnumMap</code> initialized from the given map.
 If the given map
 is an <code>EnumMap</code> instance, this constructor behaves in the exactly the same
 way as <code>EnumMap.EnumMap(EnumMap)</code>}. Otherwise, the given map
 should contain at least one mapping.
 @param map
 the map from which this <code>EnumMap</code> is initialized.
 @throws IllegalArgumentException
 if <code>map</code> is not an <code>EnumMap</code> instance and does not contain
 any mappings.
 @throws NullPointerException
 if <code>map</code> is <code>null</code>.
 */
- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)map;

/*!
 @brief Removes all elements from this <code>EnumMap</code>, leaving it empty.
 - seealso: #isEmpty()
 - seealso: #size()
 */
- (void)clear;

/*!
 @brief Returns a shallow copy of this <code>EnumMap</code>.
 @return a shallow copy of this <code>EnumMap</code>.
 */
- (JavaUtilEnumMap *)clone;

/*!
 @brief Returns whether this <code>EnumMap</code> contains the specified key.
 @param key
 the key to search for.
 @return <code>true</code> if this <code>EnumMap</code> contains the specified key,
 <code>false</code> otherwise.
 */
- (jboolean)containsKeyWithId:(id)key;

/*!
 @brief Returns whether this <code>EnumMap</code> contains the specified value.
 @param value
 the value to search for.
 @return <code>true</code> if this <code>EnumMap</code> contains the specified value,
 <code>false</code> otherwise.
 */
- (jboolean)containsValueWithId:(id)value;

/*!
 @brief Returns a <code>Set</code> containing all of the mappings in this <code>EnumMap</code>.
 Each mapping is
 an instance of <code>Map.Entry</code>. As the <code>Set</code> is backed by this <code>EnumMap</code>,
 changes in one will be reflected in the other.
 <p>
 The order of the entries in the set will be the order that the enum keys
 were declared in.
 @return a <code>Set</code> of the mappings.
 */
- (id<JavaUtilSet>)entrySet;

/*!
 @brief Compares the argument to the receiver, and returns <code>true</code> if the
 specified <code>Object</code> is an <code>EnumMap</code> and both <code>EnumMap</code>s contain the same mappings.
 @param object
 the <code>Object</code> to compare with this <code>EnumMap</code>.
 @return boolean <code>true</code> if <code>object</code> is the same as this <code>EnumMap</code>,
 <code>false</code> otherwise.
 - seealso: #hashCode()
 - seealso: #entrySet()
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief Returns the value of the mapping with the specified key.
 @param key
 the key.
 @return the value of the mapping with the specified key, or <code>null</code>
 if no mapping for the specified key is found.
 */
- (id)getWithId:(id)key;

/*!
 @brief Returns a set of the keys contained in this <code>EnumMap</code>.
 The <code>Set</code> is backed by
 this <code>EnumMap</code> so changes to one are reflected in the other. The <code>Set</code> does not
 support adding.
 <p>
 The order of the set will be the order that the enum keys were declared
 in.
 @return a <code>Set</code> of the keys.
 */
- (id<JavaUtilSet>)keySet;

/*!
 @brief Maps the specified key to the specified value.
 @param key
 the key.
 @param value
 the value.
 @return the value of any previous mapping with the specified key or
 <code>null</code> if there was no mapping.
 @throws UnsupportedOperationException
 if adding to this map is not supported.
 @throws ClassCastException
 if the class of the key or value is inappropriate for this
 map.
 @throws IllegalArgumentException
 if the key or value cannot be added to this map.
 @throws NullPointerException
 if the key or value is <code>null</code> and this <code>EnumMap</code> does not
 support <code>null</code> keys or values.
 */
- (id)putWithId:(JavaLangEnum *)key
         withId:(id)value;

/*!
 @brief Copies every mapping in the specified <code>Map</code> to this <code>EnumMap</code>.
 @param map
 the <code>Map</code> to copy mappings from.
 @throws UnsupportedOperationException
 if adding to this <code>EnumMap</code> is not supported.
 @throws ClassCastException
 if the class of a key or value is inappropriate for this
 <code>EnumMap</code>.
 @throws IllegalArgumentException
 if a key or value cannot be added to this map.
 @throws NullPointerException
 if a key or value is <code>null</code> and this <code>EnumMap</code> does not
 support <code>null</code> keys or values.
 */
- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

/*!
 @brief Removes a mapping with the specified key from this <code>EnumMap</code>.
 @param key
 the key of the mapping to remove.
 @return the value of the removed mapping or <code>null</code> if no mapping
 for the specified key was found.
 @throws UnsupportedOperationException
 if removing from this <code>EnumMap</code> is not supported.
 */
- (id)removeWithId:(id)key;

/*!
 @brief Returns the number of elements in this <code>EnumMap</code>.
 @return the number of elements in this <code>EnumMap</code>.
 */
- (jint)size;

/*!
 @brief Returns a <code>Collection</code> of the values contained in this <code>EnumMap</code>.
 The returned
 <code>Collection</code> complies with the general rule specified in
 <code>Map.values()</code>. The <code>Collection</code>'s <code>Iterator</code> will return the values
 in the their corresponding keys' natural order (the <code>Enum</code> constants are
 declared in this order).
 <p>
 The order of the values in the collection will be the order that their
 corresponding enum keys were declared in.
 @return a collection of the values contained in this <code>EnumMap</code>.
 */
- (id<JavaUtilCollection>)values;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilEnumMap)

J2OBJC_FIELD_SETTER(JavaUtilEnumMap, keys_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaUtilEnumMap, values_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaUtilEnumMap, hasMapping_, IOSBooleanArray *)

FOUNDATION_EXPORT void JavaUtilEnumMap_initWithIOSClass_(JavaUtilEnumMap *self, IOSClass *keyType);

FOUNDATION_EXPORT JavaUtilEnumMap *new_JavaUtilEnumMap_initWithIOSClass_(IOSClass *keyType) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilEnumMap_initWithJavaUtilEnumMap_(JavaUtilEnumMap *self, JavaUtilEnumMap *map);

FOUNDATION_EXPORT JavaUtilEnumMap *new_JavaUtilEnumMap_initWithJavaUtilEnumMap_(JavaUtilEnumMap *map) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilEnumMap_initWithJavaUtilMap_(JavaUtilEnumMap *self, id<JavaUtilMap> map);

FOUNDATION_EXPORT JavaUtilEnumMap *new_JavaUtilEnumMap_initWithJavaUtilMap_(id<JavaUtilMap> map) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilEnumMap)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilEnumMap_INCLUDE_ALL")
