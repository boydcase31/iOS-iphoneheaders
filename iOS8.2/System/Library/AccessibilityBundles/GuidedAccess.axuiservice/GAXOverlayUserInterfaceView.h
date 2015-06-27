/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:22:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <UIKit/UIView.h>

@protocol GAXOverlayUserInterfaceViewDelegate;
@interface GAXOverlayUserInterfaceView : UIView {

	id<GAXOverlayUserInterfaceViewDelegate> _delegate;

}

@property (assign,nonatomic) id<GAXOverlayUserInterfaceViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<GAXOverlayUserInterfaceViewDelegate>)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<GAXOverlayUserInterfaceViewDelegate>)delegate;
@end
