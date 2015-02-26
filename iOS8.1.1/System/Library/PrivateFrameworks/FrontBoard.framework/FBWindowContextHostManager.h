/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <FrontBoard/FBWindowContextHostViewDelegate.h>

@protocol FBWindowContextHostManagerDelegate;
@class FBWindowContextManager, FBScene, NSString, UIColor, FBWindowContextHostView, FBOrderedRequesters, NSMutableDictionary, NSHashTable;

@interface FBWindowContextHostManager : NSObject <FBWindowContextHostViewDelegate> {

	FBWindowContextManager* _contextManager;
	FBScene* _scene;
	NSString* _identifier;
	UIColor* _defaultBackgroundColorWhileHosting;
	UIColor* _defaultBackgroundColorWhileNotHosting;
	FBWindowContextHostView* _hostView;
	BOOL _suspended;
	BOOL _invalidated;
	FBOrderedRequesters* _hostRequesters;
	NSMutableDictionary* _hostRequesterInfo;
	NSHashTable* _observers;
	id<FBWindowContextHostManagerDelegate> _delegate;
	struct {
		unsigned delegateOverrideRequester : 1;
		unsigned delegateShouldEnableContextHostingForRequester : 1;
	}  _flags;

}

@property (assign,nonatomic) id<FBWindowContextHostManagerDelegate> delegate; 
@property (nonatomic,readonly) FBScene * scene;                                            //@synthesize scene=_scene - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) UIColor * defaultBackgroundColorWhileHosting; 
@property (nonatomic,copy) UIColor * defaultBackgroundColorWhileNotHosting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBScene *)scene;
-(void)dealloc;
-(void)setDelegate:(id<FBWindowContextHostManagerDelegate>)arg1 ;
-(NSString *)description;
-(id<FBWindowContextHostManagerDelegate>)delegate;
-(void)invalidate;
-(NSString *)identifier;
-(void)removeObserver:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)windowContextHostViewHostedContextsDidChange:(id)arg1 ;
-(id)_realContextHostViewWhichIReallyNeedToAccessAndIKnowWhatImDoingISwear;
-(UIColor *)defaultBackgroundColorWhileHosting;
-(UIColor *)defaultBackgroundColorWhileNotHosting;
-(void)enableHostingForRequester:(id)arg1 priority:(long long)arg2 ;
-(id)hostViewForRequester:(id)arg1 appearanceStyle:(unsigned long long)arg2 ;
-(void)disableHostingForRequester:(id)arg1 ;
-(void)suspendContextHosting;
-(void)_updateHostViewFrameForRequester:(id)arg1 ;
-(id)hostViewForRequester:(id)arg1 ;
-(id)_hostViewForRequester:(id)arg1 ;
-(id)_hostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2 ;
-(id)_overrideRequesterIfNecessary:(id)arg1 ;
-(id)_infoForRequester:(id)arg1 ;
-(void)_removeRequesterInfo:(id)arg1 ;
-(void)_applyRequesterInfo:(id)arg1 ;
-(CGImageRef)_snapshotCGImageRefForFrame:(CGRect)arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3 outTransform:(CGAffineTransform*)arg4 outIOSurfaceRef:(id*)arg5 ;
-(CGImageRef)snapshotCGImageRefForFrame:(CGRect)arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3 outTransform:(CGAffineTransform*)arg4 ;
-(unsigned long long)_populateContextIDs:(unsigned*)arg1 forSnapshotExcludingContexts:(id)arg2 ;
-(IOSurfaceRef)snapshotIOSurfaceForFrame:(CGRect)arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3 outTransform:(CGAffineTransform*)arg4 ;
-(void)enableHostingForRequester:(id)arg1 orderFront:(BOOL)arg2 ;
-(id)initWithContextManager:(id)arg1 scene:(id)arg2 ;
-(void)setDefaultBackgroundColorWhileHosting:(UIColor *)arg1 ;
-(void)setDefaultBackgroundColorWhileNotHosting:(UIColor *)arg1 ;
-(unsigned long long)contextCount;
-(id)hostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2 ;
-(id)hostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2 appearanceStyle:(unsigned long long)arg3 ;
-(void)resumeContextHosting;
-(void)orderRequesterFront:(id)arg1 ;
-(id)visibleContexts;
-(void)setContextId:(unsigned)arg1 hidden:(BOOL)arg2 forRequester:(id)arg3 ;
-(id)snapshotViewWithFrame:(CGRect)arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3 ;
-(id)snapshotUIImageForFrame:(CGRect)arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3 outTransform:(CGAffineTransform*)arg4 ;
-(void)_notePropertiesSetOnRealContextHostViewWhichIReallyNeedToChangeAndIKnowWhatImDoingISwear:(id)arg1 originalProperties:(id)arg2 forRequester:(id)arg3 ;
@end
