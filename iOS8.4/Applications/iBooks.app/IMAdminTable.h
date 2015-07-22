/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IMDatabaseHandle;

@interface IMAdminTable : NSObject {

	IMDatabaseHandle* _db;

}
-(id)initWithDatabaseHandle:(id)arg1 ;
-(char)hasDatabaseVersion;
-(void)setLastAccessDate:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 domain:(id)arg3 ;
-(id)numberValueForKey:(id)arg1 domain:(id)arg2 ;
-(id)blobValueForKey:(id)arg1 domain:(id)arg2 ;
-(id)stringValueForKey:(id)arg1 domain:(id)arg2 ;
-(void)setDatabaseVersion:(int)arg1 ;
-(int)databaseVersion;
-(id)lastAccessDate;
@end
