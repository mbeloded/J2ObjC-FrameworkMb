//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/BindException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaNetBindException_INCLUDE_ALL")
#ifdef JavaNetBindException_RESTRICT
#define JavaNetBindException_INCLUDE_ALL 0
#else
#define JavaNetBindException_INCLUDE_ALL 1
#endif
#undef JavaNetBindException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetBindException_) && (JavaNetBindException_INCLUDE_ALL || defined(JavaNetBindException_INCLUDE))
#define JavaNetBindException_

#define JavaNetSocketException_RESTRICT 1
#define JavaNetSocketException_INCLUDE 1
#include "../../java/net/SocketException.h"

@class JavaLangThrowable;

/*!
 @brief A <code>BindException</code> is thrown when a process cannot bind a local
 address/port, either because it is already bound or reserved by the OS.
 <p>Most applications <strong>should not</strong> catch this exception; it is
 more robust to catch the superclass <code>SocketException</code>.
 */
@interface JavaNetBindException : JavaNetSocketException

#pragma mark Public

/*!
 @brief Constructs a new instance.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance with the given detail message.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

/*!
 @brief Constructs a new instance with the given detail message and cause.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetBindException)

FOUNDATION_EXPORT void JavaNetBindException_init(JavaNetBindException *self);

FOUNDATION_EXPORT JavaNetBindException *new_JavaNetBindException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetBindException_initWithNSString_(JavaNetBindException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaNetBindException *new_JavaNetBindException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetBindException_initWithNSString_withJavaLangThrowable_(JavaNetBindException *self, NSString *detailMessage, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaNetBindException *new_JavaNetBindException_initWithNSString_withJavaLangThrowable_(NSString *detailMessage, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetBindException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaNetBindException_INCLUDE_ALL")
