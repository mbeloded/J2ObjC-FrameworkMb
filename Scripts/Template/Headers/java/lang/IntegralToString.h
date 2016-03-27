//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/IntegralToString.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaLangIntegralToString_INCLUDE_ALL")
#ifdef JavaLangIntegralToString_RESTRICT
#define JavaLangIntegralToString_INCLUDE_ALL 0
#else
#define JavaLangIntegralToString_INCLUDE_ALL 1
#endif
#undef JavaLangIntegralToString_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangIntegralToString_) && (JavaLangIntegralToString_INCLUDE_ALL || defined(JavaLangIntegralToString_INCLUDE))
#define JavaLangIntegralToString_

@class IOSByteArray;
@class JavaLangAbstractStringBuilder;
@class JavaLangStringBuilder;

/*!
 @brief Converts integral types to strings.
 This class is public but hidden so that it can also be
 used by java.util.Formatter to speed up %d. This class is in java.lang so that it can take
 advantage of the package-private String constructor.
 The most important methods are appendInt/appendLong and intToString(int)/longToString(int).
 The former are used in the implementation of StringBuilder, StringBuffer, and Formatter, while
 the latter are used by Integer.toString and Long.toString.
 The append methods take AbstractStringBuilder rather than Appendable because the latter requires
 CharSequences, while we only have raw char[]s. Since much of the savings come from not creating
 any garbage, we can't afford temporary CharSequence instances.
 One day the performance advantage of the binary/hex/octal specializations will be small enough
 that we can lose the duplication, but until then this class offers the full set.
 */
@interface JavaLangIntegralToString : NSObject

#pragma mark Public

+ (JavaLangStringBuilder *)appendByteAsHexWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb
                                                           withByte:(jbyte)b
                                                        withBoolean:(jboolean)upperCase;

/*!
 @brief Equivalent to sb.append(Integer.toString(i)).
 */
+ (void)appendIntWithJavaLangAbstractStringBuilder:(JavaLangAbstractStringBuilder *)sb
                                           withInt:(jint)i;

/*!
 @brief Equivalent to sb.append(Long.toString(l)).
 */
+ (void)appendLongWithJavaLangAbstractStringBuilder:(JavaLangAbstractStringBuilder *)sb
                                           withLong:(jlong)l;

+ (NSString *)bytesToHexStringWithByteArray:(IOSByteArray *)bytes
                                withBoolean:(jboolean)upperCase;

+ (NSString *)byteToHexStringWithByte:(jbyte)b
                          withBoolean:(jboolean)upperCase;

+ (NSString *)intToBinaryStringWithInt:(jint)i;

+ (NSString *)intToHexStringWithInt:(jint)i
                        withBoolean:(jboolean)upperCase
                            withInt:(jint)minWidth;

+ (NSString *)intToOctalStringWithInt:(jint)i;

/*!
 @brief Equivalent to Integer.toString(i).
 */
+ (NSString *)intToStringWithInt:(jint)i;

/*!
 @brief Equivalent to Integer.toString(i, radix).
 */
+ (NSString *)intToStringWithInt:(jint)i
                         withInt:(jint)radix;

+ (NSString *)longToBinaryStringWithLong:(jlong)v;

+ (NSString *)longToHexStringWithLong:(jlong)v;

+ (NSString *)longToOctalStringWithLong:(jlong)v;

/*!
 @brief Equivalent to Long.toString(l).
 */
+ (NSString *)longToStringWithLong:(jlong)l;

/*!
 @brief Equivalent to Long.toString(v, radix).
 */
+ (NSString *)longToStringWithLong:(jlong)v
                           withInt:(jint)radix;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangIntegralToString)

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_intToStringWithInt_withInt_(jint i, jint radix);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_intToStringWithInt_(jint i);

FOUNDATION_EXPORT void JavaLangIntegralToString_appendIntWithJavaLangAbstractStringBuilder_withInt_(JavaLangAbstractStringBuilder *sb, jint i);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_longToStringWithLong_withInt_(jlong v, jint radix);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_longToStringWithLong_(jlong l);

FOUNDATION_EXPORT void JavaLangIntegralToString_appendLongWithJavaLangAbstractStringBuilder_withLong_(JavaLangAbstractStringBuilder *sb, jlong l);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_intToBinaryStringWithInt_(jint i);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_longToBinaryStringWithLong_(jlong v);

FOUNDATION_EXPORT JavaLangStringBuilder *JavaLangIntegralToString_appendByteAsHexWithJavaLangStringBuilder_withByte_withBoolean_(JavaLangStringBuilder *sb, jbyte b, jboolean upperCase);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_byteToHexStringWithByte_withBoolean_(jbyte b, jboolean upperCase);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_bytesToHexStringWithByteArray_withBoolean_(IOSByteArray *bytes, jboolean upperCase);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_intToHexStringWithInt_withBoolean_withInt_(jint i, jboolean upperCase, jint minWidth);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_longToHexStringWithLong_(jlong v);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_intToOctalStringWithInt_(jint i);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_longToOctalStringWithLong_(jlong v);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangIntegralToString)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaLangIntegralToString_INCLUDE_ALL")
