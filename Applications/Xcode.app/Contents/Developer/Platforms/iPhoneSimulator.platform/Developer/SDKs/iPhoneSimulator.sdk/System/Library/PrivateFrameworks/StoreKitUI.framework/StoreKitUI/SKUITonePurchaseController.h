//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABPeoplePickerNavigationControllerDelegate.h"

@class ABPeoplePickerNavigationController, NSString, SKUIClientContext, SKUIItem, UIViewController;

@interface SKUITonePurchaseController : NSObject <ABPeoplePickerNavigationControllerDelegate>
{
    SKUIClientContext *_clientContext;
    CDUnknownBlockType _completionBlock;
    SKUIItem *_item;
    UIViewController *_parentViewController;
    ABPeoplePickerNavigationController *_peoplePicker;
}

@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_showPeoplePicker;
- (void)_presentViewController:(id)arg1;
- (void)_finishWithTonePurchase:(id)arg1;
- (void)_finishPeoplePicker:(id)arg1 withPerson:(void *)arg2;
- (void)_dismissPeoplePicker;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)showPurchaseFlowWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
