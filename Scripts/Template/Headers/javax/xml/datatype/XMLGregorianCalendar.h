//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/datatype/XMLGregorianCalendar.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaxXmlDatatypeXMLGregorianCalendar_INCLUDE_ALL")
#ifdef JavaxXmlDatatypeXMLGregorianCalendar_RESTRICT
#define JavaxXmlDatatypeXMLGregorianCalendar_INCLUDE_ALL 0
#else
#define JavaxXmlDatatypeXMLGregorianCalendar_INCLUDE_ALL 1
#endif
#undef JavaxXmlDatatypeXMLGregorianCalendar_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxXmlDatatypeXMLGregorianCalendar_) && (JavaxXmlDatatypeXMLGregorianCalendar_INCLUDE_ALL || defined(JavaxXmlDatatypeXMLGregorianCalendar_INCLUDE))
#define JavaxXmlDatatypeXMLGregorianCalendar_

@class JavaMathBigDecimal;
@class JavaMathBigInteger;
@class JavaUtilGregorianCalendar;
@class JavaUtilLocale;
@class JavaUtilTimeZone;
@class JavaxXmlDatatypeDuration;
@class JavaxXmlNamespaceQName;

/*!
 @brief <p>Representation for W3C XML Schema 1.0 date/time datatypes.
 Specifically, these date/time datatypes are
 <a href="#DATETIME"><code>dateTime</code></a>,
 <a href="#TIME"><code>time</code></a>,
 <a href="#DATE"><code>date</code></a>,
 <a href="#GYEARMONTH"><code>gYearMonth</code></a>,
 <a href="#GMONTHDAY"><code>gMonthDay</code></a>,
 <a href="#GYEAR"><code>gYear</code></a>
 <a href="#GMONTH"><code>gMonth</code></a> and
 <a href="#GDAY"><code>gDay</code></a> defined in the XML Namespace
 <code>"http://www.w3.org/2001/XMLSchema"</code>.
 These datatypes are normatively defined in
 <a href="http://www.w3.org/TR/xmlschema-2/#dateTime">W3C XML Schema 1.0 Part 2, Section 3.2.7-14</a>.</p>
 <p>The table below defines the mapping between XML Schema 1.0
 date/time datatype fields and this class' fields. It also summarizes
 the value constraints for the date and time fields defined in
 <a href="http://www.w3.org/TR/xmlschema-2/#isoformats">W3C XML Schema 1.0 Part 2, Appendix D,
 <i>ISO 8601 Date and Time Formats</i></a>.</p>
 <a name="datetimefieldsmapping"/>
 <table border="2" rules="all" cellpadding="2">
 <thead>
 <tr>
 <th align="center" colspan="3">
 Date/Time Datatype Field Mapping Between XML Schema 1.0 and Java Representation
 </th>
 </tr>
 </thead>
 <tbody>
 <tr>
 <th>XML Schema 1.0<br/>
 datatype<br/>
 field</th>
 <th>Related<br/>XMLGregorianCalendar<br/>Accessor(s)</th>
 <th>Value Range</th>
 </tr>
 <a name="datetimefield-year"/>
 <tr>
 <td> year </td>
 <td> <code>getYear()</code> + <code>getEon()</code> or<br/>
 <code>getEonAndYear</code>
 </td>
 <td> <code>getYear()</code> is a value between -(10^9-1) to (10^9)-1
 or <code>DatatypeConstants.FIELD_UNDEFINED</code>.<br/>
 <code>getEon()</code> is high order year value in billion of years.<br/>
 <code>getEon()</code> has values greater than or equal to (10^9) or less than or equal to -(10^9).
 A value of null indicates field is undefined.</br>
 Given that <a href="http://www.w3.org/2001/05/xmlschema-errata#e2-63">XML Schema 1.0 errata</a> states that the year zero
 will be a valid lexical value in a future version of XML Schema,
 this class allows the year field to be set to zero. Otherwise,
 the year field value is handled exactly as described
 in the errata and [ISO-8601-1988]. Note that W3C XML Schema 1.0
 validation does not allow for the year field to have a value of zero.
 </td>
 </tr>
 <a name="datetimefield-month"/>
 <tr>
 <td> month </td>
 <td> <code>getMonth()</code> </td>
 <td> 1 to 12 or <code>DatatypeConstants.FIELD_UNDEFINED</code> </td>
 </tr>
 <a name="datetimefield-day"/>
 <tr>
 <td> day </td>
 <td> <code>getDay()</code> </td>
 <td> Independent of month, max range is 1 to 31 or <code>DatatypeConstants.FIELD_UNDEFINED</code>.<br/>
 The normative value constraint stated relative to month
 field's value is in <a href="http://www.w3.org/TR/xmlschema-2/#isoformats">W3C XML Schema 1.0 Part 2, Appendix D</a>.
 </td>
 </tr>
 <tr id="datetimefield-hour">
 <td>hour</td>
 <td><code>getHour()</code></td>
 <td>
 0 to 24 or <code>DatatypeConstants.FIELD_UNDEFINED</code>.
 For a value of 24, the minute and second field must be zero per
 <a href="http://www.w3.org/2001/05/xmlschema-errata#e2-45">XML Schema Errata</a>.
 </td>
 </tr>
 <a name="datetimefield-minute"/>
 <tr>
 <td> minute </td>
 <td> <code>getMinute()</code> </td>
 <td> 0 to 59 or <code>DatatypeConstants.FIELD_UNDEFINED</code> </td>
 </tr>
 <a name="datetimefield-second"/>
 <tr>
 <td>second</td>
 <td>
 <code>getSecond()</code> + <code>getMillisecond()</code>/1000 or<br/>
 <code>getSecond()</code> + <code>getFractionalSecond()</code>
 </td>
 <td>
 <code>getSecond()</code> from 0 to 60 or <code>DatatypeConstants.FIELD_UNDEFINED</code>.<br/>
 <i>(Note: 60 only allowable for leap second.)</i><br/>
 <code>getFractionalSecond()</code> allows for infinite precision over the range from 0.0 to 1.0 when
 the <code>getSecond()</code> is defined.<br/>
 <code>FractionalSecond</code> is optional and has a value of <code>null</code> when it is undefined.<br />
 <code>getMillisecond()</code> is the convenience
 millisecond precision of value of <code>getFractionalSecond()</code>.
 </td>
 </tr>
 <tr id="datetimefield-timezone">
 <td> timezone </td>
 <td> <code>getTimezone()</code> </td>
 <td> Number of minutes or <code>DatatypeConstants.FIELD_UNDEFINED</code>.
 Value range from -14 hours (-14 * 60 minutes) to 14 hours (14 * 60 minutes).
 </td>
 </tr>
 </tbody>
 </table>
 <p>All maximum value space constraints listed for the fields in the table
 above are checked by factory methods, @@{link DatatypeFactory},
 setter methods and parse methods of
 this class. <code>IllegalArgumentException</code> is thrown when a
 parameter's value is outside the value constraint for the field or
 if the composite
 values constitute an invalid XMLGregorianCalendar instance (for example, if
 the 31st of June is specified).
 </p>
 <p>The following operations are defined for this class:
 <ul>
 <li>accessors/mutators for independent date/time fields</li>
 <li>conversion between this class and W3C XML Schema 1.0 lexical representation,
 <code>toString()</code>, <code>lexicalRepresentation)</code></li>
 <li>conversion between this class and <code>GregorianCalendar</code>,
 <code>timezone,java.util.Locale aLocale,XMLGregorianCalendar defaults)</code>,
 <code>DatatypeFactory</code></li>
 <li>partial order relation comparator method, <code>xmlGregorianCalendar)</code></li>
 <li><code>equals(Object)</code> defined relative to <code>xmlGregorianCalendar)</code>.</li>
 <li>addition operation with <code>Duration</code>
 instance as defined in <a href="http://www.w3.org/TR/xmlschema-2/#adding-durations-to-dateTimes">
 W3C XML Schema 1.0 Part 2, Appendix E, <i>Adding durations to dateTimes</i></a>.
 </li>
 </ul>
 </p>
 @author <a href="mailto:Joseph.Fialli@@Sun.com">Joseph Fialli</a>
 @author <a href="mailto:Kohsuke.Kawaguchi@@Sun.com">Kohsuke Kawaguchi</a>
 @author <a href="mailto:Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 @version $Revision: 759822 $, $Date: 2009-03-29 18:15:11 -0700 (Sun, 29 Mar 2009) $
 - seealso: Duration
 - seealso: DatatypeFactory
 @since 1.5
 */
