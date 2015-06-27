/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathRowExpression.h>

@class NSString;

@interface SCRCMathFencedExpression : SCRCMathRowExpression {

	NSString* _openString;
	NSString* _closeString;

}

@property (nonatomic,copy) NSString * openString;               //@synthesize openString=_openString - In the implementation block
@property (nonatomic,copy) NSString * closeString;              //@synthesize closeString=_closeString - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(char)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned)arg1 treePosition:(id)arg2 ;
-(id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned)arg2 treePosition:(id)arg3 ;
-(id)latexDescriptionInMathMode:(char)arg1 ;
-(unsigned)fractionLevel;
-(id)mathMLTag;
-(id)mathMLAttributes;
-(void)setOpenString:(NSString *)arg1 ;
-(void)setCloseString:(NSString *)arg1 ;
-(NSString *)openString;
-(NSString *)closeString;
-(char)_isBinomialCoefficient;
-(id)_binomialCoefficientContent;
-(id)_treePositionForBinomialCoefficientContentWithOuterTreePosition:(id)arg1 ;
@end
