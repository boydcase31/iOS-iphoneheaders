/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class UIView, CAMutableMeshTransform;

@interface SBStretchTransformer : NSObject {

	UIView* m_view;
	int m_anchorEdge;
	long long m_orientation;
	CAMutableMeshTransform* m_mesh;
	double m_stretchFactor;
	/*^block*/id m_animationCompletionHandler;

}

@property (nonatomic,retain) UIView * view; 
@property (assign,nonatomic) int anchorEdge; 
@property (assign,nonatomic) long long orientation; 
@property (assign,nonatomic) double stretchFactor; 
-(void)setAnchorEdge:(int)arg1 ;
-(void)updateMeshTransform:(id)arg1 stretchFactor:(double)arg2 ;
-(void)animateToZeroStretchFactorWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithView:(id)arg1 anchorEdge:(int)arg2 orientation:(long long)arg3 ;
-(void)animateToZeroStretchFactor;
-(int)anchorEdge;
-(double)stretchFactor;
-(void)setStretchFactor:(double)arg1 ;
-(void)dealloc;
-(UIView *)view;
-(long long)orientation;
-(void)setView:(UIView *)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setOrientation:(long long)arg1 ;
-(id)meshTransform;
@end
