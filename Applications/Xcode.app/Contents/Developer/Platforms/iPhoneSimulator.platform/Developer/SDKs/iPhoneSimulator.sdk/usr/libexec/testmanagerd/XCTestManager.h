//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "XCTestManagerIDEServerDelegate.h"
#import "XCTestManager_ManagerInterface.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener, XCTestManagerIDEServer;

@interface XCTestManager : NSObject <XCTestManager_ManagerInterface, XCTestManagerIDEServerDelegate, NSXPCListenerDelegate>
{
    NSString *_clientIdentifier;
    NSString *_clientPath;
    XCTestManagerIDEServer *_server;
    NSXPCListener *_testBundleConnectionListener;
    NSMutableDictionary *_sessionsByIdentifier;
    NSMutableArray *_unidentifiedSessions;
    NSMutableArray *_testProcessConnections;
    NSMutableDictionary *_pendingTestConnectionRequests;
    NSMutableSet *_frameworks;
}

+ (id)sharedTestManager;
@property(retain) NSMutableSet *frameworks; // @synthesize frameworks=_frameworks;
@property(retain) NSMutableDictionary *pendingTestConnectionRequests; // @synthesize pendingTestConnectionRequests=_pendingTestConnectionRequests;
@property(retain) NSMutableArray *testProcessConnections; // @synthesize testProcessConnections=_testProcessConnections;
@property(retain) NSMutableArray *unidentifiedSessions; // @synthesize unidentifiedSessions=_unidentifiedSessions;
@property(retain) NSMutableDictionary *sessionsByIdentifier; // @synthesize sessionsByIdentifier=_sessionsByIdentifier;
@property(retain) NSXPCListener *testBundleConnectionListener; // @synthesize testBundleConnectionListener=_testBundleConnectionListener;
@property(retain) XCTestManagerIDEServer *server; // @synthesize server=_server;
@property(retain) NSString *clientPath; // @synthesize clientPath=_clientPath;
@property(retain) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void).cxx_destruct;
- (void)_XCT_requestNSXPListenerEndpointFromAuxiliaryFrameworkWithReply:(CDUnknownBlockType)arg1;
- (void)_considerExiting:(id)arg1;
- (void)closeTestConnection:(id)arg1;
- (void)closeIDESession:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_XCT_requestSocketForSessionIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setIDESession:(id)arg1 forIdentifier:(id)arg2;
- (void)_handleRequestForSessionWithIdentifier:(id)arg1;
- (void)serverReceivedConnectionWithSocket:(int)arg1 disconnectionHandler:(CDUnknownBlockType)arg2;
- (void)run;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
