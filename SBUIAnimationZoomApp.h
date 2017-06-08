//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class BSAnimationSettings, FBSceneHostManager, NSString, SBAppStatusBarSettingsAssertion, UIView;

@interface SBUIAnimationZoomApp : SBUIMainScreenAnimationController
{
    UIView *_hostView;
    NSString *_hostRequester;
    FBSceneHostManager *_transitioningSceneHostManager;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    BSAnimationSettings *_animationSettings;
    _Bool _shouldHideAppStatusBar;
    unsigned long long _zoomDirection;
}

@property(readonly, nonatomic) unsigned long long zoomDirection; // @synthesize zoomDirection=_zoomDirection;
@property(retain, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
- (void).cxx_destruct;
- (double)_animationDelay;
- (double)_animationDuration;
- (id)_appStatusBarTransitionInfo;
- (void)_animateFakeStatusBarWithParameters:(id)arg1;
- (void)_animateWallpaperWithFactory:(id)arg1;
- (_Bool)_shouldHideAppStatusBar;
- (_Bool)_prefersSceneSnapshot;
- (_Bool)_requiresLiveHostView;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (id)_viewsForAnimationStepping;
- (_Bool)_waitsForActivatingSceneContentAvailableIfNecessary;
- (void)_setupCoordinatingTransitions;
- (id)initWithTransitionContextProvider:(id)arg1 zoomDirection:(unsigned long long)arg2;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

