//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSceneHandle.h"

@class SBApplication;

@interface SBApplicationSceneHandle : SBSceneHandle
{
    SBApplication *_application;
    _Bool _isSecure;
}

@property(readonly, nonatomic, getter=isSecure) _Bool secure; // @synthesize secure=_isSecure;
@property(readonly, nonatomic) SBApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
- (id)newSceneViewController;
- (id)newScenePlaceholderContentContextWithActivationSettings:(id)arg1;
- (id)newSceneViewWithReferenceSize:(struct CGSize)arg1 orientation:(long long)arg2 hostRequester:(id)arg3;
- (id)_sanitizeActionsFromEntity:(id)arg1;
- (id)_createApplicationSceneClientSettingsFromContext:(id)arg1 entity:(id)arg2 initialSceneSettings:(id)arg3;
- (id)_createApplicationSceneSettingsFromContext:(id)arg1 entity:(id)arg2;
- (void)_applicationsDidChange:(id)arg1;
- (void)_modifyApplicationTransitionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3;
- (void)_modifyApplicationSceneClientSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 initialSceneSettings:(id)arg4;
- (void)_modifyApplicationSceneSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3;
- (void)_modifyProcessExecutionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3;
- (id)_createApplicationSceneTransitionContextFromContext:(id)arg1 entity:(id)arg2;
- (id)_createProcessExecutionContextFromContext:(id)arg1 entity:(id)arg2;
- (id)_createParametersFromTransitionContext:(id)arg1 entity:(id)arg2;
- (void)dealloc;
- (id)_initWithApplication:(id)arg1 sceneIdentity:(id)arg2 displayIdentity:(id)arg3;
- (id)_initWithApplication:(id)arg1 scene:(id)arg2 displayIdentity:(id)arg3;
- (id)_initWithApplication:(id)arg1 definition:(id)arg2 scene:(id)arg3 displayIdentity:(id)arg4;
- (id)_initWithDefinition:(id)arg1;
- (id)_initWithScene:(id)arg1;

@end

