/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:06 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKProductPageViewControllerDelegate <NSObject>
@optional
-(void)productPage:(id)arg1 didReceiveTitle:(id)arg2;
-(void)productPageDidFinishLoad:(id)arg1;
-(void)productPage:(id)arg1 purchaseBatchFailedWithError:(id)arg2;
-(void)productPage:(id)arg1 willMakePurchases:(id)arg2;
-(void)productPage:(id)arg1 didFinishPurchase:(id)arg2 withError:(id)arg3;
-(void)productPage:(id)arg1 didFinishWithResult:(long long)arg2;
-(void)productPage:(id)arg1 presentProductPage:(id)arg2 animated:(BOOL)arg3;
-(void)productPage:(id)arg1 didFailLoadWithError:(id)arg2;

@end
