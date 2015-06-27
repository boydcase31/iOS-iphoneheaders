/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSValue;

@interface SUScrollRequest : NSObject {

	char _animated;
	/*^block*/id _completionHandler;
	NSValue* _contentOffsetValue;
	NSValue* _frameValue;

}

@property (assign,getter=isAnimated,nonatomic) char animated;              //@synthesize animated=_animated - In the implementation block
@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (retain) NSValue * contentOffsetValue;                           //@synthesize contentOffsetValue=_contentOffsetValue - In the implementation block
@property (retain) NSValue * frameValue;                                   //@synthesize frameValue=_frameValue - In the implementation block
-(void)dealloc;
-(char)isAnimated;
-(id)completionHandler;
-(void)setAnimated:(char)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setFrameValue:(NSValue *)arg1 ;
-(void)setContentOffsetValue:(NSValue *)arg1 ;
-(NSValue *)contentOffsetValue;
-(NSValue *)frameValue;
@end
