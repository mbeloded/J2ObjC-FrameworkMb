//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/SpannableStringBuilder.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("AndroidTextSpannableStringBuilder_INCLUDE_ALL")
#ifdef AndroidTextSpannableStringBuilder_RESTRICT
#define AndroidTextSpannableStringBuilder_INCLUDE_ALL 0
#else
#define AndroidTextSpannableStringBuilder_INCLUDE_ALL 1
#endif
#undef AndroidTextSpannableStringBuilder_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (AndroidTextSpannableStringBuilder_) && (AndroidTextSpannableStringBuilder_INCLUDE_ALL || defined(AndroidTextSpannableStringBuilder_INCLUDE))
#define AndroidTextSpannableStringBuilder_

#define JavaLangCharSequence_RESTRICT 1
#define JavaLangCharSequence_INCLUDE 1
#include "../../java/lang/CharSequence.h"

#define AndroidTextGetChars_RESTRICT 1
#define AndroidTextGetChars_INCLUDE 1
#include "../../android/text/GetChars.h"

#define AndroidTextSpannable_RESTRICT 1
#define AndroidTextSpannable_INCLUDE 1
#include "../../android/text/Spannable.h"

#define AndroidTextEditable_RESTRICT 1
#define AndroidTextEditable_INCLUDE 1
#include "../../android/text/Editable.h"

#define JavaLangAppendable_RESTRICT 1
#define JavaLangAppendable_INCLUDE 1
#include "../../java/lang/Appendable.h"

@class IOSCharArray;
@class IOSClass;
@class IOSObjectArray;

/*!
 @brief This is the class for text whose content and markup can both be changed.
 */
@interface AndroidTextSpannableStringBuilder : NSObject < JavaLangCharSequence, AndroidTextGetChars, AndroidTextSpannable, AndroidTextEditable, JavaLangAppendable >

#pragma mark Public

/*!
 @brief Create a new SpannableStringBuilder with empty contents
 */
- (instancetype)init;

/*!
 @brief Create a new SpannableStringBuilder containing a copy of the
 specified text, including its spans if any.
 */
- (instancetype)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)text;

/*!
 @brief Create a new SpannableStringBuilder containing a copy of the
 specified slice of the specified text, including its spans if any.
 */
- (instancetype)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)text
                                     withInt:(jint)start
                                     withInt:(jint)end;

- (AndroidTextSpannableStringBuilder *)appendWithChar:(jchar)text;

- (AndroidTextSpannableStringBuilder *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)text;

- (AndroidTextSpannableStringBuilder *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)text
                                                              withInt:(jint)start
                                                              withInt:(jint)end;

/*!
 @brief Return the char at the specified offset within the buffer.
 */
- (jchar)charAtWithInt:(jint)where;

- (void)clear;

- (void)clearSpans;

- (AndroidTextSpannableStringBuilder *)delete__WithInt:(jint)start
                                               withInt:(jint)end;

- (jboolean)isEqual:(id)o;

/*!
 @brief Copy the specified range of chars from this buffer into the
 specified array, beginning at the specified offset.
 */
- (void)getCharsWithInt:(jint)start
                withInt:(jint)end
          withCharArray:(IOSCharArray *)dest
                withInt:(jint)destoff;

- (IOSObjectArray *)getFilters;

/*!
 @brief Return the buffer offset of the end of the specified
 markup object, or -1 if it is not attached to this buffer.
 */
- (jint)getSpanEndWithId:(id)what;

/*!
 @brief Return the flags of the end of the specified
 markup object, or 0 if it is not attached to this buffer.
 */
- (jint)getSpanFlagsWithId:(id)what;

/*!
 @brief Return an array of the spans of the specified type that overlap
 the specified range of the buffer.
 The kind may be Object.class to get
 a list of all the spans regardless of type.
 */
- (IOSObjectArray *)getSpansWithInt:(jint)queryStart
                            withInt:(jint)queryEnd
                       withIOSClass:(IOSClass *)kind;

