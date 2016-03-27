//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/xpath/XPathConstants.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaxXmlXpathXPathConstants_INCLUDE_ALL")
#ifdef JavaxXmlXpathXPathConstants_RESTRICT
#define JavaxXmlXpathXPathConstants_INCLUDE_ALL 0
#else
#define JavaxXmlXpathXPathConstants_INCLUDE_ALL 1
#endif
#undef JavaxXmlXpathXPathConstants_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxXmlXpathXPathConstants_) && (JavaxXmlXpathXPathConstants_INCLUDE_ALL || defined(JavaxXmlXpathXPathConstants_INCLUDE))
#define JavaxXmlXpathXPathConstants_

@class JavaxXmlNamespaceQName;

/*!
 @brief <p>XPath constants.
 </p>
 @author <a href="mailto:Norman.Walsh@@Sun.COM">Norman Walsh</a>
 @author <a href="mailto:Jeff.Suttor@@Sun.COM">Jeff Suttor</a>
 @version $Revision: 446598 $, $Date: 2006-09-15 05:55:40 -0700 (Fri, 15 Sep 2006) $
 - seealso: <a href="http://www.w3.org/TR/xpath">XML Path Language (XPath) Version 1.0</a>
 @since 1.5
 */
@interface JavaxXmlXpathXPathConstants : NSObject

+ (JavaxXmlNamespaceQName *)NUMBER;

+ (JavaxXmlNamespaceQName *)STRING;

+ (JavaxXmlNamespaceQName *)BOOLEAN;

+ (JavaxXmlNamespaceQName *)NODESET;

+ (JavaxXmlNamespaceQName *)NODE;

+ (NSString *)DOM_OBJECT_MODEL;

@end

J2OBJC_STATIC_INIT(JavaxXmlXpathXPathConstants)

/*!
 @brief <p>The XPath 1.0 number data type.
 </p>
 <p>Maps to Java <code>Double</code>.</p>
 */
inline JavaxXmlNamespaceQName *JavaxXmlXpathXPathConstants_get_NUMBER();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaxXmlNamespaceQName *JavaxXmlXpathXPathConstants_NUMBER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlXpathXPathConstants, NUMBER, JavaxXmlNamespaceQName *)

/*!
 @brief <p>The XPath 1.0 string data type.
 </p>
 <p>Maps to Java <code>String</code>.</p>
 */
inline JavaxXmlNamespaceQName *JavaxXmlXpathXPathConstants_get_STRING();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaxXmlNamespaceQName *JavaxXmlXpathXPathConstants_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlXpathXPathConstants, STRING, JavaxXmlNamespaceQName *)

/*!
 @brief <p>The XPath 1.0 boolean data type.
 </p>
 <p>Maps to Java <code>Boolean</code>.</p>
 */
inline JavaxXmlNamespaceQName *JavaxXmlXpathXPathConstants_get_BOOLEAN();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaxXmlNamespaceQName *JavaxXmlXpathXPathConstants_BOOLEAN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlXpathXPathConstants, BOOLEAN, JavaxXmlNamespaceQName *)

/*!
 @brief <p>The XPath 1.0 NodeSet data type.
 </p>
 <p>Maps to Java <code>org.w3c.dom.NodeList</code>.</p>
 */
inline JavaxXmlNamespaceQName *JavaxXmlXpathXPathConstants_get_NODESET();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaxXmlNamespaceQName *JavaxXmlXpathXPathConstants_NODESET;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlXpathXPathConstants, NODESET, JavaxXmlNamespaceQName *)

/*!
 @brief <p>The XPath 1.0 NodeSet data type.
 <p>Maps to Java <code>org.w3c.dom.Node</code>.</p>
 */
inline JavaxXmlNamespaceQName *JavaxXmlXpathXPathConstants_get_NODE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaxXmlNamespaceQName *JavaxXmlXpathXPathConstants_NODE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlXpathXPathConstants, NODE, JavaxXmlNamespaceQName *)

/*!
 @brief <p>The URI for the DOM object model, "http://java.sun.com/jaxp/xpath/dom".
 </p>
 */
inline NSString *JavaxXmlXpathXPathConstants_get_DOM_OBJECT_MODEL();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaxXmlXpathXPathConstants_DOM_OBJECT_MODEL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlXpathXPathConstants, DOM_OBJECT_MODEL, NSString *)

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlXpathXPathConstants)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaxXmlXpathXPathConstants_INCLUDE_ALL")