//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class DVTFilePath, IDEConsoleItem, NSData, NSDate, NSError, NSString;

@protocol IDEPlaygroundExecutionSessionMonitorProtocol
- (void)reportExecutionWillFinish;
- (void)reportExpressionCompleted;
- (void)reportError:(NSError *)arg1;
- (void)reportConsoleItem:(IDEConsoleItem *)arg1;
- (void)reportData:(NSData *)arg1 withMetadata:(NSData *)arg2 identifier:(NSString *)arg3 date:(NSDate *)arg4 version:(unsigned long long)arg5;
- (void)runExecutableLauncherBlockWithSlaveFilename:(NSString *)arg1 socket:(NSString *)arg2 executablePath:(DVTFilePath *)arg3 callback:(void (^)(long long, NSError *))arg4;
- (void)updateSerializedPlaygroundDataPath:(DVTFilePath *)arg1;
- (void)updateSerializationError:(NSError *)arg1;
- (void)updateOperationError:(NSError *)arg1;
- (void)updatePlaygroundExecutionState:(unsigned long long)arg1;
@end
