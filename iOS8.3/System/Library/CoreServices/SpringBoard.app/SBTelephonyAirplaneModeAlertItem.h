/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:18 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBLaunchAlertItem.h>

@interface SBTelephonyAirplaneModeAlertItem : SBLaunchAlertItem {

	char _wasDeviceLocked;

}

@property (assign,nonatomic) char wasDeviceLocked;              //@synthesize wasDeviceLocked=_wasDeviceLocked - In the implementation block
-(void)setWasDeviceLocked:(char)arg1 ;
-(char)wasDeviceLocked;
-(char)dismissOnLock;
-(char)reappearsAfterLock;
@end
