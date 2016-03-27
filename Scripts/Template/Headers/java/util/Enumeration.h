//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Enumeration.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaUtilEnumeration_INCLUDE_ALL")
#ifdef JavaUtilEnumeration_RESTRICT
#define JavaUtilEnumeration_INCLUDE_ALL 0
#else
#define JavaUtilEnumeration_INCLUDE_ALL 1
#endif
#undef JavaUtilEnumeration_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilEnumeration_) && (JavaUtilEnumeration_INCLUDE_ALL || defined(JavaUtilEnumeration_INCLUDE))
#define JavaUtilEnumeration_

/*!
 @brief A legacy iteration interface.
 <p>New code should use <code>Iterator</code> instead. <code>Iterator</code> replaces the
 enumeration interface and adds a way to remove elements from a collection.
 <p>If you <i>have</i> an <code>Enumeration</code> and want a <code>Collection</code>, you
 can use <code>Collections.list</code> to get a <code>List</code>.
 <p>If you <i>need</i> an <code>Enumeration</code> for a legacy API and have a
 <code>Collection</code>, you can use <code>Collections.enumeration</code>.
 @version 1.0
 - seealso: Iterator
 */
@protocol JavaUtilEnumeration < NSObject, JavaObject >

/*!
 @brief Returns whether this <code>Enumeration</code> has more elements.
 @return <code>true</code> if there are more elements, <code>false</code> otherwise.
 - seealso: #nextElement
 */
- (jboolean)hasMoreElements;

/*!
 @brief Returns the next element in this <code>Enumeration</code>.
 @return the next element..
 @throws NoSuchElementException
 if there are no more elements.
 - seealso: #hasMoreElements
 */
- (id)nextElement;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilEnumeration)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilEnumeration)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilEnumeration_INCLUDE_ALL")