/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSKeyValueMutableSet.h>

@class NSKeyValueMutatingSetMethodSet;

@interface NSKeyValueFastMutableSet : NSKeyValueMutableSet {

	NSKeyValueMutatingSetMethodSet* _mutatingMethods;

}
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)_proxyNonGCFinalize;
-(void)removeObject:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)unionSet:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
@end
