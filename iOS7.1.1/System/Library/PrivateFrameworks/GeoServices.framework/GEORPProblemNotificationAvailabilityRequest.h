/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CoreFoundation/NSCopying.h>

@class GEOClientCapabilities, NSString, NSData;

@interface GEORPProblemNotificationAvailabilityRequest : PBRequest <NSCopying> {

	SCD_Struct_GE68* _businessIDs;
	SCD_Struct_GE57* _problemTypes;
	GEOClientCapabilities* _clientCapabilities;
	NSString* _countryCode;
	NSData* _devicePushToken;
	int _pinType;
	int _placeType;
	SCD_Struct_GE52 _has;

}

@property (nonatomic,readonly) unsigned long long problemTypesCount; 
@property (nonatomic,readonly) int* problemTypes; 
@property (nonatomic,readonly) bool hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                                  //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) bool hasDevicePushToken; 
@property (nonatomic,retain) NSData * devicePushToken;                                //@synthesize devicePushToken=_devicePushToken - In the implementation block
@property (nonatomic,readonly) bool hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities;              //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (nonatomic,readonly) unsigned long long businessIDsCount; 
@property (nonatomic,readonly) unsigned long long* businessIDs; 
@property (assign,nonatomic) bool hasPlaceType; 
@property (assign,nonatomic) int placeType;                                           //@synthesize placeType=_placeType - In the implementation block
@property (assign,nonatomic) bool hasPinType; 
@property (assign,nonatomic) int pinType;                                             //@synthesize pinType=_pinType - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setCountryCode:(id)arg1 ;
-(void)setClientCapabilities:(id)arg1 ;
-(bool)hasClientCapabilities;
-(id)clientCapabilities;
-(unsigned long long)businessIDsCount;
-(void)clearBusinessIDs;
-(unsigned long long*)businessIDs;
-(void)setBusinessIDs:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setPinType:(int)arg1 ;
-(void)setHasPinType:(bool)arg1 ;
-(bool)hasPinType;
-(int)pinType;
-(bool)hasPlaceType;
-(int)placeType;
-(void)setPlaceType:(int)arg1 ;
-(void)setHasPlaceType:(bool)arg1 ;
-(unsigned long long)problemTypesCount;
-(void)clearProblemTypes;
-(int*)problemTypes;
-(void)setProblemTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setDevicePushToken:(id)arg1 ;
-(bool)hasDevicePushToken;
-(id)devicePushToken;
-(int)problemTypesAtIndex:(unsigned long long)arg1 ;
-(void)addProblemTypes:(int)arg1 ;
-(unsigned long long)businessIDsAtIndex:(unsigned long long)arg1 ;
-(void)addBusinessIDs:(unsigned long long)arg1 ;
-(bool)readFrom:(id)arg1 ;
-(bool)hasCountryCode;
-(id)countryCode;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
