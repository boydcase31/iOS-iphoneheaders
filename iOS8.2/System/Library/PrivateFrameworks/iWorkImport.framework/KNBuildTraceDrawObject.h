/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDTexturedRectangle, TSDGLEdgeDistanceFieldTraceEffect, TSDGLDataBuffer, TSDGLShader;

@interface KNBuildTraceDrawObject : NSObject {

	char _isExtraObject;
	TSDTexturedRectangle* _tr;
	TSDGLEdgeDistanceFieldTraceEffect* _traceEffect;
	TSDGLDataBuffer* _dataBuffer;
	TSDGLShader* _extraObjectShader;
	CGPoint _timing;
	CGSize _extraObjectTextureSize;
	tquat<float> _color;
	CATransform3D _MVPMatrix;

}

@property (nonatomic,retain) TSDTexturedRectangle * tr;                                    //@synthesize tr=_tr - In the implementation block
@property (nonatomic,retain) TSDGLEdgeDistanceFieldTraceEffect * traceEffect;              //@synthesize traceEffect=_traceEffect - In the implementation block
@property (nonatomic,retain) TSDGLDataBuffer * dataBuffer;                                 //@synthesize dataBuffer=_dataBuffer - In the implementation block
@property (assign,nonatomic) CATransform3D MVPMatrix;                                      //@synthesize MVPMatrix=_MVPMatrix - In the implementation block
@property (assign,nonatomic) tquat<float> color;                                           //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) CGPoint timing;                                               //@synthesize timing=_timing - In the implementation block
@property (assign,nonatomic) char isExtraObject;                                           //@synthesize isExtraObject=_isExtraObject - In the implementation block
@property (assign,nonatomic) TSDGLShader * extraObjectShader;                              //@synthesize extraObjectShader=_extraObjectShader - In the implementation block
@property (assign,nonatomic) CGSize extraObjectTextureSize;                                //@synthesize extraObjectTextureSize=_extraObjectTextureSize - In the implementation block
+(id)traceDrawObject;
-(TSDGLDataBuffer *)dataBuffer;
-(void)setDataBuffer:(TSDGLDataBuffer *)arg1 ;
-(TSDTexturedRectangle *)tr;
-(void)setTr:(TSDTexturedRectangle *)arg1 ;
-(TSDGLEdgeDistanceFieldTraceEffect *)traceEffect;
-(void)setTraceEffect:(TSDGLEdgeDistanceFieldTraceEffect *)arg1 ;
-(CATransform3D)MVPMatrix;
-(void)setMVPMatrix:(CATransform3D)arg1 ;
-(char)isExtraObject;
-(void)setIsExtraObject:(char)arg1 ;
-(TSDGLShader *)extraObjectShader;
-(void)setExtraObjectShader:(TSDGLShader *)arg1 ;
-(CGSize)extraObjectTextureSize;
-(void)setExtraObjectTextureSize:(CGSize)arg1 ;
-(void)dealloc;
-(tquat<float>)color;
-(void)setColor:(tquat<float>)arg1 ;
-(CGPoint)timing;
-(void)setTiming:(CGPoint)arg1 ;
@end
