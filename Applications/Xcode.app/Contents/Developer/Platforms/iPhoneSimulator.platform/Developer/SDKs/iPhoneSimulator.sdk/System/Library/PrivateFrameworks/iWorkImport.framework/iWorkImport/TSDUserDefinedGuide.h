//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSDUserDefinedGuide : NSObject
{
    double mPosition;
    int mGuideType;
}

@property(readonly, nonatomic) int guideType; // @synthesize guideType=mGuideType;
@property(readonly, nonatomic) double position; // @synthesize position=mPosition;
- (id)description;
- (id)alignmentGuideForEditing;
- (id)alignmentGuide;
- (id)initWithTSDAlignmentGuide:(id)arg1;
- (id)initWithPosition:(double)arg1 type:(int)arg2;

@end

