//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSceneManager.h"

#import "SBLayoutStateTransitionSceneEntityFrameProvider.h"

@class NSString;

@interface SBSecureMainDisplaySceneManager : SBSceneManager <SBLayoutStateTransitionSceneEntityFrameProvider>
{
}

+ (Class)_applicationSceneHandleClass;
- (struct CGRect)sceneEntityFrameForWorkspaceEntity:(id)arg1 inLayoutState:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1;
- (void)_setupLayoutStateTransitionCoordinator:(id)arg1;
- (id)window;
- (id)sceneLayoutViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

