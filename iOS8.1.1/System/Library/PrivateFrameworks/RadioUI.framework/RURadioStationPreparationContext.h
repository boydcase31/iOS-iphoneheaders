/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class RadioGetTracksResponse, NSMapTable, RadioStation, NSArray, NSDate;

@interface RURadioStationPreparationContext : NSObject {

	RadioGetTracksResponse* _getTracksResponse;
	NSMapTable* _preparedAdSlotByRadioTrack;
	RadioStation* _station;

}

@property (nonatomic,copy,readonly) NSArray * allPreparedAdSlotRadioTracks; 
@property (nonatomic,readonly) BOOL shouldIncrementSkipCount; 
@property (nonatomic,readonly) NSDate * skipDate; 
@property (nonatomic,readonly) RadioStation * station;                                   //@synthesize station=_station - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tracks; 
-(BOOL)shouldIncrementSkipCount;
-(NSDate *)skipDate;
-(id)initWithGetTracksResponse:(id)arg1 station:(id)arg2 ;
-(NSArray *)allPreparedAdSlotRadioTracks;
-(id)preparedAdSlotForRadioTrack:(id)arg1 ;
-(void)addPreparedAdSlot:(id)arg1 forRadioTrack:(id)arg2 ;
-(RadioStation *)station;
-(NSArray *)tracks;
@end
