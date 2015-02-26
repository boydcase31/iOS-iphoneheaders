/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASettingNumericEntity.h>

@class NSNumber;

@interface SASettingFloatEntity : SASettingNumericEntity

@property (nonatomic,copy) NSNumber * previousValue; 
@property (assign,nonatomic) float value; 
+(id)floatEntity;
+(id)floatEntityWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)floatEntityWithValue:(float)arg1 ;
-(id)initWithValue:(float)arg1 ;
-(id)groupIdentifier;
-(void)setValue:(float)arg1 ;
-(float)value;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)previousValue;
-(void)setPreviousValue:(id)arg1 ;
@end