/*!
 @brief Return the buffer offset of the beginning of the specified
 markup object, or -1 if it is not attached to this buffer.
 */
- (jint)getSpanStartWithId:(id)what;

- (NSUInteger)hash;

- (AndroidTextSpannableStringBuilder *)insertWithInt:(jint)where
                            withJavaLangCharSequence:(id<JavaLangCharSequence>)tb;

- (AndroidTextSpannableStringBuilder *)insertWithInt:(jint)where
                            withJavaLangCharSequence:(id<JavaLangCharSequence>)tb
                                             withInt:(jint)start
                                             withInt:(jint)end;

/*!
 @brief Return the number of chars in the buffer.
 */
- (jint)length;

/*!
 @brief Return the next offset after <code>start</code> but less than or
 equal to <code>limit</code> where a span of the specified type
 begins or ends.
 */
- (jint)nextSpanTransitionWithInt:(jint)start
                          withInt:(jint)limit
                     withIOSClass:(IOSClass *)kind;

/*!
 @brief Remove the specified markup object from the buffer.
 */
- (void)removeSpanWithId:(id)what;

- (AndroidTextSpannableStringBuilder *)replaceWithInt:(jint)start
                                              withInt:(jint)end
                             withJavaLangCharSequence:(id<JavaLangCharSequence>)tb;

- (AndroidTextSpannableStringBuilder *)replaceWithInt:(jint)start
                                              withInt:(jint)end
                             withJavaLangCharSequence:(id<JavaLangCharSequence>)tb
                                              withInt:(jint)tbstart
                                              withInt:(jint)tbend;

- (void)setFiltersWithAndroidTextInputFilterArray:(IOSObjectArray *)filters;

/*!
 @brief Mark the specified range of text with the specified object.
 The flags determine how the span will behave when text is
 inserted at the start or end of the span's range.
 */
- (void)setSpanWithId:(id)what
              withInt:(jint)start
              withInt:(jint)end
              withInt:(jint)flags;

/*!
 @brief Return a new CharSequence containing a copy of the specified
 range of this buffer, including the overlapping spans.
 */
- (id<JavaLangCharSequence>)subSequenceFrom:(jint)start
                                         to:(jint)end;

/*!
 @brief Return a String containing a copy of the chars in this buffer, limited to the
 [start, end[ range.
 */
- (NSString *)substringWithInt:(jint)start
                       withInt:(jint)end;

/*!
 @brief Return a String containing a copy of the chars in this buffer.
 */
- (NSString *)description;

+ (AndroidTextSpannableStringBuilder *)valueOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)source;

@end

J2OBJC_STATIC_INIT(AndroidTextSpannableStringBuilder)

FOUNDATION_EXPORT void AndroidTextSpannableStringBuilder_init(AndroidTextSpannableStringBuilder *self);

FOUNDATION_EXPORT AndroidTextSpannableStringBuilder *new_AndroidTextSpannableStringBuilder_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void AndroidTextSpannableStringBuilder_initWithJavaLangCharSequence_(AndroidTextSpannableStringBuilder *self, id<JavaLangCharSequence> text);

FOUNDATION_EXPORT AndroidTextSpannableStringBuilder *new_AndroidTextSpannableStringBuilder_initWithJavaLangCharSequence_(id<JavaLangCharSequence> text) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void AndroidTextSpannableStringBuilder_initWithJavaLangCharSequence_withInt_withInt_(AndroidTextSpannableStringBuilder *self, id<JavaLangCharSequence> text, jint start, jint end);

FOUNDATION_EXPORT AndroidTextSpannableStringBuilder *new_AndroidTextSpannableStringBuilder_initWithJavaLangCharSequence_withInt_withInt_(id<JavaLangCharSequence> text, jint start, jint end) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidTextSpannableStringBuilder *AndroidTextSpannableStringBuilder_valueOfWithJavaLangCharSequence_(id<JavaLangCharSequence> source);

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextSpannableStringBuilder)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("AndroidTextSpannableStringBuilder_INCLUDE_ALL")