/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDCallout2Path : GQDPath  {
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
    double mCornerRadius;
    struct CGPoint { 
        float x; 
        float y; 
    } mTailPosition;
    double mTailSize;
    BOOL mTailAtCenter;
}


- (struct CGPoint { float x1; float x2; })tailCenter;
- (struct CGPoint { float x1; float x2; })tailPosition;
- (BOOL)tailAtCenter;
- (double)tailSize;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (struct CGPath { }*)createBezierPath;
- (double)cornerRadius;
- (struct CGSize { float x1; float x2; })size;

@end