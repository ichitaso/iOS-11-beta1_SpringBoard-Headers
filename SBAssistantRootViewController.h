//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIScreen, UIView, UIViewController<SBUIPluginViewControllerInterface>;

@interface SBAssistantRootViewController : UIViewController
{
    UIViewController<SBUIPluginViewControllerInterface> *_assistantViewController;
    UIView *_contentView;
    UIView *_clippingView;
    UIScreen *_screen;
}

@property(retain, nonatomic) UIViewController<SBUIPluginViewControllerInterface> *assistantController; // @synthesize assistantController=_assistantViewController;
@property(retain, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)wantsFullScreenLayout;
- (void)viewWillLayoutSubviews;
- (void)loadView;
@property(readonly, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
- (id)initWithScreen:(id)arg1;

@end

