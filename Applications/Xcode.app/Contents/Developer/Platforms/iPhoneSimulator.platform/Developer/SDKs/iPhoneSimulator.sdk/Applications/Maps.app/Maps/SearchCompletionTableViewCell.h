//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class SearchCompletionGlyphViewLayout;

__attribute__((visibility("hidden")))
@interface SearchCompletionTableViewCell : UITableViewCell
{
    SearchCompletionGlyphViewLayout *_layout;
}

+ (id)collectionsButtonCell;
+ (Class)layoutClass;
- (void).cxx_destruct;
@property(retain, nonatomic) SearchCompletionGlyphViewLayout *layout; // @synthesize layout=_layout;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end

