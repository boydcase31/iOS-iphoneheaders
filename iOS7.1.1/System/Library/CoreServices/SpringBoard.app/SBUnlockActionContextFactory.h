/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:48 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBUnlockActionContextFactory : NSObject
+(id)sharedInstance;
-(id)unlockActionContextForBulletin:(id)arg1 withOrigin:(int)arg2 pluginActionsAllowed:(BOOL)arg3 ;
-(id)unlockActionContextForAlertItem:(id)arg1 ;
-(id)unlockActionContextForCardItem:(id)arg1 ;
-(id)unlockActionContextForSnoozedAlarmItem:(id)arg1 ;
-(id)unlockActionContextForWidgetRequest:(/*^block*/ id)arg1 ;
@end
