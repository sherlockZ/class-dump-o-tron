//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MKMapSnapshotOptions, MKMapSnapshotter, UIActivityIndicatorView, UIImageView;

__attribute__((visibility("hidden")))
@interface RAPMapFeatureTableViewCell : UITableViewCell
{
    UIActivityIndicatorView *_spinner;
    UIImageView *_snapshotImageView;
    struct CGSize _lastImageSizeUsed;
    double _lastScaleUsed;
    _Bool _snapshotImageOptionsChanged;
    MKMapSnapshotter *_runningSnapshotter;
    _Bool _showsPin;
    MKMapSnapshotOptions *_snapshotOptionsTemplate;
}

+ (double)defaultHeight;
@property(nonatomic) _Bool showsPin; // @synthesize showsPin=_showsPin;
@property(copy, nonatomic) MKMapSnapshotOptions *snapshotOptionsTemplate; // @synthesize snapshotOptionsTemplate=_snapshotOptionsTemplate;
- (void).cxx_destruct;
- (void)_updateSnapshotNowIfNeeded;
- (void)_updateSnapshotIfNeeded;
- (void)setHidden:(_Bool)arg1;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)_needsUpdateForNewOptions:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
