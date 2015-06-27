/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:00 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAWebWebResult.h>

@class NSNumber, SAWebAcePicture, NSArray;

@interface SAWebImageResult : SAWebWebResult

@property (nonatomic,copy) NSNumber * fileSize; 
@property (nonatomic,retain) SAWebAcePicture * picture; 
@property (nonatomic,copy) NSArray * thumbNails; 
+(id)imageResult;
+(id)imageResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setPicture:(SAWebAcePicture *)arg1 ;
-(SAWebAcePicture *)picture;
-(NSNumber *)fileSize;
-(void)setFileSize:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSArray *)thumbNails;
-(void)setThumbNails:(NSArray *)arg1 ;
@end
