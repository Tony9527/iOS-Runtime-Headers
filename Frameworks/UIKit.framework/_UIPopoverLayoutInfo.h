/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPopoverLayoutInfo : NSObject  {
    struct CGSize { 
        float width; 
        float height; 
    } _preferredContentSize;
    unsigned int _preferredArrowDirections;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _containingFrame;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _containingFrameInsets;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _targetRect;
    BOOL _constrainToTargetRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frame;
    float _offset;
    unsigned int _arrowDirection;
}

@property(readonly) unsigned int arrowDirection;
@property(readonly) float offset;
@property(readonly) struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } frame;
@property BOOL constrainToTargetRect;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } targetRect;
@property struct UIEdgeInsets { float top; float left; float bottom; float right; } containingFrameInsets;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } containingFrame;
@property unsigned int preferredArrowDirections;
@property struct CGSize { float width; float height; } preferredContentSize;

+ (struct CGSize { float x1; float x2; })_popoverViewSizeForContentSize:(struct CGSize { float x1; float x2; })arg1 arrowDirection:(unsigned int)arg2;
+ (id)_observationKeys;

- (void)_updateOutputs;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)constrainToTargetRect;
- (void)setContainingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPreferredContentSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })targetRect;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })containingFrameInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })containingFrame;
- (unsigned int)preferredArrowDirections;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)setPreferredArrowDirections:(unsigned int)arg1;
- (void)setConstrainToTargetRect:(BOOL)arg1;
- (void)setContainingFrameInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned int)arrowDirection;
- (float)offset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)init;
- (void)dealloc;
- (id)description;

@end