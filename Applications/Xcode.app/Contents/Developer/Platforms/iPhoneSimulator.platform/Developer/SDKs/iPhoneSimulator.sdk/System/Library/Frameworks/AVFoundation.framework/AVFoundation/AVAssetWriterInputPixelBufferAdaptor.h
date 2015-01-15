//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptorInternal, NSDictionary;

@interface AVAssetWriterInputPixelBufferAdaptor : NSObject
{
    AVAssetWriterInputPixelBufferAdaptorInternal *_internal;
}

+ (id)keyPathsForValuesAffectingPixelBufferPool;
+ (id)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2;
- (_Bool)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
@property(readonly, nonatomic) struct __CVPixelBufferPool *pixelBufferPool;
@property(readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property(readonly, nonatomic) AVAssetWriterInput *assetWriterInput;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2;
- (id)init;

@end
