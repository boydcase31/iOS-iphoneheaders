/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:16 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/XPCServices/IMRemoteURLConnectionAgent.xpc/IMRemoteURLConnectionAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <IMRemoteURLConnectionAgent/NSURLConnectionDelegate.h>

@class NSMutableURLRequest, NSURLConnection, NSURLResponse, NSMutableData, NSString;

@interface IMRemoteAgentURLLoader : NSObject <NSURLConnectionDelegate> {

	/*^block*/id _block;
	NSMutableURLRequest* _request;
	NSURLConnection* _currentURLConnection;
	NSURLResponse* _currentURLResponse;
	NSMutableData* _currentResponseData;
	NSString* _bundleIdentifierForDataUsage;
	long long _currentStatusCode;
	BOOL _forceCellularIfPossible;
	BOOL _requireIDSHost;

}

@property (assign) BOOL requireIDSHost;                                  //@synthesize requireIDSHost=_requireIDSHost - In the implementation block
@property (assign) BOOL forceCellularIfPossible;                         //@synthesize forceCellularIfPossible=_forceCellularIfPossible - In the implementation block
@property (retain) NSString * bundleIdentifierForDataUsage;              //@synthesize bundleIdentifierForDataUsage=_bundleIdentifierForDataUsage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_callBackWithError:(id)arg1 resultData:(id)arg2 statusCode:(long long)arg3 response:(id)arg4 ;
-(void)cancel;
-(void)dealloc;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)load;
-(NSString *)bundleIdentifierForDataUsage;
-(BOOL)requireIDSHost;
-(BOOL)forceCellularIfPossible;
-(id)initWithURLRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setForceCellularIfPossible:(BOOL)arg1 ;
-(void)setBundleIdentifierForDataUsage:(NSString *)arg1 ;
-(void)setRequireIDSHost:(BOOL)arg1 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
@end
