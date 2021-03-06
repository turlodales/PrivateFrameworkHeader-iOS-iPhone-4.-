/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@interface ADJavaScriptObject : NSObject  {
    BOOL _busy;
}

@property(getter=isBusy) BOOL busy;

+ (id)inputRequiredProperties;
+ (void)initializeInContext:(struct OpaqueJSContext { }*)arg1;
+ (id)scriptingKeys;
+ (id)scriptSelectors;
+ (BOOL)validateInput:(id)arg1 inContext:(struct OpaqueJSContext { }*)arg2;
+ (id)childClasses;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void)setBusy:(BOOL)arg1;
- (id)description;
- (BOOL)isBusy;
- (id)attributeKeys;

@end
