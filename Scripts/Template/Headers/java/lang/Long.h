//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/Long.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaLangLong_INCLUDE_ALL")
#ifdef JavaLangLong_RESTRICT
#define JavaLangLong_INCLUDE_ALL 0
#else
#define JavaLangLong_INCLUDE_ALL 1
#endif
#undef JavaLangLong_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangLong_) && (JavaLangLong_INCLUDE_ALL || defined(JavaLangLong_INCLUDE))
#define JavaLangLong_

#define JavaLangComparable_RESTRICT 1
#define JavaLangComparable_INCLUDE 1
#include "../../java/lang/Comparable.h"

@class IOSClass;

/*!
 @brief The wrapper for the primitive type <code>long</code>.
 <p>
 Implementation note: The "bit twiddling" methods in this class use techniques
 described in <a href="http://www.hackersdelight.org/">Henry S. Warren,
 Jr.'s Hacker's Delight, (Addison Wesley, 2002)</a> and <a href=
 "http://graphics.stanford.edu/~seander/bithacks.html">Sean Anderson's
 Bit Twiddling Hacks.</a>
 - seealso: java.lang.Integer
 @since 1.0
 */
@interface JavaLangLong : NSNumber < JavaLangComparable >

+ (jlong)MAX_VALUE;

+ (jlong)MIN_VALUE;

+ (IOSClass *)TYPE;

+ (jint)SIZE;

#pragma mark Public

/*!
 @brief Constructs a new <code>Long</code> with the specified primitive long value.
 @param value
 the primitive long value to store in the new instance.
 */
- (instancetype)initWithLong:(jlong)value;

/*!
 @brief Constructs a new <code>Long</code> from the specified string.
 @param string
 the string representation of a long value.
 @throws NumberFormatException
 if <code>string</code> cannot be parsed as a long value.
 - seealso: #parseLong(String)
 */
- (instancetype)initWithNSString:(NSString *)string;

/*!
 @brief Counts the number of 1 bits in the specified long value; this is also
 referred to as population count.
 @param v
 the long to examine.
 @return the number of 1 bits in <code>v</code>.
 @since 1.5
 */
+ (jint)bitCountWithLong:(jlong)v;

- (jbyte)charValue;

/*!
 @brief Compares two <code>long</code> values.
 @return 0 if lhs = rhs, less than 0 if lhs &lt; rhs, and greater than 0 if lhs &gt; rhs.
 @since 1.7
 */
+ (jint)compareWithLong:(jlong)lhs
               withLong:(jlong)rhs;

/*!
 @brief Compares this object to the specified long object to determine their
 relative order.
 @param object
 the long object to compare this object to.
 @return a negative value if the value of this long is less than the value
 of <code>object</code>; 0 if the value of this long and the value of
 <code>object</code> are equal; a positive value if the value of this
 long is greater than the value of <code>object</code>.
 - seealso: java.lang.Comparable
 @since 1.2
 */
- (jint)compareToWithId:(JavaLangLong *)object;

/*!
 @brief Parses the specified string and returns a <code>Long</code> instance if the
 string can be decoded into a long value.
 The string may be an optional
 optional sign character ("-" or "+") followed by a hexadecimal ("0x..."
 or "#..."), octal ("0..."), or decimal ("...") representation of a long.
 @param string
 a string representation of a long value.
 @return a <code>Long</code> containing the value represented by <code>string</code>.
 @throws NumberFormatException
 if <code>string</code> cannot be parsed as a long value.
 */
+ (JavaLangLong *)decodeWithNSString:(NSString *)string;

- (jdouble)doubleValue;

/*!
 @brief Compares this instance with the specified object and indicates if they
 are equal.
 In order to be equal, <code>o</code> must be an instance of
 <code>Long</code> and have the same long value as this object.
 @param o
 the object to compare this long with.
 @return <code>true</code> if the specified object is equal to this
 <code>Long</code>; <code>false</code> otherwise.
 */
