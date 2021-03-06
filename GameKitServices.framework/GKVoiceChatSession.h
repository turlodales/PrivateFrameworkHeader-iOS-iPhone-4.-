/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class <GKVoiceChatSessionDelegate>, NSString, NSArray;

@interface GKVoiceChatSession : NSObject  {
    id opaqueSession;
}

@property <GKVoiceChatSessionDelegate> * delegate;
@property(readonly) NSString * sessionName;
@property(readonly) NSArray * peerList;
@property(getter=isActiveSession) BOOL activeSession;
@property(readonly) float inputMeter;
@property float sessionVolume;


- (id)initWithGKSession:(id)arg1 sessionName:(id)arg2;
- (float)outputMeterForPeer:(id)arg1;
- (void)startSession;
- (void)stopSession;
- (void)setMute:(BOOL)arg1 forPeer:(id)arg2;
- (id)peerList;
- (void)setActiveSession:(BOOL)arg1;
- (BOOL)isActiveSession;
- (id)sessionName;
- (void)setSessionVolume:(float)arg1;
- (float)sessionVolume;
- (float)inputMeter;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
