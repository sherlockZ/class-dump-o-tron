//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXFileDocument.h>

@class NSDictionary, NSString;

@interface XCNibFileDocument : PBXFileDocument
{
    NSDictionary *_contents;
    NSString *_ibtoolAgentString;
}

+ (void)initialize;
- (id)arrangedContents;
- (id)_outlineItemsForModeledConnection:(id)arg1;
- (id)_outlineItemsForModeledObject:(id)arg1;
- (id)_outlineItemForModeledClass:(id)arg1;
- (id)contents;
- (void)setContents:(id)arg1;
- (id)modeledHierarchy;
- (id)modeledConnections;
- (id)modeledClasses;
- (id)modeledObjects;
- (BOOL)readFromFile:(id)arg1 ofType:(id)arg2;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)arg1 ofType:(id)arg2 ibtoolAgentString:(id)arg3;

@end

