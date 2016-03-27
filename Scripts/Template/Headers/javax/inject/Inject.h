//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/inject/javax_inject/build_result/java/javax/inject/Inject.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaxInjectInject_INCLUDE_ALL")
#ifdef JavaxInjectInject_RESTRICT
#define JavaxInjectInject_INCLUDE_ALL 0
#else
#define JavaxInjectInject_INCLUDE_ALL 1
#endif
#undef JavaxInjectInject_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxInjectInject_) && (JavaxInjectInject_INCLUDE_ALL || defined(JavaxInjectInject_INCLUDE))
#define JavaxInjectInject_

#define JavaLangAnnotationAnnotation_RESTRICT 1
#define JavaLangAnnotationAnnotation_INCLUDE 1
#include "../../java/lang/annotation/Annotation.h"

/*!
 @brief Identifies injectable constructors, methods, and fields.
 May apply to static
 as well as instance members. An injectable member may have any access
 modifier (private, package-private, protected, public). Constructors are
 injected first, followed by fields, and then methods. Fields and methods
 in superclasses are injected before those in subclasses. Ordering of
 injection among fields and among methods in the same class is not specified.
 <p>Injectable constructors are annotated with <code>@@Inject</code> and accept
 zero or more dependencies as arguments. <code>@@Inject</code> can apply to at most
 one constructor per class.
 <p><tt><blockquote style="padding-left: 2em; text-indent: -2em;">@@Inject
 <i>ConstructorModifiers<sub>opt</sub></i>
 <i>SimpleTypeName</i>(<i>FormalParameterList<sub>opt</sub></i>)
 <i>Throws<sub>opt</sub></i>
 <i>ConstructorBody</i></blockquote></tt>
 <p><code>@@Inject</code> is optional for public, no-argument constructors when no
 other constructors are present. This enables injectors to invoke default
 constructors.
 <p><tt><blockquote style="padding-left: 2em; text-indent: -2em;">
 &commat;&commat;Inject<sub><i>opt</i></sub>
 <i>Annotations<sub>opt</sub></i>
 public
 <i>SimpleTypeName</i>()
 <i>Throws<sub>opt</sub></i>
 <i>ConstructorBody</i></blockquote></tt>
 <p>Injectable fields:
 <ul>
 <li>are annotated with <code>@@Inject</code>.
 <li>are not final.
 <li>may have any otherwise valid name.</li></ul>
 <p><tt><blockquote style="padding-left: 2em; text-indent: -2em;">@@Inject
 <i>FieldModifiers<sub>opt</sub></i>
 <i>Type</i>
 <i>VariableDeclarators</i>;</blockquote></tt>
 <p>Injectable methods:
 <ul>
 <li>are annotated with <code>@@Inject</code>.</li>
 <li>are not abstract.</li>
 <li>do not declare type parameters of their own.</li>
 <li>may return a result</li>
 <li>may have any otherwise valid name.</li>
 <li>accept zero or more dependencies as arguments.</li></ul>
 <p><tt><blockquote style="padding-left: 2em; text-indent: -2em;">@@Inject
 <i>MethodModifiers<sub>opt</sub></i>
 <i>ResultType</i>
 <i>Identifier</i>(<i>FormalParameterList<sub>opt</sub></i>)
 <i>Throws<sub>opt</sub></i>
 <i>MethodBody</i></blockquote></tt>
 <p>The injector ignores the result of an injected method, but
 non-<code>void</code> return types are allowed to support use of the method in
 other contexts (builder-style method chaining, for example).
 <p>Examples:
 @code

   public class Car {
     // Injectable constructor
     &#064;Inject public Car(Engine engine) { ... }
     // Injectable field
     &#064;Inject private Provider&lt;Seat> seatProvider;
     // Injectable package-private method
     &#064;Inject void install(Windshield windshield, Trunk trunk) { ... }
   
@endcode
 <p>A method annotated with <code>@@Inject</code> that overrides another method
 annotated with <code>@@Inject</code> will only be injected once per injection
 request per instance. A method with <i>no</i> <code>@@Inject</code> annotation
 that overrides a method annotated with <code>@@Inject</code> will not be
 injected.
 <p>Injection of members annotated with <code>@@Inject</code> is required. While an
 injectable member may use any accessibility modifier (including
 <tt>private</tt>), platform or injector limitations (like security
 restrictions or lack of reflection support) might preclude injection
 of non-public members.
 <h3>Qualifiers</h3>
 <p>A qualifier may annotate an injectable field
 or parameter and, combined with the type, identify the implementation to
 inject. Qualifiers are optional, and when used with <code>@@Inject</code> in
 injector-independent classes, no more than one qualifier should annotate a
 single field or parameter. The qualifiers are bold in the following example:
 @code

   public class Car {
     &#064;Inject private <b>@@Leather</b> Provider&lt;Seat> seatProvider;
     &#064;Inject void install(<b>@@Tinted</b> Windshield windshield,
         <b>@@Big</b> Trunk trunk) { ... }
   
@endcode
 <p>If one injectable method overrides another, the overriding method's
 parameters do not automatically inherit qualifiers from the overridden
 method's parameters.
 <h3>Injectable Values</h3>
 <p>For a given type T and optional qualifier, an injector must be able to
 inject a user-specified class that:
 <ol type="a">
 <li>is assignment compatible with T and</li>
 <li>has an injectable constructor.</li>
 </ol>
 <p>For example, the user might use external configuration to pick an
 implementation of T. Beyond that, which values are injected depend upon the
 injector implementation and its configuration.
 <h3>Circular Dependencies</h3>
 <p>Detecting and resolving circular dependencies is left as an exercise for
 the injector implementation. Circular dependencies between two constructors
 is an obvious problem, but you can also have a circular dependency between
 injectable fields or methods:
 @code

   class A {
     &#064;Inject B b;
   }
   class B {
     &#064;Inject A a;
   
@endcode
 <p>When constructing an instance of <code>A</code>, a naive injector
 implementation might go into an infinite loop constructing an instance of
 <code>B</code> to set on <code>A</code>, a second instance of <code>A</code> to set on
 <code>B</code>, a second instance of <code>B</code> to set on the second instance of
 <code>A</code>, and so on.
 <p>A conservative injector might detect the circular dependency at build
 time and generate an error, at which point the programmer could break the
 circular dependency by injecting <code>Provider&lt;A></code> or <code>Provider<B></code>
  instead of <code>A</code> or <code>B</code> respectively. Calling <code>get()</code>
  on the provider directly from the constructor or
 method it was injected into defeats the provider's ability to break up
 circular dependencies. In the case of method or field injection, scoping
 one of the dependencies (using singleton scope, for
 example) may also enable a valid circular relationship.
 - seealso: javax.inject.Qualifier @@Qualifier
 - seealso: javax.inject.Provider
 */
@protocol JavaxInjectInject < JavaLangAnnotationAnnotation >

@end

@interface JavaxInjectInject : NSObject < JavaxInjectInject >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxInjectInject)

J2OBJC_TYPE_LITERAL_HEADER(JavaxInjectInject)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaxInjectInject_INCLUDE_ALL")
