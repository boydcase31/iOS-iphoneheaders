/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:46 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLImageLoadingThread, PLImageCacheList;

@interface PLImageCache : NSObject {

	PLImageLoadingThread* _loader;
	PLImageCacheList* _cacheList;

}
-(void)dealloc;
-(id)init;
-(id)_cachedImageFromSource:(id)arg1 asset:(id)arg2 ;
-(id)_imageLoader;
-(void)_uncacheImage:(id)arg1 ;
-(id)cachedImageFromSource:(id)arg1 forAsset:(id)arg2 loadIfNeeded:(char)arg3 synchronously:(char)arg4 priority:(int)arg5 forImageLoadingQueue:(id)arg6 ;
-(void)invalidateCachedImageForSource:(id)arg1 asset:(id)arg2 ;
-(void)_addImageToCache:(id)arg1 ;
-(id)newImageLoadingQueue;
-(void)removeImageLoadingQueue:(id)arg1 ;
-(void)cancelLoadFromSource:(id)arg1 asset:(id)arg2 imageLoadingQueue:(id)arg3 ;
-(id)cachedImageFromSource:(id)arg1 asset:(id)arg2 loadIfNeeded:(char)arg3 synchronously:(char)arg4 priority:(int)arg5 forImageLoadingQueue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)newCachedImageWithImageContents:(void*)arg1 orientation:(int)arg2 metadata:(id)arg3 fromSource:(id)arg4 asset:(id)arg5 ;
-(void)pauseLoading;
-(void)resumeLoading;
@end
