//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBActivateAppUnderLockScreenWorkspaceTransaction.h"

@class SBApplicationSceneEntity;

@interface SBReturnToLockscreenWorkspaceTransaction : SBActivateAppUnderLockScreenWorkspaceTransaction
{
    SBApplicationSceneEntity *_fromAppSceneEntity;
    _Bool _workspaceAlreadyResumed;
    _Bool _animatedAppDeactivation;
}

- (void).cxx_destruct;
- (void)_animationDidFinish;
- (void)_animationWillBegin:(_Bool)arg1;
- (id)_setupAnimation;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_didComplete;
- (id)debugDescription;
- (id)initWithTransitionRequest:(id)arg1 toLockScreenController:(id)arg2;

@end

