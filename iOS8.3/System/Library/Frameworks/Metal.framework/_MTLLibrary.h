/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:01:10 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLLibrary.h>

@protocol MTLDevice;
@class NSString, NSArray, NSMutableDictionary;

@interface _MTLLibrary : NSObject <MTLLibrary> {

	NSString* _label;
	id<MTLDevice> _device;
	NSArray* _functionNames;
	NSMutableDictionary* _functionDictionary;
	MTLLibraryData* _libraryData;

}

@property (copy) NSString * label;                                                  //@synthesize label=_label - In the implementation block
@property (readonly) id<MTLDevice> device;                                          //@synthesize device=_device - In the implementation block
@property (readonly) NSArray * functionNames;                                       //@synthesize functionNames=_functionNames - In the implementation block
@property (readonly) MTLLibraryData* libraryData;                                   //@synthesize libraryData=_libraryData - In the implementation block
@property (assign,nonatomic) NSMutableDictionary * functionDictionary;              //@synthesize functionDictionary=_functionDictionary - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)unloadShaderCaches;
+(SCD_Struct_MT30)libraryCacheStats;
+(SCD_Struct_MT30)pipelineCacheStats;
-(id)initWithFile:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(id)initWithDefaultBundle:(id)arg1 ;
-(id)initWithData:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(id)initWithSource:(id)arg1 options:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
-(id)initWithSource:(id)arg1 options:(id)arg2 device:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(MTLLibraryData*)libraryData;
-(NSArray *)functionNames;
-(id)initWithSharedLibrary:(id)arg1 device:(id)arg2 ;
-(NSMutableDictionary *)functionDictionary;
-(void)setFunctionDictionary:(NSMutableDictionary *)arg1 ;
-(id)newFunctionWithName:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id<MTLDevice>)device;
@end
