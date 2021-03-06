//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVExternalDevice, CRCarPlayAppPolicy, FBSDisplayConfiguration, FBSDisplayIdentity, NSString, SBApplication, UIScreen, UITraitCollection;

@protocol SBStarkSessionConfiguring <NSObject>
@property(readonly, nonatomic) NSString *OEMIconLabel;
@property(readonly, nonatomic) NSString *layoutId;
@property(readonly, nonatomic, getter=isPairedVehicle) _Bool pairedVehicle;
@property(readonly, nonatomic, getter=isOEMIconVisible) _Bool OEMIconVisible;
@property(readonly, nonatomic, getter=isKnownVehicle) _Bool knownVehicle;
@property(readonly, nonatomic, getter=isGeoSupported) _Bool geoSupported;
@property(readonly, nonatomic, getter=isConnectedWirelessly) _Bool connectedWirelessly;
@property(readonly, nonatomic, getter=isAmbientBrightnessNighttime) _Bool ambientBrightnessNighttime;
@property(readonly, nonatomic, getter=isACBackSupported) _Bool acBackSupported;
@property(readonly, copy, nonatomic) UITraitCollection *traitCollection;
@property(readonly, nonatomic) double screenScale;
@property(readonly, nonatomic) struct CGRect screenBounds;
@property(readonly, nonatomic) UIScreen *screen;
@property(readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property(readonly, nonatomic) _Bool screenSupportsFocus;
@property(readonly, nonatomic) long long layoutJustification;
@property(readonly, nonatomic) unsigned long long interactionAffordances;
@property(readonly, nonatomic) AVExternalDevice *device;
- (CRCarPlayAppPolicy *)policyForApp:(SBApplication *)arg1;
@end

