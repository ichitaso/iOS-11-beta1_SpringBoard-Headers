//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableDictionary, SBApplicationBlurSnapshotGenerationContainerView, SBDeviceApplicationSceneHandle, SBSceneViewAppIconView;

@interface SBApplicationBlurContentView : UIView
{
    SBDeviceApplicationSceneHandle *_sceneHandle;
    unsigned long long _state;
    NSMutableDictionary *_mapStateToCompletionBlocks;
    UIView *_targetViewToBlur;
    UIView *_unblurredRealSnapshotView;
    UIView *_unblurredCopySnapshotView;
    UIView *_liveBlurView;
    SBSceneViewAppIconView *_iconView;
    UIView *_blurredSnapshotView;
    SBApplicationBlurSnapshotGenerationContainerView *_snapshotGenerationContainerView;
    UIView *_blurView;
}

@property(readonly, nonatomic) SBSceneViewAppIconView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)_doAnimationToBlurredSnapshotWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_doBlurGenerationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fireCompletionBlocksForState:(unsigned long long)arg1;
- (void)_addCompletionBlock:(CDUnknownBlockType)arg1 forState:(unsigned long long)arg2;
- (void)_setState:(unsigned long long)arg1;
- (id)_iconViewForApplication;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)generateAndAnimateToBlurredSnapshotWithAnimationFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateToBlurredSnapshotWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateBlurredSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 deviceApplicationSceneHandle:(id)arg2 targetViewToBlur:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

