/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@class NSMutableArray, NSArray;

@interface HSCloudAddRequest : HSRequest {

	NSMutableArray* _querySpecifierPredicates;
	NSMutableArray* _adamIDs;
	NSMutableArray* _playlistGlobalIDs;

}

@property (nonatomic,readonly) NSArray * adamIDs; 
@property (nonatomic,readonly) NSArray * playlistGlobalIDs; 
+(id)requestWithDatabaseID:(unsigned)arg1 databaseRevision:(unsigned)arg2 adamIDs:(id)arg3 ;
+(id)requestWithDatabaseID:(unsigned)arg1 databaseRevision:(unsigned)arg2 playlistGlobalIDs:(id)arg3 ;
-(id)description;
-(double)timeoutInterval;
-(id)requestURLForBaseURL:(id)arg1 sessionID:(unsigned)arg2 ;
-(id)initWithDatabaseID:(unsigned)arg1 databaseRevision:(unsigned)arg2 ;
-(void)addAdamID:(unsigned)arg1 ;
-(void)addPlaylistGlobalID:(id)arg1 ;
-(id)_querySpecifierString;
-(NSArray *)adamIDs;
-(NSArray *)playlistGlobalIDs;
@end
