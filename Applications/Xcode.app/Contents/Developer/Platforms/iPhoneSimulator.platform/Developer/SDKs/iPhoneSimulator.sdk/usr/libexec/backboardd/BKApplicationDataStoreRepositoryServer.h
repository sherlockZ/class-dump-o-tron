//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSBaseXPCServer.h"

@class BKApplicationDataStoreRepositoryManager;

@interface BKApplicationDataStoreRepositoryServer : BSBaseXPCServer
{
    BKApplicationDataStoreRepositoryManager *_dataStoreManager;
    id <BKApplicationDataStoreRepository> _dataStore;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <BKApplicationDataStoreRepository> dataStore; // @synthesize dataStore=_dataStore;
- (void)_handleRemoveAllObjects:(id)arg1;
- (void)_handleRemoveObjectForKey:(id)arg1 client:(id)arg2;
- (void)_handleSetObjectForKey:(id)arg1 client:(id)arg2;
- (void)_handleGetObjectForKey:(id)arg1;
- (void)_handleGetAvailableDataStores:(id)arg1;
- (void)_handleSynchronize:(id)arg1;
- (void)_handleSetPrefetchedKeys:(id)arg1 client:(id)arg2;
- (void)_handleConnect:(id)arg1;
- (void)queue_handleMessage:(id)arg1 client:(id)arg2;
- (Class)queue_classForNewClientConnection:(id)arg1;
- (id)init;

@end
