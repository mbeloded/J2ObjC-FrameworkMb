//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/SecureClassLoader.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaSecuritySecureClassLoader_INCLUDE_ALL")
#ifdef JavaSecuritySecureClassLoader_RESTRICT
#define JavaSecuritySecureClassLoader_INCLUDE_ALL 0
#else
#define JavaSecuritySecureClassLoader_INCLUDE_ALL 1
#endif
#undef JavaSecuritySecureClassLoader_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecuritySecureClassLoader_) && (JavaSecuritySecureClassLoader_INCLUDE_ALL || defined(JavaSecuritySecureClassLoader_INCLUDE))
#define JavaSecuritySecureClassLoader_

#define JavaLangClassLoader_RESTRICT 1
#define JavaLangClassLoader_INCLUDE 1
#include "../../java/lang/ClassLoader.h"

@class IOSByteArray;
@class IOSClass;
@class JavaNioByteBuffer;
@class JavaSecurityCodeSource;
@class JavaSecurityPermissionCollection;

/*!
 @brief <code>SecureClassLoader</code> represents a <code>ClassLoader</code> which associates
 the classes it loads with a code source and provide mechanisms to allow the
 relevant permissions to be retrieved.
 */
@interface JavaSecuritySecureClassLoader : JavaLangClassLoader

#pragma mark Protected

/*!
 @brief Constructs a new instance of <code>SecureClassLoader</code>.
 The default
 parent <code>ClassLoader</code> is used.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance of <code>SecureClassLoader</code> with the specified
 parent <code>ClassLoader</code>.
 @param parent
 the parent <code>ClassLoader</code>.
 */
- (instancetype)initWithJavaLangClassLoader:(JavaLangClassLoader *)parent;

/*!
 @brief Constructs a new class from an array of bytes containing a class
 definition in class file format with an optional <code>CodeSource</code>.
 @param name
 the name of the new class.
 @param b
 a memory image of a class file.
 @param off
 the start offset in b of the class data.
 @param len
 the length of the class data.
 @param cs
 the <code>CodeSource</code>, or <code>null</code>.
 @return a new class.
 @throws IndexOutOfBoundsException
 if <code>off</code> or <code>len</code> are not valid in respect to
 <code>b</code>.
 @throws ClassFormatError
 if the specified data is not valid class data.
 @throws SecurityException
 if the package to which this class is to be added, already
 contains classes which were signed by different certificates,
 or if the class name begins with "java."
 */
- (IOSClass *)defineClassWithNSString:(NSString *)name
                        withByteArray:(IOSByteArray *)b
                              withInt:(jint)off
                              withInt:(jint)len
           withJavaSecurityCodeSource:(JavaSecurityCodeSource *)cs;

/*!
 @brief Constructs a new class from an array of bytes containing a class
 definition in class file format with an optional <code>CodeSource</code>.
 @param name
 the name of the new class.
 @param b
 a memory image of a class file.
 @param cs
 the <code>CodeSource</code>, or <code>null</code>.
 @return a new class.
 @throws ClassFormatError
 if the specified data is not valid class data.
 @throws SecurityException
 if the package to which this class is to be added, already
 contains classes which were signed by different certificates,
 or if the class name begins with "java."
 */
- (IOSClass *)defineClassWithNSString:(NSString *)name
                withJavaNioByteBuffer:(JavaNioByteBuffer *)b
           withJavaSecurityCodeSource:(JavaSecurityCodeSource *)cs;

/*!
 @brief Returns the <code>PermissionCollection</code> for the specified <code>CodeSource</code>
 .
 @param codesource
 the code source.
 @return the <code>PermissionCollection</code> for the specified <code>CodeSource</code>
 .
 */
- (JavaSecurityPermissionCollection *)getPermissionsWithJavaSecurityCodeSource:(JavaSecurityCodeSource *)codesource;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySecureClassLoader)

FOUNDATION_EXPORT void JavaSecuritySecureClassLoader_init(JavaSecuritySecureClassLoader *self);

FOUNDATION_EXPORT JavaSecuritySecureClassLoader *new_JavaSecuritySecureClassLoader_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecuritySecureClassLoader_initWithJavaLangClassLoader_(JavaSecuritySecureClassLoader *self, JavaLangClassLoader *parent);

FOUNDATION_EXPORT JavaSecuritySecureClassLoader *new_JavaSecuritySecureClassLoader_initWithJavaLangClassLoader_(JavaLangClassLoader *parent) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySecureClassLoader)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSecuritySecureClassLoader_INCLUDE_ALL")
