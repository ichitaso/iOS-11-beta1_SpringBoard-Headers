//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlert.h"

#import "SBDashBoardExternalBehaviorProviding.h"

@class NSString, SBLogoutDebugBlockingViewController, SBLogoutProgressAlertView, SBMultiUserDefaults, SBPlatformController, UMUser;

@interface SBLogoutProgressAlertViewController : SBAlert <SBDashBoardExternalBehaviorProviding>
{
    SBPlatformController *_platformController;
    SBMultiUserDefaults *_multiUserDefaults;
    id <SBLogoutProgressDataSource> _dataSource;
    UMUser *_user;
    SBLogoutProgressAlertView *_progressView;
    SBLogoutDebugBlockingViewController *_debugTasksViewController;
}

@property(readonly, nonatomic) UMUser *user; // @synthesize user=_user;
@property(nonatomic) __weak id <SBLogoutProgressDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_updateData;
- (void)_updateLegibility;
- (id)_legibilitySettings;
- (void)_updateDebugTasksViewControllerSizeFromSize:(struct CGSize)arg1;
- (_Bool)_supportsDebugUI;
@property(readonly, nonatomic) long long proximityDetectionMode;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)deactivate;
- (void)activate;
- (long long)customBackgroundStyle;
- (_Bool)wantsCustomBackgroundStyle;
- (_Bool)hasTranslucentBackground;
- (long long)statusBarStyle;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)prepareForRestart;
- (void)refreshData;
- (id)initWithUserAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

