//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/helpers/XMLReaderAdapter.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("OrgXmlSaxHelpersXMLReaderAdapter_INCLUDE_ALL")
#ifdef OrgXmlSaxHelpersXMLReaderAdapter_RESTRICT
#define OrgXmlSaxHelpersXMLReaderAdapter_INCLUDE_ALL 0
#else
#define OrgXmlSaxHelpersXMLReaderAdapter_INCLUDE_ALL 1
#endif
#undef OrgXmlSaxHelpersXMLReaderAdapter_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgXmlSaxHelpersXMLReaderAdapter_) && (OrgXmlSaxHelpersXMLReaderAdapter_INCLUDE_ALL || defined(OrgXmlSaxHelpersXMLReaderAdapter_INCLUDE))
#define OrgXmlSaxHelpersXMLReaderAdapter_

#define OrgXmlSaxParser_RESTRICT 1
#define OrgXmlSaxParser_INCLUDE 1
#include "../../../../org/xml/sax/Parser.h"

#define OrgXmlSaxContentHandler_RESTRICT 1
#define OrgXmlSaxContentHandler_INCLUDE 1
#include "../../../../org/xml/sax/ContentHandler.h"

@class IOSCharArray;
@class JavaUtilLocale;
@class OrgXmlSaxHelpersXMLReaderAdapter_AttributesAdapter;
@class OrgXmlSaxInputSource;
@protocol OrgXmlSaxAttributes;
@protocol OrgXmlSaxDTDHandler;
@protocol OrgXmlSaxDocumentHandler;
@protocol OrgXmlSaxEntityResolver;
@protocol OrgXmlSaxErrorHandler;
@protocol OrgXmlSaxLocator;
@protocol OrgXmlSaxXMLReader;

/*!
 @brief Adapt a SAX2 XMLReader as a SAX1 Parser.
 <blockquote>
 <em>This module, both source code and documentation, is in the
 Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
 See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
 for further information.
 </blockquote>
 <p>This class wraps a SAX2 <code>XMLReader</code>
 and makes it act as a SAX1 <code>Parser</code>.  The XMLReader
 must support a true value for the
 http://xml.org/sax/features/namespace-prefixes property or parsing will fail
 with a <code>SAXException</code>; if the XMLReader
 supports a false value for the http://xml.org/sax/features/namespaces
 property, that will also be used to improve efficiency.</p>
 @since SAX 2.0
 @author David Megginson
 @version 2.0.1 (sax2r2)
 - seealso: org.xml.sax.Parser
 - seealso: org.xml.sax.XMLReader
 */
@interface OrgXmlSaxHelpersXMLReaderAdapter : NSObject < OrgXmlSaxParser, OrgXmlSaxContentHandler > {
 @public
  id<OrgXmlSaxXMLReader> xmlReader_;
  id<OrgXmlSaxDocumentHandler> documentHandler_;
  OrgXmlSaxHelpersXMLReaderAdapter_AttributesAdapter *qAtts_;
}

#pragma mark Public

/*!
 @brief Create a new adapter.
 <p>Use the "org.xml.sax.driver" property to locate the SAX2
 driver to embed.</p>
 @exception org.xml.sax.SAXException If the embedded driver
 cannot be instantiated or if the
 org.xml.sax.driver property is not specified.
 */
- (instancetype)init;

/*!
 @brief Create a new adapter.
 <p>Create a new adapter, wrapped around a SAX2 XMLReader.
 The adapter will make the XMLReader act like a SAX1
 Parser.</p>
 @param xmlReader The SAX2 XMLReader to wrap.
 @exception java.lang.NullPointerException If the argument is null.
 */
- (instancetype)initWithOrgXmlSaxXMLReader:(id<OrgXmlSaxXMLReader>)xmlReader;

/*!
 @brief Adapt a SAX2 characters event.
 @param ch An array of characters.
 @param start The starting position in the array.
 @param length The number of characters to use.
 @exception org.xml.sax.SAXException The client may raise a
 processing exception.
 - seealso: org.xml.sax.ContentHandler#characters
 */
- (void)charactersWithCharArray:(IOSCharArray *)ch
                        withInt:(jint)start
                        withInt:(jint)length;

/*!
 @brief End document event.
 @exception org.xml.sax.SAXException The client may raise a
 processing exception.
 - seealso: org.xml.sax.ContentHandler#endDocument
 */
- (void)endDocument;

/*!
 @brief Adapt a SAX2 end element event.
 @param uri The Namespace URI.
 @param localName The Namespace local name.
 @param qName The qualified (prefixed) name.
 @exception org.xml.sax.SAXException The client may raise a
 processing exception.
 - seealso: org.xml.sax.ContentHandler#endElement
 */
- (void)endElementWithNSString:(NSString *)uri
                  withNSString:(NSString *)localName
                  withNSString:(NSString *)qName;

