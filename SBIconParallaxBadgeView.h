//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconBadgeView.h"

#import "_UISettingsKeyObserver.h"

@class NSString, SBFParallaxSettings;

@interface SBIconParallaxBadgeView : SBIconBadgeView <_UISettingsKeyObserver>
{
    SBFParallaxSettings *_parallaxSettings;
}

- (void).cxx_destruct;
- (void)_applyParallaxSettings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
