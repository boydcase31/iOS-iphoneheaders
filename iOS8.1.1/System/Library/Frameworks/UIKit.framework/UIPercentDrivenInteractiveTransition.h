/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:31 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@class NSString, NSUUID;

@interface UIPercentDrivenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning> {

	double _duration;
	BOOL _didCommitAnimations;
	BOOL __transitionInterrupted;
	double _completionSpeed;
	long long _completionCurve;
	NSString* __originalFillMode;
	NSUUID* __uuid;

}

@property (readonly) double duration; 
@property (readonly) double percentComplete; 
@property (assign,nonatomic) double completionSpeed;                                                                                     //@synthesize completionSpeed=_completionSpeed - In the implementation block
@property (assign,nonatomic) long long completionCurve;                                                                                  //@synthesize completionCurve=_completionCurve - In the implementation block
@property (setter=_setOriginalFillMode:,nonatomic,retain) NSString * _originalFillMode;                                                  //@synthesize _originalFillMode=__originalFillMode - In the implementation block
@property (setter=_setUuid:,nonatomic,retain) NSUUID * _uuid;                                                                            //@synthesize _uuid=__uuid - In the implementation block
@property (assign,setter=_setTransitionInterrupted:,getter=_isTransitionInterrupted,nonatomic) BOOL _transitionInterrupted;              //@synthesize _transitionInterrupted=__transitionInterrupted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)_resetInteractionController;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)_stopInteractiveTransition;
-(double)percentComplete;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)updateInteractiveTransition:(double)arg1 ;
-(double)duration;
-(void)setCompletionSpeed:(double)arg1 ;
-(void)_setDuration:(double)arg1 ;
-(NSUUID *)_uuid;
-(long long)completionCurve;
-(double)completionSpeed;
-(void)_setOriginalFillMode:(id)arg1 ;
-(void)_setUuid:(id)arg1 ;
-(BOOL)_isTransitionInterrupted;
-(void)_setTransitionInterrupted:(BOOL)arg1 ;
-(void)_stopInteractiveTransition:(id)arg1 ;
-(void)_updateInteractiveTransition:(id)arg1 percent:(double)arg2 isFinished:(BOOL)arg3 didComplete:(BOOL)arg4 ;
-(void)startInteractiveTransition:(id)arg1 containerViews:(id)arg2 animation:(/*^block*/id)arg3 ;
-(void)setCompletionCurve:(long long)arg1 ;
-(NSString *)_originalFillMode;
@end
