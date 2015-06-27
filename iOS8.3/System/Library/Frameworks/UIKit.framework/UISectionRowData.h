/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:48 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSCopying.h>

@class NSMutableIndexSet, UITableViewRowData;

@interface UISectionRowData : NSObject <NSCopying> {

	char _valid;
	float _headerHeight;
	float _maxHeaderTitleWidth;
	float _footerHeight;
	float _maxFooterTitleWidth;
	float _headerOffset;
	float _footerOffset;
	unsigned _numRows;
	unsigned _arrayLength;
	float* _rowHeights;
	NSMutableIndexSet* _forcedNegativeRows;
	float* _rowOffsets;
	char _estimatesRowHeights;
	float _sectionHeight;
	int _headerAlignment;
	int _footerAlignment;
	UITableViewRowData* _rowData;
	char _sectionOffsetValid;
	float _sectionOffset;
	int _sectionRowOffset;

}
-(void)dealloc;
-(void)invalidate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)heightForHeaderInSection:(int)arg1 canGuess:(char)arg2 ;
-(float)heightForFooterInSection:(int)arg1 canGuess:(char)arg2 ;
-(float)heightForRow:(int)arg1 inSection:(int)arg2 canGuess:(char)arg3 ;
-(void)invalidateSectionOffset;
-(void)updateSectionHeightWithDelta:(float)arg1 section:(int)arg2 updateFooterOffset:(char)arg3 ;
-(float)_headerOrFooterSizeForTable:(id)arg1 title:(id)arg2 detailText:(id)arg3 isHeader:(char)arg4 stripPaddingForAbuttingView:(char)arg5 isTopHeader:(char)arg6 ;
-(float)heightForEmptySection:(int)arg1 inTableView:(id)arg2 rowData:(id)arg3 ;
-(float)_defaultSectionHeaderHeightForSection:(int)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3 ;
-(float)_defaultSectionFooterHeightForSection:(int)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3 ;
-(void)deleteRowAtIndex:(int)arg1 ;
-(void)addOffset:(float)arg1 fromRow:(int)arg2 ;
-(float)offsetForRow:(int)arg1 ;
-(int)_rowForPoint:(CGPoint)arg1 beginningWithRow:(int)arg2 numberOfRows:(int)arg3 ;
-(id)initWithRowData:(id)arg1 ;
-(void)setHeight:(float)arg1 forRow:(int)arg2 ;
-(void)refreshWithSection:(int)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3 ;
-(void)insertRowAtIndex:(int)arg1 inSection:(int)arg2 rowHeight:(float)arg3 tableViewRowData:(id)arg4 ;
-(int)sectionLocationForRow:(int)arg1 ;
-(int)sectionLocationForReorderedRow:(int)arg1 ;
-(int)rowForPoint:(CGPoint)arg1 ;
@end
