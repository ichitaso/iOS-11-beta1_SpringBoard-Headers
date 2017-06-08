//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBNestingViewController.h"

@class SBFolderContainerView, SBFolderController;

@interface SBFolderPresentingViewController : SBNestingViewController
{
    id <SBFolderPresentingViewControllerDelegate> _folderPresentationDelegate;
    id <UIViewControllerAnimatedTransitioning> _currentFolderAnimator;
}

@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> currentFolderAnimator; // @synthesize currentFolderAnimator=_currentFolderAnimator;
@property(nonatomic) __weak id <SBFolderPresentingViewControllerDelegate> folderPresentationDelegate; // @synthesize folderPresentationDelegate=_folderPresentationDelegate;
- (void).cxx_destruct;
- (void)nestingViewController:(id)arg1 willPerformOperation:(long long)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4;
- (id)nestingViewController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)nestingViewController:(id)arg1 animationControllerForOperation:(long long)arg2 onViewController:(id)arg3 animated:(_Bool)arg4;
- (void)dismissPresentedFolderControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentFolderController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) SBFolderController *presentedFolderController;
- (void)loadView;
@property(readonly, nonatomic) SBFolderContainerView *view;

@end
