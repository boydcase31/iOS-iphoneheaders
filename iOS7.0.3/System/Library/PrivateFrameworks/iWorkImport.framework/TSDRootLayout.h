/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDAbstractLayout.h>
#import <iWorkImport/TSDAdaptiveLayout.h>

@class TSDLayoutController, TSUPointerKeyDictionary;

@interface TSDRootLayout : TSDAbstractLayout <TSDAdaptiveLayout> {

	TSDLayoutController* mLayoutController;
	BOOL mSupportsAdaptiveLayout;
	TSUPointerKeyDictionary* mShiftedObjects;

}
-(id)layoutController;
-(BOOL)isRootLayoutForInspectorGeometry;
-(id)initWithLayoutController:(id)arg1 ;
-(id)childLayoutsInRect:(CGRect)arg1 ;
-(BOOL)providesGuidesForChildLayouts;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(id)p_shiftedObjects;
-(void)beginDynamicAdaptiveLayout;
-(void)endDynamicAdaptiveLayout;
-(CGPoint)applyAdaptiveLayoutTo:(id)arg1 info:(id)arg2 offset:(CGPoint)arg3 ;
-(void)dealloc;
@end
