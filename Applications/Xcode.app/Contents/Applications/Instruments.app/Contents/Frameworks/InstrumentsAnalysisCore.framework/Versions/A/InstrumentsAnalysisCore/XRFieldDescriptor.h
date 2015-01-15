//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface XRFieldDescriptor : NSObject <NSCoding>
{
    NSString *_name;
    int _type;
    unsigned int _index;
    unsigned int _multi;
}

+ (int)fieldTypeForString:(id)arg1;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) int type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly) unsigned int size;
@property(readonly) unsigned int maxMultiples;
@property(readonly) unsigned int identifierHandle;
@property(readonly) unsigned int handle;
@property(readonly) BOOL isMultiField;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 index:(unsigned int)arg2 type:(int)arg3 multiples:(unsigned int)arg4;

@end
