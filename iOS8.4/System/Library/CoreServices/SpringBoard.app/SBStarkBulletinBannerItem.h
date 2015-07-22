/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBStarkBannerItem.h>

@class BBBulletin, SBUISound;

@interface SBStarkBulletinBannerItem : SBStarkBannerItem {

	BBBulletin* _bulletin;
	SBUISound* _sound;
	unsigned long long _feed;

}
-(id)sourceDate;
-(BOOL)_supportsSubActions;
-(id)_uiBannerActionForBBAction:(id)arg1 context:(id)arg2 ;
-(long long)defaultActionType;
-(id)categoryImage;
-(BOOL)matchesContext:(id)arg1 ;
-(id)_bbDismissAppearance;
-(id)bbSupplementaryActions;
-(id)_bbDismissAction;
-(id)bbAllActions;
-(id)initWithBulletin:(id)arg1 feed:(unsigned long long)arg2 ;
-(void)updateBulletinToInstance:(id)arg1 ;
-(id)subTitle;
-(void)dealloc;
-(/*^block*/id)action;
-(id)title;
-(id)message;
-(id)sound;
-(id)subActions;
-(BOOL)shouldShowModalSubActions;
-(id)subActionLabels;
@end
