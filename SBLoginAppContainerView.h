//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertView.h"

@class NSMutableSet, SBLockScreenDeviceInformationTextView, SBLoginAppContainerOverlayWrapperView, UIView, _UILegibilitySettings;

@interface SBLoginAppContainerView : SBAlertView
{
    NSMutableSet *_contentHiddenRequesters;
    UIView *_contentView;
    SBLoginAppContainerOverlayWrapperView *_thermalWarningView;
    SBLockScreenDeviceInformationTextView *_deviceInformationTextView;
    UIView *_pluginView;
    _UILegibilitySettings *_legibilitySettings;
}

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) UIView *pluginView; // @synthesize pluginView=_pluginView;
@property(retain, nonatomic) SBLockScreenDeviceInformationTextView *deviceInformationTextView; // @synthesize deviceInformationTextView=_deviceInformationTextView;
@property(retain, nonatomic) SBLoginAppContainerOverlayWrapperView *thermalWarningView; // @synthesize thermalWarningView=_thermalWarningView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)_showOrHidePluginViewAppropriately;
- (void)setContentHidden:(_Bool)arg1 forRequester:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

