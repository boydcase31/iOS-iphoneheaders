/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:59:49 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTile.h>

@class GEOVectorTile, VKStyleManager, VKSharedResources, VKMapTileList;

@interface VKVectorTile : VKTile {

	GEOVectorTile* _modelTile;
	float _contentScale;
	float _maximumStyleZ;
	float _textureScale;
	VKStyleManager* _styleManager;
	VKSharedResources* _sharedResources;
	VKMapTileList* _fragments;

}

@property (nonatomic,retain) GEOVectorTile * modelTile;                        //@synthesize modelTile=_modelTile - In the implementation block
@property (nonatomic,retain) VKStyleManager * styleManager;                    //@synthesize styleManager=_styleManager - In the implementation block
@property (nonatomic,retain) VKSharedResources * sharedResources;              //@synthesize sharedResources=_sharedResources - In the implementation block
@property (nonatomic,readonly) int vectorType; 
@property (assign,nonatomic) float contentScale;                               //@synthesize contentScale=_contentScale - In the implementation block
@property (assign,nonatomic) float maximumStyleZ;                              //@synthesize maximumStyleZ=_maximumStyleZ - In the implementation block
@property (assign,nonatomic) float textureScale;                               //@synthesize textureScale=_textureScale - In the implementation block
@property (nonatomic,readonly) VKMapTileList * fragments;                      //@synthesize fragments=_fragments - In the implementation block
-(void)dealloc;
-(void)setContentScale:(float)arg1 ;
-(float)contentScale;
-(id)initWithKey:(const VKTileKey*)arg1 ;
-(VKStyleManager *)styleManager;
-(void)setStyleManager:(VKStyleManager *)arg1 ;
-(VKSharedResources *)sharedResources;
-(void)setSharedResources:(VKSharedResources *)arg1 ;
-(VKMapTileList *)fragments;
-(float)maximumStyleZ;
-(void)setMaximumStyleZ:(float)arg1 ;
-(void)setModelTile:(GEOVectorTile *)arg1 ;
-(id)initWithKey:(const VKTileKey*)arg1 modelTile:(id)arg2 styleManager:(id)arg3 sharedResources:(id)arg4 contentScale:(float)arg5 device:(DeviceRef)arg6 ;
-(int)vectorType;
-(GEOVectorTile *)modelTile;
-(float)textureScale;
-(void)setTextureScale:(float)arg1 ;
@end
