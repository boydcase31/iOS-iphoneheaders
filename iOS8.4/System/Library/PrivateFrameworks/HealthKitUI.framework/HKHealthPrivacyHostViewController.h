/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <HealthKitUI/HKHealthPrivacyHostRemoteViewController.h>

@protocol HKHealthPrivacyHostViewControllerDelegate;
@interface HKHealthPrivacyHostViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController> {

	id<HKHealthPrivacyHostViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HKHealthPrivacyHostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)requestRemoteViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<HKHealthPrivacyHostViewControllerDelegate>)arg1 ;
-(id<HKHealthPrivacyHostViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id)_healthPrivacyServiceViewControllerProxy;
-(void)setSessionIdentifier:(id)arg1 updateDescription:(id)arg2 shareDescription:(id)arg3 ;
-(void)didFinishWithError:(id)arg1 ;
@end
