/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:45:05 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreText/CoreText-Structs.h>
#import <CoreFoundation/NSArray.h>

@class NSArray, NSMutableArray;

@interface _CTFontFallbacksArray : NSArray {

	int _lock;
	const TBaseFont* _baseFont;
	unsigned _count;
	NSArray* _cascade;
	NSMutableArray* _fallbacks;

}
-(id)initWithBaseFont:(const TBaseFont*)arg1 cascade:(id)arg2 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_CT1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
@end
