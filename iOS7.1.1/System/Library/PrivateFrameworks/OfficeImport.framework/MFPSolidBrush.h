/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/MFPBrush.h>

@class TSUColor;

@interface MFPSolidBrush : MFPBrush {

	TSUColor* mColor;

}
-(void)dealloc;
-(id)color;
-(void)setColor:(id)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(void)fillPath:(id)arg1 evenOddRule:(bool)arg2 ;
@end
