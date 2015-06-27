/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKOverlayPainter.h>
#import <VectorKit/VKPolylineGroupOverlayObserver.h>

@class VKPolylineOverlay, NSMapTable, VKPolylineOverlayPainter, NSString;

@interface VKPolylineGroupOverlayPainter : VKOverlayPainter <VKPolylineGroupOverlayObserver> {

	VKPolylineOverlay* _selectedPolyline;
	NSMapTable* _polylinesToPainters;
	char _showTraffic;

}

@property (nonatomic,readonly) VKPolylineOverlayPainter * selectedPolylinePainter; 
@property (assign,nonatomic) char showTraffic;                                                  //@synthesize showTraffic=_showTraffic - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setApplicationState:(unsigned)arg1 ;
-(void)stylesheetDidChange;
-(void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2 ;
-(void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2 ;
-(void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2 ;
-(void)setContainerModel:(id)arg1 ;
-(void)gglLayoutWithContext:(id)arg1 commandBuffer:(CommandBuffer*)arg2 tiles:(id)arg3 ;
-(void)layoutWithContext:(id)arg1 tiles:(id)arg2 keysInView:(id)arg3 ;
-(id)initWithOverlay:(id)arg1 ;
-(char)showTraffic;
-(void)setShowTraffic:(char)arg1 ;
-(void)_addPainterForOverlay:(id)arg1 ;
-(VKPolylineOverlayPainter *)selectedPolylinePainter;
@end
