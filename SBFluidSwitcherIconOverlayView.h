//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBOrientationTransformWrapperView.h"

@class CAMediaTimingFunction, SBIconView, UIView, UIViewFloatAnimatableProperty;

@interface SBFluidSwitcherIconOverlayView : SBOrientationTransformWrapperView
{
    SBIconView *_iconOverlayView;
    UIView *_iconCrossfadeView;
    UIView *_iconOverlayContainerView;
    UIView *_crossfadeView;
    struct CGRect _crossfadeViewFrame;
    UIViewFloatAnimatableProperty *_iconCrossfadeAnimatableProperty;
    CAMediaTimingFunction *_iconCrossfadeTimingFunction;
    double _cornerRadius;
}

@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;
- (void)_setUpIconCrossfadeView;
- (void)_setUpIconCrossfadeAnimatableProperty;
- (double)_iconOverlayScale;
- (void)layoutSubviews;
@property(readonly, nonatomic) SBIconView *iconView;
@property(readonly, nonatomic) struct CGRect crossfadeViewFrame;
- (void)dealloc;
- (void)invalidate;
- (id)initWithIconView:(id)arg1 crossfadeView:(id)arg2 crossfadeViewFrame:(struct CGRect)arg3 contentOrientation:(long long)arg4 containerOrientation:(long long)arg5;

@end

