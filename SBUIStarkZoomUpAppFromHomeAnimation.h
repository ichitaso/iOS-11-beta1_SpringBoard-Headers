//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIStarkScreenAnimationController.h"

#import "SBIconAnimatorDelegate.h"

@class NSString, SBAlert, SBIconAnimator, UIView;

@interface SBUIStarkZoomUpAppFromHomeAnimation : SBUIStarkScreenAnimationController <SBIconAnimatorDelegate>
{
    UIView *_viewToAnimate;
    SBIconAnimator *_iconAnimator;
    SBAlert *_alertImpersonator;
    _Bool _animationFinished;
    _Bool _fromAssistant;
    _Bool _folderIsDisplayingIcon;
}

- (void).cxx_destruct;
- (void)iconAnimatorWasInvalidated:(id)arg1;
- (void)_noteZoomDidFinish;
- (void)_cleanupHosting;
- (void)_animateZoomWithCompletion:(CDUnknownBlockType)arg1;
- (void)_prepareZoom;
- (double)_animationDelay;
- (void)_setReferenceIconViewIsInTransitionIfAppropriate:(_Bool)arg1;
- (void)_noteDependencyDidInvalidate;
- (id)_viewToAnimate;
- (id)_iconAnimationSettings;
- (id)animationSettings;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)_application:(id)arg1 processStateDidChange:(id)arg2;
- (id)_progressDependencies;
- (_Bool)_waitsForActivatingSceneContentAvailableIfNecessary;
- (void)dealloc;
- (id)initWithToApplicationSceneEntity:(id)arg1 alertImpersonator:(id)arg2 starkScreenController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

