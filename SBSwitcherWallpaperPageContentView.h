//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBAppSwitcherPageContentView.h"

@class NSString, SBOrientationTransformWrapperView, SBWallpaperEffectView;

@interface SBSwitcherWallpaperPageContentView : UIView <SBAppSwitcherPageContentView>
{
    long long _orientation;
    long long _desiredWallpaperOrientation;
    SBOrientationTransformWrapperView *_wallpaperWrapperView;
    SBWallpaperEffectView *_wallpaperEffectView;
    long long _wallpaperStyle;
    double _cornerRadius;
}

@property(readonly, nonatomic) SBWallpaperEffectView *wallpaperEffectView; // @synthesize wallpaperEffectView=_wallpaperEffectView;
@property(nonatomic) long long wallpaperStyle; // @synthesize wallpaperStyle=_wallpaperStyle;
@property(nonatomic) long long desiredWallpaperOrientation; // @synthesize desiredWallpaperOrientation=_desiredWallpaperOrientation;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;
- (void)_updateWallpaperOrientation;
- (void)_updateCornerRadius;
- (id)_viewForWallpaperWrapper;
- (void)layoutSubviews;
- (void)invalidate;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