/*!
 @brief Adapt a SAX2 end prefix mapping event.
 @param prefix The prefix being mapped.
 - seealso: org.xml.sax.ContentHandler#endPrefixMapping
 */
- (void)endPrefixMappingWithNSString:(NSString *)prefix;

/*!
 @brief Adapt a SAX2 ignorable whitespace event.
 @param ch An array of characters.
 @param start The starting position in the array.
 @param length The number of characters to use.
 @exception org.xml.sax.SAXException The client may raise a
 processing exception.
 - seealso: org.xml.sax.ContentHandler#ignorableWhitespace
 */
- (void)ignorableWhitespaceWithCharArray:(IOSCharArray *)ch
                                 withInt:(jint)start
                                 withInt:(jint)length;

/*!
 @brief Parse the document.
 <p>This method will throw an exception if the embedded
 XMLReader does not support the
 http://xml.org/sax/features/namespace-prefixes property.</p>
 @param input An input source for the document.
 @exception java.io.IOException If there is a problem reading
 the raw content of the document.
 @exception org.xml.sax.SAXException If there is a problem
 processing the document.
 - seealso: #parse(java.lang.String)
 - seealso: org.xml.sax.Parser#parse(org.xml.sax.InputSource)
 */
- (void)parseWithOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)input;

/*!
 @brief Parse the document.
 <p>This method will throw an exception if the embedded
 XMLReader does not support the
 http://xml.org/sax/features/namespace-prefixes property.</p>
 @param systemId The absolute URL of the document.
 @exception java.io.IOException If there is a problem reading
 the raw content of the document.
 @exception org.xml.sax.SAXException If there is a problem
 processing the document.
 - seealso: #parse(org.xml.sax.InputSource)
 - seealso: org.xml.sax.Parser#parse(java.lang.String)
 */
- (void)parseWithNSString:(NSString *)systemId;

/*!
 @brief Adapt a SAX2 processing instruction event.
 @param target The processing instruction target.
 @param data The remainder of the processing instruction
 @exception org.xml.sax.SAXException The client may raise a
 processing exception.
 - seealso: org.xml.sax.ContentHandler#processingInstruction
 */
- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;

/*!
 @brief Register the SAX1 document event handler.
 <p>Note that the SAX1 document handler has no Namespace
 support.</p>
 @param handler The new SAX1 document event handler.
 - seealso: org.xml.sax.Parser#setDocumentHandler
 */
- (void)setDocumentHandlerWithOrgXmlSaxDocumentHandler:(id<OrgXmlSaxDocumentHandler>)handler;

/*!
 @brief Set a document locator.
 @param locator The document locator.
 - seealso: org.xml.sax.ContentHandler#setDocumentLocator
 */
- (void)setDocumentLocatorWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;

/*!
 @brief Register the DTD event handler.
 @param handler The new DTD event handler.
 - seealso: org.xml.sax.Parser#setDTDHandler
 */
- (void)setDTDHandlerWithOrgXmlSaxDTDHandler:(id<OrgXmlSaxDTDHandler>)handler;

/*!
 @brief Register the entity resolver.
 @param resolver The new resolver.
 - seealso: org.xml.sax.Parser#setEntityResolver
 */
- (void)setEntityResolverWithOrgXmlSaxEntityResolver:(id<OrgXmlSaxEntityResolver>)resolver;

/*!
 @brief Register the error event handler.
 @param handler The new error event handler.
 - seealso: org.xml.sax.Parser#setErrorHandler
 */
- (void)setErrorHandlerWithOrgXmlSaxErrorHandler:(id<OrgXmlSaxErrorHandler>)handler;

/*!
 @brief Set the locale for error reporting.
 <p>This is not supported in SAX2, and will always throw
 an exception.</p>
 @param locale the locale for error reporting.
 - seealso: org.xml.sax.Parser#setLocale
 @exception org.xml.sax.SAXException Thrown unless overridden.
 */
- (void)setLocaleWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Adapt a SAX2 skipped entity event.
 @param name The name of the skipped entity.
 - seealso: org.xml.sax.ContentHandler#skippedEntity
 @exception org.xml.sax.SAXException Throwable by subclasses.
 */
- (void)skippedEntityWithNSString:(NSString *)name;

/*!
 @brief Start document event.
 @exception org.xml.sax.SAXException The client may raise a
 processing exception.
 - seealso: org.xml.sax.ContentHandler#startDocument
 */
- (void)startDocument;

/*!
 @brief Adapt a SAX2 start element event.
 @param uri The Namespace URI.
 @param localName The Namespace local name.
 @param qName The qualified (prefixed) name.
 @param atts The SAX2 attributes.
 @exception org.xml.sax.SAXException The client may raise a
 processing exception.
 - seealso: org.xml.sax.ContentHandler#endDocument
 */
