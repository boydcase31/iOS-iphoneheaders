/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface PDGetSerialNumbersResult : NSObject {

	NSArray* _serialNumbers;
	NSString* _lastUpdatedTag;

}

@property (nonatomic,retain) NSArray * serialNumbers;                //@synthesize serialNumbers=_serialNumbers - In the implementation block
@property (nonatomic,retain) NSString * lastUpdatedTag;              //@synthesize lastUpdatedTag=_lastUpdatedTag - In the implementation block
-(NSArray *)serialNumbers;
-(void)setSerialNumbers:(NSArray *)arg1 ;
-(void)dealloc;
-(void)setLastUpdatedTag:(NSString *)arg1 ;
-(NSString *)lastUpdatedTag;
@end
