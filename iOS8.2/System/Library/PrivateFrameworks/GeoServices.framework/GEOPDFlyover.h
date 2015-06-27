/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOPDFlyover : PBCodable <NSCopying> {

	SCD_Struct_GE157* _cameraPaths;
	unsigned _cameraPathsCount;
	unsigned _cameraPathsSpace;
	SCD_Struct_GE158* _labelFrames;
	unsigned _labelFramesCount;
	unsigned _labelFramesSpace;
	NSMutableArray* _labels;
	NSMutableArray* _notificationMessages;
	char _useSplines;
	SCD_Struct_GE4 _has;

}

@property (nonatomic,readonly) unsigned cameraPathsCount; 
@property (nonatomic,readonly) SCD_Struct_GE157* cameraPaths; 
@property (assign,nonatomic) char hasUseSplines; 
@property (assign,nonatomic) char useSplines;                                    //@synthesize useSplines=_useSplines - In the implementation block
@property (nonatomic,readonly) unsigned labelFramesCount; 
@property (nonatomic,readonly) SCD_Struct_GE158* labelFrames; 
@property (nonatomic,retain) NSMutableArray * labels;                            //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationMessages;              //@synthesize notificationMessages=_notificationMessages - In the implementation block
+(id)flyoverForPlaceData:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)notificationMessages;
-(id)bestLocalizedAnnouncementMessage;
-(void)setLabels:(NSMutableArray *)arg1 ;
-(void)clearCameraPaths;
-(void)clearLabelFrames;
-(void)setNotificationMessages:(NSMutableArray *)arg1 ;
-(void)addLabel:(id)arg1 ;
-(void)addNotificationMessage:(id)arg1 ;
-(void)addLabelFrame:(SCD_Struct_GE158)arg1 ;
-(unsigned)labelsCount;
-(void)clearLabels;
-(unsigned)notificationMessagesCount;
-(void)clearNotificationMessages;
-(id)notificationMessageAtIndex:(unsigned)arg1 ;
-(SCD_Struct_GE157*)cameraPaths;
-(void)setCameraPaths:(SCD_Struct_GE157*)arg1 count:(unsigned)arg2 ;
-(void)setUseSplines:(char)arg1 ;
-(void)setHasUseSplines:(char)arg1 ;
-(char)hasUseSplines;
-(SCD_Struct_GE158*)labelFrames;
-(void)setLabelFrames:(SCD_Struct_GE158*)arg1 count:(unsigned)arg2 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(SCD_Struct_GE157)cameraPathAtIndex:(unsigned)arg1 ;
-(unsigned)cameraPathsCount;
-(void)addCameraPath:(SCD_Struct_GE157)arg1 ;
-(char)useSplines;
-(unsigned)labelFramesCount;
-(SCD_Struct_GE158)labelFrameAtIndex:(unsigned)arg1 ;
-(id)labelAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)labels;
@end
