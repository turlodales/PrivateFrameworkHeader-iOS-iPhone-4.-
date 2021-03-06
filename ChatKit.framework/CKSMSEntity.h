/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString;

@interface CKSMSEntity : CKEntity  {
    NSString *_cachedName;
    unsigned int _accepted : 1;
    unsigned int _generated : 1;
    struct __CKSMSAddress { } *_smsAddress;
}

@property struct __CKSMSAddress { }* smsAddress;

+ (id)copyAllSMSEntities;

- (int)identifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void)dealloc;
- (int)propertyType;
- (id)rawAddress;
- (void)_addToSharedSet;
- (void)_removeFromSharedSet;
- (id)_existingEntityFromSharedSet;
- (id)_initWithSMSAddress:(struct __CKSMSAddress { }*)arg1 service:(id)arg2;
- (int)addressBookUID;
- (void)_generateCachedName;
- (void)_generateName;
- (void)setSmsAddress:(struct __CKSMSAddress { }*)arg1;
- (struct __CKSMSAddress { }*)_smsAddress;
- (struct __CKSMSAddress { }*)smsAddress;
- (void)manuallyGenerateWithABRecord:(void*)arg1 identifier:(int)arg2;
- (void*)abRecord;
- (void)resetCaches;

@end
