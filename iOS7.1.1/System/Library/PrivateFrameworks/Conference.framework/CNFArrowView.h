/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Conference/Conference-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface CNFArrowView : UIView {

	UIColor* _fillColor;
	UIColor* _strokeColor;

}

@property (nonatomic,retain) UIColor * fillColor;                //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(void)setStrokeColor:(id)arg1 ;
-(id)fillColor;
-(id)strokeColor;
@end
