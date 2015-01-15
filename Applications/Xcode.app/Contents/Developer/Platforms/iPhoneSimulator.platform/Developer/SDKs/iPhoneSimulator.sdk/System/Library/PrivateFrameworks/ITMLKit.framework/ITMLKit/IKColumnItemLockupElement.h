//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@class IKButtonElement, IKImageElement, IKOrdinalElement, IKTextBadgeAttachment, IKTextElement, IKVideoElement, NSArray, NSString;

@interface IKColumnItemLockupElement : IKViewElement
{
}

- (void)_computeTitle:(id *)arg1 subtitle:(id *)arg2 secondarySubtitle:(id *)arg3 unstyledTextElements:(id *)arg4;
@property(readonly, nonatomic) _Bool onlyVisibleOnColumnHighlight;
@property(readonly, nonatomic) _Bool isWatchlisted;
@property(readonly, nonatomic) _Bool hasSeparator;
@property(readonly, retain, nonatomic) NSArray *textElements;
@property(readonly, retain, nonatomic) IKVideoElement *video;
@property(readonly, retain, nonatomic) IKButtonElement *button;
@property(readonly, nonatomic) IKTextBadgeAttachment *subtitleBadge;
@property(readonly, nonatomic) IKTextBadgeAttachment *titleBadge;
@property(readonly, nonatomic) NSArray *images;
@property(readonly, nonatomic) IKImageElement *image;
@property(readonly, retain, nonatomic) IKOrdinalElement *ordinal;
@property(readonly, retain, nonatomic) IKTextElement *descriptionText;
@property(readonly, retain, nonatomic) IKTextElement *secondarySubtitle;
@property(readonly, retain, nonatomic) IKTextElement *subtitle;
@property(readonly, retain, nonatomic) IKTextElement *title;
@property(readonly, copy, nonatomic) NSString *columnItemType;

@end
