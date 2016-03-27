//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/BufferUnderflowException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaNioBufferUnderflowException_INCLUDE_ALL")
#ifdef JavaNioBufferUnderflowException_RESTRICT
#define JavaNioBufferUnderflowException_INCLUDE_ALL 0
#else
#define JavaNioBufferUnderflowException_INCLUDE_ALL 1
#endif
#undef JavaNioBufferUnderflowException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioBufferUnderflowException_) && (JavaNioBufferUnderflowException_INCLUDE_ALL || defined(JavaNioBufferUnderflowException_INCLUDE))
#define JavaNioBufferUnderflowException_

#define JavaLangRuntimeException_RESTRICT 1
#define JavaLangRuntimeException_INCLUDE 1
#include "../../java/lang/RuntimeException.h"

/*!
 @brief A <code>BufferUnderflowException</code> is thrown when elements are read
 from a buffer but there are not enough remaining elements in the buffer.
 */
@interface JavaNioBufferUnderflowException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a <code>BufferUnderflowException</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioBufferUnderflowException)

FOUNDATION_EXPORT void JavaNioBufferUnderflowException_init(JavaNioBufferUnderflowException *self);

FOUNDATION_EXPORT JavaNioBufferUnderflowException *new_JavaNioBufferUnderflowException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioBufferUnderflowException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaNioBufferUnderflowException_INCLUDE_ALL")
