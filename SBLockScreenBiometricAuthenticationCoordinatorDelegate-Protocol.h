//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBAuthenticationFeedback, SBLockScreenBiometricAuthenticationCoordinator;

@protocol SBLockScreenBiometricAuthenticationCoordinatorDelegate <NSObject>
- (_Bool)biometricAuthenticationCoordinator:(SBLockScreenBiometricAuthenticationCoordinator *)arg1 requestsUnlockWithIntent:(int)arg2;
- (_Bool)biometricAuthenticationCoordinator:(SBLockScreenBiometricAuthenticationCoordinator *)arg1 requestsAuthenticationFeedback:(SBAuthenticationFeedback *)arg2;
@end
