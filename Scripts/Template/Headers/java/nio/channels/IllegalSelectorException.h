//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/IllegalSelectorException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaNioChannelsIllegalSelectorException_INCLUDE_ALL")
#ifdef JavaNioChannelsIllegalSelectorException_RESTRICT
#define JavaNioChannelsIllegalSelectorException_INCLUDE_ALL 0
#else
#define JavaNioChannelsIllegalSelectorException_INCLUDE_ALL 1
#endif
#undef JavaNioChannelsIllegalSelectorException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsIllegalSelectorException_) && (JavaNioChannelsIllegalSelectorException_INCLUDE_ALL || defined(JavaNioChannelsIllegalSelectorException_INCLUDE))
#define JavaNioChannelsIllegalSelectorException_

#define JavaLangIllegalArgumentException_RESTRICT 1
#define JavaLangIllegalArgumentException_INCLUDE 1
#include "../../../java/lang/IllegalArgumentException.h"

/*!
 @brief An <code>IllegalSelectorException</code> is thrown when a call is made to register
 a channel on a selector that has been created by a different provider.
 */
@interface JavaNioChannelsIllegalSelectorException : JavaLangIllegalArgumentException

#pragma mark Public

/*!
 @brief Constructs a <code>IllegalSelectorException</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsIllegalSelectorException)

FOUNDATION_EXPORT void JavaNioChannelsIllegalSelectorException_init(JavaNioChannelsIllegalSelectorException *self);

FOUNDATION_EXPORT JavaNioChannelsIllegalSelectorException *new_JavaNioChannelsIllegalSelectorException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsIllegalSelectorException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaNioChannelsIllegalSelectorException_INCLUDE_ALL")
