/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SAMPMediaItem;

@interface SAMPGeniusSummon : SADomainCommand

@property (nonatomic,retain) SAMPMediaItem * mediaItem; 
+(id)geniusSummon;
+(id)geniusSummonWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setMediaItem:(SAMPMediaItem *)arg1 ;
-(SAMPMediaItem *)mediaItem;
-(id)encodedClassName;
-(char)requiresResponse;
@end
