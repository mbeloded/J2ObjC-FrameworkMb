//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/SerializationHandleMap.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaIoSerializationHandleMap_INCLUDE_ALL")
#ifdef JavaIoSerializationHandleMap_RESTRICT
#define JavaIoSerializationHandleMap_INCLUDE_ALL 0
#else
#define JavaIoSerializationHandleMap_INCLUDE_ALL 1
#endif
#undef JavaIoSerializationHandleMap_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoSerializationHandleMap_) && (JavaIoSerializationHandleMap_INCLUDE_ALL || defined(JavaIoSerializationHandleMap_INCLUDE))
#define JavaIoSerializationHandleMap_

/*!
 @brief A specialization of IdentityHashMap<Object, int> for use when serializing objects.
 We need to assign each object we write an int 'handle' (densely packed but not starting
 at zero), and use the same handle any time we write the same object again.
 */
@interface JavaIoSerializationHandleMap : NSObject

#pragma mark Public

- (instancetype)init;

- (jint)getWithId:(id)key;

- (jboolean)isEmpty;

- (jint)putWithId:(id)key
          withInt:(jint)value;

- (jint)removeWithId:(id)key;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoSerializationHandleMap)

FOUNDATION_EXPORT void JavaIoSerializationHandleMap_init(JavaIoSerializationHandleMap *self);

FOUNDATION_EXPORT JavaIoSerializationHandleMap *new_JavaIoSerializationHandleMap_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoSerializationHandleMap)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaIoSerializationHandleMap_INCLUDE_ALL")