//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@interface SBUIAnimationForAlertAnimationProvider : SBUIMainScreenAnimationController
{
    id <SBWorkspaceAlertAnimationProviding> _alert;
    _Bool _visible;
}

- (void).cxx_destruct;
- (void)_animateStatusBar;
- (void)_startAnimation;
- (id)animationSettings;
- (id)initWithTransitionContextProvider:(id)arg1 alert:(id)arg2 visible:(_Bool)arg3;

@end