@interface JavaxXmlDatatypeXMLGregorianCalendar : NSObject < NSCopying >

#pragma mark Public

- (instancetype)init;

/*!
 @brief <p>Add <code>duration</code> to this instance.
 </p>
 <p>The computation is specified in
 <a href="http://www.w3.org/TR/xmlschema-2/#adding-durations-to-dateTimes">XML Schema 1.0 Part 2, Appendix E,
 <i>Adding durations to dateTimes</i>></a>.
 <a href="#datetimefieldsmapping">date/time field mapping table</a>
 defines the mapping from XML Schema 1.0 <code>dateTime</code> fields
 to this class' representation of those fields.</p>
 @param duration Duration to add to this <code>XMLGregorianCalendar</code>.
 @throws NullPointerException  when <code>duration</code> parameter is <code>null</code>.
 */
- (void)addWithJavaxXmlDatatypeDuration:(JavaxXmlDatatypeDuration *)duration;

/*!
 @brief <p>Unset all fields to undefined.
 </p>
 <p>Set all int fields to <code>DatatypeConstants.FIELD_UNDEFINED</code> and reference fields
 to null.</p>
 */
- (void)clear;

/*!
 @brief <p>Creates and returns a copy of this object.
 </p>
 @return copy of this <code>Object</code>
 */
