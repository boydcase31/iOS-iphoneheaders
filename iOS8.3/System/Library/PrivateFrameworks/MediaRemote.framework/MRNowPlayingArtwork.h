/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:26:33 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MRNowPlayingArtwork : NSObject

@property (nonatomic,readonly) unsigned type; 
@property (nonatomic,readonly) char hasArtworkData; 
+(id)nowPlayingArtworkFromXPCDictionary:(id)arg1 ;
-(unsigned)type;
-(char)hasArtworkData;
-(void)bindToXPCDictionary:(id)arg1 ;
-(id)copyImageData;
@end
