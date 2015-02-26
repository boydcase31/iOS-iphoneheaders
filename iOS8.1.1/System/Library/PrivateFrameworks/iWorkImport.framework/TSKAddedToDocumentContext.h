/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSKAddedToDocumentContext : NSObject
+(id)movingContext;
+(id)unhidingContext;
+(id)unarchivingContext;
+(id)importingContextWithImporterID:(id)arg1 ;
+(id)importingMasterTemplateContextWithImporterID:(id)arg1 ;
+(id)pastingContext;
+(id)pastingMatchStyleContext;
+(id)dragMoveContext;
+(id)moveSectionContext;
+(id)dragCopyContext;
+(id)insertingPrototypeContext;
+(id)undoDeleteContext;
+(id)exportFootnoteContext;
+(id)changeTrackingSubstorageForCopyContext;
-(BOOL)wasUnarchived;
-(BOOL)autoUpdateSmartFields;
-(id)importerID;
-(BOOL)wasImportedFromMasterTemplate;
-(id)addedDrawables;
-(CFDictionaryRef)tableIDMap;
-(void)setTableIDMap:(CFDictionaryRef)arg1 ;
-(BOOL)wasPasted;
-(BOOL)uniqueBookmarks;
-(BOOL)syncChanges;
-(BOOL)matchStyle;
-(BOOL)wasDragOperation;
-(BOOL)wasDragMoved;
-(BOOL)preserveChangeTracking;
-(BOOL)wasMoved;
-(id)undoContext;
-(BOOL)wasUnhidden;
-(BOOL)wasUndoDelete;
-(BOOL)changeTrackingSubstorage;
-(BOOL)wasImported;
-(BOOL)invokeDOLC;
-(void)addDrawable:(id)arg1 ;
@end
