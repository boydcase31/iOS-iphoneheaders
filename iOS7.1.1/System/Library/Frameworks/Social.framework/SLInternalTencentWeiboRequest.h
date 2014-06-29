/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/SLRequest.h>

@interface SLInternalTencentWeiboRequest : SLRequest {

	bool _shouldSign;

}

@property (assign) bool shouldSign;              //@synthesize shouldSign=_shouldSign - In the implementation block
-(bool)shouldSign;
-(id)signedTencentRequestFromRequest:(id)arg1 ;
-(void)_addAuthenticationParameters:(id)arg1 ;
-(void)setShouldSign:(bool)arg1 ;
-(void)performRequestWithHandler:(/*^block*/ id)arg1 ;
@end
