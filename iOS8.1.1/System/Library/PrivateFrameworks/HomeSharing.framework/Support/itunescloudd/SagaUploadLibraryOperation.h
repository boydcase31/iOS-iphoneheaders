/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class SSURLConnectionRequest, NSString, NSURL;

@interface SagaUploadLibraryOperation : CloudLibraryOperation {

	SSURLConnectionRequest* _addComputerRequest;
	SSURLConnectionRequest* _checkRequest;
	NSString* _cuid;
	SSURLConnectionRequest* _matchedTracksRequest;
	NSURL* _resultURL;
	NSString* _troveid;
	NSURL* _updateid;
	SSURLConnectionRequest* _updateRequest;
	NSURL* _uploadURL;

}
-(id)_requestWithURLBagKey:(id)arg1 bodyPayload:(id)arg2 ;
-(void)_registerDeviceAndRetrieveUploadTokens;
-(id)_determineUploadURL;
-(id)_newUploadMetadataPayload;
-(id)_determineMatchingResultsURL;
-(id)_requestWithURL:(id)arg1 ;
-(void)_assignCloudIDsForMatchedTracks:(id)arg1 ;
-(id)_plistKeyForML3TrackProperty:(id)arg1 ;
-(id)_newItemsToUpload;
-(void)cancel;
-(void)dealloc;
-(void)main;
@end
