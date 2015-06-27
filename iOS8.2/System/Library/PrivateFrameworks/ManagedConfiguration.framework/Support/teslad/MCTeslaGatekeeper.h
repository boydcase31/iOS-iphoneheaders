/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:39 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/teslad
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <teslad/NSXPCListenerDelegate.h>

@class NSTimer, NSDate, NSString;

@interface MCTeslaGatekeeper : NSObject <NSXPCListenerDelegate> {

	NSTimer* _idleTimer;
	NSDate* _lastConnectionDate;

}

@property (nonatomic,retain) NSTimer * idleTimer;                   //@synthesize idleTimer=_idleTimer - In the implementation block
@property (retain) NSDate * lastConnectionDate;                     //@synthesize lastConnectionDate=_lastConnectionDate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedGatekeeper;
-(void)resetIdleTimer;
-(void)setLastConnectionDate:(NSDate *)arg1 ;
-(NSDate *)lastConnectionDate;
-(void)idleTimerDidFire:(id)arg1 ;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setIdleTimer:(NSTimer *)arg1 ;
-(NSTimer *)idleTimer;
@end
