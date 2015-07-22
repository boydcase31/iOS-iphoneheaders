/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <MIME/NSCopying.h>

@class NSData;

@interface MFMessageHeaders : NSObject <NSCopying> {

	NSData* _data;
	unsigned _preferredEncoding;

}
+(BOOL)shouldDecodeHeaderForKey:(id)arg1 ;
+(id)copyAddressListFromEncodedData:(id)arg1 encoding:(unsigned)arg2 ;
+(id)encodedDataForAddressList:(id)arg1 splittingAtLength:(unsigned long long)arg2 firstLineBuffer:(unsigned long long)arg3 ;
+(id)addressListFromEncodedString:(id)arg1 ;
+(id)uniqueHeaderKeyStringForString:(id)arg1 ;
+(BOOL)isStructuredHeaderKey:(id)arg1 ;
+(id)basicHeaders;
-(id)allHeaderKeys;
-(id)copyAddressListForReplyTo;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)mutableCopy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_decodeHeaderKeysFromData:(id)arg1 ;
-(void)_setCapitalizedKey:(id)arg1 forKey:(id)arg2 ;
-(id)copyFirstNonDecodedHeaderForKey:(id)arg1 ;
-(unsigned)_contentTypeEncoding;
-(id)copyDecodedStringFromHeaderData:(id)arg1 withRange:(NSRange)arg2 ;
-(id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned long long*)arg2 decoded:(BOOL)arg3 ;
-(id)_copyHeaderValueForKey:(id)arg1 ;
-(id)_copyAddressListForKey:(id)arg1 ;
-(id)copyFirstHeaderForKey:(id)arg1 ;
-(id)_headerValueForKey:(id)arg1 offset:(unsigned long long*)arg2 ;
-(BOOL)_isStructuredHeaderKey:(id)arg1 ;
-(id)_headerValueForKey:(id)arg1 ;
-(BOOL)hasHeaderForKey:(id)arg1 ;
-(BOOL)messageIsFromEntourage;
-(id)headerData;
-(unsigned)preferredEncoding;
-(void)setPreferredEncoding:(unsigned)arg1 ;
-(id)firstHeaderForKey:(id)arg1 ;
-(id)encodedHeaders;
-(id)copyAddressListForResentFrom;
-(id)copyAddressListForSender;
-(void)appendHeaderData:(id)arg1 andRecipients:(id)arg2 ;
-(id)copyAddressListForTo;
-(id)copyAddressListForCc;
-(id)firstSenderAddress;
-(id)copyHeadersForKey:(id)arg1 ;
-(id)copyAddressListForBcc;
-(id)copyFirstStringValueForKey:(id)arg1 ;
-(id)initWithHeaderData:(id)arg1 encoding:(unsigned)arg2 ;
-(id)headersForKey:(id)arg1 ;
-(id)_capitalizedKeyForKey:(id)arg1 ;
-(id)references;
@end
