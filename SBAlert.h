//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BSDescriptionProviding.h"
#import "SBActivationSettings.h"
#import "SBApplicationHosting.h"
#import "SBButtonEventsHandler.h"
#import "SBDeactivationSettings.h"
#import "SBDisplay.h"
#import "SBIdleTimerProviding.h"

@class FBDisplayLayoutElement, NSHashTable, NSMutableDictionary, NSString, SBActivationSettings, SBAlertManager, SBAlertView, SBDeactivationSettings, UIScreen;

@interface SBAlert : UIViewController <BSDescriptionProviding, SBDisplay, SBApplicationHosting, SBActivationSettings, SBDeactivationSettings, SBButtonEventsHandler, SBIdleTimerProviding>
{
    id <SBAlertDelegate> _alertDelegate;
    SBAlertView *_display;
    NSMutableDictionary *_dictionary;
    _Bool _isWallpaperTunnelActive;
    _Bool _backgroundStyleIsSet;
    long long _backgroundStyle;
    _Bool _isForcingBackgroundStyleUpdate;
    _Bool _suppressesBanners;
    _Bool _expectsFaceContact;
    _Bool _occluding;
    SBActivationSettings *_activationSettings;
    SBDeactivationSettings *_deactivationSettings;
    int _orientationChangedEventsEnabled;
    _Bool _requestedDismissal;
    UIScreen *_targetScreen;
    FBDisplayLayoutElement *_displayLayoutElement;
    NSHashTable *_observers;
    id <SBIdleTimerCoordinating> _idleTimerCoordinator;
    id <SBIdleTimer> _idleTimer;
    SBAlertManager *_alertManager;
}

+ (void)test;
+ (void)registerForAlerts;
@property(retain, nonatomic) SBAlertManager *alertManager; // @synthesize alertManager=_alertManager;
@property(retain, nonatomic, getter=_idleTimer, setter=_setIdleTimer:) id <SBIdleTimer> idleTimer; // @synthesize idleTimer=_idleTimer;
@property(nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) __weak id <SBIdleTimerCoordinating> idleTimerCoordinator; // @synthesize idleTimerCoordinator=_idleTimerCoordinator;
@property(nonatomic) _Bool expectsFaceContact; // @synthesize expectsFaceContact=_expectsFaceContact;
@property(nonatomic, getter=_requestedDismissal, setter=_setRequestedDismissal:) _Bool requestedDismissal; // @synthesize requestedDismissal=_requestedDismissal;
- (void).cxx_destruct;
- (_Bool)_isActiveAlert;
- (id)_displayLayoutElementIdentifier;
- (void)_deactivateLayoutElement;
@property(nonatomic, getter=_isOccluding, setter=_setOccluding:) _Bool _occluding;
- (void)_removeFromImpersonatedAppIfNecessary;
- (id)_impersonatesApplicationWithBundleID;
- (void)removeFromView;
- (void)alertViewIsReadyToDismiss:(id)arg1;
- (void)setDisplay:(id)arg1;
- (void)setAlertDelegate:(id)arg1;
- (id)alertDelegate;
- (_Bool)_shouldDismissSwitcherOnActivation;
- (id)coordinatorRequestedIdleTimerDescriptor:(id)arg1;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)hostedApp;
- (_Bool)isHostingAnApp;
- (_Bool)canHostAnApp;
@property(readonly, nonatomic) long long swipeDismissalStyle;
@property(readonly, nonatomic) long long whitePointAdaptivityStyle;
@property(readonly, nonatomic) _Bool activatedForSiri;
@property(readonly, nonatomic) _Bool suppressesSiri;
@property(readonly, nonatomic) _Bool suppressesControlCenter;
@property(readonly, nonatomic) _Bool suppressesCoverSheetGesture;
@property(nonatomic) _Bool suppressesBanners;
- (void)handleAutoLock;
- (_Bool)hasTranslucentBackground;
- (_Bool)shouldPendAlertItemsWhileActive;
- (_Bool)handleHeadsetButtonPress:(_Bool)arg1;
- (_Bool)handleVolumeDownButtonPress;
- (_Bool)handleVolumeUpButtonPress;
- (_Bool)handleLockButtonPress;
- (_Bool)handleHomeButtonLongPress;
- (_Bool)handleHomeButtonDoublePress;
- (_Bool)handleHomeButtonPress;
- (void)animateDeactivation;
- (_Bool)currentlyAnimatingDeactivation;
- (id)legibilitySettings;
- (id)effectiveStatusBarStyleRequest;
- (long long)effectiveStatusBarStyle;
- (id)statusBarStyleRequest;
- (long long)preferredStatusBarStyle;
- (double)longPressDurationForHomeButton;
- (double)autoLockTime;
- (double)autoDimTime;
- (_Bool)allowsEventOnlySuspension;
- (_Bool)orientationChangedEventsEnabled;
- (void)setOrientationChangedEventsEnabled:(_Bool)arg1;
- (void)deactivate;
- (void)activate;
- (int)statusBarStyleOverridesToCancel;
- (void)displayDidDisappear;
- (void)displayWillDisappear;
- (void)displayWillAppear;
- (float)finalAlpha;
- (_Bool)wantsTimeInStatusBar;
- (_Bool)undimsDisplay;
- (_Bool)allowsStackingOfAlert:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)removeBackgroundStyleWithAnimationFactory:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1 withAnimationFactory:(id)arg2 force:(_Bool)arg3;
- (void)setBackgroundStyle:(long long)arg1 withAnimationFactory:(id)arg2;
- (long long)customBackgroundStyle;
- (_Bool)wantsCustomBackgroundStyleForAllWallpaperVariants;
- (_Bool)wantsCustomBackgroundStyle;
- (_Bool)isWallpaperTunnelActive;
- (void)setWallpaperTunnelActive:(_Bool)arg1;
- (void)clearDeactivationSettings;
- (void)applyDeactivationSettings:(id)arg1;
- (id)copyDeactivationSettings;
- (id)objectForDeactivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forDeactivationSetting:(unsigned int)arg2;
- (_Bool)boolForDeactivationSetting:(unsigned int)arg1;
- (long long)flagForDeactivationSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned int)arg2;
- (void)clearActivationSettings;
- (void)applyActivationSettings:(id)arg1;
- (id)copyActivationSettings;
- (id)objectForActivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forActivationSetting:(unsigned int)arg2;
- (_Bool)boolForActivationSetting:(unsigned int)arg1;
- (long long)flagForActivationSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forActivationSetting:(unsigned int)arg2;
- (void)dismissAlert;
- (void)clearDisplay;
- (id)display;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (_Bool)wantsFullScreenLayout;
- (id)_screen;
- (void)_setTargetScreen:(id)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)matchesInCallUIService;
- (_Bool)matchesAnyInCallService;
- (_Bool)isRemote;
- (_Bool)matchesRemoteAlertService:(id)arg1 options:(id)arg2;
- (id)effectiveViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

