//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSPowerMonitor;

@protocol BSPowerMonitorObserver <NSObject>

@optional
- (void)powerMonitorSystemDidWakeFromSleep:(BSPowerMonitor *)arg1;
- (void)powerMonitorSystemWillWakeFromSleep:(BSPowerMonitor *)arg1;
- (void)powerMonitorSystemWillSleep:(BSPowerMonitor *)arg1;
- (void)powerMonitorSystemSleepRequestAborted:(BSPowerMonitor *)arg1;
- (_Bool)powerMonitorSystemSleepRequested:(BSPowerMonitor *)arg1;
@end
