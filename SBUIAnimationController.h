//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBTransaction.h"

#import "SBSceneHandleObserver.h"
#import "SBUIAnimationControllerCoordinating.h"
#import "SBUIAnimationStepping.h"
#import "SBViewControllerTransitionContextDelegate.h"
#import "UIViewControllerInteractiveTransitioning.h"

@class BSAnimationSettings, BSBlockTransaction, BSTransaction, NSMutableSet, NSSet, NSString, SBAnimationStepper, SBApplicationSceneEntity, SBViewControllerTransitionContext, UIView, UIWindow;

@interface SBUIAnimationController : SBTransaction <SBSceneHandleObserver, UIViewControllerInteractiveTransitioning, SBViewControllerTransitionContextDelegate, SBUIAnimationStepping, SBUIAnimationControllerCoordinating>
{
    id <SBUIAnimationControllerTransitionContextProvider> _transitionContextProvider;
    BSBlockTransaction *_animationTransaction;
    BSBlockTransaction *_notifyObserversTransaction;
    BSBlockTransaction *_cleanupTransaction;
    NSSet *_sceneHandlesBeingObserved;
    NSSet *_entitiesToObserve;
    NSSet *_startTransactionDependencies;
    NSMutableSet *_coordinatingChildRelationships;
    NSMutableSet *_steppedCoordinatingChildAnimations;
    SBAnimationStepper *_stepper;
    UIWindow *_transitionWindow;
    UIView *_transitionContainer;
    int _animationState;
    _Bool _didPostBeginAnimationNotification;
    _Bool _didNotifyObserversOfCompletion;
    _Bool _needsCATransactionActivate;
    SBViewControllerTransitionContext *_transition;
    CDUnknownBlockType _animationTransactionCompletion;
}

@property(nonatomic) _Bool needsCATransactionActivate; // @synthesize needsCATransactionActivate=_needsCATransactionActivate;
@property(copy, nonatomic) CDUnknownBlockType animationTransactionCompletion; // @synthesize animationTransactionCompletion=_animationTransactionCompletion;
@property(retain, nonatomic) SBViewControllerTransitionContext *transition; // @synthesize transition=_transition;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_transitionContainer;
@property(readonly, nonatomic) BSTransaction *cleanupTransaction; // @synthesize cleanupTransaction=_cleanupTransaction;
@property(readonly, nonatomic) BSTransaction *notifyObserversTransaction; // @synthesize notifyObserversTransaction=_notifyObserversTransaction;
@property(readonly, nonatomic) BSTransaction *animationTransaction; // @synthesize animationTransaction=_animationTransaction;
@property(retain, nonatomic) id <SBUIAnimationControllerTransitionContextProvider> transitionContextProvider; // @synthesize transitionContextProvider=_transitionContextProvider;
- (void).cxx_destruct;
- (void)transitionDidFinish:(id)arg1;
- (id)coordinatingAnimationControllers;
- (void)startInteractiveTransition:(id)arg1;
- (void)finishSteppingBackwardToStart;
- (void)finishSteppingForwardToEnd;
@property(nonatomic) double stepPercentage;
@property(readonly, nonatomic, getter=isStepped) _Bool stepped;
- (void)_cleanupEntityObservers;
- (void)_registerEntityObserversIfNecessary;
- (void)__cleanupAnimation;
- (_Bool)__animationShouldStart;
- (void)__reportAnimationCompletion;
- (void)__noteAnimationDidTerminate;
- (void)_noteAnimationDidFail;
- (void)_noteAnimationDidFinish;
- (void)_noteAnimationDidRevealApplication;
- (void)_notifyObserversOfAnimationCompletion;
- (void)_entityObserverProgressDidChange:(CDUnknownBlockType)arg1 waitForSceneContentAvailableTransactionBlock:(CDUnknownBlockType)arg2;
- (void)_processStateDidChange:(id)arg1;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (id)_viewsForAnimationStepping;
- (_Bool)_shouldDismissBanner;
- (id)_transitionAnimator;
- (void)_cleanupAnimation;
- (void)_abortAnimation;
- (void)_startAnimation;
- (void)_sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (void)_application:(id)arg1 processStateDidChange:(id)arg2;
- (id)_progressDependencies;
- (_Bool)_waitsForActivatingSceneContentAvailableIfNecessary;
- (id)__startTransactionDependencyForEntity:(id)arg1;
- (id)_displayIdentity;
- (void)_prepareAnimation;
- (void)_willBeginWaitingForStartDependencies;
- (void)_setHidden:(_Bool)arg1;
- (id)_animationIdentifier;
- (_Bool)_willAnimate;
- (_Bool)__wantsInitialProgressStateChange;
- (void)_addDebugLogCategory:(id)arg1;
- (void)_willComplete;
- (void)_begin;
- (void)_didInterruptWithReason:(id)arg1;
- (_Bool)_canBeInterrupted;
- (id)__alertItemsController;
- (void)_enumerateCoordinatingAnimationsWithSchedulingPolicy:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)_enumerateCoordinatingAnimationsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateCoordinatingChildRelationshipsWithBlock:(CDUnknownBlockType)arg1;
- (void)enableSteppingWithAnimationSettings:(id)arg1;
- (_Bool)isReasonableMomentToInterrupt;
- (_Bool)isFinishedAnimating;
- (_Bool)waitingToStart;
- (void)_willSetupStartDependencies;
- (void)__abortAnimation;
- (void)__startAnimation;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)stopDelayingAnimationForTransaction:(id)arg1;
- (void)delayAnimationUntilTransactionFinishes:(id)arg1;
- (void)stopDelayingCleanupForTransaction:(id)arg1;
- (void)delayCleanupUntilTransactionFinishes:(id)arg1;
- (void)addSteppedCoordinatingChildAnimation:(id)arg1;
- (void)addCoordinatingChildTransaction:(id)arg1 withSchedulingPolicy:(unsigned long long)arg2;
@property(readonly, nonatomic) BSAnimationSettings *animationSettings;
@property(readonly, nonatomic) id <SBViewControllerTransitionCoordinator> transitionCoordinator;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive;
@property(readonly, nonatomic) _Bool transitionWasRestarted;
@property(readonly, nonatomic) _Bool transitionWasCancelled;
- (void)restartTransition;
- (void)cancelTransition;
@property(readonly, nonatomic) _Bool transitionSupportsRestarting;
@property(readonly, nonatomic) _Bool transitionSupportsCancelling;
- (void)_setAnimationState:(int)arg1;
- (_Bool)_isNullAnimation;
- (_Bool)animating;
- (int)_animationState;
@property(readonly, nonatomic) SBApplicationSceneEntity *fromApplicationSceneEntity;
@property(readonly, nonatomic) SBApplicationSceneEntity *toApplicationSceneEntity;
@property(readonly, copy, nonatomic) NSSet *fromApplicationSceneEntities;
@property(readonly, copy, nonatomic) NSSet *toApplicationSceneEntities;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)init;
- (id)_getTransitionWindow;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

