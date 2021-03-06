/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString, NSMutableArray;

@interface GMMDirectionsOptionDefinition : PBCodable  {
    int _iD;
    NSString *_optionText;
    int _type;
    NSMutableArray *_allowableValuess;
    int _defaultValue;
}

@property(readonly) int allowableValuessCount;
@property int defaultValue;
@property(retain) NSMutableArray * allowableValuess;
@property int type;
@property(retain) NSString * optionText;
@property int iD;


- (id)dictionaryRepresentation;
- (int)type;
- (void)setType:(int)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (int)allowableValuessCount;
- (void)setAllowableValues:(id)arg1 atIndex:(unsigned int)arg2;
- (id)allowableValuesAtIndex:(unsigned int)arg1;
- (void)addAllowableValues:(id)arg1;
- (id)allowableValuess;
- (void)setAllowableValuess:(id)arg1;
- (void)setOptionText:(id)arg1;
- (int)iD;
- (void)setID:(int)arg1;
- (id)optionText;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (int)defaultValue;
- (void)setDefaultValue:(int)arg1;

@end
