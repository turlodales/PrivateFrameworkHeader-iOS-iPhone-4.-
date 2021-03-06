/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WebUIModalAlertView : UIAlertView <UIAlertViewDelegate> {
    int _clickedButton;
}

+ (id)modalAlertSheetWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;

- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;
- (int)clickedButton;

@end
