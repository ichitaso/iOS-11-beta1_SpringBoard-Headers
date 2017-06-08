//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBFloatingApplicationRootViewControllerDelegate.h"
#import "SBLayoutStateTransitionObserver.h"
#import "SBLayoutStateTransitionSceneEntityFrameProvider.h"

@class NSString, SBDeviceApplicationSceneHandle, SBFloatingApplicationRootViewController, SBLayoutStateTransitionContext;

@interface SBFloatingApplicationController : NSObject <SBFloatingApplicationRootViewControllerDelegate, SBLayoutStateTransitionObserver, SBLayoutStateTransitionSceneEntityFrameProvider>
{
    struct {
        unsigned int floatingApplicationController_needsVisibleWindow:1;
    } _internalDelegateRespondsTo;
    SBFloatingApplicationRootViewController *_viewController;
    SBLayoutStateTransitionContext *_layoutStateTransitionContext;
    id <SBFloatingApplicationControllerInternalDelegate> _internalDelegate;
}

+ (_Bool)isFloatingApplicationSupported;
@property(nonatomic, setter=_setInternalDelegate:) __weak id <SBFloatingApplicationControllerInternalDelegate> _internalDelegate; // @synthesize _internalDelegate;
- (void).cxx_destruct;
- (void)_updateWindowVisibility:(_Bool)arg1;
- (id)_deviceApplicationSceneViewController;
- (void)unstashActiveDeviceApplicationSceneHandleAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stashActiveDeviceApplicationSceneHandleAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGRect)applicationSceneSettingsFrameForInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2;
@property(nonatomic, getter=_isDeviceApplicationSceneViewControllerHidden, setter=_setDeviceApplicationSceneViewControllerHidden:) _Bool _deviceApplicationSceneViewControllerHidden;
@property(readonly, nonatomic) SBFloatingApplicationRootViewController *_viewController;
@property(readonly, nonatomic, getter=isModal) _Bool modal;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
@property(readonly, nonatomic) SBDeviceApplicationSceneHandle *activeDeviceApplicationSceneHandle;
- (void)floatingApplicationRootViewController:(id)arg1 darkenViewTappedForDeviceApplicationSceneHandle:(id)arg2;
- (_Bool)floatingApplicationRootViewController:(id)arg1 requiresGrabberTongueForDeviceApplicationSceneHandle:(id)arg2;
- (struct CGRect)sceneEntityFrameForWorkspaceEntity:(id)arg1 inLayoutState:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (id)init;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
