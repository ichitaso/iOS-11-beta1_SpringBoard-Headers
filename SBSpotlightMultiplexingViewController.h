//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBMultiplexingViewController.h"

#import "SBReachabilityObserver.h"
#import "SPUISearchViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, UIGestureRecognizer, UIView;

@interface SBSpotlightMultiplexingViewController : SBMultiplexingViewController <SBReachabilityObserver, UIGestureRecognizerDelegate, SPUISearchViewControllerDelegate>
{
    _Bool _reachabilityEnabled;
    UIView *_reachabilityContainerView;
    UIGestureRecognizer *_dismissReachabilityGesture;
    UIView *_sharedSearchHeaderView;
    unsigned long long _searchViewPresentationSourceForNextTransition;
    unsigned long long _searchViewDismissalReasonForNextTransition;
    id <SBSpotlightMultiplexingViewControllerDelegate> _delegate;
}

+ (void)swapSpotlightHeaderFrom:(id)arg1 to:(id)arg2;
+ (id)sharedIsolatedSpotlightInstance;
@property(nonatomic) __weak id <SBSpotlightMultiplexingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long searchViewDismissalReasonForNextTransition; // @synthesize searchViewDismissalReasonForNextTransition=_searchViewDismissalReasonForNextTransition;
@property(nonatomic) unsigned long long searchViewPresentationSourceForNextTransition; // @synthesize searchViewPresentationSourceForNextTransition=_searchViewPresentationSourceForNextTransition;
- (void).cxx_destruct;
- (void)_scrollSpotlightToTopIfAppeared;
- (id)_isolatedViewController;
- (_Bool)wantsToShareTouches;
- (void)_dismissSearchViewWithReason:(unsigned long long)arg1;
- (void)dismissSearchViewWithReason:(unsigned long long)arg1;
- (void)_searchFieldDidFocus;
- (void)searchFieldDidFocus;
- (_Bool)isDisappeared;
- (unsigned long long)defaultSearchViewDismissalReason;
- (unsigned long long)defaultSearchViewPresentationSource;
- (_Bool)directlyForwardViewSizeChanges;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)reachabilityWillDisable;
- (void)reachabilityWillEnableWithOffset:(struct CGPoint)arg1;
- (_Bool)_isForceTouchPeekingOrShowing;
- (_Bool)_shouldRespondToReachability;
- (void)cancelReachability;
- (void)dismissReachability:(id)arg1;
- (void)handleCancelReachabilityGesture;
- (void)handleReachabilityModeDeactivated;
- (void)handleReachabilityModeActivated;
- (void)_performReachabilityTransactionForActivate:(_Bool)arg1 immediately:(_Bool)arg2;
- (_Bool)reachabilitySupported;
- (_Bool)reachabilityModeActive;
- (id)_effectiveReachabilityGestureView;
- (id)_effectiveReachabilityContainerView;
- (void)setTextSelectionReachabilityOffset:(struct CGPoint)arg1 activating:(_Bool)arg2;
- (void)notifyTextSelectionViewDidTranslateForReachability;
- (void)notifyTextSelectionViewWillTranslateForReachability;
@property(readonly, retain, nonatomic) UIGestureRecognizer *dismissReachabilityGesture;
@property(nonatomic, getter=isReachabilityEnabled) _Bool reachabilityEnabled;
@property(nonatomic) __weak UIView *reachabilityContainerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

