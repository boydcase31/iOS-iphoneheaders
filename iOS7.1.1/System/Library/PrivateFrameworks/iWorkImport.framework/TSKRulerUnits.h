/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSFormatter;

@interface TSKRulerUnits : NSObject {

	int _rulerUnits;
	bool _showRulerAsPercentage;
	bool _centerRulerOrigin;
	int _preferredPixelUnit;
	NSFormatter* _formatter;
	NSFormatter* _lenientFormatter;
	NSFormatter* _highPrecisionFormatter;
	NSFormatter* _lenientHighPrecisionFormatter;

}

@property (assign,nonatomic) int rulerUnits;                          //@synthesize rulerUnits=_rulerUnits - In the implementation block
@property (assign,nonatomic) bool showRulerAsPercentage;              //@synthesize showRulerAsPercentage=_showRulerAsPercentage - In the implementation block
@property (assign,nonatomic) bool centerRulerOrigin;                  //@synthesize centerRulerOrigin=_centerRulerOrigin - In the implementation block
@property (assign,nonatomic) int preferredPixelUnit;                  //@synthesize preferredPixelUnit=_preferredPixelUnit - In the implementation block
+(id)formatterForRulerUnits:(int)arg1 decimalPlaces:(int)arg2 trailingZeros:(bool)arg3 lenient:(bool)arg4 ;
+(id)instance;
-(id)formatter:(bool)arg1 lenient:(bool)arg2 ;
-(double)convertPointsToRulerUnits:(double)arg1 ;
-(void)setRulerUnits:(int)arg1 ;
-(void)setShowRulerAsPercentage:(bool)arg1 ;
-(void)setCenterRulerOrigin:(bool)arg1 ;
-(double)convertRulerUnitsToPoints:(double)arg1 ;
-(id)compatibleRulerUnits;
-(id)localizedCompatibleRulerUnits;
-(int)rulerUnits;
-(bool)showRulerAsPercentage;
-(bool)centerRulerOrigin;
-(int)preferredPixelUnit;
-(void)setPreferredPixelUnit:(int)arg1 ;
-(void)dealloc;
-(id)init;
@end
