//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "_UISettingsKeyObserver.h"

@class NSString, SBAppSwitcherSettings, SBAppSwitcherSoftOutlineShadowView, UIView<SBAppSwitcherPageContentView>;

@interface SBAppSwitcherPageView : UIView <_UISettingsKeyObserver>
{
    UIView *_hitTestBlocker;
    UIView *_dimmingView;
    UIView<SBAppSwitcherPageContentView> *_view;
    UIView *_overlayView;
    long long _shadowStyle;
    double _shadowAlpha;
    double _cornerRadius;
    SBAppSwitcherSoftOutlineShadowView *_shadowView;
    SBAppSwitcherSettings *_settings;
    long long _orientation;
}

+ (double)shadowOutset;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
@property(nonatomic) long long shadowStyle; // @synthesize shadowStyle=_shadowStyle;
@property(retain, nonatomic) UIView *overlay; // @synthesize overlay=_overlayView;
@property(retain, nonatomic) UIView<SBAppSwitcherPageContentView> *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (struct CGRect)_viewFrame;
- (void)_updateCornerRadius;
- (void)_setupShadowImage;
- (void)_updateShadow;
- (void)transitionDidEnd:(_Bool)arg1 forPresentation:(_Bool)arg2 transitionRequest:(id)arg3;
- (void)interactionDidEnd:(_Bool)arg1;
- (void)updateTransitionProgress:(double)arg1;
- (void)viewDismissing:(id)arg1 forTransitionRequest:(id)arg2;
- (void)viewPresenting:(id)arg1 forTransitionRequest:(id)arg2;
- (void)invalidate;
@property(nonatomic) struct CGRect shadowClippingFrame;
@property(nonatomic) _Bool shouldClipShadow;
@property(nonatomic) double dimmingAlpha;
@property(nonatomic) double contentAlpha;
@property(nonatomic) double overlayAlpha;
@property(nonatomic) _Bool blocksTouches;
- (void)setVisible:(_Bool)arg1;
- (void)setActive:(_Bool)arg1;
- (void)setView:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)_orderSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

