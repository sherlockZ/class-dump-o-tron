//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PSHeaderFooterView.h"

@class NSArray, NSMutableArray, UILabel;

@interface SubtitleHeaderView : UIView <PSHeaderFooterView>
{
    UILabel *_titleLabel;
    NSMutableArray *_subtitleLabels;
}

@property(retain, nonatomic) NSArray *subtitleLabels; // @synthesize subtitleLabels=_subtitleLabels;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)dealloc;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;
- (void)removeSubtitleAtIndex:(unsigned long long)arg1;
- (id)addSubtitle;
- (id)subtitleAtIndex:(unsigned long long)arg1;
- (id)initWithSpecifier:(id)arg1;

@end
