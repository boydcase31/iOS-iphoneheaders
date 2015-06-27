/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:52:48 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface OITSUBasicProgressStorage : NSObject {

	double mValue;
	double mMaxValue;
	char mIndeterminate;

}

@property (assign) double value; 
@property (assign) double maxValue; 
@property (getter=isIndeterminate) char indeterminate; 
-(double)maxValue;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)setMaxValue:(double)arg1 ;
-(char)isIndeterminate;
-(void)setIndeterminate:(char)arg1 ;
@end
