/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:43 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSString;

@interface PKPaymentPassesResponse : PKPaymentWebServiceResponse {

	NSArray* _passURLs;
	NSString* _lastUpdatedTag;
	NSArray* _devicePassSerialNumbers;

}

@property (nonatomic,retain) NSArray * passURLs;                             //@synthesize passURLs=_passURLs - In the implementation block
@property (nonatomic,retain) NSString * lastUpdatedTag;                      //@synthesize lastUpdatedTag=_lastUpdatedTag - In the implementation block
@property (nonatomic,retain) NSArray * devicePassSerialNumbers;              //@synthesize devicePassSerialNumbers=_devicePassSerialNumbers - In the implementation block
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(void)setLastUpdatedTag:(NSString *)arg1 ;
-(NSString *)lastUpdatedTag;
-(NSArray *)passURLs;
-(NSArray *)devicePassSerialNumbers;
-(void)setPassURLs:(NSArray *)arg1 ;
-(void)setDevicePassSerialNumbers:(NSArray *)arg1 ;
@end
