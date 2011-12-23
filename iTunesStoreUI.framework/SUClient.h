/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ISURLOperationPool, SUScriptExecutionContext, SUViewControllerFactory, NSMutableArray, SUImageCache, NSLock, <SUClientDelegate>, NSString;

@interface SUClient : NSObject  {
    struct __CFArray { } *_assetTypes;
    NSString *_clientIdentifier;
    <SUClientDelegate> *_delegate;
    NSMutableArray *_downloadQueues;
    SUImageCache *_imageCache;
    ISURLOperationPool *_imagePool;
    NSLock *_lock;
    NSMutableArray *_preOrderQueues;
    SUScriptExecutionContext *_scriptExecutionContext;
    NSString *_searchHintsURLBagKey;
    NSString *_searchURLBagKey;
    SUViewControllerFactory *_viewControllerFactory;
    BOOL _dontSaveNavigationPath;
}

@property BOOL dontSaveNavigationPath;
@property(retain) SUViewControllerFactory * viewControllerFactory;
@property(retain) NSString * searchURLBagKey;
@property(retain) NSString * searchHintsURLBagKey;
@property(readonly) SUScriptExecutionContext * scriptExecutionContext;
@property(retain) ISURLOperationPool * imagePool;
@property(retain) SUImageCache * imageCache;
@property <SUClientDelegate> * delegate;
@property(retain) NSString * clientIdentifier;

+ (void)setSharedClient:(id)arg1;
+ (id)sharedClient;
+ (id)imagePool;
+ (id)viewControllerFactory;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setImageCache:(id)arg1;
- (id)_newAccountViewControllerForButtonAction:(id)arg1;
- (id)_newComposeReviewViewControllerForButtonAction:(id)arg1;
- (void)_ntsEndQueueSession:(id)arg1 fromArray:(id)arg2;
- (void)_purgeCaches;
- (BOOL)dontSaveNavigationPath;
- (void)setDontSaveNavigationPath:(BOOL)arg1;
- (void)endPreOrderQueueSessionWithDownloadKinds:(id)arg1;
- (id)imageCache;
- (struct __CFArray { }*)assetTypes;
- (id)beginDownloadQueueSessionForDownloadKind:(id)arg1;
- (id)beginDownloadQueueSessionWithDownloadKinds:(id)arg1;
- (id)beginPreOrderQueueSessionWithDownloadKinds:(id)arg1;
- (BOOL)composeReviewWithViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)dismissTopViewControllerAnimated:(BOOL)arg1;
- (BOOL)openURL:(id)arg1 inClientApplication:(id)arg2;
- (BOOL)openInternalURL:(id)arg1;
- (BOOL)sendActionForDialog:(id)arg1 button:(id)arg2;
- (void)setAssetTypes:(struct __CFArray { }*)arg1;
- (void)setClientIdentifier:(id)arg1;
- (id)downloadQueueForDownloadKind:(id)arg1;
- (void)endDownloadQueueSessionWithDownloadKinds:(id)arg1;
- (void)_memoryWarningNotification:(id)arg1;
- (void)_syncDidFinishNotification:(id)arg1;
- (id)_ntsQueueSessionWithDownloadKinds:(id)arg1 fromArray:(id)arg2;
- (id)_ntsQueueSessionWithQueue:(id)arg1 fromArray:(id)arg2;
- (BOOL)_presentModalViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_reloadScriptExecutionContext;
- (void)setViewControllerFactory:(id)arg1;
- (id)searchURLBagKey;
- (void)setSearchURLBagKey:(id)arg1;
- (id)searchHintsURLBagKey;
- (void)setSearchHintsURLBagKey:(id)arg1;
- (void)setImagePool:(id)arg1;
- (id)imagePool;
- (id)scriptExecutionContext;
- (void)_bagDidLoadNotification:(id)arg1;
- (void)endDownloadQueueSessionForQueue:(id)arg1;
- (id)clientIdentifier;
- (BOOL)enterAccountFlowWithViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)openExternalURL:(id)arg1;
- (id)viewControllerFactory;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;

@end