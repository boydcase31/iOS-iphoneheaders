/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:46:38 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistantd/ADService.h>

@interface ADTwitterService : ADService
+(void)_getTwitterCredential:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(id)_effectiveBundleId;
+(void)_getActualTwitterCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleCommand:(id)arg1 forDomain:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)commandsForDomain:(id)arg1 ;
-(char)implementsCommand:(id)arg1 forDomain:(id)arg2 ;
-(id)init;
-(id)handle;
-(id)domains;
@end
