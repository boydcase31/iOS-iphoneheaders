/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/NSStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSInputStream, NSOutputStream, NSMutableDictionary, NSObject, NSError, NSString;

@interface MFStream : NSObject <NSStreamDelegate> {

	NSInputStream* _rStream;
	NSOutputStream* _wStream;
	NSMutableDictionary* _properties;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _location;
	unsigned long _capacity;
	unsigned long _length;
	char* _buffer;
	NSError* _error;
	char _streamCanRead;
	char _streamCanWrite;
	char _dispatchedBytesAvailable;
	unsigned _bytesRead;
	unsigned _bytesWritten;
	char _enableThroughputMonitoring;

}

@property (nonatomic,readonly) NSError * streamError;               //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) char isOpen; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)networkThread;
+(void)setNetworkThread:(id)arg1 ;
+(id)_networkDispatchQueue;
-(int)read:(char*)arg1 maxLength:(unsigned)arg2 ;
-(void)dealloc;
-(id)init;
-(void)close;
-(int)write:(const char*)arg1 maxLength:(unsigned)arg2 ;
-(NSError *)streamError;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(id)propertyForKey:(id)arg1 ;
-(char)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)enableThroughputMonitoring:(char)arg1 ;
-(id)initCallBack:(/*^block*/id)arg1 onDispatchQueue:(id)arg2 ;
-(id)_copyPropertyForKey:(id)arg1 ;
-(void)_readBytesFromStream;
-(void)_closeAndReleaseStream:(id)arg1 logMessage:(id)arg2 ;
-(void)openToHostName:(id)arg1 port:(int)arg2 ;
-(char)isOpen;
@end
