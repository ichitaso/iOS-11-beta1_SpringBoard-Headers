//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBApplicationLaunchNotifyAlertItem.h"

@interface SBApplicationLaunchNotifyAirplaneModeAlertItem : SBApplicationLaunchNotifyAlertItem
{
    _Bool _usesCellNetwork;
}

- (void)_sendUserToSettings;
- (void)_turnOffAirplaneMode;
- (void)_configureForAirplaneModeDataAlertOffCellular:(_Bool)arg1;
- (void)_configureForAirplaneModeDataAlertOnCellular:(_Bool)arg1;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithApplication:(id)arg1;

@end

