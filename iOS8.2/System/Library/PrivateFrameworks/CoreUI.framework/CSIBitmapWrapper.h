/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:54 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSData;

@interface CSIBitmapWrapper : NSObject {

	CGContextRef _bitmapContext;
	NSData* _pixelData;
	NSData* _rawData;
	unsigned _pixelFormat;
	unsigned _width;
	unsigned _height;
	unsigned long _rowbytes;
	char _allowsMultiPassEncoding;
	unsigned _imageAlpha;

}

@property (assign,nonatomic) unsigned pixelFormat;              //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign) char allowsMultiPassEncoding;                //@synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding - In the implementation block
-(void)dealloc;
-(unsigned)width;
-(unsigned)height;
-(unsigned)pixelFormat;
-(void)setPixelFormat:(unsigned)arg1 ;
-(id)compressedData:(char)arg1 usedEncoding:(int*)arg2 andRowChunkSize:(unsigned*)arg3 ;
-(char)allowsMultiPassEncoding;
-(unsigned)sourceImageAlpha;
-(void)setAllowsMultiPassEncoding:(char)arg1 ;
-(CGContextRef)bitmapContext;
-(id)pixelData;
-(id)initWithPixelWidth:(unsigned)arg1 pixelHeight:(unsigned)arg2 ;
-(void)setSourceAlphaInfo:(unsigned)arg1 ;
-(void)setPixelData:(id)arg1 ;
-(void)finalize;
@end
