/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:48 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLResponse, NSData, NSDictionary;

@interface NSCachedURLResponseInternal : NSObject {

	NSURLResponse* response;
	NSData* data;
	NSDictionary* userInfo;
	unsigned long long storagePolicy;
	CFCachedURLResponse* _cachedURLResponse;

}
-(void)dealloc;
@end
