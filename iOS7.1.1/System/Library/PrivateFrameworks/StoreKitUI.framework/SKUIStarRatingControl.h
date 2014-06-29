/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UIImage;

@interface SKUIStarRatingControl : UIControl {

	long long _previousUserRating;
	UIImageView* _emptyStarsImageView;
	UIImageView* _filledStarsImageView;
	long long _userRating;

}

@property (nonatomic,retain) UIImage * emptyStarsImage; 
@property (nonatomic,retain) UIImage * filledStarsImage; 
@property (assign,nonatomic) long long userRating;                    //@synthesize userRating=_userRating - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(bool)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void).cxx_destruct;
-(long long)userRating;
-(void)setUserRating:(long long)arg1 ;
-(void)setEmptyStarsImage:(id)arg1 ;
-(void)setFilledStarsImage:(id)arg1 ;
-(void)_updateUserRatingWithTouch:(id)arg1 ;
-(id)emptyStarsImage;
-(id)filledStarsImage;
@end
