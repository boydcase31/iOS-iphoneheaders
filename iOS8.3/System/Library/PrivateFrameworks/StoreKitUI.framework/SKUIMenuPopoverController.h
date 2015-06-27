/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:53 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIMenuViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol SKUIMenuPopoverDelegate;
@class SKUIMenuViewController, UIPopoverController, NSArray, NSString;

@interface SKUIMenuPopoverController : NSObject <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {

	id<SKUIMenuPopoverDelegate> _delegate;
	SKUIMenuViewController* _menuViewController;
	UIPopoverController* _popoverController;

}

@property (nonatomic,readonly) NSArray * menuTitles; 
@property (assign,nonatomic,__weak) id<SKUIMenuPopoverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<SKUIMenuPopoverDelegate>)arg1 ;
-(id<SKUIMenuPopoverDelegate>)delegate;
-(void)dismissAnimated:(char)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(id)initWithMenuTitles:(id)arg1 selectedIndex:(int)arg2 ;
-(void)presentFromRect:(CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned)arg3 animated:(char)arg4 ;
-(id)initWithMenuTitles:(id)arg1 ;
-(void)_destroyPopoverController;
-(NSArray *)menuTitles;
-(void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2 ;
@end
