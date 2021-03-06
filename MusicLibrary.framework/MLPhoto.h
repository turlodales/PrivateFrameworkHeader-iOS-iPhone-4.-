/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLPhoto : NSObject <MLPhotoBakedThumbnailsDelegate> {
}

+ (int)fullSizeImageFormat;
+ (int)indexSheetFormat;
+ (id)preferredFileExtensionForType:(id)arg1;
+ (int)posterThumbnailFormat;
+ (struct CGImage { }*)createUnrotatedImageWithSize:(struct CGSize { float x1; float x2; })arg1 originalImage:(struct CGImage { }*)arg2 imageOrientation:(int)arg3;
+ (int)thumbnailFormat;
+ (int)landscapeScrubberThumbnailFormat;
+ (int)portraitScrubberThumbnailFormat;
+ (void)_initializeSafeCategory;
+ (int)indexSheetFormat;
+ (id)preferredFileExtensionForType:(id)arg1;
+ (int)posterThumbnailFormat;
+ (struct CGImage { }*)createUnrotatedImageWithSize:(struct CGSize { float x1; float x2; })arg1 originalImage:(struct CGImage { }*)arg2 imageOrientation:(int)arg3;
+ (int)thumbnailFormat;
+ (int)landscapeScrubberThumbnailFormat;
+ (int)portraitScrubberThumbnailFormat;

- (double)duration;
- (id)mimeType;
- (void)setType:(int)arg1;
- (void)setDate:(id)arg1;
- (BOOL)isEditable;
- (id)title;
- (int)orientation;
- (void)dealloc;
- (BOOL)isImage;
- (double)latitude;
- (double)longitude;
- (void)setCaptureDateFromITunes:(unsigned long)arg1;
- (void)deleteFiles;
- (BOOL)hasGPS;
- (id)pathForImageFormat:(int)arg1;
- (int)sortByImageIDComparison:(id)arg1;
- (void)_setFilenameFromFullSizeVideoPath:(id)arg1;
- (id)filenameWithoutExtension;
- (void)_setMetadataPathFromFullSizeVideoPath:(id)arg1;
- (id)_metadataPath;
- (BOOL)_isValidMimeType:(id)arg1 forService:(id)arg2;
- (BOOL)_isValidFileExtension:(id)arg1 forService:(id)arg2;
- (id)thumbnailFilename;
- (id)prebakedThumbnailFilename;
- (id)prebakedLandscapeScrubberThumbnailsFilename;
- (id)prebakedPortraitScrubberThumbnailsFilename;
- (id)videoPreviewFilename;
- (void)setWriteIsPending:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceRectangles:(id)arg1;
- (id)utiType;
- (double)captureTime;
- (double)durationInMilliseconds;
- (void)setDurationInMilliseconds:(double)arg1;
- (id)pathForLargeThumbnailFile;
- (id)pathForImageFile;
- (id)fileExtension;
- (id)pathForThumbnailFile;
- (id)pathForPrebakedThumbnail;
- (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)pathForLargeDisplayableImageFile;
- (BOOL)hasFullSizeImageData;
- (int)imageID;
- (int)sortByDateComparison:(id)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setCaptureTime:(double)arg1;
- (id)fileExtensions;
- (BOOL)isAudio;
- (BOOL)allowsRotation;
- (void)setPathForVideoFile:(id)arg1;
- (BOOL)isWritePending;
- (BOOL)didSetPhotoData;
- (void)addExtension:(id)arg1;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)pathForTrimmedVideoFile;
- (id)pathForOriginalFile;
- (id)pathForVideoPreviewFile;
- (BOOL)isVideo;
- (id)pathForVideoFile;
- (int)photoType;
- (id)fileExtensionForService:(id)arg1;
- (id)mimeTypeForService:(id)arg1;
- (void)saveBakedVideoThumbnail;
- (id)previewFrameImageFromDatabase;
- (id)date;
- (id)indexSheetImage;
- (BOOL)isPhotoStreamPhoto;
- (id)createFullScreenImage:(const struct __CFDictionary {}**)arg1;
- (id)newFullSizeImageForImagePickerClient;
- (id)textBadgeString;
- (int)savedAssetType;
- (id)imageWithFormat:(int)arg1;
- (id)newLowResolutionFullScreenImage;
- (id)newFullSizeImage;
- (BOOL)hasFullSizeImage;
- (id)imageWithFormat:(int)arg1 outImageProperties:(const struct __CFDictionary {}**)arg2;
- (id)largestAvailableDataRepresentationAndType:(id*)arg1;
- (void)copyToPasteboard;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)previewFrameImageFromDatabase;
- (id)date;
- (id)indexSheetImage;
- (BOOL)isPhotoStreamPhoto;
- (id)createFullScreenImage:(const struct __CFDictionary {}**)arg1;
- (id)newFullSizeImageForImagePickerClient;
- (id)textBadgeString;
- (int)savedAssetType;
- (id)imageWithFormat:(int)arg1;
- (id)newLowResolutionFullScreenImage;
- (id)newFullSizeImage;
- (BOOL)hasFullSizeImage;
- (id)imageWithFormat:(int)arg1 outImageProperties:(const struct __CFDictionary {}**)arg2;
- (id)largestAvailableDataRepresentationAndType:(id*)arg1;
- (void)copyToPasteboard;

@end
