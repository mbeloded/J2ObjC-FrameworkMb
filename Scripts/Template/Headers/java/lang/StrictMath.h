//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/StrictMath.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaLangStrictMath_INCLUDE_ALL")
#ifdef JavaLangStrictMath_RESTRICT
#define JavaLangStrictMath_INCLUDE_ALL 0
#else
#define JavaLangStrictMath_INCLUDE_ALL 1
#endif
#undef JavaLangStrictMath_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangStrictMath_) && (JavaLangStrictMath_INCLUDE_ALL || defined(JavaLangStrictMath_INCLUDE))
#define JavaLangStrictMath_

/*!
 @brief Class StrictMath provides basic math constants and operations such as
 trigonometric functions, hyperbolic functions, exponential, logarithms, etc.
 <p>
 In contrast to class <code>Math</code>, the methods in this class return exactly
 the same results on all platforms. Algorithms based on these methods thus
 behave the same (e.g. regarding numerical convergence) on all platforms,
 complying with the slogan "write once, run everywhere". On the other side,
 the implementation of class StrictMath may be less efficient than that of
 class Math, as class StrictMath cannot utilize platform specific features
 such as an extended precision math co-processors.
 <p>
 The methods in this class are specified using the "Freely Distributable Math
 Library" (fdlibm), version 5.3.
 <p>
 <a href="http://www.netlib.org/fdlibm/">http://www.netlib.org/fdlibm/</a>
 */
@interface JavaLangStrictMath : NSObject

+ (jdouble)E;

+ (jdouble)PI;

#pragma mark Public

/*!
 @brief Returns the absolute value of the argument.
 <p>
 Special cases:
 <ul>
 <li><code>abs(-0.0) = +0.0</code></li>
 <li><code>abs(+infinity) = +infinity</code></li>
 <li><code>abs(-infinity) = +infinity</code></li>
 <li><code>abs(NaN) = NaN</code></li>
 </ul>
 */
+ (jdouble)absWithDouble:(jdouble)d;

/*!
 @brief Returns the absolute value of the argument.
 <p>
 Special cases:
 <ul>
 <li><code>abs(-0.0) = +0.0</code></li>
 <li><code>abs(+infinity) = +infinity</code></li>
 <li><code>abs(-infinity) = +infinity</code></li>
 <li><code>abs(NaN) = NaN</code></li>
 </ul>
 */
+ (jfloat)absWithFloat:(jfloat)f;

/*!
 @brief Returns the absolute value of the argument.
 <p>
 If the argument is <code>Integer.MIN_VALUE</code>, <code>Integer.MIN_VALUE</code>
 is returned.
 */
+ (jint)absWithInt:(jint)i;

/*!
 @brief Returns the absolute value of the argument.
 <p>
 If the argument is <code>Long.MIN_VALUE</code>, <code>Long.MIN_VALUE</code> is
 returned.
 */
+ (jlong)absWithLong:(jlong)l;

/*!
 @brief Returns the closest double approximation of the arc cosine of the
 argument within the range <code>[0..pi]</code>.
 <p>
 Special cases:
 <ul>
 <li><code>acos((anything > 1) = NaN</code></li>
 <li><code>acos((anything < -1) = NaN</code></li>
 <li><code>acos(NaN) = NaN</code></li>
 </ul>
 @param x
 the value to compute arc cosine of.
 @return the arc cosine of the argument.
 */
+ (jdouble)acosWithDouble:(jdouble)x;

/*!
 @brief Returns the closest double approximation of the arc sine of the argument
 within the range <code>[-pi/2..pi/2]</code>.
 <p>
 Special cases:
 <ul>
 <li><code>asin((anything > 1)) = NaN</code></li>
 <li><code>asin((anything < -1)) = NaN</code></li>
 <li><code>asin(NaN) = NaN</code></li>
 </ul>
 @param x
 the value whose arc sine has to be computed.
 @return the arc sine of the argument.
 */
+ (jdouble)asinWithDouble:(jdouble)x;

/*!
 @brief Returns the closest double approximation of the arc tangent of the
 argument within the range <code>[-pi/2..pi/2]</code>.
 <p>
 Special cases:
 <ul>
 <li><code>atan(+0.0) = +0.0</code></li>
 <li><code>atan(-0.0) = -0.0</code></li>
 <li><code>atan(+infinity) = +pi/2</code></li>
 <li><code>atan(-infinity) = -pi/2</code></li>
 <li><code>atan(NaN) = NaN</code></li>
 </ul>
 @param x
 the value whose arc tangent has to be computed.
 @return the arc tangent of the argument.
 */
+ (jdouble)atanWithDouble:(jdouble)x;

