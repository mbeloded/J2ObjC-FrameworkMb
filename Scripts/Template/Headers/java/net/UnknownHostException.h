//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/UnknownHostException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaNetUnknownHostException_INCLUDE_ALL")
#ifdef JavaNetUnknownHostException_RESTRICT
#define JavaNetUnknownHostException_INCLUDE_ALL 0
#else
#define JavaNetUnknownHostException_INCLUDE_ALL 1
#endif
#undef JavaNetUnknownHostException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetUnknownHostException_) && (JavaNetUnknownHostException_INCLUDE_ALL || defined(JavaNetUnknownHostException_INCLUDE))
#define JavaNetUnknownHostException_

#define JavaIoIOException_RESTRICT 1
#define JavaIoIOException_INCLUDE 1
#include "../../java/io/IOException.h"

/*!
 @brief Thrown when a hostname can not be resolved.
 */
@interface JavaNetUnknownHostException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs a new <code>UnknownHostException</code> instance with no detail message.
 Callers should usually supply a detail message.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>UnknownHostException</code> instance with the given detail message.
 The detail message should generally contain the hostname and a reason for the failure,
 if known.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetUnknownHostException)

FOUNDATION_EXPORT void JavaNetUnknownHostException_init(JavaNetUnknownHostException *self);

FOUNDATION_EXPORT JavaNetUnknownHostException *new_JavaNetUnknownHostException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetUnknownHostException_initWithNSString_(JavaNetUnknownHostException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaNetUnknownHostException *new_JavaNetUnknownHostException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetUnknownHostException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaNetUnknownHostException_INCLUDE_ALL")