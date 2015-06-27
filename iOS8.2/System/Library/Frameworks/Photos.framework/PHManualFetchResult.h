/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:47 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Photos/PHFetchResult.h>

@class NSArray, NSOrderedSet, NSString;

@interface PHManualFetchResult : PHFetchResult {

	NSArray* _objects;
	NSOrderedSet* _objectIDs;
	NSString* _identifier;

}

@property (readonly) NSArray * objects;                     //@synthesize objects=_objects - In the implementation block
@property (readonly) NSOrderedSet * objectIDs;              //@synthesize objectIDs=_objectIDs - In the implementation block
@property (readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
-(id)fetchedObjects;
-(NSArray *)objects;
-(NSOrderedSet *)objectIDs;
-(int)collectionFetchType;
-(id)changeHandlingKey;
-(id)changeHandlingValue;
-(char)interestedInChange:(id)arg1 ;
-(id)fetchResultWithChangeHandlingValue:(id)arg1 ;
-(void)updateRegistrationForChangeNotificationDeltas;
-(void)getMediaTypeCounts;
-(id)fetchUpdatedObjects;
-(id)fetchedObjectIDs;
-(id)objectIDAtIndex:(unsigned)arg1 ;
-(id)initWithObjects:(id)arg1 identifier:(id)arg2 registerIfNeeded:(char)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)identifier;
-(id)initWithObjects:(id)arg1 ;
-(id)photoLibrary;
-(id)containerIdentifier;
-(id)fetchRequest;
@end
