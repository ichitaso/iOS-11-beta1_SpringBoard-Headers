//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@protocol _SBRemoteAlertHostViewControllerDelegate <NSObject>
- (void)remoteAlertWantsToSetWhitePointAdaptivityStyle:(long long)arg1;
- (void)remoteAlertWantsToDisableFadeInAnimation:(_Bool)arg1;
- (void)remoteAlertWantsToDismissOnUILock:(_Bool)arg1;
- (void)remoteAlertWantsToSetAutoLockDuration:(double)arg1;
- (void)remoteAlertWantsToSetIdleTimerDisabled:(_Bool)arg1 forReason:(NSString *)arg2;
- (void)remoteAlertWantsToSetDesiredStatusBarStyleOverrides:(int)arg1;
- (void)remoteAlertWantsToSetSwipeDismissalStyle:(long long)arg1;
- (void)remoteAlertWantsToSetDismissalAnimationStyle:(long long)arg1;
- (void)remoteAlertWantsToAllowAlertStacking:(_Bool)arg1;
- (void)remoteAlertWantsMenuButtonDismissal:(_Bool)arg1;
- (void)remoteAlertWantsToSetBackgroundStyle:(long long)arg1 withDuration:(double)arg2;
- (void)remoteAlertWantsWallpaperTunnelActive:(_Bool)arg1;
- (void)remoteAlertWantsToUpdateAllowedHardwareButtonEvents:(long long)arg1;
- (void)remoteAlertWantsToAllowBanners:(_Bool)arg1;
- (void)remoteAlertDidTerminateWithError:(NSError *)arg1;
- (void)remoteAlertDidRequestDismissal;
@end

