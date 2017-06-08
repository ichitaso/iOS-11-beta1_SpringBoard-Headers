//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDisplayObserving.h"
#import "SBWorkspaceSlaving.h"

@class FBSDisplayConfiguration, NSString;

@interface SBExternalDisplayController : NSObject <FBSDisplayObserving, SBWorkspaceSlaving>
{
    FBSDisplayConfiguration *_currentConfiguration;
    _Bool _observingAppState;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)master:(id)arg1 slaveTransactionsForTransitionRequest:(id)arg2;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)_handleDisplayConnectIfPossible;
- (void)_appProcessStateDidChange:(id)arg1;
- (id)_slaveTransactionForMainDisplayTransitionRequest:(id)arg1 currentExternalDisplayConfiguration:(id)arg2;
- (_Bool)_displayConnectShouldWaitForAppRunning:(id)arg1;
- (_Bool)_shouldConnectDisplayNow:(id)arg1;
- (_Bool)_application:(id)arg1 canAccessDisplay:(id)arg2;
- (id)expectedForegroundAppsOnDisplayWithIdentity:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
