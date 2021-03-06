/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, WebFrame, DOMNode;

@interface DDOperation : NSOperation  {
    WebFrame *_frame;
    DOMNode *_startNode;
    int _startOffset;
    DOMNode *_endNode;
    int _endOffset;
    BOOL _needContinuation;
    int _generationNumber;
    unsigned int _types;
    struct __DDScanQuery { } *_query;
    NSArray *_results;
    BOOL _isCurrentlyUsingTheScanner;
    BOOL _isDiscarded;
    int _tryCount;
    int _needsLayoutTryCount;
}

@property BOOL isDiscarded;
@property unsigned int detectionTypes;
@property int tryCount;
@property int generationNumber;
@property(retain) NSArray * results;
@property BOOL needContinuation;
@property int endOffset;
@property(retain) DOMNode * endNode;
@property int startOffset;
@property(retain) DOMNode * startNode;
@property(retain) WebFrame * frame;

+ (struct __DDScanner { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDLRTable {} *x2; struct __DDLexer {} *x3; struct __DDLookupTable {} *x4; struct __DDCache {} *x5; struct __DDTokenCache {} *x6; struct __DDLexemCache {} *x7; struct __DDScanQuery {} *x8; struct __DDScanQuery {} *x9; struct __CFArray {} *x10; struct __CFArray {} *x11; int x12; int x13; int x14; char *x15; id x16; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x17; unsigned int x18 : 1; unsigned int x19 : 1; }*)_sharedScannerForTypes:(unsigned int)arg1;
     /* Encoded args for previous method: ^{__DDScanner={__CFRuntimeBase=I[4C]}^{__DDLRTable}^{__DDLexer}^{__DDLookupTable}^{__DDCache}^{__DDTokenCache}^{__DDLexemCache}^{__DDScanQuery}^{__DDScanQuery}^{__CFArray}^{__CFArray}iii*@?b1b1}12@0:4I8 */


- (int)generationNumber;
- (void)setGenerationNumber:(int)arg1;
- (void)setResults:(id)arg1;
- (void)main;
- (int)endOffset;
- (void)cancel;
- (int)startOffset;
- (id)frame;
- (void)setFrame:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)cleanup;
- (void)setStartOffset:(int)arg1;
- (id)results;
- (struct __DDScanQuery { }*)scanQuery;
- (id)startNode;
- (void)_createScanQueryOnWebThreadStartAfterRange:(id)arg1;
- (void)_setScanQuery:(struct __DDScanQuery { }*)arg1;
- (BOOL)isDiscarded;
- (void)setIsDiscarded:(BOOL)arg1;
- (unsigned int)detectionTypes;
- (int)tryCount;
- (void)setNeedContinuation:(BOOL)arg1;
- (id)endNode;
- (void)setEndNode:(id)arg1;
- (void)setStartNode:(id)arg1;
- (void)setDetectionTypes:(unsigned int)arg1;
- (void)setTryCount:(int)arg1;
- (BOOL)_doURLificationOnDocument;
- (void)setEndOffset:(int)arg1;
- (BOOL)needContinuation;

@end
