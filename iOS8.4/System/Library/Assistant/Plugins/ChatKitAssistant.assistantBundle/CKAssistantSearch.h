/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/Plugins/ChatKitAssistant.assistantBundle/ChatKitAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASmsSearch.h>
#import <ChatKitAssistant/AFServiceCommand.h>

@class NSString;

@interface CKAssistantSearch : SASmsSearch <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(id)_perform;
-(id)abValuesFromPersonInURL:(id)arg1 forProperty:(int)arg2 ;
-(id)personFromRawAddress:(id)arg1 ;
-(id)_validate;
@end
