/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/AXCaptionStyleChooserController.h>

@class NSMutableArray;

@interface AXCaptioningThemeController : AXCaptionStyleChooserController {

	NSMutableArray* _editableHiddenSpecifiers;
	NSMutableArray* _editableVisibleSpecifiers;
	BOOL _isEditingTable;
	NSMutableArray* _customProfiles;
	NSMutableArray* _defaultProfiles;

}

@property (nonatomic,retain) NSMutableArray * customProfiles;               //@synthesize customProfiles=_customProfiles - In the implementation block
@property (nonatomic,retain) NSMutableArray * defaultProfiles;              //@synthesize defaultProfiles=_defaultProfiles - In the implementation block
-(NSMutableArray *)defaultProfiles;
-(NSMutableArray *)customProfiles;
-(void)_editPressed;
-(void)_addEditButton;
-(void)_selectProfile:(id)arg1 ;
-(void)setCustomProfiles:(NSMutableArray *)arg1 ;
-(void)setDefaultProfiles:(NSMutableArray *)arg1 ;
-(void)_themeCountChanged:(id)arg1 ;
-(void)_resetActiveProfileToDefault;
-(BOOL)_profileOverridesStyle:(CFStringRef)arg1 ;
-(void)_manageHiddenSpecifiers:(BOOL)arg1 editing:(BOOL)arg2 ;
-(void)_setVideoOverridesStyle:(id)arg1 specifier:(id)arg2 ;
-(id)_videoOverridesStyle:(id)arg1 ;
-(void)_donePressed;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)specifiers;
@end
