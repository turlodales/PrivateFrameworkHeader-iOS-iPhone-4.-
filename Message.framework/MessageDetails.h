/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MessageLibrary, NSString;

@interface MessageDetails : NSObject  {
    MessageLibrary *library;
    unsigned int libraryID;
    unsigned long long messageFlags;
    unsigned int uid;
    unsigned int encoding;
    BOOL isInvalid;
    int mailboxID;
    unsigned int conversationHash;
    unsigned int dateReceived;
    NSString *externalID;
}


- (id)remoteID;
- (double)dateReceivedAsTimeIntervalSince1970;
- (id)externalID;
- (id)messageID;
- (unsigned int)mailboxID;
- (id)mailbox;
- (id)copyMessageInfo;
- (unsigned int)libraryID;
- (unsigned long long)messageFlags;
- (unsigned long)uid;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;

@end
