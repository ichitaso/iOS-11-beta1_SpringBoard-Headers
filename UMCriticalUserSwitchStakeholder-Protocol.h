//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, UMUser;

@protocol UMCriticalUserSwitchStakeholder <NSObject>
- (void)readyToSwitchToUser:(UMUser *)arg1;
- (void)willSwitchToUser:(UMUser *)arg1;

@optional
- (void)userSwitchBlockingTasksDidUpdate:(NSDictionary *)arg1;
@end

