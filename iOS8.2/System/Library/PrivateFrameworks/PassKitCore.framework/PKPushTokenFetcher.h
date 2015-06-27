/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:42 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/APSConnectionDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray, APSConnection, NSString;

@interface PKPushTokenFetcher : NSObject <APSConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSMutableArray* _completionHandlers;
	APSConnection* _pushConnection;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)_handleTimeout;
-(void)_invokeCompletionWithPushToken:(id)arg1 ;
-(void)fetchPushTokenWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
@end
