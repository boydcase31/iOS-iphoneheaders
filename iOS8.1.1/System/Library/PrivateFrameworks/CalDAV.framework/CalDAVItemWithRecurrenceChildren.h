/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVItemWithRecurrenceChildren : CoreDAVItem {

	NSMutableSet* _recurrences;

}

@property (nonatomic,retain) NSMutableSet * recurrences;              //@synthesize recurrences=_recurrences - In the implementation block
-(void)dealloc;
-(void)addRecurrence:(id)arg1 ;
-(id)copyParseRules;
-(NSMutableSet *)recurrences;
-(void)setRecurrences:(NSMutableSet *)arg1 ;
@end
