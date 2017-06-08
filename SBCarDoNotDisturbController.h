//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBDashBoardExternalLockProviding.h"

@class CARAutomaticDNDStatus, NSObject<OS_dispatch_queue>, NSString, SBLockScreenManager;

@interface SBCarDoNotDisturbController : NSObject <SBDashBoardExternalLockProviding>
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _queue_stateValid;
    _Bool _queue_exitConfirmationRequired;
    CARAutomaticDNDStatus *_carAutomaticDNDStatus;
    SBLockScreenManager *_lockScreenManager;
}

- (void).cxx_destruct;
- (void)_queue_setExitConfirmationRequired:(_Bool)arg1;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (_Bool)unlockFromSource:(int)arg1;
@property(readonly, nonatomic, getter=isLocked) _Bool locked;
- (void)dealloc;
- (id)initWithCARAutomaticDNDStatus:(id)arg1 lockScreenManager:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
