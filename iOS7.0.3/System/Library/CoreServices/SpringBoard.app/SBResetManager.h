/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSLock;

@interface SBResetManager : NSObject {

	BOOL _threadRunning;
	NSLock* _lock;
	int _mode;
	NSLock* _progressLock;
	float _progress;

}
+(id)sharedInstance;
-(void)_beginReset:(id)arg1 ;
-(void)_resetThread;
-(void)_postResetEnded;
-(void)beginReset;
-(void)_resetFinished;
-(void)dealloc;
-(id)init;
-(void)setMode:(int)arg1 ;
-(void)_setProgress:(float)arg1 ;
-(float)progress;
@end
