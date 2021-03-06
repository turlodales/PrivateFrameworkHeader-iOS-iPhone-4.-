/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTGroupingCell : GQDTCell  {
    unsigned short mLevel;
    unsigned short mRowIdx;
    unsigned short mRowCount;
    BOOL mIsCollapsed;
    id mValue;
    id mFormat;
    struct __CFBundle { } *mProcessorBundle;
    BOOL mHasValidFormulaValue;
    struct __CFString { } *mFormulaValue;
}

+ (struct __CFString { }*)displayTypeString:(int)arg1;

- (unsigned short)rowIdx;
- (BOOL)isCollapsed;
- (BOOL)hasFormulaValue;
- (int)readValue:(struct _xmlTextReader { }*)arg1;
- (int)readElement:(struct _xmlTextReader { }*)arg1;
- (int)readRootFormat:(struct _xmlTextReader { }*)arg1;
- (int)readAttributes:(struct _xmlTextReader { }*)arg1;
- (struct __CFString { }*)createFormattedValue;
- (void)setProcessorBundle:(struct __CFBundle { }*)arg1;
- (id)value;
- (unsigned short)level;
- (void)dealloc;
- (unsigned short)rowCount;

@end
