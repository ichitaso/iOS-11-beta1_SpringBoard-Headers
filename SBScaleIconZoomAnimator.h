//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconZoomAnimator.h"

@class NSMutableArray, SBIcon, SBIconView, SBReversibleLayerPropertyAnimator, SBScaleZoomSettings, UIView;

@interface SBScaleIconZoomAnimator : SBIconZoomAnimator
{
    struct UIEdgeInsets _iconScootch;
    double _naturalVisualAltitude;
    UIView *_scalingView;
    SBIconView *_targetIconView;
    UIView *_targetIconPositioningView;
    unsigned char _testCompletionCount;
    SBReversibleLayerPropertyAnimator *_homeScreenScaleAnimator;
    SBReversibleLayerPropertyAnimator *_targetIconScaleXAnimator;
    SBReversibleLayerPropertyAnimator *_targetIconScaleYAnimator;
    NSMutableArray *_animationCompletions;
    SBIcon *_targetIcon;
    struct CGPoint _zoomScaleDimension;
}

@property(readonly, nonatomic) struct CGPoint zoomScaleDimension; // @synthesize zoomScaleDimension=_zoomScaleDimension;
@property(readonly, nonatomic) SBIcon *targetIcon; // @synthesize targetIcon=_targetIcon;
@property(retain, nonatomic) NSMutableArray *animationCompletions; // @synthesize animationCompletions=_animationCompletions;
@property(retain, nonatomic) SBReversibleLayerPropertyAnimator *targetIconScaleYAnimator; // @synthesize targetIconScaleYAnimator=_targetIconScaleYAnimator;
@property(retain, nonatomic) SBReversibleLayerPropertyAnimator *targetIconScaleXAnimator; // @synthesize targetIconScaleXAnimator=_targetIconScaleXAnimator;
@property(retain, nonatomic) SBReversibleLayerPropertyAnimator *homeScreenScaleAnimator; // @synthesize homeScreenScaleAnimator=_homeScreenScaleAnimator;
- (void).cxx_destruct;
- (void)_applyIconGridFadeFraction:(double)arg1;
- (void)_applyVisualAltitudeFraction:(double)arg1;
- (struct CGPoint)_targetIconScaleForZoomFraction:(double)arg1;
- (double)_homeScreenScaleForZoomFraction:(double)arg1;
- (void)_applyZoomFraction:(double)arg1;
- (void)_setIconAlpha:(double)arg1;
- (double)_zoomedVisualAltitude;
- (struct CGPoint)_zoomedIconCenter;
- (struct CGRect)_zoomedFrame;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(_Bool)arg4 sharedCompletion:(CDUnknownBlockType)arg5;
- (void)hintToFraction:(double)arg1;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_configureTargetIconPositioningView:(id)arg1;
- (void)_prepareAnimation;
@property(readonly, nonatomic) SBIconView *referenceIconView;
@property(readonly, nonatomic) SBIconView *targetIconView;
- (void)_setZoomScale:(struct CGPoint)arg1;
- (_Bool)_forceSquareZoomDimension;
@property(readonly, nonatomic) _Bool fadesHomeScreen;
@property(readonly, nonatomic) UIView *defaultTargetIconContainerView;
@property(readonly, nonatomic) UIView *targetIconContainerView;
@property(readonly, nonatomic) double maxHomeScreenZoomScale;
@property(readonly, nonatomic) double zoomScale;
- (id)initWithAnimationContainer:(id)arg1 targetIcon:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) id <SBScaleIconZoomAnimationContaining> animationContainer; // @dynamic animationContainer;
@property(retain, nonatomic) SBScaleZoomSettings *settings; // @dynamic settings;

@end

