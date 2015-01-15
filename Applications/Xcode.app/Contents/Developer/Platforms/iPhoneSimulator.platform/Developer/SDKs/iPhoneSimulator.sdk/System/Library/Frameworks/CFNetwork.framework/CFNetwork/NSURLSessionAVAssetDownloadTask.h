//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CFNetwork/NSURLSessionTask.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface NSURLSessionAVAssetDownloadTask : NSURLSessionTask
{
    unsigned long long _AVAssetDownloadToken;
    NSURL *_URL;
    NSURL *_destinationURL;
}

@property(readonly, copy) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, copy) NSURL *URL; // @synthesize URL=_URL;
@property(readonly) unsigned long long AVAssetDownloadToken; // @synthesize AVAssetDownloadToken=_AVAssetDownloadToken;

@end
