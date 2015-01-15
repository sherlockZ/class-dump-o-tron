//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FormAutoFillFrameHandle, NSDictionary, NSNumber, NSURL;

@protocol FormMetadataObserver <NSObject>
- (void)willNavigateFrame:(FormAutoFillFrameHandle *)arg1 withUnsubmittedForm:(NSDictionary *)arg2 usernameIsAutoFilled:(_Bool)arg3 passwordIsAutoFilled:(_Bool)arg4;
- (void)didFillGeneratedPasswordInForm:(NSDictionary *)arg1 inFrame:(FormAutoFillFrameHandle *)arg2;
- (void)textDidChangeInTextField:(NSDictionary *)arg1 inForm:(NSDictionary *)arg2 inFrame:(FormAutoFillFrameHandle *)arg3;
- (void)didCollectFormMetadata:(NSDictionary *)arg1 textFieldMetadata:(NSDictionary *)arg2 replyIdentifier:(NSNumber *)arg3;
- (void)didCollectFormMetadataForPreFilling:(NSDictionary *)arg1 atURL:(NSURL *)arg2;
@end
