//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBMainSwitcherAnimatedTransitioning.h"
#import "SBSceneLayoutViewControllerTransitioningDelegate.h"

@class SBAppLayout, SBBestAppSuggestion, SBWorkspaceApplicationSceneTransitionContext;

@protocol SBMainAppSwitcherContentViewControlling <SBSceneLayoutViewControllerTransitioningDelegate, SBMainSwitcherAnimatedTransitioning>
@property(retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion;
@property(nonatomic) __weak id <SBMainAppSwitcherContentViewControllerDataSource> dataSource;
@property(nonatomic) __weak id <SBMainAppSwitcherContentViewControllerDelegate> delegate;
- (void)removeAppLayout:(SBAppLayout *)arg1 forReason:(long long)arg2 modelMutationBlock:(void (^)(void))arg3 completion:(void (^)(_Bool, SBAppLayout *, SBAppLayout *))arg4;
- (void)insertAppLayout:(SBAppLayout *)arg1 atIndex:(unsigned long long)arg2 completion:(void (^)(_Bool, SBAppLayout *, SBAppLayout *))arg3;
- (void)forceUpdateInterfaceOrientation:(long long)arg1;
- (_Bool)isUserInteractionEnabled;
- (_Bool)isDisplayingContent;
- (_Bool)shouldUpdateRecentsForTransitionWithContext:(SBWorkspaceApplicationSceneTransitionContext *)arg1 transitionCompleted:(_Bool)arg2;
- (_Bool)shouldUpdateContentOrientationForTransitionWithContext:(SBWorkspaceApplicationSceneTransitionContext *)arg1;
- (double)minimumHomeScreenScale;
- (_Bool)hasInteractiveContentAtBottomOfScreen;
- (double)switcherCardScale;
- (double)snapshotScale;
@end

