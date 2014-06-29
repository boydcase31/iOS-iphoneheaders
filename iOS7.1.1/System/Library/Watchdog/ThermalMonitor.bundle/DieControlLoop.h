/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/PidComponent.h>
#import <ThermalMonitor/tGraphDataSource.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface DieControlLoop : PidComponent <tGraphDataSource> {

	SCD_Struct_Di10 dieTempSensorContext[5];
	int numDieTempSensors;
	int listIDPos;
	float PANIC_LEVEL;
	float RELEASE_TEMP;
	NSObject<OS_dispatch_source>* theTimer;
	unsigned note;
	unsigned sochotPMGR;
	unsigned sochotCCC;
	IONotificationPortRef notificationPort;
	char* maxLoadIndexTableCPU;
	char* maxLoadIndexTableGPU;
	NSObject<OS_dispatch_queue>* dieControlQueue;
	bool dieControlLoopIsRunning;

}
-(void)startLoopIfNeeded;
-(void)initSensorContext:(SCD_Struct_Di10*)arg1 forService:(const char*)arg2 key:(CFStringRef)arg3 value:(CFStringRef)arg4 ;
-(void)updateComponentsForMaxCPULoadIndex:(int)arg1 andMaxGPULoadIndex:(int)arg2 ;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(id)initWithRunLoop:(CFRunLoopRef)arg1 maxLoadTableCPU:(char*)arg2 maxLoadTableGPU:(char*)arg3 sgxCrossover:(int)arg4 andPIDList:(CFDictionaryRef)arg5 ;
-(int)numberOfFields;
-(void)startLoop;
-(void)controlDie;
-(void)dealloc;
@end
