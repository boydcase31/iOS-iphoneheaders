/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:21:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioTrack.h>

@class NSURL;

@interface RadioAudioClip : RadioTrack

@property (nonatomic,copy,readonly) NSURL * assetURL; 
@property (nonatomic,readonly) long long purchaseID; 
@property (getter=isSkipable,nonatomic,readonly) char skipable; 
-(NSURL *)assetURL;
-(char)isSkipable;
-(long long)purchaseID;
@end
