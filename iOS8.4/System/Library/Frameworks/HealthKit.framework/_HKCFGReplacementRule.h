/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface _HKCFGReplacementRule : NSObject {

	NSString* _description;
	NSArray* _rightHandSide;
	/*^block*/id _nodeEvaluator;
	unsigned long long _lengthIncrease;

}

@property (nonatomic,copy,readonly) NSArray * rightHandSide;                   //@synthesize rightHandSide=_rightHandSide - In the implementation block
@property (nonatomic,copy,readonly) id nodeEvaluator;                          //@synthesize nodeEvaluator=_nodeEvaluator - In the implementation block
@property (nonatomic,readonly) unsigned long long lengthIncrease;              //@synthesize lengthIncrease=_lengthIncrease - In the implementation block
+(id)ruleWithLHS:(id)arg1 RHS:(id)arg2 nodeEvaluator:(/*^block*/id)arg3 ;
-(id)nodeEvaluator;
-(NSArray *)rightHandSide;
-(unsigned long long)lengthIncrease;
-(id)description;
@end
