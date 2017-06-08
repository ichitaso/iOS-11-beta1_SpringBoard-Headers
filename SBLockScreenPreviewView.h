//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBDashBoardPageControl, SBFLockScreenDateView, SBUICallToActionLabel, SBUILegibilityView, SBWallpaperController, UILabel, UIStatusBar, _UILegibilityLabel, _UILegibilitySettings;

@interface SBLockScreenPreviewView : UIView
{
    UIView *_wallpaperView;
    SBFLockScreenDateView *_dateView;
    _UILegibilityLabel *_slideToUnlockLegibilityLabel;
    UIStatusBar *_statusBar;
    _UILegibilitySettings *_legibilitySettings;
    SBWallpaperController *_wallpaperController;
    SBUILegibilityView *_cameraView;
    UILabel *_slideToUnlockView;
    SBDashBoardPageControl *_dashBoardPageControl;
    SBUICallToActionLabel *_callToActionLabel;
}

- (void).cxx_destruct;
- (void)_layoutCallToActionLabel;
- (void)_layoutPageControl;
- (void)_layoutWallpaperView;
- (void)_layoutDateView;
- (void)_layoutStatusBar;
- (void)layoutSubviews;
- (void)_setupCallToActionLabel;
- (void)_setupPageControl;
- (void)_setupStatusBar;
- (void)_setupDateView;
- (void)_setupWallpaperView;
- (id)_legibilityPrototypeSettings;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperController:(id)arg2 options:(unsigned long long)arg3;

@end

