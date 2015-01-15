//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSceneClient.h"
#import "FBWorkspaceServerSceneEventHandler.h"

@class FBSDisplay, FBSSceneClientSettings, FBSSceneSettings, FBWorkspace, NSObject<OS_dispatch_queue>, NSString;

@interface FBWorkspaceScene : NSObject <FBWorkspaceServerSceneEventHandler, FBSceneClient>
{
    id <FBSceneHost> _host;
    FBWorkspace *_workspace;
    NSObject<OS_dispatch_queue> *_workspaceQueue;
    NSString *_identifier;
    FBSDisplay *_display;
    FBSSceneSettings *_settings;
    FBSSceneClientSettings *_clientSettings;
    _Bool _sentCreationEvent;
    _Bool _invalidated;
}

@property(copy, nonatomic, getter=_workspaceQueue_sceneSettings, setter=_workspaceQueue_setSceneSettings:) FBSSceneSettings *sceneSettings; // @synthesize sceneSettings=_settings;
@property(nonatomic, getter=_workspaceQueue_hasSentCreationEvent, setter=_workspaceQueue_setSentCreationEvent:) _Bool sentCreationEvent; // @synthesize sentCreationEvent=_sentCreationEvent;
- (void)sceneDidReceiveActions:(id)arg1;
- (void)sceneDidUpdateClientSettings:(id)arg1;
- (void)sceneDetachContext:(id)arg1;
- (void)sceneUpdateContext:(id)arg1;
- (void)sceneAttachContext:(id)arg1;
- (void)host:(id)arg1 didReceiveActions:(id)arg2;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)_descriptionWithMultilinePrefix:(id)arg1;
- (void)_workspaceQueue_sendDestroyWithTransitionContext:(id)arg1 responseEventHandler:(CDUnknownBlockType)arg2;
- (void)_workspaceQueue_sendSettingsDiff:(id)arg1 transitionContext:(id)arg2 responseEventHandler:(CDUnknownBlockType)arg3;
- (void)_workspaceQueue_invalidate;
- (id)_workspaceQueue;
- (id)_workspaceQueue_process;
- (void)_workspaceQueue_dispatchClientBlockIfNecessary:(CDUnknownBlockType)arg1;
- (void)invalidate;
@property(readonly, copy, nonatomic) FBSSceneSettings *settings;
@property(readonly, nonatomic) id <FBSceneHost> host;
@property(readonly, nonatomic) FBWorkspace *parentWorkspace;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)dealloc;
- (id)initWithParentWorkspace:(id)arg1 host:(id)arg2 initialClientSettings:(id)arg3;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