- (jboolean)isEqual:(id)o;

- (jfloat)floatValue;

/*!
 @brief Returns the <code>Long</code> value of the system property identified by
 <code>string</code>.
 Returns <code>null</code> if <code>string</code> is <code>null</code>
 or empty, if the property can not be found or if its value can not be
 parsed as a long.
 @param string
 the name of the requested system property.
 @return the requested property's value as a <code>Long</code> or <code>null</code>.
 */
+ (JavaLangLong *)getLongWithNSString:(NSString *)string;

/*!
 @brief Returns the <code>Long</code> value of the system property identified by
 <code>string</code>.
 Returns the specified default value if <code>string</code> is
 <code>null</code> or empty, if the property can not be found or if its value
 can not be parsed as a long.
 @param string
 the name of the requested system property.
 @param defaultValue
 the default value that is returned if there is no long system
 property with the requested name.
 @return the requested property's value as a <code>Long</code> or the default
 value.
 */
+ (JavaLangLong *)getLongWithNSString:(NSString *)string
                             withLong:(jlong)defaultValue;

/*!
 @brief Returns the <code>Long</code> value of the system property identified by
 <code>string</code>.
 Returns the specified default value if <code>string</code> is
 <code>null</code> or empty, if the property can not be found or if its value
 can not be parsed as a long.
 @param string
 the name of the requested system property.
 @param defaultValue
 the default value that is returned if there is no long system
 property with the requested name.
 @return the requested property's value as a <code>Long</code> or the default
 value.
 */
+ (JavaLangLong *)getLongWithNSString:(NSString *)string
                     withJavaLangLong:(JavaLangLong *)defaultValue;

- (NSUInteger)hash;

/*!
 @brief Determines the highest (leftmost) bit of the specified long value that is
 1 and returns the bit mask value for that bit.
 This is also referred to
 as the Most Significant 1 Bit. Returns zero if the specified long is
 zero.
 @param v
 the long to examine.
 @return the bit mask indicating the highest 1 bit in <code>v</code>.
 @since 1.5
 */
+ (jlong)highestOneBitWithLong:(jlong)v;

- (jint)intValue;

/*!
 @brief Gets the primitive value of this long.
 @return this object's primitive value.
 */
- (jlong)longLongValue;

/*!
 @brief Determines the lowest (rightmost) bit of the specified long value that is
 1 and returns the bit mask value for that bit.
 This is also referred to
 as the Least Significant 1 Bit. Returns zero if the specified long is
 zero.
 @param v
 the long to examine.
 @return the bit mask indicating the lowest 1 bit in <code>v</code>.
 @since 1.5
 */
+ (jlong)lowestOneBitWithLong:(jlong)v;

/*!
 @brief Determines the number of leading zeros in the specified long value prior
 to the <code>highest one bit</code>.
 @param v
 the long to examine.
 @return the number of leading zeros in <code>v</code>.
 @since 1.5
 */
+ (jint)numberOfLeadingZerosWithLong:(jlong)v;

/*!
 @brief Determines the number of trailing zeros in the specified long value after
 the <code>lowest one bit</code>.
 @param v
 the long to examine.
 @return the number of trailing zeros in <code>v</code>.
 @since 1.5
 */
+ (jint)numberOfTrailingZerosWithLong:(jlong)v;

/*!
 @brief Parses the specified string as a signed decimal long value.
 The ASCII
 characters \u002d ('-') and \u002b ('+') are recognized as the minus and
 plus signs.
 @param string
 the string representation of a long value.
 @return the primitive long value represented by <code>string</code>.
 @throws NumberFormatException
 if <code>string</code> cannot be parsed as a long value.
 */
+ (jlong)parseLongWithNSString:(NSString *)string;