/*!
 @brief Returns the closest double approximation of the arc tangent of
 <code>y/x</code> within the range <code>[-pi..pi]</code>.
 This is the angle of the
 polar representation of the rectangular coordinates (x,y).
 <p>
 Special cases:
 <ul>
 <li><code>atan2((anything), NaN ) = NaN;</code></li>
 <li><code>atan2(NaN , (anything) ) = NaN;</code></li>
 <li><code>atan2(+0.0, +(anything but NaN)) = +0.0</code></li>
 <li><code>atan2(-0.0, +(anything but NaN)) = -0.0</code></li>
 <li><code>atan2(+0.0, -(anything but NaN)) = +pi</code></li>
 <li><code>atan2(-0.0, -(anything but NaN)) = -pi</code></li>
 <li><code>atan2(+(anything but 0 and NaN), 0) = +pi/2</code></li>
 <li><code>atan2(-(anything but 0 and NaN), 0) = -pi/2</code></li>
 <li><code>atan2(+(anything but infinity and NaN), +infinity)</code> <code>=</code>
 <code>+0.0</code></li>
 <li><code>atan2(-(anything but infinity and NaN), +infinity)</code> <code>=</code>
 <code>-0.0</code></li>
 <li><code>atan2(+(anything but infinity and NaN), -infinity) = +pi</code></li>
 <li><code>atan2(-(anything but infinity and NaN), -infinity) = -pi</code></li>
 <li><code>atan2(+infinity, +infinity ) = +pi/4</code></li>
 <li><code>atan2(-infinity, +infinity ) = -pi/4</code></li>
 <li><code>atan2(+infinity, -infinity ) = +3pi/4</code></li>
 <li><code>atan2(-infinity, -infinity ) = -3pi/4</code></li>
 <li><code>atan2(+infinity, (anything but,0, NaN, and infinity))</code>
 <code>=</code> <code>+pi/2</code></li>
 <li><code>atan2(-infinity, (anything but,0, NaN, and infinity))</code>
 <code>=</code> <code>-pi/2</code></li>
 </ul>
 @param y
 the numerator of the value whose atan has to be computed.
 @param x
 the denominator of the value whose atan has to be computed.
 @return the arc tangent of <code>y/x</code>.
 */
+ (jdouble)atan2WithDouble:(jdouble)y
                withDouble:(jdouble)x;

/*!
 @brief Returns the closest double approximation of the cube root of the
 argument.
 <p>
 Special cases:
 <ul>
 <li><code>cbrt(+0.0) = +0.0</code></li>
 <li><code>cbrt(-0.0) = -0.0</code></li>
 <li><code>cbrt(+infinity) = +infinity</code></li>
 <li><code>cbrt(-infinity) = -infinity</code></li>
 <li><code>cbrt(NaN) = NaN</code></li>
 </ul>
 @param x
 the value whose cube root has to be computed.
 @return the cube root of the argument.
 */
+ (jdouble)cbrtWithDouble:(jdouble)x;

/*!
 @brief Returns the double conversion of the most negative (closest to negative
 infinity) integer value greater than or equal to the argument.
 <p>
 Special cases:
 <ul>
 <li><code>ceil(+0.0) = +0.0</code></li>
 <li><code>ceil(-0.0) = -0.0</code></li>
 <li><code>ceil((anything in range (-1,0)) = -0.0</code></li>
 <li><code>ceil(+infinity) = +infinity</code></li>
 <li><code>ceil(-infinity) = -infinity</code></li>
 <li><code>ceil(NaN) = NaN</code></li>
 </ul>
 */
+ (jdouble)ceilWithDouble:(jdouble)d;

/*!
 @brief Returns a double with the given magnitude and the sign of <code>sign</code>.
 If <code>sign</code> is NaN, the sign of the result is positive.
 @since 1.6
 */
+ (jdouble)copySignWithDouble:(jdouble)magnitude
                   withDouble:(jdouble)sign OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a float with the given magnitude and the sign of <code>sign</code>.
 If
 <code>sign</code> is NaN, the sign of the result is positive.
 @since 1.6
 */
+ (jfloat)copySignWithFloat:(jfloat)magnitude
                  withFloat:(jfloat)sign OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns the closest double approximation of the cosine of the argument.
 <p>
 Special cases:
 <ul>
 <li><code>cos(+infinity) = NaN</code></li>
 <li><code>cos(-infinity) = NaN</code></li>
 <li><code>cos(NaN) = NaN</code></li>
 </ul>
 @param d
 the angle whose cosine has to be computed, in radians.
 @return the cosine of the argument.
 */
+ (jdouble)cosWithDouble:(jdouble)d;

/*!
 @brief Returns the closest double approximation of the hyperbolic cosine of the
 argument.
 <p>
 Special cases:
 <ul>
 <li><code>cosh(+infinity) = +infinity</code></li>
 <li><code>cosh(-infinity) = +infinity</code></li>
 <li><code>cosh(NaN) = NaN</code></li>
 </ul>
 @param x
 the value whose hyperbolic cosine has to be computed.
 @return the hyperbolic cosine of the argument.
 */
