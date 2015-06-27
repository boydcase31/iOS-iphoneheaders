/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DASubCal/SubCalDATask.h>
#import <DASubCal/SubCalURLRequestDelegate.h>

@protocol SubCalValidationTaskDelegate;
@class NSURL, NSString, SubCalURLRequest, NSData;

@interface SubCalValidationTask : SubCalDATask <SubCalURLRequestDelegate> {

	char _performQuickValidation;
	char _foundBeginVCal;
	char _foundCalName;
	id<SubCalValidationTaskDelegate> _delegate;
	NSURL* _subscriptionURL;
	NSString* _username;
	NSString* _password;
	SubCalURLRequest* _request;
	NSData* _icsData;
	NSString* _calendarName;
	unsigned _searchIndex;

}

@property (assign,nonatomic,__weak) id<SubCalValidationTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * subscriptionURL;                                       //@synthesize subscriptionURL=_subscriptionURL - In the implementation block
@property (nonatomic,retain) NSString * username;                                           //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;                                           //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) char performQuickValidation;                                   //@synthesize performQuickValidation=_performQuickValidation - In the implementation block
@property (nonatomic,retain) SubCalURLRequest * request;                                    //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSData * icsData;                                              //@synthesize icsData=_icsData - In the implementation block
@property (nonatomic,retain) NSString * calendarName;                                       //@synthesize calendarName=_calendarName - In the implementation block
@property (assign,nonatomic) char foundBeginVCal;                                           //@synthesize foundBeginVCal=_foundBeginVCal - In the implementation block
@property (assign,nonatomic) char foundCalName;                                             //@synthesize foundCalName=_foundCalName - In the implementation block
@property (assign,nonatomic) unsigned searchIndex;                                          //@synthesize searchIndex=_searchIndex - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)calendarName;
-(void)setCalendarName:(NSString *)arg1 ;
-(unsigned)searchIndex;
-(void)setSearchIndex:(unsigned)arg1 ;
-(void)setDelegate:(id<SubCalValidationTaskDelegate>)arg1 ;
-(id<SubCalValidationTaskDelegate>)delegate;
-(SubCalURLRequest *)request;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)didFinish;
-(NSURL *)subscriptionURL;
-(void)setSubscriptionURL:(NSURL *)arg1 ;
-(void)performTask;
-(void)handleTrustChallenge:(id)arg1 forSubCalURLRequest:(id)arg2 ;
-(void)subCalURLRequest:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3 ;
-(void)subCalURLRequest:(id)arg1 updatedData:(id)arg2 ;
-(void)subCalURLRequest:(id)arg1 didRedirectToURL:(id)arg2 ;
-(void)willFinish;
-(void)performDelegateCallbackWithError:(id)arg1 ;
-(void)setPerformQuickValidation:(char)arg1 ;
-(char)performQuickValidation;
-(NSData *)icsData;
-(void)setIcsData:(NSData *)arg1 ;
-(void)_tryQuickValidationCurrentData:(id)arg1 ;
-(void)setFoundBeginVCal:(char)arg1 ;
-(char)foundCalName;
-(void)setFoundCalName:(char)arg1 ;
-(id)_stringBeforeNewline:(const char*)arg1 length:(unsigned)arg2 ;
-(char)foundBeginVCal;
-(char)_isInvalidVCalBeginningForData:(id)arg1 ;
-(id)_searchForCalNameInConnectionData:(id)arg1 ;
-(NSString *)username;
-(void)setRequest:(SubCalURLRequest *)arg1 ;
@end
