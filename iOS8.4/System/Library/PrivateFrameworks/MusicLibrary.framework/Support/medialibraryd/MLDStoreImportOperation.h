/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <medialibraryd/medialibraryd-Structs.h>
#import <medialibraryd/MLDImportOperation.h>

@class ML3StoreItemTrackData, ML3StoreItemPlaylistData;

@interface MLDStoreImportOperation : MLDImportOperation {

	ML3StoreItemTrackData* _trackData;
	ML3StoreItemPlaylistData* _playlistData;

}
-(unsigned long long)importSource;
-(BOOL)_performImportWithTransaction:(id)arg1 ;
-(BOOL)_importTracksUsingImportSession:(ML3ImportSession*)arg1 importedTracksSourceIDs:(id*)arg2 importedTrackPIDs:(id*)arg3 ;
-(BOOL)_importPlaylistsUsingImportSession:(ML3ImportSession*)arg1 childItemsSourceIDs:(id)arg2 ;
-(void)main;
@end
