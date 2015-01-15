//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKCharacteristicType, HKCorrelationType, HKHealthService, HKObjectType, HKQuantity, HKSampleType, HKWorkout, NSArray, NSDate, NSDateComponents, NSDictionary, NSError, NSNumber, NSSet, NSString, NSUUID, _HKFilter, _HKMedicalIDData;

@protocol HDServerInterface <NSObject>
- (void)fetchDiagnosticsWithKey:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)stopRecordingDataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)startRecordingDataToFile:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)stopReplayingDataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)startReplayingDataFromFile:(NSString *)arg1 repeat:(_Bool)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)stopFakingDataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)startFakingDataWithActivity:(long long)arg1 speed:(HKQuantity *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)performMigrationWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)getDatabaseSizeInBytesWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)removeDefaultForKey:(NSString *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)setDefaultValue:(NSDictionary *)arg1 forKey:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)getDefaultForKey:(NSString *)arg1 withHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)removePeripheral:(NSUUID *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)addPeripheral:(NSUUID *)arg1 name:(NSString *)arg2 forServices:(NSArray *)arg3 withCompletion:(void (^)(_Bool, NSError *))arg4;
- (void)performHealthServiceOperation:(NSString *)arg1 onSession:(unsigned long long)arg2 withParameters:(NSDictionary *)arg3 completion:(void (^)(NSString *, _Bool, NSError *))arg4;
- (void)getHealthServiceProperty:(NSString *)arg1 forSession:(unsigned long long)arg2 withHandler:(void (^)(id, NSError *))arg3;
- (void)removePairingForHealthService:(HKHealthService *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)addPairingForHealthService:(HKHealthService *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)getHealthServicePairingsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)endHealthServiceSession:(unsigned long long)arg1;
- (void)startHealthServiceSession:(HKHealthService *)arg1 withCompletion:(void (^)(unsigned long long, NSError *))arg2;
- (void)endHealthServiceDiscovery:(unsigned long long)arg1;
- (void)startHealthServiceDiscovery:(long long)arg1 withCompletion:(void (^)(unsigned long long, NSError *))arg2;
- (void)endBluetoothStatusUpdates;
- (void)beginBluetoothStatusUpdates:(void (^)(long long, NSError *))arg1;
- (void)setCharacteristic:(id)arg1 forDataType:(HKCharacteristicType *)arg2 handler:(void (^)(_Bool, NSError *))arg3;
- (void)fetchCharacteristicWithDataType:(HKObjectType *)arg1 handler:(void (^)(id, NSError *))arg2;
- (void)deleteMedicalIDDataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)updateMedicalIDData:(_HKMedicalIDData *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)medicalIDDataCreateIfNecessary:(_Bool)arg1 completion:(void (^)(_HKMedicalIDData *, NSError *))arg2;
- (void)setDataCollectionOptionForType:(HKSampleType *)arg1 key:(NSString *)arg2 value:(NSNumber *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)deleteSourceWithBundleIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)deleteAllSamplesWithTypes:(NSArray *)arg1 sourceBundleIdentifier:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)setOrderedSources:(NSArray *)arg1 forObjectType:(HKObjectType *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)orderedSourcesForObjectType:(HKObjectType *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)allSourcesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)hasSourceWithBundleIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)closeTransactionWithDataType:(HKObjectType *)arg1 anchor:(NSNumber *)arg2 ackTime:(NSNumber *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)setBackgroundDeliveryFrequency:(long long)arg1 forDataType:(HKObjectType *)arg2 handler:(void (^)(_Bool, NSError *))arg3;
- (void)addSamples:(NSArray *)arg1 toWorkout:(HKWorkout *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)deleteDataObjects:(NSArray *)arg1 handler:(void (^)(_Bool, NSError *))arg2;
- (void)saveDataObjects:(NSArray *)arg1 handler:(void (^)(_Bool, NSError *))arg2;
- (void)startCorrelationQuery:(NSUUID *)arg1 correlationType:(HKCorrelationType *)arg2 correlationFilter:(_HKFilter *)arg3 sampleFilters:(NSDictionary *)arg4 client:(id)arg5 handler:(void (^)(id, _Bool, NSError *))arg6;
- (void)startObserverQuery:(NSUUID *)arg1 sampleType:(HKSampleType *)arg2 filter:(_HKFilter *)arg3 client:(id)arg4 handler:(void (^)(id, _Bool, NSError *))arg5;
- (void)startAnchoredObjectQuery:(NSUUID *)arg1 sampleType:(HKSampleType *)arg2 filter:(_HKFilter *)arg3 anchor:(NSNumber *)arg4 limit:(unsigned long long)arg5 client:(id)arg6 handler:(void (^)(id, _Bool, NSError *))arg7;
- (void)startStatisticsCollectionQuery:(NSUUID *)arg1 sampleType:(HKSampleType *)arg2 filter:(_HKFilter *)arg3 anchorDate:(NSDate *)arg4 statisticsOptions:(unsigned long long)arg5 intervalComponents:(NSDateComponents *)arg6 shouldListenForUpdates:(_Bool)arg7 client:(id)arg8 handler:(void (^)(id, _Bool, NSError *))arg9;
- (void)startStatisticsQuery:(NSUUID *)arg1 sampleType:(HKSampleType *)arg2 filter:(_HKFilter *)arg3 statisticsOptions:(unsigned long long)arg4 client:(id)arg5 handler:(void (^)(id, _Bool, NSError *))arg6;
- (void)startSourcesQuery:(NSUUID *)arg1 sampleType:(HKSampleType *)arg2 filter:(_HKFilter *)arg3 client:(id)arg4 handler:(void (^)(id, _Bool, NSError *))arg5;
- (void)startSampleQuery:(NSUUID *)arg1 sampleType:(HKSampleType *)arg2 filter:(_HKFilter *)arg3 maxResults:(unsigned long long)arg4 sortDescriptors:(NSArray *)arg5 client:(id)arg6 handler:(void (^)(id, _Bool, NSError *))arg7;
- (void)endAuthorizationDelegateTransactionWithError:(NSError *)arg1;
- (void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(NSUUID *)arg1 handler:(void (^)(HKSource *, NSError *))arg2;
- (void)resetAuthorizationStatusForBundleIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setRequestedAuthorizationForBundleIdentifier:(NSString *)arg1 shareTypes:(NSSet *)arg2 readTypes:(NSSet *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)setAuthorizationStatuses:(NSDictionary *)arg1 forBundleIdentifier:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)allAuthorizationRecordsForType:(HKObjectType *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)allAuthorizationRecordsForBundleIdentifier:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)requestAuthorizationToShareTypes:(NSSet *)arg1 readTypes:(NSSet *)arg2 shouldPrompt:(_Bool)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)authorizationStatusForType:(HKObjectType *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
@end