- (id)clone;

/*!
 @brief <p>Compare two instances of W3C XML Schema 1.0 date/time datatypes
 according to partial order relation defined in
 <a href="http://www.w3.org/TR/xmlschema-2/#dateTime-order">W3C XML Schema 1.0 Part 2, Section 3.2.7.3,
 <i>Order relation on dateTime</i></a>.
 </p>
 <p><code>xsd:dateTime</code> datatype field mapping to accessors of
 this class are defined in
 <a href="#datetimefieldmapping">date/time field mapping table</a>.</p>
 @param xmlGregorianCalendar Instance of <code>XMLGregorianCalendar</code> to compare
 @return The relationship between <code>this</code> <code>XMLGregorianCalendar</code> and
 the specified <code>xmlGregorianCalendar</code> as
 <code>DatatypeConstants.LESSER</code>,
 <code>DatatypeConstants.EQUAL</code>,
 <code>DatatypeConstants.GREATER</code> or
 <code>DatatypeConstants.INDETERMINATE</code>.
 @throws NullPointerException if <code>xmlGregorianCalendar</code> is null.
 */
- (jint)compareWithJavaxXmlDatatypeXMLGregorianCalendar:(JavaxXmlDatatypeXMLGregorianCalendar *)xmlGregorianCalendar;

/*!
 @brief <p>Indicates whether parameter <code>obj</code> is "equal to" this one.
 </p>
 @param obj to compare.
 @return <code>true</code> when <code>obj</code> is an instance of <code>XMLGregorianCalendar</code>
 and  <code>obj)</code> returns <code>DatatypeConstants.EQUAL</code>, otherwise <code>false</code>.
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Return day in month or <code>DatatypeConstants.FIELD_UNDEFINED</code>.
 </p>
 <p>Value constraints for this value are summarized in
 <a href="#datetimefield-day">day field of date/time field mapping table</a>.</p>
 - seealso: #setDay(int)
 */
- (jint)getDay;

/*!
 @brief <p>Return high order component for XML Schema 1.0 dateTime datatype field for
 <code>year</code>.
 <code>null</code> if this optional part of the year field is not defined.</p>
 <p>Value constraints for this value are summarized in
 <a href="#datetimefield-year">year field of date/time field mapping table</a>.</p>
 @return eon of this <code>XMLGregorianCalendar</code>. The value
 returned is an integer multiple of 10^9.
 - seealso: #getYear()
 - seealso: #getEonAndYear()
 */
- (JavaMathBigInteger *)getEon;

/*!
 @brief <p>Return XML Schema 1.0 dateTime datatype field for
 <code>year</code>.
 </p>
 <p>Value constraints for this value are summarized in
 <a href="#datetimefield-year">year field of date/time field mapping table</a>.</p>
 @return sum of <code>eon</code> and <code>BigInteger.valueOf(year)</code>
 when both fields are defined. When only <code>year</code> is defined,
 return it. When both <code>eon</code> and <code>year</code> are not
 defined, return <code>null</code>.
 - seealso: #getEon()
 - seealso: #getYear()
 */
- (JavaMathBigInteger *)getEonAndYear;

/*!
 @brief <p>Return fractional seconds.
 </p>
 <p><code>null</code> is returned when this optional field is not defined.</p>
 <p>Value constraints are detailed in
 <a href="#datetimefield-second">second field of date/time field mapping table</a>.</p>
 <p>This optional field can only have a defined value when the
 xs:dateTime second field, represented by <code>getSecond()</code>,
 does not return <code>DatatypeConstants.FIELD_UNDEFINED</code>.</p>
 @return fractional seconds  of this <code>XMLGregorianCalendar</code>.
 - seealso: #getSecond()
 - seealso: #setTime(int,int,int,BigDecimal)
 */
- (JavaMathBigDecimal *)getFractionalSecond;

/*!
 @brief Return hours or <code>DatatypeConstants.FIELD_UNDEFINED</code>.
 Returns <code>DatatypeConstants.FIELD_UNDEFINED</code> if this field is not defined.
 <p>Value constraints for this value are summarized in
 <a href="#datetimefield-hour">hour field of date/time field mapping table</a>.</p>
 - seealso: #setTime(int,int,int)
 */
- (jint)getHour;

/*!
 @brief <p>Return millisecond precision of <code>getFractionalSecond()</code>.
 </p>
 <p>This method represents a convenience accessor to infinite
 precision fractional second value returned by
 <code>getFractionalSecond()</code>. The returned value is the rounded
 down to milliseconds value of
 <code>getFractionalSecond()</code>. When <code>getFractionalSecond()</code>
 returns <code>null</code>, this method must return
 <code>DatatypeConstants.FIELD_UNDEFINED</code>.</p>
 <p>Value constraints for this value are summarized in
 <a href="#datetimefield-second">second field of date/time field mapping table</a>.</p>
 @return Millisecond  of this <code>XMLGregorianCalendar</code>.
 - seealso: #getFractionalSecond()
 - seealso: #setTime(int,int,int)
 */
