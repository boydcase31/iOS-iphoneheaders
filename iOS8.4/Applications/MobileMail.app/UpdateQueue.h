/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSTimer;

@interface UpdateQueue : NSObject {

	NSMutableDictionary* _updatePrioritiesByItem;
	NSMutableDictionary* _itemInfosByPriority;
	NSTimer* _updateTimer;
	char _willScheduleNextUpdate;
	char _willBroadcastTopPriorities;

}
+(id)sharedQueue;
-(id)keyForItem:(id)arg1 ;
-(id)numberForUpdatePriority:(int)arg1 ;
-(void)performNextUpdate:(id)arg1 ;
-(void)scheduleNextUpdate;
-(void)broadcastTopPriorities;
-(void)item:(id)arg1 needsUpdateAfterDelay:(double)arg2 maximumCoalescingDelay:(double)arg3 ;
-(int)updatePriorityForItem:(id)arg1 ;
-(void)setUpdatePriority:(int)arg1 forItem:(id)arg2 ;
-(id)itemForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)removeItem:(id)arg1 ;
@end
