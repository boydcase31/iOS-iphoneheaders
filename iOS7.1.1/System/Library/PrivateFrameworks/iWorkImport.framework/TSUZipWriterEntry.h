/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface TSUZipWriterEntry : NSObject {

	unsigned _CRC;
	NSString* _name;
	unsigned long long _size;
	unsigned long long _offset;

}

@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long size;                //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned CRC;                           //@synthesize CRC=_CRC - In the implementation block
-(void)setCRC:(unsigned)arg1 ;
-(unsigned)CRC;
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(void).cxx_destruct;
@end
