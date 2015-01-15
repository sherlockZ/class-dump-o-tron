//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSString;

@interface SFActivityAdvertisement : NSObject <NSSecureCoding>
{
    NSData *_advertisementPayload;
    NSDictionary *_options;
    NSString *_deviceIdentifier;
    NSString *_deviceName;
    NSString *_deviceModelIdentifier;
    NSData *_activityPayload;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSData *activityPayload; // @synthesize activityPayload=_activityPayload;
@property(readonly, retain) NSString *deviceModelIdentifier; // @synthesize deviceModelIdentifier=_deviceModelIdentifier;
@property(readonly, retain) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, retain) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, retain) NSDictionary *options; // @synthesize options=_options;
@property(readonly, retain) NSData *advertisementPayload; // @synthesize advertisementPayload=_advertisementPayload;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithAdvertisementPayload:(id)arg1 options:(id)arg2 deviceName:(id)arg3 fromDeviceID:(id)arg4;

@end
