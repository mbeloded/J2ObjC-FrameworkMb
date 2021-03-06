//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/SelectionKey.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaNioChannelsSelectionKey_INCLUDE_ALL")
#ifdef JavaNioChannelsSelectionKey_RESTRICT
#define JavaNioChannelsSelectionKey_INCLUDE_ALL 0
#else
#define JavaNioChannelsSelectionKey_INCLUDE_ALL 1
#endif
#undef JavaNioChannelsSelectionKey_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsSelectionKey_) && (JavaNioChannelsSelectionKey_INCLUDE_ALL || defined(JavaNioChannelsSelectionKey_INCLUDE))
#define JavaNioChannelsSelectionKey_

@class JavaNioChannelsSelectableChannel;
@class JavaNioChannelsSelector;

/*!
 @brief A <code>SelectionKey</code> represents the relationship between a channel and a
 selector for which the channel is registered.
 <h3>Operation set</h3>
 An operation set is represented by an integer value. The bits of an operation
 set represent categories of operations for a key's channel: Accepting socket
 connections (<code>OP_ACCEPT</code>), connecting with a socket (<code>OP_CONNECT</code>),
 reading (<code>OP_READ</code>) and writing (<code>OP_WRITE</code>).
 <h4>Interest set</h4>
 The interest set is an operation set that defines the operations that a
 <code>channel</code> is interested in performing.
 <h4>Ready set</h4>
 The ready set is an operation set that shows the operations that a
 <code>channel</code> is ready to execute.
 */
@interface JavaNioChannelsSelectionKey : NSObject

+ (jint)OP_ACCEPT;

+ (jint)OP_CONNECT;

+ (jint)OP_READ;

+ (jint)OP_WRITE;

#pragma mark Public

/*!
 @brief Attaches an object to this key.
 It is acceptable to attach <code>null</code>,
 this discards the old attachment.
 @param anObject
 the object to attach, or <code>null</code> to discard the current
 attachment.
 @return the last attached object or <code>null</code> if no object has been
 attached.
 */
- (id)attachWithId:(id)anObject;

/*!
 @brief Gets the attached object.
 @return the attached object or <code>null</code> if no object has been
 attached.
 */
- (id)attachment;

/*!
 @brief Cancels this key.
 <p>
 A key that has been canceled is no longer valid. Calling this method on
 an already canceled key does nothing.
 <p>
 Calling this method is safe at any time. The call might block until
 another ongoing call to a method of this selector has finished. The
 reason is that it is synchronizing on the key set of the selector. After
 this call finishes, the key will have been added to the selectors
 canceled-keys set and will not be included in any future selects of this
 selector.
 */
- (void)cancel;

/*!
 @brief Gets the channel of this key.
 @return the channel of this key.
 */
- (JavaNioChannelsSelectableChannel *)channel;

/*!
 @brief Gets this key's <code>interest set</code>.
 The returned set has
 only those bits set that are valid for this key's channel.
 @return the interest set of this key.
 @throws CancelledKeyException
 if the key has already been canceled.
 */
- (jint)interestOps;

/*!
 @brief Sets the <code>interest set</code> for this key.
 @param operations
 the new interest set.
 @return this key.
 @throws IllegalArgumentException
 if a bit in <code>operations</code> is not in the set of
 <code>valid operations</code> of this
 key's channel.
 @throws CancelledKeyException
 if the key has already been canceled.
 */
- (JavaNioChannelsSelectionKey *)interestOpsWithInt:(jint)operations;

/*!
 @brief Indicates whether this key's channel is interested in the accept
 operation and is ready to accept new connections.
 A call to this method
 is equal to executing <code>(readyOps() & OP_ACCEPT) == OP_ACCEPT</code>.
 @return <code>true</code> if the channel is interested in the accept operation
 and is ready to accept new connections, <code>false</code> otherwise.
 @throws CancelledKeyException
 if the key has already been canceled.
 */
- (jboolean)isAcceptable;

/*!
 @brief Indicates whether this key's channel is interested in the connect
 operation and is ready to connect.
 A call to this method is equal to
 executing <code>(readyOps() & OP_CONNECT) == OP_CONNECT</code>.
 @return <code>true</code> if the channel is interested in the connect
 operation and is ready to connect, <code>false</code> otherwise.
 @throws CancelledKeyException
 if the key has already been canceled.
 */
- (jboolean)isConnectable;

/*!
 @brief Indicates whether this key's channel is interested in the read operation
 and is ready to read.
 A call to this method is equal to executing
 <code>(readyOps() & OP_READ) == OP_READ</code>.
 @return <code>true</code> if the channel is interested in the read operation
 and is ready to read, <code>false</code> otherwise.
 @throws CancelledKeyException
 if the key has already been canceled.
 */
- (jboolean)isReadable;

/*!
 @brief Indicates whether this key is valid.
 A key is valid as long as it has not
 been canceled.
 @return <code>true</code> if this key has not been canceled, <code>false</code>
 otherwise.
 */
- (jboolean)isValid;

/*!
 @brief Indicates whether this key's channel is interested in the write operation
 and is ready to write.
 A call to this method is equal to executing
 <code>(readyOps() & OP_WRITE) == OP_WRITE</code>.
 @return <code>true</code> if the channel is interested in the write operation
 and is ready to write, <code>false</code> otherwise.
 @throws CancelledKeyException
 if the key has already been canceled.
 */
- (jboolean)isWritable;

/*!
 @brief Gets the set of operations that are ready.
 The returned set has only
 those bits set that are valid for this key's channel.
 @return the operations for which this key's channel is ready.
 @throws CancelledKeyException
 if the key has already been canceled.
 */
- (jint)readyOps;

/*!
 @brief Gets the selector for which this key's channel is registered.
 @return the related selector.
 */
- (JavaNioChannelsSelector *)selector;

#pragma mark Protected

/*!
 @brief Constructs a new <code>SelectionKey</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsSelectionKey)

/*!
 @brief Interest set mask bit for socket-accept operations.
 */
inline jint JavaNioChannelsSelectionKey_get_OP_ACCEPT();
#define JavaNioChannelsSelectionKey_OP_ACCEPT 16
J2OBJC_STATIC_FIELD_CONSTANT(JavaNioChannelsSelectionKey, OP_ACCEPT, jint)

/*!
 @brief Interest set mask bit for socket-connect operations.
 */
inline jint JavaNioChannelsSelectionKey_get_OP_CONNECT();
#define JavaNioChannelsSelectionKey_OP_CONNECT 8
J2OBJC_STATIC_FIELD_CONSTANT(JavaNioChannelsSelectionKey, OP_CONNECT, jint)

/*!
 @brief Interesting operation mask bit for read operations.
 */
inline jint JavaNioChannelsSelectionKey_get_OP_READ();
#define JavaNioChannelsSelectionKey_OP_READ 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaNioChannelsSelectionKey, OP_READ, jint)

/*!
 @brief Interest set mask bit for write operations.
 */
inline jint JavaNioChannelsSelectionKey_get_OP_WRITE();
#define JavaNioChannelsSelectionKey_OP_WRITE 4
J2OBJC_STATIC_FIELD_CONSTANT(JavaNioChannelsSelectionKey, OP_WRITE, jint)

FOUNDATION_EXPORT void JavaNioChannelsSelectionKey_init(JavaNioChannelsSelectionKey *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsSelectionKey)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaNioChannelsSelectionKey_INCLUDE_ALL")
