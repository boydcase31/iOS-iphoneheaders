/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVMultiStatusItem.h>

@class NSString;

@interface CoreDAVSyncReportItem : CoreDAVMultiStatusItem {

	NSString* _syncToken;

}

@property (nonatomic,readonly) NSString * syncToken;              //@synthesize syncToken=_syncToken - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)description;
-(NSString *)syncToken;
-(void)_setSyncTokenItem:(id)arg1 ;
@end
