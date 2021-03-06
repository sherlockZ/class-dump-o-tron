//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>, NSXPCConnection;

@interface MobileGestaltHelperProxy : NSObject
{
    NSObject<OS_dispatch_semaphore> *_sema;
    NSXPCConnection *_connection;
    int _error;
    id <MobileGestaltHelper> _helper;
}

+ (id)proxy;
@property(readonly) id <MobileGestaltHelper> helper; // @synthesize helper=_helper;
- (void)wait;
- (void)signal;
- (id)init;
- (void)dealloc;

@end