- (jint)getMillisecond;

/*!
 @brief Return minutes or <code>DatatypeConstants.FIELD_UNDEFINED</code>.
 </p>
 Returns <code>DatatypeConstants.FIELD_UNDEFINED</code> if this field is not defined.
 <p>Value constraints for this value are summarized in
 <a href="#datetimefield-minute">minute field of date/time field mapping table</a>.</p>
 - seealso: #setTime(int,int,int)
 */
- (jint)getMinute;

/*!
 @brief <p>Return number of month or <code>DatatypeConstants.FIELD_UNDEFINED</code>.
 </p>
 <p>Value constraints for this value are summarized in
 <a href="#datetimefield-month">month field of date/time field mapping table</a>.</p>
 @return year  of this <code>XMLGregorianCalendar</code>.
 */
- (jint)getMonth;

/*!
 @brief <p>Return seconds or <code>DatatypeConstants.FIELD_UNDEFINED</code>.
 </p>
 <p>Returns <code>DatatypeConstants.FIELD_UNDEFINED</code> if this field is not defined.
 When this field is not defined, the optional xs:dateTime
 fractional seconds field, represented by
 <code>getFractionalSecond()</code> and <code>getMillisecond()</code>,
 must not be defined.</p>
 <p>Value constraints for this value are summarized in
 <a href="#datetimefield-second">second field of date/time field mapping table</a>.</p>
 @return Second  of this <code>XMLGregorianCalendar</code>.
 - seealso: #getFractionalSecond()
 - seealso: #getMillisecond()
 - seealso: #setTime(int,int,int)
 */
- (jint)getSecond;

/*!
 @brief Return timezone offset in minutes or
 <code>DatatypeConstants.FIELD_UNDEFINED</code> if this optional field is not defined.
 <p>Value constraints for this value are summarized in
 <a href="#datetimefield-timezone">timezone field of date/time field mapping table</a>.</p>
 - seealso: #setTimezone(int)
 */
- (jint)getTimezone;

/*!
 @brief <p>Returns a <code>java.util.TimeZone</code> for this class.
 </p>
 <p>If timezone field is defined for this instance,
 returns TimeZone initialized with custom timezone id
 of zoneoffset. If timezone field is undefined,
 try the defaultZoneoffset that was passed in.
 If defaultZoneoffset is FIELD_UNDEFINED, return
 default timezone for this host.
 (Same default as java.util.GregorianCalendar).</p>
 @param defaultZoneoffset default zoneoffset if this zoneoffset is
 <code>DatatypeConstants.FIELD_UNDEFINED</code>.
 @return TimeZone for this.
 */
- (JavaUtilTimeZone *)getTimeZoneWithInt:(jint)defaultZoneoffset;

/*!
 @brief <p>Return the name of the XML Schema date/time type that this instance
 maps to.
 Type is computed based on fields that are set.</p>
 <table border="2" rules="all" cellpadding="2">
 <thead>
 <tr>
 <th align="center" colspan="7">
 Required fields for XML Schema 1.0 Date/Time Datatypes.<br/>
 <i>(timezone is optional for all date/time datatypes)</i>
 </th>
 </tr>
 </thead>
 <tbody>
 <tr>
 <td>Datatype</td>
 <td>year</td>
 <td>month</td>
 <td>day</td>
 <td>hour</td>
 <td>minute</td>
 <td>second</td>
 </tr>
 <tr>
 <td><code>DatatypeConstants.DATETIME</code></td>
 <td>X</td>
 <td>X</td>
 <td>X</td>
 <td>X</td>
 <td>X</td>
 <td>X</td>
 </tr>
 <tr>
 <td><code>DatatypeConstants.DATE</code></td>
 <td>X</td>
 <td>X</td>
 <td>X</td>
 <td></td>
 <td></td>
 <td></td>
 </tr>
 <tr>
 <td><code>DatatypeConstants.TIME</code></td>
 <td></td>
 <td></td>
 <td></td>
 <td>X</td>
 <td>X</td>
 <td>X</td>
 </tr>
 <tr>
 <td><code>DatatypeConstants.GYEARMONTH</code></td>
 <td>X</td>
 <td>X</td>
 <td></td>
 <td></td>
 <td></td>
 <td></td>
 </tr>
 <tr>
 <td><code>DatatypeConstants.GMONTHDAY</code></td>
 <td></td>
 <td>X</td>
 <td>X</td>
 <td></td>
 <td></td>
 <td></td>
 </tr>
 <tr>
 <td><code>DatatypeConstants.GYEAR</code></td>
 <td>X</td>
 <td></td>
 <td></td>
 <td></td>
 <td></td>
 <td></td>
 </tr>
 <tr>
 <td><code>DatatypeConstants.GMONTH</code></td>
 <td></td>
 <td>X</td>
 <td></td>
 <td></td>
 <td></td>
 <td></td>
 </tr>
 <tr>
 <td><code>DatatypeConstants.GDAY</code></td>
 <td></td>
 <td></td>
 <td>X</td>
 <td></td>
 <td></td>
 <td></td>
 </tr>
 </tbody>
 </table>
 @throws java.lang.IllegalStateException if the combination of set fields
 does not match one of the eight defined XML Schema builtin
 date/time datatypes.
 @return One of the following class constants:
 <code>DatatypeConstants.DATETIME</code>,
 <code>DatatypeConstants.TIME</code>,
 <code>DatatypeConstants.DATE</code>,
 <code>DatatypeConstants.GYEARMONTH</code>,
 <code>DatatypeConstants.GMONTHDAY</code>,
 <code>DatatypeConstants.GYEAR</code>,
 <code>DatatypeConstants.GMONTH</code> or
 <code>DatatypeConstants.GDAY</code>.
 */
