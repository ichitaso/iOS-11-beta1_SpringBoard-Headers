//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardPageViewController.h"

#import "SBDashBoardHostedAppViewControllerDelegate.h"

@class NSSet, NSString, SBDashBoardHostedAppViewController, UIView;

@interface SBDashBoardCameraPageViewController : SBDashBoardPageViewController <SBDashBoardHostedAppViewControllerDelegate>
{
    UIView *_maskView;
    UIView *_tintView;
    SBDashBoardHostedAppViewController *_appViewController;
}

+ (_Bool)isAvailableForConfiguration;
+ (unsigned long long)requiredCapabilities;
- (void).cxx_destruct;
- (void)_bailIfFaceTimeCallComesIn;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)hostedApp;
- (_Bool)isHostingAnApp;
- (_Bool)canHostAnApp;
- (_Bool)dashBoardHostedAppViewController:(id)arg1 shouldTransitionToMode:(long long)arg2;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (long long)presentationAltitude;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)_transitionAppViewWithProgress:(double)arg1;
- (void)didTransitionToVisible:(_Bool)arg1;
- (void)updateTransitionToVisible:(_Bool)arg1 progress:(double)arg2 mode:(long long)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
@property(retain, nonatomic) NSSet *actionsToDeliver;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