+ (jdouble)coshWithDouble:(jdouble)x;

/*!
 @brief Returns the closest double approximation of the raising "e" to the power
 of the argument.
 <p>
 Special cases:
 <ul>
 <li><code>exp(+infinity) = +infinity</code></li>
 <li><code>exp(-infinity) = +0.0</code></li>
 <li><code>exp(NaN) = NaN</code></li>
 </ul>
 @param x
 the value whose exponential has to be computed.
 @return the exponential of the argument.
 */
+ (jdouble)expWithDouble:(jdouble)x;

/*!
 @brief Returns the closest double approximation of <i><code>e</code></i><sup>
 <code>d</code></sup><code>- 1</code>.
 If the argument is very close to 0, it is
 much more accurate to use <code>expm1(d)+1</code> than <code>exp(d)</code> (due to
 cancellation of significant digits).
 <p>
 Special cases:
 <ul>
 <li><code>expm1(+0.0) = +0.0</code></li>
 <li><code>expm1(-0.0) = -0.0</code></li>
 <li><code>expm1(+infinity) = +infinity</code></li>
 <li><code>expm1(-infinity) = -1.0</code></li>
 <li><code>expm1(NaN) = NaN</code></li>
 </ul>
 @param x
 the value to compute the <i><code>e</code></i><sup><code>d</code></sup>
 <code>- 1</code> of.
 @return the <i><code>e</code></i><sup><code>d</code></sup><code>- 1</code> value of the
 argument.
 */
+ (jdouble)expm1WithDouble:(jdouble)x;

/*!
 @brief Returns the double conversion of the most positive (closest to positive
 infinity) integer less than or equal to the argument.
 <p>
 Special cases:
 <ul>
 <li><code>floor(+0.0) = +0.0</code></li>
 <li><code>floor(-0.0) = -0.0</code></li>
 <li><code>floor(+infinity) = +infinity</code></li>
 <li><code>floor(-infinity) = -infinity</code></li>
 <li><code>floor(NaN) = NaN</code></li>
 </ul>
 */
+ (jdouble)floorWithDouble:(jdouble)d;

/*!
 @brief Returns the exponent of double <code>d</code>.
 @since 1.6
 */
+ (jint)getExponentWithDouble:(jdouble)d;

/*!
 @brief Returns the exponent of float <code>f</code>.
 @since 1.6
 */
+ (jint)getExponentWithFloat:(jfloat)f;

/*!
 @brief Returns <code>sqrt(</code><i><code>x</code></i><sup><code>2</code></sup><code>+</code> <i>
 <code>y</code></i><sup><code>2</code></sup><code>)</code>.
 The final result is without
 medium underflow or overflow.
 <p>
 Special cases:
 <ul>
 <li><code>hypot(+infinity, (anything including NaN)) = +infinity</code></li>
 <li><code>hypot(-infinity, (anything including NaN)) = +infinity</code></li>
 <li><code>hypot((anything including NaN), +infinity) = +infinity</code></li>
 <li><code>hypot((anything including NaN), -infinity) = +infinity</code></li>
 <li><code>hypot(NaN, NaN) = NaN</code></li>
 </ul>
 @param x
 a double number.
 @param y
 a double number.
 @return the <code>sqrt(</code><i><code>x</code></i><sup><code>2</code></sup><code>+</code>
 <i> <code>y</code></i><sup><code>2</code></sup><code>)</code> value of the
 arguments.
 */
+ (jdouble)hypotWithDouble:(jdouble)x
                withDouble:(jdouble)y;

/*!
 @brief Returns the remainder of dividing <code>x</code> by <code>y</code> using the IEEE
 754 rules.
 The result is <code>x-round(x/p)*p</code> where <code>round(x/p)</code>
 is the nearest integer (rounded to even), but without numerical
 cancellation problems.
 <p>
 Special cases:
 <ul>
 <li><code>IEEEremainder((anything), 0) = NaN</code></li>
 <li><code>IEEEremainder(+infinity, (anything)) = NaN</code></li>
 <li><code>IEEEremainder(-infinity, (anything)) = NaN</code></li>
 <li><code>IEEEremainder(NaN, (anything)) = NaN</code></li>
 <li><code>IEEEremainder((anything), NaN) = NaN</code></li>
 <li><code>IEEEremainder(x, +infinity) = x</code> where x is anything but
 +/-infinity</li>
 <li><code>IEEEremainder(x, -infinity) = x</code> where x is anything but
 +/-infinity</li>
 </ul>
 @param x
 the numerator of the operation.
 @param y
 the denominator of the operation.
 @return the IEEE754 floating point reminder of of <code>x/y</code>.
 */
