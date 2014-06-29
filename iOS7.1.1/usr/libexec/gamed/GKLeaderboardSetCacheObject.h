/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKListEntryCacheObject.h>
#import <gamed/GKCacheObjectImageProtocol.h>

@class NSString, GKLeaderboardTitleMapListCacheObject, GKLeaderboardListCacheObject;

@interface GKLeaderboardSetCacheObject : GKListEntryCacheObject <GKCacheObjectImageProtocol>

@property (nonatomic,@dynamic,retain) NSString * identifier; 
@property (nonatomic,@dynamic,retain) NSString * groupIdentifier; 
@property (nonatomic,@dynamic,retain) NSString * title; 
@property (nonatomic,@dynamic,retain) GKLeaderboardTitleMapListCacheObject * leaderboardTitleMapList; 
@property (nonatomic,@dynamic,retain) GKLeaderboardListCacheObject * leaderboardList; 
@property (nonatomic,@dynamic,retain) NSString * image64; 
@property (nonatomic,@dynamic,retain) NSString * image128; 
@property (nonatomic,@dynamic,retain) NSString * image256; 
@property (nonatomic,@dynamic,retain) NSString * image512; 
+(id)entityName;
-(void)updateWithServerRepresentation:(id)arg1 ;
-(id)internalRepresentation;
@end
