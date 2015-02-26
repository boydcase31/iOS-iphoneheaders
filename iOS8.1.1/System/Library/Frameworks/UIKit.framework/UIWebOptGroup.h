/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIWebSelectedItemPrivate;
@class NSArray;

@interface UIWebOptGroup : NSObject {

	id<UIWebSelectedItemPrivate> _group;
	NSArray* _options;
	long long _offset;

}

@property (nonatomic,readonly) long long offset;                              //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) id<UIWebSelectedItemPrivate> group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) NSArray * options;                               //@synthesize options=_options - In the implementation block
-(void)dealloc;
-(long long)offset;
-(void)setGroup:(id<UIWebSelectedItemPrivate>)arg1 ;
-(void)setOptions:(NSArray *)arg1 ;
-(id)initWithGroup:(id)arg1 itemOffset:(long long)arg2 ;
-(id<UIWebSelectedItemPrivate>)group;
-(NSArray *)options;
@end
