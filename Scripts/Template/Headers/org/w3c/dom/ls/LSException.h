//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/ls/LSException.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("OrgW3cDomLsLSException_INCLUDE_ALL")
#ifdef OrgW3cDomLsLSException_RESTRICT
#define OrgW3cDomLsLSException_INCLUDE_ALL 0
#else
#define OrgW3cDomLsLSException_INCLUDE_ALL 1
#endif
#undef OrgW3cDomLsLSException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgW3cDomLsLSException_) && (OrgW3cDomLsLSException_INCLUDE_ALL || defined(OrgW3cDomLsLSException_INCLUDE))
#define OrgW3cDomLsLSException_

#define JavaLangRuntimeException_RESTRICT 1
#define JavaLangRuntimeException_INCLUDE 1
#include "../../../../java/lang/RuntimeException.h"

/*!
 @brief Parser or write operations may throw an <code>LSException</code> if the
 processing is stopped.
 The processing can be stopped due to a
 <code>DOMError</code> with a severity of
 <code>DOMError.SEVERITY_FATAL_ERROR</code> or a non recovered
 <code>DOMError.SEVERITY_ERROR</code>, or if
 <code>DOMErrorHandler.handleError()</code> returned <code>false</code>.
 <p ><b>Note:</b>  As suggested in the definition of the constants in the
 <code>DOMError</code> interface, a DOM implementation may choose to
 continue after a fatal error, but the resulting DOM tree is then
 implementation dependent.
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-LS-20040407'>Document Object Model (DOM) Level 3 Load
 and Save Specification</a>.
 */
@interface OrgW3cDomLsLSException : JavaLangRuntimeException {
 @public
  jshort code_;
}

+ (jshort)PARSE_ERR;

+ (jshort)SERIALIZE_ERR;

#pragma mark Public

- (instancetype)initWithShort:(jshort)code
                 withNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomLsLSException)

/*!
 @brief If an attempt was made to load a document, or an XML Fragment, using
 <code>LSParser</code> and the processing has been stopped.
 */
inline jshort OrgW3cDomLsLSException_get_PARSE_ERR();
#define OrgW3cDomLsLSException_PARSE_ERR 81
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomLsLSException, PARSE_ERR, jshort)

/*!
 @brief If an attempt was made to serialize a <code>Node</code> using
 <code>LSSerializer</code> and the processing has been stopped.
 */
inline jshort OrgW3cDomLsLSException_get_SERIALIZE_ERR();
#define OrgW3cDomLsLSException_SERIALIZE_ERR 82
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomLsLSException, SERIALIZE_ERR, jshort)

FOUNDATION_EXPORT void OrgW3cDomLsLSException_initWithShort_withNSString_(OrgW3cDomLsLSException *self, jshort code, NSString *message);

FOUNDATION_EXPORT OrgW3cDomLsLSException *new_OrgW3cDomLsLSException_initWithShort_withNSString_(jshort code, NSString *message) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomLsLSException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("OrgW3cDomLsLSException_INCLUDE_ALL")