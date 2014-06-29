/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <SiriUI/SiriUIAceObjectViewController.h>

@class SAUIImageView, UIButton;

@interface SiriGKImageDetailViewController : SiriUIAceObjectViewController {

	SAUIImageView* _imageViewSnippet;
	UIButton* _imageButton;

}
-(void)_imageButtonTapped;
-(void)_hideImageButtonHighlight;
-(void)_showImageButtonHighlight;
-(id)initWithImageViewSnippet:(id)arg1 ;
-(CGSize)_displayedImageSizeForImageSize:(CGSize)arg1 inWidth:(double)arg2 ;
-(void)_configureImageView:(id)arg1 forImageSize:(CGSize)arg2 inWidth:(double)arg3 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)loadView;
-(void).cxx_destruct;
-(id)navigationTitle;
-(void)setAceObject:(id)arg1 ;
@end
