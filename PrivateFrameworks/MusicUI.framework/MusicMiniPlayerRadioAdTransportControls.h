/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class MPImageCacheRequest, UIImageView;

@interface MusicMiniPlayerRadioAdTransportControls : MusicMiniPlayerTransportControls {
    UIImageView *_artworkImageView;
    MPImageCacheRequest *_currentImageCacheRequest;
}

+ (unsigned long long)defaultVisibleParts;

- (void).cxx_destruct;
- (void)_avItemArtworkDidChangeNotification:(id)arg1;
- (void)_updateItemArtwork;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setItem:(id)arg1;

@end