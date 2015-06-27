/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:32 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBCCSettingModule.h>

@class BBSettingsGateway, BBBehaviorOverride;

@interface SBCCDoNotDisturbSetting : SBCCSettingModule {

	BBSettingsGateway* _settingsGateway;
	BBBehaviorOverride* _activeOverride;
	int _activeStatus;

}
+(id)identifier;
+(id)displayName;
-(id)aggdKey;
-(char)_toggleState;
-(id)glyphImageForState:(int)arg1 ;
-(id)statusUpdate;
-(void)_setDNDEnabled:(char)arg1 updateServer:(char)arg2 source:(unsigned)arg3 ;
-(void)_setDNDStatus:(int)arg1 ;
-(void)_updateActiveOverrides:(id)arg1 ;
-(void)_tearDown;
-(void)dealloc;
-(void)deactivate;
-(void)_updateState;
-(void)activate;
@end
