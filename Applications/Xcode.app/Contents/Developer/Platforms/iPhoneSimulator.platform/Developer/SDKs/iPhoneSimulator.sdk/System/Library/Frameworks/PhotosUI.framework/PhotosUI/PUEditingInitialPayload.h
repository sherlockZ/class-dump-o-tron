//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class CLLocation, NSData, NSDate, NSString, NSURL, PHAdjustmentData;

@interface PUEditingInitialPayload : NSObject <NSSecureCoding>
{
    long long _mediaType;
    unsigned long long _mediaSubtypes;
    NSDate *_creationDate;
    CLLocation *_location;
    PHAdjustmentData *_adjustmentData;
    NSData *_placeholderImageData;
    NSData *_displaySizeImageData;
    NSURL *_videoURL;
    NSString *_videoPathSandboxExtensionToken;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *videoPathSandboxExtensionToken; // @synthesize videoPathSandboxExtensionToken=_videoPathSandboxExtensionToken;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) NSData *displaySizeImageData; // @synthesize displaySizeImageData=_displaySizeImageData;
@property(retain, nonatomic) NSData *placeholderImageData; // @synthesize placeholderImageData=_placeholderImageData;
@property(retain, nonatomic) PHAdjustmentData *adjustmentData; // @synthesize adjustmentData=_adjustmentData;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) unsigned long long mediaSubtypes; // @synthesize mediaSubtypes=_mediaSubtypes;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
