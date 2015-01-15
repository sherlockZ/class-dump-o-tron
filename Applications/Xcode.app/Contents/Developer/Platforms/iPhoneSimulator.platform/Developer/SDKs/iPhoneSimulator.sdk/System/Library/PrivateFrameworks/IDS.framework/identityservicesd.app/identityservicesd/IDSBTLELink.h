//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBPeripheralDelegate.h"
#import "IDSLink.h"

@class NSData, NSString, NSUUID;

@interface IDSBTLELink : NSObject <IDSLink, CBPeripheralDelegate>
{
    NSString *_deviceID;
    NSString *_linkID;
    NSUUID *_peerID;
    id <IDSWPPacketSendingProtocol> _wpLinkManager;
    CDStruct_9a16016b *_incomingPacketBuffer;
    unsigned long long _state;
    unsigned long long _totalBytesSent;
    unsigned long long _totalPacketsSent;
    unsigned long long _totalBytesReceived;
    unsigned long long _totalPacketsReceived;
    unsigned long long _previousBytesSent;
    unsigned long long _previousPacketsSent;
    unsigned long long _previousBytesReceived;
    unsigned long long _previousPacketsReceived;
    double _previousReportTime;
    _Bool _hasSpaceAvailable;
    _Bool _shouldSendHasSpaceAvailable;
    NSData *_outgoingData;
    id <IDSLinkDelegate> _delegate;
}

@property id <IDSLinkDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly) NSString *linkID; // @synthesize linkID=_linkID;
@property(readonly) unsigned long long state; // @synthesize state=_state;
- (id)generateLinkReport:(double)arg1 isCurrentLink:(_Bool)arg2;
- (void)didReceiveData:(id)arg1;
- (void)setHasSpaceAvailable:(_Bool)arg1;
- (unsigned long long)sendPacketBuffer:(CDStruct_9a16016b *)arg1 toDeviceID:(id)arg2;
@property(readonly) unsigned long long headerOverhead;
- (void)start;
- (void)dealloc;
- (id)initWithWPLinkManager:(id)arg1 withIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
