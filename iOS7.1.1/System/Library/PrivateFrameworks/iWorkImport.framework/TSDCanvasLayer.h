/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDNoDefaultImplicitActionLayer.h>

@class TSDInteractiveCanvasController, TSDCanvasView;

@interface TSDCanvasLayer : TSDNoDefaultImplicitActionLayer {

	TSDInteractiveCanvasController* mController;
	CGSize mUnscaledSize;
	UIEdgeInsets mContentInset;
	double mViewScale;
	unsigned long long mViewScaleAnimationCount;
	bool mAllowsPinchZoom;
	double mMinimumPinchViewScale;
	double mMaximumPinchViewScale;
	bool mShowsScaleFeedback;
	bool mIsInfinite;
	bool mHorizontallyCenteredInScrollView;
	bool mVerticallyCenteredInScrollView;
	bool mDisableLayout;

}

@property (assign,nonatomic) TSDInteractiveCanvasController * controller; 
@property (assign,nonatomic) CGSize unscaledSize; 
@property (assign,nonatomic) double viewScale; 
@property (assign,nonatomic) bool allowsPinchZoom; 
@property (assign,nonatomic) double minimumPinchViewScale; 
@property (assign,nonatomic) double maximumPinchViewScale; 
@property (nonatomic,readonly) CGPoint unscaledContentCenter; 
@property (nonatomic,readonly) TSDCanvasView * canvasView; 
@property (assign,nonatomic) bool showsScaleFeedback; 
@property (assign,getter=isInfinite,nonatomic) bool infinite; 
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (assign,nonatomic,@dynamic) bool centeredInScrollView; 
@property (assign,nonatomic) bool horizontallyCenteredInScrollView; 
@property (assign,nonatomic) bool verticallyCenteredInScrollView; 
@property (assign,getter=isLayoutDisabled,nonatomic) bool disableLayout; 
-(double)viewScale;
-(CGSize)unscaledSize;
-(id)canvasView;
-(double)minimumPinchViewScale;
-(double)maximumPinchViewScale;
-(void)animateToViewScale:(double)arg1 contentCenter:(CGPoint)arg2 contentInset:(UIEdgeInsets)arg3 duration:(double)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)setViewScale:(double)arg1 andScrollViewFrame:(CGRect)arg2 maintainPosition:(bool)arg3 animated:(bool)arg4 ;
-(bool)isLayoutDisabled;
-(void)layoutIfNeededIgnoringDisabledLayout;
-(void)setUnscaledSize:(CGSize)arg1 ;
-(void)fixFrameAndScrollView;
-(void)setInfinite:(bool)arg1 ;
-(void)setNeedsDisplayForDirtyTiles:(id)arg1 ;
-(void)p_scrollViewScrollerStyleDidChange:(id)arg1 ;
-(bool)horizontallyCenteredInScrollView;
-(bool)verticallyCenteredInScrollView;
-(CGRect)p_fixedBoundsForScrollViewSize:(CGSize)arg1 viewScale:(double)arg2 contentInset:(UIEdgeInsets)arg3 ;
-(void)p_reenableDrawingAfterResumingFromBackground;
-(void)p_setViewScale:(double)arg1 preservingScrollOffset:(bool)arg2 ;
-(void)p_setEnclosingScrollViewZoomParameters;
-(CGPoint)p_contentOffsetForUnscaledContentCenter:(CGPoint)arg1 viewScale:(double)arg2 contentInset:(UIEdgeInsets)arg3 ;
-(CGPoint)unscaledContentCenter;
-(void)p_setViewScale:(double)arg1 ;
-(CGPoint)contentOffsetForUnscaledContentCenter:(CGPoint)arg1 ;
-(void)animateToViewScale:(double)arg1 contentCenter:(CGPoint)arg2 contentInset:(UIEdgeInsets)arg3 duration:(double)arg4 animation:(id)arg5 completionBlock:(/*^block*/ id)arg6 ;
-(void)setDisableLayout:(bool)arg1 ;
-(void)setScrollViewFrameMaintainingApparentScrollPosition:(CGRect)arg1 animated:(bool)arg2 ;
-(bool)centeredInScrollView;
-(void)setCenteredInScrollView:(bool)arg1 ;
-(void)setHorizontallyCenteredInScrollView:(bool)arg1 ;
-(void)setVerticallyCenteredInScrollView:(bool)arg1 ;
-(void)setAllowsPinchZoom:(bool)arg1 ;
-(void)setMinimumPinchViewScale:(double)arg1 ;
-(void)setMaximumPinchViewScale:(double)arg1 ;
-(void)setScrollViewFrameMaintainingApparentScrollPosition:(CGRect)arg1 ;
-(bool)allowsPinchZoom;
-(bool)showsScaleFeedback;
-(void)setShowsScaleFeedback:(bool)arg1 ;
-(bool)isInfinite;
-(id)initWithCoder:(id)arg1 ;
-(void)setNeedsLayout;
-(id)init;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)controller;
-(void)setController:(id)arg1 ;
-(void)teardown;
-(void)p_commonInit;
-(void)setViewScale:(double)arg1 ;
-(void)layoutSublayers;
@end
