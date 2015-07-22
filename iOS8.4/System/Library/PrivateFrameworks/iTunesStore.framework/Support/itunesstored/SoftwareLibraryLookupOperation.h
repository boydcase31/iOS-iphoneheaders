/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSArray;

@interface SoftwareLibraryLookupOperation : ISOperation {

	NSArray* _bundleIDs;
	NSArray* _itemIDs;
	NSArray* _softwareLibraryItems;

}

@property (readonly) NSArray * bundleIdentifiers; 
@property (readonly) NSArray * itemIdentifiers; 
@property (readonly) NSArray * softwareLibraryItems; 
-(id)initWithItemIdentifiers:(id)arg1 ;
-(id)initWithBundleIdentifiers:(id)arg1 ;
-(NSArray *)softwareLibraryItems;
-(void)_loadFromItemIdentifiers;
-(void)_loadFromBundleIdentifiers;
-(id)_newSoftwareLibraryItemWithApplication:(id)arg1 ;
-(id)_newSoftwareLibraryItemWithContainerPath:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(NSArray *)bundleIdentifiers;
-(NSArray *)itemIdentifiers;
@end
