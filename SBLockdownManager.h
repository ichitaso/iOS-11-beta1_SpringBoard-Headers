//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBDismissOnlyAlertItem;

@interface SBLockdownManager : NSObject
{
    int _state;
    _Bool _settingUpActivationState;
    _Bool _isBricked;
    _Bool _hasShownMismatchedSIM;
    SBDismissOnlyAlertItem *_activatingAlertItem;
    NSString *_unqiueDeviceIdentifier;
}

+ (_Bool)_isDeveloperDevice;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (int)lockdownState;
- (_Bool)brickedDevice;
- (void)_setupActivationState;
- (void)_serviceAvailabilityChanged:(id)arg1;
- (void)_activationFailed;
- (void)_resetActivationState;
- (void)_postAlertsIfNeeded;
- (_Bool)_shouldShowTelephonyAlerts;
- (void)_setCurrentAlertItem:(id)arg1;
- (_Bool)_isRegisteredToNetwork;
- (void)_setHasEverRegistered:(_Bool)arg1;
- (_Bool)_hasEverRegistered;
- (id)init;

@end

