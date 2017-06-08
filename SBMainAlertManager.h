//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertManager.h"

@class NSMapTable, NSMutableDictionary, NSString, SBDisableActiveInterfaceOrientationChangeAssertion;

@interface SBMainAlertManager : SBAlertManager
{
    NSMapTable *_alertToAccessoryWrappersMap;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableOrientationChangeAssertion;
    NSString *_orientationLockOverrideReason;
    NSMutableDictionary *_mesaAutoUnlockingDisabledAssertions;
    _Bool _externalActivationInProgress;
    _Bool _externalDeactivationInProgress;
}

- (void).cxx_destruct;
- (void)alertDidChangeOrientationEventsEnabled:(id)arg1;
- (void)alertDidUpdateShouldPendAlertItemsWhileActivate:(id)arg1;
- (void)alertDidUpdateStatusBarStyleOverridesToCancel:(id)arg1;
- (void)_assistantVisibilityDidChange:(id)arg1;
- (void)_controlCenterDidDeactivate:(id)arg1;
- (void)_coverSheetDidDeactivate:(id)arg1;
- (void)_notificationCenterDidDeactivate:(id)arg1;
- (void)_releaseOrientationLockOverrideIfPossibleForAlert:(id)arg1;
- (void)_releaseOrientationLockOverride;
- (void)_acquireOrientationLockOverrideIfNeededForAlert:(id)arg1;
- (void)_updateOrientationLockingForAlertDidChangeOrientationEventsEnabled:(id)arg1;
- (void)_updateOrientationLockingForAlertDeactivation:(id)arg1;
- (void)_updateOrientationLockingForAlertActivation:(id)arg1;
- (void)_disablePortraitOrientationLock;
- (void)_enablePortraitOrientationLock;
- (_Bool)_needsPortraitOrientationLockForAlert:(id)arg1;
- (id)_reasonForAlert:(id)arg1;
- (void)_relinquishMesaAutoUnlockingDisabledAssertionForAlert:(id)arg1;
- (void)_acquireMesaAutoUnlockingDisableAssertionForAlert:(id)arg1;
- (_Bool)_anyAlertHasHostViewForRequester:(id)arg1;
- (void)_removeHostedAccessoryViewsForRequester:(id)arg1;
- (void)_stopHostingAccessoryWindowsForDeactivatingAlert:(id)arg1;
- (void)_startHostingAccessoryWindowsForActivatingAlert:(id)arg1;
- (void)_hostAccessoryWindowsForActivatingAlert:(id)arg1;
- (void)_noteFinishedWithAlert:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_noteAlertWillDismiss:(id)arg1;
- (void)_deactivate:(id)arg1;
- (void)_activate:(id)arg1;
- (_Bool)_canAutorotate;
- (void)_noteWillDisplayAlert:(id)arg1;
- (_Bool)deactivate:(id)arg1;
- (void)activate:(id)arg1;
- (void)disablePortraitOrientationLockIfPossibleForAlert:(id)arg1;
- (id)hostedAccessoryWrappersForAlert:(id)arg1;
- (void)hideHostedAccessoryViewsForAlert:(id)arg1;
- (void)dealloc;
- (id)initWithScreen:(id)arg1 delegate:(id)arg2;

@end
