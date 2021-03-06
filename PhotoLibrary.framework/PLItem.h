/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString;

@interface PLItem : NSObject  {
    id _internal;
}

@property(readonly) int itemType;
@property(copy) NSString * title;

+ (Class)_internalClass;

- (id)initWithURL:(id)arg1;
- (id)init;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 pathExtension:(id)arg2;
- (int)itemType;
- (BOOL)_allowsRotation;
- (id)_MLPhoto;

@end