- (JavaxXmlNamespaceQName *)getXMLSchemaType;

/*!
 @brief <p>Return low order component for XML Schema 1.0 dateTime datatype field for
 <code>year</code> or <code>DatatypeConstants.FIELD_UNDEFINED</code>.
 </p>
 <p>Value constraints for this value are summarized in
 <a href="#datetimefield-year">year field of date/time field mapping table</a>.</p>
 @return year  of this <code>XMLGregorianCalendar</code>.
 - seealso: #getEon()
 - seealso: #getEonAndYear()
 */
- (jint)getYear;

/*!
 @brief <p>Returns a hash code consistent with the definition of the equals method.
 </p>
 @return hash code of this object.
 */
- (NSUInteger)hash;

/*!
 @brief Validate instance by <code>getXMLSchemaType()</code> constraints.
 @return true if data values are valid.
 */
- (jboolean)isValid;

/*!
 @brief <p>Normalize this instance to UTC.
 </p>
 <p>2000-03-04T23:00:00+03:00 normalizes to 2000-03-04T20:00:00Z</p>
 <p>Implements W3C XML Schema Part 2, Section 3.2.7.3 (A).</p>
 @return <code>this</code> <code>XMLGregorianCalendar</code> normalized to UTC.
 */
- (JavaxXmlDatatypeXMLGregorianCalendar *)normalize;

/*!
 @brief <p>Reset this <code>XMLGregorianCalendar</code> to its original values.
 </p>
 <p><code>XMLGregorianCalendar</code> is reset to the same values as when it was created with
 <code>DatatypeFactory.newXMLGregorianCalendar()</code>,
 <code>lexicalRepresentation)</code>,
 <code>year,int month,int day,int hour,int minute,int second,BigDecimal fractionalSecond,int timezone)</code>
 ,
 <code>year,int month,int day,int hour,int minute,int second,int millisecond,int timezone)</code>
 ,
 <code>cal)</code>,
 <code>year,int month,int day,int timezone)</code>
 ,
 <code>hours,int minutes,int seconds,int timezone)</code>
 ,
 <code>hours,int minutes,int seconds,BigDecimal fractionalSecond,int timezone)</code>
  or
 <code>hours,int minutes,int seconds,int milliseconds,int timezone)</code>
 .
 </p>
 <p><code>reset()</code> is designed to allow the reuse of existing <code>XMLGregorianCalendar</code>s
 thus saving resources associated with the creation of new <code>XMLGregorianCalendar</code>s.</p>
 */
- (void)reset;

/*!
 @brief <p>Set days in month.
 </p>
 <p>Unset this field by invoking the setter with a parameter value of <code>DatatypeConstants.FIELD_UNDEFINED</code>.</p>
 @param day value constraints summarized in <a href="#datetimefield-day">day field of date/time field mapping table</a>.
 @throws IllegalArgumentException if <code>day</code> parameter is
 outside value constraints for the field as specified in
 <a href="#datetimefieldmapping">date/time field mapping table</a>.
 */
- (void)setDayWithInt:(jint)day;

/*!
 @brief <p>Set fractional seconds.
 </p>
 <p>Unset this field by invoking the setter with a parameter value of <code>null</code>.</p>
 @param fractional value constraints summarized in
 <a href="#datetimefield-fractional">fractional field of date/time field mapping table</a>.
 @throws IllegalArgumentException if <code>fractional</code> parameter is outside value constraints for the field as specified
 in <a href="#datetimefieldmapping">date/time field mapping table</a>.
 */
- (void)setFractionalSecondWithJavaMathBigDecimal:(JavaMathBigDecimal *)fractional;

/*!
 @brief <p>Set hours.
 </p>
 <p>Unset this field by invoking the setter with a parameter value of <code>DatatypeConstants.FIELD_UNDEFINED</code>.</p>
 @param hour value constraints summarized in <a href="#datetimefield-hour">hour field of date/time field mapping table</a>.
 @throws IllegalArgumentException if <code>hour</code> parameter is outside value constraints for the field as specified in
 <a href="#datetimefieldmapping">date/time field mapping table</a>.
 */
- (void)setHourWithInt:(jint)hour;

