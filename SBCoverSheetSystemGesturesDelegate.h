//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBSystemGestureRecognizerDelegate.h"

@class NSString, UIGestureRecognizer, UIViewController;

@interface SBCoverSheetSystemGesturesDelegate : NSObject <SBSystemGestureRecognizerDelegate>
{
    int _syntheticAppearState;
    id <SBCoverSheetSystemGestureDelegatePositionProviding> _positionProvider;
    UIViewController *_viewController;
    UIGestureRecognizer *_presentGestureRecognizer;
    UIGestureRecognizer *_dismissGestureRecognizer;
    UIGestureRecognizer *_preemptingGestureRecognizer;
}

@property(retain, nonatomic) UIGestureRecognizer *preemptingGestureRecognizer; // @synthesize preemptingGestureRecognizer=_preemptingGestureRecognizer;
@property(retain, nonatomic) UIGestureRecognizer *dismissGestureRecognizer; // @synthesize dismissGestureRecognizer=_dismissGestureRecognizer;
@property(retain, nonatomic) UIGestureRecognizer *presentGestureRecognizer; // @synthesize presentGestureRecognizer=_presentGestureRecognizer;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) int syntheticAppearState; // @synthesize syntheticAppearState=_syntheticAppearState;
@property(nonatomic) __weak id <SBCoverSheetSystemGestureDelegatePositionProviding> positionProvider; // @synthesize positionProvider=_positionProvider;
- (void).cxx_destruct;
- (_Bool)isAnyGestureActivelyRecognized;
- (_Bool)_isGestureActivelyRecognized:(id)arg1;
- (_Bool)_canPresentGestureBegin;
- (_Bool)_canDismissGestureBegin;
- (_Bool)_isGestureAllowedByTopmostAlertOrApp;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (_Bool)isPresentGestureActive;
- (_Bool)isDismissGestureActive;
- (id)initWithViewController:(id)arg1 presentGestureRecognizer:(id)arg2 dismissGestureRecognizer:(id)arg3 dismissalPreemptingGestureRecognizer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

