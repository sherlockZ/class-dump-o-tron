//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, NSUUID;

@interface AXSwitch : NSObject <NSSecureCoding>
{
    unsigned short _keyCode;
    long long _action;
    NSString *_name;
    struct NSString *_source;
    struct NSString *_type;
    NSString *_productName;
    NSString *_manufacturerName;
    long long _buttonNumber;
    long long _headSwitch;
    NSUUID *_uuid;
}

+ (id)switchWithAction:(long long)arg1 name:(id)arg2 source:(struct NSString *)arg3 type:(struct NSString *)arg4;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) long long headSwitch; // @synthesize headSwitch=_headSwitch;
@property(nonatomic) long long buttonNumber; // @synthesize buttonNumber=_buttonNumber;
@property(nonatomic) unsigned short keyCode; // @synthesize keyCode=_keyCode;
@property(copy, nonatomic) NSString *manufacturerName; // @synthesize manufacturerName=_manufacturerName;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long action; // @synthesize action=_action;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAction:(long long)arg1 name:(id)arg2 source:(struct NSString *)arg3 type:(struct NSString *)arg4;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
