/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSTLayoutDynamicResizeInfo.h>

@interface TSTLayoutDynamicResizeInfoUnify : TSTLayoutDynamicResizeInfo {

	double mTargetWidth;
	double mTargetHeight;

}

@property (nonatomic,readonly) double targetWidth; 
@property (nonatomic,readonly) double targetHeight; 
-(double)applyResizeWidthFactor:(double)arg1 ;
-(void)captureNewMinimumRowHeights:(id)arg1 ;
-(double)applyResizeHeightFactor:(double)arg1 ;
-(double)p_applyUnifyResizeFactor:(double)arg1 region:(id)arg2 direction:(int)arg3 totalOfCaptured:(double)arg4 count:(unsigned short)arg5 capturedArray:(double*)arg6 currentArray:(double*)arg7 minimumArray:(double*)arg8 ;
-(void)p_applyUnifyFixedSize:(double)arg1 region:(id)arg2 direction:(int)arg3 count:(unsigned short)arg4 currentArray:(double*)arg5 minimumArray:(double*)arg6 ;
-(void)applyFixedHeight:(double)arg1 ;
-(void)applyFixedWidth:(double)arg1 ;
-(double)targetWidth;
-(double)targetHeight;
@end
