//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSpotlightMultiplexingViewController.h"

@interface SBHomeScreenSpotlightViewController : SBSpotlightMultiplexingViewController
{
    id <SBHomeScreenSpotlightDismissalDelegate> _homescreenSpotlightDelegate;
}

@property(nonatomic) id <SBHomeScreenSpotlightDismissalDelegate> homescreenSpotlightDelegate; // @synthesize homescreenSpotlightDelegate=_homescreenSpotlightDelegate;
- (void)_dismissSearchViewWithReason:(unsigned long long)arg1;
- (unsigned long long)defaultSearchViewDismissalReason;
- (unsigned long long)defaultSearchViewPresentationSource;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1;

@end

