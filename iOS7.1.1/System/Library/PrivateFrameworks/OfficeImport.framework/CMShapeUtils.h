/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CMShapeUtils : NSObject
+(int)radToNativeAngle:(double)arg1 isEscher:(bool)arg2 ;
+(double)nativeAngleToRad:(int)arg1 isEscher:(bool)arg2 ;
+(int)mapFormulaKeywordValue:(int)arg1 geometry:(id)arg2 ;
+(float)normalizedAngle:(float)arg1 ;
+(double)milliMinutesToRad:(int)arg1 ;
+(int)radToMilliMinutes:(double)arg1 ;
+(id)inscribedBoundsWithBounds:(id)arg1 logicalBounds:(CGRect)arg2 ;
+(id)relatvieBoundsWithAbsoluteInnerBounds:(id)arg1 parentBounds:(id)arg2 ;
+(float)fontSizeForText:(id)arg1 insideRectangle:(CGSize)arg2 ;
+(CGRect)transformRect:(CGRect)arg1 scale:(float)arg2 offsetX:(float)arg3 offsetY:(float)arg4 ;
+(float)intersectionAngleNextToAngle:(float)arg1 isAfter:(bool)arg2 nodeSize:(CGSize)arg3 ;
+(id)internalBoundsWithBounds:(id)arg1 scaleBounds:(CGRect)arg2 ;
+(id)transformedBoundsWithBounds:(id)arg1 transform:(id)arg2 ;
+(bool)isShapeALine:(id)arg1 ;
+(double)mapAdjustCoord:(OADAdjustCoord)arg1 geometry:(id)arg2 ;
+(float)scaleFactorFromLength:(float)arg1 toLength:(float)arg2 ;
+(id)transformFromBounds:(CGRect)arg1 toOrientedBounds:(id)arg2 ;
+(double)getFormulaResultFromCustomGeometry:(id)arg1 atIndex:(unsigned)arg2 ;
+(double)mapFormulaOfType:(int)arg1 argValues:(double*)arg2 isEscher:(bool)arg3 ;
+(double)fixedPointDegToRad:(int)arg1 ;
+(void)setCoordSpaceForCustomeGeometry:(id)arg1 fromSize:(CGSize)arg2 ;
+(id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)arg1 parentOrientedBounds:(id)arg2 parentLogicalBounds:(CGRect)arg3 ;
+(int)radToFixedPointDeg:(double)arg1 ;
@end
