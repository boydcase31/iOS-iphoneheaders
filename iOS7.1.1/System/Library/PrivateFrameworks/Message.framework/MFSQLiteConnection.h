/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSString;

@interface MFSQLiteConnection : NSObject {

	NSString* _path;
	sqlite3Ref _db;
	NSString* _databaseName;
	CFDictionaryRef _statementCache;
	void* _ICUSearchContext;
	void* _CPSearchContext;
	int _transactionType;
	unsigned long long _transactionCount;

}

@property (nonatomic,readonly) sqlite3Ref db;              //@synthesize db=_db - In the implementation block
-(bool)isOpen;
-(int)beginTransaction;
-(int)rollbackTransaction;
-(void)dealloc;
-(void)flush;
-(int)commitTransaction;
-(void)close;
-(sqlite3Ref)db;
-(int)beginTransactionWithType:(int)arg1 ;
-(sqlite3_stmtRef)preparedStatementForPattern:(id)arg1 ;
-(const char*)_vfsModuleName;
-(id)initWithPath:(id)arg1 databaseName:(id)arg2 ;
-(int)open;
@end
