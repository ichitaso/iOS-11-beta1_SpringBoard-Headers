//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@interface SBFluidBehaviorSettings : SBUISettings
{
    long long _behaviorType;
    double _deceleration;
    double _tension;
    double _friction;
    double _interactiveTension;
    double _interactiveFriction;
}

+ (id)_moduleWithSectionTitle:(id)arg1;
+ (id)settingsControllerModule;
@property(nonatomic) double interactiveFriction; // @synthesize interactiveFriction=_interactiveFriction;
@property(nonatomic) double interactiveTension; // @synthesize interactiveTension=_interactiveTension;
@property(nonatomic) double friction; // @synthesize friction=_friction;
@property(nonatomic) double tension; // @synthesize tension=_tension;
@property(nonatomic) double deceleration; // @synthesize deceleration=_deceleration;
@property(nonatomic) long long behaviorType; // @synthesize behaviorType=_behaviorType;
- (void)setDefaultCriticallyDampedValues;
- (void)setDefaultValues;

@end
