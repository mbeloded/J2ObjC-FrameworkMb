//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Currency.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaUtilCurrency_INCLUDE_ALL")
#ifdef JavaUtilCurrency_RESTRICT
#define JavaUtilCurrency_INCLUDE_ALL 0
#else
#define JavaUtilCurrency_INCLUDE_ALL 1
#endif
#undef JavaUtilCurrency_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilCurrency_) && (JavaUtilCurrency_INCLUDE_ALL || defined(JavaUtilCurrency_INCLUDE))
#define JavaUtilCurrency_

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "../../java/io/Serializable.h"

@class JavaUtilLocale;
@protocol JavaUtilSet;

/*!
 @brief A currency corresponding to an <a href="http://en.wikipedia.org/wiki/ISO_4217">ISO 4217</a>
 currency code such as "EUR" or "USD".
 */
@interface JavaUtilCurrency : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Returns a set of all known currencies.
 @since 1.7
 */
+ (id<JavaUtilSet>)getAvailableCurrencies;

/*!
 @brief Returns this currency's ISO 4217 currency code.
 */
- (NSString *)getCurrencyCode;

/*!
 @brief Returns the default number of fraction digits for this currency.
 For instance, the default number of fraction digits for the US dollar is 2 because there are
 100 US cents in a US dollar. For the Japanese Yen, the number is 0 because coins smaller
 than 1 Yen became invalid in 1953. In the case of pseudo-currencies, such as
 IMF Special Drawing Rights, -1 is returned.
 */
- (jint)getDefaultFractionDigits;

/*!
 @brief Equivalent to <code>getDisplayName(Locale.getDefault())</code>.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @since 1.7
 */
- (NSString *)getDisplayName;

/*!
 @brief Returns the localized name of this currency in the given <code>locale</code>.
 Returns the ISO 4217 currency code if no localized name is available.
 @since 1.7
 */
- (NSString *)getDisplayNameWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns the <code>Currency</code> instance for this <code>Locale</code>'s country.
 @throws IllegalArgumentException
 if the locale's country is not a supported ISO 3166 country.
 */
+ (JavaUtilCurrency *)getInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns the <code>Currency</code> instance for the given ISO 4217 currency code.
 @throws IllegalArgumentException
 if the currency code is not a supported ISO 4217 currency code.
 */
+ (JavaUtilCurrency *)getInstanceWithNSString:(NSString *)currencyCode;

/*!
 @brief Equivalent to <code>getSymbol(Locale.getDefault())</code>.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 */
- (NSString *)getSymbol;

/*!
 @brief Returns the localized currency symbol for this currency in <code>locale</code>.
 That is, given "USD" and Locale.US, you'd get "$", but given "USD" and a non-US locale,
 you'd get "US$".
 <p>If the locale only specifies a language rather than a language and a country (such as
 <code>Locale.JAPANESE</code> or {new Locale("en", "")} rather than <code>Locale.JAPAN</code> or
 {new Locale("en", "US")}), the ISO 4217 currency code is returned.
 <p>If there is no locale-specific currency symbol, the ISO 4217 currency code is returned.
 */
- (NSString *)getSymbolWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns this currency's ISO 4217 currency code.
 */
- (NSString *)description;

@end

J2OBJC_STATIC_INIT(JavaUtilCurrency)

FOUNDATION_EXPORT JavaUtilCurrency *JavaUtilCurrency_getInstanceWithNSString_(NSString *currencyCode);

FOUNDATION_EXPORT JavaUtilCurrency *JavaUtilCurrency_getInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT id<JavaUtilSet> JavaUtilCurrency_getAvailableCurrencies();

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilCurrency)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilCurrency_INCLUDE_ALL")