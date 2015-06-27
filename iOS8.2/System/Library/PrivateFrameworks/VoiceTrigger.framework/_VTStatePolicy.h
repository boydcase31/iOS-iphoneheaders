/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface _VTStatePolicy : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _callback;
	NSMutableSet* _dependentOnMe;
	NSMutableSet* _dependentUpon;

}
-(void)reload;
-(char)isEnabled;
-(void)dependencyUpdated:(id)arg1 ;
-(void)addDependent:(id)arg1 ;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)notify;
-(void)dependsOn:(id)arg1 ;
-(char)dependenciesSatisfied;
@end
