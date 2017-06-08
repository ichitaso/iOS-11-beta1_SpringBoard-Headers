//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "BSInvalidatable.h"
#import "FBSceneHostManagerObserver.h"
#import "SBSceneManagerObserver.h"

@class NSMutableDictionary, NSMutableSet, NSSet, NSString, SBAlertItemsController, SBApplicationController;

@interface SBApplicationLaunchAlertService : NSObject <BSDescriptionProviding, SBSceneManagerObserver, FBSceneHostManagerObserver, BSInvalidatable>
{
    NSSet *_launchAlertEvaluators;
    SBApplicationController *_applicationController;
    SBAlertItemsController *_alertItemsController;
    NSSet *_sceneManagers;
    NSMutableSet *_foregroundingScenes;
    NSMutableDictionary *_mapBundleIDToLaunchAlertInfo;
    _Bool _invalidated;
}

- (void).cxx_destruct;
- (void)_invalidateAndDismissLaunchAlertsForLaunchAlertInfo:(id)arg1;
- (void)_reallyShowLaunchAlertOfType:(unsigned long long)arg1 withLaunchAlertInfo:(id)arg2 application:(id)arg3;
- (void)_tryShowLaunchAlertsForLaunchAlertInfo:(id)arg1;
- (void)_sceneDidResignForeground:(id)arg1;
- (void)_sceneDidBecomeForeground:(id)arg1;
- (void)_sceneWillBecomeForeground:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)sceneHostManagerContentStateDidChange:(id)arg1;
- (void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)invalidate;
@property(readonly, copy) NSString *description;
- (void)showLaunchAlertOfType:(unsigned long long)arg1 forApplication:(id)arg2;
- (void)dealloc;
- (id)initObservingSceneManagers:(id)arg1 launchAlertEvaluators:(id)arg2 applicationController:(id)arg3 alertItemsController:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

