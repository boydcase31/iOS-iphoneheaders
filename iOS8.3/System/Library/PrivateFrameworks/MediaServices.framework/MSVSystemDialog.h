/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:27:22 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaServices/MediaServices-Structs.h>
@class NSMutableArray, MSVSystemDialogOptions, NSArray;

@interface MSVSystemDialog : NSObject {

	NSMutableArray* _textFields;
	CFUserNotificationRef _presentedUserNotification;
	CFRunLoopSourceRef _activeRunLoopSource;
	/*^block*/id _pendingCompletion;
	MSVSystemDialogOptions* _options;

}

@property (nonatomic,readonly) MSVSystemDialogOptions * options;                           //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSArray * textFields;                                       //@synthesize textFields=_textFields - In the implementation block
@property (assign,nonatomic) CFUserNotificationRef presentedUserNotification; 
@property (assign,nonatomic) CFRunLoopSourceRef activeRunLoopSource; 
@property (nonatomic,copy) id pendingCompletion; 
+(id)systemDialogWithOptions:(id)arg1 ;
+(id)passwordAlertWithOptions:(id)arg1 ;
-(void)dealloc;
-(NSArray *)textFields;
-(MSVSystemDialogOptions *)options;
-(void)presentWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(void)addTextField:(id)arg1 ;
-(void)setPresentedUserNotification:(CFUserNotificationRef)arg1 ;
-(void)setPendingCompletion:(id)arg1 ;
-(void)setActiveRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(CFUserNotificationRef)presentedUserNotification;
-(CFRunLoopSourceRef)activeRunLoopSource;
-(id)pendingCompletion;
-(void)addTextFieldWithTitle:(id)arg1 secure:(char)arg2 ;
-(void)clearTextFields;
@end
