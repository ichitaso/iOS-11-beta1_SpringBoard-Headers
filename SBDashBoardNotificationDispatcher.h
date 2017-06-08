//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBAlertingNotificationDestination.h"
#import "SBDashBoardNotificationAlertingController.h"
#import "SBDashBoardNotificationDispatcher.h"

@class NSString, SBDashBoardBehavior, SBNCAlertingController;

@interface SBDashBoardNotificationDispatcher : NSObject <SBDashBoardNotificationAlertingController, SBAlertingNotificationDestination, SBDashBoardNotificationDispatcher>
{
    _Bool _active;
    id <SBDashBoardNotificationDestination> _modalDestination;
    id <SBDashBoardNotificationDestination> _listDestination;
    SBDashBoardBehavior *_activeBehavior;
    SBNCAlertingController *_alertingController;
    id <NCNotificationDestinationDelegate> _notificationDestinationDelegate;
}

@property(nonatomic) __weak id <NCNotificationDestinationDelegate> delegate; // @synthesize delegate=_notificationDestinationDelegate;
@property(nonatomic) __weak SBNCAlertingController *alertingController; // @synthesize alertingController=_alertingController;
@property(retain, nonatomic) SBDashBoardBehavior *activeBehavior; // @synthesize activeBehavior=_activeBehavior;
@property(nonatomic) __weak id <SBDashBoardNotificationDestination> listDestination; // @synthesize listDestination=_listDestination;
@property(nonatomic) __weak id <SBDashBoardNotificationDestination> modalDestination; // @synthesize modalDestination=_modalDestination;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)_clearNotificationRequestsFromDashBoard:(id)arg1;
- (void)stopAllRealerts;
- (id)notificationSectionSettingsForDestination:(id)arg1;
- (id)destination:(id)arg1 settingsForSectionIdentifier:(id)arg2;
- (id)alertingControllerForDestination:(id)arg1;
- (void)destination:(id)arg1 clearNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
- (void)destination:(id)arg1 clearNotificationRequestsInSections:(id)arg2;
- (void)destination:(id)arg1 clearNotificationRequests:(id)arg2;
- (void)destination:(id)arg1 performAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(_Bool)arg4 withParameters:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (void)updateNotificationSectionSettings:(id)arg1;
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (_Bool)canReceiveNotificationRequest:(id)arg1;
- (_Bool)interceptsQueueRequest:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

