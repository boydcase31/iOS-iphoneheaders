/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface StockNewsItemCollection : NSObject {

	NSArray* _newsItems;
	double _expirationTime;

}

@property (nonatomic,retain) NSArray * newsItems;                //@synthesize newsItems=_newsItems - In the implementation block
@property (assign,nonatomic) double expirationTime;              //@synthesize expirationTime=_expirationTime - In the implementation block
-(void).cxx_destruct;
-(id)initWithArchiveArray:(id)arg1 ;
-(id)archiveArray;
-(id)newsItems;
-(void)setNewsItems:(id)arg1 ;
-(void)setExpirationTime:(double)arg1 ;
-(double)expirationTime;
@end
