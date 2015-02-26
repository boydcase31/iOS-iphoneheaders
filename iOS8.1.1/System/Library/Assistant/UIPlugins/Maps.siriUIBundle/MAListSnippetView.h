/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Maps/MAResultViewDelegate.h>

@protocol MAListSnippetViewDelegate;
@class NSArray, UITableView, NSMutableArray, CLLocation, MAAttributionView, NSMutableSet, NSString;

@interface MAListSnippetView : UIView <UITableViewDataSource, UITableViewDelegate, MAResultViewDelegate> {

	NSArray* _mapsItems;
	UITableView* _tableView;
	NSMutableArray* _attributions;
	CLLocation* _userLocation;
	BOOL _itemsCanPunchOut;
	MAAttributionView* _attributionView;
	NSMutableSet* _cellSet;
	NSArray* _mapItems;
	id<MAListSnippetViewDelegate> delegate;

}

@property (nonatomic,readonly) MAAttributionView * attributionView;                      //@synthesize attributionView=_attributionView - In the implementation block
@property (assign,nonatomic,__weak) id<MAListSnippetViewDelegate> delegate; 
@property (nonatomic,readonly) NSArray * mapItems;                                       //@synthesize mapItems=_mapItems - In the implementation block
@property (nonatomic,retain) CLLocation * userLocation; 
@property (assign,nonatomic) BOOL itemsCanPunchOut;                                      //@synthesize itemsCanPunchOut=_itemsCanPunchOut - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTaponMapsForMapItem:(id)arg1 ;
-(void)_reviewsCellButtonTapped;
-(void)didTapOnReviewsForMapItem:(id)arg1 ;
-(MAAttributionView *)attributionView;
-(BOOL)itemsCanPunchOut;
-(id)initWithFrame:(CGRect)arg1 mapItems:(id)arg2 ;
-(void)setItemsCanPunchOut:(BOOL)arg1 ;
-(NSArray *)mapItems;
-(CLLocation *)userLocation;
-(void)dealloc;
-(void)setDelegate:(id<MAListSnippetViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<MAListSnippetViewDelegate>)delegate;
-(double)desiredHeight;
-(void)setUserLocation:(CLLocation *)arg1 ;
@end
