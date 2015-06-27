/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:12 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSRecursiveLock, MPLayerGroup, NSLock, NSUndoManager, NSURL;

@interface MPDocumentInternal : NSObject {

	NSString* uuid;
	NSString* lastRandomTransition;
	NSMutableDictionary* orderedRandomTransitions;
	NSRecursiveLock* propertiesLock;
	MPLayerGroup* documentLayerGroup;
	char savesPathsAsAbsolute;
	char assetLogging;
	NSMutableDictionary* cachedAbsolutePaths;
	NSMutableDictionary* cachedAbsoluteStillPaths;
	NSLock* cachedPathLock;
	NSUndoManager* undoManager;
	NSURL* fileURL;
	int batchModifyCount;
	char isInBatchModify;
	char needsActionConfigure;
	NSMutableDictionary* cachedActionableLayers;
	char cacheAbsolutePathOverride;
	char alwaysLookupAbsolutePaths;

}

@property (nonatomic,retain) NSString * lastRandomTransition; 
@property (nonatomic,retain) NSMutableDictionary * orderedRandomTransitions; 
@property (nonatomic,retain) NSRecursiveLock * propertiesLock; 
@property (nonatomic,retain) MPLayerGroup * documentLayerGroup; 
@property (assign,nonatomic) char savesPathsAsAbsolute; 
@property (assign,nonatomic) char assetLogging; 
@property (nonatomic,retain) NSMutableDictionary * cachedAbsolutePaths; 
@property (nonatomic,retain) NSMutableDictionary * cachedAbsoluteStillPaths; 
@property (nonatomic,retain) NSLock * cachedPathLock; 
@property (nonatomic,retain) NSUndoManager * undoManager; 
@property (assign,nonatomic) int batchModifyCount; 
@property (assign,nonatomic) char isInBatchModify; 
@property (assign,nonatomic) char needsActionConfigure; 
@property (nonatomic,retain) NSMutableDictionary * cachedActionableLayers; 
@property (nonatomic,retain) NSURL * fileURL; 
@property (nonatomic,copy) NSString * uuid; 
@property (assign,nonatomic) char cacheAbsolutePathOverride; 
@property (assign,nonatomic) char alwaysLookupAbsolutePaths; 
-(void)dealloc;
-(NSUndoManager *)undoManager;
-(NSString *)uuid;
-(NSURL *)fileURL;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(MPLayerGroup *)documentLayerGroup;
-(void)setDocumentLayerGroup:(MPLayerGroup *)arg1 ;
-(NSString *)lastRandomTransition;
-(void)setLastRandomTransition:(NSString *)arg1 ;
-(NSMutableDictionary *)orderedRandomTransitions;
-(void)setOrderedRandomTransitions:(NSMutableDictionary *)arg1 ;
-(NSRecursiveLock *)propertiesLock;
-(void)setPropertiesLock:(NSRecursiveLock *)arg1 ;
-(char)savesPathsAsAbsolute;
-(void)setSavesPathsAsAbsolute:(char)arg1 ;
-(char)assetLogging;
-(void)setAssetLogging:(char)arg1 ;
-(NSMutableDictionary *)cachedAbsolutePaths;
-(void)setCachedAbsolutePaths:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedAbsoluteStillPaths;
-(void)setCachedAbsoluteStillPaths:(NSMutableDictionary *)arg1 ;
-(NSLock *)cachedPathLock;
-(void)setCachedPathLock:(NSLock *)arg1 ;
-(int)batchModifyCount;
-(void)setBatchModifyCount:(int)arg1 ;
-(char)needsActionConfigure;
-(void)setNeedsActionConfigure:(char)arg1 ;
-(char)isInBatchModify;
-(void)setIsInBatchModify:(char)arg1 ;
-(NSMutableDictionary *)cachedActionableLayers;
-(void)setCachedActionableLayers:(NSMutableDictionary *)arg1 ;
-(char)cacheAbsolutePathOverride;
-(void)setCacheAbsolutePathOverride:(char)arg1 ;
-(char)alwaysLookupAbsolutePaths;
-(void)setAlwaysLookupAbsolutePaths:(char)arg1 ;
@end
