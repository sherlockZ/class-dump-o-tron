//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNMotionContextProviderDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MNMotionContext : NSObject <MNMotionContextProviderDelegate>
{
    id <MNMotionContextProvider> _provider;
    int _motionType;
    int _exitType;
    int _confidence;
}

@property(readonly, nonatomic) int confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) int exitType; // @synthesize exitType=_exitType;
@property(readonly, nonatomic) int motionType; // @synthesize motionType=_motionType;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isDriving;
@property(readonly, nonatomic) _Bool isRunning;
@property(readonly, nonatomic) _Bool isWalking;
@property(readonly, nonatomic) _Bool isMoving;
- (void)motionContextProvider:(id)arg1 didUpdateMotion:(int)arg2 exitType:(int)arg3 confidence:(int)arg4;
- (void)stopMotionUpdates;
- (void)startMotionUpdatesWithProvider:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
