//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBestAppSuggestion.h"

@class UABestAppSuggestion;

@interface _SBUABestAppSuggestion : SBBestAppSuggestion
{
    UABestAppSuggestion *_appSuggestion;
}

@property(readonly, nonatomic) UABestAppSuggestion *appSuggestion; // @synthesize appSuggestion=_appSuggestion;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isHandoff;
- (_Bool)isLocationBasedSuggestion;
- (_Bool)isLocallyGeneratedSuggestion;
- (_Bool)isCallContinuitySuggestion;
- (_Bool)isOpenURLSuggestion;
- (_Bool)isNotificationSuggestion;
- (id)originatingDeviceType;
- (id)originatingDeviceName;
- (id)originatingDeviceIdentifier;
- (id)lastUpdateTime;
- (id)activityType;
- (id)bundleIdentifier;
- (id)uniqueIdentifier;
- (id)initWithAppSuggestion:(id)arg1;

@end

