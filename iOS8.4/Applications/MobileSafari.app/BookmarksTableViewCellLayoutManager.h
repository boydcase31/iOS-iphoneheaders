/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UITableViewCellLayoutManager.h>

@interface BookmarksTableViewCellLayoutManager : UITableViewCellLayoutManager {

	char _usesVibrantAppearance;

}

@property (assign,nonatomic) char usesVibrantAppearance;              //@synthesize usesVibrantAppearance=_usesVibrantAppearance - In the implementation block
+(id)sharedManager;
-(char)usesVibrantAppearance;
-(void)setUsesVibrantAppearance:(char)arg1 ;
-(void)layoutSubviewsOfCell:(id)arg1 ;
-(CGRect)accessoryEndingRectForCell:(id)arg1 forNewEditingState:(char)arg2 showingDeleteConfirmation:(char)arg3 ;
-(CGRect)accessoryStartingRectForCell:(id)arg1 forNewEditingState:(char)arg2 showingDeleteConfirmation:(char)arg3 ;
-(CGRect)textRectForCell:(id)arg1 ;
@end
