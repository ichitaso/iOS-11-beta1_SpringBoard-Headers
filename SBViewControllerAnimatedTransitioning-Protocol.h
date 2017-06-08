//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewControllerAnimatedTransitioning.h"

@class BSUIAnimationFactory;

@protocol SBViewControllerAnimatedTransitioning <UIViewControllerAnimatedTransitioning>
- (void)animateTransition:(id <SBViewControllerContextTransitioning>)arg1;
- (double)transitionDuration:(id <SBViewControllerContextTransitioning>)arg1;

@optional
- (unsigned long long)transitionAnimationOptions:(id <SBViewControllerContextTransitioning>)arg1;
- (BSUIAnimationFactory *)transitionAnimationFactory:(id <SBViewControllerContextTransitioning>)arg1;
@end

