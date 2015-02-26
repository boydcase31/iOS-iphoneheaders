/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrackSegment.h>

@class AVCompositionTrackSegmentInternal, NSURL;

@interface AVCompositionTrackSegment : AVAssetTrackSegment {

	AVCompositionTrackSegmentInternal* _priv;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) NSURL * sourceURL; 
@property (nonatomic,readonly) int sourceTrackID; 
+(id)compositionTrackSegmentWithURL:(id)arg1 trackID:(int)arg2 sourceTimeRange:(SCD_Struct_CM5)arg3 targetTimeRange:(SCD_Struct_CM5)arg4 ;
+(id)compositionTrackSegmentWithTimeRange:(SCD_Struct_CM5)arg1 ;
-(int)sourceTrackID;
-(id)initWithURL:(id)arg1 trackID:(int)arg2 sourceTimeRange:(SCD_Struct_CM5)arg3 targetTimeRange:(SCD_Struct_CM5)arg4 ;
-(id)initWithTimeRange:(SCD_Struct_CM5)arg1 ;
-(NSURL *)sourceURL;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEmpty;
-(void)finalize;
@end
