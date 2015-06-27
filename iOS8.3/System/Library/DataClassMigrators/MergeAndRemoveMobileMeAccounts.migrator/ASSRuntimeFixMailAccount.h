/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:27:17 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/DataClassMigrators/MergeAndRemoveMobileMeAccounts.migrator/MergeAndRemoveMobileMeAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MergeAndRemoveMobileMeAccounts/ASRuntimeFixProtocol.h>

@class NSSet, NSString;

@interface ASSRuntimeFixMailAccount : NSObject <ASRuntimeFixProtocol> {

	char _shouldNotifyMobileMail;
	NSSet* _supportedMailClasses;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(int)fixBasicAccountIfNeeded:(id)arg1 loggingMessage:(id)arg2 ;
-(void)accountsHaveBeenSaved:(char)arg1 ;
-(id)supportedAccountTypes;
-(char)_cleanupAccountClass:(id)arg1 ;
@end
