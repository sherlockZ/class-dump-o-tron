//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

@class NSData;

@interface DaemonBiometricOptInOperation : ISOperation
{
    NSData *_authToken;
    _Bool _requiresStoreAuthentication;
    CDUnknownBlockType _resultBlock;
}

- (_Bool)_registerAccount:(id)arg1 withAuthToken:(id)arg2;
- (id)_authenticateWithAccount:(id)arg1 error:(id *)arg2;
- (void)run;
@property(copy) CDUnknownBlockType resultBlock;
@property _Bool requiresStoreAuthentication;
@property(copy, nonatomic) NSData *authToken;
- (void)dealloc;
- (id)init;

@end
