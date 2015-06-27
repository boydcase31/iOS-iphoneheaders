/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:02 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OADColorPalette;
#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary;

@interface OABReaderState : NSObject {

	Class mClient;
	NSMutableDictionary* mShapeIdMap;
	NSMutableDictionary* mEshContentIdMap;
	id<OADColorPalette> mColorPalette;
	NSMutableDictionary* mBlipIdMap;
	int mGroupDepth;

}

@property (assign,nonatomic) int groupDepth; 
-(void)dealloc;
-(id)init;
-(id)initWithClient:(Class)arg1 ;
-(id)drawableForShapeId:(int)arg1 ;
-(void)setDrawable:(id)arg1 forShapeId:(unsigned long)arg2 ;
-(EshContentRef)eshContentForId:(int)arg1 ;
-(void)setEshContent:(EshContentRef)arg1 forId:(int)arg2 ;
-(id)colorPalette;
-(void)setColorPalette:(id)arg1 ;
-(id)drawableForBlipId:(int)arg1 ;
-(void)setDrawable:(id)arg1 forBlipId:(int)arg2 ;
-(int)groupDepth;
-(void)setGroupDepth:(int)arg1 ;
-(Class)client;
@end
