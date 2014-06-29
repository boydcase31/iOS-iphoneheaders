/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RUIElement.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSMutableArray, UITableView, UIPickerView, UIDatePicker, _UIBackdropView, RUITableViewRow, RUIObjectModel, RUITableHeaderView, NSDictionary, NSString;

@interface RUITableView : RUIElement <UITableViewDataSource, UITableViewDelegate, UIWebViewDelegate> {

	NSMutableArray* _sections;
	UITableView* _tableView;
	UIPickerView* _selectPicker;
	bool _showSelectPicker;
	UIDatePicker* _datePicker;
	bool _showDatePicker;
	_UIBackdropView* _pickerBackdrop;
	RUITableViewRow* _defaultFirstResponderRow;
	bool _viewShrunk;
	RUIObjectModel* _objectModel;
	bool _registeredForNotifications;
	float _lastLayoutWidth;
	float _fullscreenCellHeight;
	RUITableHeaderView* _headerView;
	NSDictionary* _headerViewAttributes;
	NSDictionary* _footerViewAttributes;

}

@property (getter=isShowingPicker,nonatomic,readonly) bool showingPicker; 
@property (nonatomic,readonly) NSMutableArray * sections;                              //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) RUITableViewRow * defaultFirstResponderRow;               //@synthesize defaultFirstResponderRow=_defaultFirstResponderRow - In the implementation block
@property (assign,nonatomic) RUIObjectModel * objectModel;                             //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,readonly) RUITableHeaderView * headerView;                        //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSDictionary * headerViewAttributes;                      //@synthesize headerViewAttributes=_headerViewAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * footerViewAttributes;                      //@synthesize footerViewAttributes=_footerViewAttributes - In the implementation block
@property (nonatomic,retain) NSString * headerTitle; 
-(id)sourceURL;
-(void)dealloc;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(id)headerView;
-(bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(id)tableView;
-(id)headerTitle;
-(void)setHeaderTitle:(id)arg1 ;
-(id)sections;
-(void)setAttributes:(id)arg1 ;
-(id)indexPathForRow:(id)arg1 ;
-(bool)isShowingPicker;
-(id)objectModel;
-(void)setObjectModel:(id)arg1 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(void)viewDidLayout;
-(id)objectModelRowForIndexPath:(id)arg1 ;
-(void)setHeaderViewAttributes:(id)arg1 ;
-(void)setFooterViewAttributes:(id)arg1 ;
-(Class)tableCellClassForTableViewRow:(id)arg1 ;
-(void)textFieldStartedEditing:(id)arg1 ;
-(id)sourceURLForRUITableViewRow;
-(void)rowIsFirstResponder:(id)arg1 ;
-(void)rowDidChange:(id)arg1 ;
-(void)rowDidEndEditing:(id)arg1 ;
-(id)textFieldRow:(id)arg1 changeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)sectionActivatedLink:(id)arg1 attributes:(id)arg2 ;
-(id)sourceURLForRUITableViewSection;
-(void)automaticKeyboardDidShow:(id)arg1 ;
-(void)automaticKeyboardDidHide:(id)arg1 ;
-(void)setDefaultFirstResponderRow:(id)arg1 ;
-(void)_registerForNotifications:(bool)arg1 ;
-(id)defaultFirstResponderRow;
-(void)activateRowAtIndexPath:(id)arg1 animated:(bool)arg2 ;
-(void)_clearPickers;
-(CGRect)_selectPickerFrame;
-(void)_setBottomInset:(float)arg1 ;
-(void)sectionActivatedButton:(id)arg1 attributes:(id)arg2 ;
-(id)headerViewAttributes;
-(id)footerViewAttributes;
-(void)_textChanged:(id)arg1 ;
@end
