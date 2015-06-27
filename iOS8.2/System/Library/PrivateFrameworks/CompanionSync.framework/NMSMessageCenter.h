/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:47 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <CompanionSync/IDSServiceDelegate.h>

@protocol OS_dispatch_source, NMSMessageCenterDelegate, OS_dispatch_queue;
@class NSString, IDSService, NSMutableDictionary, NMSPersistentDictionary, NSDate, NSObject, NMSWindowData, _NMSDispatchQueue;

@interface NMSMessageCenter : NSObject <IDSServiceDelegate> {

	NSString* _serviceIdentifier;
	NSString* _launchNotification;
	CFStringRef _loggingFacility;
	IDSService* _service;
	NSMutableDictionary* _requestHandlers;
	NSMutableDictionary* _errorHandlers;
	NSMutableDictionary* _responseHandlers;
	NSMutableDictionary* _pbMapping;
	NMSPersistentDictionary* _persistentContextStore;
	NSDate* _nextExpireTimerFireDate;
	NSObject*<OS_dispatch_source> _expireTimer;
	unsigned _currentBytesInFlight;
	NMSWindowData* _windowData;
	NSObject*<OS_dispatch_source> _windowTimeout;
	_NMSDispatchQueue* _windowQueue;
	char _enableTransmissionWindow;
	char _delegateRequiresACKs;
	id<NMSMessageCenterDelegate> _delegate;
	unsigned _maxMessagesInFlight;
	unsigned _minMessagesInFlight;
	unsigned _maxBytesInFlight;
	NSObject*<OS_dispatch_queue> _queue;
	double _windowResponseTimeout;

}

@property (assign,nonatomic,__weak) id<NMSMessageCenterDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IDSService * idsService; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> actionQ; 
@property (assign,nonatomic) char enableTransmissionWindow;                                             //@synthesize enableTransmissionWindow=_enableTransmissionWindow - In the implementation block
@property (assign,nonatomic) unsigned maxMessagesInFlight;                                              //@synthesize maxMessagesInFlight=_maxMessagesInFlight - In the implementation block
@property (assign,nonatomic) unsigned minMessagesInFlight;                                              //@synthesize minMessagesInFlight=_minMessagesInFlight - In the implementation block
@property (assign,nonatomic) unsigned maxBytesInFlight;                                                 //@synthesize maxBytesInFlight=_maxBytesInFlight - In the implementation block
@property (assign,nonatomic) double windowResponseTimeout;                                              //@synthesize windowResponseTimeout=_windowResponseTimeout - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) IDSService * service;                                                      //@synthesize service=_service - In the implementation block
@property (getter=_currentBytesInFlight,nonatomic,readonly) unsigned currentBytesInFlight; 
@property (assign,nonatomic) char delegateRequiresACKs;                                                 //@synthesize delegateRequiresACKs=_delegateRequiresACKs - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)messageWindowCountEnabled;
+(void)setMessageWindowCountEnabled:(char)arg1 ;
-(void)sendRequest:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<NMSMessageCenterDelegate>)arg1 ;
-(NSString *)description;
-(id<NMSMessageCenterDelegate>)delegate;
-(void)resume;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setEnableTransmissionWindow:(char)arg1 ;
-(void)setMaxMessagesInFlight:(unsigned)arg1 ;
-(void)setMinMessagesInFlight:(unsigned)arg1 ;
-(void)setMaxBytesInFlight:(unsigned)arg1 ;
-(unsigned)maxBytesInFlight;
-(void)_obliterate;
-(id)initWithIDSServiceIdentifier:(id)arg1 launchOnDemandNotification:(id)arg2 cacheFolderPath:(id)arg3 loggingFacility:(CFStringRef)arg4 ;
-(void)mapPBRequest:(Class)arg1 toResponse:(Class)arg2 messageID:(unsigned short)arg3 ;
-(void)addRequestHandlerForMessageID:(unsigned short)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addResponseHandler:(unsigned short)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addErrorHandlerForMessageID:(unsigned short)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_expireMessages;
-(void)_timeoutWindowedMessages;
-(void)setWindowResponseTimeout:(double)arg1 ;
-(void)_setNextWindowTimeoutFireDate;
-(void)_updateExpireTimerWithDate:(id)arg1 ;
-(void)_handleError:(id)arg1 context:(id)arg2 ;
-(void)setDelegateRequiresACKs:(char)arg1 ;
-(char)enableTransmissionWindow;
-(id)_buildDataForRequest:(id)arg1 options:(id*)arg2 ;
-(double)windowResponseTimeout;
-(char)delegateRequiresACKs;
-(id)_buildDataForResponse:(id)arg1 options:(id*)arg2 ;
-(id)_pbMappingForMessageID:(unsigned short)arg1 ;
-(id)_decodeIncomingRequestData:(id)arg1 context:(id)arg2 ;
-(id)requestHandlers;
-(id)errorHandlers;
-(id)responseHandlers;
-(unsigned)_currentBytesInFlight;
-(NSObject*<OS_dispatch_queue>)actionQ;
-(void)dropExtantMessages;
-(void)_sendResponse:(id)arg1 ;
-(unsigned)maxMessagesInFlight;
-(unsigned)minMessagesInFlight;
-(IDSService *)service;
-(void)setService:(IDSService *)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(IDSService *)idsService;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
@end