- (void)startElementWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)qName
         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

/*!
 @brief Adapt a SAX2 start prefix mapping event.
 @param prefix The prefix being mapped.
 @param uri The Namespace URI being mapped to.
 - seealso: org.xml.sax.ContentHandler#startPrefixMapping
 */
- (void)startPrefixMappingWithNSString:(NSString *)prefix
                          withNSString:(NSString *)uri;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxHelpersXMLReaderAdapter)

J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersXMLReaderAdapter, xmlReader_, id<OrgXmlSaxXMLReader>)
J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersXMLReaderAdapter, documentHandler_, id<OrgXmlSaxDocumentHandler>)
J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersXMLReaderAdapter, qAtts_, OrgXmlSaxHelpersXMLReaderAdapter_AttributesAdapter *)

FOUNDATION_EXPORT void OrgXmlSaxHelpersXMLReaderAdapter_init(OrgXmlSaxHelpersXMLReaderAdapter *self);

FOUNDATION_EXPORT OrgXmlSaxHelpersXMLReaderAdapter *new_OrgXmlSaxHelpersXMLReaderAdapter_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgXmlSaxHelpersXMLReaderAdapter_initWithOrgXmlSaxXMLReader_(OrgXmlSaxHelpersXMLReaderAdapter *self, id<OrgXmlSaxXMLReader> xmlReader);

FOUNDATION_EXPORT OrgXmlSaxHelpersXMLReaderAdapter *new_OrgXmlSaxHelpersXMLReaderAdapter_initWithOrgXmlSaxXMLReader_(id<OrgXmlSaxXMLReader> xmlReader) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxHelpersXMLReaderAdapter)

#endif

#if !defined (OrgXmlSaxHelpersXMLReaderAdapter_AttributesAdapter_) && (OrgXmlSaxHelpersXMLReaderAdapter_INCLUDE_ALL || defined(OrgXmlSaxHelpersXMLReaderAdapter_AttributesAdapter_INCLUDE))
#define OrgXmlSaxHelpersXMLReaderAdapter_AttributesAdapter_

#define OrgXmlSaxAttributeList_RESTRICT 1
#define OrgXmlSaxAttributeList_INCLUDE 1
#include "../../../../org/xml/sax/AttributeList.h"

@protocol OrgXmlSaxAttributes;

/*!
 @brief Internal class to wrap a SAX2 Attributes object for SAX1.
 */
@interface OrgXmlSaxHelpersXMLReaderAdapter_AttributesAdapter : NSObject < OrgXmlSaxAttributeList >

#pragma mark Public

/*!
 @brief Return the number of attributes.
 @return The length of the attribute list.
 - seealso: org.xml.sax.AttributeList#getLength
 */
- (jint)getLength;

/*!
 @brief Return the qualified (prefixed) name of an attribute by position.
 @return The qualified name.
 - seealso: org.xml.sax.AttributeList#getName
 */
- (NSString *)getNameWithInt:(jint)i;

/*!
 @brief Return the type of an attribute by position.
 @return The type.
 - seealso: org.xml.sax.AttributeList#getType(int)
 */
- (NSString *)getTypeWithInt:(jint)i;

/*!
 @brief Return the type of an attribute by qualified (prefixed) name.
 @return The type.
 - seealso: org.xml.sax.AttributeList#getType(java.lang.String)
 */
- (NSString *)getTypeWithNSString:(NSString *)qName;

/*!
 @brief Return the value of an attribute by position.
 @return The value.
 - seealso: org.xml.sax.AttributeList#getValue(int)
 */
- (NSString *)getValueWithInt:(jint)i;

/*!
 @brief Return the value of an attribute by qualified (prefixed) name.
 @return The value.
 - seealso: org.xml.sax.AttributeList#getValue(java.lang.String)
 */
- (NSString *)getValueWithNSString:(NSString *)qName;

#pragma mark Package-Private

- (instancetype)init;

/*!
 @brief Set the embedded Attributes object.
 @param The embedded SAX2 Attributes.
 */
- (void)setAttributesWithOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxHelpersXMLReaderAdapter_AttributesAdapter)

FOUNDATION_EXPORT void OrgXmlSaxHelpersXMLReaderAdapter_AttributesAdapter_init(OrgXmlSaxHelpersXMLReaderAdapter_AttributesAdapter *self);

FOUNDATION_EXPORT OrgXmlSaxHelpersXMLReaderAdapter_AttributesAdapter *new_OrgXmlSaxHelpersXMLReaderAdapter_AttributesAdapter_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxHelpersXMLReaderAdapter_AttributesAdapter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("OrgXmlSaxHelpersXMLReaderAdapter_INCLUDE_ALL")
