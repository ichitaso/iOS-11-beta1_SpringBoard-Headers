//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSpotlightMultiplexingViewController.h"

@class SBSpotlightAlert;

@interface SBSpotlightAlertSpotlightViewController : SBSpotlightMultiplexingViewController
{
    SBSpotlightAlert *_spotlightAlert;
}

@property(nonatomic) __weak SBSpotlightAlert *spotlightAlert; // @synthesize spotlightAlert=_spotlightAlert;
- (void).cxx_destruct;
- (void)_dismissSearchViewWithReason:(unsigned long long)arg1;
- (unsigned long long)defaultSearchViewDismissalReason;
- (unsigned long long)defaultSearchViewPresentationSource;
- (void)spotlightAlertDidDisappear;
- (void)spotlightAlertWillDisappear;
- (void)spotlightAlertDidAppear;
- (void)spotlightAlertWillAppear;

@end

