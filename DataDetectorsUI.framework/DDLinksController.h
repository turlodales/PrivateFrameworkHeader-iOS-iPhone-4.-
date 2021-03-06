/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@class NSArray, UIViewController, UITableViewController;

@interface DDLinksController : UIViewController  {
    UIViewController *_currentDisplayedViewController;
    UITableViewController *_tableController;
    NSArray *_dataDetectorsResults;
    struct __DDResult { } *_displayedResult;
}

@property(retain) UIViewController * currentDisplayedViewController;


- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)title;
- (void)dealloc;
- (id)_abPersonViewControllerForPerson:(void*)arg1 property:(int)arg2 withIdentifier:(int)arg3;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)setDataDetectorsResults:(id)arg1;
- (void)_setDisplayedResult:(struct __DDResult { }*)arg1;
- (void)_displayViewController:(id)arg1;
- (id)_unknownPersonViewControllerForDisplayedResult;
- (id)_viewControllerForDisplayedResult;
- (void*)_copyPersonForDisplayedResult;
- (id)currentDisplayedViewController;
- (void)setCurrentDisplayedViewController:(id)arg1;

@end
