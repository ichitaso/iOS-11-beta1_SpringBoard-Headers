//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSTransactionObserver.h"
#import "SBSystemGestureRecognizerDelegate.h"

@class NSString, SBAppResizeGestureWorkspaceTransaction, SBFloatingApplicationController, SBMainDisplaySceneLayoutViewController, SBMoveSideApplicationPanSystemGestureRecognizerWorkspaceTransaction, SBPanSystemGestureRecognizer, SBUnpinSideApplicationPanSystemGestureRecognizerWorkspaceTransaction, UILongPressGestureRecognizer;

@interface SBMainDisplaySceneLayoutGestureManager : NSObject <BSTransactionObserver, SBSystemGestureRecognizerDelegate>
{
    SBPanSystemGestureRecognizer *_resizePanSystemGestureRecognizer;
    SBPanSystemGestureRecognizer *_movePanSystemGestureRecognizer;
    SBAppResizeGestureWorkspaceTransaction *_resizePanSystemGestureRecognizerWorkspaceTransaction;
    SBMoveSideApplicationPanSystemGestureRecognizerWorkspaceTransaction *_movePanSystemGestureRecognizerWorkspaceTransaction;
    SBUnpinSideApplicationPanSystemGestureRecognizerWorkspaceTransaction *_unpinPanSystemGestureRecognizerWorkspaceTransaction;
    id _keyboardDidChangeFrameObserver;
    struct CGRect _effectiveKeyboardFrame;
    SBFloatingApplicationController *_floatingApplicationController;
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
    long long _interfaceOrientation;
    SBPanSystemGestureRecognizer *_unpinPanSystemGestureRecognizer;
    UILongPressGestureRecognizer *_nubViewLongPressGestureRecognizer;
}

+ (double)prototypeSettingsAnimationSpringFriction;
+ (double)prototypeSettingsAnimationSpringTension;
+ (_Bool)prototypeSettingsUnpinPanGestureHitTestNarrowWidth;
+ (double)prototypeSettingsUnpinPanGestureHitTestWidth;
+ (double)prototypeSettingsHitTestVerticalPadding;
@property(readonly, nonatomic) UILongPressGestureRecognizer *nubViewLongPressGestureRecognizer; // @synthesize nubViewLongPressGestureRecognizer=_nubViewLongPressGestureRecognizer;
@property(readonly, nonatomic) SBPanSystemGestureRecognizer *unpinPanSystemGestureRecognizer; // @synthesize unpinPanSystemGestureRecognizer=_unpinPanSystemGestureRecognizer;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic) __weak SBMainDisplaySceneLayoutViewController *sceneLayoutViewController; // @synthesize sceneLayoutViewController=_sceneLayoutViewController;
- (void).cxx_destruct;
- (long long)_layoutRoleForLayoutElementSupportingTransitionToFloatingLayoutRole;
- (id)_sideLayoutRoleApplicationSceneLayoutElementViewController;
- (_Bool)_hasActiveModalFloatingApplication;
- (_Bool)_allowSystemGestureRecognizer:(id)arg1 withSystemGestureType:(unsigned long long)arg2 toReceiveTouch:(id)arg3;
- (void)_manageUnpinPanSystemGestureRecognizerWorkspaceTransactionForPanSystemGestureRecognizer:(id)arg1 layoutRole:(long long)arg2;
- (void)_manageMovePanSystemGestureRecognizerWorkspaceTransactionForPanSystemGestureRecognizer:(id)arg1 layoutRole:(long long)arg2;
- (void)_createResizePanSystemGestureRecognizerWorkspaceTransactionForPanSystemGestureRecognizer:(id)arg1;
- (void)_handleNubViewLongPressGestureRecognizer:(id)arg1;
- (void)_handleUnpinPanSystemGestureRecognizer:(id)arg1;
- (void)_handleMovePanSystemGestureRecognizer:(id)arg1;
- (void)_handleResizePanSystemGestureRecognizer:(id)arg1;
- (_Bool)_hasActiveSystemGestureRecognizerWorkspaceTransaction;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)transactionDidComplete:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithSceneLayoutViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

