/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSFastEnumeration;
@interface _CollectingInvocationTrampoline : NSObject {

	id _first;
	id<NSFastEnumeration> _collection;
	char _allMustMatch;

}
-(id)initWithCollection:(id)arg1 allMustMatch:(char)arg2 ;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end
