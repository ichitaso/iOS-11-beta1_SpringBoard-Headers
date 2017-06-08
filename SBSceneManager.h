//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "BSInvalidatable.h"
#import "FBSceneManagerDelegate.h"
#import "FBSceneManagerObserver.h"
#import "SBApplicationSceneHandleProviding.h"
#import "SBSceneLayoutViewControllerDelegate.h"

@class BSCopyingCacheSet, FBSDisplayIdentity, FBSceneManager, NSCountedSet, NSHashTable, NSMapTable, NSMutableSet, NSString, SBLayoutState, SBLayoutStateManager, SBLayoutStateTransitionCoordinator, SBPolicyAggregator, SBSceneLayoutViewController, SBSceneLayoutWindow, SBSceneManagerReference;

@interface SBSceneManager : NSObject <SBSceneLayoutViewControllerDelegate, FBSceneManagerObserver, FBSceneManagerDelegate, BSDescriptionProviding, BSInvalidatable, SBApplicationSceneHandleProviding>
{
    long long _state;
    FBSceneManager *_sceneManager;
    SBSceneManagerReference *_selfReference;
    _Bool _hidden;
    SBSceneLayoutWindow *_window;
    SBSceneLayoutViewController *_sceneLayoutViewController;
    _Bool _layoutControllerHasVisibleElements;
    SBPolicyAggregator *_policyAggregator;
    SBLayoutStateManager *_layoutStateManager;
    SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
    NSMapTable *_persistentMapSceneIdentityToSceneHandle;
    NSMapTable *_transientMapSceneIdentityToSceneHandle;
    BSCopyingCacheSet *_allScenes;
    BSCopyingCacheSet *_alertScenes;
    BSCopyingCacheSet *_windowScenes;
    BSCopyingCacheSet *_daemonScenes;
    BSCopyingCacheSet *_pluginScenes;
    BSCopyingCacheSet *_workspaceScenes;
    BSCopyingCacheSet *_externalApplicationSceneHandles;
    BSCopyingCacheSet *_externalForegroundApplicationSceneHandles;
    BSCopyingCacheSet *_reportedExternalForegroundApplicationSceneHandles;
    NSCountedSet *_assertedBackgroundScenes;
    NSMutableSet *_outgoingSnapshots;
    NSMutableSet *_incomingSnapshots;
    NSHashTable *_observers;
    _Bool _layoutControllerCreationReentrancyGuard;
    SBLayoutState *_currentLayoutState;
}

+ (Class)_sceneLayoutWindowClass;
+ (Class)_applicationSceneHandleClass;
+ (Class)_layoutStateManagerClass;
@property(retain, nonatomic) SBLayoutState *currentLayoutState; // @synthesize currentLayoutState=_currentLayoutState;
- (void).cxx_destruct;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;
- (id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;
- (long long)sceneManager:(id)arg1 hostingPolicyForScene:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 success:(_Bool)arg4;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void)sceneLayoutController:(id)arg1 noteHasVisibleElements:(_Bool)arg2;
- (id)_fetchOrCreateApplicationSceneHandleForApplication:(id)arg1 withIdentity:(id)arg2 orScene:(id)arg3;
- (id)fetchOrCreateApplicationSceneHandleForApplication:(id)arg1 withIdentity:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1;
- (void)_doObserverCalloutWithBlock:(CDUnknownBlockType)arg1;
- (void)_noteObserversDidInvalidate;
- (void)_removeReportedForegroundExternalApplicationSceneHandle:(id)arg1;
- (void)_addReportedForegroundExternalApplicationSceneHandle:(id)arg1;
- (void)_updateStateForScene:(id)arg1 withSettings:(id)arg2;
- (_Bool)_windowShouldBeHidden;
- (_Bool)_shouldRequestSnapshotActionsForScene:(id)arg1;
- (void)_noteDidCommitUpdateForScene:(id)arg1;
- (void)_noteDidChangeToVisibility:(unsigned long long)arg1 forScene:(id)arg2;
- (id)_sceneWindowLayoutStrategy;
- (void)_setupLayoutStateTransitionCoordinator:(id)arg1;
- (id)_newSceneLayoutViewController;
- (_Bool)_shouldFenceTransitionForScene:(id)arg1 updatedClientSettingsDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (id)_snapshotRequestsForSceneHandle:(id)arg1 settings:(id)arg2;
- (void)_scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)_scene:(id)arg1 willUpdateWithSettings:(id)arg2 transitionContext:(id)arg3;
- (_Bool)_handleAction:(id)arg1 forScene:(id)arg2;
- (long long)_hostingPolicyForScene:(id)arg1;
@property(nonatomic, getter=isHidden) _Bool hidden;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
@property(readonly, nonatomic) SBLayoutStateManager *_layoutStateManager;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)additionalActionsForApplicationSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
- (id)assertBackgroundedStatusForScenes:(id)arg1;
- (id)existingSceneHandleForSceneIdentity:(id)arg1;
- (id)existingSceneHandleForScene:(id)arg1;
- (id)scenesForWorkspaceWithID:(id)arg1;
- (id)pluginScenes;
- (id)daemonScenes;
- (id)externalForegroundApplicationSceneHandles;
- (id)externalApplicationSceneHandles;
- (id)windowScenes;
- (id)alertScenes;
- (id)allScenes;
@property(readonly, nonatomic) SBPolicyAggregator *policyAggregator;
@property(readonly, nonatomic) SBSceneLayoutViewController *sceneLayoutViewController;
@property(readonly, nonatomic) SBSceneLayoutWindow *window;
@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)dealloc;
- (id)init;
- (id)initWithReference:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

