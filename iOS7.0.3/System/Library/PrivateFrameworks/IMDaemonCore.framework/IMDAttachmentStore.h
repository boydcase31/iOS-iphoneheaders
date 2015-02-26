/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface IMDAttachmentStore : NSObject
+(id)sharedInstance;
-(BOOL)updateAttachment:(id)arg1 ;
-(BOOL)storeAttachment:(id)arg1 associateWithMessageWithGUID:(id)arg2 ;
-(id)attachmentWithGUID:(id)arg1 ;
-(BOOL)removeAttachment:(id)arg1 fromMessageWithGUID:(id)arg2 ;
-(BOOL)deleteAttachmentsWithGUIDs:(id)arg1 ;
-(BOOL)deleteAttachmentDataForTransfer:(id)arg1 ;
-(BOOL)deleteAttachmentWithGUID:(id)arg1 ;
@end
