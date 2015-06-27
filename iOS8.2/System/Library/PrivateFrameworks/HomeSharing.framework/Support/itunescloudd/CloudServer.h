/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/NSXPCListenerDelegate.h>
#import <itunescloudd/CloudPushNotificationControllerDelegate.h>
#import <itunescloudd/SSAuthenticateRequestDelegate.h>

@protocol OS_dispatch_source;
@class NSXPCListener, CloudPushNotificationController, NSObject, NSOperationQueue, NSString;

@interface CloudServer : NSObject <NSXPCListenerDelegate, CloudPushNotificationControllerDelegate, SSAuthenticateRequestDelegate> {

	NSXPCListener* _xpcListener;
	CloudPushNotificationController* _pushNotificationController;
	char _networkActivityIndicatorVisible;
	NSObject*<OS_dispatch_source> _siginfoDispatchSource;
	char _ignoreAccountChanges;
	int _preferredVideoQuality;
	NSOperationQueue* _operationQueue;
	NSOperationQueue* _backgroundOperationQueue;
	unsigned long long _daemonConfiguration;

}

@property (assign,nonatomic) unsigned long long daemonConfiguration;                     //@synthesize daemonConfiguration=_daemonConfiguration - In the implementation block
@property (assign,nonatomic) char ignoreAccountChanges;                                  //@synthesize ignoreAccountChanges=_ignoreAccountChanges - In the implementation block
@property (assign,nonatomic) int preferredVideoQuality;                                  //@synthesize preferredVideoQuality=_preferredVideoQuality - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                        //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * backgroundOperationQueue;              //@synthesize backgroundOperationQueue=_backgroundOperationQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)server;
-(void)addOperation:(id)arg1 priority:(int)arg2 ;
-(void)addBackgroundOperation:(id)arg1 priority:(int)arg2 ;
-(void)setIgnoreAccountChanges:(char)arg1 ;
-(unsigned long long)daemonConfiguration;
-(char)cancelOperationsByClass:(Class)arg1 ;
-(void)sendAsynchronousRequest:(id)arg1 priority:(int)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)enumerateBackgroundOperationsUsingBlock:(/*^block*/id)arg1 ;
-(void)logPowerEvent:(id)arg1 payload:(id)arg2 ;
-(int)preferredVideoQuality;
-(void)pushNotificationControllerDidReceiveUpdateRequest:(id)arg1 forService:(int)arg2 toDatabaseRevision:(unsigned)arg3 ;
-(void)_initSerialQueues;
-(char)_setupAssistantNeedsToRun;
-(void)_setupPushNotificationController;
-(void)_didReceiveDistributedNotification:(id)arg1 withStreamEvent:(id)arg2 ;
-(void)_didReceiveDarwinNotification:(id)arg1 ;
-(char)_migrateToLatestUserVersion;
-(char)_synchronousRemoveTrackSource:(int)arg1 fromMediaLibrary:(id)arg2 ;
-(char)_validateAndRepairPurchases;
-(char)_migrateFromUserVersion0to348294:(int*)arg1 ;
-(char)_migrateFromUserVersion348294to348295:(int*)arg1 ;
-(char)_migrateFromUserVersion348295to366559:(int*)arg1 ;
-(char)_migrateFromUserVersion366559to370000:(int*)arg1 ;
-(char)_migrateFromUserVersion370000to370100:(int*)arg1 ;
-(char)_migrateFromUserVersion370100to370200:(int*)arg1 ;
-(char)_migrateFromUserVersion370200to370300:(int*)arg1 ;
-(char)_migrateFromUserVersion370300to370400:(int*)arg1 ;
-(char)_migrateFromUserVersion370400to380000:(int*)arg1 ;
-(void)_postMigrationSanityCheck;
-(void)_handleFamilyContentDeletionEvent:(id)arg1 ;
-(void)_handleAccountsDidChangeNotification;
-(void)_handleBuddySetupDoneNotification;
-(void)_handleLibraryDidChangeNotification;
-(char)hasOperationsOfClass:(Class)arg1 ;
-(char)ignoreAccountChanges;
-(NSOperationQueue *)backgroundOperationQueue;
-(void)canShowCloudDownloadButtonsDidChangeNotification:(id)arg1 ;
-(void)canShowCloudTracksDidChangeNotification:(id)arg1 ;
-(void)isCellularDataRestrictedDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)stop;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSOperationQueue *)operationQueue;
-(void)setDaemonConfiguration:(unsigned long long)arg1 ;
-(void)setPreferredVideoQuality:(int)arg1 ;
-(void)enumerateOperationsUsingBlock:(/*^block*/id)arg1 ;
@end
