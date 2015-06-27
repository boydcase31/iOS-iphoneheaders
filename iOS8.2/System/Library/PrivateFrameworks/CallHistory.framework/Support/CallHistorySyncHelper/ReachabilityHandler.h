/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CallHistorySyncHelper/CallHistorySyncHelper-Structs.h>
#import <CallHistory/CHSynchronizedLoggable.h>

@interface ReachabilityHandler : CHSynchronizedLoggable {

	SCNetworkReachabilityRef _reachabilityRef;
	char _isInternetReachable;

}
+(id)instance;
-(void)queryInitialState;
-(void)changed_sync:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isInternetReachable;
@end
