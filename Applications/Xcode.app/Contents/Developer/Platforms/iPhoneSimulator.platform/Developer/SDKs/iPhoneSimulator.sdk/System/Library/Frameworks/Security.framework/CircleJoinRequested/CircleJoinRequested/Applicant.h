//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface Applicant : NSObject
{
    int _applicantUIState;
    struct __OpaqueSOSPeerInfo *_rawPeerInfo;
}

@property struct __OpaqueSOSPeerInfo *rawPeerInfo; // @synthesize rawPeerInfo=_rawPeerInfo;
@property int applicantUIState; // @synthesize applicantUIState=_applicantUIState;
@property(readonly) NSString *applicantUIStateName;
@property(readonly) NSString *deviceType;
- (id)description;
- (void)dealloc;
@property(readonly) NSString *name;
@property(readonly) NSString *idString;
- (id)initWithPeerInfo:(struct __OpaqueSOSPeerInfo *)arg1;

@end
