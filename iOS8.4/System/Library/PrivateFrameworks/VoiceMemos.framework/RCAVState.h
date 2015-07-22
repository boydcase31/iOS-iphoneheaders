/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/NSSecureCoding.h>
#import <VoiceMemos/NSCopying.h>

@interface RCAVState : NSObject <NSSecureCoding, NSCopying> {

	long long _AVCaptureState;
	long long _AVPreviewState;

}

@property (assign,nonatomic) long long AVCaptureState;                                  //@synthesize AVCaptureState=_AVCaptureState - In the implementation block
@property (nonatomic,readonly) BOOL isCaptureInactive; 
@property (nonatomic,readonly) BOOL isCapturePreparing; 
@property (nonatomic,readonly) BOOL isCaptureActive; 
@property (nonatomic,readonly) BOOL isCapturePaused; 
@property (nonatomic,readonly) BOOL isCaptureActiveOrPreparing; 
@property (nonatomic,readonly) BOOL isCaptureActiveOrPreparingOrResumable; 
@property (nonatomic,readonly) BOOL isPreviewInactive; 
@property (nonatomic,readonly) BOOL isPreviewPreparing; 
@property (nonatomic,readonly) BOOL isPreviewActive; 
@property (assign,nonatomic) long long AVPreviewState;                                  //@synthesize AVPreviewState=_AVPreviewState - In the implementation block
@property (nonatomic,readonly) BOOL isPreviewActiveOrPreparing; 
+(BOOL)supportsSecureCoding;
+(id)inactiveState;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isPreviewActive;
-(BOOL)isCaptureActive;
-(BOOL)isCapturePaused;
-(id)assetStateByChangingToCaptureState:(long long)arg1 ;
-(id)assetStateByChangingToPreviewState:(long long)arg1 ;
-(void)setAVCaptureState:(long long)arg1 ;
-(long long)AVCaptureState;
-(id)assetStateByChangingToPreviewRate:(float)arg1 ;
-(BOOL)isPreviewActiveOrPreparing;
-(long long)AVPreviewState;
-(BOOL)isCaptureActiveOrPreparing;
-(void)setAVPreviewState:(long long)arg1 ;
-(id)_assetStateByTransitioningItermediateStatesToGoalStates;
-(id)_assetStateByChangingToCaptureState:(long long)arg1 previewState:(long long)arg2 ;
-(BOOL)isCapturePreparing;
-(BOOL)isPreviewPreparing;
-(id)assetStateByCaptureState;
-(id)assetStateByTogglingPreview;
-(BOOL)isCaptureInactive;
-(BOOL)isPreviewInactive;
-(BOOL)isCaptureActiveOrPreparingOrResumable;
@end
