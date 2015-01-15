//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSMutableSet, NSString, NSTimer, TSDCanvasView;

__attribute__((visibility("hidden")))
@interface TSDHUDViewController : UIViewController
{
    double mLastTimeUpdated;
    NSString *mLastStringSet;
    NSTimer *mStringTimer;
    NSMutableSet *mObjectsShowingHUD;
    TSDCanvasView *mCanvasView;
    struct CGPoint mTouchPoint;
    struct CGPoint mHUDPoint;
    int mHUDOffset;
}

+ (id)sharedHUDViewController;
- (void)p_labelTextTimerFired;
- (void)hideHUDForKey:(id)arg1;
- (void)showHUDForKey:(id)arg1 forTouchPoint:(struct CGPoint)arg2 inCanvasView:(id)arg3 withNudge:(struct CGSize)arg4 size:(int)arg5;
- (void)showHUDForKey:(id)arg1 forTouchPoint:(struct CGPoint)arg2 inCanvasView:(id)arg3 withUpwardsNudge:(double)arg4 size:(int)arg5;
- (void)showHUDForKey:(id)arg1 forTouchPoint:(struct CGPoint)arg2 inCanvasView:(id)arg3 withUpwardsNudge:(double)arg4;
- (void)setLabelText:(id)arg1;
- (void)dealloc;

@end
