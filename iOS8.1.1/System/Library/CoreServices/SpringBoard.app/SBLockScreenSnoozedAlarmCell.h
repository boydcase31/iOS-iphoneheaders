/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBLockScreenBulletinCell.h>
#import <SpringBoard/SBDateLabelDelegate.h>

@class SBSnoozedAlarmDateLabel;

@interface SBLockScreenSnoozedAlarmCell : SBLockScreenBulletinCell <SBDateLabelDelegate> {

	SBSnoozedAlarmDateLabel* _countdownLabel;

}
+(BOOL)wantsUnlockActionText;
+(double)rowHeight;
-(void)dateLabelDidChange:(id)arg1 ;
-(void)setContentAlpha:(double)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setFireDate:(id)arg1 ;
@end
