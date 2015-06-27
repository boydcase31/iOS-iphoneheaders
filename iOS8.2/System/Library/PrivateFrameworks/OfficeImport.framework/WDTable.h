/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:40 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/WDBlock.h>

@class WDTableProperties, NSMutableArray;

@interface WDTable : WDBlock {

	WDTableProperties* mProperties;
	NSMutableArray* mRows;

}
-(void)clearProperties;
-(void)dealloc;
-(id)description;
-(id)properties;
-(id)initWithText:(id)arg1 ;
-(int)blockType;
-(unsigned)rowCount;
-(id)rowAt:(unsigned)arg1 ;
-(id)addRow;
-(int)nestingLevel;
-(id)rowIterator;
-(id)newRowIterator;
-(id)cellIterator;
-(id)newCellIterator;
-(id)insertRowAtIndex:(unsigned)arg1 ;
-(void)clearRows;
-(id)newRunIterator;
-(id)runIterator;
@end