/*!
 @brief Parses the specified string as a signed long value using the specified
 radix.
 The ASCII characters \u002d ('-') and \u002b ('+') are recognized
 as the minus and plus signs.
 @param string
 the string representation of a long value.
 @param radix
 the radix to use when parsing.
 @return the primitive long value represented by <code>string</code> using
 <code>radix</code>.
 @throws NumberFormatException
 if <code>string</code> cannot be parsed as a long value, or
 <code>radix < Character.MIN_RADIX ||
 radix > Character.MAX_RADIX</code>
 .
 */
+ (jlong)parseLongWithNSString:(NSString *)string
                       withInt:(jint)radix;

/*!
 @brief Equivalent to <code>parsePositiveLong(string, 10)</code>.
 - seealso: #parsePositiveLong(String,int)
 */
+ (jlong)parsePositiveLongWithNSString:(NSString *)string;

/*!
 @brief Parses the specified string as a positive long value using the
 specified radix. 0 is considered a positive long.
 <p>
 This method behaves the same as <code>parseLong(String,int)</code> except
 that it disallows leading '+' and '-' characters. See that method for
 error conditions.
 - seealso: #parseLong(String,int)
 */
+ (jlong)parsePositiveLongWithNSString:(NSString *)string
                               withInt:(jint)radix;

/*!
 @brief Reverses the order of the bits of the specified long value.
 @param v
 the long value for which to reverse the bit order.
 @return the reversed value.
 @since 1.5
 */
+ (jlong)reverseWithLong:(jlong)v;

/*!
 @brief Reverses the order of the bytes of the specified long value.
 @param v
 the long value for which to reverse the byte order.
 @return the reversed value.
 @since 1.5
 */
+ (jlong)reverseBytesWithLong:(jlong)v;

/*!
 @brief Rotates the bits of the specified long value to the left by the specified
 number of bits.
 @param v
 the long value to rotate left.
 @param distance
 the number of bits to rotate.
 @return the rotated value.
 @since 1.5
 */
+ (jlong)rotateLeftWithLong:(jlong)v
                    withInt:(jint)distance;

/*!
 @brief Rotates the bits of the specified long value to the right by the
 specified number of bits.
 @param v
 the long value to rotate right.
 @param distance
 the number of bits to rotate.
 @return the rotated value.
 @since 1.5
 */
+ (jlong)rotateRightWithLong:(jlong)v
                     withInt:(jint)distance;

- (jshort)shortValue;

/*!
 @brief Returns the value of the <code>signum</code> function for the specified long
 value.
 @param v
 the long value to check.
 @return -1 if <code>v</code> is negative, 1 if <code>v</code> is positive, 0 if
 <code>v</code> is zero.
 @since 1.5
 */
+ (jint)signumWithLong:(jlong)v;

/*!
 @brief Converts the specified long value into its binary string representation.
 The returned string is a concatenation of '0' and '1' characters.
 @param v
 the long value to convert.
 @return the binary string representation of <code>v</code>.
 */
+ (NSString *)toBinaryStringWithLong:(jlong)v;

/*!
 @brief Converts the specified long value into its hexadecimal string
 representation.
 The returned string is a concatenation of characters from
 '0' to '9' and 'a' to 'f'.
 @param v
 the long value to convert.
 @return the hexadecimal string representation of <code>l</code>.
 */
+ (NSString *)toHexStringWithLong:(jlong)v;

/*!
 @brief Converts the specified long value into its octal string representation.
 The returned string is a concatenation of characters from '0' to '7'.
 @param v
 the long value to convert.
 @return the octal string representation of <code>l</code>.
 */
+ (NSString *)toOctalStringWithLong:(jlong)v;

- (NSString *)description;

/*!
 @brief Converts the specified long value into its decimal string representation.
 The returned string is a concatenation of a minus sign if the number is
 negative and characters from '0' to '9'.
 @param n
 the long to convert.
 @return the decimal string representation of <code>l</code>.
 */
