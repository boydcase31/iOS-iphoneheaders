/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, TSDBezierPath;

@interface TSDHyperlinkRegion : NSObject {

	NSURL* mURL;
	TSDBezierPath* mBezierPath;

}

@property (nonatomic,retain) NSURL * URL; 
@property (nonatomic,retain) TSDBezierPath * bezierPath; 
+(id)hyperlinkRegionWithURL:(id)arg1 bezierPath:(id)arg2 ;
-(id)initWithURL:(id)arg1 bezierPath:(id)arg2 ;
-(void)dealloc;
-(id)bezierPath;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(void)setBezierPath:(id)arg1 ;
@end
