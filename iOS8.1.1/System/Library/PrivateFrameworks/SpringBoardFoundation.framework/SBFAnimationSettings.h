/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:54 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBFAnimationCurveSettings.h>

@class BSAnimationSettings;

@interface SBFAnimationSettings : SBFAnimationCurveSettings {

	BSAnimationSettings* _exportedSettings;
	long long _animationType;
	double _delay;
	double _duration;
	double _mass;
	double _stiffness;
	double _damping;
	double _epsilon;
	double _calculatedDuration;

}

@property (assign,nonatomic) long long animationType;                //@synthesize animationType=_animationType - In the implementation block
@property (assign,nonatomic) double delay;                           //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) double duration;                        //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double mass;                            //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) double stiffness;                       //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) double damping;                         //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double epsilon;                         //@synthesize epsilon=_epsilon - In the implementation block
@property (assign,nonatomic) double calculatedDuration;              //@synthesize calculatedDuration=_calculatedDuration - In the implementation block
+(id)settingsControllerModule;
+(id)_moduleWithSectionTitle:(id)arg1 ;
+(id)_moduleWithSectionTitle:(id)arg1 delay:(BOOL)arg2 ;
-(double)stiffness;
-(void)dealloc;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setDelay:(double)arg1 ;
-(double)delay;
-(double)damping;
-(void)setDefaultValues;
-(double)mass;
-(void)setAnimationType:(long long)arg1 ;
-(void)_invalidate;
-(long long)animationType;
-(double)epsilon;
-(void)setEpsilon:(double)arg1 ;
-(id)BSAnimationSettings;
-(void)setCalculatedDuration:(double)arg1 ;
-(double)calculatedDuration;
@end
