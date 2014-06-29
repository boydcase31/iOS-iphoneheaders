/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMapTable, TSDGLShaderQualifier, TSDGLShader, TSDGLMotionBlurEffect, NSArray;

@interface KNMotionBlurWrapper : NSObject {

	NSMapTable* _objectDataBufferMapTable;
	NSMapTable* _velocityObjectDataBufferMapTable;
	TSDGLShaderQualifier* _objectShaderMVPMatrixQualifier;
	TSDGLShaderQualifier* _objectShaderOpacityQualifier;
	TSDGLShaderQualifier* _velocityObjectShaderMVPMatrixQualifier;
	TSDGLShaderQualifier* _velocityObjectShaderPreviousMVPMatrixQualifier;
	double _duration;
	bool _isBackFaceCullingEnabled;
	bool _shouldDisableMotionBlurFromDefaults;
	bool _shouldFillBackground;
	bool _shouldDrawHiddenObjects;
	TSDGLShader* _hiddenObjectShader;
	bool _shouldDrawTextOnSeparatePass;
	bool _shouldDrawTexturesInReverseOrder;
	bool _shouldDrawMotionBlur;
	TSDGLMotionBlurEffect* _motionBlurEffect;
	TSDGLShader* _objectShader;
	TSDGLShader* _velocityObjectShader;
	NSArray* _textures;

}

@property (assign,nonatomic) bool shouldDrawTextOnSeparatePass;                       //@synthesize shouldDrawTextOnSeparatePass=_shouldDrawTextOnSeparatePass - In the implementation block
@property (nonatomic,readonly) TSDGLMotionBlurEffect * motionBlurEffect;              //@synthesize motionBlurEffect=_motionBlurEffect - In the implementation block
@property (nonatomic,retain) TSDGLShader * objectShader;                              //@synthesize objectShader=_objectShader - In the implementation block
@property (nonatomic,retain) TSDGLShader * velocityObjectShader;                      //@synthesize velocityObjectShader=_velocityObjectShader - In the implementation block
@property (nonatomic,retain) NSArray * textures;                                      //@synthesize textures=_textures - In the implementation block
@property (assign,nonatomic) bool shouldDrawTexturesInReverseOrder;                   //@synthesize shouldDrawTexturesInReverseOrder=_shouldDrawTexturesInReverseOrder - In the implementation block
@property (assign,nonatomic) bool shouldDrawMotionBlur;                               //@synthesize shouldDrawMotionBlur=_shouldDrawMotionBlur - In the implementation block
+(/*^block*/ id)newDefaultTextureDrawOptionBlockWithAnimationDict:(id)arg1 pluginContext:(id)arg2 animationContext:(id)arg3 projectionTransform:(CATransform3D)arg4 animationCacheDict:(id)arg5 animationFrame:(CGRect)arg6 ;
-(void)p_setupShaders;
-(void)p_setupDataBuffers;
-(void)p_setBackFaceCullingEnabled:(bool)arg1 ;
-(void)setShouldDrawTexturesInReverseOrder:(bool)arg1 ;
-(id)initWithFramebufferSize:(CGSize)arg1 slideSize:(CGSize)arg2 textures:(id)arg3 duration:(double)arg4 ;
-(void)setShouldDrawTextOnSeparatePass:(bool)arg1 ;
-(void)setShouldDrawMotionBlur:(bool)arg1 ;
-(void)drawMotionBlurAtPercent:(double)arg1 textureDrawOptionsBlock:(/*^block*/ id)arg2 setupCustomShaderBlock:(/*^block*/ id)arg3 ;
-(bool)shouldDrawMotionBlur;
-(bool)shouldDrawTextOnSeparatePass;
-(id)p_textureDrawOptionsMapTableWithPercent:(double)arg1 textureDrawOptionsBlock:(/*^block*/ id)arg2 passCounts:(id*)arg3 ;
-(id)velocityObjectShader;
-(id)motionBlurEffect;
-(id)objectShader;
-(bool)shouldDrawTexturesInReverseOrder;
-(void)drawMotionBlurAtPercent:(double)arg1 textureDrawOptionsBlock:(/*^block*/ id)arg2 ;
-(void)setObjectShader:(id)arg1 ;
-(void)setVelocityObjectShader:(id)arg1 ;
-(void)dealloc;
-(void)setTextures:(id)arg1 ;
-(id)textures;
@end
