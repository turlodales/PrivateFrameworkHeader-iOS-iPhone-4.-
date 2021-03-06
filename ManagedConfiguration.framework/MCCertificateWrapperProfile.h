/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCCertificateWrapperProfile : MCConfigurationProfile  {
}

+ (id)_identifierHashFromData:(id)arg1;
+ (id)_wrapperPayloadDictWithCertData:(id)arg1 fileName:(id)arg2 name:(id)arg3 identifier:(id)arg4 type:(id)arg5;
+ (id)_wrapperWAPIPayloadDictWithPEMData:(id)arg1 fileName:(id)arg2 name:(id)arg3 identifier:(id)arg4;
+ (id)_basicWrapperProfileForCertificateName:(id)arg1 fileName:(id)arg2 identifier:(id)arg3;
+ (id)_wrapperProfileForCertificate:(struct __SecCertificate { }*)arg1 fileName:(id)arg2 certData:(id)arg3 type:(id)arg4;
+ (id)_wrapperProfileForWAPICertificate:(struct __SecCertificate { }*)arg1 fileName:(id)arg2 PEMData:(id)arg3;
+ (id)wrapperProfileDictionaryWithCertificateData:(id)arg1 fileName:(id)arg2;

- (id)_certificatePayload;
- (id)initWithDictionary:(id)arg1 originalData:(id)arg2 allowEmptyPayload:(BOOL)arg3 outError:(id*)arg4;
- (int)trustLevel;
- (BOOL)isSigned;
- (id)earliestCertificateExpiryDate;
- (id)stubDictionary;

@end
