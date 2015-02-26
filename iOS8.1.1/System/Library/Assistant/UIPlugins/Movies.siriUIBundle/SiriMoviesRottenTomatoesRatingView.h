/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, NSNumber;

@interface SiriMoviesRottenTomatoesRatingView : UIView {

	UIImageView* _tomatoImageView;
	UILabel* _percentageLabel;
	double _tomatoImageViewRightPadding;
	NSNumber* _tomatoRating;

}
-(BOOL)_isFresh;
-(id)initWithRating:(id)arg1 viewSize:(long long)arg2 showProviderName:(BOOL)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)baselineOffsetFromTopOfFrame;
@end