+ (jdouble)IEEEremainderWithDouble:(jdouble)x
                        withDouble:(jdouble)y;

/*!
 @brief Returns the closest double approximation of the natural logarithm of the
 argument.
 <p>
 Special cases:
 <ul>
 <li><code>log(+0.0) = -infinity</code></li>
 <li><code>log(-0.0) = -infinity</code></li>
 <li><code>log((anything < 0) = NaN</code></li>
 <li><code>log(+infinity) = +infinity</code></li>
 <li><code>log(-infinity) = NaN</code></li>
 <li><code>log(NaN) = NaN</code></li>
 </ul>
 @param x
 the value whose log has to be computed.
 @return the natural logarithm of the argument.
 */
+ (jdouble)logWithDouble:(jdouble)x;

/*!
 @brief Returns the closest double approximation of the base 10 logarithm of the
 argument.
 <p>
 Special cases:
 <ul>
 <li><code>log10(+0.0) = -infinity</code></li>
 <li><code>log10(-0.0) = -infinity</code></li>
 <li><code>log10((anything < 0) = NaN</code></li>
 <li><code>log10(+infinity) = +infinity</code></li>
 <li><code>log10(-infinity) = NaN</code></li>
 <li><code>log10(NaN) = NaN</code></li>
 </ul>
 @param x
 the value whose base 10 log has to be computed.
 @return the the base 10 logarithm of x
 */
+ (jdouble)log10WithDouble:(jdouble)x;

/*!
 @brief Returns the closest double approximation of the natural logarithm of the
 sum of the argument and 1.
 If the argument is very close to 0, it is much
 more accurate to use <code>log1p(d)</code> than <code>log(1.0+d)</code> (due to
 numerical cancellation).
 <p>
 Special cases:
 <ul>
 <li><code>log1p(+0.0) = +0.0</code></li>
 <li><code>log1p(-0.0) = -0.0</code></li>
 <li><code>log1p((anything < 1)) = NaN</code></li>
 <li><code>log1p(-1.0) = -infinity</code></li>
 <li><code>log1p(+infinity) = +infinity</code></li>
 <li><code>log1p(-infinity) = NaN</code></li>
 <li><code>log1p(NaN) = NaN</code></li>
 </ul>
 @param x
 the value to compute the <code>ln(1+d)</code> of.
 @return the natural logarithm of the sum of the argument and 1.
 */
+ (jdouble)log1pWithDouble:(jdouble)x;

/*!
 @brief Returns the most positive (closest to positive infinity) of the two
 arguments.
 <p>
 Special cases:
 <ul>
 <li><code>max(NaN, (anything)) = NaN</code></li>
 <li><code>max((anything), NaN) = NaN</code></li>
 <li><code>max(+0.0, -0.0) = +0.0</code></li>
 <li><code>max(-0.0, +0.0) = +0.0</code></li>
 </ul>
 */
+ (jdouble)maxWithDouble:(jdouble)d1
              withDouble:(jdouble)d2;

/*!
 @brief Returns the most positive (closest to positive infinity) of the two
 arguments.
 <p>
 Special cases:
 <ul>
 <li><code>max(NaN, (anything)) = NaN</code></li>
 <li><code>max((anything), NaN) = NaN</code></li>
 <li><code>max(+0.0, -0.0) = +0.0</code></li>
 <li><code>max(-0.0, +0.0) = +0.0</code></li>
 </ul>
 */
+ (jfloat)maxWithFloat:(jfloat)f1
             withFloat:(jfloat)f2;

/*!
 @brief Returns the most positive (closest to positive infinity) of the two
 arguments.
 */
+ (jint)maxWithInt:(jint)i1
           withInt:(jint)i2;

/*!
 @brief Returns the most positive (closest to positive infinity) of the two
 arguments.
 */
+ (jlong)maxWithLong:(jlong)l1
            withLong:(jlong)l2;

/*!
 @brief Returns the most negative (closest to negative infinity) of the two
 arguments.
 <p>
 Special cases:
 <ul>
 <li><code>min(NaN, (anything)) = NaN</code></li>
 <li><code>min((anything), NaN) = NaN</code></li>
 <li><code>min(+0.0, -0.0) = -0.0</code></li>
 <li><code>min(-0.0, +0.0) = -0.0</code></li>
 </ul>
 */
+ (jdouble)minWithDouble:(jdouble)d1
              withDouble:(jdouble)d2;

/*!
 @brief Returns the most negative (closest to negative infinity) of the two
 arguments.
 <p>
 Special cases:
 <ul>
 <li><code>min(NaN, (anything)) = NaN</code></li>
 <li><code>min((anything), NaN) = NaN</code></li>
 <li><code>min(+0.0, -0.0) = -0.0</code></li>
 <li><code>min(-0.0, +0.0) = -0.0</code></li>
 </ul>
 */
