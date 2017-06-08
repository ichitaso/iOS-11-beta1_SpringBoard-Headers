//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BiometricKit;

@interface SBBiometricEventLogger : NSObject
{
    BiometricKit *_biometricKit;
    _Bool _isScreenOn;
    _Bool _fingerOnWithScreenOn;
    unsigned long long _fingerOnTime;
    unsigned long long _keybagUnlockTime;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long keybagUnlockTime; // @synthesize keybagUnlockTime=_keybagUnlockTime;
@property(nonatomic) _Bool fingerOnWithScreenOn; // @synthesize fingerOnWithScreenOn=_fingerOnWithScreenOn;
@property(nonatomic) unsigned long long fingerOnTime; // @synthesize fingerOnTime=_fingerOnTime;
- (void).cxx_destruct;
- (void)timestampEvent:(unsigned long long)arg1;
- (_Bool)_shouldSyslogTimestamps;
- (void)_prearmMatch:(id)arg1;
- (void)_unlockAnimationWillStart:(id)arg1;
- (void)_keybagBioUnlock:(id)arg1;
- (void)_tryAgain:(id)arg1;
- (void)_fingerOn:(id)arg1;
- (void)_backlightLevelChanged:(id)arg1;
- (void)_screenTurnedOn:(id)arg1;
- (void)_clearEverything;
- (id)init;

@end

