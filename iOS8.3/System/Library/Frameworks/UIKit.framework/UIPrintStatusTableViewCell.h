/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:58 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIActivityIndicatorView, UILabel;

@interface UIPrintStatusTableViewCell : UITableViewCell {

	UIActivityIndicatorView* _activityIndicator;
	UILabel* _titleLabel;
	UILabel* _hostLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * hostLabel;               //@synthesize hostLabel=_hostLabel - In the implementation block
@property (assign,nonatomic) char showActive; 
-(void)dealloc;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(char)showActive;
-(void)setShowActive:(char)arg1 ;
-(UILabel *)hostLabel;
-(void)setHostLabel:(UILabel *)arg1 ;
@end
