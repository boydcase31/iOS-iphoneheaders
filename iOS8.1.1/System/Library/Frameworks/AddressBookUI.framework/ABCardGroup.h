/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/NSCopying.h>

@class NSMutableArray, NSArray, CNContact, NSString;

@interface ABCardGroup : NSObject <NSCopying> {

	NSMutableArray* _items;
	NSMutableArray* _actions;
	NSArray* _actionItems;
	BOOL _useSplitActions;
	BOOL _addSpacerFromPreviousGroup;
	CNContact* _contact;
	NSString* _title;

}

@property (nonatomic,retain) CNContact * contact;                          //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSArray * actionItems; 
@property (nonatomic,readonly) NSArray * displayItems; 
@property (nonatomic,readonly) NSArray * editingItems; 
@property (nonatomic,readonly) NSArray * actions;                          //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL useSplitActions;                         //@synthesize useSplitActions=_useSplitActions - In the implementation block
@property (assign,nonatomic) BOOL addSpacerFromPreviousGroup;              //@synthesize addSpacerFromPreviousGroup=_addSpacerFromPreviousGroup - In the implementation block
+(id)groupForContact:(id)arg1 ;
-(NSArray *)displayItems;
-(id)initWithContact:(id)arg1 ;
-(id)_loadActionItems;
-(void)removeActionWithTitle:(id)arg1 ;
-(void)addAction:(id)arg1 withTitle:(id)arg2 ;
-(id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4 ;
-(BOOL)useSplitActions;
-(NSArray *)editingItems;
-(NSArray *)actionItems;
-(id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)addAction:(id)arg1 withTitle:(id)arg2 color:(id)arg3 transportType:(long long)arg4 ;
-(void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setUseSplitActions:(BOOL)arg1 ;
-(BOOL)addSpacerFromPreviousGroup;
-(void)setAddSpacerFromPreviousGroup:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
-(NSArray *)actions;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
