//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

#import "SBViewControllerInteractiveAnimatedTransitioning.h"

@class BSUIAnimationFactory, NSString, SBSceneLayoutAnimationWrapperView, SBWorkspaceApplicationSceneTransitionContext;

@interface SBUISwitchAppSwipeAnimationController : SBUIMainScreenAnimationController <SBViewControllerInteractiveAnimatedTransitioning>
{
    BSUIAnimationFactory *_animationFactory;
    id <SBDosidoAnimator> _currentAnimator;
    unsigned long long _currentDirection;
    SBSceneLayoutAnimationWrapperView *_startingView;
    SBSceneLayoutAnimationWrapperView *_targetView;
    SBWorkspaceApplicationSceneTransitionContext *_startingTransitionContext;
    SBWorkspaceApplicationSceneTransitionContext *_targetTransitionContext;
    SBWorkspaceApplicationSceneTransitionContext *_endingTransitionContext;
    id <SBViewControllerContextTransitioning> _animationTransition;
}

@property(readonly, nonatomic) SBWorkspaceApplicationSceneTransitionContext *endingTransitionContext; // @synthesize endingTransitionContext=_endingTransitionContext;
@property(readonly, nonatomic) SBWorkspaceApplicationSceneTransitionContext *targetTransitionContext; // @synthesize targetTransitionContext=_targetTransitionContext;
@property(readonly, nonatomic) unsigned long long currentDirection; // @synthesize currentDirection=_currentDirection;
- (void).cxx_destruct;
- (id)_animationSettings;
- (id)_animationFactory;
- (void)_animator:(id)arg1 finishedAnimating:(_Bool)arg2;
- (void)_startAnimatingInDirection:(unsigned long long)arg1;
- (id)_newStretchTransformerForDirection:(unsigned long long)arg1;
- (id)_newDosidoAnimatorForDirection:(unsigned long long)arg1;
- (id)_newAnimationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned long long)arg2 displayMode:(long long)arg3;
- (double)stepPercentage;
- (_Bool)isStepped;
- (double)percentComplete;
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;
- (void)animateTransition:(id)arg1;
- (id)transitionAnimationFactory:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)enableSteppingWithAnimationSettings:(id)arg1;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (id)_transitionAnimator;
- (id)animationSettings;
- (id)containerView;
- (id)_getTransitionWindow;
- (id)_customizedDescriptionProperties;
- (void)startAnimatingInDirection:(unsigned long long)arg1 withContext:(id)arg2;
- (id)initWithTransitionContextProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

