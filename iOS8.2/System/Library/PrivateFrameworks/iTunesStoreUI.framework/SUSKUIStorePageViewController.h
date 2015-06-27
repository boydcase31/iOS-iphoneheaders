/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>
#import <iTunesStoreUI/SKUIIPhoneProductPageDelegate.h>
#import <iTunesStoreUI/SKStoreProductViewControllerDelegatePrivate.h>

@class UIViewController, SKUIIPhoneProductPageViewController, SKStoreProductViewController, SKUIStorePageViewController, NSString;

@interface SUSKUIStorePageViewController : SUViewController <SKUIIPhoneProductPageDelegate, SKStoreProductViewControllerDelegatePrivate> {

	UIViewController* _activeChildViewController;
	SKUIIPhoneProductPageViewController* _iphoneProductPageViewController;
	SKStoreProductViewController* _remoteProductViewController;
	SKUIStorePageViewController* _storePageViewController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)dismissAnimated:(char)arg1 ;
-(id)initWithSection:(id)arg1 ;
-(void)_loadClientContextWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)iPhoneProductPage:(id)arg1 shouldOpenItem:(id)arg2 ;
-(char)iPhoneProductPage:(id)arg1 shouldOpenURL:(id)arg2 ;
-(void)reloadWithStorePage:(id)arg1 forURL:(id)arg2 ;
-(void)_showProductPageWithPageDictionary:(id)arg1 ;
-(void)_showStorePageWithPageDictionary:(id)arg1 ;
-(void)_setActiveChildViewController:(id)arg1 ;
-(void)_showRemoteViewControllerWithPageDictionary:(id)arg1 ;
-(void)_showIPhoneProductPageWithPage:(id)arg1 clientContext:(id)arg2 ;
-(void)productViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
-(void)productViewController:(id)arg1 presentProductWithRequest:(id)arg2 animated:(char)arg3 ;
@end
