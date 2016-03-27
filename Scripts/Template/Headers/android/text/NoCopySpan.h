//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/NoCopySpan.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("AndroidTextNoCopySpan_INCLUDE_ALL")
#ifdef AndroidTextNoCopySpan_RESTRICT
#define AndroidTextNoCopySpan_INCLUDE_ALL 0
#else
#define AndroidTextNoCopySpan_INCLUDE_ALL 1
#endif
#undef AndroidTextNoCopySpan_RESTRICT
#ifdef AndroidTextNoCopySpan_Concrete_INCLUDE
#define AndroidTextNoCopySpan_INCLUDE 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (AndroidTextNoCopySpan_) && (AndroidTextNoCopySpan_INCLUDE_ALL || defined(AndroidTextNoCopySpan_INCLUDE))
#define AndroidTextNoCopySpan_

/*!
 @brief This interface should be added to a span object that should not be copied
 into a new Spenned when performing a slice or copy operation on the original
 Spanned it was placed in.
 */
@protocol AndroidTextNoCopySpan < NSObject, JavaObject >

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextNoCopySpan)

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextNoCopySpan)

#endif

#if !defined (AndroidTextNoCopySpan_Concrete_) && (AndroidTextNoCopySpan_INCLUDE_ALL || defined(AndroidTextNoCopySpan_Concrete_INCLUDE))
#define AndroidTextNoCopySpan_Concrete_

/*!
 @brief Convenience equivalent for when you would just want a new Object() for
 a span but want it to be no-copy.
 Use this instead.
 */
@interface AndroidTextNoCopySpan_Concrete : NSObject < AndroidTextNoCopySpan >

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextNoCopySpan_Concrete)

FOUNDATION_EXPORT void AndroidTextNoCopySpan_Concrete_init(AndroidTextNoCopySpan_Concrete *self);

FOUNDATION_EXPORT AndroidTextNoCopySpan_Concrete *new_AndroidTextNoCopySpan_Concrete_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextNoCopySpan_Concrete)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("AndroidTextNoCopySpan_INCLUDE_ALL")