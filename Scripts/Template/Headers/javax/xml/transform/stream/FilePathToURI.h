//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/stream/FilePathToURI.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("JavaxXmlTransformStreamFilePathToURI_INCLUDE_ALL")
#ifdef JavaxXmlTransformStreamFilePathToURI_RESTRICT
#define JavaxXmlTransformStreamFilePathToURI_INCLUDE_ALL 0
#else
#define JavaxXmlTransformStreamFilePathToURI_INCLUDE_ALL 1
#endif
#undef JavaxXmlTransformStreamFilePathToURI_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxXmlTransformStreamFilePathToURI_) && (JavaxXmlTransformStreamFilePathToURI_INCLUDE_ALL || defined(JavaxXmlTransformStreamFilePathToURI_INCLUDE))
#define JavaxXmlTransformStreamFilePathToURI_

@interface JavaxXmlTransformStreamFilePathToURI : NSObject

#pragma mark Public

+ (NSString *)filepath2URIWithNSString:(NSString *)path;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(JavaxXmlTransformStreamFilePathToURI)

FOUNDATION_EXPORT NSString *JavaxXmlTransformStreamFilePathToURI_filepath2URIWithNSString_(NSString *path);

FOUNDATION_EXPORT void JavaxXmlTransformStreamFilePathToURI_init(JavaxXmlTransformStreamFilePathToURI *self);

FOUNDATION_EXPORT JavaxXmlTransformStreamFilePathToURI *new_JavaxXmlTransformStreamFilePathToURI_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformStreamFilePathToURI)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaxXmlTransformStreamFilePathToURI_INCLUDE_ALL")