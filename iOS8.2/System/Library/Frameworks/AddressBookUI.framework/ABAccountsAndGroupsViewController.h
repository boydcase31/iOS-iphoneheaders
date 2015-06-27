/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABAbstractViewController.h>
#import <UIKit/UITableViewDelegate.h>

@class UIRefreshControl, ABAccountsAndGroupDataSource, ABPeoplePickerNavigationController, NSString;

@interface ABAccountsAndGroupsViewController : ABAbstractViewController <UITableViewDelegate> {

	UIRefreshControl* _refreshControl;
	ABAccountsAndGroupDataSource* _dataSource;
	char _needsReload;
	char _tableViewNeedsReloadAfterResume;
	char _showsRefreshButton;
	ABPeoplePickerNavigationController* _peoplePickerNavigationController;

}

@property (nonatomic,readonly) ABAccountsAndGroupDataSource * dataSource;                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) ABPeoplePickerNavigationController * peoplePickerNavigationController;              //@synthesize peoplePickerNavigationController=_peoplePickerNavigationController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ABPeoplePickerNavigationController *)peoplePickerNavigationController;
-(char)hidesSearchableSources;
-(char)hidesGlobalGroupWrapper;
-(void)setHidesSearchableSources:(char)arg1 ;
-(void)setHidesGlobalGroupWrapper:(char)arg1 ;
-(void)updateRefreshButton;
-(void)refreshEverythingNow;
-(void)_updateDisplayedContactsFilterFromSelection;
-(int)abViewControllerType;
-(void)modelDatabaseChange:(id)arg1 ;
-(void)setPeoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(ABAccountsAndGroupDataSource *)dataSource;
-(void)applicationDidResume;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)model;
-(void)setModel:(id)arg1 ;
-(void)done:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
@end