+ (NSString *)toStringWithLong:(jlong)n;

/*!
 @brief Converts the specified signed long value into a string representation based on
 the specified radix.
 The returned string is a concatenation of a minus
 sign if the number is negative and characters from '0' to '9' and 'a' to
 'z', depending on the radix. If <code>radix</code> is not in the interval
 defined by <code>Character.MIN_RADIX</code> and <code>Character.MAX_RADIX</code>
 then 10 is used as the base for the conversion.
 <p>This method treats its argument as signed. If you want to convert an
 unsigned value to one of the common non-decimal bases, you may find
 <code>toBinaryString</code>, <code>#toHexString</code>, or <code>toOctalString</code>
 more convenient.
 @param v
 the signed long to convert.
 @param radix
 the base to use for the conversion.
 @return the string representation of <code>v</code>.
 */
+ (NSString *)toStringWithLong:(jlong)v
                       withInt:(jint)radix;

/*!
 @brief Returns a <code>Long</code> instance for the specified long value.
 <p>
 If it is not necessary to get a new <code>Long</code> instance, it is
 recommended to use this method instead of the constructor, since it
 maintains a cache of instances which may result in better performance.
 @param v
 the long value to store in the instance.
 @return a <code>Long</code> instance containing <code>v</code>.
 @since 1.5
 */
+ (JavaLangLong *)valueOfWithLong:(jlong)v;

/*!
 @brief Parses the specified string as a signed decimal long value.
 @param string
 the string representation of a long value.
 @return a <code>Long</code> instance containing the long value represented by
 <code>string</code>.
 @throws NumberFormatException
 if <code>string</code> cannot be parsed as a long value.
 - seealso: #parseLong(String)
 */
+ (JavaLangLong *)valueOfWithNSString:(NSString *)string;

/*!
 @brief Parses the specified string as a signed long value using the specified
 radix.
 @param string
 the string representation of a long value.
 @param radix
 the radix to use when parsing.
 @return a <code>Long</code> instance containing the long value represented by
 <code>string</code> using <code>radix</code>.
 @throws NumberFormatException
 if <code>string</code> cannot be parsed as a long value, or
 <code>radix < Character.MIN_RADIX ||
 radix > Character.MAX_RADIX</code>
 .
 - seealso: #parseLong(String,int)
 */
+ (JavaLangLong *)valueOfWithNSString:(NSString *)string
                              withInt:(jint)radix;

#pragma mark Package-Private

@end

J2OBJC_STATIC_INIT(JavaLangLong)

/*!
 @brief Constant for the maximum <code>long</code> value, 2<sup>63</sup>-1.
 */
inline jlong JavaLangLong_get_MAX_VALUE();
#define JavaLangLong_MAX_VALUE 9223372036854775807LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangLong, MAX_VALUE, jlong)

/*!
 @brief Constant for the minimum <code>long</code> value, -2<sup>63</sup>.
 */
inline jlong JavaLangLong_get_MIN_VALUE();
#define JavaLangLong_MIN_VALUE ((jlong) 0x8000000000000000LL)
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangLong, MIN_VALUE, jlong)

/*!
 @brief The <code>Class</code> object that represents the primitive type <code>long</code>.
 */
inline IOSClass *JavaLangLong_get_TYPE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSClass *JavaLangLong_TYPE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaLangLong, TYPE, IOSClass *)

/*!
 @brief Constant for the number of bits needed to represent a <code>long</code> in
 two's complement form.
 @since 1.5
 */
inline jint JavaLangLong_get_SIZE();
#define JavaLangLong_SIZE 64
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangLong, SIZE, jint)

FOUNDATION_EXPORT void JavaLangLong_initWithLong_(JavaLangLong *self, jlong value);

