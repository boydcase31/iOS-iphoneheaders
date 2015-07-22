/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface HKAuthorizationSettingsHeaderView : UIView {

	NSString* _sourceName;
	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,copy) NSString * sourceName;                      //@synthesize sourceName=_sourceName - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                  //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(id)_titleFont;
-(void)setSourceName:(NSString *)arg1 ;
-(void)setLayoutMarginsWithTableView:(id)arg1 ;
-(id)_healthIconImage;
-(double)_verticalOffsetForTitle;
-(CGSize)_subtitleSizeThatFitsContainerSize:(CGSize)arg1 ;
-(double)_verticalOffsetForSubtitle;
-(NSString *)sourceName;
@end
