//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JRSMenuDelegate.h"
#import "NSMenuDelegate.h"

@class JNFJObjectWrapper, NSMenu;

@interface NativeToJavaDelegate : NSObject <JRSMenuDelegate, NSMenuDelegate>
{
    NSMenu *nsmenu;
    JNFJObjectWrapper *javaObjectWrapper;
}

- (id)initFromMenu:(id)arg1 javaObj:(id)arg2;
- (id)menu;
- (void)menuWillOpen:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)handleJavaMenuItemTargetedAtIndex:(unsigned long long)arg1 rect:(struct CGRect)arg2;
- (void)handleJavaMouseEvent:(id)arg1;
@property(retain, nonatomic) JNFJObjectWrapper *javaObjectWrapper; // @synthesize javaObjectWrapper;
@property(retain, nonatomic) NSMenu *nsmenu; // @synthesize nsmenu;

@end