FOUNDATION_EXPORT JavaLangLong *new_JavaLangLong_initWithLong_(jlong value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangLong_initWithNSString_(JavaLangLong *self, NSString *string);

FOUNDATION_EXPORT JavaLangLong *new_JavaLangLong_initWithNSString_(NSString *string) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT jint JavaLangLong_compareWithLong_withLong_(jlong lhs, jlong rhs);

FOUNDATION_EXPORT JavaLangLong *JavaLangLong_decodeWithNSString_(NSString *string);

FOUNDATION_EXPORT JavaLangLong *JavaLangLong_getLongWithNSString_(NSString *string);

FOUNDATION_EXPORT JavaLangLong *JavaLangLong_getLongWithNSString_withLong_(NSString *string, jlong defaultValue);

FOUNDATION_EXPORT JavaLangLong *JavaLangLong_getLongWithNSString_withJavaLangLong_(NSString *string, JavaLangLong *defaultValue);

FOUNDATION_EXPORT jlong JavaLangLong_parseLongWithNSString_(NSString *string);

FOUNDATION_EXPORT jlong JavaLangLong_parseLongWithNSString_withInt_(NSString *string, jint radix);

FOUNDATION_EXPORT jlong JavaLangLong_parsePositiveLongWithNSString_(NSString *string);

FOUNDATION_EXPORT jlong JavaLangLong_parsePositiveLongWithNSString_withInt_(NSString *string, jint radix);

FOUNDATION_EXPORT NSString *JavaLangLong_toBinaryStringWithLong_(jlong v);

FOUNDATION_EXPORT NSString *JavaLangLong_toHexStringWithLong_(jlong v);

FOUNDATION_EXPORT NSString *JavaLangLong_toOctalStringWithLong_(jlong v);

FOUNDATION_EXPORT NSString *JavaLangLong_toStringWithLong_(jlong n);

FOUNDATION_EXPORT NSString *JavaLangLong_toStringWithLong_withInt_(jlong v, jint radix);

FOUNDATION_EXPORT JavaLangLong *JavaLangLong_valueOfWithNSString_(NSString *string);

FOUNDATION_EXPORT JavaLangLong *JavaLangLong_valueOfWithNSString_withInt_(NSString *string, jint radix);

FOUNDATION_EXPORT jlong JavaLangLong_highestOneBitWithLong_(jlong v);

FOUNDATION_EXPORT jlong JavaLangLong_lowestOneBitWithLong_(jlong v);

FOUNDATION_EXPORT jint JavaLangLong_numberOfLeadingZerosWithLong_(jlong v);

FOUNDATION_EXPORT jint JavaLangLong_numberOfTrailingZerosWithLong_(jlong v);

FOUNDATION_EXPORT jint JavaLangLong_bitCountWithLong_(jlong v);

FOUNDATION_EXPORT jlong JavaLangLong_rotateLeftWithLong_withInt_(jlong v, jint distance);

FOUNDATION_EXPORT jlong JavaLangLong_rotateRightWithLong_withInt_(jlong v, jint distance);

FOUNDATION_EXPORT jlong JavaLangLong_reverseBytesWithLong_(jlong v);

FOUNDATION_EXPORT jlong JavaLangLong_reverseWithLong_(jlong v);

FOUNDATION_EXPORT jint JavaLangLong_signumWithLong_(jlong v);

FOUNDATION_EXPORT JavaLangLong *JavaLangLong_valueOfWithLong_(jlong v);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangLong)

BOXED_INC_AND_DEC(Long, longLongValue, JavaLangLong)
BOXED_COMPOUND_ASSIGN_ARITHMETIC(Long, longLongValue, jlong, JavaLangLong)
BOXED_COMPOUND_ASSIGN_MOD(Long, longLongValue, jlong, JavaLangLong)
BOXED_COMPOUND_ASSIGN_BITWISE(Long, longLongValue, jlong, JavaLangLong)
BOXED_SHIFT_ASSIGN_64(Long, longLongValue, jlong, JavaLangLong)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaLangLong_INCLUDE_ALL")
