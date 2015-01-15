//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface ACDAccountNotifier : NSObject
{
    NSSet *_notificationPlugins;
}

+ (id)sharedAccountNotifier;
- (void).cxx_destruct;
@property(readonly) __weak NSSet *notificationPlugins;
- (void)postDidPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2;
- (void)postWillPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2;
- (void)postDidChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4;
- (_Bool)postWillChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4;
- (_Bool)canRemoveAccount:(id)arg1 inStore:(id)arg2;
- (_Bool)canSaveAccount:(id)arg1 inStore:(id)arg2;
- (void)_faultInNotificationPlugins;

@end
