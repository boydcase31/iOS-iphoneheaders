/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@class NSArray;

@interface TSAAnnotationCache : TSPObject {

	NSArray* _annotations;

}

@property (nonatomic,copy) NSArray * annotations; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(AnnotationCacheArchive*)arg1 archiver:(id)arg2 ;
-(void)documentDidLoad;
-(void)loadFromArchive:(const AnnotationCacheArchive*)arg1 unarchiver:(id)arg2 ;
-(void)documentWillUnload;
-(NSArray *)annotations;
-(void)dealloc;
-(id)init;
-(void)setAnnotations:(NSArray *)arg1 ;
@end
