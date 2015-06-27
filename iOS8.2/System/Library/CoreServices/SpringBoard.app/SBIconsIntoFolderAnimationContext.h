/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBFolderIcon, NSArray;

@interface SBIconsIntoFolderAnimationContext : NSObject {

	SBFolderIcon* _folderIcon;
	NSArray* _iconSnapshots;
	NSArray* _miniSnapshots;
	NSArray* _addedIcons;
	char _openFolderOnFinish;
	/*^block*/id _completeBlock;

}

@property (nonatomic,retain) SBFolderIcon * folderIcon;              //@synthesize folderIcon=_folderIcon - In the implementation block
@property (nonatomic,retain) NSArray * iconSnapshots;                //@synthesize iconSnapshots=_iconSnapshots - In the implementation block
@property (nonatomic,retain) NSArray * miniSnapshots;                //@synthesize miniSnapshots=_miniSnapshots - In the implementation block
@property (nonatomic,retain) NSArray * addedIcons;                   //@synthesize addedIcons=_addedIcons - In the implementation block
@property (assign,nonatomic) char openFolderOnFinish;                //@synthesize openFolderOnFinish=_openFolderOnFinish - In the implementation block
@property (nonatomic,copy) id completeBlock;                         //@synthesize completeBlock=_completeBlock - In the implementation block
-(void)setFolderIcon:(SBFolderIcon *)arg1 ;
-(void)setAddedIcons:(NSArray *)arg1 ;
-(void)setIconSnapshots:(NSArray *)arg1 ;
-(void)setMiniSnapshots:(NSArray *)arg1 ;
-(void)setOpenFolderOnFinish:(char)arg1 ;
-(void)setCompleteBlock:(id)arg1 ;
-(SBFolderIcon *)folderIcon;
-(NSArray *)iconSnapshots;
-(NSArray *)miniSnapshots;
-(char)openFolderOnFinish;
-(id)completeBlock;
-(NSArray *)addedIcons;
-(void)dealloc;
@end
