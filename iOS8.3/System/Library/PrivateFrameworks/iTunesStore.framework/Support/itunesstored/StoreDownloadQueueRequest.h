/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:36:43 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/NSCopying.h>

@class NSNumber, NSString;

@interface StoreDownloadQueueRequest : NSObject <NSCopying> {

	NSNumber* _accountIdentifier;
	char _cancelsDuplicateDownloads;
	long long _purchaseIdentifier;
	NSString* _queueIdentifier;
	NSString* _reason;

}

@property (nonatomic,retain) NSNumber * accountIdentifier;                     //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (assign,nonatomic) char cancelsDuplicateDownloads;                   //@synthesize cancelsDuplicateDownloads=_cancelsDuplicateDownloads - In the implementation block
@property (assign,nonatomic) long long purchaseIdentifier;                     //@synthesize purchaseIdentifier=_purchaseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * queueIdentifier;                         //@synthesize queueIdentifier=_queueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * queueContentsURLBagKey; 
@property (nonatomic,readonly) NSString * queueCountURLBagKey; 
@property (nonatomic,copy) NSString * reason;                                  //@synthesize reason=_reason - In the implementation block
+(void)initialize;
-(NSString *)queueCountURLBagKey;
-(NSString *)queueIdentifier;
-(long long)purchaseIdentifier;
-(NSString *)queueContentsURLBagKey;
-(char)cancelsDuplicateDownloads;
-(void)setQueueIdentifier:(NSString *)arg1 ;
-(void)setCancelsDuplicateDownloads:(char)arg1 ;
-(void)setPurchaseIdentifier:(long long)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)reason;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setReason:(NSString *)arg1 ;
@end
