/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CKDApplicationMetadata : NSObject {

	NSString* _apsEnvironmentString;
	long long _isApplication;

}

@property (nonatomic,retain) NSString * apsEnvironmentString;              //@synthesize apsEnvironmentString=_apsEnvironmentString - In the implementation block
@property (assign,nonatomic) long long isApplication;                      //@synthesize isApplication=_isApplication - In the implementation block
-(id)init;
-(NSString *)apsEnvironmentString;
-(void)setApsEnvironmentString:(NSString *)arg1 ;
-(long long)isApplication;
-(void)setIsApplication:(long long)arg1 ;
@end
