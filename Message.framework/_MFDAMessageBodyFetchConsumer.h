/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class <MFDAStreamingContentConsumer>, MFError, NSData;

@interface _MFDAMessageBodyFetchConsumer : NSObject <MFRequestQueueResponseConsumer, DAMailAccountStreamConsumerFactory> {
    <MFDAStreamingContentConsumer> *_streamConsumer;
    BOOL _succeeded;
    MFError *_error;
    NSData *_data;
}

@property(retain) NSData * data;
@property(readonly) BOOL succeeded;
@property(retain) MFError * error;
@property(retain) <MFDAStreamingContentConsumer> * streamConsumer;


- (id)streamConsumer;
- (BOOL)wantsData;
- (BOOL)succeeded;
- (id)streamingContentConsumer;
- (void)setStreamConsumer:(id)arg1;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (id)data;
- (void)dealloc;
- (void)setData:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;

@end
