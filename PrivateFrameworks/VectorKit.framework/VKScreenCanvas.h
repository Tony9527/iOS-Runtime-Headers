/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class CADisplay, NSArray, NSMutableArray, VGLDisplayLink, VKCamera, VKDispatch, VKLayoutContext, VKMemoryObserver, VKScene, VKWorld;

@interface VKScreenCanvas : VGLScreenCanvas <VKWorldDelegate, VKAnimationRunner, VKCameraControllerDelegate, VKCameraDelegate> {
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    NSMutableArray *_animations[2];
    VKCamera *_camera;
    NSMutableArray *_cameraControllers;
    BOOL _deallocing;
    float _debugFramesPerSecond;
    BOOL _debugPaintFrameRateGraph;
    VKDispatch *_dispatch;
    VGLDisplayLink *_displayLink;
    int _displayRate;
    } _edgeInsets;
    } _fullyOccludedEdgeInsets;
    BOOL _iconsShouldAlignToPixels;
    BOOL _isInBackground;
    } _labelEdgeInsets;
    VKLayoutContext *_layoutContext;
    VKMemoryObserver *_memoryObserver;
    BOOL _needsLayout;
    unsigned int _needsRepaint;
    BOOL _rendersInBackground;
    int _requestedRate;
    VKScene *_scene;
    BOOL _userIsGesturing;
    unsigned int _wantsLayout;
    VKWorld *_world;
}

@property(readonly) VKCamera * camera;
@property(readonly) NSArray * cameraControllers;
@property BOOL debugEnableMultisampling;
@property float debugFramesPerSecond;
@property BOOL debugPaintFrameRateGraph;
@property int displayRate;
@property struct VKEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property struct VKEdgeInsets { float x1; float x2; float x3; float x4; } fullyOccludedEdgeInsets;
@property(getter=isGesturing) BOOL gesturing;
@property CADisplay * hostDisplay;
@property BOOL iconsShouldAlignToPixels;
@property struct VKEdgeInsets { float x1; float x2; float x3; float x4; } labelEdgeInsets;
@property BOOL rendersInBackground;
@property int targetDisplay;
@property BOOL useTimerDisplayLink;
@property(readonly) VKWorld * world;

+ (Class)contextClass;

- (id).cxx_construct;
- (void)_queueUpdateDisplayLinkStatus;
- (void)_renderCore:(double)arg1;
- (void)_updateDisplayRate;
- (void)addCameraController:(id)arg1;
- (void)adoptAnimation:(id)arg1;
- (void)animateWithTimestamp:(double)arg1;
- (void)animationDidResume:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (id)camera;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 canZoomInDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)cameraController:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 requestsDisplayRate:(int)arg2;
- (void)cameraController:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (id)cameraControllers;
- (void)cameraDidChange:(id)arg1;
- (BOOL)canRender;
- (void)dealloc;
- (BOOL)debugEnableMultisampling;
- (float)debugFramesPerSecond;
- (BOOL)debugPaintFrameRateGraph;
- (void)didDrawView;
- (void)didEnterBackground;
- (void)didReceiveMemoryWarning;
- (int)displayRate;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawWithTimestamp:(double)arg1;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (void)edgeInsetsDidEndAnimating;
- (void)edgeInsetsWillBeginAnimating;
- (void)forceLayout;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })fullyOccludedEdgeInsets;
- (id)hostDisplay;
- (BOOL)iconsShouldAlignToPixels;
- (id)initWithContext:(id)arg1 inBackground:(BOOL)arg2;
- (BOOL)isGesturing;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })labelEdgeInsets;
- (void)layoutSublayers;
- (void)onTimerFired:(id)arg1;
- (void)removeCameraController:(id)arg1;
- (BOOL)rendersInBackground;
- (void)runAnimation:(id)arg1;
- (void)runOrAdoptAnimation:(id)arg1 run:(BOOL)arg2;
- (void)setContentsScale:(float)arg1;
- (void)setDebugEnableMultisampling:(BOOL)arg1;
- (void)setDebugFramesPerSecond:(float)arg1;
- (void)setDebugPaintFrameRateGraph:(BOOL)arg1;
- (void)setDisplayRate:(int)arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setFullyOccludedEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGesturing:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setHostDisplay:(id)arg1;
- (void)setIconsShouldAlignToPixels:(BOOL)arg1;
- (void)setLabelEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (void)setRendersInBackground:(BOOL)arg1;
- (void)setTargetDisplay:(int)arg1;
- (void)setUseTimerDisplayLink:(BOOL)arg1;
- (void)takeSnapshotIfNeeded;
- (int)targetDisplay;
- (void)transferAnimationsTo:(id)arg1;
- (void)updateCameraForFrameResize;
- (BOOL)updateDisplayLinkStatus;
- (BOOL)useTimerDisplayLink;
- (BOOL)wantsRender;
- (BOOL)wantsTimerTick;
- (void)willEnterForeground;
- (id)world;
- (void)worldDisplayDidChange:(id)arg1;
- (void)worldLayoutDidChange:(id)arg1;

@end