//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBMainAlertManager;

@interface SBUIAnimationFadeAlertToAlert : SBUIMainScreenAnimationController
{
    SBMainAlertManager *_alertManager;
    SBAlert *_fromAlert;
    SBAlert *_toAlert;
    _Bool _alertIsTransparent;
}

- (void).cxx_destruct;
- (double)_animationDuration;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)animationSettings;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

