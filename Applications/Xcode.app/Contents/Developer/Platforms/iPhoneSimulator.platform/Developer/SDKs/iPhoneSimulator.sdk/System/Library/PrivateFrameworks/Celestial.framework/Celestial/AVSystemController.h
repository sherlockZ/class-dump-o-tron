//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AVSystemController : NSObject
{
    struct AVSystemControllerPrivate *_priv;
}

+ (id)sharedAVSystemController;
+ (void)initialize;
- (void)postEffectiveVolumeNotification:(void *)arg1;
- (void)postFullMuteDidChangeNotification:(void *)arg1;
- (void)handleServerDied;
- (_Bool)okToNotifyFromThisThread;
- (void)makeError:(id *)arg1 withDescription:(id)arg2 code:(int)arg3;
- (_Bool)setAttribute:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)attributeForKey:(id)arg1;
- (_Bool)allowUserToExceedEUVolumeLimit;
- (_Bool)currentRouteHasVolumeControl;
- (id)pickableRoutesForCategory:(id)arg1;
- (id)pickableRoutesForCategory:(id)arg1 andMode:(id)arg2;
- (id)volumeCategoryForAudioCategory:(id)arg1;
- (id)routeForCategory:(id)arg1;
- (_Bool)getVolume:(float *)arg1 forCategory:(id)arg2;
- (_Bool)enablePortDiscovery:(_Bool)arg1;
- (_Bool)getPortDiscoveryEnabled;
- (_Bool)setPickedRouteWithPassword:(id)arg1 withPassword:(id)arg2;
- (_Bool)setBTHFPRoute:(id)arg1 availableForVoicePrompts:(_Bool)arg2;
- (_Bool)setVolumeTo:(float)arg1 forCategory:(id)arg2;
- (_Bool)changeVolumeBy:(float)arg1 forCategory:(id)arg2;
- (_Bool)getActiveCategoryMuted:(_Bool *)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (_Bool)getActiveCategoryMuted:(_Bool *)arg1;
- (_Bool)toggleActiveCategoryMutedForRoute:(id)arg1 andDeviceIdentifier:(id)arg2;
- (_Bool)toggleActiveCategoryMuted;
- (_Bool)getVolumeForAccessory:(float *)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4;
- (_Bool)setVolumeForAccessoryTo:(float)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4;
- (_Bool)changeVolumeForAccessoryBy:(float)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4;
- (_Bool)getActiveCategoryVolume:(float *)arg1 andName:(id *)arg2 forRoute:(id)arg3 andDeviceIdentifier:(id)arg4;
- (_Bool)setActiveCategoryVolumeTo:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (_Bool)changeActiveCategoryVolumeBy:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (_Bool)getActiveCategoryVolume:(float *)arg1 andName:(id *)arg2;
- (_Bool)getActiveCategoryVolume:(float *)arg1 andName:(id *)arg2 fallbackCategory:(id)arg3;
- (_Bool)setActiveCategoryVolumeTo:(float)arg1;
- (_Bool)setActiveCategoryVolumeTo:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float *)arg3 affectedCategory:(id *)arg4;
- (_Bool)changeActiveCategoryVolumeBy:(float)arg1;
- (_Bool)getVibeIntensity:(float *)arg1;
- (_Bool)setVibeIntensityTo:(float)arg1;
- (_Bool)changeActiveCategoryVolumeBy:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float *)arg3 affectedCategory:(id *)arg4;
- (void)dealloc;
- (id)init;

@end
