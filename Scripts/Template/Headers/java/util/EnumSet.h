//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/EnumSet.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaUtilEnumSet_INCLUDE_ALL")
#ifdef JavaUtilEnumSet_RESTRICT
#define JavaUtilEnumSet_INCLUDE_ALL 0
#else
#define JavaUtilEnumSet_INCLUDE_ALL 1
#endif
#undef JavaUtilEnumSet_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilEnumSet_) && (JavaUtilEnumSet_INCLUDE_ALL || defined(JavaUtilEnumSet_INCLUDE))
#define JavaUtilEnumSet_

#define JavaUtilAbstractSet_RESTRICT 1
#define JavaUtilAbstractSet_INCLUDE 1
#include "../../java/util/AbstractSet.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "../../java/io/Serializable.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangEnum;
@protocol JavaUtilCollection;

/*!
 @brief An EnumSet is a specialized Set to be used with enums as keys.
 */
@interface JavaUtilEnumSet : JavaUtilAbstractSet < NSCopying, JavaIoSerializable > {
 @public
  IOSClass *elementClass_;
}

#pragma mark Public

/*!
 @brief Creates an enum set filled with all the enum elements of the specified
 <code>elementType</code>.
 @param elementType
 the class object for the elements contained.
 @return an enum set with elements solely from the specified element type.
 @throws ClassCastException
 if the specified element type is not and enum type.
 */
+ (JavaUtilEnumSet *)allOfWithIOSClass:(IOSClass *)elementType;

/*!
 @brief Creates a new enum set with the same elements as those contained in this
 enum set.
 @return a new enum set with the same elements as those contained in this
 enum set.
 */
- (JavaUtilEnumSet *)clone;

/*!
 @brief Creates an enum set.
 All the contained elements complement those from the
 specified enum set.
 @param s
 the specified enum set.
 @return an enum set with all the elements complementary to those from the
 specified enum set.
 @throws NullPointerException
 if <code>s</code> is <code>null</code>.
 */
+ (JavaUtilEnumSet *)complementOfWithJavaUtilEnumSet:(JavaUtilEnumSet *)s;

/*!
 @brief Creates an enum set.
 The contained elements are the same as those
 contained in collection <code>c</code>. If c is an enum set, invoking this
 method is the same as invoking <code>copyOf(EnumSet)</code>.
 @param c
 the collection from which to copy. if it is not an enum set,
 it must not be empty.
 @return an enum set with all the elements from the specified collection.
 @throws IllegalArgumentException
 if c is not an enum set and contains no elements at all.
 @throws NullPointerException
 if <code>c</code> is <code>null</code>.
 */
+ (JavaUtilEnumSet *)copyOfWithJavaUtilCollection:(id<JavaUtilCollection>)c OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an enum set.
 All the contained elements are of type
 Class&lt;E&gt;, and the contained elements are the same as those
 contained in <code>s</code>.
 @param s
 the enum set from which to copy.
 @return an enum set with all the elements from the specified enum set.
 @throws ClassCastException
 if the specified element type is not and enum type.
 */
+ (JavaUtilEnumSet *)copyOfWithJavaUtilEnumSet:(JavaUtilEnumSet *)s OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an empty enum set.
 The permitted elements are of type
 Class&lt;E&gt;.
 @param elementType
 the class object for the elements contained.
 @return an empty enum set, with permitted elements of type <code>elementType</code>
 .
 @throws ClassCastException
 if the specified element type is not and enum type.
 */
+ (JavaUtilEnumSet *)noneOfWithIOSClass:(IOSClass *)elementType;

/*!
 @brief Creates a new enum set, containing only the specified element.
 There are
 six overloadings of the method. They accept from one to five elements
 respectively. The sixth one receives an arbitrary number of elements, and
 runs slower than those that only receive a fixed number of elements.
 @param e
 the element to be initially contained.
 @return an enum set containing the specified element.
 @throws NullPointerException
 if <code>e</code> is <code>null</code>.
 */
+ (JavaUtilEnumSet *)ofWithJavaLangEnum:(JavaLangEnum *)e;

/*!
 @brief Creates a new enum set, containing only the specified elements.
 There are
 six overloadings of the method. They accept from one to five elements
 respectively. The sixth one receives an arbitrary number of elements, and
 runs slower than those that only receive a fixed number of elements.
 @param e1
 the initially contained element.
 @param e2
 another initially contained element.
 @return an enum set containing the specified elements.
 @throws NullPointerException
 if any of the specified elements is <code>null</code>.
 */
+ (JavaUtilEnumSet *)ofWithJavaLangEnum:(JavaLangEnum *)e1
                       withJavaLangEnum:(JavaLangEnum *)e2;

/*!
 @brief Creates a new enum set, containing only the specified elements.
 It can
 receive an arbitrary number of elements, and runs slower than those only
 receiving a fixed number of elements.
 @param start
 the first initially contained element.
 @param others
 the other initially contained elements.
 @return an enum set containing the specified elements.
 @throws NullPointerException
 if any of the specified elements is <code>null</code>.
 */
+ (JavaUtilEnumSet *)ofWithJavaLangEnum:(JavaLangEnum *)start
                  withJavaLangEnumArray:(IOSObjectArray *)others;

