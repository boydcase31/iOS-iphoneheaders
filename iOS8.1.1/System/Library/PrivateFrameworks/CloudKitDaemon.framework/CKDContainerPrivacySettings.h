/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CKContainerID, NSSet;

@interface CKDContainerPrivacySettings : NSObject {

	CKContainerID* _containerID;
	NSSet* _applicationBundleIDs;
	long long _discoverable;

}

@property (nonatomic,copy) CKContainerID * containerID;               //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy) NSSet * applicationBundleIDs;              //@synthesize applicationBundleIDs=_applicationBundleIDs - In the implementation block
@property (assign,nonatomic) long long discoverable;                  //@synthesize discoverable=_discoverable - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CKContainerID *)containerID;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(long long)discoverable;
-(void)setDiscoverable:(long long)arg1 ;
-(id)CKPropertiesDescription;
-(NSSet *)applicationBundleIDs;
-(void)setApplicationBundleIDs:(NSSet *)arg1 ;
@end
