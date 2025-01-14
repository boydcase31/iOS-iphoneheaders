/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIAccelerometerDelegate;
#import <UIKit/UIKit-Structs.h>
@class CMMotionManager;

@interface UIAccelerometer : NSObject {

	double _updateInterval;
	id<UIAccelerometerDelegate> _delegate;
	struct {
		unsigned delegateDidAccelerate : 1;
		unsigned reserved : 31;
	}  _accelerometerFlags;
	CMMotionManager* _motionManager;

}

@property (assign,nonatomic) double updateInterval;                             //@synthesize updateInterval=_updateInterval - In the implementation block
@property (assign,nonatomic) id<UIAccelerometerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedAccelerometer;
-(void)dealloc;
-(void)setDelegate:(id<UIAccelerometerDelegate>)arg1 ;
-(id)init;
-(id<UIAccelerometerDelegate>)delegate;
-(void)_acceleratedInX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4 ;
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
-(void)_willResume:(id)arg1 ;
-(void)_didSuspend:(id)arg1 ;
-(id)_motionManager;
-(void)_startAccelerometerIfNecessary;
-(void)_stopAccelerometer;
@end

