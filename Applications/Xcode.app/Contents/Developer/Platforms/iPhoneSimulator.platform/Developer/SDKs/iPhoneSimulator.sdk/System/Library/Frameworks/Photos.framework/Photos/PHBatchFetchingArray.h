//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@class NSCache, NSObject<OS_dispatch_queue>, PHPhotoLibrary;

@interface PHBatchFetchingArray : NSArray
{
    NSArray *_oids;
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _count;
    NSCache *_cache;
    unsigned long long _firstBatchIndex;
    NSArray *_firstBatch;
    NSObject<OS_dispatch_queue> *_firstBatchQueue;
    unsigned long long _batchSize;
    unsigned long long _propertyHint;
}

+ (_Bool)accessInstanceVariablesDirectly;
@property(readonly) NSArray *oids; // @synthesize oids=_oids;
@property(readonly) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (void).cxx_destruct;
- (void)min:(id *)arg1 andMax:(id *)arg2 forKeypath:(id)arg3;
- (id)_phObjectAtIndex:(unsigned long long)arg1;
- (id)__batchHelper:(unsigned long long)arg1;
- (id)_phObjectsForOIDs:(id)arg1;
- (unsigned long long)batchSize;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)description;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOIDs:(id)arg1 options:(id)arg2 photoLibrary:(id)arg3;

@end
