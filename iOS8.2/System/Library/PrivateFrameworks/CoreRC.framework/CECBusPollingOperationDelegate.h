/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:52 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CECBusPollingOperationDelegate <NSObject>
@optional
-(void)pollingOperation:(id)arg1 deviceNotRespondingAtAddress:(unsigned char)arg2;
-(void)pollingOperation:(id)arg1 encounteredError:(id)arg2 forMessage:(id)arg3;

@required
-(char)pollingOperation:(id)arg1 shouldSkipAddress:(unsigned char)arg2;
-(void)pollingOperationCompleted:(id)arg1;

@end
