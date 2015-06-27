/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSArray;

@interface IKHeadElement : IKViewElement {

	NSArray* _headChildren;

}

@property (nonatomic,retain) NSArray * headChildren;              //@synthesize headChildren=_headChildren - In the implementation block
+(char)shouldParseChildDOMElements;
-(NSArray *)headChildren;
-(void)setHeadChildren:(NSArray *)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)children;
@end
