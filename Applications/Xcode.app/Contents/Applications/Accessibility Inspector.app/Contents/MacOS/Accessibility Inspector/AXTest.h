//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface AXTest : NSObject
{
    NSMutableArray *_errors;
    NSMutableArray *_filteredErrors;
    SEL _updateSelector;
    id _updateObject;
    BOOL _enabled;
    unsigned long long _numErrors;
    unsigned long long _numWarnings;
    unsigned long long _filteredNumErrors;
    unsigned long long _filteredNumWarnings;
}

- (void)_removeAllErrors;
- (unsigned long long)filteredNumberOfErrors;
- (unsigned long long)filteredNumberOfWarnings;
- (unsigned long long)numberOfErrors;
- (unsigned long long)numberOfWarnings;
- (void)buildFilteredErrorArray:(unsigned long long)arg1;
- (void)_addError:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (id)filteredErrors;
- (id)errors;
- (void)addErrorForElement:(id)arg1 withText:(id)arg2 parameters:(id)arg3;
- (void)addWarningForElement:(id)arg1 withText:(id)arg2 parameters:(id)arg3;
- (void)runTest:(id)arg1 elements:(struct __CFDictionary *)arg2;
- (id)testDescription;
- (id)name;
- (void)dealloc;
- (id)init;

@end

