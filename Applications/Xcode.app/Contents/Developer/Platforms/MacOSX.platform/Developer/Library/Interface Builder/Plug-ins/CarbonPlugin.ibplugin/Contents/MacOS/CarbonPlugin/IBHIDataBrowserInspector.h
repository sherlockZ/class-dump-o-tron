//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBBoundInspector.h"

@class NSButton, NSStepper, NSTextField;

@interface IBHIDataBrowserInspector : IBBoundInspector
{
    NSTextField *columnWidthTextField;
    NSTextField *rowHeightTextField;
    NSStepper *columnWidthStepper;
    NSStepper *rowHeightStepper;
    NSButton *variableWidthColumnsCheckBox;
    NSButton *variableHeightRowsCheckBox;
    NSButton *showFocusRingCheckBox;
}

- (void)awakeFromNib;

@end
