//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CloudArtworkImporter.h"

@interface JaliscoArtworkImporter : CloudArtworkImporter
{
}

- (void)_importOriginalScreenshots;
- (void)_importOriginalItemArtwork;
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importAllItemArtworkAndScreenshots;
- (id)init;

@end
