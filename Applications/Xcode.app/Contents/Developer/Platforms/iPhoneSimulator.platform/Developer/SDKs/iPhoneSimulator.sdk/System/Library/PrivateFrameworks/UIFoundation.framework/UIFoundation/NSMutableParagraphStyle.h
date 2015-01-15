//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIFoundation/NSParagraphStyle.h>

@class NSArray;

@interface NSMutableParagraphStyle : NSParagraphStyle
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setHeaderLevel:(long long)arg1;
- (void)setTighteningFactorForTruncation:(float)arg1;
@property float hyphenationFactor;
@property long long baseWritingDirection;
@property(copy, nonatomic) NSArray *tabStops;
- (void)removeTabStop:(id)arg1;
- (void)addTabStop:(id)arg1;
- (void)_mutateTabStops;
- (void)setTextLists:(id)arg1;
- (void)setTextBlocks:(id)arg1;
@property(nonatomic) double defaultTabInterval;
@property double paragraphSpacingBefore;
@property double lineHeightMultiple;
@property long long lineBreakMode;
@property double maximumLineHeight;
@property double minimumLineHeight;
@property double firstLineHeadIndent;
@property double tailIndent;
@property double headIndent;
@property long long alignment;
@property double paragraphSpacing;
@property double lineSpacing;
- (void)setParagraphStyle:(id)arg1;

@end
