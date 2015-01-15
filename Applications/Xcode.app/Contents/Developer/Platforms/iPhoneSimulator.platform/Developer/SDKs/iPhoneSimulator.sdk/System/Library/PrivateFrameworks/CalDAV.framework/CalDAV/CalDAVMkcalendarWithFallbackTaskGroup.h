//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVTaskGroup.h"

@class NSDictionary, NSSet, NSURL;

@interface CalDAVMkcalendarWithFallbackTaskGroup : CoreDAVTaskGroup
{
    NSURL *_url;
    _Bool _shouldSupportVEVENT;
    _Bool _shouldSupportVTODO;
    NSSet *_primaryElements;
    NSSet *_fallbackElements;
    NSDictionary *_headersToOverride;
    NSDictionary *_responseHeaders;
}

@property(retain, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(retain, nonatomic) NSDictionary *headersToOverride; // @synthesize headersToOverride=_headersToOverride;
@property(nonatomic) _Bool shouldSupportVTODO; // @synthesize shouldSupportVTODO=_shouldSupportVTODO;
@property(nonatomic) _Bool shouldSupportVEVENT; // @synthesize shouldSupportVEVENT=_shouldSupportVEVENT;
- (void)startTaskGroup;
- (void)_mkcalendarAfterFailureCount:(unsigned long long)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5;
- (void)dealloc;

@end
