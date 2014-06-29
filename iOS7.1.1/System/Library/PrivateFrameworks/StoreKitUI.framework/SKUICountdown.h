/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSDate, NSString, UIColor, SKUIArtworkList;

@interface SKUICountdown : NSObject {

	bool _isLoaded;
	bool _flapped;
	long long _type;
	NSURL* _URL;
	NSDate* _endDate;
	unsigned long long _dateFormat;
	NSDate* _startDate;
	long long _initialValue;
	long long _finalValue;
	long long _rate;
	NSString* _numberFormat;
	UIColor* _fontColor;
	UIColor* _flapTopColor;
	UIColor* _flapBottomColor;
	SKUIArtworkList* _artworkList;
	SKUIArtworkList* _endArtworkList;

}

@property (assign,nonatomic) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                     //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) unsigned long long dateFormat;                 //@synthesize dateFormat=_dateFormat - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) long long initialValue;                        //@synthesize initialValue=_initialValue - In the implementation block
@property (assign,nonatomic) long long finalValue;                          //@synthesize finalValue=_finalValue - In the implementation block
@property (assign,nonatomic) long long rate;                                //@synthesize rate=_rate - In the implementation block
@property (nonatomic,copy) NSString * numberFormat;                         //@synthesize numberFormat=_numberFormat - In the implementation block
@property (nonatomic,copy) UIColor * fontColor;                             //@synthesize fontColor=_fontColor - In the implementation block
@property (nonatomic,copy) UIColor * flapTopColor;                          //@synthesize flapTopColor=_flapTopColor - In the implementation block
@property (nonatomic,copy) UIColor * flapBottomColor;                       //@synthesize flapBottomColor=_flapBottomColor - In the implementation block
@property (assign,getter=isFlapped,nonatomic) bool flapped;                 //@synthesize flapped=_flapped - In the implementation block
@property (nonatomic,retain) SKUIArtworkList * artworkList;                 //@synthesize artworkList=_artworkList - In the implementation block
@property (nonatomic,retain) SKUIArtworkList * endArtworkList;              //@synthesize endArtworkList=_endArtworkList - In the implementation block
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setDateFormat:(unsigned long long)arg1 ;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(bool)isLoaded;
-(void).cxx_destruct;
-(id)numberFormat;
-(void)setNumberFormat:(id)arg1 ;
-(id)startDate;
-(id)endDate;
-(long long)rate;
-(void)setStartDate:(id)arg1 ;
-(void)setEndDate:(id)arg1 ;
-(id)artworkList;
-(bool)isFlapped;
-(id)flapTopColor;
-(id)flapBottomColor;
-(long long)initialValue;
-(long long)finalValue;
-(void)updateWithDictionary:(id)arg1 ;
-(id)initWithCountdownDictionary:(id)arg1 ;
-(void)setFlapped:(bool)arg1 ;
-(void)setFinalValue:(long long)arg1 ;
-(void)setFlapTopColor:(id)arg1 ;
-(void)setFlapBottomColor:(id)arg1 ;
-(void)setArtworkList:(id)arg1 ;
-(void)setEndArtworkList:(id)arg1 ;
-(void)setInitialValue:(long long)arg1 ;
-(id)endArtworkList;
-(id)fontColor;
-(void)setFontColor:(id)arg1 ;
-(void)setRate:(long long)arg1 ;
-(unsigned long long)dateFormat;
@end
