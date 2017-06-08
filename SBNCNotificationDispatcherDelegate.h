//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NCNotificationDispatcherDelegate.h"

@class NSString, SBNotificationBannerDestination;

@interface SBNCNotificationDispatcherDelegate : NSObject <NCNotificationDispatcherDelegate>
{
    SBNotificationBannerDestination *_bannerDestination;
}

@property(nonatomic) __weak SBNotificationBannerDestination *bannerDestination; // @synthesize bannerDestination=_bannerDestination;
- (void).cxx_destruct;
- (int)_launchOriginFromDestination:(id)arg1;
- (_Bool)_isPushOrLocalNotificationRequest:(id)arg1;
- (void)_requestAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_isDeviceAuthenticated;
- (void)dispatcher:(id)arg1 launchBackgroundApplicationForAction:(id)arg2 notificationRequest:(id)arg3 fromDestination:(id)arg4 withParameters:(id)arg5;
- (void)dispatcher:(id)arg1 launchForegroundApplicationForAction:(id)arg2 notificationRequest:(id)arg3 fromDestination:(id)arg4 withParameters:(id)arg5;
- (void)dispatcher:(id)arg1 didExecuteAction:(id)arg2 forNotificationRequest:(id)arg3;
- (void)dispatcher:(id)arg1 willExecuteAction:(id)arg2 forDestination:(id)arg3 notificationRequest:(id)arg4 requestAuthentication:(_Bool)arg5 withParameters:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)dispatcher:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forDestination:(id)arg3 notificationRequest:(id)arg4 withParameters:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