/*!
 @brief Creates a new enum set, containing only the specified elements.
 There are
 six overloadings of the method. They accept from one to five elements
 respectively. The sixth one receives an arbitrary number of elements, and
 runs slower than those that only receive a fixed number of elements.
 @param e1
 the initially contained element.
 @param e2
 another initially contained element.
 @param e3
 another initially contained element.
 @return an enum set containing the specified elements.
 @throws NullPointerException
 if any of the specified elements is <code>null</code>.
 */
+ (JavaUtilEnumSet *)ofWithJavaLangEnum:(JavaLangEnum *)e1
                       withJavaLangEnum:(JavaLangEnum *)e2
                       withJavaLangEnum:(JavaLangEnum *)e3;

/*!
 @brief Creates a new enum set, containing only the specified elements.
 There are
 six overloadings of the method. They accept from one to five elements
 respectively. The sixth one receives an arbitrary number of elements, and
 runs slower than those that only receive a fixed number of elements.
 @param e1
 the initially contained element.
 @param e2
 another initially contained element.
 @param e3
 another initially contained element.
 @param e4
 another initially contained element.
 @return an enum set containing the specified elements.
 @throws NullPointerException
 if any of the specified elements is <code>null</code>.
 */
+ (JavaUtilEnumSet *)ofWithJavaLangEnum:(JavaLangEnum *)e1
                       withJavaLangEnum:(JavaLangEnum *)e2
                       withJavaLangEnum:(JavaLangEnum *)e3
                       withJavaLangEnum:(JavaLangEnum *)e4;

/*!
 @brief Creates a new enum set, containing only the specified elements.
 There are
 six overloadings of the method. They accept from one to five elements
 respectively. The sixth one receives an arbitrary number of elements, and
 runs slower than those that only receive a fixed number of elements.
 @param e1
 the initially contained element.
 @param e2
 another initially contained element.
 @param e3
 another initially contained element.
 @param e4
 another initially contained element.
 @param e5
 another initially contained element.
 @return an enum set containing the specified elements.
 @throws NullPointerException
 if any of the specified elements is <code>null</code>.
 */
+ (JavaUtilEnumSet *)ofWithJavaLangEnum:(JavaLangEnum *)e1
                       withJavaLangEnum:(JavaLangEnum *)e2
                       withJavaLangEnum:(JavaLangEnum *)e3
                       withJavaLangEnum:(JavaLangEnum *)e4
                       withJavaLangEnum:(JavaLangEnum *)e5;

/*!
 @brief Creates an enum set containing all the elements within the range defined
 by <code>start</code> and <code>end</code> (inclusive).
 All the elements must be in
 order.
 @param start
 the element used to define the beginning of the range.
 @param end
 the element used to define the end of the range.
 @return an enum set with elements in the range from start to end.
 @throws NullPointerException
 if any one of <code>start</code> or <code>end</code> is <code>null</code>.
 @throws IllegalArgumentException
 if <code>start</code> is behind <code>end</code>.
 */
+ (JavaUtilEnumSet *)rangeWithJavaLangEnum:(JavaLangEnum *)start
                          withJavaLangEnum:(JavaLangEnum *)end;

#pragma mark Package-Private

- (instancetype)initWithIOSClass:(IOSClass *)cls;

- (void)complement;

- (jboolean)isValidTypeWithIOSClass:(IOSClass *)cls;

- (void)setRangeWithJavaLangEnum:(JavaLangEnum *)start
                withJavaLangEnum:(JavaLangEnum *)end;

- (id)writeReplace;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilEnumSet)

J2OBJC_FIELD_SETTER(JavaUtilEnumSet, elementClass_, IOSClass *)

FOUNDATION_EXPORT void JavaUtilEnumSet_initWithIOSClass_(JavaUtilEnumSet *self, IOSClass *cls);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_noneOfWithIOSClass_(IOSClass *elementType);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_allOfWithIOSClass_(IOSClass *elementType);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_copyOfWithJavaUtilEnumSet_(JavaUtilEnumSet *s);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_copyOfWithJavaUtilCollection_(id<JavaUtilCollection> c);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_complementOfWithJavaUtilEnumSet_(JavaUtilEnumSet *s);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_ofWithJavaLangEnum_(JavaLangEnum *e);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_ofWithJavaLangEnum_withJavaLangEnum_(JavaLangEnum *e1, JavaLangEnum *e2);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_ofWithJavaLangEnum_withJavaLangEnum_withJavaLangEnum_(JavaLangEnum *e1, JavaLangEnum *e2, JavaLangEnum *e3);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_ofWithJavaLangEnum_withJavaLangEnum_withJavaLangEnum_withJavaLangEnum_(JavaLangEnum *e1, JavaLangEnum *e2, JavaLangEnum *e3, JavaLangEnum *e4);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_ofWithJavaLangEnum_withJavaLangEnum_withJavaLangEnum_withJavaLangEnum_withJavaLangEnum_(JavaLangEnum *e1, JavaLangEnum *e2, JavaLangEnum *e3, JavaLangEnum *e4, JavaLangEnum *e5);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_ofWithJavaLangEnum_withJavaLangEnumArray_(JavaLangEnum *start, IOSObjectArray *others);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_rangeWithJavaLangEnum_withJavaLangEnum_(JavaLangEnum *start, JavaLangEnum *end);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilEnumSet)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilEnumSet_INCLUDE_ALL")
