/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface PKPaymentOptionGroup : NSObject {

	BOOL _editable;
	NSArray* _items;
	NSString* _groupType;
	NSString* _groupDisplayName;
	NSString* _readOnlyDisplayName;
	NSString* _groupDisplayMode;
	long long _indexForSelectedItem;
	/*^block*/id _selectionChangedHandler;

}

@property (nonatomic,retain) NSArray * items;                                  //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSString * groupType;                               //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,retain) NSString * groupDisplayName;                      //@synthesize groupDisplayName=_groupDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * addNewDisplayName; 
@property (nonatomic,readonly) NSString * addExistingDisplayName; 
@property (nonatomic,readonly) NSString * abTitleDisplayName; 
@property (nonatomic,retain) NSString * readOnlyDisplayName;                   //@synthesize readOnlyDisplayName=_readOnlyDisplayName - In the implementation block
@property (nonatomic,retain) NSString * groupDisplayMode;                      //@synthesize groupDisplayMode=_groupDisplayMode - In the implementation block
@property (assign,nonatomic) long long indexForSelectedItem;                   //@synthesize indexForSelectedItem=_indexForSelectedItem - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable;                  //@synthesize editable=_editable - In the implementation block
@property (nonatomic,copy) id selectionChangedHandler;                         //@synthesize selectionChangedHandler=_selectionChangedHandler - In the implementation block
-(void)setGroupType:(NSString *)arg1 ;
-(void)setGroupDisplayMode:(NSString *)arg1 ;
-(void)setReadOnlyDisplayName:(NSString *)arg1 ;
-(long long)indexForSelectedItem;
-(void)setSelectionChangedHandler:(id)arg1 ;
-(NSString *)addNewDisplayName;
-(NSString *)addExistingDisplayName;
-(void)setIndexForSelectedItem:(long long)arg1 ;
-(NSString *)groupType;
-(void)prependGroupItem:(id)arg1 promoteAndCoalesceDupes:(BOOL)arg2 ;
-(id)selectionChangedHandler;
-(void)prependGroupItems:(id)arg1 afterItem:(id)arg2 ;
-(NSString *)readOnlyDisplayName;
-(void)removeGroupItem:(id)arg1 ;
-(NSString *)groupDisplayName;
-(NSString *)abTitleDisplayName;
-(void)setGroupDisplayName:(NSString *)arg1 ;
-(NSString *)groupDisplayMode;
-(void)dealloc;
-(id)init;
-(BOOL)isEditable;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
@end

