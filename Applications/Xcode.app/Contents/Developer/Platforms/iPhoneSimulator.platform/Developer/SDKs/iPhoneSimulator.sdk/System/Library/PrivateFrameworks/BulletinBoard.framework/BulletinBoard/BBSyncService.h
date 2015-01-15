//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSServiceDelegate.h"

@class IDSService, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSTimer;

@interface BBSyncService : NSObject <IDSServiceDelegate>
{
    IDSService *_service;
    NSMutableArray *_pendingDismissalDictionaries;
    NSMutableArray *_pendingDismissalIDs;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _queuedFeed;
    NSString *_queuedSectionID;
    NSString *_queuedUniversalSectionID;
    NSMutableDictionary *_deferredDismissalsBySectionID;
    NSTimer *_deferredTimer;
    int _lockNotifyToken;
    id <BBSyncServiceDelegate> _delegate;
}

@property(nonatomic) id <BBSyncServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_sendDeferredDismissals;
- (void)_deferredTimerFired:(id)arg1;
- (void)_deviceLocked;
- (void)_clearDeferredTimer;
- (void)_addDeferredDismissalForBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (id)_dismissalDictionaryForBulletin:(id)arg1;
- (void)_sendSyncMessage:(id)arg1;
- (void)_reallyEnqueueBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (id)_syncAccount;
- (void)sendSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (void)enqueueSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (void)sendPendingSyncedRemovals;
- (id)dismissalSectionIdentifierForIncomingMessage:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
