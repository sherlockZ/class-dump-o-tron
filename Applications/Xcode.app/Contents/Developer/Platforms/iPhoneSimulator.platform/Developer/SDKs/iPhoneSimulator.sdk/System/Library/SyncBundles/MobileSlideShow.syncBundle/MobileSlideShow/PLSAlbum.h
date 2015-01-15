//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLSItem.h"

@class NSArray, NSNumber, NSString;

@interface PLSAlbum : PLSItem
{
    NSString *_name;
    NSArray *_assetUUIDs;
    NSString *_parentUUID;
    NSNumber *_albumSubclass;
    NSNumber *_albumKeyAssetFaceIndex;
    NSString *_keyAssetUUID;
}

+ (id)albumWithUUID:(id)arg1;
+ (id)album;
@property(retain, nonatomic) NSString *keyAssetUUID; // @synthesize keyAssetUUID=_keyAssetUUID;
@property(retain, nonatomic) NSNumber *albumKeyAssetFaceIndex; // @synthesize albumKeyAssetFaceIndex=_albumKeyAssetFaceIndex;
@property(retain, nonatomic) NSNumber *albumSubclass; // @synthesize albumSubclass=_albumSubclass;
@property(retain, nonatomic) NSString *parentUUID; // @synthesize parentUUID=_parentUUID;
@property(retain, nonatomic) NSArray *assetUUIDs; // @synthesize assetUUIDs=_assetUUIDs;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isEqualToAlbum:(id)arg1;
- (id)_itemType;
- (id)propertyList;
- (id)initFromPropertyList:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithUUID:(id)arg1;
- (id)init;

@end
