//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AARequest.h"

@class AAAccount;

@interface CastleRequest : AARequest
{
    AAAccount *_account;
}

+ (void)addHeadersToRequest:(id)arg1 forAccount:(id)arg2;
@property(retain, nonatomic) AAAccount *account; // @synthesize account=_account;
- (id)urlRequest;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 URLString:(id)arg2;

@end
