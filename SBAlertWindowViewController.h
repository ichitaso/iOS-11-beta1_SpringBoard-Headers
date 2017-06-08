//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, SBAlert, UIScreen, UIView;

@interface SBAlertWindowViewController : UIViewController
{
    UIScreen *_screen;
    id <SBAlertWindowViewControllerDelegate> _alertWindowViewControllerDelegate;
    UIView *_contentView;
    SBAlert *_activeAlert;
    NSArray *_childAlerts;
    UIViewController *_activeViewController;
}

@property(retain, nonatomic) UIViewController *activeViewController; // @synthesize activeViewController=_activeViewController;
@property(retain, nonatomic) SBAlert *activeAlert; // @synthesize activeAlert=_activeAlert;
@property(nonatomic) __weak id <SBAlertWindowViewControllerDelegate> alertWindowViewControllerDelegate; // @synthesize alertWindowViewControllerDelegate=_alertWindowViewControllerDelegate;
- (void).cxx_destruct;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)updateStatusBarForAlerts:(id)arg1;
- (void)window:(id)arg1 willAnimateFromContentFrame:(struct CGRect)arg2 toContentFrame:(struct CGRect)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)wantsFullScreenLayout;
- (void)noteAlertWindow:(id)arg1 didDisplayAlert:(id)arg2;
- (_Bool)alertWindow:(id)arg1 canAnimateInAlert:(id)arg2;
- (id)stackedViewForAlert:(id)arg1;
- (id)stackedAlertsIncludingActiveAlert:(_Bool)arg1;
- (long long)stackedAlertCount;
- (void)addView:(id)arg1 toBeObscuredByAlert:(id)arg2;
- (void)removeAlertController:(id)arg1;
- (void)performEndAppearanceToController:(id)arg1 withTransitionBlock:(CDUnknownBlockType)arg2;
- (void)addAlertController:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithScreen:(id)arg1;

@end

