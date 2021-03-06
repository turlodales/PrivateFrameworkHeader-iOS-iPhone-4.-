/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDChart, CHDData, OADGraphicProperties;

@interface CHDErrorBar : NSObject  {
    CHDChart *mChart;
    double mValue;
    int mType;
    int mValueType;
    int mDirection;
    boolmNoEndCap;
    CHDData *mMinusValues;
    CHDData *mPlusValues;
    OADGraphicProperties *mGraphicProperties;
}

+ (id)errorBarWithChart:(id)arg1;

- (int)direction;
- (void)setDirection:(int)arg1;
- (int)type;
- (double)value;
- (void)setType:(int)arg1;
- (void)setValue:(double)arg1;
- (void)dealloc;
- (void)setValueType:(int)arg1;
- (void)setMinusValues:(id)arg1;
- (void)setGraphicProperties:(id)arg1;
- (id)plusValues;
- (bool)isNoEndCap;
- (id)minusValues;
- (id)initWithChart:(id)arg1;
- (void)setNoEndCap:(bool)arg1;
- (void)setPlusValues:(id)arg1;
- (int)valueType;
- (id)graphicProperties;

@end
