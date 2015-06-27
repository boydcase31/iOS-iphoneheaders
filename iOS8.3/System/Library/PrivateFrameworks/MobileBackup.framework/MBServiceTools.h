/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:34:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MBServiceSettingsContext, MBDomainManager, MBServiceCache, MBServiceEncryptionManager, MBService, MBChunkStore;

@interface MBServiceTools : NSObject {

	MBServiceSettingsContext* _settingsContext;
	MBDomainManager* _domainManager;
	MBServiceCache* _cache;
	MBServiceEncryptionManager* _encryptionManager;
	MBService* _service;
	MBChunkStore* _chunkStore;

}
+(id)toolsWithSettingsContext:(id)arg1 ;
-(char)extractFileID:(id)arg1 toPath:(id)arg2 progress:(/*^block*/id)arg3 error:(id*)arg4 ;
-(char)extractItemFromDomainName:(id)arg1 relativePath:(id)arg2 toPath:(id)arg3 progress:(/*^block*/id)arg4 error:(id*)arg5 ;
-(char)addFileToDomainName:(id)arg1 relativePath:(id)arg2 fromPath:(id)arg3 progress:(/*^block*/id)arg4 error:(id*)arg5 ;
-(char)deleteItemFromDomainName:(id)arg1 relativePath:(id)arg2 error:(id*)arg3 ;
-(char)_extractItemFromDomainName:(id)arg1 relativePath:(id)arg2 toPath:(id)arg3 progress:(/*^block*/id)arg4 error:(id*)arg5 ;
-(char)_extractFileID:(id)arg1 toPath:(id)arg2 progress:(/*^block*/id)arg3 error:(id*)arg4 ;
-(id)_addFileToDomainName:(id)arg1 relativePath:(id)arg2 fromPath:(id)arg3 progress:(/*^block*/id)arg4 ;
-(id)_deleteItemFromDomainName:(id)arg1 relativePath:(id)arg2 ;
-(void)dealloc;
-(void)close;
-(void)open;
-(id)account;
-(id)initWithSettingsContext:(id)arg1 ;
-(id)backupUDID;
-(unsigned)snapshotID;
@end
