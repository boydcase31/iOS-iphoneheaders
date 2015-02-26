/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKViewVolume;

@interface VKViewTransform : NSObject {

	shared_ptr<vk::ViewTransform>* _viewTransform;

}

@property (nonatomic,readonly) BOOL isMercator; 
@property (nonatomic,readonly) BOOL isGeocentric; 
@property (nonatomic,readonly) int coordinateSpace; 
@property (nonatomic,readonly) CGSize screenSizeInPoints; 
@property (nonatomic,readonly) CGSize screenSizeInPixels; 
@property (nonatomic,readonly) float contentScale; 
@property (nonatomic,readonly) VKPoint translation; 
@property (nonatomic,readonly) VKPoint translationInMercator; 
@property (nonatomic,readonly) Vec3Imp<double> upVector; 
@property (nonatomic,readonly) Vec3Imp<double> rightVector; 
@property (nonatomic,readonly) Vec3Imp<double> forwardVector; 
@property (nonatomic,readonly) float heading; 
@property (nonatomic,readonly) float degreesFromPlumb; 
@property (nonatomic,readonly) double widthOverDepth; 
@property (nonatomic,readonly) const SCD_Struct_VK42* viewProjectionMatrix; 
@property (nonatomic,readonly) double nearPlaneDistance; 
@property (nonatomic,readonly) double farPlaneDistance; 
@property (nonatomic,readonly) VKViewVolume * viewVolume; 
@property (nonatomic,readonly) double focusDistance; 
@property (nonatomic,readonly) VKPoint focusPoint; 
@property (assign,nonatomic) const SCD_Struct_VK42* scaledViewProjectionMatrix; 
-(id)init;
-(id).cxx_construct;
-(float)contentScale;
-(Vec3Imp<double>)forwardVector;
-(Vec3Imp<double>)rightVector;
-(const SCD_Struct_VK42*)viewProjectionMatrix;
-(id)viewVolume;
-(Vec3Imp<double>)upVector;
-(VKPoint)groundPointFromScreenPoint:(CGPoint)arg1 ;
-(shared_ptr<vk::ViewTransform>*)viewTransform;
-(void)setCoordinateSpace:(int)arg1 screenSizeInPixels:(CGSize)arg2 contentScale:(float)arg3 frustum:(SCD_Struct_VK43)arg4 position:(VKPoint)arg5 orientation:(const SCD_Struct_VK42*)arg6 ;
-(void)setScaledViewProjectionMatrix:(const SCD_Struct_VK42*)arg1 ;
-(BOOL)isMercator;
-(BOOL)isGeocentric;
-(VKPoint)translation;
-(SCD_Struct_VK42)orientationMatrixAtWorldPoint:(VKPoint)arg1 ;
-(const SCD_Struct_VK42*)scaledViewProjectionMatrix;
-(float)degreesFromPlumb;
-(double)widthOverDepth;
-(VKPoint)focusPoint;
-(CGSize)screenSizeInPoints;
-(CGSize)screenSizeInPixels;
-(int)coordinateSpace;
-(VKPoint)translationInMercator;
-(double)nearPlaneDistance;
-(double)farPlaneDistance;
-(double)focusDistance;
-(VKPoint)groundPointFromPixel:(Vec2Imp<float>)arg1 ;
-(void).cxx_destruct;
-(float)heading;
@end
