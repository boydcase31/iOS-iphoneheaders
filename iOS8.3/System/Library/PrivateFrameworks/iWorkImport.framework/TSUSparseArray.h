/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:41:59 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>

@interface TSUSparseArray : NSObject <NSCopying> {

	tsuSaPage* _topPage;
	unsigned _nonNilCount;
	unsigned _depth;

}

@property (readonly) unsigned count; 
-(unsigned)maxIndexForCurrentDepth;
-(void)increaseDepth;
-(char)hasObjectForKey:(unsigned)arg1 ;
-(void)foreach:(/*^block*/id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)description;
-(void)removeObjectForKey:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(id)objectForKey:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forKey:(unsigned)arg2 ;
@end
