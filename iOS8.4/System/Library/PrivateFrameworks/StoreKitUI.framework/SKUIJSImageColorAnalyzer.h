/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:52 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <StoreKitUI/SKUIArtworkRequestDelegate.h>
#import <StoreKitUI/SKUIJSImageColorAnalyzer.h>

@protocol SKUIJSImageColorAnalyzer <JSExport>
@required
-(void)analyzeImageAtUrl:(id)arg1 :(id)arg2;

@end


@class SKUIClientContext, NSMutableDictionary, NSOperationQueue, SKUIResourceLoader, NSString;

@interface SKUIJSImageColorAnalyzer : IKJSObject <SKUIArtworkRequestDelegate, SKUIJSImageColorAnalyzer> {

	SKUIClientContext* _clientContext;
	NSMutableDictionary* _artworkRequestIDsToManagedCallbacks;
	NSOperationQueue* _operationQueue;
	SKUIResourceLoader* _resourceLoader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithAppContext:(id)arg1 clientContext:(id)arg2 ;
-(void)analyzeImageAtUrl:(id)arg1 :(id)arg2 ;
@end
