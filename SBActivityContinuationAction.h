//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivityContinuationAction.h"

@class NSDictionary, SBBestAppSuggestion;

@interface SBActivityContinuationAction : UIActivityContinuationAction
{
    NSDictionary *_settings;
    long long launchSource;
    SBBestAppSuggestion *_appSuggestion;
}

@property(retain, nonatomic) SBBestAppSuggestion *appSuggestion; // @synthesize appSuggestion=_appSuggestion;
@property(nonatomic) long long launchSource; // @synthesize launchSource;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak NSDictionary *settings;
- (id)initWithIdentifier:(id)arg1 activityTypeIdentifier:(id)arg2 appSuggestion:(id)arg3 launchSource:(long long)arg4;

@end