/*!
 @brief <p>Set milliseconds.
 </p>
 <p>Unset this field by invoking the setter with a parameter value of <code>DatatypeConstants.FIELD_UNDEFINED</code>.</p>
 @param millisecond value constraints summarized in
 <a href="#datetimefield-millisecond">millisecond field of date/time field mapping table</a>.
 @throws IllegalArgumentException if <code>millisecond</code> parameter is outside value constraints for the field as specified
 in <a href="#datetimefieldmapping">date/time field mapping table</a>.
 */
- (void)setMillisecondWithInt:(jint)millisecond;

/*!
 @brief <p>Set minutes.
 </p>
 <p>Unset this field by invoking the setter with a parameter value of <code>DatatypeConstants.FIELD_UNDEFINED</code>.</p>
 @param minute value constraints summarized in <a href="#datetimefield-minute">minute field of date/time field mapping table</a>.
 @throws IllegalArgumentException if <code>minute</code> parameter is outside value constraints for the field as specified in
 <a href="#datetimefieldmapping">date/time field mapping table</a>.
 */
- (void)setMinuteWithInt:(jint)minute;

/*!
 @brief <p>Set month.
 </p>
 <p>Unset this field by invoking the setter with a parameter value of <code>DatatypeConstants.FIELD_UNDEFINED</code>.</p>
 @param month value constraints summarized in <a href="#datetimefield-month">month field of date/time field mapping table</a>.
 @throws IllegalArgumentException if <code>month</code> parameter is
 outside value constraints for the field as specified in
 <a href="#datetimefieldmapping">date/time field mapping table</a>.
 */
- (void)setMonthWithInt:(jint)month;

/*!
 @brief <p>Set seconds.
 </p>
 <p>Unset this field by invoking the setter with a parameter value of <code>DatatypeConstants.FIELD_UNDEFINED</code>.</p>
 @param second value constraints summarized in <a href="#datetimefield-second">second field of date/time field mapping table</a>.
 @throws IllegalArgumentException if <code>second</code> parameter is outside value constraints for the field as specified in
 <a href="#datetimefieldmapping">date/time field mapping table</a>.
 */
- (void)setSecondWithInt:(jint)second;

/*!
 @brief <p>Set time as one unit.
 </p>
 @param hour value constraints are summarized in
 <a href="#datetimefield-hour">hour field of date/time field mapping table</a>.
 @param minute value constraints are summarized in
 <a href="#datetimefield-minute">minute field of date/time field mapping table</a>.
 @param second value constraints are summarized in
 <a href="#datetimefield-second">second field of date/time field mapping table</a>.
 - seealso: #setTime(int,int,int,BigDecimal)
 @throws IllegalArgumentException if any parameter is
 outside value constraints for the field as specified in
 <a href="#datetimefieldmapping">date/time field mapping table</a>.
 */
- (void)setTimeWithInt:(jint)hour
               withInt:(jint)minute
               withInt:(jint)second;

/*!
 @brief <p>Set time as one unit, including the optional infinite precision
 fractional seconds.
 </p>
 @param hour value constraints are summarized in
 <a href="#datetimefield-hour">hour field of date/time field mapping table</a>.
 @param minute value constraints are summarized in
 <a href="#datetimefield-minute">minute field of date/time field mapping table</a>.
 @param second value constraints are summarized in
 <a href="#datetimefield-second">second field of date/time field mapping table</a>.
 @param fractional value of <code>null</code> indicates this optional
 field is not set.
 @throws IllegalArgumentException if any parameter is
 outside value constraints for the field as specified in
 <a href="#datetimefieldmapping">date/time field mapping table</a>.
 */
- (void)setTimeWithInt:(jint)hour
               withInt:(jint)minute
               withInt:(jint)second
withJavaMathBigDecimal:(JavaMathBigDecimal *)fractional;

/*!
 @brief <p>Set time as one unit, including optional milliseconds.
 </p>
 @param hour value constraints are summarized in
 <a href="#datetimefield-hour">hour field of date/time field mapping table</a>.
 @param minute value constraints are summarized in
 <a href="#datetimefield-minute">minute field of date/time field mapping table</a>.
 @param second value constraints are summarized in
 <a href="#datetimefield-second">second field of date/time field mapping table</a>.
 @param millisecond value of <code>DatatypeConstants.FIELD_UNDEFINED</code> indicates this
 optional field is not set.
 @throws IllegalArgumentException if any parameter is
 outside value constraints for the field as specified in
 <a href="#datetimefieldmapping">date/time field mapping table</a>.
 */
- (void)setTimeWithInt:(jint)hour
               withInt:(jint)minute
               withInt:(jint)second
               withInt:(jint)millisecond;

/*!
 @brief <p>Set the number of minutes in the timezone offset.
 </p>
 <p>Unset this field by invoking the setter with a parameter value of <code>DatatypeConstants.FIELD_UNDEFINED</code>.</p>
 @param offset value constraints summarized in <a href="#datetimefield-timezone">
 timezone field of date/time field mapping table</a>.
 @throws IllegalArgumentException if <code>offset</code> parameter is
 outside value constraints for the field as specified in
 <a href="#datetimefieldmapping">date/time field mapping table</a>.
 */
