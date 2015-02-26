/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
@interface SCROBrailleDisplayHistory : NSObject {

	CFArrayRef _announcements;
	CFArrayRef _unreadSnapshot;
	long _currentIndex;
	long _unreadCount;

}
+(void)initialize;
-(void)dealloc;
-(id)init;
-(BOOL)_moveIndexBy:(long)arg1 ;
-(void)addString:(id)arg1 ;
-(void)snapshotUnread;
-(void)markSnapshotAsRead;
-(BOOL)hasUnread;
-(id)currentString;
-(BOOL)moveToNext;
-(BOOL)moveToPrevious;
-(BOOL)isOnMostRecent;
-(void)moveToMostRecent;
@end
