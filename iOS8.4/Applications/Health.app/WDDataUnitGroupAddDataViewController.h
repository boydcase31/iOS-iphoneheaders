/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/WDAddDataViewController.h>
#import <Health/WDManualDataEntryTableViewCellDelegate.h>

@class NSDateFormatter, NSNumberFormatter, NSDate, NSMutableArray, UIDatePicker, WDManualDataEntryTableViewCell;

@interface WDDataUnitGroupAddDataViewController : WDAddDataViewController <WDManualDataEntryTableViewCellDelegate> {

	NSDateFormatter* _dateFormatter;
	NSDateFormatter* _timeFormatter;
	NSNumberFormatter* _numberFormatter;
	NSDate* _entryDate;
	NSDate* _entryTime;
	NSMutableArray* _cells;
	NSMutableArray* _dataEntryCells;
	UIDatePicker* _datePicker;
	UIDatePicker* _timePicker;
	WDManualDataEntryTableViewCell* _dateCell;
	WDManualDataEntryTableViewCell* _timeCell;

}
-(id)initWithDataUnitGroup:(id)arg1 controllerManager:(id)arg2 unitController:(id)arg3 ;
-(void)validateDataWithCompletion:(/*^block*/id)arg1 ;
-(id)generateHKObjects;
-(void)manualDataEntryTableViewCell:(id)arg1 valueDidChangeToValue:(id)arg2 ;
-(id)_timePicker;
-(void)_addDataUnitCells;
-(void)_setDefaultValuesIfNecessary;
-(void)_iterateCellsWithFunction:(/*^block*/id)arg1 ;
-(id)_dateFromPickers;
-(void)_timePickerChanged:(id)arg1 ;
-(void)_updateCellWithCurrentBMI:(id)arg1 ;
-(void)localeDidChange:(id)arg1 ;
-(void)_datePickerChanged:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)_datePicker;
@end
