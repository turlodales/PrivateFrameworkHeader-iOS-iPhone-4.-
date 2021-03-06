/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLImageTableSegment;

@interface PLMappedImageData : NSMutableData  {
    PLImageTableSegment *_segment;
    void *_bytes;
    unsigned int _length;
}

@property unsigned int imageWidth;
@property unsigned int imageHeight;
@property struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } photoUUID;
@property BOOL isPlaceholder;


- (void*)mutableBytes;
- (void)dealloc;
- (const void*)bytes;
- (unsigned int)length;
- (void)setIsPlaceholder:(BOOL)arg1;
- (id)initWithImageTableSegment:(id)arg1 bytes:(void*)arg2 length:(unsigned long)arg3;
- (struct { struct { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; unsigned char x_1_1_4; unsigned char x_1_1_5; unsigned char x_1_1_6; unsigned char x_1_1_7; unsigned char x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned char x_1_1_13; unsigned char x_1_1_14; unsigned char x_1_1_15; unsigned char x_1_1_16; } x1; unsigned int x2; unsigned int x3; int x4; }*)_footer;
- (int)lengthIncludingFooter;
- (unsigned int)imageWidth;
- (void)setImageWidth:(unsigned int)arg1;
- (unsigned int)imageHeight;
- (void)setImageHeight:(unsigned int)arg1;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; })photoUUID;
- (void)setPhotoUUID:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; })arg1;
- (BOOL)isPlaceholder;

@end
