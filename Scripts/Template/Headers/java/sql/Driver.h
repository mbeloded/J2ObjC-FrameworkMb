//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/Driver.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaSqlDriver_INCLUDE_ALL")
#ifdef JavaSqlDriver_RESTRICT
#define JavaSqlDriver_INCLUDE_ALL 0
#else
#define JavaSqlDriver_INCLUDE_ALL 1
#endif
#undef JavaSqlDriver_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlDriver_) && (JavaSqlDriver_INCLUDE_ALL || defined(JavaSqlDriver_INCLUDE))
#define JavaSqlDriver_

@class IOSObjectArray;
@class JavaUtilProperties;
@protocol JavaSqlConnection;

/*!
 @brief An interface to a JDBC driver.
 Instances are returned by <code>DriverManager</code>.
 <p>The JDBC driver uses URLs to specify the location of specific data. URL
 format typically takes the form " <code>xxxx:yyyy:SpecificData</code>", where "
 <code>xxxx:yyyy</code>" is referred to as the <i>subprotocol</i> and is normally
 the same for all of a particular driver. " <code>SpecificData</code>" is a string
 which identifies the particular data source that the driver should use.
 - seealso: DriverManager
 */
@protocol JavaSqlDriver < NSObject, JavaObject >

/*!
 @brief Returns whether the driver thinks that it can open a connection to the
 given URL.
 @param url
 the URL to connect to.
 @return <code>true</code> if the driver thinks that is can open a connection
 to the supplied URL, <code>false</code> otherwise. Typically, the
 driver will respond <code>true</code> if it thinks that it can handle
 the subprotocol specified by the driver.
 @throws SQLException
 if a database error occurs.
 */
- (jboolean)acceptsURLWithNSString:(NSString *)url;

/*!
 @brief Attempts to make a database connection to a data source specified by a
 supplied URL.
 @param url
 the URL to connect.
 @param info
 some properties that should be used in establishing the
 connection. The properties consist of name/value pairs of
 strings. Normally, a connection to a database requires at
 least two properties - for <code>"user"</code> and <code>"password"</code>
  in order to pass authentication to the database.
 @return the connection to the database.
 @throws SQLException
 if a database error occurs.
 */
- (id<JavaSqlConnection>)connectWithNSString:(NSString *)url
                      withJavaUtilProperties:(JavaUtilProperties *)info;

/*!
 @brief Gets the driver's major version number.
 @return the major version number of the driver - typically starts at 1.
 */
- (jint)getMajorVersion;

/*!
 @brief Gets the driver's minor version number.
 @return the minor version number of the driver - typically starts at 0.
 */
- (jint)getMinorVersion;

/*!
 @brief Gets information about possible properties for this driver.
 <p>
 This method is intended to provide a listing of possible properties that
 the client of the driver must supply in order to establish a connection
 to a database. Note that the returned array of properties may change
 depending on the supplied list of property values.
 @param url
 the URL of the database. An application may call this method
 iteratively as the property list is built up - for example,
 when displaying a dialog to an end-user as part of the
 database login process.
 @param info
 a set of tag/value pairs giving data that a user may be
 prompted to provide in order to connect to the database.
 @return an array of <code>DriverPropertyInfo</code> records which provide
 details on which additional properties are required (in addition
 to those supplied in the <code>info</code> parameter) in order to
 connect to the database.
 @throws SQLException
 if a database error occurs.
 */
- (IOSObjectArray *)getPropertyInfoWithNSString:(NSString *)url
                         withJavaUtilProperties:(JavaUtilProperties *)info;

/*!
 @brief Reports whether this driver is a genuine JDBC CompliantTM driver.
 The
 driver may only return <code>true</code> if it passes all the JDBC compliance
 tests.
 <p>
 A driver may not be fully compliant if the underlying database has
 limited functionality.
 @return <code>true</code> if the driver is fully JDBC compliant, <code>false</code>
 otherwise.
 */
- (jboolean)jdbcCompliant;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlDriver)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlDriver)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSqlDriver_INCLUDE_ALL")
