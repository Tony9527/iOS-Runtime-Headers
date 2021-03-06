/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBLaunchImageContextHostView : UIView {
    NSString *_bundleID;
    id /* block */ _captureBlock;
    CALayerHost *_contentLayer;
    id _delegate;
    float _remoteScale;
    BOOL _saved;
}

@property (nonatomic, copy) id /* block */ captureBlock;
@property (nonatomic) float remoteScale;
@property (getter=isSaved, nonatomic) BOOL saved;

- (id /* block */)captureBlock;
- (void)connectToContextID:(unsigned int)arg1 bundleID:(id)arg2;
- (unsigned int)contextId;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)disconnect;
- (BOOL)isSaved;
- (float)remoteScale;
- (void)setCaptureBlock:(id /* block */)arg1;
- (void)setRemoteScale:(float)arg1;
- (void)setSaved:(BOOL)arg1;

@end
