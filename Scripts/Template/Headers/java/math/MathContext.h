//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/math/src/main/java/java/math/MathContext.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaMathMathContext_INCLUDE_ALL")
#ifdef JavaMathMathContext_RESTRICT
#define JavaMathMathContext_INCLUDE_ALL 0
#else
#define JavaMathMathContext_INCLUDE_ALL 1
#endif
#undef JavaMathMathContext_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaMathMathContext_) && (JavaMathMathContext_INCLUDE_ALL || defined(JavaMathMathContext_INCLUDE))
#define JavaMathMathContext_

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "../../java/io/Serializable.h"

@class JavaMathRoundingMode;

/*!
 @brief Immutable objects describing settings such as rounding mode and digit
 precision for the numerical operations provided by class <code>BigDecimal</code>.
 */
@interface JavaMathMathContext : NSObject < JavaIoSerializable >

+ (JavaMathMathContext *)DECIMAL128;

+ (JavaMathMathContext *)DECIMAL32;

+ (JavaMathMathContext *)DECIMAL64;

+ (JavaMathMathContext *)UNLIMITED;

#pragma mark Public

/*!
 @brief Constructs a new <code>MathContext</code> with the specified precision and
 with the rounding mode <code>HALF_UP</code>.
 If the
 precision passed is zero, then this implies that the computations have to
 be performed exact, the rounding mode in this case is irrelevant.
 @param precision
 the precision for the new <code>MathContext</code>.
 @throws IllegalArgumentException
 if <code>precision < 0</code>.
 */
- (instancetype)initWithInt:(jint)precision;

/*!
 @brief Constructs a new <code>MathContext</code> with the specified precision and
 with the specified rounding mode.
 If the precision passed is zero, then
 this implies that the computations have to be performed exact, the
 rounding mode in this case is irrelevant.
 @param precision
 the precision for the new <code>MathContext</code>.
 @param roundingMode
 the rounding mode for the new <code>MathContext</code>.
 @throws IllegalArgumentException
 if <code>precision < 0</code>.
 @throws NullPointerException
 if <code>roundingMode</code> is <code>null</code>.
 */
- (instancetype)initWithInt:(jint)precision
   withJavaMathRoundingMode:(JavaMathRoundingMode *)roundingMode;

/*!
 @brief Constructs a new <code>MathContext</code> from a string.
 The string has to
 specify the precision and the rounding mode to be used and has to follow
 the following syntax: "precision=&lt;precision&gt; roundingMode=&lt;roundingMode&gt;"
 This is the same form as the one returned by the <code>toString</code>
 method.
 @param val
 a string describing the precision and rounding mode for the
 new <code>MathContext</code>.
 @throws IllegalArgumentException
 if the string is not in the correct format or if the
 precision specified is < 0.
 */
- (instancetype)initWithNSString:(NSString *)val;

/*!
 @brief Returns true if x is a <code>MathContext</code> with the same precision
 setting and the same rounding mode as this <code>MathContext</code> instance.
 @param x
 object to be compared.
 @return <code>true</code> if this <code>MathContext</code> instance is equal to the
 <code>x</code> argument; <code>false</code> otherwise.
 */
- (jboolean)isEqual:(id)x;

/*!
 @brief Returns the precision.
 The precision is the number of digits used for an
 operation. Results are rounded to this precision. The precision is
 guaranteed to be non negative. If the precision is zero, then the
 computations have to be performed exact, results are not rounded in this
 case.
 @return the precision.
 */
- (jint)getPrecision;

/*!
 @brief Returns the rounding mode.
 The rounding mode is the strategy to be used
 to round results.
 <p>
 The rounding mode is one of
 <code>RoundingMode.UP</code>,
 <code>RoundingMode.DOWN</code>,
 <code>RoundingMode.CEILING</code>,
 <code>RoundingMode.FLOOR</code>,
 <code>RoundingMode.HALF_UP</code>,
 <code>RoundingMode.HALF_DOWN</code>,
 <code>RoundingMode.HALF_EVEN</code>, or
 <code>RoundingMode.UNNECESSARY</code>.
 @return the rounding mode.
 */
- (JavaMathRoundingMode *)getRoundingMode;

/*!
 @brief Returns the hash code for this <code>MathContext</code> instance.
 @return the hash code for this <code>MathContext</code>.
 */
- (NSUInteger)hash;

/*!
 @brief Returns the string representation for this <code>MathContext</code> instance.
 The string has the form
 <code>"precision=&lt;precision&gt; roundingMode=&lt;roundingMode&gt;"</code>
  where <code>&lt;precision&gt;</code> is an integer describing the number
 of digits used for operations and <code>&lt;roundingMode&gt;</code> is the
 string representation of the rounding mode.
 @return a string representation for this <code>MathContext</code> instance
 */
- (NSString *)description;

@end

J2OBJC_STATIC_INIT(JavaMathMathContext)

/*!
 @brief A <code>MathContext</code> which corresponds to the IEEE 754r quadruple
 decimal precision format: 34 digit precision and
 <code>RoundingMode.HALF_EVEN</code> rounding.
 */
inline JavaMathMathContext *JavaMathMathContext_get_DECIMAL128();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaMathMathContext *JavaMathMathContext_DECIMAL128;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaMathMathContext, DECIMAL128, JavaMathMathContext *)

/*!
 @brief A <code>MathContext</code> which corresponds to the IEEE 754r single decimal
 precision format: 7 digit precision and <code>RoundingMode.HALF_EVEN</code>
 rounding.
 */
inline JavaMathMathContext *JavaMathMathContext_get_DECIMAL32();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaMathMathContext *JavaMathMathContext_DECIMAL32;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaMathMathContext, DECIMAL32, JavaMathMathContext *)

/*!
 @brief A <code>MathContext</code> which corresponds to the IEEE 754r double decimal
 precision format: 16 digit precision and <code>RoundingMode.HALF_EVEN</code>
 rounding.
 */
inline JavaMathMathContext *JavaMathMathContext_get_DECIMAL64();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaMathMathContext *JavaMathMathContext_DECIMAL64;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaMathMathContext, DECIMAL64, JavaMathMathContext *)

/*!
 @brief A <code>MathContext</code> for unlimited precision with
 <code>RoundingMode.HALF_UP</code> rounding.
 */
inline JavaMathMathContext *JavaMathMathContext_get_UNLIMITED();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaMathMathContext *JavaMathMathContext_UNLIMITED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaMathMathContext, UNLIMITED, JavaMathMathContext *)

FOUNDATION_EXPORT void JavaMathMathContext_initWithInt_(JavaMathMathContext *self, jint precision);

FOUNDATION_EXPORT JavaMathMathContext *new_JavaMathMathContext_initWithInt_(jint precision) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaMathMathContext_initWithInt_withJavaMathRoundingMode_(JavaMathMathContext *self, jint precision, JavaMathRoundingMode *roundingMode);

FOUNDATION_EXPORT JavaMathMathContext *new_JavaMathMathContext_initWithInt_withJavaMathRoundingMode_(jint precision, JavaMathRoundingMode *roundingMode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaMathMathContext_initWithNSString_(JavaMathMathContext *self, NSString *val);

FOUNDATION_EXPORT JavaMathMathContext *new_JavaMathMathContext_initWithNSString_(NSString *val) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaMathMathContext)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaMathMathContext_INCLUDE_ALL")
