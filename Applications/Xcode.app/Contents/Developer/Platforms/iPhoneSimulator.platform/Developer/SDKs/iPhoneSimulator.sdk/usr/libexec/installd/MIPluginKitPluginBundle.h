//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MIExecutableBundle.h"

@class NSDictionary, NSString;

@interface MIPluginKitPluginBundle : MIExecutableBundle
{
    NSDictionary *_overlaidInfoPlist;
    NSString *_parentBundleID;
}

+ (id)bundleForURL:(id)arg1 parentBundle:(id)arg2 error:(id *)arg3;
@property(readonly) NSString *parentBundleID; // @synthesize parentBundleID=_parentBundleID;
- (void).cxx_destruct;
- (_Bool)validateBundleMetadataWithError:(id *)arg1;
- (_Bool)_validateNSExtensionWithOverlaidDictionary:(id)arg1 error:(id *)arg2;
- (_Bool)_validateXPCServiceWithOverlaidDictionary:(id)arg1 error:(id *)arg2;
- (id)dataContainerCreatingIfNeeded:(_Bool)arg1 makeLive:(_Bool)arg2 created:(_Bool *)arg3 error:(id *)arg4;
- (id)dataContainerWithError:(id *)arg1;
- (id)overlaidInfoPlistWithError:(id *)arg1;
- (id)_overlayDictionary:(id)arg1 onDictionary:(id)arg2;
@property(readonly) NSString *extensionPointIdentifier;
- (Class)dataContainerClass;
- (id)initWithBundleURL:(id)arg1 parentBundle:(id)arg2 error:(id *)arg3;

@end
