/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:42 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLToolsCommandEncoder.h>
#import <Metal/MTLRenderCommandEncoderSPI.h>

@class NSString;

@interface MTLToolsRenderCommandEncoder : MTLToolsCommandEncoder <MTLRenderCommandEncoderSPI>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
-(void)setViewport:(SCD_Struct_MT2)arg1 ;
-(void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(void)setRenderPipelineState:(id)arg1 ;
-(void)setVertexBuffer:(id)arg1 offset:(unsigned)arg2 atIndex:(unsigned)arg3 ;
-(void)setVertexBuffers:(const id*)arg1 offsets:(const unsigned*)arg2 withRange:(NSRange)arg3 ;
-(void)setVertexTexture:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setVertexTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setVertexSamplerState:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setVertexSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned)arg4 ;
-(void)setVertexSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setFrontFacingWinding:(unsigned)arg1 ;
-(void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3 ;
-(void)setScissorRect:(SCD_Struct_MT3)arg1 ;
-(void)setTriangleFillMode:(unsigned)arg1 ;
-(void)setFragmentBuffer:(id)arg1 offset:(unsigned)arg2 atIndex:(unsigned)arg3 ;
-(void)setFragmentBuffers:(const id*)arg1 offsets:(const unsigned*)arg2 withRange:(NSRange)arg3 ;
-(void)setFragmentTexture:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setFragmentTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setFragmentSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned)arg4 ;
-(void)setFragmentSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setDepthStencilState:(id)arg1 ;
-(void)setStencilReferenceValue:(unsigned)arg1 ;
-(void)setVisibilityResultMode:(unsigned)arg1 offset:(unsigned)arg2 ;
-(void)drawPrimitives:(unsigned)arg1 vertexStart:(unsigned)arg2 vertexCount:(unsigned)arg3 instanceCount:(unsigned)arg4 ;
-(void)drawPrimitives:(unsigned)arg1 vertexStart:(unsigned)arg2 vertexCount:(unsigned)arg3 ;
-(void)drawIndexedPrimitives:(unsigned)arg1 indexCount:(unsigned)arg2 indexType:(unsigned)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned)arg5 instanceCount:(unsigned)arg6 ;
-(void)drawIndexedPrimitives:(unsigned)arg1 indexCount:(unsigned)arg2 indexType:(unsigned)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned)arg5 ;
-(void)drawPrimitives:(unsigned)arg1 argumentBuffer:(id)arg2 offset:(unsigned)arg3 ;
-(void)drawIndexedPrimitives:(unsigned)arg1 argumentBuffer:(id)arg2 argumentBufferOffset:(unsigned)arg3 indexType:(unsigned)arg4 indexBuffer:(id)arg5 indexBufferOffset:(unsigned)arg6 ;
-(void)addSplitHandler:(/*^block*/id)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(void)setCullMode:(unsigned)arg1 ;
-(void)setLineWidth:(float)arg1 ;
@end
