/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OCPPackagePart, NSDictionary;

@interface OAVShapeManager : NSObject  {
    struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; } *mShape;
    unsigned short mType;
    OCPPackagePart *mPackagePart;
    NSDictionary *mShapeStyle;
    NSDictionary *mTextBoxStyle;
}


- (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)shape;
- (id)path;
- (unsigned short)type;
- (id)shadowColor;
- (void)dealloc;
- (id)strokeEndArrowType;
- (id)strokeEndArrowWidth;
- (float)strokeFgAlpha;
- (id)initWithShape:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 type:(unsigned short)arg2 packagePart:(id)arg3;
- (BOOL)isImage;
- (BOOL)isWordArt;
- (BOOL)isFillOK;
- (id)imageFillTitle;
- (BOOL)isStrokeOK;
- (BOOL)isStroked;
- (id)strokeFgColor;
- (id)strokeBgColor;
- (id)strokeFillType;
- (float)strokeMiterLimit;
- (id)strokeCompoundType;
- (id)strokeDashStyle;
- (id)strokeCapStyle;
- (id)strokeJoinStyle;
- (id)strokeStartArrowType;
- (id)strokeStartArrowWidth;
- (id)strokeStartArrowLength;
- (id)strokeEndArrowLength;
- (BOOL)isShadowOK;
- (id)shadowType;
- (float)shadowAlpha;
- (struct CGPoint { float x1; float x2; })shadowOffsets;
- (id)textWrapStyle;
- (BOOL)autoInsets;
- (id)limo;
- (id)textBodyRects;
- (id)imageRelId;
- (id)movieRelId;
- (id)fillType;
- (BOOL)isFilled;
- (float)fillAngle;
- (id)imageFillId;
- (id)fillFgColor;
- (float)fillFgAlpha;
- (id)fillBgColor;
- (float)fillBgAlpha;
- (float)fillFocus;
- (id)fillGradientColors;
- (struct OAVTextBoxInsets { float x1; float x2; float x3; float x4; })textInsets;
- (id)textLayoutFlow;
- (id)textAltLayoutFlow;
- (BOOL)fitShapeToText;
- (id)packagePart;
- (BOOL)isShadowed;
- (id)textAnchor;
- (id)textRotation;
- (float)strokeWidth;

@end