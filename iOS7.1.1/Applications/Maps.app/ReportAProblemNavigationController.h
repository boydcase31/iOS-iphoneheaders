/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Maps/MapsRAPNotificationsAvailabilityProviderDebugDelegate.h>

@protocol ReportAProblemReporter;
@class RAPiCloudNotifyViewController, MapsMainModeController, SearchResult, MapsRAPNotificationsAvailabilityProvider, UITapGestureRecognizer, RAPDebugNotificationsRequestViewController, UIViewController, NSString;

@interface ReportAProblemNavigationController : UINavigationController <UINavigationControllerDelegate, MapsRAPNotificationsAvailabilityProviderDebugDelegate> {

	RAPiCloudNotifyViewController* _iCloudNotifyViewController;
	/*^block*/ id doneReportingHandler;
	MapsMainModeController* _mapViewController;
	SearchResult* _searchResult;
	BOOL _showCancelButton;
	MapsRAPNotificationsAvailabilityProvider* _notificationsProvider;
	UITapGestureRecognizer* _notificationsDebugGesture;
	RAPDebugNotificationsRequestViewController* _notificationsDebugViewController;
	UIViewController<ReportAProblemReporter>* tableController;
	/*^block*/ id _doneReportingHandler;
	int _finalProblemType;

}

@property (nonatomic,copy) id doneReportingHandler;                                                   //@synthesize doneReportingHandler=_doneReportingHandler - In the implementation block
@property (assign,nonatomic,__weak) MapsMainModeController * mapViewController;                       //@synthesize mapViewController=_mapViewController - In the implementation block
@property (nonatomic,retain) SearchResult * searchResult;                                             //@synthesize searchResult=_searchResult - In the implementation block
@property (assign,nonatomic) BOOL showCancelButton;                                                   //@synthesize showCancelButton=_showCancelButton - In the implementation block
@property (assign,nonatomic) int finalProblemType;                                                    //@synthesize finalProblemType=_finalProblemType - In the implementation block
@property (nonatomic,readonly) NSString * sendButtonTitle; 
@property (nonatomic,retain) UIViewController<ReportAProblemReporter> * tableController; 
+(id)reportAProblemNavigationControllerWithSearchresult:(id)arg1 mapViewController:(id)arg2 showCancelButton:(BOOL)arg3 ;
+(BOOL)canShowNavigationControllerForSearchResult:(id)arg1 ;
+(BOOL)isFeatureVisible:(id)arg1 ;
+(id)_categoriesForSearchResult:(id)arg1 ;
+(BOOL)shouldOfferNotificationsForSearchResult:(id)arg1 asNewPOI:(BOOL)arg2 ;
+(int)displayStyle;
-(void)setSearchResult:(id)arg1 ;
-(void)notificationsAvailabilityProvider:(id)arg1 simulateServerRequestForCountryCode:(id)arg2 problemTypes:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(void)setTableController:(id)arg1 ;
-(void)setMapViewController:(id)arg1 ;
-(void)noteUserWillReportProblemWithPossibleTypes:(id)arg1 forSearchResult:(id)arg2 ;
-(void)_noteSendButtonTitleDidChangeForViewController:(id)arg1 ;
-(void)_doneReporting:(BOOL)arg1 ;
-(id)getEmptyRequest;
-(id)tableController;
-(void)_fillRPProblemContext:(id)arg1 ;
-(void)_sendRPReport:(id)arg1 request:(id)arg2 ;
-(void)_fileRadarWithRPProblem:(id)arg1 ;
-(void)setDoneReportingHandler:(/*^block*/ id)arg1 ;
-(int)finalProblemType;
-(id)iCloudNotifyViewController;
-(void)sendReport;
-(void)noteUserWillReportProblemWithPossibleTypes:(id)arg1 inCountryWithCode:(id)arg2 businessIDs:(id)arg3 placeType:(int*)arg4 pinType:(int*)arg5 ;
-(void)setFinalProblemType:(int)arg1 ;
-(BOOL)hasICloudLogin;
-(void)_dismissPendingSimulatedAvailabilityRequestViewController;
-(void)_showPendingSimulatedAvailabilityRequestViewController;
-(void)sendProblem;
-(id)sendButtonTitle;
-(void)noteUserWillReportProblemWithPossibleTypes:(id)arg1 ;
-(void)cancelProblem;
-(id)_problemDescriptionForProblem:(id)arg1 ;
-(/*^block*/ id)doneReportingHandler;
-(id)mapViewController;
-(void)setShowCancelButton:(BOOL)arg1 ;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)initWithRootViewController:(id)arg1 ;
-(void).cxx_destruct;
-(BOOL)showCancelButton;
-(id)devicePushToken;
-(id)mapView;
-(id)searchResult;
@end
