/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:36:14 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SSDownloadHandlerDelegate <NSObject>
@optional
-(void)downloadHandlerDidDisconnect:(id)arg1;
-(void)downloadHandler:(id)arg1 handleSession:(id)arg2;
-(void)downloadHandler:(id)arg1 cancelSession:(id)arg2;
-(char)downloadHandler:(id)arg1 pauseSession:(id)arg2;
-(void)downloadHandler:(id)arg1 handleAuthenticationSession:(id)arg2;

@end
