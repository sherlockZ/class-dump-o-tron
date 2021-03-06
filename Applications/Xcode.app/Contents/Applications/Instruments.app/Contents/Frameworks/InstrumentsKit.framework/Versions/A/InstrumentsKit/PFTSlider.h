//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSlider.h"

@class NSPopover, NSTimer, NSViewController;

@interface PFTSlider : NSSlider
{
    NSTimer *_scaleTimer;
    BOOL _gestureHasStarted;
    NSViewController *_feedbackController;
    NSPopover *_feedbackPopover;
}

- (void)viewDidMoveToWindow;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_updateScale:(id)arg1;
- (void)_updateGestureString;
- (long long)incrementsPerSide;
- (long long)currentScaleIncrement;
- (double)doubleValue;
- (void)viewDidMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

