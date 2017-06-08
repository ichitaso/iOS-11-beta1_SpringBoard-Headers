//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBDosidoAnimator.h"

@class NSString, SBAnimationStepper, UIView;

@interface SBDosidoAnimator : NSObject <SBDosidoAnimator>
{
    UIView *_parentView;
    UIView *_transformContainer;
    UIView *_transformedContent;
    SBAnimationStepper *_stepper;
    CDUnknownBlockType _completion;
    _Bool _prepared;
    _Bool _animationCompleted;
    _Bool _stepped;
    _Bool _cleanedUp;
    _Bool _hidden;
    _Bool _transparent;
    long long _fromOrientation;
    double _spacingBetweenViews;
    unsigned long long _direction;
    UIView *_fromView;
    UIView *_toView;
}

+ (double)defaultDuration;
@property(retain, nonatomic) UIView *toView; // @synthesize toView=_toView;
@property(retain, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property(nonatomic, getter=isTransparent) _Bool transparent; // @synthesize transparent=_transparent;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) double spacingBetweenViews; // @synthesize spacingBetweenViews=_spacingBetweenViews;
@property(readonly, nonatomic) long long fromOrientation; // @synthesize fromOrientation=_fromOrientation;
@property(nonatomic, getter=isStepped) _Bool stepped; // @synthesize stepped=_stepped;
@property(readonly, nonatomic) UIView *animationContainerView; // @synthesize animationContainerView=_transformContainer;
- (void).cxx_destruct;
- (void)finishSteppingBackwardToStart;
- (void)finishSteppingForwardToEnd;
@property(nonatomic) double stepPercentage;
- (void)_cleanupDosido;
- (void)_animateDosidoWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prepareDosido;
- (id)_transformedContentView;
- (void)prepareDosidoIfNeeded;
- (void)cancelDosido;
- (void)animateDosidoWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_noteAnimationCompleted:(_Bool)arg1;
- (void)dealloc;
- (id)initWithParentView:(id)arg1 fromOrientation:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

