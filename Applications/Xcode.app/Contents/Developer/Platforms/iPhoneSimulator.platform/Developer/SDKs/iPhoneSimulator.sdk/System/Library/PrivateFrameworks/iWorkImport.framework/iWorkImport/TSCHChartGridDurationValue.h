//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSCHChartGridValue.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCHChartGridDurationValue : NSObject <TSCHChartGridValue>
{
    double mDuration;
}

+ (id)durationValueWithDouble:(double)arg1;
- (double)doubleValue;
@property(readonly, nonatomic) int chartGridValueType;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDouble:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
