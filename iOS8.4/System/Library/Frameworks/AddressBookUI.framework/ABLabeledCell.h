/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABContactCell.h>

@class NSDictionary, UIImageView, UIView, UILabel, NSString;

@interface ABLabeledCell : ABContactCell {

	NSDictionary* _labelTextAttributes;
	NSDictionary* _valueTextAttributes;
	UIImageView* _chevron;

}

@property (nonatomic,readonly) double chevronWidth; 
@property (nonatomic,readonly) UIImageView * chevron;                       //@synthesize chevron=_chevron - In the implementation block
@property (nonatomic,readonly) UIView*<ABText> labelView; 
@property (nonatomic,readonly) UIView*<ABText> valueView; 
@property (nonatomic,readonly) double topBaselineConstant; 
@property (nonatomic,readonly) double bottomBaselineConstant; 
@property (nonatomic,readonly) UIView * rightMostView; 
@property (nonatomic,readonly) UILabel * standardLabelView; 
@property (nonatomic,readonly) UILabel * standardValueView; 
@property (nonatomic,readonly) NSString * labelString; 
@property (nonatomic,readonly) NSString * valueString; 
@property (nonatomic,copy) NSDictionary * labelTextAttributes; 
@property (nonatomic,copy) NSDictionary * valueTextAttributes; 
+(BOOL)wantsChevron;
+(BOOL)wantsHorizontalLayout;
+(BOOL)wantsStandardConstraints;
-(UILabel *)standardLabelView;
-(void)setLabelTextAttributes:(NSDictionary *)arg1 ;
-(id)variableConstraints;
-(UIView*<ABText>)labelView;
-(double)minCellHeight;
-(id)constantConstraints;
-(UIView *)rightMostView;
-(void)setValueTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)labelTextAttributes;
-(NSDictionary *)valueTextAttributes;
-(UILabel *)standardValueView;
-(NSString *)labelString;
-(NSString *)valueString;
-(double)chevronWidth;
-(id)constantConstraintsForStandardLayout;
-(id)variableConstraintsForStandardLayout;
-(id)constantConstraintsForHorizontalLayout;
-(id)constantConstraintsForVerticalLayout;
-(id)variableConstraintsForHorizontalLayout;
-(id)variableConstraintsForVerticalLayout;
-(double)topBaselineConstant;
-(double)bottomBaselineConstant;
-(UIView*<ABText>)valueView;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)tintColorDidChange;
-(UIImageView *)chevron;
@end
