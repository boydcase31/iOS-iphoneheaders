/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUAddressRange.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@class VMUSymbolOwner, NSString;

@interface VMURegion : VMUAddressRange <NSCoding, NSCopying> {

	VMUSymbolOwner* _owner;
	NSString* _name;

}
+(id)regionWithOwner:(id)arg1 name:(id)arg2 addressRange:(VMURange)arg3 ;
-(void)setOwner:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)name;
-(long long)compare:(id)arg1 ;
-(id)owner;
-(VMURange)addressRange;
-(id)initWithOwner:(id)arg1 name:(id)arg2 addressRange:(VMURange)arg3 ;
-(bool)isEqualToRegion:(id)arg1 ;
@end
