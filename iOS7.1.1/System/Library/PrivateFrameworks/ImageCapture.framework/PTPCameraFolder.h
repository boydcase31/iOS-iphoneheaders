/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageCapture/ICCameraFolder.h>

@class NSString;

@interface PTPCameraFolder : ICCameraFolder {

	void* _ptpCameraFolderProperties;
	NSString* _path;

}

@property (readonly) unsigned long long type; 
@property (readonly) unsigned storageID; 
@property (readonly) unsigned objHandle; 
@property (copy) id info; 
@property (retain) NSString * path;                        //@synthesize path=_path - In the implementation block
-(void)dealloc;
-(id)description;
-(unsigned long long)type;
-(id)path;
-(id)info;
-(void)setPath:(id)arg1 ;
-(void)setInfo:(id)arg1 ;
-(void)enumerateContent;
-(bool)deleteItemFromCamera:(id)arg1 ;
-(unsigned)objHandle;
-(id)itemForObjectHandle:(unsigned)arg1 ;
-(id)folderForObjectHandle:(unsigned)arg1 ;
-(unsigned)storageID;
-(id)folderForObjectHandleCreatingIfNeeded:(unsigned)arg1 addUsedObjectIDs:(id)arg2 numFoldersCreated:(int*)arg3 ;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 type:(unsigned long long)arg4 storageID:(unsigned)arg5 objectHandle:(unsigned)arg6 ;
-(bool)hasDCIMParent;
-(void)refreshInfo;
-(void)finalize;
@end
