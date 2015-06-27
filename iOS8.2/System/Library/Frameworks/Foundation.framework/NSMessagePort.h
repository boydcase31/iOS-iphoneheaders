/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSPort.h>

@interface NSMessagePort : NSPort {

	void* _port;
	id _delegate;

}
+(char)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned)arg6 reserved:(unsigned)arg7 ;
+(void)_fixNSMessagePortLeak;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(char)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned)arg4 ;
-(char)sendBeforeDate:(id)arg1 msgid:(unsigned)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned)arg5 ;
-(char)sendBeforeTime:(double)arg1 streamData:(void*)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned)arg5 ;
-(id)initWithRemoteName:(id)arg1 ;
-(id)retain;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(unsigned)retainCount;
-(id)delegate;
-(void)invalidate;
-(char)isValid;
-(char)setName:(id)arg1 ;
-(id)name;
-(char)_tryRetain;
-(char)_isDeallocating;
-(id)initWithName:(id)arg1 ;
-(oneway void)release;
-(void)finalize;
@end
