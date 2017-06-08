//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "SBUIAnimationControllerTransitionContextProvider.h"
#import "SBWorkspaceApplicationSceneTransitionContextDelegate.h"

@class BSProcessHandle, FBSDisplayConfiguration, FBSDisplayIdentity, NSSet, NSString, NSUUID, SBAlertManager, SBLayoutStateTransitionCoordinator, SBWorkspace, SBWorkspaceAlertTransitionContext, SBWorkspaceApplicationSceneTransitionContext, SBWorkspaceInteractionContext;

@interface SBWorkspaceTransitionRequest : NSObject <SBUIAnimationControllerTransitionContextProvider, SBWorkspaceApplicationSceneTransitionContextDelegate, BSDescriptionProviding>
{
    FBSDisplayConfiguration *_displayConfiguration;
    SBWorkspace *_workspace;
    SBAlertManager *_alertManager;
    NSUUID *_uniqueID;
    NSString *_eventLabel;
    SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
    CDUnknownBlockType _transitionCompletion;
    _Bool _finalized;
    long long _interfaceOrientation;
    SBWorkspaceApplicationSceneTransitionContext *_applicationContext;
    SBWorkspaceAlertTransitionContext *_alertContext;
    BSProcessHandle *_originatingProcess;
    SBWorkspaceInteractionContext *_interactionContext;
}

@property(retain, nonatomic) SBWorkspaceInteractionContext *interactionContext; // @synthesize interactionContext=_interactionContext;
@property(copy, nonatomic) CDUnknownBlockType transitionCompletion; // @synthesize transitionCompletion=_transitionCompletion;
@property(retain, nonatomic) SBWorkspaceAlertTransitionContext *alertContext; // @synthesize alertContext=_alertContext;
@property(retain, nonatomic) SBWorkspaceApplicationSceneTransitionContext *applicationContext; // @synthesize applicationContext=_applicationContext;
@property(copy, nonatomic) NSString *eventLabel; // @synthesize eventLabel=_eventLabel;
@property(retain, nonatomic) BSProcessHandle *originatingProcess; // @synthesize originatingProcess=_originatingProcess;
@property(retain, nonatomic) SBAlertManager *alertManager; // @synthesize alertManager=_alertManager;
@property(readonly, copy, nonatomic) NSUUID *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration; // @synthesize displayConfiguration=_displayConfiguration;
@property(readonly, nonatomic) SBWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (id)previousLayoutStateForApplicationTransitionContext:(id)arg1;
- (id)layoutStateForApplicationTransitionContext:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)compactDescriptionBuilder;
- (void)_sendResult:(_Bool)arg1;
- (void)declineWithReason:(id)arg1;
- (void)finalize;
@property(readonly, nonatomic, getter=isFinalized) _Bool finalized; // @synthesize finalized=_finalized;
- (void)setEventLabelWithFormat:(id)arg1;
- (void)modifyApplicationContext:(CDUnknownBlockType)arg1;
- (void)modifyAlertContext:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
- (id)_initWithWorkspace:(id)arg1 displayConfiguration:(id)arg2;
- (id)init;
@property(readonly, nonatomic) _Bool isMainWorkspaceTransitionRequest;
@property(readonly, copy, nonatomic) NSSet *fromApplicationSceneEntities;
@property(readonly, copy, nonatomic) NSSet *toApplicationSceneEntities;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

