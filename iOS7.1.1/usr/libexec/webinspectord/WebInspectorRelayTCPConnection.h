/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/webinspectord
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <webinspectord/WebInspectorRelayConnection.h>
#import <webinspectord/TCPConnectionDelegate.h>

@class TCPConnection;

@interface WebInspectorRelayTCPConnection : WebInspectorRelayConnection <TCPConnectionDelegate> {

	TCPConnection* _connection;

}

@property (nonatomic,retain) TCPConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)connectionFromTCPConnection:(id)arg1 delegate:(id)arg2 ;
-(void)tcpConnectionDidClose:(id)arg1 ;
-(void)tcpConnection:(id)arg1 didReceiveMessage:(id)arg2 ;
-(id)initWithTCPConnection:(id)arg1 delegate:(id)arg2 ;
-(void)dealloc;
-(void)close;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(void)sendMessage:(id)arg1 ;
@end
