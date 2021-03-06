/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ISPropertyListProvider;

@interface SUStorePageDataProvider : ISDataProvider  {
    int _outputType;
    ISPropertyListProvider *_propertyListDataProvider;
}

@property(copy) ISPropertyListProvider * propertyListDataProvider;
@property int outputType;


- (int)outputType;
- (void)setOutputType:(int)arg1;
- (void)dealloc;
- (BOOL)parseData:(id)arg1 returningError:(id*)arg2;
- (id)propertyListDataProvider;
- (void)setPropertyListDataProvider:(id)arg1;

@end
