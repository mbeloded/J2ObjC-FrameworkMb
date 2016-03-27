//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/SAXNotRecognizedException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("OrgXmlSaxSAXNotRecognizedException_INCLUDE_ALL")
#ifdef OrgXmlSaxSAXNotRecognizedException_RESTRICT
#define OrgXmlSaxSAXNotRecognizedException_INCLUDE_ALL 0
#else
#define OrgXmlSaxSAXNotRecognizedException_INCLUDE_ALL 1
#endif
#undef OrgXmlSaxSAXNotRecognizedException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgXmlSaxSAXNotRecognizedException_) && (OrgXmlSaxSAXNotRecognizedException_INCLUDE_ALL || defined(OrgXmlSaxSAXNotRecognizedException_INCLUDE))
#define OrgXmlSaxSAXNotRecognizedException_

#define OrgXmlSaxSAXException_RESTRICT 1
#define OrgXmlSaxSAXException_INCLUDE 1
#include "../../../org/xml/sax/SAXException.h"

/*!
 @brief Exception class for an unrecognized identifier.
 <blockquote>
 <em>This module, both source code and documentation, is in the
 Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
 See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
 for further information.
 </blockquote>
 <p>An XMLReader will throw this exception when it finds an
 unrecognized feature or property identifier; SAX applications and
 extensions may use this class for other, similar purposes.</p>
 @since SAX 2.0
 @author David Megginson
 @version 2.0.1 (sax2r2)
 - seealso: org.xml.sax.SAXNotSupportedException
 */
@interface OrgXmlSaxSAXNotRecognizedException : OrgXmlSaxSAXException

#pragma mark Public

/*!
 @brief Default constructor.
 */
- (instancetype)init;

/*!
 @brief Construct a new exception with the given message.
 @param message The text message of the exception.
 */
- (instancetype)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxSAXNotRecognizedException)

FOUNDATION_EXPORT void OrgXmlSaxSAXNotRecognizedException_init(OrgXmlSaxSAXNotRecognizedException *self);

FOUNDATION_EXPORT OrgXmlSaxSAXNotRecognizedException *new_OrgXmlSaxSAXNotRecognizedException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgXmlSaxSAXNotRecognizedException_initWithNSString_(OrgXmlSaxSAXNotRecognizedException *self, NSString *message);

FOUNDATION_EXPORT OrgXmlSaxSAXNotRecognizedException *new_OrgXmlSaxSAXNotRecognizedException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxSAXNotRecognizedException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("OrgXmlSaxSAXNotRecognizedException_INCLUDE_ALL")