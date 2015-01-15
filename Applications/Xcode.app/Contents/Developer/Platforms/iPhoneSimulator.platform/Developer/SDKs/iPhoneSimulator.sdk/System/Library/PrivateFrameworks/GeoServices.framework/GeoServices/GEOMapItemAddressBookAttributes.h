//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEOMapItemAddressBookAttributes : PBCodable <NSCopying>
{
    int _addressType;
    NSString *_name;
    NSString *_spokenName;
    _Bool _isMe;
    struct {
        unsigned int addressType:1;
        unsigned int isMe:1;
    } _has;
}

@property(nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(retain, nonatomic) NSString *spokenName; // @synthesize spokenName=_spokenName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int addressType; // @synthesize addressType=_addressType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsMe;
@property(readonly, nonatomic) _Bool hasSpokenName;
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasAddressType;
- (void)dealloc;

@end