- (void)setTimezoneWithInt:(jint)offset;

/*!
 @brief <p>Set low and high order component of XSD <code>dateTime</code> year field.
 </p>
 <p>Unset this field by invoking the setter with a parameter value of <code>null</code>.</p>
 @param year value constraints summarized in <a href="#datetimefield-year">year field of date/time field mapping table</a>.
 @throws IllegalArgumentException if <code>year</code> parameter is
 outside value constraints for the field as specified in
 <a href="#datetimefieldmapping">date/time field mapping table</a>.
 */
- (void)setYearWithJavaMathBigInteger:(JavaMathBigInteger *)year;

/*!
 @brief <p>Set year of XSD <code>dateTime</code> year field.
 </p>
 <p>Unset this field by invoking the setter with a parameter value of
 <code>DatatypeConstants.FIELD_UNDEFINED</code>.</p>
 <p>Note: if the absolute value of the <code>year</code> parameter
 is less than 10^9, the eon component of the XSD year field is set to
 <code>null</code> by this method.</p>
 @param year value constraints are summarized in <a href="#datetimefield-year">year field of date/time field mapping table</a>.
 If year is <code>DatatypeConstants.FIELD_UNDEFINED</code>, then eon is set to <code>null</code>.
 */
- (void)setYearWithInt:(jint)year;

/*!
 @brief <p>Convert this <code>XMLGregorianCalendar</code> to a <code>GregorianCalendar</code>.
 </p>
 <p>When <code>this</code> instance has an undefined field, this
 conversion relies on the <code>java.util.GregorianCalendar</code> default
 for its corresponding field. A notable difference between
 XML Schema 1.0 date/time datatypes and <code>java.util.GregorianCalendar</code>
 is that Timezone value is optional for date/time datatypes and it is
 a required field for <code>java.util.GregorianCalendar</code>. See javadoc
 for <code>java.util.TimeZone.getDefault()</code> on how the default
 is determined. To explicitly specify the <code>TimeZone</code>
 instance, see
 <code>toGregorianCalendar(TimeZone,Locale,XMLGregorianCalendar)</code>.</p>
 <table border="2" rules="all" cellpadding="2">
 <thead>
 <tr>
 <th align="center" colspan="2">
 Field by Field Conversion from this class to
 <code>java.util.GregorianCalendar</code>
 </th>
 </tr>
 </thead>
 <tbody>
 <tr>
 <td><code>java.util.GregorianCalendar</code> field</td>
 <td><code>javax.xml.datatype.XMLGregorianCalendar</code> field</td>
 </tr>
 <tr>
 <td><code>ERA</code></td>
 <td><code>getEonAndYear()</code><code>.signum() < 0 ? GregorianCalendar.BC : GregorianCalendar.AD</code></td>
 </tr>
 <tr>
 <td><code>YEAR</code></td>
 <td><code>getEonAndYear()</code><code>.abs().intValue()</code><i>*</i></td>
 </tr>
 <tr>
 <td><code>MONTH</code></td>
 <td><code>getMonth()</code> - <code>DatatypeConstants.JANUARY</code> + <code>GregorianCalendar.JANUARY</code></td>
 </tr>
 <tr>
 <td><code>DAY_OF_MONTH</code></td>
 <td><code>getDay()</code></td>
 </tr>
 <tr>
 <td><code>HOUR_OF_DAY</code></td>
 <td><code>getHour()</code></td>
 </tr>
 <tr>
 <td><code>MINUTE</code></td>
 <td><code>getMinute()</code></td>
 </tr>
 <tr>
 <td><code>SECOND</code></td>
 <td><code>getSecond()</code></td>
 </tr>
 <tr>
 <td><code>MILLISECOND</code></td>
 <td>get millisecond order from <code>getFractionalSecond()</code><i>*</i> </td>
 </tr>
 <tr>
 <td><code>GregorianCalendar.setTimeZone(TimeZone)</code></td>
 <td><code>getTimezone()</code> formatted into Custom timezone id</td>
 </tr>
 </tbody>
 </table>
 <i>*</i> designates possible loss of precision during the conversion due
 to source datatype having higher precision than target datatype.
 <p>To ensure consistency in conversion implementations, the new
 <code>GregorianCalendar</code> should be instantiated in following
 manner.
 <ul>
 <li>Using <code>timeZone</code> value as defined above, create a new
 <code>java.util.GregorianCalendar(timeZone,Locale.getDefault())</code>.
 </li>
 <li>Initialize all GregorianCalendar fields by calling {(@@link GegorianCalendar#clear()}.</li>
 <li>Obtain a pure Gregorian Calendar by invoking
 <code>GregorianCalendar.setGregorianChange(
 new Date(Long.MIN_VALUE))</code>.</li>
 <li>Its fields ERA, YEAR, MONTH, DAY_OF_MONTH, HOUR_OF_DAY,
 MINUTE, SECOND and MILLISECOND are set using the method
 <code>Calendar.set(int,int)</code></li>
 </ul>
 </p>
 - seealso: #toGregorianCalendar(java.util.TimeZone,java.util.Locale,XMLGregorianCalendar)
 */
