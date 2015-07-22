/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class SUDescriptor;

@interface SBBaseSoftwareUpdateAlertItem : SBAlertItem {

	SUDescriptor* _descriptor;

}

@property (nonatomic,readonly) SUDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(void)activateSoftwareUpdateSettingsDisplay;
-(void)activateDisplayWithURL:(id)arg1 ;
-(void)dealloc;
-(SUDescriptor *)descriptor;
-(id)updateName;
-(BOOL)dismissOnLock;
-(BOOL)shouldShowInLockScreen;
-(BOOL)forcesModalAlertAppearance;
-(id)initWithDescriptor:(id)arg1 ;
@end
