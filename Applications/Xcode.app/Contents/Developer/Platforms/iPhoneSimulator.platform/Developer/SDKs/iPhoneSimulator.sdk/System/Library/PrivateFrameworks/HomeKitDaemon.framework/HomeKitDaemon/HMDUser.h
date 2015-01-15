//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class HMDHome, NSData, NSString, NSUUID;

@interface HMDUser : NSObject <NSSecureCoding>
{
    _Bool _remoteGateway;
    NSString *_userID;
    NSUUID *_uuid;
    NSString *_displayName;
    NSString *_pairingUsername;
    NSData *_publicKey;
    unsigned long long _privilege;
    HMDHome *_home;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) HMDHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) unsigned long long privilege; // @synthesize privilege=_privilege;
@property(readonly, nonatomic, getter=isRemoteGateway) _Bool remoteGateway; // @synthesize remoteGateway=_remoteGateway;
@property(readonly, copy, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(readonly, copy, nonatomic) NSString *pairingUsername; // @synthesize pairingUsername=_pairingUsername;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 displayName:(id)arg2 pairingUsername:(id)arg3 publicKey:(id)arg4 privilege:(unsigned long long)arg5 remoteGateway:(_Bool)arg6 home:(id)arg7;

@end
