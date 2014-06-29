/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Radio/Radio-Structs.h>
@class NSOperationQueue;

@interface RadioImageCache : NSObject {

	NSOperationQueue* _imageRequestQueue;

}
+(id)sharedCache;
+(CFURLCacheRef)_sharedCFURLCache;
+(CFURLStorageSessionRef)_newSharedCacheStorageSession;
-(id)cachedImageDataForRadioArtwork:(id)arg1 ;
-(void)loadImageForRadioArtwork:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void).cxx_destruct;
-(id)_requestForRadioArtwork:(id)arg1 ;
-(id)_cachedResponseForRequest:(id)arg1 ;
-(id)cachedImageDataForStation:(id)arg1 withExactSize:(CGSize)arg2 ;
-(void)loadImageForStation:(id)arg1 withSize:(CGSize)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)_removeAllCachedImages;
@end
