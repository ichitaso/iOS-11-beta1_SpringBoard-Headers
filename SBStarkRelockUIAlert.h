//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertAdapter.h"

@interface SBStarkRelockUIAlert : SBAlertAdapter
{
    _Bool _animatingDismiss;
}

- (void)_dismissAndLock;
- (void)_animateDismiss;
- (id)_animationFactory;
- (void)deactivate;
- (void)activate;
- (_Bool)hasTranslucentBackground;
- (void)handleAutoLock;
- (_Bool)handleLockButtonPress;
- (_Bool)handleMenuButtonLongPress;
- (_Bool)handleMenuButtonDoublePress;
- (_Bool)handleHomeButtonPress;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;
- (id)init;

@end