+ (jfloat)minWithFloat:(jfloat)f1
             withFloat:(jfloat)f2;

/*!
 @brief Returns the most negative (closest to negative infinity) of the two
 arguments.
 */
+ (jint)minWithInt:(jint)i1
           withInt:(jint)i2;

/*!
 @brief Returns the most negative (closest to negative infinity) of the two
 arguments.
 */
+ (jlong)minWithLong:(jlong)l1
            withLong:(jlong)l2;

/*!
 @brief Returns the next double after <code>start</code> in the given
 <code>direction</code>.
 @since 1.6
 */
+ (jdouble)nextAfterWithDouble:(jdouble)start
                    withDouble:(jdouble)direction;

/*!
 @brief Returns the next float after <code>start</code> in the given <code>direction</code>
 .
 @since 1.6
 */
+ (jfloat)nextAfterWithFloat:(jfloat)start
                  withDouble:(jdouble)direction;

/*!
 @brief Returns the next double larger than <code>d</code>.
 @since 1.6
 */
+ (jdouble)nextUpWithDouble:(jdouble)d;

/*!
 @brief Returns the next float larger than <code>f</code>.
 @since 1.6
 */
+ (jfloat)nextUpWithFloat:(jfloat)f;

/*!
 @brief Returns the closest double approximation of the result of raising
 <code>x</code> to the power of <code>y</code>.
 <p>
 Special cases:
 <ul>
 <li><code>pow((anything), +0.0) = 1.0</code></li>
 <li><code>pow((anything), -0.0) = 1.0</code></li>
 <li><code>pow(x, 1.0) = x</code></li>
 <li><code>pow((anything), NaN) = NaN</code></li>
 <li><code>pow(NaN, (anything except 0)) = NaN</code></li>
 <li><code>pow(+/-(|x| > 1), +infinity) = +infinity</code></li>
 <li><code>pow(+/-(|x| > 1), -infinity) = +0.0</code></li>
 <li><code>pow(+/-(|x| < 1), +infinity) = +0.0</code></li>
 <li><code>pow(+/-(|x| < 1), -infinity) = +infinity</code></li>
 <li><code>pow(+/-1.0 , +infinity) = NaN</code></li>
 <li><code>pow(+/-1.0 , -infinity) = NaN</code></li>
 <li><code>pow(+0.0, (+anything except 0, NaN)) = +0.0</code></li>
 <li><code>pow(-0.0, (+anything except 0, NaN, odd integer)) = +0.0</code></li>
 <li><code>pow(+0.0, (-anything except 0, NaN)) = +infinity</code></li>
 <li><code>pow(-0.0, (-anything except 0, NAN, odd integer))</code> <code>=</code>
 <code>+infinity</code></li>
 <li><code>pow(-0.0, (odd integer)) = -pow( +0 , (odd integer) )</code></li>
 <li><code>pow(+infinity, (+anything except 0, NaN)) = +infinity</code></li>
 <li><code>pow(+infinity, (-anything except 0, NaN)) = +0.0</code></li>
 <li><code>pow(-infinity, (anything)) = -pow(0, (-anything))</code></li>
 <li><code>pow((-anything), (integer))</code> <code>=</code>
 <code>pow(-1,(integer))*pow(+anything,integer)</code></li>
 <li><code>pow((-anything except 0 and infinity), (non-integer))</code>
 <code>=</code> <code>NAN</code></li>
 </ul>
 @param x
 the base of the operation.
 @param y
 the exponent of the operation.
 @return <code>x</code> to the power of <code>y</code>.
 */
+ (jdouble)powWithDouble:(jdouble)x
              withDouble:(jdouble)y;

/*!
 @brief Returns a pseudo-random number between 0.0 (inclusive) and 1.0
 (exclusive).
 @return a pseudo-random number.
 */
+ (jdouble)random;

/*!
 @brief Returns the double conversion of the result of rounding the argument to
 an integer.
 Tie breaks are rounded towards even.
 <p>
 Special cases:
 <ul>
 <li><code>rint(+0.0) = +0.0</code></li>
 <li><code>rint(-0.0) = -0.0</code></li>
 <li><code>rint(+infinity) = +infinity</code></li>
 <li><code>rint(-infinity) = -infinity</code></li>
 <li><code>rint(NaN) = NaN</code></li>
 </ul>
 @param d
 the value to be rounded.
 @return the closest integer to the argument (as a double).
 */
+ (jdouble)rintWithDouble:(jdouble)d;

