//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/Member.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaLangReflectMember_INCLUDE_ALL")
#ifdef JavaLangReflectMember_RESTRICT
#define JavaLangReflectMember_INCLUDE_ALL 0
#else
#define JavaLangReflectMember_INCLUDE_ALL 1
#endif
#undef JavaLangReflectMember_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangReflectMember_) && (JavaLangReflectMember_INCLUDE_ALL || defined(JavaLangReflectMember_INCLUDE))
#define JavaLangReflectMember_

@class IOSClass;

/*!
 @brief Common interface providing access to reflective information on class members.
 - seealso: Field
 - seealso: Constructor
 - seealso: Method
 */
@protocol JavaLangReflectMember < NSObject, JavaObject >

/*!
 @brief Returns the class that declares this member.
 @return the declaring class
 */
- (IOSClass *)getDeclaringClass;

/*!
 @brief Returns the modifiers for this member.
 The <code>Modifier</code> class should
 be used to decode the result.
 @return the modifiers for this member
 - seealso: Modifier
 */
- (jint)getModifiers;

/*!
 @brief Returns the name of this member.
 @return the name of this member
 */
- (NSString *)getName;

/*!
 @brief Indicates whether or not this member is synthetic (artificially
 introduced by the compiler).
 @return <code>true</code> if this member is synthetic, <code>false</code> otherwise
 */
- (jboolean)isSynthetic;

@end

@interface JavaLangReflectMember : NSObject

+ (jint)PUBLIC;

+ (jint)DECLARED;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectMember)

/*!
 @brief Designates all public members of a class or interface (including
 inherited members).
 */
inline jint JavaLangReflectMember_get_PUBLIC();
#define JavaLangReflectMember_PUBLIC 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangReflectMember, PUBLIC, jint)

/*!
 @brief Designates all declared members of a class or interface (without
 inherited members).
 */
inline jint JavaLangReflectMember_get_DECLARED();
#define JavaLangReflectMember_DECLARED 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangReflectMember, DECLARED, jint)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectMember)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaLangReflectMember_INCLUDE_ALL")
