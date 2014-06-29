/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptMediaItem, NSNumber;

@interface SUScriptMusicPlayerController : SUScriptObject {

	NSString* _playerType;

}

@property (readonly) double currentPlaybackTime; 
@property (readonly) SUScriptMediaItem * nowPlayingItem; 
@property (readonly) NSString * playbackState; 
@property (readonly) NSString * playerType; 
@property (copy) NSString * repeatMode; 
@property (copy) NSString * shuffleMode; 
@property (retain) NSNumber * volume; 
@property (readonly) NSString * playbackStateInterrupted; 
@property (readonly) NSString * playbackStatePaused; 
@property (readonly) NSString * playbackStatePlaying; 
@property (readonly) NSString * playbackStateSeekingBackward; 
@property (readonly) NSString * playbackStateSeekingForward; 
@property (readonly) NSString * playbackStateStopped; 
@property (readonly) NSString * repeatModeAll; 
@property (readonly) NSString * repeatModeDefault; 
@property (readonly) NSString * repeatModeNone; 
@property (readonly) NSString * repeatModeOne; 
@property (readonly) NSString * shuffleModeAlbums; 
@property (readonly) NSString * shuffleModeDefault; 
@property (readonly) NSString * shuffleModeOff; 
@property (readonly) NSString * shuffleModeSongs; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)scriptPlaybackStateForNativePlaybackState:(long long)arg1 ;
-(id)playbackState;
-(id)repeatMode;
-(void)setRepeatMode:(id)arg1 ;
-(void)play;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(double)currentPlaybackTime;
-(id)nowPlayingItem;
-(void)setQueueWithItemCollection:(id)arg1 ;
-(id)shuffleMode;
-(void)setShuffleMode:(id)arg1 ;
-(void)setQueueWithQuery:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)pause;
-(id)volume;
-(void)setVolume:(id)arg1 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)playerType;
-(id)initWithPlayerType:(id)arg1 ;
-(id)repeatModeAll;
-(id)repeatModeDefault;
-(id)repeatModeNone;
-(id)repeatModeOne;
-(id)shuffleModeAlbums;
-(id)shuffleModeDefault;
-(id)shuffleModeOff;
-(id)shuffleModeSongs;
-(id)playbackStateInterrupted;
-(id)playbackStatePaused;
-(id)playbackStatePlaying;
-(id)playbackStateSeekingBackward;
-(id)playbackStateSeekingForward;
-(id)playbackStateStopped;
@end
