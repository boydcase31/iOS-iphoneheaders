/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:10 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, EKEventStore, NSMutableArray, NSArray;

@interface EKICSPreviewModel : NSObject {

	NSData* _data;
	EKEventStore* _tempStore;
	EKEventStore* _destStore;
	NSMutableArray* _importedEvents;
	NSMutableArray* _unimportedEvents;
	unsigned long long _options;
	int _actionsState;

}

@property (nonatomic,readonly) EKEventStore * eventStore; 
@property (nonatomic,readonly) unsigned long long totalEventCount; 
@property (nonatomic,readonly) unsigned long long importedEventCount; 
@property (nonatomic,readonly) unsigned long long unimportedEventCount; 
@property (nonatomic,readonly) int actionsState; 
@property (nonatomic,readonly) NSArray * importedEvents; 
@property (nonatomic,readonly) NSArray * unimportedEvents; 
@property (nonatomic,readonly) NSArray * allEvents; 
-(EKEventStore *)eventStore;
-(int)actionsState;
-(id)initWithICSData:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3 ;
-(unsigned long long)totalEventCount;
-(unsigned long long)unimportedEventCount;
-(NSArray *)importedEvents;
-(NSArray *)unimportedEvents;
-(id)importAllIntoCalendar:(id)arg1 ;
-(id)importEvent:(id)arg1 intoCalendar:(id)arg2 ;
-(unsigned long long)importedEventCount;
-(NSArray *)allEvents;
@end
