//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKQueryClient.h"

@class NSArray, NSError, NSUUID;

@protocol HKSampleQueryClient <HKQueryClient>
- (void)deliverResultsBatch:(NSArray *)arg1 final:(_Bool)arg2 error:(NSError *)arg3 forQueryUUID:(NSUUID *)arg4 confirmationBlock:(void (^)(_Bool))arg5;
@end
