/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:58 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSURL;

@interface SANoteDelete : SADomainCommand

@property (nonatomic,copy) NSURL * identifier; 
+(id)delete;
+(id)deleteWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSURL *)identifier;
-(void)setIdentifier:(NSURL *)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
@end

