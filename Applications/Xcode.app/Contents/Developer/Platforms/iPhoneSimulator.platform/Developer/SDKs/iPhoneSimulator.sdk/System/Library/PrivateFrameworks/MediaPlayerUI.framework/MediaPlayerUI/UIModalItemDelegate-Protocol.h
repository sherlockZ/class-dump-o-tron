//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _UIModalItem;

@protocol UIModalItemDelegate <NSObject>

@optional
- (_Bool)modalItem:(_UIModalItem *)arg1 shouldDismissForButtonAtIndex:(long long)arg2;
- (_Bool)modalItemShouldEnableFirstOtherButton:(_UIModalItem *)arg1;
- (void)modalItem:(_UIModalItem *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)modalItem:(_UIModalItem *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didPresentModalItem:(_UIModalItem *)arg1;
- (void)willPresentModalItem:(_UIModalItem *)arg1;
@end
