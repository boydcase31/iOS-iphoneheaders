/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/Resources/fud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <fud/NSCoding.h>

@class NSString, NSMutableArray;

@interface PluginPolicy : NSObject <NSCoding> {

	NSString* pluginName;
	BOOL isValid;
	double remoteFirmwareCheckInterval;
	NSMutableArray* groups;
	NSMutableArray* matchingFilters;

}

@property (retain) NSString * pluginName; 
@property (assign) BOOL isValid; 
@property (assign) double remoteFirmwareCheckInterval; 
@property (retain) NSMutableArray * matchingFilters; 
@property (retain) NSMutableArray * groups; 
-(id)getMatchingFilterWithName:(id)arg1 ;
-(NSString *)pluginName;
-(id)initWithPolicyDictionary:(id)arg1 pluginName:(id)arg2 ;
-(NSMutableArray *)matchingFilters;
-(void)parsePolicyDict:(id)arg1 ;
-(BOOL)doesPolicyContainGroup:(id)arg1 ;
-(double)remoteFirmwareCheckInterval;
-(void)setRemoteFirmwareCheckInterval:(double)arg1 ;
-(void)setMatchingFilters:(NSMutableArray *)arg1 ;
-(void)setGroups:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isValid;
-(void)setIsValid:(BOOL)arg1 ;
-(NSMutableArray *)groups;
-(void)setPluginName:(NSString *)arg1 ;
@end
