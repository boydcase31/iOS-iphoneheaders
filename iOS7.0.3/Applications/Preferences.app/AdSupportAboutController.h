/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView;

@interface AdSupportAboutController : UIViewController <UIWebViewDelegate> {

	UIWebView* _webView;

}

@property (nonatomic,retain) UIWebView * webView;              //@synthesize webView=_webView - In the implementation block
-(void)showErrorAlert;
-(BOOL)isAdSupportURLReachable;
-(id)localizedStringFromDictionary:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)webView;
-(void)setWebView:(id)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)viewWillDisappear;
@end
