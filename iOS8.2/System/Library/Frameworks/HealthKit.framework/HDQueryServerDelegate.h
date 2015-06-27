/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:51 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/HealthKit.framework/healthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HDQueryServerDelegate <NSObject>
@required
-(void)queryServerDidStartDataCollection:(id)arg1;
-(void)queryServerDidDeactivate:(id)arg1;
-(void)queryServerDidStopDataCollection:(id)arg1;
-(id)queryServer:(id)arg1 filterSamplesForReadAuthorization:(id)arg2;
-(char)queryServer:(id)arg1 isAuthorizedToReadType:(id)arg2 withRestrictedSourceIdentifier:(id*)arg3;
-(char)queryServer:(id)arg1 isAuthorizationStatusDeterminedForTypes:(id)arg2 error:(id*)arg3;

@end
