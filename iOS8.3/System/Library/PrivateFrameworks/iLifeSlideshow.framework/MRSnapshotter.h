/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:32:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
@class MRRenderer, EAGLContext, MRTexture;

@interface MRSnapshotter : NSObject {

	MRRenderer* _renderer;
	EAGLContext* _context;
	MRTexture* _texture;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) char isFlipped; 
@property (assign,nonatomic) double timeQuantum; 
@property (nonatomic,readonly) CGColorSpaceRef colorSpace; 
-(CGColorSpaceRef)colorSpace;
-(void)dealloc;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setIsFlipped:(char)arg1 ;
-(char)isFlipped;
-(double)timeQuantum;
-(void)setTimeQuantum:(double)arg1 ;
-(id)initWithMontage:(id)arg1 andAssetManagementDelegate:(id)arg2 isReadOnly:(char)arg3 ;
-(CGImageRef)CGImageSnapshotAtTime:(double)arg1 ;
-(void)_snapshotToBuffer:(unsigned*)arg1 withBytesPerRow:(unsigned long)arg2 ;
-(CGImageRef)_CGImageSnapshot;
-(void)snapshotToBuffer:(unsigned*)arg1 withBytesPerRow:(unsigned long)arg2 atTime:(double)arg3 ;
-(CGImageRef)CGImageSnapshotAtState:(id)arg1 ;
@end
