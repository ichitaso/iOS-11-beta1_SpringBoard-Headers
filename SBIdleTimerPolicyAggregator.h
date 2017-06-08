//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBDashBoardParticipating.h"
#import "SBIdleTimerGlobalCoordinatorDelegate.h"
#import "SBIdleTimerObserving.h"

@class NSString, SBBacklightController, SBIdleTimerDefaults;

@interface SBIdleTimerPolicyAggregator : NSObject <SBIdleTimerObserving, SBDashBoardParticipating, SBIdleTimerGlobalCoordinatorDelegate>
{
    SBBacklightController *_backlightController;
    id <SBIdleTimer> _idleTimer;
    SBIdleTimerDefaults *_idleTimerDefaults;
    unsigned int _disableAutoDimming:1;
}

@property(retain, nonatomic, setter=_setIdleTimer:) id <SBIdleTimer> idleTimer; // @synthesize idleTimer=_idleTimer;
@property(readonly, nonatomic, getter=_backlightController) SBBacklightController *backlightController; // @synthesize backlightController=_backlightController;
- (void).cxx_destruct;
- (_Bool)_allowsLockScreenIdleTimer;
- (void)idleTimerGlobalCoordinator:(id)arg1 didActivateIdleTimer:(id)arg2;
- (void)idleTimerDidWarn:(id)arg1;
- (void)idleTimerDidExpire:(id)arg1;
- (void)idleTimerDidRefresh:(id)arg1;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (void)autoLockPrefsChanged;
- (id)initWithBacklightController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
