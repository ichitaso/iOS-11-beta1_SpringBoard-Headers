//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardParticipating.h"
#import "SBNotificationExtensionVisibilityProviding.h"

@class NCCoalescedNotification, NCNotificationRequest, NCNotificationSectionSettings;

@protocol SBDashBoardNotificationDestination <SBDashBoardParticipating, SBNotificationExtensionVisibilityProviding>
@property(nonatomic) __weak id <SBDashBoardNotificationDispatcher> dispatcher;
- (void)updateNotificationSectionSettings:(NCNotificationSectionSettings *)arg1;
- (void)withdrawNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;
- (void)updateNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;
- (void)postNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;
@end

