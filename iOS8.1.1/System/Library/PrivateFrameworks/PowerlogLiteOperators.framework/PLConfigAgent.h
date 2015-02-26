/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLNSTimerOperatorComposition;

@interface PLConfigAgent : PLAgent {

	PLNSTimerOperatorComposition* _timedTrigger;

}

@property (retain) PLNSTimerOperatorComposition * timedTrigger;              //@synthesize timedTrigger=_timedTrigger - In the implementation block
+(void)load;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
-(id)init;
-(void)log;
-(id)buildVersion;
-(id)deviceName;
-(void)initOperatorDependancies;
-(void)logEventNoneConfig;
-(id)hardwareModel;
-(id)crashReporterKey;
-(id)bootArgs;
-(long long)autolockTime;
-(id)baseband;
-(id)basebandFirmware;
-(BOOL)noWatchdogs;
-(BOOL)disableCABlanking;
-(id)logAutomatedDeviceGroup;
-(id)trimmingConditionsForRolloverAtDate:(id)arg1 ;
-(PLNSTimerOperatorComposition *)timedTrigger;
-(void)setTimedTrigger:(PLNSTimerOperatorComposition *)arg1 ;
@end
