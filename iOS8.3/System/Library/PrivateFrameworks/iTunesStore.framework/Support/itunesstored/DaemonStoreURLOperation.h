/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:37:25 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISStoreURLOperation.h>

@class NSString;

@interface DaemonStoreURLOperation : ISStoreURLOperation {

	int _activeMachineDataStyle;
	int _machineDataStyle;
	NSString* _mdSyncState;

}

@property (assign) int machineDataStyle; 
-(id)_newMachineDataOperationWithResponse:(id)arg1 ;
-(void)setMachineDataStyle:(int)arg1 ;
-(char)_shouldSendV15HeadersForURL:(id)arg1 ;
-(int)machineDataStyle;
-(char)_isSubOperationOfPurchaseOperation;
-(void)run;
-(id)newRequestWithURL:(id)arg1 ;
@end
