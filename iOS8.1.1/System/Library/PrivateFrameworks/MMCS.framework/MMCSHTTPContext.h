/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MMCS/MMCS-Structs.h>
#import <MMCS/NSURLSessionDelegate.h>
#import <MMCS/NSURLSessionTaskDelegate.h>
#import <MMCS/NSURLSessionDataDelegate.h>
#import <MMCS/NSURLSessionDataDelegatePrivate.h>
#import <MMCS/NSStreamDelegate.h>

@class NSURLSession, NSInputStream, NSOutputStream, NSOperationQueue, NSURLSessionDataTask, NSDictionary, MMCSDuetReporter, NSString;

@interface MMCSHTTPContext : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSStreamDelegate> {

	BOOL _didOpen;
	BOOL _isValid;
	BOOL _isTaskDone;
	mmcs_http_context* _hc;
	NSURLSession* _urlSession;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	NSOperationQueue* _operationQueue;
	NSURLSessionDataTask* _dataTask;
	NSDictionary* _timingData;
	MMCSDuetReporter* _duetReporter;

}

@property (assign,nonatomic) mmcs_http_context* hc;                          //@synthesize hc=_hc - In the implementation block
@property (nonatomic,retain) NSURLSession * urlSession;                      //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                    //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                  //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * dataTask;                //@synthesize dataTask=_dataTask - In the implementation block
@property (nonatomic,retain) NSDictionary * timingData;                      //@synthesize timingData=_timingData - In the implementation block
@property (nonatomic,retain) MMCSDuetReporter * duetReporter;                //@synthesize duetReporter=_duetReporter - In the implementation block
@property (assign,nonatomic) BOOL didOpen;                                   //@synthesize didOpen=_didOpen - In the implementation block
@property (assign,nonatomic) BOOL isValid;                                   //@synthesize isValid=_isValid - In the implementation block
@property (assign,nonatomic) BOOL isTaskDone;                                //@synthesize isTaskDone=_isTaskDone - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMMCSHTTPSession;
-(void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3 ;
-(id)initWithContext:(mmcs_http_context*)arg1 options:(const mmcs_http_context_options*)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(BOOL)isValid;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(BOOL)send;
-(NSOperationQueue *)operationQueue;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(NSInputStream *)inputStream;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(NSURLSessionDataTask *)dataTask;
-(NSDictionary *)timingData;
-(void)cleanupResponse;
-(long long)writeRequestBody:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(void)requestBodyDone;
-(BOOL)requestBodyCanAcceptData;
-(BOOL)isTaskDone;
-(mmcs_http_context*)hc;
-(void)invalidateStreamPair;
-(void)setHc:(mmcs_http_context*)arg1 ;
-(BOOL)createNewRequestBodyInputStream;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
-(void)setDuetReporter:(MMCSDuetReporter *)arg1 ;
-(MMCSDuetReporter *)duetReporter;
-(NSURLSession *)urlSession;
-(void)setIsTaskDone:(BOOL)arg1 ;
-(void)setUrlSession:(NSURLSession *)arg1 ;
-(void)setDidOpen:(BOOL)arg1 ;
-(void)cleanupRequest;
-(void)setTimingData:(NSDictionary *)arg1 ;
-(long long)countOfRequestBodyBytesSent;
-(BOOL)didOpen;
-(NSOutputStream *)outputStream;
@end
