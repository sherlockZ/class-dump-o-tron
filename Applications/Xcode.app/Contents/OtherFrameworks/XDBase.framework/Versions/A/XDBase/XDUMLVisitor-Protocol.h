//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray;

@protocol XDUMLVisitor
- (void)visitImplementation:(id <XDUMLImplementation>)arg1;
- (void)visitImplementations:(NSArray *)arg1;
- (void)visitGeneralization:(id <XDUMLGeneralization>)arg1;
- (void)visitGeneralizations:(NSArray *)arg1;
- (void)visitOperations:(NSArray *)arg1;
- (void)visitOperation:(id <XDUMLOperation>)arg1;
- (void)visitProperty:(id <XDUMLProperty>)arg1;
- (void)visitProperties:(NSArray *)arg1;
- (void)visitDataType:(id <XDUMLDataType>)arg1;
- (void)visitPackage:(id <XDUMLPackage>)arg1;
- (void)visitInterface:(id <XDUMLInterface>)arg1;
- (void)visitClass:(id <XDUMLClass>)arg1;
- (void)visit:(NSArray *)arg1;
@end
