/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GameKitServices/GameKitServices-Structs.h>
@interface GKTable : NSObject {

	gktableitem* _items;
	unsigned long long _count;
	unsigned long long _size;
	opaque_pthread_mutex_t _lock;

}

@property (readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(void)removeAllObjects;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(void)removeObjectForKey:(unsigned)arg1 ;
-(id)allObjects;
-(void)lock;
-(void)unlock;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)initWithSize:(unsigned long long)arg1 ;
-(void)print;
-(void)touchObject:(id)arg1 ;
-(void)touchObjectForKey:(unsigned)arg1 ;
-(id)objectForKey:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forKey:(unsigned)arg2 ;
@end