/*!
 @brief Returns the result of rounding the argument to an integer.
 The result is
 equivalent to <code>(long) Math.floor(d+0.5)</code>.
 <p>
 Special cases:
 <ul>
 <li><code>round(+0.0) = +0.0</code></li>
 <li><code>round(-0.0) = +0.0</code></li>
 <li><code>round((anything > Long.MAX_VALUE) = Long.MAX_VALUE</code></li>
 <li><code>round((anything < Long.MIN_VALUE) = Long.MIN_VALUE</code></li>
 <li><code>round(+infinity) = Long.MAX_VALUE</code></li>
 <li><code>round(-infinity) = Long.MIN_VALUE</code></li>
 <li><code>round(NaN) = +0.0</code></li>
 </ul>
 @param d
 the value to be rounded.
 @return the closest integer to the argument.
 */
+ (jlong)roundWithDouble:(jdouble)d;

/*!
 @brief Returns the result of rounding the argument to an integer.
 The result is
 equivalent to <code>(int) Math.floor(f+0.5)</code>.
 <p>
 Special cases:
 <ul>
 <li><code>round(+0.0) = +0.0</code></li>
 <li><code>round(-0.0) = +0.0</code></li>
 <li><code>round((anything > Integer.MAX_VALUE) = Integer.MAX_VALUE</code></li>
 <li><code>round((anything < Integer.MIN_VALUE) = Integer.MIN_VALUE</code></li>
 <li><code>round(+infinity) = Integer.MAX_VALUE</code></li>
 <li><code>round(-infinity) = Integer.MIN_VALUE</code></li>
 <li><code>round(NaN) = +0.0</code></li>
 </ul>
 @param f
 the value to be rounded.
 @return the closest integer to the argument.
 */
+ (jint)roundWithFloat:(jfloat)f;

/*!
 @brief Returns <code>d</code> * 2^<code>scaleFactor</code>.
 The result may be rounded.
 @since 1.6
 */
+ (jdouble)scalbWithDouble:(jdouble)d
                   withInt:(jint)scaleFactor;

/*!
 @brief Returns <code>d</code> * 2^<code>scaleFactor</code>.
 The result may be rounded.
 @since 1.6
 */
+ (jfloat)scalbWithFloat:(jfloat)d
                 withInt:(jint)scaleFactor;

/*!
 @brief Returns the signum function of the argument.
 If the argument is less than
 zero, it returns -1.0. If the argument is greater than zero, 1.0 is
 returned. If the argument is either positive or negative zero, the
 argument is returned as result.
 <p>
 Special cases:
 <ul>
 <li><code>signum(+0.0) = +0.0</code></li>
 <li><code>signum(-0.0) = -0.0</code></li>
 <li><code>signum(+infinity) = +1.0</code></li>
 <li><code>signum(-infinity) = -1.0</code></li>
 <li><code>signum(NaN) = NaN</code></li>
 </ul>
 @param d
 the value whose signum has to be computed.
 @return the value of the signum function.
 */
+ (jdouble)signumWithDouble:(jdouble)d;

/*!
 @brief Returns the signum function of the argument.
 If the argument is less than
 zero, it returns -1.0. If the argument is greater than zero, 1.0 is
 returned. If the argument is either positive or negative zero, the
 argument is returned as result.
 <p>
 Special cases:
 <ul>
 <li><code>signum(+0.0) = +0.0</code></li>
 <li><code>signum(-0.0) = -0.0</code></li>
 <li><code>signum(+infinity) = +1.0</code></li>
 <li><code>signum(-infinity) = -1.0</code></li>
 <li><code>signum(NaN) = NaN</code></li>
 </ul>
 @param f
 the value whose signum has to be computed.
 @return the value of the signum function.
 */
+ (jfloat)signumWithFloat:(jfloat)f;

/*!
 @brief Returns the closest double approximation of the sine of the argument.
 <p>
 Special cases:
 <ul>
 <li><code>sin(+0.0) = +0.0</code></li>
 <li><code>sin(-0.0) = -0.0</code></li>
 <li><code>sin(+infinity) = NaN</code></li>
 <li><code>sin(-infinity) = NaN</code></li>
 <li><code>sin(NaN) = NaN</code></li>
 </ul>
 @param d
 the angle whose sin has to be computed, in radians.
 @return the sine of the argument.
 */
+ (jdouble)sinWithDouble:(jdouble)d;

/*!
 @brief Returns the closest double approximation of the hyperbolic sine of the
 argument.
 <p>
 Special cases:
 <ul>
 <li><code>sinh(+0.0) = +0.0</code></li>
 <li><code>sinh(-0.0) = -0.0</code></li>
 <li><code>sinh(+infinity) = +infinity</code></li>
 <li><code>sinh(-infinity) = -infinity</code></li>
 <li><code>sinh(NaN) = NaN</code></li>
 </ul>
 @param x
 the value whose hyperbolic sine has to be computed.
 @return the hyperbolic sine of the argument.
 */
+ (jdouble)sinhWithDouble:(jdouble)x;