- (JavaUtilGregorianCalendar *)toGregorianCalendar;

/*!
 @brief <p>Convert this <code>XMLGregorianCalendar</code> along with provided parameters
 to a <code>GregorianCalendar</code> instance.
 </p>
 <p> Since XML Schema 1.0 date/time datetypes has no concept of
 timezone ids or daylight savings timezone ids, this conversion operation
 allows the user to explicitly specify one with
 <code>timezone</code> parameter.</p>
 <p>To compute the return value's <code>TimeZone</code> field,
 <ul>
 <li>when parameter <code>timeZone</code> is non-null,
 it is the timezone field.</li>
 <li>else when <code>this.getTimezone() != FIELD_UNDEFINED</code>,
 create a <code>java.util.TimeZone</code> with a custom timezone id
 using the <code>this.getTimezone()</code>.</li>
 <li>else when <code>defaults.getTimezone() != FIELD_UNDEFINED</code>,
 create a <code>java.util.TimeZone</code> with a custom timezone id
 using <code>defaults.getTimezone()</code>.</li>
 <li>else use the <code>GregorianCalendar</code> default timezone value
 for the host is defined as specified by
 <code>java.util.TimeZone.getDefault()</code>.</li></ul></p>
 <p>To ensure consistency in conversion implementations, the new
 <code>GregorianCalendar</code> should be instantiated in following
 manner.
 <ul>
 <li>Create a new <code>java.util.GregorianCalendar(TimeZone,
 Locale)</code> with TimeZone set as specified above and the
 <code>Locale</code> parameter.
 </li>
 <li>Initialize all GregorianCalendar fields by calling <code>GregorianCalendar.clear()</code></li>
 <li>Obtain a pure Gregorian Calendar by invoking
 <code>GregorianCalendar.setGregorianChange(
 new Date(Long.MIN_VALUE))</code>.</li>
 <li>Its fields ERA, YEAR, MONTH, DAY_OF_MONTH, HOUR_OF_DAY,
 MINUTE, SECOND and MILLISECOND are set using the method
 <code>Calendar.set(int,int)</code></li>
 </ul></p>
 @param timezone provide Timezone. <code>null</code> is a legal value.
 @param aLocale  provide explicit Locale. Use default GregorianCalendar locale if
 value is <code>null</code>.
 @param defaults provide default field values to use when corresponding
 field for this instance is FIELD_UNDEFINED or null.
 If <code>defaults</code>is <code>null</code> or a field
 within the specified <code>defaults</code> is undefined,
 just use <code>java.util.GregorianCalendar</code> defaults.
 @return a java.util.GregorianCalendar conversion of this instance.
 */
- (JavaUtilGregorianCalendar *)toGregorianCalendarWithJavaUtilTimeZone:(JavaUtilTimeZone *)timezone
                                                    withJavaUtilLocale:(JavaUtilLocale *)aLocale
                              withJavaxXmlDatatypeXMLGregorianCalendar:(JavaxXmlDatatypeXMLGregorianCalendar *)defaults;

/*!
 @brief <p>Returns a <code>String</code> representation of this <code>XMLGregorianCalendar</code> <code>Object</code>.
 </p>
 <p>The result is a lexical representation generated by <code>toXMLFormat()</code>.</p>
 @return A non-<code>null</code> valid <code>String</code> representation of this <code>XMLGregorianCalendar</code>.
 @throws IllegalStateException if the combination of set fields
 does not match one of the eight defined XML Schema builtin date/time datatypes.
 - seealso: #toXMLFormat()
 */
- (NSString *)description;

/*!
 @brief <p>Return the lexical representation of <code>this</code> instance.
 The format is specified in
 <a href="http://www.w3.org/TR/xmlschema-2/#dateTime-order">XML Schema 1.0 Part 2, Section 3.2.[7-14].1,
 <i>Lexical Representation</i>".</a></p>
 <p>Specific target lexical representation format is determined by
 <code>getXMLSchemaType()</code>.</p>
 @return XML, as <code>String</code>, representation of this <code>XMLGregorianCalendar</code>
 @throws IllegalStateException if the combination of set fields
 does not match one of the eight defined XML Schema builtin date/time datatypes.
 */
- (NSString *)toXMLFormat;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlDatatypeXMLGregorianCalendar)

FOUNDATION_EXPORT void JavaxXmlDatatypeXMLGregorianCalendar_init(JavaxXmlDatatypeXMLGregorianCalendar *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlDatatypeXMLGregorianCalendar)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaxXmlDatatypeXMLGregorianCalendar_INCLUDE_ALL")
