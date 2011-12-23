/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SURotationController, SUViewControllerFactory, SUViewControllerScriptProperties, NSMutableArray, SUNavigationItem, SUViewControllerContext, NSString, UIViewController;

@interface SUViewController : UIViewController <ISOperationDelegate> {
    SUViewControllerScriptProperties *_cachedScriptProperties;
    NSMutableArray *_cancelOnDeallocOperations;
    BOOL _excludeFromNavigationHistory;
    UIViewController *_footerViewController;
    UIViewController *_inputAccessoryViewController;
    BOOL _isEnteringForeground;
    BOOL _loading;
    SUViewControllerContext *_memoryPurgeContext;
    NSMutableArray *_operations;
    NSMutableArray *_pendingDialogs;
    SUViewControllerContext *_restoredContext;
    SURotationController *_rotationController;
    int _rotationState;
    BOOL _shouldInvalidateForMemoryPurge;
    int _transitionSafetyCount;
}

@property(getter=isVisible,readonly) BOOL visible;
@property(getter=isVisibleAndFrontmost,readonly) BOOL visibleAndFrontmost;
@property(readonly) double defaultPNGExpirationTime;
@property(readonly) NSString * defaultPNGName;
@property(readonly) int statusBarStyle;
@property(readonly) SUViewControllerFactory * viewControllerFactory;
@property BOOL shouldInvalidateForMemoryPurge;
@property BOOL shouldExcludeFromNavigationHistory;
@property(getter=isLoading) BOOL loading;
@property(retain) UIViewController * inputAccessoryViewController;
@property(readonly) UIViewController * footerViewController;
@property(retain,readonly) SUNavigationItem * navigationItem;


- (BOOL)isVisible;
- (void)loadView;
- (id)inputAccessoryView;
- (void)setParentViewController:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)isLoading;
- (void)reload;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)_setExistingNavigationItem:(id)arg1;
- (id)_existingNavigationItem;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)_canReloadView;
- (void)purgeMemoryForReason:(int)arg1;
- (void)applicationWillSuspend;
- (int)_preferredInterfaceOrientationGivenCurrentOrientation:(int)arg1;
- (int)interfaceOrientation;
- (id)defaultPNGName;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (id)navigationItem;
- (void)invalidate;
- (BOOL)becomeFirstResponder;
- (id)init;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2;
- (void)dealloc;
- (int)statusBarStyle;
- (void)applicationDidResume;
- (id)defaultFirstResponder;
- (BOOL)_shouldUseDefaultFirstResponder;
- (void)setTitle:(id)arg1;
- (void)setShouldExcludeFromNavigationHistory:(BOOL)arg1;
- (id)footerViewController;
- (void)setShouldInvalidateForMemoryPurge:(BOOL)arg1;
- (id)inputAccessoryViewController;
- (void)setInputAccessoryViewController:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)applicationDidEnterBackground;
- (void)cancelOperations;
- (void)resetRestoredContext;
- (void)enqueueOperation:(id)arg1 cancelOnDealloc:(BOOL)arg2;
- (void)applicationWillEnterForeground;
- (id)copyDefaultScriptProperties;
- (void)setSection:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (BOOL)shouldExcludeFromNavigationHistory;
- (id)initWithSection:(id)arg1;
- (id)copyChildViewControllersForReason:(int)arg1;
- (id)copyScriptProperties;
- (double)defaultPNGExpirationTime;
- (void)dismissAfterDialogs;
- (void)dismissFooterViewControllerAnimated:(BOOL)arg1;
- (void)handleApplicationURL:(id)arg1;
- (void)invalidateForMemoryPurge;
- (BOOL)isVisibleAndFrontmost;
- (id)newRotationController;
- (BOOL)presentDialog:(id)arg1 pendUntilVisible:(BOOL)arg2;
- (BOOL)presentDialogForError:(id)arg1 pendUntilVisible:(BOOL)arg2;
- (void)presentFooterViewController:(id)arg1 animated:(BOOL)arg2;
- (void)reloadContentSizeForViewInPopover;
- (void)setScriptProperties:(id)arg1;
- (void)setTitle:(id)arg1 changeTabBarItem:(BOOL)arg2;
- (void)trackOperation:(id)arg1 cancelOnDealloc:(BOOL)arg2;
- (id)viewControllerFactory;
- (void)storePageProtocolDidChange;
- (void)_performScheduledRotation:(id)arg1;
- (void)_dismissFooterAnimationDidStop:(id)arg1;
- (void)_presentFooterAnimationDidStop;
- (void)operationFinished:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_dialogFinishedNotification:(id)arg1;
- (void)_keyboardDidHideNotification:(id)arg1;
- (void)_keyboardDidShowNotification:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (id)_rotationController;
- (BOOL)shouldInvalidateForMemoryPurge;
- (id)copyArchivableContext;
- (void)restoreArchivableContext:(id)arg1;

@end