/*!
 @brief Returns the closest double approximation of the square root of the
 argument.
 <p>
 Special cases:
 <ul>
 <li><code>sqrt(+0.0) = +0.0</code></li>
 <li><code>sqrt(-0.0) = -0.0</code></li>
 <li><code>sqrt( (anything < 0) ) = NaN</code></li>
 <li><code>sqrt(+infinity) = +infinity</code></li>
 <li><code>sqrt(NaN) = NaN</code></li>
 </ul>
 */
+ (jdouble)sqrtWithDouble:(jdouble)d;

/*!
 @brief Returns the closest double approximation of the tangent of the argument.
 <p>
 Special cases:
 <ul>
 <li><code>tan(+0.0) = +0.0</code></li>
 <li><code>tan(-0.0) = -0.0</code></li>
 <li><code>tan(+infinity) = NaN</code></li>
 <li><code>tan(-infinity) = NaN</code></li>
 <li><code>tan(NaN) = NaN</code></li>
 </ul>
 @param d
 the angle whose tangent has to be computed, in radians.
 @return the tangent of the argument.
 */
+ (jdouble)tanWithDouble:(jdouble)d;

/*!
 @brief Returns the closest double approximation of the hyperbolic tangent of the
 argument.
 The absolute value is always less than 1.
 <p>
 Special cases:
 <ul>
 <li><code>tanh(+0.0) = +0.0</code></li>
 <li><code>tanh(-0.0) = -0.0</code></li>
 <li><code>tanh(+infinity) = +1.0</code></li>
 <li><code>tanh(-infinity) = -1.0</code></li>
 <li><code>tanh(NaN) = NaN</code></li>
 </ul>
 @param x
 the value whose hyperbolic tangent has to be computed.
 @return the hyperbolic tangent of the argument
 */
+ (jdouble)tanhWithDouble:(jdouble)x;

/*!
 @brief Returns the measure in degrees of the supplied radian angle.
 The result
 is <code>angrad * 180 / pi</code>.
 <p>
 Special cases:
 <ul>
 <li><code>toDegrees(+0.0) = +0.0</code></li>
 <li><code>toDegrees(-0.0) = -0.0</code></li>
 <li><code>toDegrees(+infinity) = +infinity</code></li>
 <li><code>toDegrees(-infinity) = -infinity</code></li>
 <li><code>toDegrees(NaN) = NaN</code></li>
 </ul>
 @param angrad
 an angle in radians.
 @return the degree measure of the angle.
 */
+ (jdouble)toDegreesWithDouble:(jdouble)angrad;

/*!
 @brief Returns the measure in radians of the supplied degree angle.
 The result
 is <code>angdeg / 180 * pi</code>.
 <p>
 Special cases:
 <ul>
 <li><code>toRadians(+0.0) = +0.0</code></li>
 <li><code>toRadians(-0.0) = -0.0</code></li>
 <li><code>toRadians(+infinity) = +infinity</code></li>
 <li><code>toRadians(-infinity) = -infinity</code></li>
 <li><code>toRadians(NaN) = NaN</code></li>
 </ul>
 @param angdeg
 an angle in degrees.
 @return the radian measure of the angle.
 */
+ (jdouble)toRadiansWithDouble:(jdouble)angdeg;

/*!
 @brief Returns the argument's ulp (unit in the last place).
 The size of a ulp of
 a double value is the positive distance between this value and the double
 value next larger in magnitude. For non-NaN <code>x</code>,
 <code>ulp(-x) == ulp(x)</code>.
 <p>
 Special cases:
 <ul>
 <li><code>ulp(+0.0) = Double.MIN_VALUE</code></li>
 <li><code>ulp(-0.0) = Double.MIN_VALUE</code></li>
 <li><code>ulp(+infinity) = infinity</code></li>
 <li><code>ulp(-infinity) = infinity</code></li>
 <li><code>ulp(NaN) = NaN</code></li>
 </ul>
 @param d
 the floating-point value to compute ulp of.
 @return the size of a ulp of the argument.
 */
+ (jdouble)ulpWithDouble:(jdouble)d;

/*!
 @brief Returns the argument's ulp (unit in the last place).
 The size of a ulp of
 a float value is the positive distance between this value and the float
 value next larger in magnitude. For non-NaN <code>x</code>,
 <code>ulp(-x) == ulp(x)</code>.
 <p>
 Special cases:
 <ul>
 <li><code>ulp(+0.0) = Float.MIN_VALUE</code></li>
 <li><code>ulp(-0.0) = Float.MIN_VALUE</code></li>
 <li><code>ulp(+infinity) = infinity</code></li>
 <li><code>ulp(-infinity) = infinity</code></li>
 <li><code>ulp(NaN) = NaN</code></li>
 </ul>
 @param f
 the floating-point value to compute ulp of.
 @return the size of a ulp of the argument.
 */
