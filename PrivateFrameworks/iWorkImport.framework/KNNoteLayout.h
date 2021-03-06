/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNNoteLayout : TSDLayout <TSWPColumnMetrics, TSWPLayoutParent> {
    TSWPLayout *mContainedLayout;
    TSWPPadding *mPadding;
    struct CGSize { 
        float width; 
        float height; 
    } mSizeOfScrollViewEnclosingCanvas;
}

@property (nonatomic, readonly) BOOL alwaysStartsNewTarget;
@property (nonatomic, readonly) unsigned int columnCount;
@property (nonatomic, readonly) BOOL columnsAreLeftToRight;
@property (nonatomic, readonly) TSWPLayout *containedLayout;
@property (nonatomic, readonly) TSWPPadding *layoutMargins;
@property (nonatomic, readonly) TSWPPadding *padding;
@property (nonatomic, readonly) BOOL shrinkTextToFit;
@property (nonatomic, readonly) float textScaleFactor;

- (id).cxx_construct;
- (void)addChild:(id)arg1;
- (struct CGSize { float x1; float x2; })adjustedInsetsForTarget:(id)arg1;
- (BOOL)alwaysStartsNewTarget;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGPoint { float x1; float x2; })capturedInfoPositionForAttachment;
- (id)children;
- (unsigned int)columnCount;
- (id)columnMetricsForCharIndex:(unsigned int)arg1 outRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)columnsAreLeftToRight;
- (id)computeLayoutGeometry;
- (id)containedLayout;
- (void)createContainedLayoutForEditing;
- (void)dealloc;
- (id)dependentsOfTextLayout:(id)arg1;
- (float)gapForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
- (void)insertChild:(id)arg1 above:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertChild:(id)arg1 below:(id)arg2;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (void)invalidatePadding;
- (void)invalidateSize;
- (id)layoutGeometryFromInfo;
- (id)layoutMargins;
- (float)maxAutoGrowHeightForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })nonAutosizedFrameForTextLayout:(id)arg1;
- (id)p_adjustedPaddingForBodyWidth:(float)arg1;
- (BOOL)p_isForPrint;
- (id)padding;
- (float)positionForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2 target:(id)arg3 outWidth:(float*)arg4 outGap:(float*)arg5;
- (Class)repClassForTextLayout:(id)arg1;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (void)setChildren:(id)arg1;
- (BOOL)shrinkTextToFit;
- (BOOL)supportsBoldItalicUnderlineShortcuts;
- (BOOL)textIsVertical;
- (float)textScaleFactor;
- (float)textScaleFactorForPrinting;
- (void)updateChildrenFromInfo;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (float)widthForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;

@end
