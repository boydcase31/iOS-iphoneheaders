/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>
#import <AirPortAssistant/StepByStepUIDevicePicker.h>

@class NSString;

@interface StepByStepUIViewController_ExtendWireless_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {

	NSString* connectionType;
	NSString* unlocalizedStatusString;
	NSString* personalizedBaseName;
	bool isReallyJoin;

}

@property (nonatomic,retain) NSString * personalizedBaseName; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(bool)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4 ;
-(void)setPersonalizedBaseName:(id)arg1 ;
-(id)personalizedBaseName;
-(void)validateAndUpdateNextButton;
-(void)setupAndShowEditableBaseStationName;
-(void)setupHeaderAndFooter;
-(void)setupDevices;
-(id)devicePickerLabel;
-(id)deviceTableLabel;
-(void)primaryActionSelected:(bool)arg1 ;
-(void)updateNavigationButtons;
-(void)selectedDeviceUpdated;
@end
