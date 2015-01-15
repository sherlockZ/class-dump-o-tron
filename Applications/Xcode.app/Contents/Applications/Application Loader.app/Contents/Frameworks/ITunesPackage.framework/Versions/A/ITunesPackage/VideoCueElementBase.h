//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesPackage/AbstractElement.h>

@class NSArray, NSString, VideoCueTimeElement;

@interface VideoCueElementBase : AbstractElement
{
    NSString *_sequenceNumber;
    VideoCueTimeElement *_time;
    NSString *_title;
    NSArray *_artists;
    NSString *_isrc;
    NSString *_iswc;
    NSString *_copyrightCline;
    NSString *_copyrightPline;
    NSString *_usage;
}

+ (id)allKnownKeyPaths;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
@property(retain, nonatomic) NSString *usage;
@property(retain, nonatomic) NSString *copyrightPline;
@property(retain, nonatomic) NSString *copyrightCline;
@property(retain, nonatomic) NSString *iswc;
@property(retain, nonatomic) NSString *isrc;
@property(retain, nonatomic) NSArray *artists;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) VideoCueTimeElement *time;
@property(retain, nonatomic) NSString *sequenceNumber;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end