+ (jfloat)ulpWithFloat:(jfloat)f;

@end

J2OBJC_STATIC_INIT(JavaLangStrictMath)

/*!
 @brief The double value closest to e, the base of the natural logarithm.
 */
inline jdouble JavaLangStrictMath_get_E();
#define JavaLangStrictMath_E 2.718281828459045
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangStrictMath, E, jdouble)

/*!
 @brief The double value closest to pi, the ratio of a circle's circumference to
 its diameter.
 */
inline jdouble JavaLangStrictMath_get_PI();
#define JavaLangStrictMath_PI 3.141592653589793
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangStrictMath, PI, jdouble)

FOUNDATION_EXPORT jdouble JavaLangStrictMath_absWithDouble_(jdouble d);

FOUNDATION_EXPORT jfloat JavaLangStrictMath_absWithFloat_(jfloat f);

FOUNDATION_EXPORT jint JavaLangStrictMath_absWithInt_(jint i);

FOUNDATION_EXPORT jlong JavaLangStrictMath_absWithLong_(jlong l);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_acosWithDouble_(jdouble x);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_asinWithDouble_(jdouble x);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_atanWithDouble_(jdouble x);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_atan2WithDouble_withDouble_(jdouble y, jdouble x);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_cbrtWithDouble_(jdouble x);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_ceilWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_coshWithDouble_(jdouble x);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_cosWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_expWithDouble_(jdouble x);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_expm1WithDouble_(jdouble x);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_floorWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_hypotWithDouble_withDouble_(jdouble x, jdouble y);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_IEEEremainderWithDouble_withDouble_(jdouble x, jdouble y);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_logWithDouble_(jdouble x);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_log10WithDouble_(jdouble x);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_log1pWithDouble_(jdouble x);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_maxWithDouble_withDouble_(jdouble d1, jdouble d2);

FOUNDATION_EXPORT jfloat JavaLangStrictMath_maxWithFloat_withFloat_(jfloat f1, jfloat f2);

FOUNDATION_EXPORT jint JavaLangStrictMath_maxWithInt_withInt_(jint i1, jint i2);

FOUNDATION_EXPORT jlong JavaLangStrictMath_maxWithLong_withLong_(jlong l1, jlong l2);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_minWithDouble_withDouble_(jdouble d1, jdouble d2);

FOUNDATION_EXPORT jfloat JavaLangStrictMath_minWithFloat_withFloat_(jfloat f1, jfloat f2);

FOUNDATION_EXPORT jint JavaLangStrictMath_minWithInt_withInt_(jint i1, jint i2);

FOUNDATION_EXPORT jlong JavaLangStrictMath_minWithLong_withLong_(jlong l1, jlong l2);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_powWithDouble_withDouble_(jdouble x, jdouble y);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_random();

FOUNDATION_EXPORT jdouble JavaLangStrictMath_rintWithDouble_(jdouble d);

FOUNDATION_EXPORT jlong JavaLangStrictMath_roundWithDouble_(jdouble d);

FOUNDATION_EXPORT jint JavaLangStrictMath_roundWithFloat_(jfloat f);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_signumWithDouble_(jdouble d);

FOUNDATION_EXPORT jfloat JavaLangStrictMath_signumWithFloat_(jfloat f);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_sinhWithDouble_(jdouble x);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_sinWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_sqrtWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_tanWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_tanhWithDouble_(jdouble x);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_toDegreesWithDouble_(jdouble angrad);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_toRadiansWithDouble_(jdouble angdeg);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_ulpWithDouble_(jdouble d);

FOUNDATION_EXPORT jfloat JavaLangStrictMath_ulpWithFloat_(jfloat f);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_copySignWithDouble_withDouble_(jdouble magnitude, jdouble sign);

FOUNDATION_EXPORT jfloat JavaLangStrictMath_copySignWithFloat_withFloat_(jfloat magnitude, jfloat sign);

FOUNDATION_EXPORT jint JavaLangStrictMath_getExponentWithFloat_(jfloat f);

FOUNDATION_EXPORT jint JavaLangStrictMath_getExponentWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_nextAfterWithDouble_withDouble_(jdouble start, jdouble direction);

FOUNDATION_EXPORT jfloat JavaLangStrictMath_nextAfterWithFloat_withDouble_(jfloat start, jdouble direction);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_nextUpWithDouble_(jdouble d);

FOUNDATION_EXPORT jfloat JavaLangStrictMath_nextUpWithFloat_(jfloat f);

FOUNDATION_EXPORT jdouble JavaLangStrictMath_scalbWithDouble_withInt_(jdouble d, jint scaleFactor);

FOUNDATION_EXPORT jfloat JavaLangStrictMath_scalbWithFloat_withInt_(jfloat d, jint scaleFactor);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangStrictMath)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaLangStrictMath_INCLUDE_ALL")
